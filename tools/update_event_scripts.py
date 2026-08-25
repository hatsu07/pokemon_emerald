#!/usr/bin/env python3
"""
event_scripts.s更新スクリプト
incbinブロックを分割してテキスト.incファイルを組み込む
"""

import re
import sys
import argparse
from pathlib import Path

def parse_event_scripts(event_scripts_path):
    """event_scripts.sをパースしてincbinブロックを特定する"""
    with open(event_scripts_path, 'r') as f:
        content = f.read()
    
    # incbinブロックを検出
    incbin_pattern = r'\.globl\s+(\w+)\s+\1:\s+@\s+(0x[0-9A-Fa-f]+)\s+\.incbin\s+"baserom\.gba",\s+(0x[0-9A-Fa-f]+),\s+(0x[0-9A-Fa-f]+)'
    blocks = []
    
    for match in re.finditer(incbin_pattern, content):
        label = match.group(1)
        gba_addr = match.group(2)
        rom_offset = int(match.group(3), 16)
        size = int(match.group(4), 16)
        blocks.append({
            'label': label,
            'gba_addr': gba_addr,
            'rom_offset': rom_offset,
            'size': size,
            'match': match
        })
    
    return content, blocks

def find_block_for_texts(blocks, first_offset, last_offset):
    """テキスト範囲に対応するブロックを特定する"""
    for block in blocks:
        block_start = block['rom_offset']
        block_end = block_start + block['size']
        
        if block_start <= first_offset and last_offset <= block_end:
            return block
    return None

def update_event_scripts(event_scripts_path, text_file, text_range, output_path=None):
    """event_scripts.sを更新してテキスト.incを組み込む"""
    content, blocks = parse_event_scripts(event_scripts_path)
    
    first_offset, last_offset = text_range
    target_block = find_block_for_texts(blocks, first_offset, last_offset)
    
    if not target_block:
        print(f"エラー: 範囲 0x{first_offset:06x}-0x{last_offset:06x} に対応するブロックが見つかりません")
        return False
    
    # ブロックを分割
    block_start = target_block['rom_offset']
    block_end = block_start + target_block['size']
    
    # 前半: ブロック開始からテキスト開始直前まで
    before_size = first_offset - block_start
    # 後半: テキスト終了直後からブロック終了まで
    after_size = block_end - last_offset
    
    # 新しいブロック定義を作成
    new_block_def = f"""
	.globl {target_block['label']}
{target_block['label']}: @ {target_block['gba_addr']}
	.incbin "baserom.gba", 0x{block_start:06x}, 0x{before_size:x}

	@ テキスト化（Phase 2）
	.include "{text_file}"

	.globl EventScriptData_JP_08{last_offset:06X}
EventScriptData_JP_08{last_offset:06X}: @ 0x8{last_offset:06X}
	.incbin "baserom.gba", 0x{last_offset:06x}, 0x{after_size:x}
"""
    
    # 元のブロックを置換
    new_content = content[:target_block['match'].start()] + new_block_def + content[target_block['match'].end():]
    
    # 出力
    if output_path:
        with open(output_path, 'w') as f:
            f.write(new_content)
        print(f"更新完了: {output_path}")
    else:
        with open(event_scripts_path, 'w') as f:
            f.write(new_content)
        print(f"更新完了: {event_scripts_path}")
    
    return True

def main():
    parser = argparse.ArgumentParser(description='event_scripts.s更新スクリプト')
    parser.add_argument('--event-scripts', default='data/event_scripts.s', help='event_scripts.sパス')
    parser.add_argument('--text-file', required=True, help='組み込むテキスト.incファイル')
    parser.add_argument('--first-offset', type=lambda x: int(x, 16), required=True, help='テキスト開始ROMオフセット（16進数）')
    parser.add_argument('--last-offset', type=lambda x: int(x, 16), required=True, help='テキスト終了ROMオフセット（16進数）')
    parser.add_argument('--output', help='出力ファイルパス（省略時は上書き）')
    
    args = parser.parse_args()
    
    text_range = (args.first_offset, args.last_offset)
    success = update_event_scripts(args.event_scripts, args.text_file, text_range, args.output)
    
    if not success:
        sys.exit(1)

if __name__ == '__main__':
    main()
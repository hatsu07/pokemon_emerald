#!/usr/bin/env python3
"""
テキスト抽出スクリプト
Expansionのscripts.incからテキストを抽出し、日本版ROMで位置を特定して.string形式で出力する
"""

import pathlib
import subprocess
import re
import sys
import argparse

def encode_text_to_bytes(text, charmap_path, preproc_path):
    """テキストをpreprocでバイト列に変換する"""
    test_s = f'test:\n\t.string "{text}"\n'
    with open('/tmp/test_encode.s', 'w') as f:
        f.write(test_s)
    
    result = subprocess.run([preproc_path, '/tmp/test_encode.s', charmap_path],
                          capture_output=True, text=True)
    
    # バイト列を抽出
    bytes_list = []
    for line in result.stdout.strip().split('\n'):
        if '.byte' in line:
            line = line.replace('.byte', '').strip()
            for val in line.split(','):
                val = val.strip()
                if val.startswith('0x'):
                    bytes_list.append(int(val, 16))
    
    return bytes(bytes_list)

def find_text_in_rom(text_bytes, rom_path):
    """ROM内でテキストのバイト列を検索する"""
    rom = pathlib.Path(rom_path).read_bytes()
    pattern = text_bytes[:20]  # 最初の20バイトで検索
    pos = rom.find(pattern)
    return pos if pos != -1 else None

def parse_expansion_scripts(scripts_path):
    """Expansionのscripts.incからテキストをパースする"""
    texts = []
    current_label = None
    current_text = []
    
    with open(scripts_path, 'r', encoding='utf-8') as f:
        for line in f:
            # テキストラベルを検出
            label_match = re.match(r'(\w+_Text_\w+):', line)
            if label_match:
                if current_label and current_text:
                    texts.append((current_label, ''.join(current_text)))
                current_label = label_match.group(1)
                current_text = []
            
            # .string行を検出
            string_match = re.match(r'\s+\.string\s+"(.*)"', line)
            if string_match and current_label:
                text_content = string_match.group(1)
                # {JPN}プレフィックスを除去
                text_content = text_content.replace('{JPN}', '')
                current_text.append(text_content)
    
    # 最後のテキストを追加
    if current_label and current_text:
        texts.append((current_label, ''.join(current_text)))
    
    return texts

def generate_inc_file(texts_data, output_path):
    """テキストデータから.incファイルを生成する"""
    with open(output_path, 'w', encoding='utf-8') as f:
        f.write("@ Phase 2: テキスト化（日本版）\n")
        f.write("@ 文字コードは charmap.txt。.string は tools/preproc がバイト列へ変換する。\n")
        f.write("@ 各エントリの占有サイズはオリジナルROMと同じにし、後続データのアドレスを維持する。\n\n")
        
        for label, text, rom_offset, byte_count in texts_data:
            gba_addr = f"0x8{rom_offset:06x}"
            f.write(f"\t.globl gText_{label}\n")
            f.write(f"gText_{label}:: @ {gba_addr} ({byte_count} bytes)\n")
            f.write(f'\t.string "{text}"\n\n')

def main():
    parser = argparse.ArgumentParser(description='テキスト抽出スクリプト')
    parser.add_argument('--expansion-scripts', required=True, help='Expansionのscripts.incパス')
    parser.add_argument('--rom', default='baserom.gba', help='ROMファイルパス')
    parser.add_argument('--charmap', default='charmap.txt', help='charmap.txtパス')
    parser.add_argument('--preproc', default='tools/preproc/preproc', help='preproc実行ファイルパス')
    parser.add_argument('--output', required=True, help='出力.incファイルパス')
    parser.add_argument('--label-prefix', default='', help='ラベルに付けるプレフィックス')
    
    args = parser.parse_args()
    
    # Expansionのスクリプトをパース
    print(f"Expansionスクリプトをパース中: {args.expansion_scripts}")
    texts = parse_expansion_scripts(args.expansion_scripts)
    print(f"  {len(texts)} 個のテキストを検出")
    
    # 各テキストをROMで検索
    texts_data = []
    for label, text in texts:
        # print(f"  処理中: {label}")
        
        # バイト列に変換
        try:
            text_bytes = encode_text_to_bytes(text, args.charmap, args.preproc)
        except Exception as e:
            print(f"    エンコード失敗: {e}")
            continue
        
        # ROMで検索
        rom_offset = find_text_in_rom(text_bytes, args.rom)
        if rom_offset is None:
            print(f"    ROM内で見つかりません")
            continue
        
        byte_count = len(text_bytes)
        # print(f"    ROM offset: 0x{rom_offset:06x}, {byte_count} bytes")
        
        # ラベル名を調整
        adjusted_label = f"{args.label_prefix}{label}" if args.label_prefix else label
        texts_data.append((adjusted_label, text, rom_offset, byte_count))
    
    # ROMオフセット順にソート
    texts_data.sort(key=lambda x: x[2])
    
    # .incファイルを生成
    print(f"出力ファイルを生成中: {args.output}")
    generate_inc_file(texts_data, args.output)
    
    # サマリーを表示
    print(f"\n完了: {len(texts_data)} 個のテキストを抽出")
    if texts_data:
        first_offset = texts_data[0][2]
        last_offset = texts_data[-1][2] + texts_data[-1][3]
        print(f"  範囲: 0x{first_offset:06x} - 0x{last_offset:06x}")
        print(f"  合計バイト数: {sum(t[3] for t in texts_data)}")

if __name__ == '__main__':
    main()
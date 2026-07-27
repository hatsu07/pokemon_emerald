#!/usr/bin/env python3
"""
マッチング検証スクリプト
テキスト分離後のROMとオリジナルROMのSHA-1を比較する
"""

import subprocess
import hashlib
import sys
import argparse
from pathlib import Path

def calculate_sha1(file_path):
    """ファイルのSHA-1を計算する"""
    sha1 = hashlib.sha1()
    with open(file_path, 'rb') as f:
        sha1.update(f.read())
    return sha1.hexdigest()

def compare_roms(built_rom, original_rom):
    """ビルドROMとオリジナルROMを比較する"""
    built_sha1 = calculate_sha1(built_rom)
    original_sha1 = calculate_sha1(original_rom)
    
    print(f"ビルドROM SHA-1: {built_sha1}")
    print(f"オリジナルROM SHA-1: {original_sha1}")
    
    if built_sha1 == original_sha1:
        print("✓ SHA-1一致 - マッチング成功")
        return True
    else:
        print("✗ SHA-1不一致 - マッチング失敗")
        return False

def run_make_compare():
    """make compareを実行する"""
    try:
        result = subprocess.run(['make', 'compare'], capture_output=True, text=True)
        print(result.stdout)
        if result.stderr:
            print(result.stderr)
        return result.returncode == 0
    except Exception as e:
        print(f"make compare実行エラー: {e}")
        return False

def verify_text_bytes(text_file, charmap, preproc, rom):
    """テキストファイルのバイト列がROMと一致するか検証する"""
    import re
    
    # テキストファイルをパース
    with open(text_file, 'r') as f:
        content = f.read()
    
    # .string行を抽出
    string_pattern = r'\.string\s+"([^"]*)"'
    strings = re.findall(string_pattern, content)
    
    rom_data = Path(rom).read_bytes()
    all_match = True
    
    for i, text in enumerate(strings):
        # バイト列に変換
        test_s = f'test:\n\t.string "{text}"\n'
        with open('/tmp/test_verify.s', 'w') as f:
            f.write(test_s)
        
        result = subprocess.run([preproc, '/tmp/test_verify.s', charmap],
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
        
        if not bytes_list:
            print(f"  テキスト {i}: エンコード失敗")
            all_match = False
            continue
        
        text_bytes = bytes(bytes_list)
        pos = rom_data.find(text_bytes)
        
        if pos == -1:
            print(f"  テキスト {i}: ROM内で見つかりません")
            all_match = False
        else:
            print(f"  テキスト {i}: ✓ ROM offset 0x{pos:06x}")
    
    return all_match

def main():
    parser = argparse.ArgumentParser(description='マッチング検証スクリプト')
    parser.add_argument('--built-rom', default='pokeemerald_jp.gba', help='ビルドROMパス')
    parser.add_argument('--original-rom', default='baserom.gba', help='オリジナルROMパス')
    parser.add_argument('--make-compare', action='store_true', help='make compareを実行')
    parser.add_argument('--verify-text', help='特定のテキストファイルを検証')
    parser.add_argument('--charmap', default='tools/charmap.txt', help='tools/charmap.txtパス')
    parser.add_argument('--preproc', default='tools/preproc/preproc', help='preproc実行ファイルパス')
    
    args = parser.parse_args()
    
    if args.make_compare:
        print("make compareを実行中...")
        success = run_make_compare()
        sys.exit(0 if success else 1)
    
    if args.verify_text:
        print(f"テキストファイルを検証中: {args.verify_text}")
        success = verify_text_bytes(args.verify_text, args.charmap, args.preproc, args.original_rom)
        sys.exit(0 if success else 1)
    
    # デフォルト: SHA-1比較
    print("ROM SHA-1を比較中...")
    success = compare_roms(args.built_rom, args.original_rom)
    sys.exit(0 if success else 1)

if __name__ == '__main__':
    main()
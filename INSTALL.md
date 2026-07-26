# ビルド環境セットアップ

このドキュメントは、日本版『ポケットモンスター エメラルド』デコンパイルプロジェクト（pokeemerald-jp）のビルド環境構築手順です。

---

## 動作環境

| OS | 必要条件 |
|---|---|
| Linux | `build-essential`, `git`, `libpng-dev` |
| macOS | Xcode Command Line Tools |
| Windows 10 (build 18917+) | WSL2 |
| Windows 10 (1709+) | WSL |
| Windows Vista/7/8/8.1/10 (1507/1511/1607/1703) | Cygwin |

---

## 必要なパッケージ

### Linux (Debian/Ubuntu)

```sh
sudo apt install build-essential git libpng-dev
```

`build-essential` には `make`, `gcc`, `g++` が含まれます。

### macOS

```sh
xcode-select --install
```

### Windows (Cygwin)

Cygwin Setup で以下のパッケージを追加：
- `make`
- `git`
- `gcc-core`
- `gcc-g++`
- `libpng-devel`

---

## セットアップ手順

### 1. リポジトリのクローン

```sh
git clone <リポジトリURL>
cd pokeemerald-jp
```

### 2. 日本版ROMの準備

日本版『ポケットモンスター エメラルド』のROMファイルをリポジトリルートに `baserom.gba` として配置します。

**注意**: ROMファイルは著作権保護のため配布しません。自身で所有する日本版ROMを使用してください。

正しいROMであることを確認するには、以下のSHA-1ハッシュと照合します：

```sh
sha1sum baserom.gba
# d7cf8f156ba9c455d164e1ea780a6bf1945465c2  baserom.gba
```

### 3. ビルドツールのビルド

```sh
./build_tools.sh
```

このスクリプトは `tools/` 以下のビルドツール（preproc、agbcc など）をコンパイルします。

### 4. ビルド

```sh
make -j$(nproc)
```

正常に完了すると `pokeemerald_jp.gba` が生成されます。

---

## ビルド結果の確認

### Matching の確認

```sh
make compare
```

SHA-1: `d7cf8f156ba9c455d164e1ea780a6bf1945465c2` と一致すれば成功です。

### エミュレータで実行

生成された `pokeemerald_jp.gba` を GBA エミュレータで起動できます。

---

## クリーンビルド

```sh
make clean
make -j$(nproc)
```

---

## トラブルシューティング

### ビルドが失敗する場合

1. 必要なパッケージが全てインストールされているか確認
2. `./build_tools.sh` を再実行
3. `make clean && make -j$(nproc)` でクリーンビルド

### SHA-1 が一致しない場合

1. `baserom.gba` が正しいROMかを確認
2. テキスト等を編集している場合は、編集内容がバイト数を超えていないか確認
3. `make clean && make` で再ビルド

---

## 上流プロジェクト

本プロジェクトのビルドシステムは [pret/pokeemerald](https://github.com/pret/pokeemerald) から派生しています。
詳細なビルドオプションについては上流のドキュメントも参照してください。

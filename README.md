# pokeemerald-jp

日本版『ポケットモンスター エメラルド』のデコンパイル（Decompilation）プロジェクトです。

## 概要

本プロジェクトは、日本版『ポケットモンスター エメラルド』のソースコードを再構築し、オリジナルROMと同一のROMを生成できること（Matching）を目的としています。

現状、`pret/pokeemerald` および `pokeemerald-expansion` は英語版（US版）を対象としていますが、本プロジェクトでは日本版を対象とします。

最終的には、日本版をベースとしたROMハック開発の標準基盤となることを目指します。

---

## ドキュメント

| 文書 | 内容 |
|---|---|
| [docs/hacking.md](docs/hacking.md) | **ハック方法・ファイル対応表**（どれを直すと何が変わるか） |
| [docs/text_editing.md](docs/text_editing.md) | 日本語セリフ（`.string`）の編集手順 |
| [docs/text_extraction_guide.md](docs/text_extraction_guide.md) | **テキスト抽出ガイド**（自動化ツール使用方法） |
| [docs/rom_structure.md](docs/rom_structure.md) | **ROM構造ドキュメント**（incbinブロック一覧・テキスト化候補） |
| [docs/font_graphics.md](docs/font_graphics.md) | **フォント・グラフィック解析**（文字コード・フォントデータ） |
| [docs/event_scripts.md](docs/event_scripts.md) | **イベント・スクリプト仕様**（コマンド一覧・変数・フラグ） |
| [INSTALL.md](INSTALL.md) | ビルド環境（上流ドキュメント由来） |

---

## プロジェクト目標

### Phase 1 - Matching

- 日本版エメラルドの逆コンパイル
- オリジナルROMとバイナリ一致（SHA-1一致）
- ビルド環境の整備

### Phase 2 - Documentation

- ROM構造の解析
- 日本語文字コードの解析
- フォント・グラフィックの解析
- イベント・スクリプト仕様の整理
- ハック可能な箇所のドキュメント化
- **テキスト一括抽出基盤**（`tools/extract_all_text.py` + `data/text/generated/`）

### Phase 3 - Modding

日本版ROMハックを容易に行える環境を構築します。

例：

- C言語によるゲームロジック編集
- マップ追加
- イベント追加
- 新ポケモン追加
- 技・特性追加
- アイテム追加
- UI改造

---

## プロジェクト方針

本プロジェクトでは、

**「まずオリジナルを完全再現し、その上で改造する」**

ことを基本方針とします。

改造機能は Matching 完了後に別ブランチまたは別プロジェクトで実装します。

---

## 対象ROM

- Pokémon Emerald (Japan)

※ ROMファイルは著作権保護のため配布しません。

---

## 現在の進捗

### Phase 1 - Matching

- [x] ROM解析
- [x] ディレクトリ構成作成
- [x] ソースコード復元
- [x] Matching（SHA-1一致）
- [x] ビルド成功（CMake → `build/pokeemerald_jp.gba`）
- [x] エミュレータ起動確認

### Phase 2 - Documentation / テキスト基盤

- [x] 日本語文字コード表（`data/charmap/charmap.txt`）
- [x] `.string` ビルド連携（`tools/preproc` + `CMakeLists.txt`）
- [x] オダマキ博士オープニングセリフのテキスト化（`data/text/birch_speech.inc`）
- [x] セリフ参照のシンボル化（`asm/main_menu.s` → `gText_Birch_*`）
- [x] ミシロタウンNPC 3件のテキスト化（`data/text/littleroot_town.inc`）
- [x] オダマキ研究所テキスト 25件のテキスト化（`data/text/birch_lab.inc`）
- [x] ミシロタウン看板テキストのテキスト化（`data/text/littleroot_signs.inc`）
- [x] テキスト分離後の Matching 確認（CMake の `compare` ターゲット）
- [x] **テキスト一括抽出基盤（`tools/extract_all_text.py`）**
  - [x] `script_data` セクションの全通常テキストを固定アドレスで抽出（`data/text/generated/event_scripts.inc`：6,741スロット）
  - [x] `.rodata` セクションの全通常テキストを固定アドレスで抽出（`data/rodata.inc`：6,158スロット）
  - [x] 抽出結果のマニフェスト（`data/text/generated/manifest.json`）
  - [x] 抽出状態での `compare` ターゲット一致確認
- [x] ハックガイド作成（[docs/hacking.md](docs/hacking.md)）
- [x] テキスト編集ドキュメント（[docs/text_editing.md](docs/text_editing.md)）
- [x] ROM構造の網羅的ドキュメント（[docs/rom_structure.md](docs/rom_structure.md)）
- [x] フォント・グラフィック解析（[docs/font_graphics.md](docs/font_graphics.md)）
- [x] イベント・スクリプト仕様の整理（[docs/event_scripts.md](docs/event_scripts.md)）
- [x] **rodata データの分割・構造化**（`data/text/rodata/`）
  - [x] 戦闘データ（`battle/`）
  - [x] コンテストデータ（`contests/`）
  - [x] クレジットテキスト（`credits/`）
  - [x] アイテムデータ（`items/`）
  - [x] マップテキスト（`maps/`）
  - [x] メニューテキスト（`menus/`）
  - [x] 技データ（`moves/`）
  - [x] ポケモンデータ（`pokemon/`：レベルアップ技を含む）
  - [x] リボンテキスト（`ribbons/`）
- [x] **主要ゲームデータの構造化**
  - [x] ポケモン（種族値・進化・各種習得技・名前・図鑑・前後画像・パレット・アイコン）
  - [x] 技（戦闘パラメータ・名前・説明・タイプ名）
  - [x] アイテム（パラメータ・説明）
  - [x] 特性（名前・説明）
  - [x] トレーナー、野生出現、ひみつきちのもようがえ、ボール画像テーブル
- [x] `.rodata` 冒頭の機能別分割（`data/rodata/*.inc`）
- [x] ダミーウィンドウテンプレートの構造化（`sDummyWindowTemplate`、`0x0829BEB0`、8バイト）

### Phase 3 - Modding

- [ ] C化・論理編集しやすい構成
- [ ] マップ / イベント追加基盤
- [ ] ポケモン・技・アイテム等のデータ編集基盤

**最新更新**: 2026-08-03

- Phase 1 (Matching) 完了
- SHA-1: `d7cf8f156ba9c455d164e1ea780a6bf1945465c2`（オリジナルと一致）
- Phase 2: オダマキOP・ミシロタウンNPC 3件・オダマキ研究所テキスト 25件・ミシロタウン看板を `.string` 化
- **全体テキスト抽出基盤 構築完了**: `script_data`（6,741スロット）と `.rodata`（6,158スロット）の全通常テキストを `data/text/generated/*.inc` に固定アドレスで抽出
- **rodata データの分割・構造化完了**: `data/text/rodata/` 以下に戦闘・コンテスト・クレジット・アイテム・マップ・メニュー・技・ポケモン・リボンデータを分割・構造化
- **主要ゲームデータを構造化**: `data/pokemon/`、`data/moves/`、`data/items/`、`data/abilities/`、`data/trainers/`、`data/wild_encounters/`、`data/decorations/`、`data/pokeball/` に編集可能な定義を配置
- **`.rodata` の機能別分割を開始**: `data/rodata.inc` から `main`、`window`、`text`、`fonts`、`sprite` などのファイルへ分割。`sDummyWindowTemplate` は `.incbin` を使わない8バイトのフィールド定義に変換
- テキスト編集方法は [docs/text_editing.md](docs/text_editing.md) に集約
- ハック手順は [docs/hacking.md](docs/hacking.md) に集約

---

## ビルド（要約）

```sh
# 日本版ROMを baserom.gba として配置したうえで
./build_tools.sh
cmake -S . -B build
cmake --build build --parallel
cmake --build build --target compare
```

成果物: `build/pokeemerald_jp.gba`

---

## 将来的な予定

Matching 完了後、

- 日本語版 Expansion
- 日本語版 Porymap 対応
- 日本語版スクリプト環境
- 日本語版ROMハックSDK

などの開発を予定しています。

---

## 謝辞

本プロジェクトは以下の素晴らしいプロジェクトに大きく影響を受けています。

- pret/pokeemerald
- pokeemerald-expansion
- pret
- rh-hideout

また、日本国内外のROMハックコミュニティの研究成果に感謝します。

---

## ライセンス

本プロジェクトにはゲームROMは含まれません。

利用者は自身で所有する日本版『ポケットモンスター エメラルド』ROMを使用してください。

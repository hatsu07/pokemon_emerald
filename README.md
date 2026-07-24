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
- [x] ビルド成功（`make` → `pokeemerald_jp.gba`）
- [ ] エミュレータ起動確認

### Phase 2 - Documentation / テキスト基盤

- [x] 日本語文字コード表（`charmap.txt`）
- [x] `.string` ビルド連携（`tools/preproc` + `Makefile`）
- [x] オダマキ博士オープニングセリフのテキスト化（`data/text/birch_speech.inc`）
- [x] セリフ参照のシンボル化（`asm/main_menu.s` → `gText_Birch_*`）
- [x] ハックガイド作成（[docs/hacking.md](docs/hacking.md)）
- [x] テキスト編集ドキュメント（[docs/text_editing.md](docs/text_editing.md)）
- [ ] その他セリフ・名前テーブルのテキスト化
- [ ] ROM構造の網羅的ドキュメント
- [ ] フォント・グラフィック解析
- [ ] イベント・スクリプト仕様の整理

### Phase 3 - Modding

- [ ] C化・論理編集しやすい構成
- [ ] マップ / イベント追加基盤
- [ ] ポケモン・技・アイテム等のデータ編集基盤

**最新更新**: 2026-07-24

- Phase 1 (Matching) 完了
- SHA-1: `d7cf8f156ba9c455d164e1ea780a6bf1945465c2`（オリジナルと一致）
- Phase 2: オダマキOPセリフを `.string` 化。最初のセリフは `data/text/birch_speech.inc` の `gText_Birch_Welcome`
- ハック手順は [docs/hacking.md](docs/hacking.md) に集約

---

## ビルド（要約）

```sh
# 日本版ROMを baserom_jp.gba として配置したうえで
make -j$(nproc)
```

成果物: `pokeemerald_jp.gba`

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

# イベント・スクリプト仕様

このドキュメントは、日本版『ポケットモンスター エメラルド』のイベントスクリプトシステムについて説明します。

## 概要

イベントスクリプトは、ゲーム内のキャラクターの動作・会話・マップ遷移などを制御するスクリプト言語です。
`data/event_scripts.s` に定義され、`script_data` セクションに配置されます。

---

## スクリプトの構成

### データ配置

イベントスクリプトは `data/event_scripts.s` 内で以下のように定義されています：

```asm
.section script_data, "aw", %progbits
.globl gScriptCmdTable
gScriptCmdTable: @ 0x81DABAC
    .incbin "baserom.gba", 0x1dabac, 0x384
```

各ブロックは `.incbin` でROMから直接バイナリを取り込んでいます。
テキスト化が進んだブロックは `.include "data/text/*.inc"` に置き換えられています。

### ブロックの種類

| 種類 | 説明 | サイズ目安 |
|---|---|---|
| 大ブロック | 複数のマップスクリプトを含む | 10KB〜133KB |
| 中ブロック | 個別のマップスクリプト | 1KB〜10KB |
| 小ブロック | 個別の会話・メッセージ | 数バイト〜数百バイト |

---

## スクリプトコマンド

イベントスクリプトはバイトコードで記述されています。
以下は Expansion のソースから確認できる主なコマンドです：

### マップスクリプト

| コマンド | 引数 | 説明 |
|---|---|---|
| `map_script MAP_SCRIPT_ON_TRANSITION, label` | ラベル | マップ遷移時に実行 |
| `map_script MAP_SCRIPT_ON_FRAME_TABLE, label` | ラベル | フレームテーブル実行 |
| `map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, label` | ラベル | ワープ時に実行 |
| `.byte 0` | なし | 終端 |

### フロー制御

| コマンド | 説明 |
|---|---|
| `end` | スクリプト終了 |
| `return` | サブルーチン復帰 |
| `goto label` | 無条件ジャンプ |
| `call label` | サブルーチン呼び出し |
| `goto_if_eq var, value, label` | 条件付きジャンプ（等しい） |
| `goto_if_ne var, value, label` | 条件付きジャンプ（等しくない） |
| `goto_if_set flag, label` | フラグがセットされていればジャンプ |
| `goto_if_unset flag, label` | フラグがセットされていなければジャンプ |
| `call_if_eq var, value, label` | 条件付きサブルーチン呼び出し |
| `call_if_set flag, label` | フラグがセットされていれば呼び出し |
| `call_if_unset flag, label` | フラグがセットされていなければ呼び出し |

### 変数操作

| コマンド | 説明 |
|---|---|
| `setvar var, value` | 変数に値を設定 |
| `copyvar dest, src` | 変数のコピー |
| `addvar var, value` | 変数に加算 |
| `subvar var, value` | 変数から減算 |
| `setflag flag` | フラグをセット |
| `clearflag flag` | フラグをクリア |
| `checkplayergender` | プレイヤーの性別を確認（結果は VAR_RESULT に） |
| `special func_name` | 特殊関数呼び出し |

### メッセージ表示

| コマンド | 説明 |
|---|---|
| `msgbox text_label, type` | メッセージボックス表示 |
| `message text_label` | メッセージ表示（アイテム取得等） |
| `closemessage` | メッセージボックスを閉じる |
| `lock` | プレイヤー操作をロック |
| `lockall` | 全操作をロック |
| `release` | ロック解除 |
| `releaseall` | 全ロック解除 |
| `faceplayer` | 話しかけられた方向を向く |

メッセージタイプ：
| タイプ | 説明 |
|---|---|
| `MSGBOX_DEFAULT` | 通常メッセージ |
| `MSGBOX_NPC` | NPC会話（自動でfaceplayer） |
| `MSGBOX_SIGN` | 看板メッセージ |
| `MSGBOX_YESNO` | Yes/No選択肢 |
| `MSGBOX_AUTOCLOSE` | 自動で閉じる |

### オブジェクト操作

| コマンド | 説明 |
|---|---|
| `addobject localId` | オブジェクトを表示 |
| `removeobject localId` | オブジェクトを非表示 |
| `setobjectxy localId, x, y` | オブジェクトの位置を設定 |
| `setobjectxyperm localId, x, y` | オブジェクトの位置を永続的に設定 |
| `setobjectmovementtype localId, type` | オブジェクトの移動タイプを設定 |
| `applymovement localId, movement_label` | オブジェクトに移動を適用 |
| `waitmovement 0` | 移動完了を待つ |
| `hideobjectat localId, map` | オブジェクトを非表示（マップ指定） |
| `showobjectat localId, map` | オブジェクトを表示（マップ指定） |

### 移動・アニメーション

| コマンド | 説明 |
|---|---|
| `walk_up` / `walk_down` / `walk_left` / `walk_right` | 指定方向に歩く |
| `walk_fast_up` / `walk_fast_down` / `walk_fast_left` / `walk_fast_right` | 指定方向に速歩き |
| `jump_up` / `jump_down` / `jump_left` / `jump_right` | 指定方向にジャンプ |
| `face_up` / `face_down` / `face_left` / `face_right` | 指定方向を向く |
| `delay_8` / `delay_16` | 待機（8/16フレーム） |
| `set_invisible` | 非表示化 |
| `step_end` | 移動スクリプト終端 |

### サウンド・エフェクト

| コマンド | 説明 |
|---|---|
| `playse SE_xxx` | 効果音再生 |
| `playfanfare MUS_xxx` | ファンファーレ再生 |
| `waitfanfare` | ファンファーレ終了待ち |
| `delay frames` | 指定フレーム待機 |

### マップ操作

| コマンド | 説明 |
|---|---|
| `warp map, x, y` | 指定マップにワープ |
| `warpsilent map, x, y` | フェードなしワープ |
| `opendoor x, y` | ドアを開ける |
| `closedoor x, y` | ドアを閉める |
| `waitdooranim` | ドアアニメーション終了待ち |

---

## 変数・フラグ体系

### 変数

| 変数 | 用途 |
|---|---|
| `VAR_RESULT` | 関数の戻り値 |
| `VAR_0x8004` ~ `VAR_0x800A` | 汎用一時変数 |
| `VAR_LITTLEROOT_TOWN_STATE` | ミシロタウンの進行状態 |
| `VAR_LITTLEROOT_INTRO_STATE` | ゲーム開始時の進行状態 |
| `VAR_LITTLEROOT_HOUSES_STATE_MAY` | ハルカの家の状態 |
| `VAR_LITTLEROOT_HOUSES_STATE_BRENDAN` | ユウキの家の状態 |
| `VAR_LITTLEROOT_RIVAL_STATE` | ライバルの状態 |
| `VAR_OLDALE_RIVAL_STATE` | コトキタウンのライバル状態 |
| `VAR_DEX_UPGRADE_JOHTO_STARTER_STATE` | 図鑑アップグレード状態 |

### フラグ

| フラグ | 用途 |
|---|---|
| `FLAG_VISITED_LITTLEROOT_TOWN` | ミシロタウン訪問済み |
| `FLAG_RESCUED_BIRCH` | オダマキ博士を救出済み |
| `FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE` | ママを外に非表示 |
| `FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN` | 太った人を非表示 |
| `FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK` | ユウキの家のトラック非表示 |
| `FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK` | ハルカの家のトラック非表示 |
| `FLAG_HIDE_MAP_NAME_POPUP` | マップ名表示を非表示 |
| `FLAG_HIDE_OLDALE_TOWN_RIVAL` | コトキタウンのライバル非表示 |
| `FLAG_RIVAL_LEFT_FOR_ROUTE103` | ライバルが103番道路に出発 |
| `FLAG_ADVENTURE_STARTED` | 冒険開始済み |
| `FLAG_RECEIVED_RUNNING_SHOES` | ランニングシューズ受取済み |
| `FLAG_SYS_B_DASH` | Bダッシュ可能 |
| `FLAG_HIDE_LITTLEROOT_TOWN_RIVAL` | ライバル非表示 |
| `FLAG_HIDE_LITTLEROOT_TOWN_BIRCH` | オダマキ博士非表示 |

---

## マップスクリプトの構造

各マップは以下の3種類のスクリプトを持ちます：

```asm
MapName_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, MapName_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, MapName_OnFrame
    map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, MapName_OnWarp
    .byte 0

MapName_OnTransition:
    @ マップ遷移時に実行される処理
    end

MapName_OnFrame:
    @ フレーム単位で実行される処理
    map_script_2 VAR, VALUE, Label
    .2byte 0

MapName_OnWarp:
    @ ワープ時に実行される処理
    end
```

### イベントオブジェクト

NPCや看板などのイベントオブジェクトは以下のように定義されます：

```asm
MapName_EventScript_NpcName::
    lock
    faceplayer
    msgbox MapName_Text_Message, MSGBOX_DEFAULT
    release
    end

MapName_EventScript_Sign::
    msgbox MapName_Text_Sign, MSGBOX_SIGN
    end
```

---

## テキストとスクリプトの関係

### テキスト参照

スクリプトからテキストを参照する方法：

1. **msgbox コマンド**: `msgbox TextLabel, MSGBOX_DEFAULT`
2. **テキストラベル**: `MapName_Text_Description:` のように定義
3. **テキストデータ**: `data/text/*.inc` に `.string` 形式で記述

### テキスト化の流れ

1. Expansionの `scripts.inc` からテキストラベルと内容を抽出
2. `{JPN}` プレフィックスを除去
3. `data/text/*.inc` に `.string` 形式で記述
4. `data/event_scripts.s` の該当 incbin ブロックを分割
5. ビルドして Matching 確認

詳細は [text_extraction_guide.md](text_extraction_guide.md) を参照。

---

## 今後の解析項目

1. **全マップスクリプトの特定**
   - 各 incbin ブロックがどのマップに対応するか特定
   - Expansion のマップ構成との対応付け

2. **スクリプトバイトコードの解析**
   - 各コマンドのバイトコード値の特定
   - 引数のエンコード方式の解析

3. **イベントスクリプトのC言語化**
   - Phase 3 で pret/pokeemerald スタイルのC言語スクリプトに移行
   - Porymap との連携

4. **カスタムスクリプトの追加方法**
   - 新規イベントの追加手順
   - 既存イベントの改変手順

---

## 参照

- [rom_structure.md](rom_structure.md) - ROM構造ドキュメント
- [text_extraction_guide.md](text_extraction_guide.md) - テキスト抽出ガイド
- [hacking.md](hacking.md) - ハックガイド
- [PokeEm-expansion-CanuseJP/data/maps/](../PokeEm-expansion-CanuseJP/data/maps/) - Expansion スクリプト（参考）
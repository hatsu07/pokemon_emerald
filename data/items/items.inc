@ Auto-generated from baserom.gba by tools/extract_items.py
@
@ Item structure size: 0x28 bytes
@ Item count: 377
@
@ 名前は data/charmap/charmap.txt を使ってコメントへ復号します。
@ ROM完全一致を維持するため、名前本体は生バイトのまま出力します。

@ ------------------------------------------------------------------
@ Item table index: 0
@ Item name: ????????
@ ROM offset: 0x0055CEE8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_000: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NONE 			                                                 @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 1
@ Item name: マスターボール
@ ROM offset: 0x0055CF10
@ Stored item ID: 0x0001
@ ------------------------------------------------------------------
gItem_MASTER_BALL: @ マスターボール
	.byte 0x6F, 0x5D, 0x60, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MASTER_BALL                                                @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855A9D0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 2
@ Item name: ハイパーボール
@ ROM offset: 0x0055CF38
@ Stored item ID: 0x0002
@ ------------------------------------------------------------------
gItem_ULTRA_BALL: @ ハイパーボール
	.byte 0x6A, 0x52, 0x9B, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ULTRA_BALL                                                 @ itemId
	.2byte 1200                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855A9F2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000001                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 3
@ Item name: スーパーボール
@ ROM offset: 0x0055CF60
@ Stored item ID: 0x0003
@ ------------------------------------------------------------------
gItem_GREAT_BALL: @ スーパーボール
	.byte 0x5D, 0xAE, 0x9B, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_GREAT_BALL                                                 @ itemId
	.2byte 600                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AA15                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000002                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 4
@ Item name: モンスターボール
@ ROM offset: 0x0055CF88
@ Stored item ID: 0x0004
@ ------------------------------------------------------------------
gItem_POKE_BALL: @ モンスターボール
	.byte 0x73, 0x7E, 0x5D, 0x60, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0x00       @ name[10]
	.2byte ITEM_POKE_BALL                                                  @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AA39                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x03                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000003                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 5
@ Item name: サファリボール
@ ROM offset: 0x0055CFB0
@ Stored item ID: 0x0005
@ ------------------------------------------------------------------
gItem_SAFARI_BALL: @ サファリボール
	.byte 0x5B, 0x6C, 0x7F, 0x78, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SAFARI_BALL                                                @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AA50                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000004                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 6
@ Item name: ネットボール
@ ROM offset: 0x0055CFD8
@ Stored item ID: 0x0006
@ ------------------------------------------------------------------
gItem_NET_BALL: @ ネットボール
	.byte 0x68, 0xA0, 0x64, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NET_BALL                                                   @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AA71                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x05                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000005                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 7
@ Item name: ダイブボール
@ ROM offset: 0x0055D000
@ Stored item ID: 0x0007
@ ------------------------------------------------------------------
gItem_DIVE_BALL: @ ダイブボール
	.byte 0x91, 0x52, 0x98, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DIVE_BALL                                                  @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AA91                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x06                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000006                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 8
@ Item name: ネストボール
@ ROM offset: 0x0055D028
@ Stored item ID: 0x0008
@ ------------------------------------------------------------------
gItem_NEST_BALL: @ ネストボール
	.byte 0x68, 0x5D, 0x64, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NEST_BALL                                                  @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AAAF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x07                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000007                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 9
@ Item name: リピートボール
@ ROM offset: 0x0055D050
@ Stored item ID: 0x0009
@ ------------------------------------------------------------------
gItem_REPEAT_BALL: @ リピートボール
	.byte 0x78, 0x9C, 0xAE, 0x64, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_REPEAT_BALL                                                @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AAD0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x08                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000008                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 10
@ Item name: タイマーボール
@ ROM offset: 0x0055D078
@ Stored item ID: 0x000A
@ ------------------------------------------------------------------
gItem_TIMER_BALL: @ タイマーボール
	.byte 0x60, 0x52, 0x6F, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TIMER_BALL                                                 @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AAF2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x09                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x00000009                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 11
@ Item name: ゴージャスボール
@ ROM offset: 0x0055D0A0
@ Stored item ID: 0x000B
@ ------------------------------------------------------------------
gItem_LUXURY_BALL: @ ゴージャスボール
	.byte 0x8B, 0xAE, 0x8D, 0x84, 0x5D, 0x9A, 0xAE, 0x79, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LUXURY_BALL                                                @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AB13                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x0A                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x0000000A                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 12
@ Item name: プレミアボール
@ ROM offset: 0x0055D0C8
@ Stored item ID: 0x000C
@ ------------------------------------------------------------------
gItem_PREMIER_BALL: @ プレミアボール
	.byte 0x9D, 0x7A, 0x70, 0x51, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PREMIER_BALL                                               @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AB36                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x02                                                             @ pocket
	.byte 0x0B                                                             @ type
	.4byte 0x00000000                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEBE5                                                      @ field_20
	.4byte 0x0000000B                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 13
@ Item name: キズぐすり
@ ROM offset: 0x0055D0F0
@ Stored item ID: 0x000D
@ ------------------------------------------------------------------
gItem_POTION: @ キズぐすり
	.byte 0x57, 0x8E, 0x39, 0x0D, 0x28, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_POTION                                                     @ itemId
	.2byte 300                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x14                                                             @ holdEffectParam
	.4byte 0x0855AB55                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 14
@ Item name: どくけし
@ ROM offset: 0x0055D118
@ Stored item ID: 0x000E
@ ------------------------------------------------------------------
gItem_ANTIDOTE: @ どくけし
	.byte 0x45, 0x08, 0x09, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ANTIDOTE                                                   @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AB6C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 15
@ Item name: やけどなおし
@ ROM offset: 0x0055D140
@ Stored item ID: 0x000F
@ ------------------------------------------------------------------
gItem_BURN_HEAL: @ やけどなおし
	.byte 0x24, 0x09, 0x45, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BURN_HEAL                                                  @ itemId
	.2byte 250                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AB7D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 16
@ Item name: こおりなおし
@ ROM offset: 0x0055D168
@ Stored item ID: 0x0010
@ ------------------------------------------------------------------
gItem_ICE_HEAL: @ こおりなおし
	.byte 0x0A, 0x05, 0x28, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ICE_HEAL                                                   @ itemId
	.2byte 250                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AB8F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 17
@ Item name: ねむけざまし
@ ROM offset: 0x0055D190
@ Stored item ID: 0x0011
@ ------------------------------------------------------------------
gItem_AWAKENING: @ ねむけざまし
	.byte 0x18, 0x21, 0x09, 0x3C, 0x1F, 0x0C, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_AWAKENING                                                  @ itemId
	.2byte 250                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855ABA1                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 18
@ Item name: まひなおし
@ ROM offset: 0x0055D1B8
@ Stored item ID: 0x0012
@ ------------------------------------------------------------------
gItem_PARALYZE_HEAL: @ まひなおし
	.byte 0x1F, 0x1B, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PARALYZE_HEAL                                              @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855ABB3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 19
@ Item name: かいふくのくすり
@ ROM offset: 0x0055D1E0
@ Stored item ID: 0x0013
@ ------------------------------------------------------------------
gItem_FULL_RESTORE: @ かいふくのくすり
	.byte 0x06, 0x02, 0x1C, 0x08, 0x19, 0x08, 0x0D, 0x28, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FULL_RESTORE                                               @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xFF                                                             @ holdEffectParam
	.4byte 0x0855ABC4                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 20
@ Item name: まんたんのくすり
@ ROM offset: 0x0055D208
@ Stored item ID: 0x0014
@ ------------------------------------------------------------------
gItem_MAX_POTION: @ まんたんのくすり
	.byte 0x1F, 0x2E, 0x10, 0x2E, 0x19, 0x08, 0x0D, 0x28, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAX_POTION                                                 @ itemId
	.2byte 2500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xFF                                                             @ holdEffectParam
	.4byte 0x0855ABE6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 21
@ Item name: すごいキズぐすり
@ ROM offset: 0x0055D230
@ Stored item ID: 0x0015
@ ------------------------------------------------------------------
gItem_HYPER_POTION: @ すごいキズぐすり
	.byte 0x0D, 0x3B, 0x02, 0x57, 0x8E, 0x39, 0x0D, 0x28, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HYPER_POTION                                               @ itemId
	.2byte 1200                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xC8                                                             @ holdEffectParam
	.4byte 0x0855ABFC                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 22
@ Item name: いいキズぐすり
@ ROM offset: 0x0055D258
@ Stored item ID: 0x0016
@ ------------------------------------------------------------------
gItem_SUPER_POTION: @ いいキズぐすり
	.byte 0x02, 0x02, 0x57, 0x8E, 0x39, 0x0D, 0x28, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SUPER_POTION                                               @ itemId
	.2byte 700                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x32                                                             @ holdEffectParam
	.4byte 0x0855AC14                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 23
@ Item name: なんでもなおし
@ ROM offset: 0x0055D280
@ Stored item ID: 0x0017
@ ------------------------------------------------------------------
gItem_FULL_HEAL: @ なんでもなおし
	.byte 0x15, 0x2E, 0x44, 0x23, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FULL_HEAL                                                  @ itemId
	.2byte 600                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AC2B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 24
@ Item name: げんきのかけら
@ ROM offset: 0x0055D2A8
@ Stored item ID: 0x0018
@ ------------------------------------------------------------------
gItem_REVIVE: @ げんきのかけら
	.byte 0x3A, 0x2E, 0x07, 0x19, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_REVIVE                                                     @ itemId
	.2byte 1500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AC42                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 25
@ Item name: げんきのかたまり
@ ROM offset: 0x0055D2D0
@ Stored item ID: 0x0019
@ ------------------------------------------------------------------
gItem_MAX_REVIVE: @ げんきのかたまり
	.byte 0x3A, 0x2E, 0x07, 0x19, 0x06, 0x10, 0x1F, 0x28, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAX_REVIVE                                                 @ itemId
	.2byte 4000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AC62                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 26
@ Item name: おいしいみず
@ ROM offset: 0x0055D2F8
@ Stored item ID: 0x001A
@ ------------------------------------------------------------------
gItem_FRESH_WATER: @ おいしいみず
	.byte 0x05, 0x02, 0x0C, 0x02, 0x20, 0x3E, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FRESH_WATER                                                @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x32                                                             @ holdEffectParam
	.4byte 0x0855AC7E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 27
@ Item name: サイコソーダ
@ ROM offset: 0x0055D320
@ Stored item ID: 0x001B
@ ------------------------------------------------------------------
gItem_SODA_POP: @ サイコソーダ
	.byte 0x5B, 0x52, 0x5A, 0x5F, 0xAE, 0x91, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SODA_POP                                                   @ itemId
	.2byte 300                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x3C                                                             @ holdEffectParam
	.4byte 0x0855ACA2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 28
@ Item name: ミックスオレ
@ ROM offset: 0x0055D348
@ Stored item ID: 0x001C
@ ------------------------------------------------------------------
gItem_LEMONADE: @ ミックスオレ
	.byte 0x70, 0xA0, 0x58, 0x5D, 0x55, 0x7A, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LEMONADE                                                   @ itemId
	.2byte 350                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x50                                                             @ holdEffectParam
	.4byte 0x0855ACC5                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 29
@ Item name: モーモーミルク
@ ROM offset: 0x0055D370
@ Stored item ID: 0x001D
@ ------------------------------------------------------------------
gItem_MOOMOO_MILK: @ モーモーミルク
	.byte 0x73, 0xAE, 0x73, 0xAE, 0x70, 0x79, 0x58, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MOOMOO_MILK                                                @ itemId
	.2byte 500                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x64                                                             @ holdEffectParam
	.4byte 0x0855ACE6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 30
@ Item name: ちからのこな
@ ROM offset: 0x0055D398
@ Stored item ID: 0x001E
@ ------------------------------------------------------------------
gItem_ENERGY_POWDER: @ ちからのこな
	.byte 0x11, 0x06, 0x27, 0x19, 0x0A, 0x15, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ENERGY_POWDER                                              @ itemId
	.2byte 500                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AD08                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 31
@ Item name: ちからのねっこ
@ ROM offset: 0x0055D3C0
@ Stored item ID: 0x001F
@ ------------------------------------------------------------------
gItem_ENERGY_ROOT: @ ちからのねっこ
	.byte 0x11, 0x06, 0x27, 0x19, 0x18, 0x50, 0x0A, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ENERGY_ROOT                                                @ itemId
	.2byte 800                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AD2A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 32
@ Item name: ばんのうごな
@ ROM offset: 0x0055D3E8
@ Stored item ID: 0x0020
@ ------------------------------------------------------------------
gItem_HEAL_POWDER: @ ばんのうごな
	.byte 0x46, 0x2E, 0x19, 0x03, 0x3B, 0x15, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HEAL_POWDER                                                @ itemId
	.2byte 450                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AD4E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 33
@ Item name: ふっかつそう
@ ROM offset: 0x0055D410
@ Stored item ID: 0x0021
@ ------------------------------------------------------------------
gItem_REVIVAL_HERB: @ ふっかつそう
	.byte 0x1C, 0x50, 0x06, 0x12, 0x0F, 0x03, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_REVIVAL_HERB                                               @ itemId
	.2byte 2800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AD70                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 34
@ Item name: ピーピーエイド
@ ROM offset: 0x0055D438
@ Stored item ID: 0x0022
@ ------------------------------------------------------------------
gItem_ETHER: @ ピーピーエイド
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x54, 0x52, 0x95, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ETHER                                                      @ itemId
	.2byte 1200                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855AD8E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE749                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEE19                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 35
@ Item name: ピーピーリカバー
@ ROM offset: 0x0055D460
@ Stored item ID: 0x0023
@ ------------------------------------------------------------------
gItem_MAX_ETHER: @ ピーピーリカバー
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x78, 0x56, 0x96, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAX_ETHER                                                  @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xFF                                                             @ holdEffectParam
	.4byte 0x0855ADA8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE749                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEE19                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 36
@ Item name: ピーピーエイダー
@ ROM offset: 0x0055D488
@ Stored item ID: 0x0024
@ ------------------------------------------------------------------
gItem_ELIXIR: @ ピーピーエイダー
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x54, 0x52, 0x91, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ELIXIR                                                     @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855ADC1                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE749                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEE19                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 37
@ Item name: ピーピーマックス
@ ROM offset: 0x0055D4B0
@ Stored item ID: 0x0025
@ ------------------------------------------------------------------
gItem_MAX_ELIXIR: @ ピーピーマックス
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x6F, 0xA0, 0x58, 0x5D, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAX_ELIXIR                                                 @ itemId
	.2byte 4500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xFF                                                             @ holdEffectParam
	.4byte 0x0855ADDC                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE749                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEE19                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 38
@ Item name: フエンせんべい
@ ROM offset: 0x0055D4D8
@ Stored item ID: 0x0026
@ ------------------------------------------------------------------
gItem_LAVA_COOKIE: @ フエンせんべい
	.byte 0x6C, 0x54, 0x7E, 0x0E, 0x2E, 0x49, 0x02, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LAVA_COOKIE                                                @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855ADFC                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 39
@ Item name: あおいビードロ
@ ROM offset: 0x0055D500
@ Stored item ID: 0x0027
@ ------------------------------------------------------------------
gItem_BLUE_FLUTE: @ あおいビードロ
	.byte 0x01, 0x05, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BLUE_FLUTE                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AE1D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 40
@ Item name: きいろビードロ
@ ROM offset: 0x0055D528
@ Stored item ID: 0x0028
@ ------------------------------------------------------------------
gItem_YELLOW_FLUTE: @ きいろビードロ
	.byte 0x07, 0x02, 0x2B, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_YELLOW_FLUTE                                               @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AE3B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 41
@ Item name: あかいビードロ
@ ROM offset: 0x0055D550
@ Stored item ID: 0x0029
@ ------------------------------------------------------------------
gItem_RED_FLUTE: @ あかいビードロ
	.byte 0x01, 0x06, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RED_FLUTE                                                  @ itemId
	.2byte 300                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AE5A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 42
@ Item name: くろいビードロ
@ ROM offset: 0x0055D578
@ Stored item ID: 0x002A
@ ------------------------------------------------------------------
gItem_BLACK_FLUTE: @ くろいビードロ
	.byte 0x08, 0x2B, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BLACK_FLUTE                                                @ itemId
	.2byte 400                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x32                                                             @ holdEffectParam
	.4byte 0x0855AE79                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEA85                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 43
@ Item name: しろいビードロ
@ ROM offset: 0x0055D5A0
@ Stored item ID: 0x002B
@ ------------------------------------------------------------------
gItem_WHITE_FLUTE: @ しろいビードロ
	.byte 0x0C, 0x2B, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WHITE_FLUTE                                                @ itemId
	.2byte 500                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x96                                                             @ holdEffectParam
	.4byte 0x0855AE9B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEA85                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 44
@ Item name: きのみジュース
@ ROM offset: 0x0055D5C8
@ Stored item ID: 0x002C
@ ------------------------------------------------------------------
gItem_BERRY_JUICE: @ きのみジュース
	.byte 0x07, 0x19, 0x20, 0x8D, 0x85, 0xAE, 0x5D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BERRY_JUICE                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x01                                                             @ holdEffect
	.byte 0x14                                                             @ holdEffectParam
	.4byte 0x0855AEBD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 45
@ Item name: せいなるはい
@ ROM offset: 0x0055D5F0
@ Stored item ID: 0x002D
@ ------------------------------------------------------------------
gItem_SACRED_ASH: @ せいなるはい
	.byte 0x0E, 0x02, 0x15, 0x29, 0x1A, 0x02, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SACRED_ASH                                                 @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AEE1                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE72D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 46
@ Item name: あさせのしお
@ ROM offset: 0x0055D618
@ Stored item ID: 0x002E
@ ------------------------------------------------------------------
gItem_SHOAL_SALT: @ あさせのしお
	.byte 0x01, 0x0B, 0x0E, 0x19, 0x0C, 0x05, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SHOAL_SALT                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AF04                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 47
@ Item name: あさせのかいがら
@ ROM offset: 0x0055D640
@ Stored item ID: 0x002F
@ ------------------------------------------------------------------
gItem_SHOAL_SHELL: @ あさせのかいがら
	.byte 0x01, 0x0B, 0x0E, 0x19, 0x06, 0x02, 0x37, 0x27, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SHOAL_SHELL                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AF16                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 48
@ Item name: あかいかけら
@ ROM offset: 0x0055D668
@ Stored item ID: 0x0030
@ ------------------------------------------------------------------
gItem_RED_SHARD: @ あかいかけら
	.byte 0x01, 0x06, 0x02, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RED_SHARD                                                  @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AF2A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 49
@ Item name: あおいかけら
@ ROM offset: 0x0055D690
@ Stored item ID: 0x0031
@ ------------------------------------------------------------------
gItem_BLUE_SHARD: @ あおいかけら
	.byte 0x01, 0x05, 0x02, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BLUE_SHARD                                                 @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AF4A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 50
@ Item name: きいろいかけら
@ ROM offset: 0x0055D6B8
@ Stored item ID: 0x0032
@ ------------------------------------------------------------------
gItem_YELLOW_SHARD: @ きいろいかけら
	.byte 0x07, 0x02, 0x2B, 0x02, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_YELLOW_SHARD                                               @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AF6A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 51
@ Item name: みどりのかけら
@ ROM offset: 0x0055D6E0
@ Stored item ID: 0x0033
@ ------------------------------------------------------------------
gItem_GREEN_SHARD: @ みどりのかけら
	.byte 0x20, 0x45, 0x28, 0x19, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_GREEN_SHARD                                                @ itemId
	.2byte 200                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AF8A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 52
@ Item name: ????????
@ ROM offset: 0x0055D708
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_052: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 53
@ Item name: ????????
@ ROM offset: 0x0055D730
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_053: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 54
@ Item name: ????????
@ ROM offset: 0x0055D758
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_054: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 55
@ Item name: ????????
@ ROM offset: 0x0055D780
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_055: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 56
@ Item name: ????????
@ ROM offset: 0x0055D7A8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_056: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 57
@ Item name: ????????
@ ROM offset: 0x0055D7D0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_057: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 58
@ Item name: ????????
@ ROM offset: 0x0055D7F8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_058: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 59
@ Item name: ????????
@ ROM offset: 0x0055D820
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_059: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 60
@ Item name: ????????
@ ROM offset: 0x0055D848
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_060: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 61
@ Item name: ????????
@ ROM offset: 0x0055D870
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_061: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 62
@ Item name: ????????
@ ROM offset: 0x0055D898
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_062: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 63
@ Item name: マックスアップ
@ ROM offset: 0x0055D8C0
@ Stored item ID: 0x003F
@ ------------------------------------------------------------------
gItem_HP_UP: @ マックスアップ
	.byte 0x6F, 0xA0, 0x58, 0x5D, 0x51, 0xA0, 0x9D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HP_UP                                                      @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AFAA                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 64
@ Item name: タウリン
@ ROM offset: 0x0055D8E8
@ Stored item ID: 0x0040
@ ------------------------------------------------------------------
gItem_PROTEIN: @ タウリン
	.byte 0x60, 0x53, 0x78, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PROTEIN                                                    @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AFBD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 65
@ Item name: ブロムヘキシン
@ ROM offset: 0x0055D910
@ Stored item ID: 0x0041
@ ------------------------------------------------------------------
gItem_IRON: @ ブロムヘキシン
	.byte 0x98, 0x7B, 0x71, 0x6D, 0x57, 0x5C, 0x7E, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_IRON                                                       @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AFCF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 66
@ Item name: インドメタシン
@ ROM offset: 0x0055D938
@ Stored item ID: 0x0042
@ ------------------------------------------------------------------
gItem_CARBOS: @ インドメタシン
	.byte 0x52, 0x7E, 0x95, 0x72, 0x60, 0x5C, 0x7E, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CARBOS                                                     @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AFE1                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 67
@ Item name: リゾチウム
@ ROM offset: 0x0055D960
@ Stored item ID: 0x0043
@ ------------------------------------------------------------------
gItem_CALCIUM: @ リゾチウム
	.byte 0x78, 0x90, 0x61, 0x53, 0x71, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CALCIUM                                                    @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855AFF3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 68
@ Item name: ふしぎなアメ
@ ROM offset: 0x0055D988
@ Stored item ID: 0x0044
@ ------------------------------------------------------------------
gItem_RARE_CANDY: @ ふしぎなアメ
	.byte 0x1C, 0x0C, 0x38, 0x15, 0x51, 0x72, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RARE_CANDY                                                 @ itemId
	.2byte 4800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B005                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE781                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 69
@ Item name: ポイントアップ
@ ROM offset: 0x0055D9B0
@ Stored item ID: 0x0045
@ ------------------------------------------------------------------
gItem_PP_UP: @ ポイントアップ
	.byte 0x9F, 0x52, 0x7E, 0x64, 0x51, 0xA0, 0x9D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PP_UP                                                      @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B016                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE765                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 70
@ Item name: キトサン
@ ROM offset: 0x0055D9D8
@ Stored item ID: 0x0046
@ ------------------------------------------------------------------
gItem_ZINC: @ キトサン
	.byte 0x57, 0x64, 0x5B, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ZINC                                                       @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B029                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 71
@ Item name: ポイントマックス
@ ROM offset: 0x0055DA00
@ Stored item ID: 0x0047
@ ------------------------------------------------------------------
gItem_PP_MAX: @ ポイントマックス
	.byte 0x9F, 0x52, 0x7E, 0x64, 0x6F, 0xA0, 0x58, 0x5D, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PP_MAX                                                     @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B03B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE765                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 72
@ Item name: ????????
@ ROM offset: 0x0055DA28
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_072: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 73
@ Item name: エフェクトガード
@ ROM offset: 0x0055DA50
@ Stored item ID: 0x0049
@ ------------------------------------------------------------------
gItem_GUARD_SPEC: @ エフェクトガード
	.byte 0x54, 0x6C, 0x82, 0x58, 0x64, 0x87, 0xAE, 0x95, 0xFF, 0x00       @ name[10]
	.2byte ITEM_GUARD_SPEC                                                 @ itemId
	.2byte 700                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B04F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 74
@ Item name: クリティカッター
@ ROM offset: 0x0055DA78
@ Stored item ID: 0x004A
@ ------------------------------------------------------------------
gItem_DIRE_HIT: @ クリティカッター
	.byte 0x58, 0x78, 0x63, 0x80, 0x56, 0xA0, 0x60, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DIRE_HIT                                                   @ itemId
	.2byte 650                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B06F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 75
@ Item name: プラスパワー
@ ROM offset: 0x0055DAA0
@ Stored item ID: 0x004B
@ ------------------------------------------------------------------
gItem_X_ATTACK: @ プラスパワー
	.byte 0x9D, 0x77, 0x5D, 0x9B, 0x7C, 0xAE, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_X_ATTACK                                                   @ itemId
	.2byte 500                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B091                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 76
@ Item name: ディフェンダー
@ ROM offset: 0x0055DAC8
@ Stored item ID: 0x004C
@ ------------------------------------------------------------------
gItem_X_DEFEND: @ ディフェンダー
	.byte 0x94, 0x80, 0x6C, 0x82, 0x7E, 0x91, 0xAE, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_X_DEFEND                                                   @ itemId
	.2byte 550                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B0AB                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 77
@ Item name: スピーダー
@ ROM offset: 0x0055DAF0
@ Stored item ID: 0x004D
@ ------------------------------------------------------------------
gItem_X_SPEED: @ スピーダー
	.byte 0x5D, 0x9C, 0xAE, 0x91, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_X_SPEED                                                    @ itemId
	.2byte 350                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B0C5                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 78
@ Item name: ヨクアタール
@ ROM offset: 0x0055DB18
@ Stored item ID: 0x004E
@ ------------------------------------------------------------------
gItem_X_ACCURACY: @ ヨクアタール
	.byte 0x76, 0x58, 0x51, 0x60, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_X_ACCURACY                                                 @ itemId
	.2byte 950                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B0DC                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 79
@ Item name: スペシャルアップ
@ ROM offset: 0x0055DB40
@ Stored item ID: 0x004F
@ ------------------------------------------------------------------
gItem_X_SPECIAL: @ スペシャルアップ
	.byte 0x5D, 0x9E, 0x5C, 0x84, 0x79, 0x51, 0xA0, 0x9D, 0xFF, 0x00       @ name[10]
	.2byte ITEM_X_SPECIAL                                                  @ itemId
	.2byte 350                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B0F6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FED09                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 80
@ Item name: ピッピにんぎょう
@ ROM offset: 0x0055DB68
@ Stored item ID: 0x0050
@ ------------------------------------------------------------------
gItem_POKE_DOLL: @ ピッピにんぎょう
	.byte 0x9C, 0xA0, 0x9C, 0x16, 0x2E, 0x38, 0x36, 0x03, 0xFF, 0x00       @ name[10]
	.2byte ITEM_POKE_DOLL                                                  @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B113                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEE35                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 81
@ Item name: エネコのシッポ
@ ROM offset: 0x0055DB90
@ Stored item ID: 0x0051
@ ------------------------------------------------------------------
gItem_FLUFFY_TAIL: @ エネコのシッポ
	.byte 0x54, 0x68, 0x5A, 0x19, 0x5C, 0xA0, 0x9F, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FLUFFY_TAIL                                                @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B136                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000002                                                      @ field_1C
	.4byte 0x080FEE35                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 82
@ Item name: ????????
@ ROM offset: 0x0055DBB8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_082: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 83
@ Item name: シルバースプレー
@ ROM offset: 0x0055DBE0
@ Stored item ID: 0x0053
@ ------------------------------------------------------------------
gItem_SUPER_REPEL: @ シルバースプレー
	.byte 0x5C, 0x79, 0x96, 0xAE, 0x5D, 0x9D, 0x7A, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SUPER_REPEL                                                @ itemId
	.2byte 500                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xC8                                                             @ holdEffectParam
	.4byte 0x0855B159                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FE90D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 84
@ Item name: ゴールドスプレー
@ ROM offset: 0x0055DC08
@ Stored item ID: 0x0054
@ ------------------------------------------------------------------
gItem_MAX_REPEL: @ ゴールドスプレー
	.byte 0x8B, 0xAE, 0x79, 0x95, 0x5D, 0x9D, 0x7A, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAX_REPEL                                                  @ itemId
	.2byte 700                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0xFA                                                             @ holdEffectParam
	.4byte 0x0855B17B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FE90D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 85
@ Item name: あなぬけのヒモ
@ ROM offset: 0x0055DC30
@ Stored item ID: 0x0055
@ ------------------------------------------------------------------
gItem_ESCAPE_ROPE: @ あなぬけのヒモ
	.byte 0x01, 0x15, 0x17, 0x09, 0x19, 0x6B, 0x73, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ESCAPE_ROPE                                                @ itemId
	.2byte 550                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B19D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FEB85                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 86
@ Item name: むしよけスプレー
@ ROM offset: 0x0055DC58
@ Stored item ID: 0x0056
@ ------------------------------------------------------------------
gItem_REPEL: @ むしよけスプレー
	.byte 0x21, 0x0C, 0x26, 0x09, 0x5D, 0x9D, 0x7A, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_REPEL                                                      @ itemId
	.2byte 350                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x64                                                             @ holdEffectParam
	.4byte 0x0855B1B0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FE90D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 87
@ Item name: ????????
@ ROM offset: 0x0055DC80
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_087: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 88
@ Item name: ????????
@ ROM offset: 0x0055DCA8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_088: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 89
@ Item name: ????????
@ ROM offset: 0x0055DCD0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_089: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 90
@ Item name: ????????
@ ROM offset: 0x0055DCF8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_090: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 91
@ Item name: ????????
@ ROM offset: 0x0055DD20
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_091: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 92
@ Item name: ????????
@ ROM offset: 0x0055DD48
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_092: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 93
@ Item name: たいようのいし
@ ROM offset: 0x0055DD70
@ Stored item ID: 0x005D
@ ------------------------------------------------------------------
gItem_SUN_STONE: @ たいようのいし
	.byte 0x10, 0x02, 0x26, 0x03, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SUN_STONE                                                  @ itemId
	.2byte 2100                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B1D2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEBC9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 94
@ Item name: つきのいし
@ ROM offset: 0x0055DD98
@ Stored item ID: 0x005E
@ ------------------------------------------------------------------
gItem_MOON_STONE: @ つきのいし
	.byte 0x12, 0x07, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MOON_STONE                                                 @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B1E5                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEBC9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 95
@ Item name: ほのおのいし
@ ROM offset: 0x0055DDC0
@ Stored item ID: 0x005F
@ ------------------------------------------------------------------
gItem_FIRE_STONE: @ ほのおのいし
	.byte 0x1E, 0x19, 0x05, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FIRE_STONE                                                 @ itemId
	.2byte 2100                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B1F8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEBC9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 96
@ Item name: かみなりのいし
@ ROM offset: 0x0055DDE8
@ Stored item ID: 0x0060
@ ------------------------------------------------------------------
gItem_THUNDER_STONE: @ かみなりのいし
	.byte 0x06, 0x20, 0x15, 0x28, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_THUNDER_STONE                                              @ itemId
	.2byte 2100                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B20B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEBC9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 97
@ Item name: みずのいし
@ ROM offset: 0x0055DE10
@ Stored item ID: 0x0061
@ ------------------------------------------------------------------
gItem_WATER_STONE: @ みずのいし
	.byte 0x20, 0x3E, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WATER_STONE                                                @ itemId
	.2byte 2100                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B21E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEBC9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 98
@ Item name: リーフのいし
@ ROM offset: 0x0055DE38
@ Stored item ID: 0x0062
@ ------------------------------------------------------------------
gItem_LEAF_STONE: @ リーフのいし
	.byte 0x78, 0xAE, 0x6C, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LEAF_STONE                                                 @ itemId
	.2byte 2100                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B231                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FEBC9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 99
@ Item name: ????????
@ ROM offset: 0x0055DE60
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_099: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 100
@ Item name: ????????
@ ROM offset: 0x0055DE88
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_100: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 101
@ Item name: ????????
@ ROM offset: 0x0055DEB0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_101: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 102
@ Item name: ????????
@ ROM offset: 0x0055DED8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_102: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 103
@ Item name: ちいさなキノコ
@ ROM offset: 0x0055DF00
@ Stored item ID: 0x0067
@ ------------------------------------------------------------------
gItem_TINY_MUSHROOM: @ ちいさなキノコ
	.byte 0x11, 0x02, 0x0B, 0x15, 0x57, 0x69, 0x5A, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TINY_MUSHROOM                                              @ itemId
	.2byte 500                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B244                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 104
@ Item name: おおきなキノコ
@ ROM offset: 0x0055DF28
@ Stored item ID: 0x0068
@ ------------------------------------------------------------------
gItem_BIG_MUSHROOM: @ おおきなキノコ
	.byte 0x05, 0x05, 0x07, 0x15, 0x57, 0x69, 0x5A, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BIG_MUSHROOM                                               @ itemId
	.2byte 5000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B255                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 105
@ Item name: ????????
@ ROM offset: 0x0055DF50
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_105: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 106
@ Item name: しんじゅ
@ ROM offset: 0x0055DF78
@ Stored item ID: 0x006A
@ ------------------------------------------------------------------
gItem_PEARL: @ しんじゅ
	.byte 0x0C, 0x2E, 0x3D, 0x35, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PEARL                                                      @ itemId
	.2byte 1400                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B267                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 107
@ Item name: おおきなしんじゅ
@ ROM offset: 0x0055DFA0
@ Stored item ID: 0x006B
@ ------------------------------------------------------------------
gItem_BIG_PEARL: @ おおきなしんじゅ
	.byte 0x05, 0x05, 0x07, 0x15, 0x0C, 0x2E, 0x3D, 0x35, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BIG_PEARL                                                  @ itemId
	.2byte 7500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B279                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 108
@ Item name: ほしのすな
@ ROM offset: 0x0055DFC8
@ Stored item ID: 0x006C
@ ------------------------------------------------------------------
gItem_STARDUST: @ ほしのすな
	.byte 0x1E, 0x0C, 0x19, 0x0D, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_STARDUST                                                   @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B295                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 109
@ Item name: ほしのかけら
@ ROM offset: 0x0055DFF0
@ Stored item ID: 0x006D
@ ------------------------------------------------------------------
gItem_STAR_PIECE: @ ほしのかけら
	.byte 0x1E, 0x0C, 0x19, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_STAR_PIECE                                                 @ itemId
	.2byte 9800                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B2AA                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 110
@ Item name: きんのたま
@ ROM offset: 0x0055E018
@ Stored item ID: 0x006E
@ ------------------------------------------------------------------
gItem_NUGGET: @ きんのたま
	.byte 0x07, 0x2E, 0x19, 0x10, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NUGGET                                                     @ itemId
	.2byte 10000                                                           @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B2CA                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 111
@ Item name: ハートのウロコ
@ ROM offset: 0x0055E040
@ Stored item ID: 0x006F
@ ------------------------------------------------------------------
gItem_HEART_SCALE: @ ハートのウロコ
	.byte 0x6A, 0xAE, 0x64, 0x19, 0x53, 0x7B, 0x5A, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HEART_SCALE                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B2DB                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 112
@ Item name: ????????
@ ROM offset: 0x0055E068
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_112: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 113
@ Item name: ????????
@ ROM offset: 0x0055E090
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_113: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 114
@ Item name: ????????
@ ROM offset: 0x0055E0B8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_114: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 115
@ Item name: ????????
@ ROM offset: 0x0055E0E0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_115: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 116
@ Item name: ????????
@ ROM offset: 0x0055E108
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_116: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 117
@ Item name: ????????
@ ROM offset: 0x0055E130
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_117: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 118
@ Item name: ????????
@ ROM offset: 0x0055E158
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_118: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 119
@ Item name: ????????
@ ROM offset: 0x0055E180
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_119: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 120
@ Item name: ????????
@ ROM offset: 0x0055E1A8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_120: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 121
@ Item name: オレンジメール
@ ROM offset: 0x0055E1D0
@ Stored item ID: 0x0079
@ ------------------------------------------------------------------
gItem_ORANGE_MAIL: @ オレンジメール
	.byte 0x55, 0x7A, 0x7E, 0x8D, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ORANGE_MAIL                                                @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B2F7                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 122
@ Item name: ハーバーメール
@ ROM offset: 0x0055E1F8
@ Stored item ID: 0x007A
@ ------------------------------------------------------------------
gItem_HARBOR_MAIL: @ ハーバーメール
	.byte 0x6A, 0xAE, 0x96, 0xAE, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HARBOR_MAIL                                                @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B31B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000001                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 123
@ Item name: キラキラメール
@ ROM offset: 0x0055E220
@ Stored item ID: 0x007B
@ ------------------------------------------------------------------
gItem_GLITTER_MAIL: @ キラキラメール
	.byte 0x57, 0x77, 0x57, 0x77, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_GLITTER_MAIL                                               @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B33E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000002                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 124
@ Item name: メカニカルメール
@ ROM offset: 0x0055E248
@ Stored item ID: 0x007C
@ ------------------------------------------------------------------
gItem_MECH_MAIL: @ メカニカルメール
	.byte 0x72, 0x56, 0x66, 0x56, 0x79, 0x72, 0xAE, 0x79, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MECH_MAIL                                                  @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B362                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000003                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 125
@ Item name: ウッディメール
@ ROM offset: 0x0055E270
@ Stored item ID: 0x007D
@ ------------------------------------------------------------------
gItem_WOOD_MAIL: @ ウッディメール
	.byte 0x53, 0xA0, 0x94, 0x80, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WOOD_MAIL                                                  @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B384                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000004                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 126
@ Item name: クロスメール
@ ROM offset: 0x0055E298
@ Stored item ID: 0x007E
@ ------------------------------------------------------------------
gItem_WAVE_MAIL: @ クロスメール
	.byte 0x58, 0x7B, 0x5D, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WAVE_MAIL                                                  @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B3A7                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000005                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 127
@ Item name: トレジャーメール
@ ROM offset: 0x0055E2C0
@ Stored item ID: 0x007F
@ ------------------------------------------------------------------
gItem_BEAD_MAIL: @ トレジャーメール
	.byte 0x64, 0x7A, 0x8D, 0x84, 0xAE, 0x72, 0xAE, 0x79, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BEAD_MAIL                                                  @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B3CA                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000006                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 128
@ Item name: シャドーメール
@ ROM offset: 0x0055E2E8
@ Stored item ID: 0x0080
@ ------------------------------------------------------------------
gItem_SHADOW_MAIL: @ シャドーメール
	.byte 0x5C, 0x84, 0x95, 0xAE, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SHADOW_MAIL                                                @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B3E2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000007                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 129
@ Item name: トロピカルメール
@ ROM offset: 0x0055E310
@ Stored item ID: 0x0081
@ ------------------------------------------------------------------
gItem_TROPIC_MAIL: @ トロピカルメール
	.byte 0x64, 0x7B, 0x9C, 0x56, 0x79, 0x72, 0xAE, 0x79, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TROPIC_MAIL                                                @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B405                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000008                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 130
@ Item name: ドリームメール
@ ROM offset: 0x0055E338
@ Stored item ID: 0x0082
@ ------------------------------------------------------------------
gItem_DREAM_MAIL: @ ドリームメール
	.byte 0x95, 0x78, 0xAE, 0x71, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DREAM_MAIL                                                 @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B429                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000009                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 131
@ Item name: ミラクルメール
@ ROM offset: 0x0055E360
@ Stored item ID: 0x0083
@ ------------------------------------------------------------------
gItem_FAB_MAIL: @ ミラクルメール
	.byte 0x70, 0x77, 0x58, 0x79, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FAB_MAIL                                                   @ itemId
	.2byte 50                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B441                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x0000000A                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 132
@ Item name: レトロメール
@ ROM offset: 0x0055E388
@ Stored item ID: 0x0084
@ ------------------------------------------------------------------
gItem_RETRO_MAIL: @ レトロメール
	.byte 0x7A, 0x64, 0x7B, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RETRO_MAIL                                                 @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B463                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x00                                                             @ type
	.4byte 0x080FDACD                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x0000000B                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 133
@ Item name: クラボのみ
@ ROM offset: 0x0055E3B0
@ Stored item ID: 0x0085
@ ------------------------------------------------------------------
gItem_CHERI_BERRY: @ クラボのみ
	.byte 0x58, 0x77, 0x9A, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CHERI_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x02                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B486                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 134
@ Item name: カゴのみ
@ ROM offset: 0x0055E3D8
@ Stored item ID: 0x0086
@ ------------------------------------------------------------------
gItem_CHESTO_BERRY: @ カゴのみ
	.byte 0x56, 0x8B, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CHESTO_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x03                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B4A2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 135
@ Item name: モモンのみ
@ ROM offset: 0x0055E400
@ Stored item ID: 0x0087
@ ------------------------------------------------------------------
gItem_PECHA_BERRY: @ モモンのみ
	.byte 0x73, 0x73, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PECHA_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x04                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B4BF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 136
@ Item name: チーゴのみ
@ ROM offset: 0x0055E428
@ Stored item ID: 0x0088
@ ------------------------------------------------------------------
gItem_RAWST_BERRY: @ チーゴのみ
	.byte 0x61, 0xAE, 0x8B, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RAWST_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x05                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B4DB                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 137
@ Item name: ナナシのみ
@ ROM offset: 0x0055E450
@ Stored item ID: 0x0089
@ ------------------------------------------------------------------
gItem_ASPEAR_BERRY: @ ナナシのみ
	.byte 0x65, 0x65, 0x5C, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ASPEAR_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x06                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B4F8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 138
@ Item name: ヒメリのみ
@ ROM offset: 0x0055E478
@ Stored item ID: 0x008A
@ ------------------------------------------------------------------
gItem_LEPPA_BERRY: @ ヒメリのみ
	.byte 0x6B, 0x72, 0x78, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LEPPA_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x07                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855B515                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE749                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEE19                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 139
@ Item name: オレンのみ
@ ROM offset: 0x0055E4A0
@ Stored item ID: 0x008B
@ ------------------------------------------------------------------
gItem_ORAN_BERRY: @ オレンのみ
	.byte 0x55, 0x7A, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ORAN_BERRY                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x01                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855B532                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 140
@ Item name: キーのみ
@ ROM offset: 0x0055E4C8
@ Stored item ID: 0x008C
@ ------------------------------------------------------------------
gItem_PERSIM_BERRY: @ キーのみ
	.byte 0x57, 0xAE, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PERSIM_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x08                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B54E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 141
@ Item name: ラムのみ
@ ROM offset: 0x0055E4F0
@ Stored item ID: 0x008D
@ ------------------------------------------------------------------
gItem_LUM_BERRY: @ ラムのみ
	.byte 0x77, 0x71, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LUM_BERRY                                                  @ itemId
	.2byte 20                                                              @ price
	.byte 0x09                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B56C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 142
@ Item name: オボンのみ
@ ROM offset: 0x0055E518
@ Stored item ID: 0x008E
@ ------------------------------------------------------------------
gItem_SITRUS_BERRY: @ オボンのみ
	.byte 0x55, 0x9A, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SITRUS_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x01                                                             @ holdEffect
	.byte 0x1E                                                             @ holdEffectParam
	.4byte 0x0855B58A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE6F5                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEDE1                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 143
@ Item name: フィラのみ
@ ROM offset: 0x0055E540
@ Stored item ID: 0x008F
@ ------------------------------------------------------------------
gItem_FIGY_BERRY: @ フィラのみ
	.byte 0x6C, 0x80, 0x77, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FIGY_BERRY                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x0A                                                             @ holdEffect
	.byte 0x08                                                             @ holdEffectParam
	.4byte 0x0855B5A6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 144
@ Item name: ウイのみ
@ ROM offset: 0x0055E568
@ Stored item ID: 0x0090
@ ------------------------------------------------------------------
gItem_WIKI_BERRY: @ ウイのみ
	.byte 0x53, 0x52, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WIKI_BERRY                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x0B                                                             @ holdEffect
	.byte 0x08                                                             @ holdEffectParam
	.4byte 0x0855B5CA                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 145
@ Item name: マゴのみ
@ ROM offset: 0x0055E590
@ Stored item ID: 0x0091
@ ------------------------------------------------------------------
gItem_MAGO_BERRY: @ マゴのみ
	.byte 0x6F, 0x8B, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAGO_BERRY                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x0C                                                             @ holdEffect
	.byte 0x08                                                             @ holdEffectParam
	.4byte 0x0855B5EE                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 146
@ Item name: バンジのみ
@ ROM offset: 0x0055E5B8
@ Stored item ID: 0x0092
@ ------------------------------------------------------------------
gItem_AGUAV_BERRY: @ バンジのみ
	.byte 0x96, 0x7E, 0x8D, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_AGUAV_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x0D                                                             @ holdEffect
	.byte 0x08                                                             @ holdEffectParam
	.4byte 0x0855B612                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 147
@ Item name: イアのみ
@ ROM offset: 0x0055E5E0
@ Stored item ID: 0x0093
@ ------------------------------------------------------------------
gItem_IAPAPA_BERRY: @ イアのみ
	.byte 0x52, 0x51, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_IAPAPA_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x0E                                                             @ holdEffect
	.byte 0x08                                                             @ holdEffectParam
	.4byte 0x0855B636                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 148
@ Item name: ズリのみ
@ ROM offset: 0x0055E608
@ Stored item ID: 0x0094
@ ------------------------------------------------------------------
gItem_RAZZ_BERRY: @ ズリのみ
	.byte 0x8E, 0x78, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RAZZ_BERRY                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B65A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 149
@ Item name: ブリーのみ
@ ROM offset: 0x0055E630
@ Stored item ID: 0x0095
@ ------------------------------------------------------------------
gItem_BLUK_BERRY: @ ブリーのみ
	.byte 0x98, 0x78, 0xAE, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BLUK_BERRY                                                 @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B67A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 150
@ Item name: ナナのみ
@ ROM offset: 0x0055E658
@ Stored item ID: 0x0096
@ ------------------------------------------------------------------
gItem_NANAB_BERRY: @ ナナのみ
	.byte 0x65, 0x65, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NANAB_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B69B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 151
@ Item name: セシナのみ
@ ROM offset: 0x0055E680
@ Stored item ID: 0x0097
@ ------------------------------------------------------------------
gItem_WEPEAR_BERRY: @ セシナのみ
	.byte 0x5E, 0x5C, 0x65, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WEPEAR_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B6BB                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 152
@ Item name: パイルのみ
@ ROM offset: 0x0055E6A8
@ Stored item ID: 0x0098
@ ------------------------------------------------------------------
gItem_PINAP_BERRY: @ パイルのみ
	.byte 0x9B, 0x52, 0x79, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PINAP_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B6DC                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 153
@ Item name: ザロクのみ
@ ROM offset: 0x0055E6D0
@ Stored item ID: 0x0099
@ ------------------------------------------------------------------
gItem_POMEG_BERRY: @ ザロクのみ
	.byte 0x8C, 0x7B, 0x58, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_POMEG_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B6FD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE711                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 154
@ Item name: ネコブのみ
@ ROM offset: 0x0055E6F8
@ Stored item ID: 0x009A
@ ------------------------------------------------------------------
gItem_KELPSY_BERRY: @ ネコブのみ
	.byte 0x68, 0x5A, 0x98, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_KELPSY_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B71D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE711                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 155
@ Item name: タポルのみ
@ ROM offset: 0x0055E720
@ Stored item ID: 0x009B
@ ------------------------------------------------------------------
gItem_QUALOT_BERRY: @ タポルのみ
	.byte 0x60, 0x9F, 0x79, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_QUALOT_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B73F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE711                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 156
@ Item name: ロメのみ
@ ROM offset: 0x0055E748
@ Stored item ID: 0x009C
@ ------------------------------------------------------------------
gItem_HONDEW_BERRY: @ ロメのみ
	.byte 0x7B, 0x72, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HONDEW_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B761                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE711                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 157
@ Item name: ウブのみ
@ ROM offset: 0x0055E770
@ Stored item ID: 0x009D
@ ------------------------------------------------------------------
gItem_GREPA_BERRY: @ ウブのみ
	.byte 0x53, 0x98, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_GREPA_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B783                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE711                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 158
@ Item name: マトマのみ
@ ROM offset: 0x0055E798
@ Stored item ID: 0x009E
@ ------------------------------------------------------------------
gItem_TAMATO_BERRY: @ マトマのみ
	.byte 0x6F, 0x64, 0x6F, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TAMATO_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B7A5                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE711                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 159
@ Item name: モコシのみ
@ ROM offset: 0x0055E7C0
@ Stored item ID: 0x009F
@ ------------------------------------------------------------------
gItem_CORNN_BERRY: @ モコシのみ
	.byte 0x73, 0x5A, 0x5C, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CORNN_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B7C7                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 160
@ Item name: ゴスのみ
@ ROM offset: 0x0055E7E8
@ Stored item ID: 0x00A0
@ ------------------------------------------------------------------
gItem_MAGOST_BERRY: @ ゴスのみ
	.byte 0x8B, 0x5D, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAGOST_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B7E8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 161
@ Item name: ラブタのみ
@ ROM offset: 0x0055E810
@ Stored item ID: 0x00A1
@ ------------------------------------------------------------------
gItem_RABUTA_BERRY: @ ラブタのみ
	.byte 0x77, 0x98, 0x60, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_RABUTA_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B808                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 162
@ Item name: ノメルのみ
@ ROM offset: 0x0055E838
@ Stored item ID: 0x00A2
@ ------------------------------------------------------------------
gItem_NOMEL_BERRY: @ ノメルのみ
	.byte 0x69, 0x72, 0x79, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NOMEL_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B829                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 163
@ Item name: ノワキのみ
@ ROM offset: 0x0055E860
@ Stored item ID: 0x00A3
@ ------------------------------------------------------------------
gItem_SPELON_BERRY: @ ノワキのみ
	.byte 0x69, 0x7C, 0x57, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SPELON_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B84A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 164
@ Item name: シーヤのみ
@ ROM offset: 0x0055E888
@ Stored item ID: 0x00A4
@ ------------------------------------------------------------------
gItem_PAMTRE_BERRY: @ シーヤのみ
	.byte 0x5C, 0xAE, 0x74, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PAMTRE_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B86B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 165
@ Item name: カイスのみ
@ ROM offset: 0x0055E8B0
@ Stored item ID: 0x00A5
@ ------------------------------------------------------------------
gItem_WATMEL_BERRY: @ カイスのみ
	.byte 0x56, 0x52, 0x5D, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WATMEL_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B88C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 166
@ Item name: ドリのみ
@ ROM offset: 0x0055E8D8
@ Stored item ID: 0x00A6
@ ------------------------------------------------------------------
gItem_DURIN_BERRY: @ ドリのみ
	.byte 0x95, 0x78, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DURIN_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B8AD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 167
@ Item name: ベリブのみ
@ ROM offset: 0x0055E900
@ Stored item ID: 0x00A7
@ ------------------------------------------------------------------
gItem_BELUE_BERRY: @ ベリブのみ
	.byte 0x99, 0x78, 0x98, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BELUE_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B8CD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 168
@ Item name: チイラのみ
@ ROM offset: 0x0055E928
@ Stored item ID: 0x00A8
@ ------------------------------------------------------------------
gItem_LIECHI_BERRY: @ チイラのみ
	.byte 0x61, 0x52, 0x77, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LIECHI_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x0F                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B8EE                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 169
@ Item name: リュガのみ
@ ROM offset: 0x0055E950
@ Stored item ID: 0x00A9
@ ------------------------------------------------------------------
gItem_GANLON_BERRY: @ リュガのみ
	.byte 0x78, 0x85, 0x87, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_GANLON_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x10                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B908                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 170
@ Item name: カムラのみ
@ ROM offset: 0x0055E978
@ Stored item ID: 0x00AA
@ ------------------------------------------------------------------
gItem_SALAC_BERRY: @ カムラのみ
	.byte 0x56, 0x71, 0x77, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SALAC_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x11                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B922                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 171
@ Item name: ヤタピのみ
@ ROM offset: 0x0055E9A0
@ Stored item ID: 0x00AB
@ ------------------------------------------------------------------
gItem_PETAYA_BERRY: @ ヤタピのみ
	.byte 0x74, 0x60, 0x9C, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_PETAYA_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x12                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B939                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 172
@ Item name: ズアのみ
@ ROM offset: 0x0055E9C8
@ Stored item ID: 0x00AC
@ ------------------------------------------------------------------
gItem_APICOT_BERRY: @ ズアのみ
	.byte 0x8E, 0x51, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_APICOT_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x13                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B950                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 173
@ Item name: サンのみ
@ ROM offset: 0x0055E9F0
@ Stored item ID: 0x00AD
@ ------------------------------------------------------------------
gItem_LANSAT_BERRY: @ サンのみ
	.byte 0x5B, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LANSAT_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x14                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B967                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 174
@ Item name: スターのみ
@ ROM offset: 0x0055EA18
@ Stored item ID: 0x00AE
@ ------------------------------------------------------------------
gItem_STARF_BERRY: @ スターのみ
	.byte 0x5D, 0x60, 0xAE, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_STARF_BERRY                                                @ itemId
	.2byte 20                                                              @ price
	.byte 0x15                                                             @ holdEffect
	.byte 0x04                                                             @ holdEffectParam
	.4byte 0x0855B989                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 175
@ Item name: ナゾのみ
@ ROM offset: 0x0055EA40
@ Stored item ID: 0x00AF
@ ------------------------------------------------------------------
gItem_ENIGMA_BERRY: @ ナゾのみ
	.byte 0x65, 0x90, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_ENIGMA_BERRY                                               @ itemId
	.2byte 20                                                              @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B9AE                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x04                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FEEA1                                                      @ fieldUseFunc
	.4byte 0x00000001                                                      @ field_1C
	.4byte 0x080FEFCD                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 176
@ Item name: ????????
@ ROM offset: 0x0055EA68
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_176: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 177
@ Item name: ????????
@ ROM offset: 0x0055EA90
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_177: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 178
@ Item name: ????????
@ ROM offset: 0x0055EAB8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_178: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 179
@ Item name: ひかりのこな
@ ROM offset: 0x0055EAE0
@ Stored item ID: 0x00B3
@ ------------------------------------------------------------------
gItem_BRIGHT_POWDER: @ ひかりのこな
	.byte 0x1B, 0x06, 0x28, 0x19, 0x0A, 0x15, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BRIGHT_POWDER                                              @ itemId
	.2byte 10                                                              @ price
	.byte 0x16                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855B9D1                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 180
@ Item name: しろいハーブ
@ ROM offset: 0x0055EB08
@ Stored item ID: 0x00B4
@ ------------------------------------------------------------------
gItem_WHITE_HERB: @ しろいハーブ
	.byte 0x0C, 0x2B, 0x02, 0x6A, 0xAE, 0x98, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_WHITE_HERB                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x17                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855B9F4                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 181
@ Item name: きょうせいギプス
@ ROM offset: 0x0055EB30
@ Stored item ID: 0x00B5
@ ------------------------------------------------------------------
gItem_MACHO_BRACE: @ きょうせいギプス
	.byte 0x07, 0x36, 0x03, 0x0E, 0x02, 0x88, 0x9D, 0x5D, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MACHO_BRACE                                                @ itemId
	.2byte 3000                                                            @ price
	.byte 0x18                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BA13                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 182
@ Item name: がくしゅうそうち
@ ROM offset: 0x0055EB58
@ Stored item ID: 0x00B6
@ ------------------------------------------------------------------
gItem_EXP_SHARE: @ がくしゅうそうち
	.byte 0x37, 0x08, 0x0C, 0x35, 0x03, 0x0F, 0x03, 0x11, 0xFF, 0x00       @ name[10]
	.2byte ITEM_EXP_SHARE                                                  @ itemId
	.2byte 3000                                                            @ price
	.byte 0x19                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BA33                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 183
@ Item name: せんせいのツメ
@ ROM offset: 0x0055EB80
@ Stored item ID: 0x00B7
@ ------------------------------------------------------------------
gItem_QUICK_CLAW: @ せんせいのツメ
	.byte 0x0E, 0x2E, 0x0E, 0x02, 0x19, 0x62, 0x72, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_QUICK_CLAW                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x1A                                                             @ holdEffect
	.byte 0x14                                                             @ holdEffectParam
	.4byte 0x0855BA4E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 184
@ Item name: やすらぎのすず
@ ROM offset: 0x0055EBA8
@ Stored item ID: 0x00B8
@ ------------------------------------------------------------------
gItem_SOOTHE_BELL: @ やすらぎのすず
	.byte 0x24, 0x0D, 0x27, 0x38, 0x19, 0x0D, 0x3E, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SOOTHE_BELL                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x1B                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BA6D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 185
@ Item name: メンタルハーブ
@ ROM offset: 0x0055EBD0
@ Stored item ID: 0x00B9
@ ------------------------------------------------------------------
gItem_MENTAL_HERB: @ メンタルハーブ
	.byte 0x72, 0x7E, 0x60, 0x79, 0x6A, 0xAE, 0x98, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MENTAL_HERB                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x1C                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BA8F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 186
@ Item name: こだわりハチマキ
@ ROM offset: 0x0055EBF8
@ Stored item ID: 0x00BA
@ ------------------------------------------------------------------
gItem_CHOICE_BAND: @ こだわりハチマキ
	.byte 0x0A, 0x41, 0x2C, 0x28, 0x6A, 0x61, 0x6F, 0x57, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CHOICE_BAND                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x1D                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BAAF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 187
@ Item name: おうじゃのしるし
@ ROM offset: 0x0055EC20
@ Stored item ID: 0x00BB
@ ------------------------------------------------------------------
gItem_KINGS_ROCK: @ おうじゃのしるし
	.byte 0x05, 0x03, 0x3D, 0x34, 0x19, 0x0C, 0x29, 0x0C, 0xFF, 0x00       @ name[10]
	.2byte ITEM_KINGS_ROCK                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x1E                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BAD0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 188
@ Item name: ぎんのこな
@ ROM offset: 0x0055EC48
@ Stored item ID: 0x00BC
@ ------------------------------------------------------------------
gItem_SILVER_POWDER: @ ぎんのこな
	.byte 0x38, 0x2E, 0x19, 0x0A, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SILVER_POWDER                                              @ itemId
	.2byte 100                                                             @ price
	.byte 0x1F                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BAF3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 189
@ Item name: おまもりこばん
@ ROM offset: 0x0055EC70
@ Stored item ID: 0x00BD
@ ------------------------------------------------------------------
gItem_AMULET_COIN: @ おまもりこばん
	.byte 0x05, 0x1F, 0x23, 0x28, 0x0A, 0x46, 0x2E, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_AMULET_COIN                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x20                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BB13                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 190
@ Item name: きよめのおふだ
@ ROM offset: 0x0055EC98
@ Stored item ID: 0x00BE
@ ------------------------------------------------------------------
gItem_CLEANSE_TAG: @ きよめのおふだ
	.byte 0x07, 0x26, 0x22, 0x19, 0x05, 0x1C, 0x41, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CLEANSE_TAG                                                @ itemId
	.2byte 200                                                             @ price
	.byte 0x21                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BB35                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 191
@ Item name: こころのしずく
@ ROM offset: 0x0055ECC0
@ Stored item ID: 0x00BF
@ ------------------------------------------------------------------
gItem_SOUL_DEW: @ こころのしずく
	.byte 0x0A, 0x0A, 0x2B, 0x19, 0x0C, 0x3E, 0x08, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SOUL_DEW                                                   @ itemId
	.2byte 200                                                             @ price
	.byte 0x22                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BB59                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 192
@ Item name: しんかいのキバ
@ ROM offset: 0x0055ECE8
@ Stored item ID: 0x00C0
@ ------------------------------------------------------------------
gItem_DEEP_SEA_TOOTH: @ しんかいのキバ
	.byte 0x0C, 0x2E, 0x06, 0x02, 0x19, 0x57, 0x96, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DEEP_SEA_TOOTH                                             @ itemId
	.2byte 200                                                             @ price
	.byte 0x23                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BB7C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 193
@ Item name: しんかいのウロコ
@ ROM offset: 0x0055ED10
@ Stored item ID: 0x00C1
@ ------------------------------------------------------------------
gItem_DEEP_SEA_SCALE: @ しんかいのウロコ
	.byte 0x0C, 0x2E, 0x06, 0x02, 0x19, 0x53, 0x7B, 0x5A, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DEEP_SEA_SCALE                                             @ itemId
	.2byte 200                                                             @ price
	.byte 0x24                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BB9E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 194
@ Item name: けむりだま
@ ROM offset: 0x0055ED38
@ Stored item ID: 0x00C2
@ ------------------------------------------------------------------
gItem_SMOKE_BALL: @ けむりだま
	.byte 0x09, 0x21, 0x28, 0x41, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SMOKE_BALL                                                 @ itemId
	.2byte 200                                                             @ price
	.byte 0x25                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BBC0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 195
@ Item name: かわらずのいし
@ ROM offset: 0x0055ED60
@ Stored item ID: 0x00C3
@ ------------------------------------------------------------------
gItem_EVERSTONE: @ かわらずのいし
	.byte 0x06, 0x2C, 0x27, 0x3E, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_EVERSTONE                                                  @ itemId
	.2byte 200                                                             @ price
	.byte 0x26                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BBDE                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 196
@ Item name: きあいのハチマキ
@ ROM offset: 0x0055ED88
@ Stored item ID: 0x00C4
@ ------------------------------------------------------------------
gItem_FOCUS_BAND: @ きあいのハチマキ
	.byte 0x07, 0x01, 0x02, 0x19, 0x6A, 0x61, 0x6F, 0x57, 0xFF, 0x00       @ name[10]
	.2byte ITEM_FOCUS_BAND                                                 @ itemId
	.2byte 200                                                             @ price
	.byte 0x27                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BBFB                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 197
@ Item name: しあわせタマゴ
@ ROM offset: 0x0055EDB0
@ Stored item ID: 0x00C5
@ ------------------------------------------------------------------
gItem_LUCKY_EGG: @ しあわせタマゴ
	.byte 0x0C, 0x01, 0x2C, 0x0E, 0x60, 0x6F, 0x8B, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LUCKY_EGG                                                  @ itemId
	.2byte 200                                                             @ price
	.byte 0x28                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BC1B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 198
@ Item name: ピントレンズ
@ ROM offset: 0x0055EDD8
@ Stored item ID: 0x00C6
@ ------------------------------------------------------------------
gItem_SCOPE_LENS: @ ピントレンズ
	.byte 0x9C, 0x7E, 0x64, 0x7A, 0x7E, 0x8E, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SCOPE_LENS                                                 @ itemId
	.2byte 200                                                             @ price
	.byte 0x29                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BC3D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 199
@ Item name: メタルコート
@ ROM offset: 0x0055EE00
@ Stored item ID: 0x00C7
@ ------------------------------------------------------------------
gItem_METAL_COAT: @ メタルコート
	.byte 0x72, 0x60, 0x79, 0x5A, 0xAE, 0x64, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_METAL_COAT                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x2A                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BC5A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 200
@ Item name: たべのこし
@ ROM offset: 0x0055EE28
@ Stored item ID: 0x00C8
@ ------------------------------------------------------------------
gItem_LEFTOVERS: @ たべのこし
	.byte 0x10, 0x49, 0x19, 0x0A, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LEFTOVERS                                                  @ itemId
	.2byte 200                                                             @ price
	.byte 0x2B                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BC7B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 201
@ Item name: りゅうのウロコ
@ ROM offset: 0x0055EE50
@ Stored item ID: 0x00C9
@ ------------------------------------------------------------------
gItem_DRAGON_SCALE: @ りゅうのウロコ
	.byte 0x28, 0x35, 0x03, 0x19, 0x53, 0x7B, 0x5A, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DRAGON_SCALE                                               @ itemId
	.2byte 2100                                                            @ price
	.byte 0x2C                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BC9F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 202
@ Item name: でんきだま
@ ROM offset: 0x0055EE78
@ Stored item ID: 0x00CA
@ ------------------------------------------------------------------
gItem_LIGHT_BALL: @ でんきだま
	.byte 0x44, 0x2E, 0x07, 0x41, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LIGHT_BALL                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x2D                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BCBD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 203
@ Item name: やわらかいすな
@ ROM offset: 0x0055EEA0
@ Stored item ID: 0x00CB
@ ------------------------------------------------------------------
gItem_SOFT_SAND: @ やわらかいすな
	.byte 0x24, 0x2C, 0x27, 0x06, 0x02, 0x0D, 0x15, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SOFT_SAND                                                  @ itemId
	.2byte 100                                                             @ price
	.byte 0x2E                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BCE0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 204
@ Item name: かたいいし
@ ROM offset: 0x0055EEC8
@ Stored item ID: 0x00CC
@ ------------------------------------------------------------------
gItem_HARD_STONE: @ かたいいし
	.byte 0x06, 0x10, 0x02, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HARD_STONE                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x2F                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BD01                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 205
@ Item name: きせきのタネ
@ ROM offset: 0x0055EEF0
@ Stored item ID: 0x00CD
@ ------------------------------------------------------------------
gItem_MIRACLE_SEED: @ きせきのタネ
	.byte 0x07, 0x0E, 0x07, 0x19, 0x60, 0x68, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MIRACLE_SEED                                               @ itemId
	.2byte 100                                                             @ price
	.byte 0x30                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BD21                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 206
@ Item name: くろいメガネ
@ ROM offset: 0x0055EF18
@ Stored item ID: 0x00CE
@ ------------------------------------------------------------------
gItem_BLACK_GLASSES: @ くろいメガネ
	.byte 0x08, 0x2B, 0x02, 0x72, 0x87, 0x68, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BLACK_GLASSES                                              @ itemId
	.2byte 100                                                             @ price
	.byte 0x31                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BD41                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 207
@ Item name: くろおび
@ ROM offset: 0x0055EF40
@ Stored item ID: 0x00CF
@ ------------------------------------------------------------------
gItem_BLACK_BELT: @ くろおび
	.byte 0x08, 0x2B, 0x05, 0x47, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_BLACK_BELT                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x32                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BD61                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 208
@ Item name: じしゃく
@ ROM offset: 0x0055EF68
@ Stored item ID: 0x00D0
@ ------------------------------------------------------------------
gItem_MAGNET: @ じしゃく
	.byte 0x3D, 0x0C, 0x34, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MAGNET                                                     @ itemId
	.2byte 100                                                             @ price
	.byte 0x33                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BD83                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 209
@ Item name: しんぴのしずく
@ ROM offset: 0x0055EF90
@ Stored item ID: 0x00D1
@ ------------------------------------------------------------------
gItem_MYSTIC_WATER: @ しんぴのしずく
	.byte 0x0C, 0x2E, 0x4C, 0x19, 0x0C, 0x3E, 0x08, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_MYSTIC_WATER                                               @ itemId
	.2byte 100                                                             @ price
	.byte 0x34                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BDA4                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 210
@ Item name: するどいくちばし
@ ROM offset: 0x0055EFB8
@ Stored item ID: 0x00D2
@ ------------------------------------------------------------------
gItem_SHARP_BEAK: @ するどいくちばし
	.byte 0x0D, 0x29, 0x45, 0x02, 0x08, 0x11, 0x46, 0x0C, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SHARP_BEAK                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x35                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BDC4                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 211
@ Item name: どくバリ
@ ROM offset: 0x0055EFE0
@ Stored item ID: 0x00D3
@ ------------------------------------------------------------------
gItem_POISON_BARB: @ どくバリ
	.byte 0x45, 0x08, 0x96, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_POISON_BARB                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x36                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BDE5                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 212
@ Item name: とけないこおり
@ ROM offset: 0x0055F008
@ Stored item ID: 0x00D4
@ ------------------------------------------------------------------
gItem_NEVER_MELT_ICE: @ とけないこおり
	.byte 0x14, 0x09, 0x15, 0x02, 0x0A, 0x05, 0x28, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_NEVER_MELT_ICE                                             @ itemId
	.2byte 100                                                             @ price
	.byte 0x37                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BE05                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 213
@ Item name: のろいのおふだ
@ ROM offset: 0x0055F030
@ Stored item ID: 0x00D5
@ ------------------------------------------------------------------
gItem_SPELL_TAG: @ のろいのおふだ
	.byte 0x19, 0x2B, 0x02, 0x19, 0x05, 0x1C, 0x41, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SPELL_TAG                                                  @ itemId
	.2byte 100                                                             @ price
	.byte 0x38                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BE26                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 214
@ Item name: まがったスプーン
@ ROM offset: 0x0055F058
@ Stored item ID: 0x00D6
@ ------------------------------------------------------------------
gItem_TWISTED_SPOON: @ まがったスプーン
	.byte 0x1F, 0x37, 0x50, 0x10, 0x5D, 0x9D, 0xAE, 0x7E, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TWISTED_SPOON                                              @ itemId
	.2byte 100                                                             @ price
	.byte 0x39                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BE48                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 215
@ Item name: もくたん
@ ROM offset: 0x0055F080
@ Stored item ID: 0x00D7
@ ------------------------------------------------------------------
gItem_CHARCOAL: @ もくたん
	.byte 0x23, 0x08, 0x10, 0x2E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_CHARCOAL                                                   @ itemId
	.2byte 9800                                                            @ price
	.byte 0x3A                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BE6A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 216
@ Item name: りゅうのキバ
@ ROM offset: 0x0055F0A8
@ Stored item ID: 0x00D8
@ ------------------------------------------------------------------
gItem_DRAGON_FANG: @ りゅうのキバ
	.byte 0x28, 0x35, 0x03, 0x19, 0x57, 0x96, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_DRAGON_FANG                                                @ itemId
	.2byte 100                                                             @ price
	.byte 0x3B                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BE8B                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 217
@ Item name: シルクのスカーフ
@ ROM offset: 0x0055F0D0
@ Stored item ID: 0x00D9
@ ------------------------------------------------------------------
gItem_SILK_SCARF: @ シルクのスカーフ
	.byte 0x5C, 0x79, 0x58, 0x19, 0x5D, 0x56, 0xAE, 0x6C, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SILK_SCARF                                                 @ itemId
	.2byte 100                                                             @ price
	.byte 0x3C                                                             @ holdEffect
	.byte 0x0A                                                             @ holdEffectParam
	.4byte 0x0855BEAD                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 218
@ Item name: アップグレード
@ ROM offset: 0x0055F0F8
@ Stored item ID: 0x00DA
@ ------------------------------------------------------------------
gItem_UP_GRADE: @ アップグレード
	.byte 0x51, 0xA0, 0x9D, 0x89, 0x7A, 0xAE, 0x95, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_UP_GRADE                                                   @ itemId
	.2byte 2100                                                            @ price
	.byte 0x3D                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BECF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 219
@ Item name: かいがらのすず
@ ROM offset: 0x0055F120
@ Stored item ID: 0x00DB
@ ------------------------------------------------------------------
gItem_SHELL_BELL: @ かいがらのすず
	.byte 0x06, 0x02, 0x37, 0x27, 0x19, 0x0D, 0x3E, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SHELL_BELL                                                 @ itemId
	.2byte 200                                                             @ price
	.byte 0x3E                                                             @ holdEffect
	.byte 0x08                                                             @ holdEffectParam
	.4byte 0x0855BEE3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 220
@ Item name: うしおのおこう
@ ROM offset: 0x0055F148
@ Stored item ID: 0x00DC
@ ------------------------------------------------------------------
gItem_SEA_INCENSE: @ うしおのおこう
	.byte 0x03, 0x0C, 0x05, 0x19, 0x05, 0x0A, 0x03, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_SEA_INCENSE                                                @ itemId
	.2byte 9600                                                            @ price
	.byte 0x34                                                             @ holdEffect
	.byte 0x05                                                             @ holdEffectParam
	.4byte 0x0855BF06                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 221
@ Item name: のんきのおこう
@ ROM offset: 0x0055F170
@ Stored item ID: 0x00DD
@ ------------------------------------------------------------------
gItem_LAX_INCENSE: @ のんきのおこう
	.byte 0x19, 0x2E, 0x07, 0x19, 0x05, 0x0A, 0x03, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LAX_INCENSE                                                @ itemId
	.2byte 9600                                                            @ price
	.byte 0x16                                                             @ holdEffect
	.byte 0x05                                                             @ holdEffectParam
	.4byte 0x0855BF2C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 222
@ Item name: ラッキーパンチ
@ ROM offset: 0x0055F198
@ Stored item ID: 0x00DE
@ ------------------------------------------------------------------
gItem_LUCKY_PUNCH: @ ラッキーパンチ
	.byte 0x77, 0xA0, 0x57, 0xAE, 0x9B, 0x7E, 0x61, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_LUCKY_PUNCH                                                @ itemId
	.2byte 10                                                              @ price
	.byte 0x3F                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BF4F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 223
@ Item name: メタルパウダー
@ ROM offset: 0x0055F1C0
@ Stored item ID: 0x00DF
@ ------------------------------------------------------------------
gItem_METAL_POWDER: @ メタルパウダー
	.byte 0x72, 0x60, 0x79, 0x9B, 0x53, 0x91, 0xAE, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_METAL_POWDER                                               @ itemId
	.2byte 10                                                              @ price
	.byte 0x40                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BF70                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 224
@ Item name: ふといホネ
@ ROM offset: 0x0055F1E8
@ Stored item ID: 0x00E0
@ ------------------------------------------------------------------
gItem_THICK_CLUB: @ ふといホネ
	.byte 0x1C, 0x14, 0x02, 0x6E, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_THICK_CLUB                                                 @ itemId
	.2byte 500                                                             @ price
	.byte 0x41                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BF86                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 225
@ Item name: ながねぎ
@ ROM offset: 0x0055F210
@ Stored item ID: 0x00E1
@ ------------------------------------------------------------------
gItem_STICK: @ ながねぎ
	.byte 0x15, 0x37, 0x18, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_STICK                                                      @ itemId
	.2byte 200                                                             @ price
	.byte 0x42                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BFA8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 226
@ Item name: ????????
@ ROM offset: 0x0055F238
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_226: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 227
@ Item name: ????????
@ ROM offset: 0x0055F260
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_227: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 228
@ Item name: ????????
@ ROM offset: 0x0055F288
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_228: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 229
@ Item name: ????????
@ ROM offset: 0x0055F2B0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_229: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 230
@ Item name: ????????
@ ROM offset: 0x0055F2D8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_230: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 231
@ Item name: ????????
@ ROM offset: 0x0055F300
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_231: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 232
@ Item name: ????????
@ ROM offset: 0x0055F328
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_232: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 233
@ Item name: ????????
@ ROM offset: 0x0055F350
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_233: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 234
@ Item name: ????????
@ ROM offset: 0x0055F378
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_234: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 235
@ Item name: ????????
@ ROM offset: 0x0055F3A0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_235: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 236
@ Item name: ????????
@ ROM offset: 0x0055F3C8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_236: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 237
@ Item name: ????????
@ ROM offset: 0x0055F3F0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_237: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 238
@ Item name: ????????
@ ROM offset: 0x0055F418
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_238: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 239
@ Item name: ????????
@ ROM offset: 0x0055F440
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_239: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 240
@ Item name: ????????
@ ROM offset: 0x0055F468
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_240: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 241
@ Item name: ????????
@ ROM offset: 0x0055F490
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_241: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 242
@ Item name: ????????
@ ROM offset: 0x0055F4B8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_242: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 243
@ Item name: ????????
@ ROM offset: 0x0055F4E0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_243: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 244
@ Item name: ????????
@ ROM offset: 0x0055F508
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_244: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 245
@ Item name: ????????
@ ROM offset: 0x0055F530
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_245: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 246
@ Item name: ????????
@ ROM offset: 0x0055F558
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_246: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 247
@ Item name: ????????
@ ROM offset: 0x0055F580
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_247: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 248
@ Item name: ????????
@ ROM offset: 0x0055F5A8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_248: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 249
@ Item name: ????????
@ ROM offset: 0x0055F5D0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_249: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 250
@ Item name: ????????
@ ROM offset: 0x0055F5F8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_250: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 251
@ Item name: ????????
@ ROM offset: 0x0055F620
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_251: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 252
@ Item name: ????????
@ ROM offset: 0x0055F648
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_252: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 253
@ Item name: ????????
@ ROM offset: 0x0055F670
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_253: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 254
@ Item name: あかいバンダナ
@ ROM offset: 0x0055F698
@ Stored item ID: 0x00FE
@ ------------------------------------------------------------------
gItem_00FE: @ あかいバンダナ
	.byte 0x01, 0x06, 0x02, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_00FE                                                       @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BFC4                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 255
@ Item name: あおいバンダナ
@ ROM offset: 0x0055F6C0
@ Stored item ID: 0x00FF
@ ------------------------------------------------------------------
gItem_00FF: @ あおいバンダナ
	.byte 0x01, 0x05, 0x02, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_00FF                                                       @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855BFE8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 256
@ Item name: ピンクのバンダナ
@ ROM offset: 0x0055F6E8
@ Stored item ID: 0x0100
@ ------------------------------------------------------------------
gItem_0100: @ ピンクのバンダナ
	.byte 0x9C, 0x7E, 0x58, 0x19, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0100                                                       @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C00C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 257
@ Item name: みどりのバンダナ
@ ROM offset: 0x0055F710
@ Stored item ID: 0x0101
@ ------------------------------------------------------------------
gItem_0101: @ みどりのバンダナ
	.byte 0x20, 0x45, 0x28, 0x19, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0101                                                       @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C02F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 258
@ Item name: きいろのバンダナ
@ ROM offset: 0x0055F738
@ Stored item ID: 0x0102
@ ------------------------------------------------------------------
gItem_0102: @ きいろのバンダナ
	.byte 0x07, 0x02, 0x2B, 0x19, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0102                                                       @ itemId
	.2byte 100                                                             @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C052                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 259
@ Item name: マッハじてんしゃ
@ ROM offset: 0x0055F760
@ Stored item ID: 0x0103
@ ------------------------------------------------------------------
gItem_0103: @ マッハじてんしゃ
	.byte 0x6F, 0xA0, 0x6A, 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0103                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C076                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FDAED                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 260
@ Item name: コインケース
@ ROM offset: 0x0055F788
@ Stored item ID: 0x0104
@ ------------------------------------------------------------------
gItem_0104: @ コインケース
	.byte 0x5A, 0x52, 0x7E, 0x59, 0xAE, 0x5D, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0104                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C09A                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FE489                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 261
@ Item name: ダウジングマシン
@ ROM offset: 0x0055F7B0
@ Stored item ID: 0x0105
@ ------------------------------------------------------------------
gItem_0105: @ ダウジングマシン
	.byte 0x91, 0x53, 0x8D, 0x7E, 0x89, 0x6F, 0x5C, 0x7E, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0105                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C0B9                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FDCE5                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 262
@ Item name: ボロのつりざお
@ ROM offset: 0x0055F7D8
@ Stored item ID: 0x0106
@ ------------------------------------------------------------------
gItem_0106: @ ボロのつりざお
	.byte 0x9A, 0x7B, 0x19, 0x12, 0x28, 0x3C, 0x05, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0106                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C0D7                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FDC7D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 263
@ Item name: いいつりざお
@ ROM offset: 0x0055F800
@ Stored item ID: 0x0107
@ ------------------------------------------------------------------
gItem_0107: @ いいつりざお
	.byte 0x02, 0x02, 0x12, 0x28, 0x3C, 0x05, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0107                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C0F7                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FDC7D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000001                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 264
@ Item name: すごいつりざお
@ ROM offset: 0x0055F828
@ Stored item ID: 0x0108
@ ------------------------------------------------------------------
gItem_0108: @ すごいつりざお
	.byte 0x0D, 0x3B, 0x02, 0x12, 0x28, 0x3C, 0x05, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0108                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C116                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FDC7D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000002                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 265
@ Item name: ふねのチケット
@ ROM offset: 0x0055F850
@ Stored item ID: 0x0109
@ ------------------------------------------------------------------
gItem_0109: @ ふねのチケット
	.byte 0x1C, 0x18, 0x19, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0109                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C135                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 266
@ Item name: コンテストパス
@ ROM offset: 0x0055F878
@ Stored item ID: 0x010A
@ ------------------------------------------------------------------
gItem_010A: @ コンテストパス
	.byte 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x9B, 0x5D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_010A                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C147                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 267
@ Item name: ????????
@ ROM offset: 0x0055F8A0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_267: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 268
@ Item name: ホエルコじょうろ
@ ROM offset: 0x0055F8C8
@ Stored item ID: 0x010C
@ ------------------------------------------------------------------
gItem_010C: @ ホエルコじょうろ
	.byte 0x6E, 0x54, 0x79, 0x5A, 0x3D, 0x36, 0x03, 0x2B, 0xFF, 0x00       @ name[10]
	.2byte ITEM_010C                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C15F                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FE5F9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 269
@ Item name: デボンのにもつ
@ ROM offset: 0x0055F8F0
@ Stored item ID: 0x010D
@ ------------------------------------------------------------------
gItem_010D: @ デボンのにもつ
	.byte 0x94, 0x9A, 0x7E, 0x19, 0x16, 0x23, 0x12, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_010D                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C182                                                      @ description
	.byte 2                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 270
@ Item name: はいぶくろ
@ ROM offset: 0x0055F918
@ Stored item ID: 0x010E
@ ------------------------------------------------------------------
gItem_010E: @ はいぶくろ
	.byte 0x1A, 0x02, 0x48, 0x08, 0x2B, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_010E                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C1A2                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 271
@ Item name: ちかのカギ
@ ROM offset: 0x0055F940
@ Stored item ID: 0x010F
@ ------------------------------------------------------------------
gItem_010F: @ ちかのカギ
	.byte 0x11, 0x06, 0x19, 0x56, 0x88, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_010F                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C1BA                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 272
@ Item name: ダートじてんしゃ
@ ROM offset: 0x0055F968
@ Stored item ID: 0x0110
@ ------------------------------------------------------------------
gItem_0110: @ ダートじてんしゃ
	.byte 0x91, 0xAE, 0x64, 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0110                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C1DA                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FDAED                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000001                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 273
@ Item name: ポロックケース
@ ROM offset: 0x0055F990
@ Stored item ID: 0x0111
@ ------------------------------------------------------------------
gItem_0111: @ ポロックケース
	.byte 0x9F, 0x7B, 0xA0, 0x58, 0x59, 0xAE, 0x5D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0111                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C1FE                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x03                                                             @ type
	.4byte 0x080FE3C1                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 274
@ Item name: ダイゴへのてがみ
@ ROM offset: 0x0055F9B8
@ Stored item ID: 0x0112
@ ------------------------------------------------------------------
gItem_0112: @ ダイゴへのてがみ
	.byte 0x91, 0x52, 0x8B, 0x1D, 0x19, 0x13, 0x37, 0x20, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0112                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C21E                                                      @ description
	.byte 2                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 275
@ Item name: むげんのチケット
@ ROM offset: 0x0055F9E0
@ Stored item ID: 0x0113
@ ------------------------------------------------------------------
gItem_0113: @ むげんのチケット
	.byte 0x21, 0x3A, 0x2E, 0x19, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0113                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C234                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000001                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 276
@ Item name: べにいろのたま
@ ROM offset: 0x0055FA08
@ Stored item ID: 0x0114
@ ------------------------------------------------------------------
gItem_0114: @ べにいろのたま
	.byte 0x49, 0x16, 0x02, 0x2B, 0x19, 0x10, 0x1F, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0114                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C249                                                      @ description
	.byte 2                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 277
@ Item name: あいいろのたま
@ ROM offset: 0x0055FA30
@ Stored item ID: 0x0115
@ ------------------------------------------------------------------
gItem_0115: @ あいいろのたま
	.byte 0x01, 0x02, 0x02, 0x2B, 0x19, 0x10, 0x1F, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0115                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C26D                                                      @ description
	.byte 2                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 278
@ Item name: たんちき
@ ROM offset: 0x0055FA58
@ Stored item ID: 0x0116
@ ------------------------------------------------------------------
gItem_0116: @ たんちき
	.byte 0x10, 0x2E, 0x11, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0116                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C291                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 279
@ Item name: ゴーゴーゴーグル
@ ROM offset: 0x0055FA80
@ Stored item ID: 0x0117
@ ------------------------------------------------------------------
gItem_0117: @ ゴーゴーゴーグル
	.byte 0x8B, 0xAE, 0x8B, 0xAE, 0x8B, 0xAE, 0x89, 0x79, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0117                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C2A6                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 280
@ Item name: いんせき
@ ROM offset: 0x0055FAA8
@ Stored item ID: 0x0118
@ ------------------------------------------------------------------
gItem_0118: @ いんせき
	.byte 0x02, 0x2E, 0x0E, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0118                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C2C8                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 281
@ Item name: 1ごうしつのカギ
@ ROM offset: 0x0055FAD0
@ Stored item ID: 0x0119
@ ------------------------------------------------------------------
gItem_0119: @ 1ごうしつのカギ
	.byte 0xA2, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0119                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C2DD                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 282
@ Item name: 2ごうしつのカギ
@ ROM offset: 0x0055FAF8
@ Stored item ID: 0x011A
@ ------------------------------------------------------------------
gItem_011A: @ 2ごうしつのカギ
	.byte 0xA3, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00       @ name[10]
	.2byte ITEM_011A                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C2F4                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 283
@ Item name: 4ごうしつのカギ
@ ROM offset: 0x0055FB20
@ Stored item ID: 0x011B
@ ------------------------------------------------------------------
gItem_011B: @ 4ごうしつのカギ
	.byte 0xA5, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00       @ name[10]
	.2byte ITEM_011B                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C30B                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 284
@ Item name: 6ごうしつのカギ
@ ROM offset: 0x0055FB48
@ Stored item ID: 0x011C
@ ------------------------------------------------------------------
gItem_011C: @ 6ごうしつのカギ
	.byte 0xA7, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00       @ name[10]
	.2byte ITEM_011C                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C322                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 285
@ Item name: そうこのカギ
@ ROM offset: 0x0055FB70
@ Stored item ID: 0x011D
@ ------------------------------------------------------------------
gItem_011D: @ そうこのカギ
	.byte 0x0F, 0x03, 0x0A, 0x19, 0x56, 0x88, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_011D                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C339                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 286
@ Item name: ねっこのカセキ
@ ROM offset: 0x0055FB98
@ Stored item ID: 0x011E
@ ------------------------------------------------------------------
gItem_011E: @ ねっこのカセキ
	.byte 0x18, 0x50, 0x0A, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_011E                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C351                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 287
@ Item name: ツメのカセキ
@ ROM offset: 0x0055FBC0
@ Stored item ID: 0x011F
@ ------------------------------------------------------------------
gItem_011F: @ ツメのカセキ
	.byte 0x62, 0x72, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_011F                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C376                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 288
@ Item name: デボンスコープ
@ ROM offset: 0x0055FBE8
@ Stored item ID: 0x0120
@ ------------------------------------------------------------------
gItem_0120: @ デボンスコープ
	.byte 0x94, 0x9A, 0x7E, 0x5D, 0x5A, 0xAE, 0x9D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0120                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C39B                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 289
@ Item name: わざマシン01
@ ROM offset: 0x0055FC10
@ Stored item ID: 0x0121
@ ------------------------------------------------------------------
gItem_TM01: @ わざマシン01
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA2, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM01                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C3BF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 290
@ Item name: わざマシン02
@ ROM offset: 0x0055FC38
@ Stored item ID: 0x0122
@ ------------------------------------------------------------------
gItem_TM02: @ わざマシン02
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA3, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM02                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C3E4                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 291
@ Item name: わざマシン03
@ ROM offset: 0x0055FC60
@ Stored item ID: 0x0123
@ ------------------------------------------------------------------
gItem_TM03: @ わざマシン03
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA4, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM03                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C402                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 292
@ Item name: わざマシン04
@ ROM offset: 0x0055FC88
@ Stored item ID: 0x0124
@ ------------------------------------------------------------------
gItem_TM04: @ わざマシン04
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA5, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM04                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C421                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 293
@ Item name: わざマシン05
@ ROM offset: 0x0055FCB0
@ Stored item ID: 0x0125
@ ------------------------------------------------------------------
gItem_TM05: @ わざマシン05
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA6, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM05                                                       @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C442                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 294
@ Item name: わざマシン06
@ ROM offset: 0x0055FCD8
@ Stored item ID: 0x0126
@ ------------------------------------------------------------------
gItem_TM06: @ わざマシン06
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA7, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM06                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C461                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 295
@ Item name: わざマシン07
@ ROM offset: 0x0055FD00
@ Stored item ID: 0x0127
@ ------------------------------------------------------------------
gItem_TM07: @ わざマシン07
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA8, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM07                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C480                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 296
@ Item name: わざマシン08
@ ROM offset: 0x0055FD28
@ Stored item ID: 0x0128
@ ------------------------------------------------------------------
gItem_TM08: @ わざマシン08
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA9, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM08                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C4A1                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 297
@ Item name: わざマシン09
@ ROM offset: 0x0055FD50
@ Stored item ID: 0x0129
@ ------------------------------------------------------------------
gItem_TM09: @ わざマシン09
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xAA, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM09                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C4C0                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 298
@ Item name: わざマシン10
@ ROM offset: 0x0055FD78
@ Stored item ID: 0x012A
@ ------------------------------------------------------------------
gItem_TM10: @ わざマシン10
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA1, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM10                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C4E2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 299
@ Item name: わざマシン11
@ ROM offset: 0x0055FDA0
@ Stored item ID: 0x012B
@ ------------------------------------------------------------------
gItem_TM11: @ わざマシン11
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA2, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM11                                                       @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C505                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 300
@ Item name: わざマシン12
@ ROM offset: 0x0055FDC8
@ Stored item ID: 0x012C
@ ------------------------------------------------------------------
gItem_TM12: @ わざマシン12
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA3, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM12                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C524                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 301
@ Item name: わざマシン13
@ ROM offset: 0x0055FDF0
@ Stored item ID: 0x012D
@ ------------------------------------------------------------------
gItem_TM13: @ わざマシン13
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA4, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM13                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C545                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 302
@ Item name: わざマシン14
@ ROM offset: 0x0055FE18
@ Stored item ID: 0x012E
@ ------------------------------------------------------------------
gItem_TM14: @ わざマシン14
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA5, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM14                                                       @ itemId
	.2byte 5500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C568                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 303
@ Item name: わざマシン15
@ ROM offset: 0x0055FE40
@ Stored item ID: 0x012F
@ ------------------------------------------------------------------
gItem_TM15: @ わざマシン15
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA6, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM15                                                       @ itemId
	.2byte 7500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C58A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 304
@ Item name: わざマシン16
@ ROM offset: 0x0055FE68
@ Stored item ID: 0x0130
@ ------------------------------------------------------------------
gItem_TM16: @ わざマシン16
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA7, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM16                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C5AF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 305
@ Item name: わざマシン17
@ ROM offset: 0x0055FE90
@ Stored item ID: 0x0131
@ ------------------------------------------------------------------
gItem_TM17: @ わざマシン17
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA8, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM17                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C5CC                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 306
@ Item name: わざマシン18
@ ROM offset: 0x0055FEB8
@ Stored item ID: 0x0132
@ ------------------------------------------------------------------
gItem_TM18: @ わざマシン18
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA9, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM18                                                       @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C5F3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 307
@ Item name: わざマシン19
@ ROM offset: 0x0055FEE0
@ Stored item ID: 0x0133
@ ------------------------------------------------------------------
gItem_TM19: @ わざマシン19
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xAA, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM19                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C611                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 308
@ Item name: わざマシン20
@ ROM offset: 0x0055FF08
@ Stored item ID: 0x0134
@ ------------------------------------------------------------------
gItem_TM20: @ わざマシン20
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA1, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM20                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C632                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 309
@ Item name: わざマシン21
@ ROM offset: 0x0055FF30
@ Stored item ID: 0x0135
@ ------------------------------------------------------------------
gItem_TM21: @ わざマシン21
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA2, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM21                                                       @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C653                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 310
@ Item name: わざマシン22
@ ROM offset: 0x0055FF58
@ Stored item ID: 0x0136
@ ------------------------------------------------------------------
gItem_TM22: @ わざマシン22
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA3, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM22                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C673                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 311
@ Item name: わざマシン23
@ ROM offset: 0x0055FF80
@ Stored item ID: 0x0137
@ ------------------------------------------------------------------
gItem_TM23: @ わざマシン23
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA4, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM23                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C698                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 312
@ Item name: わざマシン24
@ ROM offset: 0x0055FFA8
@ Stored item ID: 0x0138
@ ------------------------------------------------------------------
gItem_TM24: @ わざマシン24
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA5, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM24                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C6B9                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 313
@ Item name: わざマシン25
@ ROM offset: 0x0055FFD0
@ Stored item ID: 0x0139
@ ------------------------------------------------------------------
gItem_TM25: @ わざマシン25
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA6, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM25                                                       @ itemId
	.2byte 5500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C6D9                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 314
@ Item name: わざマシン26
@ ROM offset: 0x0055FFF8
@ Stored item ID: 0x013A
@ ------------------------------------------------------------------
gItem_TM26: @ わざマシン26
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA7, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM26                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C6F8                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 315
@ Item name: わざマシン27
@ ROM offset: 0x00560020
@ Stored item ID: 0x013B
@ ------------------------------------------------------------------
gItem_TM27: @ わざマシン27
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA8, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM27                                                       @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C71F                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 316
@ Item name: わざマシン28
@ ROM offset: 0x00560048
@ Stored item ID: 0x013C
@ ------------------------------------------------------------------
gItem_TM28: @ わざマシン28
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA9, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM28                                                       @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C73E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 317
@ Item name: わざマシン29
@ ROM offset: 0x00560070
@ Stored item ID: 0x013D
@ ------------------------------------------------------------------
gItem_TM29: @ わざマシン29
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xAA, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM29                                                       @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C761                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 318
@ Item name: わざマシン30
@ ROM offset: 0x00560098
@ Stored item ID: 0x013E
@ ------------------------------------------------------------------
gItem_TM30: @ わざマシン30
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA1, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM30                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C782                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 319
@ Item name: わざマシン31
@ ROM offset: 0x005600C0
@ Stored item ID: 0x013F
@ ------------------------------------------------------------------
gItem_TM31: @ わざマシン31
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA2, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM31                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C7A3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 320
@ Item name: わざマシン32
@ ROM offset: 0x005600E8
@ Stored item ID: 0x0140
@ ------------------------------------------------------------------
gItem_TM32: @ わざマシン32
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA3, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM32                                                       @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C7C6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 321
@ Item name: わざマシン33
@ ROM offset: 0x00560110
@ Stored item ID: 0x0141
@ ------------------------------------------------------------------
gItem_TM33: @ わざマシン33
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA4, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM33                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C7E6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 322
@ Item name: わざマシン34
@ ROM offset: 0x00560138
@ Stored item ID: 0x0142
@ ------------------------------------------------------------------
gItem_TM34: @ わざマシン34
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA5, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM34                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C807                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 323
@ Item name: わざマシン35
@ ROM offset: 0x00560160
@ Stored item ID: 0x0143
@ ------------------------------------------------------------------
gItem_TM35: @ わざマシン35
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA6, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM35                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C829                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 324
@ Item name: わざマシン36
@ ROM offset: 0x00560188
@ Stored item ID: 0x0144
@ ------------------------------------------------------------------
gItem_TM36: @ わざマシン36
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA7, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM36                                                       @ itemId
	.2byte 1000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C84A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 325
@ Item name: わざマシン37
@ ROM offset: 0x005601B0
@ Stored item ID: 0x0145
@ ------------------------------------------------------------------
gItem_TM37: @ わざマシン37
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA8, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM37                                                       @ itemId
	.2byte 2000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C86D                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 326
@ Item name: わざマシン38
@ ROM offset: 0x005601D8
@ Stored item ID: 0x0146
@ ------------------------------------------------------------------
gItem_TM38: @ わざマシン38
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA9, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM38                                                       @ itemId
	.2byte 5500                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C88E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 327
@ Item name: わざマシン39
@ ROM offset: 0x00560200
@ Stored item ID: 0x0147
@ ------------------------------------------------------------------
gItem_TM39: @ わざマシン39
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xAA, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM39                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C8B3                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 328
@ Item name: わざマシン40
@ ROM offset: 0x00560228
@ Stored item ID: 0x0148
@ ------------------------------------------------------------------
gItem_TM40: @ わざマシン40
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA1, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM40                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C8D6                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 329
@ Item name: わざマシン41
@ ROM offset: 0x00560250
@ Stored item ID: 0x0149
@ ------------------------------------------------------------------
gItem_TM41: @ わざマシン41
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA2, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM41                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C8F7                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 330
@ Item name: わざマシン42
@ ROM offset: 0x00560278
@ Stored item ID: 0x014A
@ ------------------------------------------------------------------
gItem_TM42: @ わざマシン42
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA3, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM42                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C913                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 331
@ Item name: わざマシン43
@ ROM offset: 0x005602A0
@ Stored item ID: 0x014B
@ ------------------------------------------------------------------
gItem_TM43: @ わざマシン43
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA4, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM43                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C937                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 332
@ Item name: わざマシン44
@ ROM offset: 0x005602C8
@ Stored item ID: 0x014C
@ ------------------------------------------------------------------
gItem_TM44: @ わざマシン44
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA5, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM44                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C95A                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 333
@ Item name: わざマシン45
@ ROM offset: 0x005602F0
@ Stored item ID: 0x014D
@ ------------------------------------------------------------------
gItem_TM45: @ わざマシン45
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA6, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM45                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C97E                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 334
@ Item name: わざマシン46
@ ROM offset: 0x00560318
@ Stored item ID: 0x014E
@ ------------------------------------------------------------------
gItem_TM46: @ わざマシン46
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA7, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM46                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C99C                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 335
@ Item name: わざマシン47
@ ROM offset: 0x00560340
@ Stored item ID: 0x014F
@ ------------------------------------------------------------------
gItem_TM47: @ わざマシン47
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA8, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM47                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C9BF                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 336
@ Item name: わざマシン48
@ ROM offset: 0x00560368
@ Stored item ID: 0x0150
@ ------------------------------------------------------------------
gItem_TM48: @ わざマシン48
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA9, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM48                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855C9E2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 337
@ Item name: わざマシン49
@ ROM offset: 0x00560390
@ Stored item ID: 0x0151
@ ------------------------------------------------------------------
gItem_TM49: @ わざマシン49
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xAA, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM49                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CA04                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 338
@ Item name: わざマシン50
@ ROM offset: 0x005603B8
@ Stored item ID: 0x0152
@ ------------------------------------------------------------------
gItem_TM50: @ わざマシン50
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA6, 0xA1, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM50                                                       @ itemId
	.2byte 3000                                                            @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CA22                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 339
@ Item name: ひでんマシン01
@ ROM offset: 0x005603E0
@ Stored item ID: 0x0153
@ ------------------------------------------------------------------
gItem_HM01: @ ひでんマシン01
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA2, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM01                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CA46                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 340
@ Item name: ひでんマシン02
@ ROM offset: 0x00560408
@ Stored item ID: 0x0154
@ ------------------------------------------------------------------
gItem_HM02: @ ひでんマシン02
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA3, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM02                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CA69                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 341
@ Item name: ひでんマシン03
@ ROM offset: 0x00560430
@ Stored item ID: 0x0155
@ ------------------------------------------------------------------
gItem_HM03: @ ひでんマシン03
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA4, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM03                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CA8A                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 342
@ Item name: ひでんマシン04
@ ROM offset: 0x00560458
@ Stored item ID: 0x0156
@ ------------------------------------------------------------------
gItem_HM04: @ ひでんマシン04
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA5, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM04                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CAAC                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 343
@ Item name: ひでんマシン05
@ ROM offset: 0x00560480
@ Stored item ID: 0x0157
@ ------------------------------------------------------------------
gItem_HM05: @ ひでんマシン05
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA6, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM05                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CACD                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 344
@ Item name: ひでんマシン06
@ ROM offset: 0x005604A8
@ Stored item ID: 0x0158
@ ------------------------------------------------------------------
gItem_HM06: @ ひでんマシン06
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA7, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM06                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CAF0                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 345
@ Item name: ひでんマシン07
@ ROM offset: 0x005604D0
@ Stored item ID: 0x0159
@ ------------------------------------------------------------------
gItem_HM07: @ ひでんマシン07
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA8, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM07                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CB11                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 346
@ Item name: ひでんマシン08
@ ROM offset: 0x005604F8
@ Stored item ID: 0x015A
@ ------------------------------------------------------------------
gItem_HM08: @ ひでんマシン08
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA9, 0xFF, 0x00       @ name[10]
	.2byte ITEM_HM08                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CB2F                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x03                                                             @ pocket
	.byte 0x01                                                             @ type
	.4byte 0x080FE79D                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 347
@ Item name: ????????
@ ROM offset: 0x00560520
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_347: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 348
@ Item name: ????????
@ ROM offset: 0x00560548
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_348: @ ????????
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00       @ name[10]
	.2byte 0x0000                                                          @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEE2                                                      @ description
	.byte 0                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x01                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 349
@ Item name: おとどけもの
@ ROM offset: 0x00560570
@ Stored item ID: 0x015D
@ ------------------------------------------------------------------
gItem_015D: @ おとどけもの
	.byte 0x05, 0x14, 0x45, 0x09, 0x23, 0x19, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_015D                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CB52                                                      @ description
	.byte 2                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 350
@ Item name: ポケモンのふえ
@ ROM offset: 0x00560598
@ Stored item ID: 0x015E
@ ------------------------------------------------------------------
gItem_015E: @ ポケモンのふえ
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x19, 0x1C, 0x04, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_015E                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CB79                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 351
@ Item name: ひみつのカギ
@ ROM offset: 0x005605C0
@ Stored item ID: 0x015F
@ ------------------------------------------------------------------
gItem_015F: @ ひみつのカギ
	.byte 0x1B, 0x20, 0x12, 0x19, 0x56, 0x88, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_015F                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CB9B                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 352
@ Item name: ひきかえけん
@ ROM offset: 0x005605E8
@ Stored item ID: 0x0160
@ ------------------------------------------------------------------
gItem_0160: @ ひきかえけん
	.byte 0x1B, 0x07, 0x06, 0x04, 0x09, 0x2E, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0160                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CBB2                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 353
@ Item name: きんのいれば
@ ROM offset: 0x00560610
@ Stored item ID: 0x0161
@ ------------------------------------------------------------------
gItem_0161: @ きんのいれば
	.byte 0x07, 0x2E, 0x19, 0x02, 0x2A, 0x46, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0161                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CBD6                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 354
@ Item name: ひみつのコハク
@ ROM offset: 0x00560638
@ Stored item ID: 0x0162
@ ------------------------------------------------------------------
gItem_0162: @ ひみつのコハク
	.byte 0x1B, 0x20, 0x12, 0x19, 0x5A, 0x6A, 0x58, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0162                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CBF5                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 355
@ Item name: カードキー
@ ROM offset: 0x00560660
@ Stored item ID: 0x0163
@ ------------------------------------------------------------------
gItem_0163: @ カードキー
	.byte 0x56, 0xAE, 0x95, 0x57, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0163                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CC18                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 356
@ Item name: エレベータのカギ
@ ROM offset: 0x00560688
@ Stored item ID: 0x0164
@ ------------------------------------------------------------------
gItem_0164: @ エレベータのカギ
	.byte 0x54, 0x7A, 0x99, 0xAE, 0x60, 0x19, 0x56, 0x88, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0164                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CC3D                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 357
@ Item name: かいのカセキ
@ ROM offset: 0x005606B0
@ Stored item ID: 0x0165
@ ------------------------------------------------------------------
gItem_0165: @ かいのカセキ
	.byte 0x06, 0x02, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0165                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CC61                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 358
@ Item name: こうらのカセキ
@ ROM offset: 0x005606D8
@ Stored item ID: 0x0166
@ ------------------------------------------------------------------
gItem_0166: @ こうらのカセキ
	.byte 0x0A, 0x03, 0x27, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0166                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CC81                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 359
@ Item name: シルフスコープ
@ ROM offset: 0x00560700
@ Stored item ID: 0x0167
@ ------------------------------------------------------------------
gItem_0167: @ シルフスコープ
	.byte 0x5C, 0x79, 0x6C, 0x5D, 0x5A, 0xAE, 0x9D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0167                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CCA0                                                      @ description
	.byte 1                                                                @ importance
	.byte 0                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 360
@ Item name: じてんしゃ
@ ROM offset: 0x00560728
@ Stored item ID: 0x0168
@ ------------------------------------------------------------------
gItem_0168: @ じてんしゃ
	.byte 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0168                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CCC2                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 361
@ Item name: タウンマップ
@ ROM offset: 0x00560750
@ Stored item ID: 0x0169
@ ------------------------------------------------------------------
gItem_0169: @ タウンマップ
	.byte 0x60, 0x53, 0x7E, 0x6F, 0xA0, 0x9D, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0169                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CCE3                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 362
@ Item name: バトルサーチャー
@ ROM offset: 0x00560778
@ Stored item ID: 0x016A
@ ------------------------------------------------------------------
gItem_016A: @ バトルサーチャー
	.byte 0x96, 0x64, 0x79, 0x5B, 0xAE, 0x61, 0x84, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_016A                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CD07                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 363
@ Item name: ボイスチェッカー
@ ROM offset: 0x005607A0
@ Stored item ID: 0x016B
@ ------------------------------------------------------------------
gItem_016B: @ ボイスチェッカー
	.byte 0x9A, 0x52, 0x5D, 0x61, 0x82, 0xA0, 0x56, 0xAE, 0xFF, 0x00       @ name[10]
	.2byte ITEM_016B                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CD2C                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 364
@ Item name: わざマシンケース
@ ROM offset: 0x005607C8
@ Stored item ID: 0x016C
@ ------------------------------------------------------------------
gItem_TM_CASE: @ わざマシンケース
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0x59, 0xAE, 0x5D, 0xFF, 0x00       @ name[10]
	.2byte ITEM_TM_CASE                                                    @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CD50                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 365
@ Item name: きのみぶくろ
@ ROM offset: 0x005607F0
@ Stored item ID: 0x016D
@ ------------------------------------------------------------------
gItem_016D: @ きのみぶくろ
	.byte 0x07, 0x19, 0x20, 0x48, 0x08, 0x2B, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_016D                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CD67                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 366
@ Item name: おしえテレビ
@ ROM offset: 0x00560818
@ Stored item ID: 0x016E
@ ------------------------------------------------------------------
gItem_016E: @ おしえテレビ
	.byte 0x05, 0x0C, 0x04, 0x63, 0x7A, 0x97, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_016E                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CD7C                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x02                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 367
@ Item name: トライパス
@ ROM offset: 0x00560840
@ Stored item ID: 0x016F
@ ------------------------------------------------------------------
gItem_016F: @ トライパス
	.byte 0x64, 0x77, 0x52, 0x9B, 0x5D, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_016F                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CD9D                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 368
@ Item name: レインボーパス
@ ROM offset: 0x00560868
@ Stored item ID: 0x0170
@ ------------------------------------------------------------------
gItem_0170: @ レインボーパス
	.byte 0x7A, 0x52, 0x7E, 0x9A, 0xAE, 0x9B, 0x5D, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0170                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CDBE                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 369
@ Item name: おちゃ
@ ROM offset: 0x00560890
@ Stored item ID: 0x0171
@ ------------------------------------------------------------------
gItem_0171: @ おちゃ
	.byte 0x05, 0x11, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0171                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CDDB                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 370
@ Item name: しんぴのチケット
@ ROM offset: 0x005608B8
@ Stored item ID: 0x0172
@ ------------------------------------------------------------------
gItem_0172: @ しんぴのチケット
	.byte 0x0C, 0x2E, 0x4C, 0x19, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0172                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CDF9                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 371
@ Item name: オーロラチケット
@ ROM offset: 0x005608E0
@ Stored item ID: 0x0173
@ ------------------------------------------------------------------
gItem_0173: @ オーロラチケット
	.byte 0x55, 0xAE, 0x7B, 0x77, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0173                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CE15                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 372
@ Item name: こないれ
@ ROM offset: 0x00560908
@ Stored item ID: 0x0174
@ ------------------------------------------------------------------
gItem_0174: @ こないれ
	.byte 0x0A, 0x15, 0x02, 0x2A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0174                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CE34                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FE4F9                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 373
@ Item name: ルビー
@ ROM offset: 0x00560930
@ Stored item ID: 0x0175
@ ------------------------------------------------------------------
gItem_0175: @ ルビー
	.byte 0x79, 0x97, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0175                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CE56                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 374
@ Item name: サファイア
@ ROM offset: 0x00560958
@ Stored item ID: 0x0176
@ ------------------------------------------------------------------
gItem_0176: @ サファイア
	.byte 0x5B, 0x6C, 0x7F, 0x52, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0176                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CE7A                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 375
@ Item name: マグマのしるし
@ ROM offset: 0x00560980
@ Stored item ID: 0x0177
@ ------------------------------------------------------------------
gItem_0177: @ マグマのしるし
	.byte 0x6F, 0x89, 0x6F, 0x19, 0x0C, 0x29, 0x0C, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_0177                                                       @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CE9D                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

@ ------------------------------------------------------------------
@ Item table index: 376
@ Item name: ふるびたかいず
@ ROM offset: 0x005609A8
@ Stored item ID: 0x0178
@ ------------------------------------------------------------------
gItem_OLD_SEA_MAP: @ ふるびたかいず
	.byte 0x1C, 0x29, 0x47, 0x10, 0x06, 0x02, 0x3E, 0xFF, 0xFF, 0x00       @ name[10]
	.2byte ITEM_OLD_SEA_MAP                                                @ itemId
	.2byte 0                                                               @ price
	.byte 0x00                                                             @ holdEffect
	.byte 0x00                                                             @ holdEffectParam
	.4byte 0x0855CEC0                                                      @ description
	.byte 1                                                                @ importance
	.byte 1                                                                @ exitsBagOnUse
	.byte 0x05                                                             @ pocket
	.byte 0x04                                                             @ type
	.4byte 0x080FF071                                                      @ fieldUseFunc
	.4byte 0x00000000                                                      @ field_1C
	.4byte 0x00000000                                                      @ field_20
	.4byte 0x00000000                                                      @ field_24

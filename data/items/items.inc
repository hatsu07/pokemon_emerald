@ Auto-generated from baserom.gba by tools/extract_items.py
@
@ Item structure size: 0x28 bytes
@ Item count: 377
@
@ 名前部分は10バイト固定です。
@ tools/charmap.txt に従って .string に置き換えることもできますが、
@ ROM完全一致を維持するため、初期状態では生バイトで出力します。

@ ------------------------------------------------------------------
@ Item table index: 0
@ ROM offset: 0x0055CEE8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_000:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 1
@ ROM offset: 0x0055CF10
@ Stored item ID: 0x0001
@ ------------------------------------------------------------------
gItem_001:
	.byte 0x6F, 0x5D, 0x60, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0001            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855A9D0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x00            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 2
@ ROM offset: 0x0055CF38
@ Stored item ID: 0x0002
@ ------------------------------------------------------------------
gItem_002:
	.byte 0x6A, 0x52, 0x9B, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0002            @ itemId
	.2byte 1200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855A9F2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x01            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000001            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 3
@ ROM offset: 0x0055CF60
@ Stored item ID: 0x0003
@ ------------------------------------------------------------------
gItem_003:
	.byte 0x5D, 0xAE, 0x9B, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0003            @ itemId
	.2byte 600                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AA15         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x02            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000002            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 4
@ ROM offset: 0x0055CF88
@ Stored item ID: 0x0004
@ ------------------------------------------------------------------
gItem_004:
	.byte 0x73, 0x7E, 0x5D, 0x60, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0x00    @ name[10]
	.2byte 0x0004            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AA39         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x03            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000003            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 5
@ ROM offset: 0x0055CFB0
@ Stored item ID: 0x0005
@ ------------------------------------------------------------------
gItem_005:
	.byte 0x5B, 0x6C, 0x7F, 0x78, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0005            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AA50         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x04            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000004            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 6
@ ROM offset: 0x0055CFD8
@ Stored item ID: 0x0006
@ ------------------------------------------------------------------
gItem_006:
	.byte 0x68, 0xA0, 0x64, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0006            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AA71         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x05            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000005            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 7
@ ROM offset: 0x0055D000
@ Stored item ID: 0x0007
@ ------------------------------------------------------------------
gItem_007:
	.byte 0x91, 0x52, 0x98, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0007            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AA91         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x06            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000006            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 8
@ ROM offset: 0x0055D028
@ Stored item ID: 0x0008
@ ------------------------------------------------------------------
gItem_008:
	.byte 0x68, 0x5D, 0x64, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0008            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AAAF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x07            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000007            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 9
@ ROM offset: 0x0055D050
@ Stored item ID: 0x0009
@ ------------------------------------------------------------------
gItem_009:
	.byte 0x78, 0x9C, 0xAE, 0x64, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0009            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AAD0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x08            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000008            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 10
@ ROM offset: 0x0055D078
@ Stored item ID: 0x000A
@ ------------------------------------------------------------------
gItem_010:
	.byte 0x60, 0x52, 0x6F, 0xAE, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x000A            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AAF2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x09            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x00000009            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 11
@ ROM offset: 0x0055D0A0
@ Stored item ID: 0x000B
@ ------------------------------------------------------------------
gItem_011:
	.byte 0x8B, 0xAE, 0x8D, 0x84, 0x5D, 0x9A, 0xAE, 0x79, 0xFF, 0x00    @ name[10]
	.2byte 0x000B            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AB13         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x0A            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x0000000A            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 12
@ ROM offset: 0x0055D0C8
@ Stored item ID: 0x000C
@ ------------------------------------------------------------------
gItem_012:
	.byte 0x9D, 0x7A, 0x70, 0x51, 0x9A, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x000C            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AB36         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x02               @ pocket
	.byte 0x0B            @ type
	.4byte 0x00000000      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEBE5            @ field_20
	.4byte 0x0000000B            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 13
@ ROM offset: 0x0055D0F0
@ Stored item ID: 0x000D
@ ------------------------------------------------------------------
gItem_013:
	.byte 0x57, 0x8E, 0x39, 0x0D, 0x28, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x000D            @ itemId
	.2byte 300                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x14    @ holdEffectParam
	.4byte 0x0855AB55         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 14
@ ROM offset: 0x0055D118
@ Stored item ID: 0x000E
@ ------------------------------------------------------------------
gItem_014:
	.byte 0x45, 0x08, 0x09, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x000E            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AB6C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 15
@ ROM offset: 0x0055D140
@ Stored item ID: 0x000F
@ ------------------------------------------------------------------
gItem_015:
	.byte 0x24, 0x09, 0x45, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x000F            @ itemId
	.2byte 250                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AB7D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 16
@ ROM offset: 0x0055D168
@ Stored item ID: 0x0010
@ ------------------------------------------------------------------
gItem_016:
	.byte 0x0A, 0x05, 0x28, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0010            @ itemId
	.2byte 250                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AB8F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 17
@ ROM offset: 0x0055D190
@ Stored item ID: 0x0011
@ ------------------------------------------------------------------
gItem_017:
	.byte 0x18, 0x21, 0x09, 0x3C, 0x1F, 0x0C, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0011            @ itemId
	.2byte 250                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855ABA1         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 18
@ ROM offset: 0x0055D1B8
@ Stored item ID: 0x0012
@ ------------------------------------------------------------------
gItem_018:
	.byte 0x1F, 0x1B, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0012            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855ABB3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 19
@ ROM offset: 0x0055D1E0
@ Stored item ID: 0x0013
@ ------------------------------------------------------------------
gItem_019:
	.byte 0x06, 0x02, 0x1C, 0x08, 0x19, 0x08, 0x0D, 0x28, 0xFF, 0x00    @ name[10]
	.2byte 0x0013            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xFF    @ holdEffectParam
	.4byte 0x0855ABC4         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 20
@ ROM offset: 0x0055D208
@ Stored item ID: 0x0014
@ ------------------------------------------------------------------
gItem_020:
	.byte 0x1F, 0x2E, 0x10, 0x2E, 0x19, 0x08, 0x0D, 0x28, 0xFF, 0x00    @ name[10]
	.2byte 0x0014            @ itemId
	.2byte 2500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xFF    @ holdEffectParam
	.4byte 0x0855ABE6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 21
@ ROM offset: 0x0055D230
@ Stored item ID: 0x0015
@ ------------------------------------------------------------------
gItem_021:
	.byte 0x0D, 0x3B, 0x02, 0x57, 0x8E, 0x39, 0x0D, 0x28, 0xFF, 0x00    @ name[10]
	.2byte 0x0015            @ itemId
	.2byte 1200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xC8    @ holdEffectParam
	.4byte 0x0855ABFC         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 22
@ ROM offset: 0x0055D258
@ Stored item ID: 0x0016
@ ------------------------------------------------------------------
gItem_022:
	.byte 0x02, 0x02, 0x57, 0x8E, 0x39, 0x0D, 0x28, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0016            @ itemId
	.2byte 700                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x32    @ holdEffectParam
	.4byte 0x0855AC14         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 23
@ ROM offset: 0x0055D280
@ Stored item ID: 0x0017
@ ------------------------------------------------------------------
gItem_023:
	.byte 0x15, 0x2E, 0x44, 0x23, 0x15, 0x05, 0x0C, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0017            @ itemId
	.2byte 600                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AC2B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 24
@ ROM offset: 0x0055D2A8
@ Stored item ID: 0x0018
@ ------------------------------------------------------------------
gItem_024:
	.byte 0x3A, 0x2E, 0x07, 0x19, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0018            @ itemId
	.2byte 1500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AC42         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 25
@ ROM offset: 0x0055D2D0
@ Stored item ID: 0x0019
@ ------------------------------------------------------------------
gItem_025:
	.byte 0x3A, 0x2E, 0x07, 0x19, 0x06, 0x10, 0x1F, 0x28, 0xFF, 0x00    @ name[10]
	.2byte 0x0019            @ itemId
	.2byte 4000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AC62         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 26
@ ROM offset: 0x0055D2F8
@ Stored item ID: 0x001A
@ ------------------------------------------------------------------
gItem_026:
	.byte 0x05, 0x02, 0x0C, 0x02, 0x20, 0x3E, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x001A            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x32    @ holdEffectParam
	.4byte 0x0855AC7E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 27
@ ROM offset: 0x0055D320
@ Stored item ID: 0x001B
@ ------------------------------------------------------------------
gItem_027:
	.byte 0x5B, 0x52, 0x5A, 0x5F, 0xAE, 0x91, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x001B            @ itemId
	.2byte 300                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x3C    @ holdEffectParam
	.4byte 0x0855ACA2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 28
@ ROM offset: 0x0055D348
@ Stored item ID: 0x001C
@ ------------------------------------------------------------------
gItem_028:
	.byte 0x70, 0xA0, 0x58, 0x5D, 0x55, 0x7A, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x001C            @ itemId
	.2byte 350                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x50    @ holdEffectParam
	.4byte 0x0855ACC5         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 29
@ ROM offset: 0x0055D370
@ Stored item ID: 0x001D
@ ------------------------------------------------------------------
gItem_029:
	.byte 0x73, 0xAE, 0x73, 0xAE, 0x70, 0x79, 0x58, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x001D            @ itemId
	.2byte 500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x64    @ holdEffectParam
	.4byte 0x0855ACE6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 30
@ ROM offset: 0x0055D398
@ Stored item ID: 0x001E
@ ------------------------------------------------------------------
gItem_030:
	.byte 0x11, 0x06, 0x27, 0x19, 0x0A, 0x15, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x001E            @ itemId
	.2byte 500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AD08         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 31
@ ROM offset: 0x0055D3C0
@ Stored item ID: 0x001F
@ ------------------------------------------------------------------
gItem_031:
	.byte 0x11, 0x06, 0x27, 0x19, 0x18, 0x50, 0x0A, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x001F            @ itemId
	.2byte 800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AD2A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 32
@ ROM offset: 0x0055D3E8
@ Stored item ID: 0x0020
@ ------------------------------------------------------------------
gItem_032:
	.byte 0x46, 0x2E, 0x19, 0x03, 0x3B, 0x15, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0020            @ itemId
	.2byte 450                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AD4E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 33
@ ROM offset: 0x0055D410
@ Stored item ID: 0x0021
@ ------------------------------------------------------------------
gItem_033:
	.byte 0x1C, 0x50, 0x06, 0x12, 0x0F, 0x03, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0021            @ itemId
	.2byte 2800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AD70         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 34
@ ROM offset: 0x0055D438
@ Stored item ID: 0x0022
@ ------------------------------------------------------------------
gItem_034:
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x54, 0x52, 0x95, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0022            @ itemId
	.2byte 1200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855AD8E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE749      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEE19            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 35
@ ROM offset: 0x0055D460
@ Stored item ID: 0x0023
@ ------------------------------------------------------------------
gItem_035:
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x78, 0x56, 0x96, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x0023            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xFF    @ holdEffectParam
	.4byte 0x0855ADA8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE749      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEE19            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 36
@ ROM offset: 0x0055D488
@ Stored item ID: 0x0024
@ ------------------------------------------------------------------
gItem_036:
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x54, 0x52, 0x91, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x0024            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855ADC1         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE749      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEE19            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 37
@ ROM offset: 0x0055D4B0
@ Stored item ID: 0x0025
@ ------------------------------------------------------------------
gItem_037:
	.byte 0x9C, 0xAE, 0x9C, 0xAE, 0x6F, 0xA0, 0x58, 0x5D, 0xFF, 0x00    @ name[10]
	.2byte 0x0025            @ itemId
	.2byte 4500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xFF    @ holdEffectParam
	.4byte 0x0855ADDC         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE749      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEE19            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 38
@ ROM offset: 0x0055D4D8
@ Stored item ID: 0x0026
@ ------------------------------------------------------------------
gItem_038:
	.byte 0x6C, 0x54, 0x7E, 0x0E, 0x2E, 0x49, 0x02, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0026            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855ADFC         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 39
@ ROM offset: 0x0055D500
@ Stored item ID: 0x0027
@ ------------------------------------------------------------------
gItem_039:
	.byte 0x01, 0x05, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0027            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AE1D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 40
@ ROM offset: 0x0055D528
@ Stored item ID: 0x0028
@ ------------------------------------------------------------------
gItem_040:
	.byte 0x07, 0x02, 0x2B, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0028            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AE3B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 41
@ ROM offset: 0x0055D550
@ Stored item ID: 0x0029
@ ------------------------------------------------------------------
gItem_041:
	.byte 0x01, 0x06, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0029            @ itemId
	.2byte 300                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AE5A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 42
@ ROM offset: 0x0055D578
@ Stored item ID: 0x002A
@ ------------------------------------------------------------------
gItem_042:
	.byte 0x08, 0x2B, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x002A            @ itemId
	.2byte 400                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x32    @ holdEffectParam
	.4byte 0x0855AE79         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEA85      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 43
@ ROM offset: 0x0055D5A0
@ Stored item ID: 0x002B
@ ------------------------------------------------------------------
gItem_043:
	.byte 0x0C, 0x2B, 0x02, 0x97, 0xAE, 0x95, 0x7B, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x002B            @ itemId
	.2byte 500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x96    @ holdEffectParam
	.4byte 0x0855AE9B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEA85      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 44
@ ROM offset: 0x0055D5C8
@ Stored item ID: 0x002C
@ ------------------------------------------------------------------
gItem_044:
	.byte 0x07, 0x19, 0x20, 0x8D, 0x85, 0xAE, 0x5D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x002C            @ itemId
	.2byte 100                     @ price
	.byte 0x01          @ holdEffect
	.byte 0x14    @ holdEffectParam
	.4byte 0x0855AEBD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 45
@ ROM offset: 0x0055D5F0
@ Stored item ID: 0x002D
@ ------------------------------------------------------------------
gItem_045:
	.byte 0x0E, 0x02, 0x15, 0x29, 0x1A, 0x02, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x002D            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AEE1         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE72D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 46
@ ROM offset: 0x0055D618
@ Stored item ID: 0x002E
@ ------------------------------------------------------------------
gItem_046:
	.byte 0x01, 0x0B, 0x0E, 0x19, 0x0C, 0x05, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x002E            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AF04         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 47
@ ROM offset: 0x0055D640
@ Stored item ID: 0x002F
@ ------------------------------------------------------------------
gItem_047:
	.byte 0x01, 0x0B, 0x0E, 0x19, 0x06, 0x02, 0x37, 0x27, 0xFF, 0x00    @ name[10]
	.2byte 0x002F            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AF16         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 48
@ ROM offset: 0x0055D668
@ Stored item ID: 0x0030
@ ------------------------------------------------------------------
gItem_048:
	.byte 0x01, 0x06, 0x02, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0030            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AF2A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 49
@ ROM offset: 0x0055D690
@ Stored item ID: 0x0031
@ ------------------------------------------------------------------
gItem_049:
	.byte 0x01, 0x05, 0x02, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0031            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AF4A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 50
@ ROM offset: 0x0055D6B8
@ Stored item ID: 0x0032
@ ------------------------------------------------------------------
gItem_050:
	.byte 0x07, 0x02, 0x2B, 0x02, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0032            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AF6A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 51
@ ROM offset: 0x0055D6E0
@ Stored item ID: 0x0033
@ ------------------------------------------------------------------
gItem_051:
	.byte 0x20, 0x45, 0x28, 0x19, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0033            @ itemId
	.2byte 200                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AF8A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 52
@ ROM offset: 0x0055D708
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_052:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 53
@ ROM offset: 0x0055D730
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_053:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 54
@ ROM offset: 0x0055D758
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_054:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 55
@ ROM offset: 0x0055D780
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_055:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 56
@ ROM offset: 0x0055D7A8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_056:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 57
@ ROM offset: 0x0055D7D0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_057:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 58
@ ROM offset: 0x0055D7F8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_058:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 59
@ ROM offset: 0x0055D820
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_059:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 60
@ ROM offset: 0x0055D848
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_060:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 61
@ ROM offset: 0x0055D870
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_061:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 62
@ ROM offset: 0x0055D898
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_062:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 63
@ ROM offset: 0x0055D8C0
@ Stored item ID: 0x003F
@ ------------------------------------------------------------------
gItem_063:
	.byte 0x6F, 0xA0, 0x58, 0x5D, 0x51, 0xA0, 0x9D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x003F            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AFAA         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 64
@ ROM offset: 0x0055D8E8
@ Stored item ID: 0x0040
@ ------------------------------------------------------------------
gItem_064:
	.byte 0x60, 0x53, 0x78, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0040            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AFBD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 65
@ ROM offset: 0x0055D910
@ Stored item ID: 0x0041
@ ------------------------------------------------------------------
gItem_065:
	.byte 0x98, 0x7B, 0x71, 0x6D, 0x57, 0x5C, 0x7E, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0041            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AFCF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 66
@ ROM offset: 0x0055D938
@ Stored item ID: 0x0042
@ ------------------------------------------------------------------
gItem_066:
	.byte 0x52, 0x7E, 0x95, 0x72, 0x60, 0x5C, 0x7E, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0042            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AFE1         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 67
@ ROM offset: 0x0055D960
@ Stored item ID: 0x0043
@ ------------------------------------------------------------------
gItem_067:
	.byte 0x78, 0x90, 0x61, 0x53, 0x71, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0043            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855AFF3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 68
@ ROM offset: 0x0055D988
@ Stored item ID: 0x0044
@ ------------------------------------------------------------------
gItem_068:
	.byte 0x1C, 0x0C, 0x38, 0x15, 0x51, 0x72, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0044            @ itemId
	.2byte 4800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B005         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE781      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 69
@ ROM offset: 0x0055D9B0
@ Stored item ID: 0x0045
@ ------------------------------------------------------------------
gItem_069:
	.byte 0x9F, 0x52, 0x7E, 0x64, 0x51, 0xA0, 0x9D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0045            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B016         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE765      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 70
@ ROM offset: 0x0055D9D8
@ Stored item ID: 0x0046
@ ------------------------------------------------------------------
gItem_070:
	.byte 0x57, 0x64, 0x5B, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0046            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B029         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 71
@ ROM offset: 0x0055DA00
@ Stored item ID: 0x0047
@ ------------------------------------------------------------------
gItem_071:
	.byte 0x9F, 0x52, 0x7E, 0x64, 0x6F, 0xA0, 0x58, 0x5D, 0xFF, 0x00    @ name[10]
	.2byte 0x0047            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B03B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE765      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 72
@ ROM offset: 0x0055DA28
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_072:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 73
@ ROM offset: 0x0055DA50
@ Stored item ID: 0x0049
@ ------------------------------------------------------------------
gItem_073:
	.byte 0x54, 0x6C, 0x82, 0x58, 0x64, 0x87, 0xAE, 0x95, 0xFF, 0x00    @ name[10]
	.2byte 0x0049            @ itemId
	.2byte 700                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B04F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 74
@ ROM offset: 0x0055DA78
@ Stored item ID: 0x004A
@ ------------------------------------------------------------------
gItem_074:
	.byte 0x58, 0x78, 0x63, 0x80, 0x56, 0xA0, 0x60, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x004A            @ itemId
	.2byte 650                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B06F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 75
@ ROM offset: 0x0055DAA0
@ Stored item ID: 0x004B
@ ------------------------------------------------------------------
gItem_075:
	.byte 0x9D, 0x77, 0x5D, 0x9B, 0x7C, 0xAE, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x004B            @ itemId
	.2byte 500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B091         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 76
@ ROM offset: 0x0055DAC8
@ Stored item ID: 0x004C
@ ------------------------------------------------------------------
gItem_076:
	.byte 0x94, 0x80, 0x6C, 0x82, 0x7E, 0x91, 0xAE, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x004C            @ itemId
	.2byte 550                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B0AB         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 77
@ ROM offset: 0x0055DAF0
@ Stored item ID: 0x004D
@ ------------------------------------------------------------------
gItem_077:
	.byte 0x5D, 0x9C, 0xAE, 0x91, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x004D            @ itemId
	.2byte 350                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B0C5         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 78
@ ROM offset: 0x0055DB18
@ Stored item ID: 0x004E
@ ------------------------------------------------------------------
gItem_078:
	.byte 0x76, 0x58, 0x51, 0x60, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x004E            @ itemId
	.2byte 950                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B0DC         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 79
@ ROM offset: 0x0055DB40
@ Stored item ID: 0x004F
@ ------------------------------------------------------------------
gItem_079:
	.byte 0x5D, 0x9E, 0x5C, 0x84, 0x79, 0x51, 0xA0, 0x9D, 0xFF, 0x00    @ name[10]
	.2byte 0x004F            @ itemId
	.2byte 350                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B0F6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FED09            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 80
@ ROM offset: 0x0055DB68
@ Stored item ID: 0x0050
@ ------------------------------------------------------------------
gItem_080:
	.byte 0x9C, 0xA0, 0x9C, 0x16, 0x2E, 0x38, 0x36, 0x03, 0xFF, 0x00    @ name[10]
	.2byte 0x0050            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B113         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEE35            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 81
@ ROM offset: 0x0055DB90
@ Stored item ID: 0x0051
@ ------------------------------------------------------------------
gItem_081:
	.byte 0x54, 0x68, 0x5A, 0x19, 0x5C, 0xA0, 0x9F, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0051            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B136         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000002            @ field_1C
	.4byte 0x080FEE35            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 82
@ ROM offset: 0x0055DBB8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_082:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 83
@ ROM offset: 0x0055DBE0
@ Stored item ID: 0x0053
@ ------------------------------------------------------------------
gItem_083:
	.byte 0x5C, 0x79, 0x96, 0xAE, 0x5D, 0x9D, 0x7A, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x0053            @ itemId
	.2byte 500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xC8    @ holdEffectParam
	.4byte 0x0855B159         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FE90D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 84
@ ROM offset: 0x0055DC08
@ Stored item ID: 0x0054
@ ------------------------------------------------------------------
gItem_084:
	.byte 0x8B, 0xAE, 0x79, 0x95, 0x5D, 0x9D, 0x7A, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x0054            @ itemId
	.2byte 700                     @ price
	.byte 0x00          @ holdEffect
	.byte 0xFA    @ holdEffectParam
	.4byte 0x0855B17B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FE90D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 85
@ ROM offset: 0x0055DC30
@ Stored item ID: 0x0055
@ ------------------------------------------------------------------
gItem_085:
	.byte 0x01, 0x15, 0x17, 0x09, 0x19, 0x6B, 0x73, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0055            @ itemId
	.2byte 550                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B19D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FEB85      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 86
@ ROM offset: 0x0055DC58
@ Stored item ID: 0x0056
@ ------------------------------------------------------------------
gItem_086:
	.byte 0x21, 0x0C, 0x26, 0x09, 0x5D, 0x9D, 0x7A, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x0056            @ itemId
	.2byte 350                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x64    @ holdEffectParam
	.4byte 0x0855B1B0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FE90D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 87
@ ROM offset: 0x0055DC80
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_087:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 88
@ ROM offset: 0x0055DCA8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_088:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 89
@ ROM offset: 0x0055DCD0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_089:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 90
@ ROM offset: 0x0055DCF8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_090:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 91
@ ROM offset: 0x0055DD20
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_091:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 92
@ ROM offset: 0x0055DD48
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_092:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 93
@ ROM offset: 0x0055DD70
@ Stored item ID: 0x005D
@ ------------------------------------------------------------------
gItem_093:
	.byte 0x10, 0x02, 0x26, 0x03, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x005D            @ itemId
	.2byte 2100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B1D2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEBC9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 94
@ ROM offset: 0x0055DD98
@ Stored item ID: 0x005E
@ ------------------------------------------------------------------
gItem_094:
	.byte 0x12, 0x07, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x005E            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B1E5         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEBC9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 95
@ ROM offset: 0x0055DDC0
@ Stored item ID: 0x005F
@ ------------------------------------------------------------------
gItem_095:
	.byte 0x1E, 0x19, 0x05, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x005F            @ itemId
	.2byte 2100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B1F8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEBC9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 96
@ ROM offset: 0x0055DDE8
@ Stored item ID: 0x0060
@ ------------------------------------------------------------------
gItem_096:
	.byte 0x06, 0x20, 0x15, 0x28, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0060            @ itemId
	.2byte 2100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B20B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEBC9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 97
@ ROM offset: 0x0055DE10
@ Stored item ID: 0x0061
@ ------------------------------------------------------------------
gItem_097:
	.byte 0x20, 0x3E, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0061            @ itemId
	.2byte 2100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B21E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEBC9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 98
@ ROM offset: 0x0055DE38
@ Stored item ID: 0x0062
@ ------------------------------------------------------------------
gItem_098:
	.byte 0x78, 0xAE, 0x6C, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0062            @ itemId
	.2byte 2100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B231         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FEBC9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 99
@ ROM offset: 0x0055DE60
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_099:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 100
@ ROM offset: 0x0055DE88
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_100:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 101
@ ROM offset: 0x0055DEB0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_101:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 102
@ ROM offset: 0x0055DED8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_102:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 103
@ ROM offset: 0x0055DF00
@ Stored item ID: 0x0067
@ ------------------------------------------------------------------
gItem_103:
	.byte 0x11, 0x02, 0x0B, 0x15, 0x57, 0x69, 0x5A, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0067            @ itemId
	.2byte 500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B244         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 104
@ ROM offset: 0x0055DF28
@ Stored item ID: 0x0068
@ ------------------------------------------------------------------
gItem_104:
	.byte 0x05, 0x05, 0x07, 0x15, 0x57, 0x69, 0x5A, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0068            @ itemId
	.2byte 5000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B255         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 105
@ ROM offset: 0x0055DF50
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_105:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 106
@ ROM offset: 0x0055DF78
@ Stored item ID: 0x006A
@ ------------------------------------------------------------------
gItem_106:
	.byte 0x0C, 0x2E, 0x3D, 0x35, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x006A            @ itemId
	.2byte 1400                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B267         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 107
@ ROM offset: 0x0055DFA0
@ Stored item ID: 0x006B
@ ------------------------------------------------------------------
gItem_107:
	.byte 0x05, 0x05, 0x07, 0x15, 0x0C, 0x2E, 0x3D, 0x35, 0xFF, 0x00    @ name[10]
	.2byte 0x006B            @ itemId
	.2byte 7500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B279         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 108
@ ROM offset: 0x0055DFC8
@ Stored item ID: 0x006C
@ ------------------------------------------------------------------
gItem_108:
	.byte 0x1E, 0x0C, 0x19, 0x0D, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x006C            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B295         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 109
@ ROM offset: 0x0055DFF0
@ Stored item ID: 0x006D
@ ------------------------------------------------------------------
gItem_109:
	.byte 0x1E, 0x0C, 0x19, 0x06, 0x09, 0x27, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x006D            @ itemId
	.2byte 9800                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B2AA         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 110
@ ROM offset: 0x0055E018
@ Stored item ID: 0x006E
@ ------------------------------------------------------------------
gItem_110:
	.byte 0x07, 0x2E, 0x19, 0x10, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x006E            @ itemId
	.2byte 10000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B2CA         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 111
@ ROM offset: 0x0055E040
@ Stored item ID: 0x006F
@ ------------------------------------------------------------------
gItem_111:
	.byte 0x6A, 0xAE, 0x64, 0x19, 0x53, 0x7B, 0x5A, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x006F            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B2DB         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 112
@ ROM offset: 0x0055E068
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_112:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 113
@ ROM offset: 0x0055E090
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_113:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 114
@ ROM offset: 0x0055E0B8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_114:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 115
@ ROM offset: 0x0055E0E0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_115:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 116
@ ROM offset: 0x0055E108
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_116:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 117
@ ROM offset: 0x0055E130
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_117:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 118
@ ROM offset: 0x0055E158
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_118:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 119
@ ROM offset: 0x0055E180
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_119:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 120
@ ROM offset: 0x0055E1A8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_120:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 121
@ ROM offset: 0x0055E1D0
@ Stored item ID: 0x0079
@ ------------------------------------------------------------------
gItem_121:
	.byte 0x55, 0x7A, 0x7E, 0x8D, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0079            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B2F7         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 122
@ ROM offset: 0x0055E1F8
@ Stored item ID: 0x007A
@ ------------------------------------------------------------------
gItem_122:
	.byte 0x6A, 0xAE, 0x96, 0xAE, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x007A            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B31B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000001            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 123
@ ROM offset: 0x0055E220
@ Stored item ID: 0x007B
@ ------------------------------------------------------------------
gItem_123:
	.byte 0x57, 0x77, 0x57, 0x77, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x007B            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B33E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000002            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 124
@ ROM offset: 0x0055E248
@ Stored item ID: 0x007C
@ ------------------------------------------------------------------
gItem_124:
	.byte 0x72, 0x56, 0x66, 0x56, 0x79, 0x72, 0xAE, 0x79, 0xFF, 0x00    @ name[10]
	.2byte 0x007C            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B362         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000003            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 125
@ ROM offset: 0x0055E270
@ Stored item ID: 0x007D
@ ------------------------------------------------------------------
gItem_125:
	.byte 0x53, 0xA0, 0x94, 0x80, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x007D            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B384         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000004            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 126
@ ROM offset: 0x0055E298
@ Stored item ID: 0x007E
@ ------------------------------------------------------------------
gItem_126:
	.byte 0x58, 0x7B, 0x5D, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x007E            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B3A7         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000005            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 127
@ ROM offset: 0x0055E2C0
@ Stored item ID: 0x007F
@ ------------------------------------------------------------------
gItem_127:
	.byte 0x64, 0x7A, 0x8D, 0x84, 0xAE, 0x72, 0xAE, 0x79, 0xFF, 0x00    @ name[10]
	.2byte 0x007F            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B3CA         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000006            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 128
@ ROM offset: 0x0055E2E8
@ Stored item ID: 0x0080
@ ------------------------------------------------------------------
gItem_128:
	.byte 0x5C, 0x84, 0x95, 0xAE, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0080            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B3E2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000007            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 129
@ ROM offset: 0x0055E310
@ Stored item ID: 0x0081
@ ------------------------------------------------------------------
gItem_129:
	.byte 0x64, 0x7B, 0x9C, 0x56, 0x79, 0x72, 0xAE, 0x79, 0xFF, 0x00    @ name[10]
	.2byte 0x0081            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B405         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000008            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 130
@ ROM offset: 0x0055E338
@ Stored item ID: 0x0082
@ ------------------------------------------------------------------
gItem_130:
	.byte 0x95, 0x78, 0xAE, 0x71, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0082            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B429         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000009            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 131
@ ROM offset: 0x0055E360
@ Stored item ID: 0x0083
@ ------------------------------------------------------------------
gItem_131:
	.byte 0x70, 0x77, 0x58, 0x79, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0083            @ itemId
	.2byte 50                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B441         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x0000000A            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 132
@ ROM offset: 0x0055E388
@ Stored item ID: 0x0084
@ ------------------------------------------------------------------
gItem_132:
	.byte 0x7A, 0x64, 0x7B, 0x72, 0xAE, 0x79, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0084            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B463         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x00            @ type
	.4byte 0x080FDACD      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x0000000B            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 133
@ ROM offset: 0x0055E3B0
@ Stored item ID: 0x0085
@ ------------------------------------------------------------------
gItem_133:
	.byte 0x58, 0x77, 0x9A, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0085            @ itemId
	.2byte 20                     @ price
	.byte 0x02          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B486         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 134
@ ROM offset: 0x0055E3D8
@ Stored item ID: 0x0086
@ ------------------------------------------------------------------
gItem_134:
	.byte 0x56, 0x8B, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0086            @ itemId
	.2byte 20                     @ price
	.byte 0x03          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B4A2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 135
@ ROM offset: 0x0055E400
@ Stored item ID: 0x0087
@ ------------------------------------------------------------------
gItem_135:
	.byte 0x73, 0x73, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0087            @ itemId
	.2byte 20                     @ price
	.byte 0x04          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B4BF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 136
@ ROM offset: 0x0055E428
@ Stored item ID: 0x0088
@ ------------------------------------------------------------------
gItem_136:
	.byte 0x61, 0xAE, 0x8B, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0088            @ itemId
	.2byte 20                     @ price
	.byte 0x05          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B4DB         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 137
@ ROM offset: 0x0055E450
@ Stored item ID: 0x0089
@ ------------------------------------------------------------------
gItem_137:
	.byte 0x65, 0x65, 0x5C, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0089            @ itemId
	.2byte 20                     @ price
	.byte 0x06          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B4F8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 138
@ ROM offset: 0x0055E478
@ Stored item ID: 0x008A
@ ------------------------------------------------------------------
gItem_138:
	.byte 0x6B, 0x72, 0x78, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x008A            @ itemId
	.2byte 20                     @ price
	.byte 0x07          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855B515         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE749      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEE19            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 139
@ ROM offset: 0x0055E4A0
@ Stored item ID: 0x008B
@ ------------------------------------------------------------------
gItem_139:
	.byte 0x55, 0x7A, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x008B            @ itemId
	.2byte 20                     @ price
	.byte 0x01          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855B532         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 140
@ ROM offset: 0x0055E4C8
@ Stored item ID: 0x008C
@ ------------------------------------------------------------------
gItem_140:
	.byte 0x57, 0xAE, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x008C            @ itemId
	.2byte 20                     @ price
	.byte 0x08          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B54E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 141
@ ROM offset: 0x0055E4F0
@ Stored item ID: 0x008D
@ ------------------------------------------------------------------
gItem_141:
	.byte 0x77, 0x71, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x008D            @ itemId
	.2byte 20                     @ price
	.byte 0x09          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B56C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 142
@ ROM offset: 0x0055E518
@ Stored item ID: 0x008E
@ ------------------------------------------------------------------
gItem_142:
	.byte 0x55, 0x9A, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x008E            @ itemId
	.2byte 20                     @ price
	.byte 0x01          @ holdEffect
	.byte 0x1E    @ holdEffectParam
	.4byte 0x0855B58A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE6F5      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEDE1            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 143
@ ROM offset: 0x0055E540
@ Stored item ID: 0x008F
@ ------------------------------------------------------------------
gItem_143:
	.byte 0x6C, 0x80, 0x77, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x008F            @ itemId
	.2byte 20                     @ price
	.byte 0x0A          @ holdEffect
	.byte 0x08    @ holdEffectParam
	.4byte 0x0855B5A6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 144
@ ROM offset: 0x0055E568
@ Stored item ID: 0x0090
@ ------------------------------------------------------------------
gItem_144:
	.byte 0x53, 0x52, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0090            @ itemId
	.2byte 20                     @ price
	.byte 0x0B          @ holdEffect
	.byte 0x08    @ holdEffectParam
	.4byte 0x0855B5CA         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 145
@ ROM offset: 0x0055E590
@ Stored item ID: 0x0091
@ ------------------------------------------------------------------
gItem_145:
	.byte 0x6F, 0x8B, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0091            @ itemId
	.2byte 20                     @ price
	.byte 0x0C          @ holdEffect
	.byte 0x08    @ holdEffectParam
	.4byte 0x0855B5EE         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 146
@ ROM offset: 0x0055E5B8
@ Stored item ID: 0x0092
@ ------------------------------------------------------------------
gItem_146:
	.byte 0x96, 0x7E, 0x8D, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0092            @ itemId
	.2byte 20                     @ price
	.byte 0x0D          @ holdEffect
	.byte 0x08    @ holdEffectParam
	.4byte 0x0855B612         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 147
@ ROM offset: 0x0055E5E0
@ Stored item ID: 0x0093
@ ------------------------------------------------------------------
gItem_147:
	.byte 0x52, 0x51, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0093            @ itemId
	.2byte 20                     @ price
	.byte 0x0E          @ holdEffect
	.byte 0x08    @ holdEffectParam
	.4byte 0x0855B636         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 148
@ ROM offset: 0x0055E608
@ Stored item ID: 0x0094
@ ------------------------------------------------------------------
gItem_148:
	.byte 0x8E, 0x78, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0094            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B65A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 149
@ ROM offset: 0x0055E630
@ Stored item ID: 0x0095
@ ------------------------------------------------------------------
gItem_149:
	.byte 0x98, 0x78, 0xAE, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0095            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B67A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 150
@ ROM offset: 0x0055E658
@ Stored item ID: 0x0096
@ ------------------------------------------------------------------
gItem_150:
	.byte 0x65, 0x65, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0096            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B69B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 151
@ ROM offset: 0x0055E680
@ Stored item ID: 0x0097
@ ------------------------------------------------------------------
gItem_151:
	.byte 0x5E, 0x5C, 0x65, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0097            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B6BB         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 152
@ ROM offset: 0x0055E6A8
@ Stored item ID: 0x0098
@ ------------------------------------------------------------------
gItem_152:
	.byte 0x9B, 0x52, 0x79, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0098            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B6DC         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 153
@ ROM offset: 0x0055E6D0
@ Stored item ID: 0x0099
@ ------------------------------------------------------------------
gItem_153:
	.byte 0x8C, 0x7B, 0x58, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0099            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B6FD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE711      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 154
@ ROM offset: 0x0055E6F8
@ Stored item ID: 0x009A
@ ------------------------------------------------------------------
gItem_154:
	.byte 0x68, 0x5A, 0x98, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x009A            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B71D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE711      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 155
@ ROM offset: 0x0055E720
@ Stored item ID: 0x009B
@ ------------------------------------------------------------------
gItem_155:
	.byte 0x60, 0x9F, 0x79, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x009B            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B73F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE711      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 156
@ ROM offset: 0x0055E748
@ Stored item ID: 0x009C
@ ------------------------------------------------------------------
gItem_156:
	.byte 0x7B, 0x72, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x009C            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B761         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE711      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 157
@ ROM offset: 0x0055E770
@ Stored item ID: 0x009D
@ ------------------------------------------------------------------
gItem_157:
	.byte 0x53, 0x98, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x009D            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B783         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE711      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 158
@ ROM offset: 0x0055E798
@ Stored item ID: 0x009E
@ ------------------------------------------------------------------
gItem_158:
	.byte 0x6F, 0x64, 0x6F, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x009E            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B7A5         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE711      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 159
@ ROM offset: 0x0055E7C0
@ Stored item ID: 0x009F
@ ------------------------------------------------------------------
gItem_159:
	.byte 0x73, 0x5A, 0x5C, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x009F            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B7C7         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 160
@ ROM offset: 0x0055E7E8
@ Stored item ID: 0x00A0
@ ------------------------------------------------------------------
gItem_160:
	.byte 0x8B, 0x5D, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A0            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B7E8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 161
@ ROM offset: 0x0055E810
@ Stored item ID: 0x00A1
@ ------------------------------------------------------------------
gItem_161:
	.byte 0x77, 0x98, 0x60, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A1            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B808         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 162
@ ROM offset: 0x0055E838
@ Stored item ID: 0x00A2
@ ------------------------------------------------------------------
gItem_162:
	.byte 0x69, 0x72, 0x79, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A2            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B829         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 163
@ ROM offset: 0x0055E860
@ Stored item ID: 0x00A3
@ ------------------------------------------------------------------
gItem_163:
	.byte 0x69, 0x7C, 0x57, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A3            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B84A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 164
@ ROM offset: 0x0055E888
@ Stored item ID: 0x00A4
@ ------------------------------------------------------------------
gItem_164:
	.byte 0x5C, 0xAE, 0x74, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A4            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B86B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 165
@ ROM offset: 0x0055E8B0
@ Stored item ID: 0x00A5
@ ------------------------------------------------------------------
gItem_165:
	.byte 0x56, 0x52, 0x5D, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A5            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B88C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 166
@ ROM offset: 0x0055E8D8
@ Stored item ID: 0x00A6
@ ------------------------------------------------------------------
gItem_166:
	.byte 0x95, 0x78, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A6            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B8AD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 167
@ ROM offset: 0x0055E900
@ Stored item ID: 0x00A7
@ ------------------------------------------------------------------
gItem_167:
	.byte 0x99, 0x78, 0x98, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A7            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B8CD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 168
@ ROM offset: 0x0055E928
@ Stored item ID: 0x00A8
@ ------------------------------------------------------------------
gItem_168:
	.byte 0x61, 0x52, 0x77, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A8            @ itemId
	.2byte 20                     @ price
	.byte 0x0F          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B8EE         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 169
@ ROM offset: 0x0055E950
@ Stored item ID: 0x00A9
@ ------------------------------------------------------------------
gItem_169:
	.byte 0x78, 0x85, 0x87, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00A9            @ itemId
	.2byte 20                     @ price
	.byte 0x10          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B908         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 170
@ ROM offset: 0x0055E978
@ Stored item ID: 0x00AA
@ ------------------------------------------------------------------
gItem_170:
	.byte 0x56, 0x71, 0x77, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00AA            @ itemId
	.2byte 20                     @ price
	.byte 0x11          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B922         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 171
@ ROM offset: 0x0055E9A0
@ Stored item ID: 0x00AB
@ ------------------------------------------------------------------
gItem_171:
	.byte 0x74, 0x60, 0x9C, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00AB            @ itemId
	.2byte 20                     @ price
	.byte 0x12          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B939         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 172
@ ROM offset: 0x0055E9C8
@ Stored item ID: 0x00AC
@ ------------------------------------------------------------------
gItem_172:
	.byte 0x8E, 0x51, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00AC            @ itemId
	.2byte 20                     @ price
	.byte 0x13          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B950         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 173
@ ROM offset: 0x0055E9F0
@ Stored item ID: 0x00AD
@ ------------------------------------------------------------------
gItem_173:
	.byte 0x5B, 0x7E, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00AD            @ itemId
	.2byte 20                     @ price
	.byte 0x14          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B967         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 174
@ ROM offset: 0x0055EA18
@ Stored item ID: 0x00AE
@ ------------------------------------------------------------------
gItem_174:
	.byte 0x5D, 0x60, 0xAE, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00AE            @ itemId
	.2byte 20                     @ price
	.byte 0x15          @ holdEffect
	.byte 0x04    @ holdEffectParam
	.4byte 0x0855B989         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 175
@ ROM offset: 0x0055EA40
@ Stored item ID: 0x00AF
@ ------------------------------------------------------------------
gItem_175:
	.byte 0x65, 0x90, 0x19, 0x20, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00AF            @ itemId
	.2byte 20                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B9AE         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x04               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FEEA1      @ fieldUseFunc
	.4byte 0x00000001            @ field_1C
	.4byte 0x080FEFCD            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 176
@ ROM offset: 0x0055EA68
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_176:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 177
@ ROM offset: 0x0055EA90
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_177:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 178
@ ROM offset: 0x0055EAB8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_178:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 179
@ ROM offset: 0x0055EAE0
@ Stored item ID: 0x00B3
@ ------------------------------------------------------------------
gItem_179:
	.byte 0x1B, 0x06, 0x28, 0x19, 0x0A, 0x15, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00B3            @ itemId
	.2byte 10                     @ price
	.byte 0x16          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855B9D1         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 180
@ ROM offset: 0x0055EB08
@ Stored item ID: 0x00B4
@ ------------------------------------------------------------------
gItem_180:
	.byte 0x0C, 0x2B, 0x02, 0x6A, 0xAE, 0x98, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00B4            @ itemId
	.2byte 100                     @ price
	.byte 0x17          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855B9F4         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 181
@ ROM offset: 0x0055EB30
@ Stored item ID: 0x00B5
@ ------------------------------------------------------------------
gItem_181:
	.byte 0x07, 0x36, 0x03, 0x0E, 0x02, 0x88, 0x9D, 0x5D, 0xFF, 0x00    @ name[10]
	.2byte 0x00B5            @ itemId
	.2byte 3000                     @ price
	.byte 0x18          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BA13         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 182
@ ROM offset: 0x0055EB58
@ Stored item ID: 0x00B6
@ ------------------------------------------------------------------
gItem_182:
	.byte 0x37, 0x08, 0x0C, 0x35, 0x03, 0x0F, 0x03, 0x11, 0xFF, 0x00    @ name[10]
	.2byte 0x00B6            @ itemId
	.2byte 3000                     @ price
	.byte 0x19          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BA33         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 183
@ ROM offset: 0x0055EB80
@ Stored item ID: 0x00B7
@ ------------------------------------------------------------------
gItem_183:
	.byte 0x0E, 0x2E, 0x0E, 0x02, 0x19, 0x62, 0x72, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00B7            @ itemId
	.2byte 100                     @ price
	.byte 0x1A          @ holdEffect
	.byte 0x14    @ holdEffectParam
	.4byte 0x0855BA4E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 184
@ ROM offset: 0x0055EBA8
@ Stored item ID: 0x00B8
@ ------------------------------------------------------------------
gItem_184:
	.byte 0x24, 0x0D, 0x27, 0x38, 0x19, 0x0D, 0x3E, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00B8            @ itemId
	.2byte 100                     @ price
	.byte 0x1B          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BA6D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 185
@ ROM offset: 0x0055EBD0
@ Stored item ID: 0x00B9
@ ------------------------------------------------------------------
gItem_185:
	.byte 0x72, 0x7E, 0x60, 0x79, 0x6A, 0xAE, 0x98, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00B9            @ itemId
	.2byte 100                     @ price
	.byte 0x1C          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BA8F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 186
@ ROM offset: 0x0055EBF8
@ Stored item ID: 0x00BA
@ ------------------------------------------------------------------
gItem_186:
	.byte 0x0A, 0x41, 0x2C, 0x28, 0x6A, 0x61, 0x6F, 0x57, 0xFF, 0x00    @ name[10]
	.2byte 0x00BA            @ itemId
	.2byte 100                     @ price
	.byte 0x1D          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BAAF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 187
@ ROM offset: 0x0055EC20
@ Stored item ID: 0x00BB
@ ------------------------------------------------------------------
gItem_187:
	.byte 0x05, 0x03, 0x3D, 0x34, 0x19, 0x0C, 0x29, 0x0C, 0xFF, 0x00    @ name[10]
	.2byte 0x00BB            @ itemId
	.2byte 100                     @ price
	.byte 0x1E          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BAD0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 188
@ ROM offset: 0x0055EC48
@ Stored item ID: 0x00BC
@ ------------------------------------------------------------------
gItem_188:
	.byte 0x38, 0x2E, 0x19, 0x0A, 0x15, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00BC            @ itemId
	.2byte 100                     @ price
	.byte 0x1F          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BAF3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 189
@ ROM offset: 0x0055EC70
@ Stored item ID: 0x00BD
@ ------------------------------------------------------------------
gItem_189:
	.byte 0x05, 0x1F, 0x23, 0x28, 0x0A, 0x46, 0x2E, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00BD            @ itemId
	.2byte 100                     @ price
	.byte 0x20          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BB13         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 190
@ ROM offset: 0x0055EC98
@ Stored item ID: 0x00BE
@ ------------------------------------------------------------------
gItem_190:
	.byte 0x07, 0x26, 0x22, 0x19, 0x05, 0x1C, 0x41, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00BE            @ itemId
	.2byte 200                     @ price
	.byte 0x21          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BB35         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 191
@ ROM offset: 0x0055ECC0
@ Stored item ID: 0x00BF
@ ------------------------------------------------------------------
gItem_191:
	.byte 0x0A, 0x0A, 0x2B, 0x19, 0x0C, 0x3E, 0x08, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00BF            @ itemId
	.2byte 200                     @ price
	.byte 0x22          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BB59         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 192
@ ROM offset: 0x0055ECE8
@ Stored item ID: 0x00C0
@ ------------------------------------------------------------------
gItem_192:
	.byte 0x0C, 0x2E, 0x06, 0x02, 0x19, 0x57, 0x96, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C0            @ itemId
	.2byte 200                     @ price
	.byte 0x23          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BB7C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 193
@ ROM offset: 0x0055ED10
@ Stored item ID: 0x00C1
@ ------------------------------------------------------------------
gItem_193:
	.byte 0x0C, 0x2E, 0x06, 0x02, 0x19, 0x53, 0x7B, 0x5A, 0xFF, 0x00    @ name[10]
	.2byte 0x00C1            @ itemId
	.2byte 200                     @ price
	.byte 0x24          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BB9E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 194
@ ROM offset: 0x0055ED38
@ Stored item ID: 0x00C2
@ ------------------------------------------------------------------
gItem_194:
	.byte 0x09, 0x21, 0x28, 0x41, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C2            @ itemId
	.2byte 200                     @ price
	.byte 0x25          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BBC0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 195
@ ROM offset: 0x0055ED60
@ Stored item ID: 0x00C3
@ ------------------------------------------------------------------
gItem_195:
	.byte 0x06, 0x2C, 0x27, 0x3E, 0x19, 0x02, 0x0C, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C3            @ itemId
	.2byte 200                     @ price
	.byte 0x26          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BBDE         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 196
@ ROM offset: 0x0055ED88
@ Stored item ID: 0x00C4
@ ------------------------------------------------------------------
gItem_196:
	.byte 0x07, 0x01, 0x02, 0x19, 0x6A, 0x61, 0x6F, 0x57, 0xFF, 0x00    @ name[10]
	.2byte 0x00C4            @ itemId
	.2byte 200                     @ price
	.byte 0x27          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BBFB         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 197
@ ROM offset: 0x0055EDB0
@ Stored item ID: 0x00C5
@ ------------------------------------------------------------------
gItem_197:
	.byte 0x0C, 0x01, 0x2C, 0x0E, 0x60, 0x6F, 0x8B, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C5            @ itemId
	.2byte 200                     @ price
	.byte 0x28          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BC1B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 198
@ ROM offset: 0x0055EDD8
@ Stored item ID: 0x00C6
@ ------------------------------------------------------------------
gItem_198:
	.byte 0x9C, 0x7E, 0x64, 0x7A, 0x7E, 0x8E, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C6            @ itemId
	.2byte 200                     @ price
	.byte 0x29          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BC3D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 199
@ ROM offset: 0x0055EE00
@ Stored item ID: 0x00C7
@ ------------------------------------------------------------------
gItem_199:
	.byte 0x72, 0x60, 0x79, 0x5A, 0xAE, 0x64, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C7            @ itemId
	.2byte 100                     @ price
	.byte 0x2A          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BC5A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 200
@ ROM offset: 0x0055EE28
@ Stored item ID: 0x00C8
@ ------------------------------------------------------------------
gItem_200:
	.byte 0x10, 0x49, 0x19, 0x0A, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C8            @ itemId
	.2byte 200                     @ price
	.byte 0x2B          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BC7B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 201
@ ROM offset: 0x0055EE50
@ Stored item ID: 0x00C9
@ ------------------------------------------------------------------
gItem_201:
	.byte 0x28, 0x35, 0x03, 0x19, 0x53, 0x7B, 0x5A, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00C9            @ itemId
	.2byte 2100                     @ price
	.byte 0x2C          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BC9F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 202
@ ROM offset: 0x0055EE78
@ Stored item ID: 0x00CA
@ ------------------------------------------------------------------
gItem_202:
	.byte 0x44, 0x2E, 0x07, 0x41, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00CA            @ itemId
	.2byte 100                     @ price
	.byte 0x2D          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BCBD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 203
@ ROM offset: 0x0055EEA0
@ Stored item ID: 0x00CB
@ ------------------------------------------------------------------
gItem_203:
	.byte 0x24, 0x2C, 0x27, 0x06, 0x02, 0x0D, 0x15, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00CB            @ itemId
	.2byte 100                     @ price
	.byte 0x2E          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BCE0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 204
@ ROM offset: 0x0055EEC8
@ Stored item ID: 0x00CC
@ ------------------------------------------------------------------
gItem_204:
	.byte 0x06, 0x10, 0x02, 0x02, 0x0C, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00CC            @ itemId
	.2byte 100                     @ price
	.byte 0x2F          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BD01         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 205
@ ROM offset: 0x0055EEF0
@ Stored item ID: 0x00CD
@ ------------------------------------------------------------------
gItem_205:
	.byte 0x07, 0x0E, 0x07, 0x19, 0x60, 0x68, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00CD            @ itemId
	.2byte 100                     @ price
	.byte 0x30          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BD21         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 206
@ ROM offset: 0x0055EF18
@ Stored item ID: 0x00CE
@ ------------------------------------------------------------------
gItem_206:
	.byte 0x08, 0x2B, 0x02, 0x72, 0x87, 0x68, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00CE            @ itemId
	.2byte 100                     @ price
	.byte 0x31          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BD41         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 207
@ ROM offset: 0x0055EF40
@ Stored item ID: 0x00CF
@ ------------------------------------------------------------------
gItem_207:
	.byte 0x08, 0x2B, 0x05, 0x47, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00CF            @ itemId
	.2byte 100                     @ price
	.byte 0x32          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BD61         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 208
@ ROM offset: 0x0055EF68
@ Stored item ID: 0x00D0
@ ------------------------------------------------------------------
gItem_208:
	.byte 0x3D, 0x0C, 0x34, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D0            @ itemId
	.2byte 100                     @ price
	.byte 0x33          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BD83         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 209
@ ROM offset: 0x0055EF90
@ Stored item ID: 0x00D1
@ ------------------------------------------------------------------
gItem_209:
	.byte 0x0C, 0x2E, 0x4C, 0x19, 0x0C, 0x3E, 0x08, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D1            @ itemId
	.2byte 100                     @ price
	.byte 0x34          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BDA4         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 210
@ ROM offset: 0x0055EFB8
@ Stored item ID: 0x00D2
@ ------------------------------------------------------------------
gItem_210:
	.byte 0x0D, 0x29, 0x45, 0x02, 0x08, 0x11, 0x46, 0x0C, 0xFF, 0x00    @ name[10]
	.2byte 0x00D2            @ itemId
	.2byte 100                     @ price
	.byte 0x35          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BDC4         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 211
@ ROM offset: 0x0055EFE0
@ Stored item ID: 0x00D3
@ ------------------------------------------------------------------
gItem_211:
	.byte 0x45, 0x08, 0x96, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D3            @ itemId
	.2byte 100                     @ price
	.byte 0x36          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BDE5         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 212
@ ROM offset: 0x0055F008
@ Stored item ID: 0x00D4
@ ------------------------------------------------------------------
gItem_212:
	.byte 0x14, 0x09, 0x15, 0x02, 0x0A, 0x05, 0x28, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D4            @ itemId
	.2byte 100                     @ price
	.byte 0x37          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BE05         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 213
@ ROM offset: 0x0055F030
@ Stored item ID: 0x00D5
@ ------------------------------------------------------------------
gItem_213:
	.byte 0x19, 0x2B, 0x02, 0x19, 0x05, 0x1C, 0x41, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D5            @ itemId
	.2byte 100                     @ price
	.byte 0x38          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BE26         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 214
@ ROM offset: 0x0055F058
@ Stored item ID: 0x00D6
@ ------------------------------------------------------------------
gItem_214:
	.byte 0x1F, 0x37, 0x50, 0x10, 0x5D, 0x9D, 0xAE, 0x7E, 0xFF, 0x00    @ name[10]
	.2byte 0x00D6            @ itemId
	.2byte 100                     @ price
	.byte 0x39          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BE48         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 215
@ ROM offset: 0x0055F080
@ Stored item ID: 0x00D7
@ ------------------------------------------------------------------
gItem_215:
	.byte 0x23, 0x08, 0x10, 0x2E, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D7            @ itemId
	.2byte 9800                     @ price
	.byte 0x3A          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BE6A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 216
@ ROM offset: 0x0055F0A8
@ Stored item ID: 0x00D8
@ ------------------------------------------------------------------
gItem_216:
	.byte 0x28, 0x35, 0x03, 0x19, 0x57, 0x96, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00D8            @ itemId
	.2byte 100                     @ price
	.byte 0x3B          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BE8B         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 217
@ ROM offset: 0x0055F0D0
@ Stored item ID: 0x00D9
@ ------------------------------------------------------------------
gItem_217:
	.byte 0x5C, 0x79, 0x58, 0x19, 0x5D, 0x56, 0xAE, 0x6C, 0xFF, 0x00    @ name[10]
	.2byte 0x00D9            @ itemId
	.2byte 100                     @ price
	.byte 0x3C          @ holdEffect
	.byte 0x0A    @ holdEffectParam
	.4byte 0x0855BEAD         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 218
@ ROM offset: 0x0055F0F8
@ Stored item ID: 0x00DA
@ ------------------------------------------------------------------
gItem_218:
	.byte 0x51, 0xA0, 0x9D, 0x89, 0x7A, 0xAE, 0x95, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00DA            @ itemId
	.2byte 2100                     @ price
	.byte 0x3D          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BECF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 219
@ ROM offset: 0x0055F120
@ Stored item ID: 0x00DB
@ ------------------------------------------------------------------
gItem_219:
	.byte 0x06, 0x02, 0x37, 0x27, 0x19, 0x0D, 0x3E, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00DB            @ itemId
	.2byte 200                     @ price
	.byte 0x3E          @ holdEffect
	.byte 0x08    @ holdEffectParam
	.4byte 0x0855BEE3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 220
@ ROM offset: 0x0055F148
@ Stored item ID: 0x00DC
@ ------------------------------------------------------------------
gItem_220:
	.byte 0x03, 0x0C, 0x05, 0x19, 0x05, 0x0A, 0x03, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00DC            @ itemId
	.2byte 9600                     @ price
	.byte 0x34          @ holdEffect
	.byte 0x05    @ holdEffectParam
	.4byte 0x0855BF06         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 221
@ ROM offset: 0x0055F170
@ Stored item ID: 0x00DD
@ ------------------------------------------------------------------
gItem_221:
	.byte 0x19, 0x2E, 0x07, 0x19, 0x05, 0x0A, 0x03, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00DD            @ itemId
	.2byte 9600                     @ price
	.byte 0x16          @ holdEffect
	.byte 0x05    @ holdEffectParam
	.4byte 0x0855BF2C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 222
@ ROM offset: 0x0055F198
@ Stored item ID: 0x00DE
@ ------------------------------------------------------------------
gItem_222:
	.byte 0x77, 0xA0, 0x57, 0xAE, 0x9B, 0x7E, 0x61, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00DE            @ itemId
	.2byte 10                     @ price
	.byte 0x3F          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BF4F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 223
@ ROM offset: 0x0055F1C0
@ Stored item ID: 0x00DF
@ ------------------------------------------------------------------
gItem_223:
	.byte 0x72, 0x60, 0x79, 0x9B, 0x53, 0x91, 0xAE, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00DF            @ itemId
	.2byte 10                     @ price
	.byte 0x40          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BF70         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 224
@ ROM offset: 0x0055F1E8
@ Stored item ID: 0x00E0
@ ------------------------------------------------------------------
gItem_224:
	.byte 0x1C, 0x14, 0x02, 0x6E, 0x68, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00E0            @ itemId
	.2byte 500                     @ price
	.byte 0x41          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BF86         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 225
@ ROM offset: 0x0055F210
@ Stored item ID: 0x00E1
@ ------------------------------------------------------------------
gItem_225:
	.byte 0x15, 0x37, 0x18, 0x38, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00E1            @ itemId
	.2byte 200                     @ price
	.byte 0x42          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BFA8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 226
@ ROM offset: 0x0055F238
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_226:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 227
@ ROM offset: 0x0055F260
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_227:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 228
@ ROM offset: 0x0055F288
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_228:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 229
@ ROM offset: 0x0055F2B0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_229:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 230
@ ROM offset: 0x0055F2D8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_230:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 231
@ ROM offset: 0x0055F300
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_231:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 232
@ ROM offset: 0x0055F328
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_232:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 233
@ ROM offset: 0x0055F350
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_233:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 234
@ ROM offset: 0x0055F378
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_234:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 235
@ ROM offset: 0x0055F3A0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_235:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 236
@ ROM offset: 0x0055F3C8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_236:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 237
@ ROM offset: 0x0055F3F0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_237:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 238
@ ROM offset: 0x0055F418
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_238:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 239
@ ROM offset: 0x0055F440
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_239:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 240
@ ROM offset: 0x0055F468
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_240:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 241
@ ROM offset: 0x0055F490
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_241:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 242
@ ROM offset: 0x0055F4B8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_242:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 243
@ ROM offset: 0x0055F4E0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_243:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 244
@ ROM offset: 0x0055F508
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_244:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 245
@ ROM offset: 0x0055F530
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_245:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 246
@ ROM offset: 0x0055F558
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_246:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 247
@ ROM offset: 0x0055F580
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_247:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 248
@ ROM offset: 0x0055F5A8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_248:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 249
@ ROM offset: 0x0055F5D0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_249:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 250
@ ROM offset: 0x0055F5F8
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_250:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 251
@ ROM offset: 0x0055F620
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_251:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 252
@ ROM offset: 0x0055F648
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_252:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 253
@ ROM offset: 0x0055F670
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_253:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 254
@ ROM offset: 0x0055F698
@ Stored item ID: 0x00FE
@ ------------------------------------------------------------------
gItem_254:
	.byte 0x01, 0x06, 0x02, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00FE            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BFC4         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 255
@ ROM offset: 0x0055F6C0
@ Stored item ID: 0x00FF
@ ------------------------------------------------------------------
gItem_255:
	.byte 0x01, 0x05, 0x02, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x00FF            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855BFE8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 256
@ ROM offset: 0x0055F6E8
@ Stored item ID: 0x0100
@ ------------------------------------------------------------------
gItem_256:
	.byte 0x9C, 0x7E, 0x58, 0x19, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0x00    @ name[10]
	.2byte 0x0100            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C00C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 257
@ ROM offset: 0x0055F710
@ Stored item ID: 0x0101
@ ------------------------------------------------------------------
gItem_257:
	.byte 0x20, 0x45, 0x28, 0x19, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0x00    @ name[10]
	.2byte 0x0101            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C02F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 258
@ ROM offset: 0x0055F738
@ Stored item ID: 0x0102
@ ------------------------------------------------------------------
gItem_258:
	.byte 0x07, 0x02, 0x2B, 0x19, 0x96, 0x7E, 0x91, 0x65, 0xFF, 0x00    @ name[10]
	.2byte 0x0102            @ itemId
	.2byte 100                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C052         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 259
@ ROM offset: 0x0055F760
@ Stored item ID: 0x0103
@ ------------------------------------------------------------------
gItem_259:
	.byte 0x6F, 0xA0, 0x6A, 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0xFF, 0x00    @ name[10]
	.2byte 0x0103            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C076         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FDAED      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 260
@ ROM offset: 0x0055F788
@ Stored item ID: 0x0104
@ ------------------------------------------------------------------
gItem_260:
	.byte 0x5A, 0x52, 0x7E, 0x59, 0xAE, 0x5D, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0104            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C09A         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FE489      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 261
@ ROM offset: 0x0055F7B0
@ Stored item ID: 0x0105
@ ------------------------------------------------------------------
gItem_261:
	.byte 0x91, 0x53, 0x8D, 0x7E, 0x89, 0x6F, 0x5C, 0x7E, 0xFF, 0x00    @ name[10]
	.2byte 0x0105            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C0B9         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FDCE5      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 262
@ ROM offset: 0x0055F7D8
@ Stored item ID: 0x0106
@ ------------------------------------------------------------------
gItem_262:
	.byte 0x9A, 0x7B, 0x19, 0x12, 0x28, 0x3C, 0x05, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0106            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C0D7         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FDC7D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 263
@ ROM offset: 0x0055F800
@ Stored item ID: 0x0107
@ ------------------------------------------------------------------
gItem_263:
	.byte 0x02, 0x02, 0x12, 0x28, 0x3C, 0x05, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0107            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C0F7         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FDC7D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000001            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 264
@ ROM offset: 0x0055F828
@ Stored item ID: 0x0108
@ ------------------------------------------------------------------
gItem_264:
	.byte 0x0D, 0x3B, 0x02, 0x12, 0x28, 0x3C, 0x05, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0108            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C116         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FDC7D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000002            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 265
@ ROM offset: 0x0055F850
@ Stored item ID: 0x0109
@ ------------------------------------------------------------------
gItem_265:
	.byte 0x1C, 0x18, 0x19, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0109            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C135         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 266
@ ROM offset: 0x0055F878
@ Stored item ID: 0x010A
@ ------------------------------------------------------------------
gItem_266:
	.byte 0x5A, 0x7E, 0x63, 0x5D, 0x64, 0x9B, 0x5D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x010A            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C147         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 267
@ ROM offset: 0x0055F8A0
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_267:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 268
@ ROM offset: 0x0055F8C8
@ Stored item ID: 0x010C
@ ------------------------------------------------------------------
gItem_268:
	.byte 0x6E, 0x54, 0x79, 0x5A, 0x3D, 0x36, 0x03, 0x2B, 0xFF, 0x00    @ name[10]
	.2byte 0x010C            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C15F         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FE5F9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 269
@ ROM offset: 0x0055F8F0
@ Stored item ID: 0x010D
@ ------------------------------------------------------------------
gItem_269:
	.byte 0x94, 0x9A, 0x7E, 0x19, 0x16, 0x23, 0x12, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x010D            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C182         @ description
	.byte 2                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 270
@ ROM offset: 0x0055F918
@ Stored item ID: 0x010E
@ ------------------------------------------------------------------
gItem_270:
	.byte 0x1A, 0x02, 0x48, 0x08, 0x2B, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x010E            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C1A2         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 271
@ ROM offset: 0x0055F940
@ Stored item ID: 0x010F
@ ------------------------------------------------------------------
gItem_271:
	.byte 0x11, 0x06, 0x19, 0x56, 0x88, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x010F            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C1BA         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 272
@ ROM offset: 0x0055F968
@ Stored item ID: 0x0110
@ ------------------------------------------------------------------
gItem_272:
	.byte 0x91, 0xAE, 0x64, 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0xFF, 0x00    @ name[10]
	.2byte 0x0110            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C1DA         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FDAED      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000001            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 273
@ ROM offset: 0x0055F990
@ Stored item ID: 0x0111
@ ------------------------------------------------------------------
gItem_273:
	.byte 0x9F, 0x7B, 0xA0, 0x58, 0x59, 0xAE, 0x5D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0111            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C1FE         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x03            @ type
	.4byte 0x080FE3C1      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 274
@ ROM offset: 0x0055F9B8
@ Stored item ID: 0x0112
@ ------------------------------------------------------------------
gItem_274:
	.byte 0x91, 0x52, 0x8B, 0x1D, 0x19, 0x13, 0x37, 0x20, 0xFF, 0x00    @ name[10]
	.2byte 0x0112            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C21E         @ description
	.byte 2                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 275
@ ROM offset: 0x0055F9E0
@ Stored item ID: 0x0113
@ ------------------------------------------------------------------
gItem_275:
	.byte 0x21, 0x3A, 0x2E, 0x19, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0x00    @ name[10]
	.2byte 0x0113            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C234         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000001            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 276
@ ROM offset: 0x0055FA08
@ Stored item ID: 0x0114
@ ------------------------------------------------------------------
gItem_276:
	.byte 0x49, 0x16, 0x02, 0x2B, 0x19, 0x10, 0x1F, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0114            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C249         @ description
	.byte 2                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 277
@ ROM offset: 0x0055FA30
@ Stored item ID: 0x0115
@ ------------------------------------------------------------------
gItem_277:
	.byte 0x01, 0x02, 0x02, 0x2B, 0x19, 0x10, 0x1F, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0115            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C26D         @ description
	.byte 2                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 278
@ ROM offset: 0x0055FA58
@ Stored item ID: 0x0116
@ ------------------------------------------------------------------
gItem_278:
	.byte 0x10, 0x2E, 0x11, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0116            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C291         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 279
@ ROM offset: 0x0055FA80
@ Stored item ID: 0x0117
@ ------------------------------------------------------------------
gItem_279:
	.byte 0x8B, 0xAE, 0x8B, 0xAE, 0x8B, 0xAE, 0x89, 0x79, 0xFF, 0x00    @ name[10]
	.2byte 0x0117            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C2A6         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 280
@ ROM offset: 0x0055FAA8
@ Stored item ID: 0x0118
@ ------------------------------------------------------------------
gItem_280:
	.byte 0x02, 0x2E, 0x0E, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0118            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C2C8         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 281
@ ROM offset: 0x0055FAD0
@ Stored item ID: 0x0119
@ ------------------------------------------------------------------
gItem_281:
	.byte 0xA2, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00    @ name[10]
	.2byte 0x0119            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C2DD         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 282
@ ROM offset: 0x0055FAF8
@ Stored item ID: 0x011A
@ ------------------------------------------------------------------
gItem_282:
	.byte 0xA3, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00    @ name[10]
	.2byte 0x011A            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C2F4         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 283
@ ROM offset: 0x0055FB20
@ Stored item ID: 0x011B
@ ------------------------------------------------------------------
gItem_283:
	.byte 0xA5, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00    @ name[10]
	.2byte 0x011B            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C30B         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 284
@ ROM offset: 0x0055FB48
@ Stored item ID: 0x011C
@ ------------------------------------------------------------------
gItem_284:
	.byte 0xA7, 0x3B, 0x03, 0x0C, 0x12, 0x19, 0x56, 0x88, 0xFF, 0x00    @ name[10]
	.2byte 0x011C            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C322         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 285
@ ROM offset: 0x0055FB70
@ Stored item ID: 0x011D
@ ------------------------------------------------------------------
gItem_285:
	.byte 0x0F, 0x03, 0x0A, 0x19, 0x56, 0x88, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x011D            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C339         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 286
@ ROM offset: 0x0055FB98
@ Stored item ID: 0x011E
@ ------------------------------------------------------------------
gItem_286:
	.byte 0x18, 0x50, 0x0A, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x011E            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C351         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 287
@ ROM offset: 0x0055FBC0
@ Stored item ID: 0x011F
@ ------------------------------------------------------------------
gItem_287:
	.byte 0x62, 0x72, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x011F            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C376         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 288
@ ROM offset: 0x0055FBE8
@ Stored item ID: 0x0120
@ ------------------------------------------------------------------
gItem_288:
	.byte 0x94, 0x9A, 0x7E, 0x5D, 0x5A, 0xAE, 0x9D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0120            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C39B         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 289
@ ROM offset: 0x0055FC10
@ Stored item ID: 0x0121
@ ------------------------------------------------------------------
gItem_289:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA2, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0121            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C3BF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 290
@ ROM offset: 0x0055FC38
@ Stored item ID: 0x0122
@ ------------------------------------------------------------------
gItem_290:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA3, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0122            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C3E4         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 291
@ ROM offset: 0x0055FC60
@ Stored item ID: 0x0123
@ ------------------------------------------------------------------
gItem_291:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA4, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0123            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C402         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 292
@ ROM offset: 0x0055FC88
@ Stored item ID: 0x0124
@ ------------------------------------------------------------------
gItem_292:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA5, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0124            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C421         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 293
@ ROM offset: 0x0055FCB0
@ Stored item ID: 0x0125
@ ------------------------------------------------------------------
gItem_293:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA6, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0125            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C442         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 294
@ ROM offset: 0x0055FCD8
@ Stored item ID: 0x0126
@ ------------------------------------------------------------------
gItem_294:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA7, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0126            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C461         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 295
@ ROM offset: 0x0055FD00
@ Stored item ID: 0x0127
@ ------------------------------------------------------------------
gItem_295:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA8, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0127            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C480         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 296
@ ROM offset: 0x0055FD28
@ Stored item ID: 0x0128
@ ------------------------------------------------------------------
gItem_296:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xA9, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0128            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C4A1         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 297
@ ROM offset: 0x0055FD50
@ Stored item ID: 0x0129
@ ------------------------------------------------------------------
gItem_297:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA1, 0xAA, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0129            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C4C0         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 298
@ ROM offset: 0x0055FD78
@ Stored item ID: 0x012A
@ ------------------------------------------------------------------
gItem_298:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA1, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x012A            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C4E2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 299
@ ROM offset: 0x0055FDA0
@ Stored item ID: 0x012B
@ ------------------------------------------------------------------
gItem_299:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA2, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x012B            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C505         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 300
@ ROM offset: 0x0055FDC8
@ Stored item ID: 0x012C
@ ------------------------------------------------------------------
gItem_300:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA3, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x012C            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C524         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 301
@ ROM offset: 0x0055FDF0
@ Stored item ID: 0x012D
@ ------------------------------------------------------------------
gItem_301:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA4, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x012D            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C545         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 302
@ ROM offset: 0x0055FE18
@ Stored item ID: 0x012E
@ ------------------------------------------------------------------
gItem_302:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA5, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x012E            @ itemId
	.2byte 5500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C568         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 303
@ ROM offset: 0x0055FE40
@ Stored item ID: 0x012F
@ ------------------------------------------------------------------
gItem_303:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA6, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x012F            @ itemId
	.2byte 7500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C58A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 304
@ ROM offset: 0x0055FE68
@ Stored item ID: 0x0130
@ ------------------------------------------------------------------
gItem_304:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA7, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0130            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C5AF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 305
@ ROM offset: 0x0055FE90
@ Stored item ID: 0x0131
@ ------------------------------------------------------------------
gItem_305:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA8, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0131            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C5CC         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 306
@ ROM offset: 0x0055FEB8
@ Stored item ID: 0x0132
@ ------------------------------------------------------------------
gItem_306:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xA9, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0132            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C5F3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 307
@ ROM offset: 0x0055FEE0
@ Stored item ID: 0x0133
@ ------------------------------------------------------------------
gItem_307:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA2, 0xAA, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0133            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C611         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 308
@ ROM offset: 0x0055FF08
@ Stored item ID: 0x0134
@ ------------------------------------------------------------------
gItem_308:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA1, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0134            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C632         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 309
@ ROM offset: 0x0055FF30
@ Stored item ID: 0x0135
@ ------------------------------------------------------------------
gItem_309:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA2, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0135            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C653         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 310
@ ROM offset: 0x0055FF58
@ Stored item ID: 0x0136
@ ------------------------------------------------------------------
gItem_310:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA3, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0136            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C673         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 311
@ ROM offset: 0x0055FF80
@ Stored item ID: 0x0137
@ ------------------------------------------------------------------
gItem_311:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA4, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0137            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C698         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 312
@ ROM offset: 0x0055FFA8
@ Stored item ID: 0x0138
@ ------------------------------------------------------------------
gItem_312:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA5, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0138            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C6B9         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 313
@ ROM offset: 0x0055FFD0
@ Stored item ID: 0x0139
@ ------------------------------------------------------------------
gItem_313:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA6, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0139            @ itemId
	.2byte 5500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C6D9         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 314
@ ROM offset: 0x0055FFF8
@ Stored item ID: 0x013A
@ ------------------------------------------------------------------
gItem_314:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA7, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x013A            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C6F8         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 315
@ ROM offset: 0x00560020
@ Stored item ID: 0x013B
@ ------------------------------------------------------------------
gItem_315:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA8, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x013B            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C71F         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 316
@ ROM offset: 0x00560048
@ Stored item ID: 0x013C
@ ------------------------------------------------------------------
gItem_316:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xA9, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x013C            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C73E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 317
@ ROM offset: 0x00560070
@ Stored item ID: 0x013D
@ ------------------------------------------------------------------
gItem_317:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA3, 0xAA, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x013D            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C761         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 318
@ ROM offset: 0x00560098
@ Stored item ID: 0x013E
@ ------------------------------------------------------------------
gItem_318:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA1, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x013E            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C782         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 319
@ ROM offset: 0x005600C0
@ Stored item ID: 0x013F
@ ------------------------------------------------------------------
gItem_319:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA2, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x013F            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C7A3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 320
@ ROM offset: 0x005600E8
@ Stored item ID: 0x0140
@ ------------------------------------------------------------------
gItem_320:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA3, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0140            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C7C6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 321
@ ROM offset: 0x00560110
@ Stored item ID: 0x0141
@ ------------------------------------------------------------------
gItem_321:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA4, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0141            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C7E6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 322
@ ROM offset: 0x00560138
@ Stored item ID: 0x0142
@ ------------------------------------------------------------------
gItem_322:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA5, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0142            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C807         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 323
@ ROM offset: 0x00560160
@ Stored item ID: 0x0143
@ ------------------------------------------------------------------
gItem_323:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA6, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0143            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C829         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 324
@ ROM offset: 0x00560188
@ Stored item ID: 0x0144
@ ------------------------------------------------------------------
gItem_324:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA7, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0144            @ itemId
	.2byte 1000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C84A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 325
@ ROM offset: 0x005601B0
@ Stored item ID: 0x0145
@ ------------------------------------------------------------------
gItem_325:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA8, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0145            @ itemId
	.2byte 2000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C86D         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 326
@ ROM offset: 0x005601D8
@ Stored item ID: 0x0146
@ ------------------------------------------------------------------
gItem_326:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xA9, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0146            @ itemId
	.2byte 5500                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C88E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 327
@ ROM offset: 0x00560200
@ Stored item ID: 0x0147
@ ------------------------------------------------------------------
gItem_327:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA4, 0xAA, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0147            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C8B3         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 328
@ ROM offset: 0x00560228
@ Stored item ID: 0x0148
@ ------------------------------------------------------------------
gItem_328:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA1, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0148            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C8D6         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 329
@ ROM offset: 0x00560250
@ Stored item ID: 0x0149
@ ------------------------------------------------------------------
gItem_329:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA2, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0149            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C8F7         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 330
@ ROM offset: 0x00560278
@ Stored item ID: 0x014A
@ ------------------------------------------------------------------
gItem_330:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA3, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x014A            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C913         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 331
@ ROM offset: 0x005602A0
@ Stored item ID: 0x014B
@ ------------------------------------------------------------------
gItem_331:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA4, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x014B            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C937         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 332
@ ROM offset: 0x005602C8
@ Stored item ID: 0x014C
@ ------------------------------------------------------------------
gItem_332:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA5, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x014C            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C95A         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 333
@ ROM offset: 0x005602F0
@ Stored item ID: 0x014D
@ ------------------------------------------------------------------
gItem_333:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA6, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x014D            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C97E         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 334
@ ROM offset: 0x00560318
@ Stored item ID: 0x014E
@ ------------------------------------------------------------------
gItem_334:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA7, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x014E            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C99C         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 335
@ ROM offset: 0x00560340
@ Stored item ID: 0x014F
@ ------------------------------------------------------------------
gItem_335:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA8, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x014F            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C9BF         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 336
@ ROM offset: 0x00560368
@ Stored item ID: 0x0150
@ ------------------------------------------------------------------
gItem_336:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xA9, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0150            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855C9E2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 337
@ ROM offset: 0x00560390
@ Stored item ID: 0x0151
@ ------------------------------------------------------------------
gItem_337:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA5, 0xAA, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0151            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CA04         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 338
@ ROM offset: 0x005603B8
@ Stored item ID: 0x0152
@ ------------------------------------------------------------------
gItem_338:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0xA6, 0xA1, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0152            @ itemId
	.2byte 3000                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CA22         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 339
@ ROM offset: 0x005603E0
@ Stored item ID: 0x0153
@ ------------------------------------------------------------------
gItem_339:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA2, 0xFF, 0x00    @ name[10]
	.2byte 0x0153            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CA46         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 340
@ ROM offset: 0x00560408
@ Stored item ID: 0x0154
@ ------------------------------------------------------------------
gItem_340:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA3, 0xFF, 0x00    @ name[10]
	.2byte 0x0154            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CA69         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 341
@ ROM offset: 0x00560430
@ Stored item ID: 0x0155
@ ------------------------------------------------------------------
gItem_341:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA4, 0xFF, 0x00    @ name[10]
	.2byte 0x0155            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CA8A         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 342
@ ROM offset: 0x00560458
@ Stored item ID: 0x0156
@ ------------------------------------------------------------------
gItem_342:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA5, 0xFF, 0x00    @ name[10]
	.2byte 0x0156            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CAAC         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 343
@ ROM offset: 0x00560480
@ Stored item ID: 0x0157
@ ------------------------------------------------------------------
gItem_343:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA6, 0xFF, 0x00    @ name[10]
	.2byte 0x0157            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CACD         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 344
@ ROM offset: 0x005604A8
@ Stored item ID: 0x0158
@ ------------------------------------------------------------------
gItem_344:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA7, 0xFF, 0x00    @ name[10]
	.2byte 0x0158            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CAF0         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 345
@ ROM offset: 0x005604D0
@ Stored item ID: 0x0159
@ ------------------------------------------------------------------
gItem_345:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA8, 0xFF, 0x00    @ name[10]
	.2byte 0x0159            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CB11         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 346
@ ROM offset: 0x005604F8
@ Stored item ID: 0x015A
@ ------------------------------------------------------------------
gItem_346:
	.byte 0x1B, 0x44, 0x2E, 0x6F, 0x5C, 0x7E, 0xA1, 0xA9, 0xFF, 0x00    @ name[10]
	.2byte 0x015A            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CB2F         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x03               @ pocket
	.byte 0x01            @ type
	.4byte 0x080FE79D      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 347
@ ROM offset: 0x00560520
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_347:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 348
@ ROM offset: 0x00560548
@ Stored item ID: 0x0000
@ ------------------------------------------------------------------
gItem_348:
	.byte 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xFF, 0x00    @ name[10]
	.2byte 0x0000            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEE2         @ description
	.byte 0                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x01               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 349
@ ROM offset: 0x00560570
@ Stored item ID: 0x015D
@ ------------------------------------------------------------------
gItem_349:
	.byte 0x05, 0x14, 0x45, 0x09, 0x23, 0x19, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x015D            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CB52         @ description
	.byte 2                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 350
@ ROM offset: 0x00560598
@ Stored item ID: 0x015E
@ ------------------------------------------------------------------
gItem_350:
	.byte 0x9F, 0x59, 0x73, 0x7E, 0x19, 0x1C, 0x04, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x015E            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CB79         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 351
@ ROM offset: 0x005605C0
@ Stored item ID: 0x015F
@ ------------------------------------------------------------------
gItem_351:
	.byte 0x1B, 0x20, 0x12, 0x19, 0x56, 0x88, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x015F            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CB9B         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 352
@ ROM offset: 0x005605E8
@ Stored item ID: 0x0160
@ ------------------------------------------------------------------
gItem_352:
	.byte 0x1B, 0x07, 0x06, 0x04, 0x09, 0x2E, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0160            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CBB2         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 353
@ ROM offset: 0x00560610
@ Stored item ID: 0x0161
@ ------------------------------------------------------------------
gItem_353:
	.byte 0x07, 0x2E, 0x19, 0x02, 0x2A, 0x46, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0161            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CBD6         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 354
@ ROM offset: 0x00560638
@ Stored item ID: 0x0162
@ ------------------------------------------------------------------
gItem_354:
	.byte 0x1B, 0x20, 0x12, 0x19, 0x5A, 0x6A, 0x58, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0162            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CBF5         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 355
@ ROM offset: 0x00560660
@ Stored item ID: 0x0163
@ ------------------------------------------------------------------
gItem_355:
	.byte 0x56, 0xAE, 0x95, 0x57, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0163            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CC18         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 356
@ ROM offset: 0x00560688
@ Stored item ID: 0x0164
@ ------------------------------------------------------------------
gItem_356:
	.byte 0x54, 0x7A, 0x99, 0xAE, 0x60, 0x19, 0x56, 0x88, 0xFF, 0x00    @ name[10]
	.2byte 0x0164            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CC3D         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 357
@ ROM offset: 0x005606B0
@ Stored item ID: 0x0165
@ ------------------------------------------------------------------
gItem_357:
	.byte 0x06, 0x02, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0165            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CC61         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 358
@ ROM offset: 0x005606D8
@ Stored item ID: 0x0166
@ ------------------------------------------------------------------
gItem_358:
	.byte 0x0A, 0x03, 0x27, 0x19, 0x56, 0x5E, 0x57, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0166            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CC81         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 359
@ ROM offset: 0x00560700
@ Stored item ID: 0x0167
@ ------------------------------------------------------------------
gItem_359:
	.byte 0x5C, 0x79, 0x6C, 0x5D, 0x5A, 0xAE, 0x9D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0167            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CCA0         @ description
	.byte 1                 @ importance
	.byte 0           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 360
@ ROM offset: 0x00560728
@ Stored item ID: 0x0168
@ ------------------------------------------------------------------
gItem_360:
	.byte 0x3D, 0x13, 0x2E, 0x0C, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0168            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CCC2         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 361
@ ROM offset: 0x00560750
@ Stored item ID: 0x0169
@ ------------------------------------------------------------------
gItem_361:
	.byte 0x60, 0x53, 0x7E, 0x6F, 0xA0, 0x9D, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0169            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CCE3         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 362
@ ROM offset: 0x00560778
@ Stored item ID: 0x016A
@ ------------------------------------------------------------------
gItem_362:
	.byte 0x96, 0x64, 0x79, 0x5B, 0xAE, 0x61, 0x84, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x016A            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CD07         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 363
@ ROM offset: 0x005607A0
@ Stored item ID: 0x016B
@ ------------------------------------------------------------------
gItem_363:
	.byte 0x9A, 0x52, 0x5D, 0x61, 0x82, 0xA0, 0x56, 0xAE, 0xFF, 0x00    @ name[10]
	.2byte 0x016B            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CD2C         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 364
@ ROM offset: 0x005607C8
@ Stored item ID: 0x016C
@ ------------------------------------------------------------------
gItem_364:
	.byte 0x2C, 0x3C, 0x6F, 0x5C, 0x7E, 0x59, 0xAE, 0x5D, 0xFF, 0x00    @ name[10]
	.2byte 0x016C            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CD50         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 365
@ ROM offset: 0x005607F0
@ Stored item ID: 0x016D
@ ------------------------------------------------------------------
gItem_365:
	.byte 0x07, 0x19, 0x20, 0x48, 0x08, 0x2B, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x016D            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CD67         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 366
@ ROM offset: 0x00560818
@ Stored item ID: 0x016E
@ ------------------------------------------------------------------
gItem_366:
	.byte 0x05, 0x0C, 0x04, 0x63, 0x7A, 0x97, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x016E            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CD7C         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x02            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 367
@ ROM offset: 0x00560840
@ Stored item ID: 0x016F
@ ------------------------------------------------------------------
gItem_367:
	.byte 0x64, 0x77, 0x52, 0x9B, 0x5D, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x016F            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CD9D         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 368
@ ROM offset: 0x00560868
@ Stored item ID: 0x0170
@ ------------------------------------------------------------------
gItem_368:
	.byte 0x7A, 0x52, 0x7E, 0x9A, 0xAE, 0x9B, 0x5D, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0170            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CDBE         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 369
@ ROM offset: 0x00560890
@ Stored item ID: 0x0171
@ ------------------------------------------------------------------
gItem_369:
	.byte 0x05, 0x11, 0x34, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0171            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CDDB         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 370
@ ROM offset: 0x005608B8
@ Stored item ID: 0x0172
@ ------------------------------------------------------------------
gItem_370:
	.byte 0x0C, 0x2E, 0x4C, 0x19, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0x00    @ name[10]
	.2byte 0x0172            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CDF9         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 371
@ ROM offset: 0x005608E0
@ Stored item ID: 0x0173
@ ------------------------------------------------------------------
gItem_371:
	.byte 0x55, 0xAE, 0x7B, 0x77, 0x61, 0x59, 0xA0, 0x64, 0xFF, 0x00    @ name[10]
	.2byte 0x0173            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CE15         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 372
@ ROM offset: 0x00560908
@ Stored item ID: 0x0174
@ ------------------------------------------------------------------
gItem_372:
	.byte 0x0A, 0x15, 0x02, 0x2A, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0174            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CE34         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FE4F9      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 373
@ ROM offset: 0x00560930
@ Stored item ID: 0x0175
@ ------------------------------------------------------------------
gItem_373:
	.byte 0x79, 0x97, 0xAE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0175            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CE56         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 374
@ ROM offset: 0x00560958
@ Stored item ID: 0x0176
@ ------------------------------------------------------------------
gItem_374:
	.byte 0x5B, 0x6C, 0x7F, 0x52, 0x51, 0xFF, 0xFF, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0176            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CE7A         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 375
@ ROM offset: 0x00560980
@ Stored item ID: 0x0177
@ ------------------------------------------------------------------
gItem_375:
	.byte 0x6F, 0x89, 0x6F, 0x19, 0x0C, 0x29, 0x0C, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0177            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CE9D         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

@ ------------------------------------------------------------------
@ Item table index: 376
@ ROM offset: 0x005609A8
@ Stored item ID: 0x0178
@ ------------------------------------------------------------------
gItem_376:
	.byte 0x1C, 0x29, 0x47, 0x10, 0x06, 0x02, 0x3E, 0xFF, 0xFF, 0x00    @ name[10]
	.2byte 0x0178            @ itemId
	.2byte 0                     @ price
	.byte 0x00          @ holdEffect
	.byte 0x00    @ holdEffectParam
	.4byte 0x0855CEC0         @ description
	.byte 1                 @ importance
	.byte 1           @ exitsBagOnUse
	.byte 0x05               @ pocket
	.byte 0x04            @ type
	.4byte 0x080FF071      @ fieldUseFunc
	.4byte 0x00000000            @ field_1C
	.4byte 0x00000000            @ field_20
	.4byte 0x00000000            @ field_24

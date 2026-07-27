	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_2EBCD3
gText_Rom_2EBCD3: @ 0x082EBCD3
	.string "こおり$"
	.if (. - gText_Rom_2EBCD3) > 0x4
	.error "gText_Rom_2EBCD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCD3) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCD3)
	.endif
	.incbin "baserom.gba", 0x2ebcd7, 0x1

	@ src/data/easy_chat/easy_chat_group_status.h:376 easy_chat_group_status_line_376 (+2 aliases)
	.globl gText_Rom_2EBCD8
gText_Rom_2EBCD8: @ 0x082EBCD8
	.string "ドラゴン$"
	.if (. - gText_Rom_2EBCD8) > 0x5
	.error "gText_Rom_2EBCD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCD8) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCD8)
	.endif
	.incbin "baserom.gba", 0x2ebcdd, 0x7
	.globl gUnknown_82EBCE4
gUnknown_82EBCE4: @ 0x082EBCE4
	.incbin "baserom.gba", 0x2ebce4, 0xe0
	.globl gUnknown_82EBDC4
gUnknown_82EBDC4: @ 0x082EBDC4

	@ src/battle_records.c:89 sText_DashesNoPlayer (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBDC4
gText_Rom_2EBDC4: @ 0x082EBDC4
	.string "-------$"
	.if (. - gText_Rom_2EBDC4) != 0x8
	.error "gText_Rom_2EBDC4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EBDC7
	.set gText_Rom_2EBDC7, gText_Rom_2EBDC4 + 0x3
	.globl gText_Rom_2EBDC8
	.set gText_Rom_2EBDC8, gText_Rom_2EBDC4 + 0x4

	@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gText_Rom_2EBDCC
gText_Rom_2EBDCC: @ 0x082EBDCC
	.string "あくしゅう$"
	.if (. - gText_Rom_2EBDCC) > 0x6
	.error "gText_Rom_2EBDCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDCC)
	.endif
	.incbin "baserom.gba", 0x2ebdd2, 0x2

	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gText_Rom_2EBDD4
gText_Rom_2EBDD4: @ 0x082EBDD4
	.string "あめふらし$"
	.if (. - gText_Rom_2EBDD4) > 0x6
	.error "gText_Rom_2EBDD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDD4)
	.endif
	.incbin "baserom.gba", 0x2ebdda, 0x2

	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_2EBDDC
gText_Rom_2EBDDC: @ 0x082EBDDC
	.string "かそく$"
	.if (. - gText_Rom_2EBDDC) > 0x4
	.error "gText_Rom_2EBDDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDDC) < 0x4
	.space 0x4 - (. - gText_Rom_2EBDDC)
	.endif
	.incbin "baserom.gba", 0x2ebde0, 0x4

	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_2EBDE4
gText_Rom_2EBDE4: @ 0x082EBDE4
	.string "カブトアーマー$"
	.if (. - gText_Rom_2EBDE4) > 0x8
	.error "gText_Rom_2EBDE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDE4) < 0x8
	.space 0x8 - (. - gText_Rom_2EBDE4)
	.endif

	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_2EBDEC
gText_Rom_2EBDEC: @ 0x082EBDEC
	.string "がんじょう$"
	.if (. - gText_Rom_2EBDEC) > 0x6
	.error "gText_Rom_2EBDEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDEC)
	.endif
	.incbin "baserom.gba", 0x2ebdf2, 0x2

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_2EBDF4
gText_Rom_2EBDF4: @ 0x082EBDF4
	.string "しめりけ$"
	.if (. - gText_Rom_2EBDF4) > 0x5
	.error "gText_Rom_2EBDF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBDF4)
	.endif
	.incbin "baserom.gba", 0x2ebdf9, 0x3

	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_2EBDFC
gText_Rom_2EBDFC: @ 0x082EBDFC
	.string "じゅうなん$"
	.if (. - gText_Rom_2EBDFC) > 0x6
	.error "gText_Rom_2EBDFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDFC)
	.endif
	.incbin "baserom.gba", 0x2ebe02, 0x2

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_2EBE04
gText_Rom_2EBE04: @ 0x082EBE04
	.string "すながくれ$"
	.if (. - gText_Rom_2EBE04) > 0x6
	.error "gText_Rom_2EBE04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE04) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE04)
	.endif
	.incbin "baserom.gba", 0x2ebe0a, 0x2

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBE0C
gText_Rom_2EBE0C: @ 0x082EBE0C
	.string "せいでんき$"
	.if (. - gText_Rom_2EBE0C) != 0x6
	.error "gText_Rom_2EBE0C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBE0E
	.set gText_Rom_2EBE0E, gText_Rom_2EBE0C + 0x2
	.incbin "baserom.gba", 0x2ebe12, 0x2

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_2EBE14
gText_Rom_2EBE14: @ 0x082EBE14
	.string "ちくでん$"
	.if (. - gText_Rom_2EBE14) > 0x5
	.error "gText_Rom_2EBE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE14) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE14)
	.endif
	.incbin "baserom.gba", 0x2ebe19, 0x3

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_2EBE1C
gText_Rom_2EBE1C: @ 0x082EBE1C
	.string "ちょすい$"
	.if (. - gText_Rom_2EBE1C) > 0x5
	.error "gText_Rom_2EBE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE1C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE1C)
	.endif
	.incbin "baserom.gba", 0x2ebe21, 0x3

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_2EBE24
gText_Rom_2EBE24: @ 0x082EBE24
	.string "どんかん$"
	.if (. - gText_Rom_2EBE24) > 0x5
	.error "gText_Rom_2EBE24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE24) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE24)
	.endif
	.incbin "baserom.gba", 0x2ebe29, 0x3

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_2EBE2C
gText_Rom_2EBE2C: @ 0x082EBE2C
	.string "ノーてんき$"
	.if (. - gText_Rom_2EBE2C) > 0x6
	.error "gText_Rom_2EBE2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE2C)
	.endif
	.incbin "baserom.gba", 0x2ebe32, 0x2

	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gText_Rom_2EBE34
gText_Rom_2EBE34: @ 0x082EBE34
	.string "ふくがん$"
	.if (. - gText_Rom_2EBE34) > 0x5
	.error "gText_Rom_2EBE34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE34) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE34)
	.endif
	.incbin "baserom.gba", 0x2ebe39, 0x3

	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gText_Rom_2EBE3C
gText_Rom_2EBE3C: @ 0x082EBE3C
	.string "ふみん$"
	.if (. - gText_Rom_2EBE3C) > 0x4
	.error "gText_Rom_2EBE3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE3C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE3C)
	.endif
	.incbin "baserom.gba", 0x2ebe40, 0x4

	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gText_Rom_2EBE44
gText_Rom_2EBE44: @ 0x082EBE44
	.string "へんしょく$"
	.if (. - gText_Rom_2EBE44) > 0x6
	.error "gText_Rom_2EBE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE44) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE44)
	.endif
	.incbin "baserom.gba", 0x2ebe4a, 0x2

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_2EBE4C
gText_Rom_2EBE4C: @ 0x082EBE4C
	.string "めんえき$"
	.if (. - gText_Rom_2EBE4C) > 0x5
	.error "gText_Rom_2EBE4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE4C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE4C)
	.endif
	.incbin "baserom.gba", 0x2ebe51, 0x3

	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gText_Rom_2EBE54
gText_Rom_2EBE54: @ 0x082EBE54
	.string "もらいび$"
	.if (. - gText_Rom_2EBE54) > 0x5
	.error "gText_Rom_2EBE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE54) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE54)
	.endif
	.incbin "baserom.gba", 0x2ebe59, 0x3

	@ src/data/abilities.h:151 abilities_line_151 (+1 aliases)
	.globl gText_Rom_2EBE5C
gText_Rom_2EBE5C: @ 0x082EBE5C
	.string "りんぷん$"
	.if (. - gText_Rom_2EBE5C) > 0x5
	.error "gText_Rom_2EBE5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE5C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE5C)
	.endif
	.incbin "baserom.gba", 0x2ebe61, 0x3

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_2EBE64
gText_Rom_2EBE64: @ 0x082EBE64
	.string "マイペース$"
	.if (. - gText_Rom_2EBE64) > 0x6
	.error "gText_Rom_2EBE64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE64) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE64)
	.endif
	.incbin "baserom.gba", 0x2ebe6a, 0x2

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_2EBE6C
gText_Rom_2EBE6C: @ 0x082EBE6C
	.string "きゅうばん$"
	.if (. - gText_Rom_2EBE6C) > 0x6
	.error "gText_Rom_2EBE6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE6C)
	.endif
	.incbin "baserom.gba", 0x2ebe72, 0x2

	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gText_Rom_2EBE74
gText_Rom_2EBE74: @ 0x082EBE74
	.string "いかく$"
	.if (. - gText_Rom_2EBE74) > 0x4
	.error "gText_Rom_2EBE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE74) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE74)
	.endif
	.incbin "baserom.gba", 0x2ebe78, 0x4

	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gText_Rom_2EBE7C
gText_Rom_2EBE7C: @ 0x082EBE7C
	.string "かげふみ$"
	.if (. - gText_Rom_2EBE7C) > 0x5
	.error "gText_Rom_2EBE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE7C)
	.endif
	.incbin "baserom.gba", 0x2ebe81, 0x3

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_2EBE84
gText_Rom_2EBE84: @ 0x082EBE84
	.string "さめはだ$"
	.if (. - gText_Rom_2EBE84) > 0x5
	.error "gText_Rom_2EBE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE84) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE84)
	.endif
	.incbin "baserom.gba", 0x2ebe89, 0x3

	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBE8C
gText_Rom_2EBE8C: @ 0x082EBE8C
	.string "ふしぎなまもり$"
	.if (. - gText_Rom_2EBE8C) != 0x8
	.error "gText_Rom_2EBE8C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBE90
	.set gText_Rom_2EBE90, gText_Rom_2EBE8C + 0x4

	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gText_Rom_2EBE94
gText_Rom_2EBE94: @ 0x082EBE94
	.string "ふゆう$"
	.if (. - gText_Rom_2EBE94) > 0x4
	.error "gText_Rom_2EBE94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE94) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE94)
	.endif
	.incbin "baserom.gba", 0x2ebe98, 0x4

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_2EBE9C
gText_Rom_2EBE9C: @ 0x082EBE9C
	.string "ほうし$"
	.if (. - gText_Rom_2EBE9C) > 0x4
	.error "gText_Rom_2EBE9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE9C)
	.endif
	.incbin "baserom.gba", 0x2ebea0, 0x4

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_2EBEA4
gText_Rom_2EBEA4: @ 0x082EBEA4
	.string "シンクロ$"
	.if (. - gText_Rom_2EBEA4) > 0x5
	.error "gText_Rom_2EBEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEA4)
	.endif
	.incbin "baserom.gba", 0x2ebea9, 0x3

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_2EBEAC
gText_Rom_2EBEAC: @ 0x082EBEAC
	.string "クリアボディ$"
	.if (. - gText_Rom_2EBEAC) > 0x7
	.error "gText_Rom_2EBEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEAC) < 0x7
	.space 0x7 - (. - gText_Rom_2EBEAC)
	.endif
	.incbin "baserom.gba", 0x2ebeb3, 0x1

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBEB4
gText_Rom_2EBEB4: @ 0x082EBEB4
	.string "しぜんかいふく$"
	.if (. - gText_Rom_2EBEB4) != 0x8
	.error "gText_Rom_2EBEB4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EBEB5
	.set gText_Rom_2EBEB5, gText_Rom_2EBEB4 + 0x1
	.globl gText_Rom_2EBEB7
	.set gText_Rom_2EBEB7, gText_Rom_2EBEB4 + 0x3

	@ src/data/abilities.h:243 abilities_line_243 (+1 aliases)
	.globl gText_Rom_2EBEBC
gText_Rom_2EBEBC: @ 0x082EBEBC
	.string "ひらいしん$"
	.if (. - gText_Rom_2EBEBC) > 0x6
	.error "gText_Rom_2EBEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEBC)
	.endif
	.incbin "baserom.gba", 0x2ebec2, 0x2

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_2EBEC4
gText_Rom_2EBEC4: @ 0x082EBEC4
	.string "てんのめぐみ$"
	.if (. - gText_Rom_2EBEC4) > 0x7
	.error "gText_Rom_2EBEC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEC4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBEC4)
	.endif
	.incbin "baserom.gba", 0x2ebecb, 0x1

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_2EBECC
gText_Rom_2EBECC: @ 0x082EBECC
	.string "すいすい$"
	.if (. - gText_Rom_2EBECC) > 0x5
	.error "gText_Rom_2EBECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBECC) < 0x5
	.space 0x5 - (. - gText_Rom_2EBECC)
	.endif
	.incbin "baserom.gba", 0x2ebed1, 0x3

	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gText_Rom_2EBED4
gText_Rom_2EBED4: @ 0x082EBED4
	.string "ようりょくそ$"
	.if (. - gText_Rom_2EBED4) > 0x7
	.error "gText_Rom_2EBED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBED4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBED4)
	.endif
	.incbin "baserom.gba", 0x2ebedb, 0x1

	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_2EBEDC
gText_Rom_2EBEDC: @ 0x082EBEDC
	.string "はっこう$"
	.if (. - gText_Rom_2EBEDC) > 0x5
	.error "gText_Rom_2EBEDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEDC)
	.endif
	.incbin "baserom.gba", 0x2ebee1, 0x3

	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_2EBEE4
gText_Rom_2EBEE4: @ 0x082EBEE4
	.string "トレース$"
	.if (. - gText_Rom_2EBEE4) > 0x5
	.error "gText_Rom_2EBEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEE4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEE4)
	.endif
	.incbin "baserom.gba", 0x2ebee9, 0x3

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_2EBEEC
gText_Rom_2EBEEC: @ 0x082EBEEC
	.string "ちからもち$"
	.if (. - gText_Rom_2EBEEC) > 0x6
	.error "gText_Rom_2EBEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEEC)
	.endif
	.incbin "baserom.gba", 0x2ebef2, 0x2

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_2EBEF4
gText_Rom_2EBEF4: @ 0x082EBEF4
	.string "どくのトゲ$"
	.if (. - gText_Rom_2EBEF4) > 0x6
	.error "gText_Rom_2EBEF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEF4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEF4)
	.endif
	.incbin "baserom.gba", 0x2ebefa, 0x2

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBEFC
gText_Rom_2EBEFC: @ 0x082EBEFC
	.string "せいしんりょく$"
	.if (. - gText_Rom_2EBEFC) != 0x8
	.error "gText_Rom_2EBEFC must retain its original byte length"
	.endif
	.globl gText_Rom_2EBEFE
	.set gText_Rom_2EBEFE, gText_Rom_2EBEFC + 0x2

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_2EBF04
gText_Rom_2EBF04: @ 0x082EBF04
	.string "マグマのよろい$"
	.if (. - gText_Rom_2EBF04) > 0x8
	.error "gText_Rom_2EBF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF04) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF04)
	.endif

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_2EBF0C
gText_Rom_2EBF0C: @ 0x082EBF0C
	.string "みずのベール$"
	.if (. - gText_Rom_2EBF0C) > 0x7
	.error "gText_Rom_2EBF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF0C) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF0C)
	.endif
	.incbin "baserom.gba", 0x2ebf13, 0x1

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_2EBF14
gText_Rom_2EBF14: @ 0x082EBF14
	.string "じりょく$"
	.if (. - gText_Rom_2EBF14) > 0x5
	.error "gText_Rom_2EBF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF14) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF14)
	.endif
	.incbin "baserom.gba", 0x2ebf19, 0x3

	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gText_Rom_2EBF1C
gText_Rom_2EBF1C: @ 0x082EBF1C
	.string "ぼうおん$"
	.if (. - gText_Rom_2EBF1C) > 0x5
	.error "gText_Rom_2EBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF1C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF1C)
	.endif
	.incbin "baserom.gba", 0x2ebf21, 0x3

	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gText_Rom_2EBF24
gText_Rom_2EBF24: @ 0x082EBF24
	.string "あめうけざら$"
	.if (. - gText_Rom_2EBF24) > 0x7
	.error "gText_Rom_2EBF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF24) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF24)
	.endif
	.incbin "baserom.gba", 0x2ebf2b, 0x1

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_2EBF2C
gText_Rom_2EBF2C: @ 0x082EBF2C
	.string "すなおこし$"
	.if (. - gText_Rom_2EBF2C) > 0x6
	.error "gText_Rom_2EBF2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF2C)
	.endif
	.incbin "baserom.gba", 0x2ebf32, 0x2

	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gText_Rom_2EBF34
gText_Rom_2EBF34: @ 0x082EBF34
	.string "プレッシャー$"
	.if (. - gText_Rom_2EBF34) > 0x7
	.error "gText_Rom_2EBF34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF34) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF34)
	.endif
	.incbin "baserom.gba", 0x2ebf3b, 0x1

	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gText_Rom_2EBF3C
gText_Rom_2EBF3C: @ 0x082EBF3C
	.string "あついしぼう$"
	.if (. - gText_Rom_2EBF3C) > 0x7
	.error "gText_Rom_2EBF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF3C) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF3C)
	.endif
	.incbin "baserom.gba", 0x2ebf43, 0x1

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_2EBF44
gText_Rom_2EBF44: @ 0x082EBF44
	.string "はやおき$"
	.if (. - gText_Rom_2EBF44) > 0x5
	.error "gText_Rom_2EBF44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF44) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF44)
	.endif
	.incbin "baserom.gba", 0x2ebf49, 0x3

	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBF4C
gText_Rom_2EBF4C: @ 0x082EBF4C
	.string "ほのおのからだ$"
	.if (. - gText_Rom_2EBF4C) != 0x8
	.error "gText_Rom_2EBF4C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBF50
	.set gText_Rom_2EBF50, gText_Rom_2EBF4C + 0x4

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_2EBF54
gText_Rom_2EBF54: @ 0x082EBF54
	.string "にげあし$"
	.if (. - gText_Rom_2EBF54) > 0x5
	.error "gText_Rom_2EBF54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF54) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF54)
	.endif
	.incbin "baserom.gba", 0x2ebf59, 0x3

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_2EBF5C
gText_Rom_2EBF5C: @ 0x082EBF5C
	.string "するどいめ$"
	.if (. - gText_Rom_2EBF5C) > 0x6
	.error "gText_Rom_2EBF5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF5C)
	.endif
	.incbin "baserom.gba", 0x2ebf62, 0x2

	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gText_Rom_2EBF64
gText_Rom_2EBF64: @ 0x082EBF64
	.string "かいりきバサミ$"
	.if (. - gText_Rom_2EBF64) > 0x8
	.error "gText_Rom_2EBF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF64) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF64)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_2EBF6C
gText_Rom_2EBF6C: @ 0x082EBF6C
	.string "ものひろい$"
	.if (. - gText_Rom_2EBF6C) > 0x6
	.error "gText_Rom_2EBF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF6C)
	.endif
	.incbin "baserom.gba", 0x2ebf72, 0x2

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_2EBF74
gText_Rom_2EBF74: @ 0x082EBF74
	.string "なまけ$"
	.if (. - gText_Rom_2EBF74) > 0x4
	.error "gText_Rom_2EBF74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF74) < 0x4
	.space 0x4 - (. - gText_Rom_2EBF74)
	.endif
	.incbin "baserom.gba", 0x2ebf78, 0x4

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_2EBF7C
gText_Rom_2EBF7C: @ 0x082EBF7C
	.string "はりきり$"
	.if (. - gText_Rom_2EBF7C) > 0x5
	.error "gText_Rom_2EBF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF7C)
	.endif
	.incbin "baserom.gba", 0x2ebf81, 0x3

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_2EBF84
gText_Rom_2EBF84: @ 0x082EBF84
	.string "メロメロボディ$"
	.if (. - gText_Rom_2EBF84) > 0x8
	.error "gText_Rom_2EBF84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF84) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF84)
	.endif

	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gText_Rom_2EBF8C
gText_Rom_2EBF8C: @ 0x082EBF8C
	.string "プラス$"
	.if (. - gText_Rom_2EBF8C) > 0x4
	.error "gText_Rom_2EBF8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF8C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBF8C)
	.endif
	.incbin "baserom.gba", 0x2ebf90, 0x4

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_2EBF94
gText_Rom_2EBF94: @ 0x082EBF94
	.string "マイナス$"
	.if (. - gText_Rom_2EBF94) > 0x5
	.error "gText_Rom_2EBF94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF94) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF94)
	.endif
	.incbin "baserom.gba", 0x2ebf99, 0x3

	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_2EBF9C
gText_Rom_2EBF9C: @ 0x082EBF9C
	.string "てんきや$"
	.if (. - gText_Rom_2EBF9C) > 0x5
	.error "gText_Rom_2EBF9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF9C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF9C)
	.endif
	.incbin "baserom.gba", 0x2ebfa1, 0x3

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_2EBFA4
gText_Rom_2EBFA4: @ 0x082EBFA4
	.string "ねんちゃく$"
	.if (. - gText_Rom_2EBFA4) > 0x6
	.error "gText_Rom_2EBFA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFA4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFA4)
	.endif
	.incbin "baserom.gba", 0x2ebfaa, 0x2

	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_2EBFAC
gText_Rom_2EBFAC: @ 0x082EBFAC
	.string "だっぴ$"
	.if (. - gText_Rom_2EBFAC) > 0x4
	.error "gText_Rom_2EBFAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFAC) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFAC)
	.endif
	.incbin "baserom.gba", 0x2ebfb0, 0x4

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_2EBFB4
gText_Rom_2EBFB4: @ 0x082EBFB4
	.string "こんじょう$"
	.if (. - gText_Rom_2EBFB4) > 0x6
	.error "gText_Rom_2EBFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFB4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFB4)
	.endif
	.incbin "baserom.gba", 0x2ebfba, 0x2

	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gText_Rom_2EBFBC
gText_Rom_2EBFBC: @ 0x082EBFBC
	.string "ふしぎなうろこ$"
	.if (. - gText_Rom_2EBFBC) > 0x8
	.error "gText_Rom_2EBFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EBFBC)
	.endif

	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gText_Rom_2EBFC4
gText_Rom_2EBFC4: @ 0x082EBFC4
	.string "ヘドロえき$"
	.if (. - gText_Rom_2EBFC4) > 0x6
	.error "gText_Rom_2EBFC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFC4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFC4)
	.endif
	.incbin "baserom.gba", 0x2ebfca, 0x2

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_2EBFCC
gText_Rom_2EBFCC: @ 0x082EBFCC
	.string "しんりょく$"
	.if (. - gText_Rom_2EBFCC) > 0x6
	.error "gText_Rom_2EBFCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFCC)
	.endif
	.incbin "baserom.gba", 0x2ebfd2, 0x2

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_2EBFD4
gText_Rom_2EBFD4: @ 0x082EBFD4
	.string "もうか$"
	.if (. - gText_Rom_2EBFD4) > 0x4
	.error "gText_Rom_2EBFD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFD4) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFD4)
	.endif
	.incbin "baserom.gba", 0x2ebfd8, 0x4

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_2EBFDC
gText_Rom_2EBFDC: @ 0x082EBFDC
	.string "げきりゅう$"
	.if (. - gText_Rom_2EBFDC) > 0x6
	.error "gText_Rom_2EBFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFDC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFDC)
	.endif
	.incbin "baserom.gba", 0x2ebfe2, 0x2

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_2EBFE4
gText_Rom_2EBFE4: @ 0x082EBFE4
	.string "むしのしらせ$"
	.if (. - gText_Rom_2EBFE4) > 0x7
	.error "gText_Rom_2EBFE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFE4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBFE4)
	.endif
	.incbin "baserom.gba", 0x2ebfeb, 0x1

	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gText_Rom_2EBFEC
gText_Rom_2EBFEC: @ 0x082EBFEC
	.string "いしあたま$"
	.if (. - gText_Rom_2EBFEC) > 0x6
	.error "gText_Rom_2EBFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFEC)
	.endif
	.incbin "baserom.gba", 0x2ebff2, 0x2

	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gText_Rom_2EBFF4
gText_Rom_2EBFF4: @ 0x082EBFF4
	.string "ひでり$"
	.if (. - gText_Rom_2EBFF4) > 0x4
	.error "gText_Rom_2EBFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFF4) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFF4)
	.endif
	.incbin "baserom.gba", 0x2ebff8, 0x4

	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gText_Rom_2EBFFC
gText_Rom_2EBFFC: @ 0x082EBFFC
	.string "ありじごく$"
	.if (. - gText_Rom_2EBFFC) > 0x6
	.error "gText_Rom_2EBFFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFFC)
	.endif
	.incbin "baserom.gba", 0x2ec002, 0x2

	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gText_Rom_2EC004
gText_Rom_2EC004: @ 0x082EC004
	.string "やるき$"
	.if (. - gText_Rom_2EC004) > 0x4
	.error "gText_Rom_2EC004 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC004) < 0x4
	.space 0x4 - (. - gText_Rom_2EC004)
	.endif
	.incbin "baserom.gba", 0x2ec008, 0x4

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_2EC00C
gText_Rom_2EC00C: @ 0x082EC00C
	.string "しろいけむり$"
	.if (. - gText_Rom_2EC00C) > 0x7
	.error "gText_Rom_2EC00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC00C) < 0x7
	.space 0x7 - (. - gText_Rom_2EC00C)
	.endif
	.incbin "baserom.gba", 0x2ec013, 0x1

	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gText_Rom_2EC014
gText_Rom_2EC014: @ 0x082EC014
	.string "ヨガパワー$"
	.if (. - gText_Rom_2EC014) > 0x6
	.error "gText_Rom_2EC014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC014) < 0x6
	.space 0x6 - (. - gText_Rom_2EC014)
	.endif
	.incbin "baserom.gba", 0x2ec01a, 0x2

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_2EC01C
gText_Rom_2EC01C: @ 0x082EC01C
	.string "シェルアーマー$"
	.if (. - gText_Rom_2EC01C) > 0x8
	.error "gText_Rom_2EC01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC01C) < 0x8
	.space 0x8 - (. - gText_Rom_2EC01C)
	.endif
	.incbin "baserom.gba", 0x2ec024, 0x8

	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gText_Rom_2EC02C
gText_Rom_2EC02C: @ 0x082EC02C
	.string "エアロック$"
	.if (. - gText_Rom_2EC02C) > 0x6
	.error "gText_Rom_2EC02C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC02C) < 0x6
	.space 0x6 - (. - gText_Rom_2EC02C)
	.endif
	.incbin "baserom.gba", 0x2ec032, 0x2
	.globl gUnknown_82EC034
gUnknown_82EC034: @ 0x082EC034
	.incbin "baserom.gba", 0x2ec034, 0x13

	@ src/data/abilities.h:15 abilities_line_15
	.globl gText_Rom_2EC047
gText_Rom_2EC047: @ 0x082EC047
	.string "ポケモンが よりつき にくくなる$"
	.if (. - gText_Rom_2EC047) > 0x11
	.error "gText_Rom_2EC047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC047) < 0x11
	.space 0x11 - (. - gText_Rom_2EC047)
	.endif
	.incbin "baserom.gba", 0x2ec058, 0x2

	@ src/data/abilities.h:22 abilities_line_22
	.globl gText_Rom_2EC05A
gText_Rom_2EC05A: @ 0x082EC05A
	.string "せんとうに でると あめを ふらす$"
	.if (. - gText_Rom_2EC05A) > 0x12
	.error "gText_Rom_2EC05A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC05A) < 0x12
	.space 0x12 - (. - gText_Rom_2EC05A)
	.endif
	.incbin "baserom.gba", 0x2ec06c, 0x1

	@ src/data/abilities.h:29 abilities_line_29
	.globl gText_Rom_2EC06D
gText_Rom_2EC06D: @ 0x082EC06D
	.string "ちょっとずつ すばやく なっていく$"
	.if (. - gText_Rom_2EC06D) > 0x12
	.error "gText_Rom_2EC06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC06D) < 0x12
	.space 0x12 - (. - gText_Rom_2EC06D)
	.endif
	.incbin "baserom.gba", 0x2ec07f, 0x1

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gText_Rom_2EC080
gText_Rom_2EC080: @ 0x082EC080
	.string "わざを きゅうしょに うけない$"
	.if (. - gText_Rom_2EC080) > 0x10
	.error "gText_Rom_2EC080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC080) < 0x10
	.space 0x10 - (. - gText_Rom_2EC080)
	.endif
	.incbin "baserom.gba", 0x2ec090, 0x16

	@ src/data/abilities.h:52 abilities_line_52
	.globl gText_Rom_2EC0A6
gText_Rom_2EC0A6: @ 0x082EC0A6
	.string "だれも じばくが できなくなる$"
	.if (. - gText_Rom_2EC0A6) > 0x10
	.error "gText_Rom_2EC0A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0A6) < 0x10
	.space 0x10 - (. - gText_Rom_2EC0A6)
	.endif
	.incbin "baserom.gba", 0x2ec0b6, 0x3

	@ src/data/abilities.h:60 abilities_line_60
	.globl gText_Rom_2EC0B9
gText_Rom_2EC0B9: @ 0x082EC0B9
	.string "まひ じょうたいに ならない$"
	.if (. - gText_Rom_2EC0B9) > 0xf
	.error "gText_Rom_2EC0B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0B9) < 0xf
	.space 0xf - (. - gText_Rom_2EC0B9)
	.endif
	.incbin "baserom.gba", 0x2ec0c8, 0x4

	@ src/data/abilities.h:68 abilities_line_68
	.globl gText_Rom_2EC0CC
gText_Rom_2EC0CC: @ 0x082EC0CC
	.string "すなあらしで かいひりつが あがる$"
	.if (. - gText_Rom_2EC0CC) > 0x12
	.error "gText_Rom_2EC0CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0CC) < 0x12
	.space 0x12 - (. - gText_Rom_2EC0CC)
	.endif
	.incbin "baserom.gba", 0x2ec0de, 0x1

	@ src/data/abilities.h:76 abilities_line_76
	.globl gText_Rom_2EC0DF
gText_Rom_2EC0DF: @ 0x082EC0DF
	.string "さわった あいてを まひさせる$"
	.if (. - gText_Rom_2EC0DF) > 0x10
	.error "gText_Rom_2EC0DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0DF) < 0x10
	.space 0x10 - (. - gText_Rom_2EC0DF)
	.endif
	.incbin "baserom.gba", 0x2ec0ef, 0x3

	@ src/data/abilities.h:83 abilities_line_83
	.globl gText_Rom_2EC0F2
gText_Rom_2EC0F2: @ 0x082EC0F2
	.string "でんきを うけると かいふくする$"
	.if (. - gText_Rom_2EC0F2) > 0x11
	.error "gText_Rom_2EC0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC0F2) < 0x11
	.space 0x11 - (. - gText_Rom_2EC0F2)
	.endif
	.incbin "baserom.gba", 0x2ec103, 0x2

	@ src/data/abilities.h:91 abilities_line_91
	.globl gText_Rom_2EC105
gText_Rom_2EC105: @ 0x082EC105
	.string "みずを うけると かいふくする$"
	.if (. - gText_Rom_2EC105) > 0x10
	.error "gText_Rom_2EC105 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC105) < 0x10
	.space 0x10 - (. - gText_Rom_2EC105)
	.endif
	.incbin "baserom.gba", 0x2ec115, 0x3

	@ src/data/abilities.h:99 abilities_line_99
	.globl gText_Rom_2EC118
gText_Rom_2EC118: @ 0x082EC118
	.string "メロメロ じょうたいに ならない$"
	.if (. - gText_Rom_2EC118) > 0x11
	.error "gText_Rom_2EC118 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC118) < 0x11
	.space 0x11 - (. - gText_Rom_2EC118)
	.endif
	.incbin "baserom.gba", 0x2ec129, 0x2

	@ src/data/abilities.h:107 abilities_line_107 (+1 aliases)
	.globl gText_Rom_2EC12B
gText_Rom_2EC12B: @ 0x082EC12B
	.string "てんきの えいきょうが なくなる$"
	.if (. - gText_Rom_2EC12B) > 0x11
	.error "gText_Rom_2EC12B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC12B) < 0x11
	.space 0x11 - (. - gText_Rom_2EC12B)
	.endif
	.incbin "baserom.gba", 0x2ec13c, 0x2

	@ src/data/abilities.h:114 abilities_line_114
	.globl gText_Rom_2EC13E
gText_Rom_2EC13E: @ 0x082EC13E
	.string "わざの めいちゅうりつが あがる$"
	.if (. - gText_Rom_2EC13E) > 0x11
	.error "gText_Rom_2EC13E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC13E) < 0x11
	.space 0x11 - (. - gText_Rom_2EC13E)
	.endif
	.incbin "baserom.gba", 0x2ec14f, 0x2

	@ src/data/abilities.h:121 abilities_line_121
	.globl gText_Rom_2EC151
gText_Rom_2EC151: @ 0x082EC151
	.string "ねむり じょうたいに ならない$"
	.if (. - gText_Rom_2EC151) > 0x10
	.error "gText_Rom_2EC151 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC151) < 0x10
	.space 0x10 - (. - gText_Rom_2EC151)
	.endif
	.incbin "baserom.gba", 0x2ec161, 0x3

	@ src/data/abilities.h:129 abilities_line_129
	.globl gText_Rom_2EC164
gText_Rom_2EC164: @ 0x082EC164
	.string "うけた わざの タイプに へんかする$"
	.if (. - gText_Rom_2EC164) > 0x13
	.error "gText_Rom_2EC164 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC164) < 0x13
	.space 0x13 - (. - gText_Rom_2EC164)
	.endif

	@ src/data/abilities.h:136 abilities_line_136
	.globl gText_Rom_2EC177
gText_Rom_2EC177: @ 0x082EC177
	.string "どく じょうたいに ならない$"
	.if (. - gText_Rom_2EC177) > 0xf
	.error "gText_Rom_2EC177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC177) < 0xf
	.space 0xf - (. - gText_Rom_2EC177)
	.endif
	.incbin "baserom.gba", 0x2ec186, 0x4

	@ src/data/abilities.h:144 abilities_line_144
	.globl gText_Rom_2EC18A
gText_Rom_2EC18A: @ 0x082EC18A
	.string "ほのおを うけると つよくなる$"
	.if (. - gText_Rom_2EC18A) > 0x10
	.error "gText_Rom_2EC18A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC18A) < 0x10
	.space 0x10 - (. - gText_Rom_2EC18A)
	.endif
	.incbin "baserom.gba", 0x2ec19a, 0x3

	@ src/data/abilities.h:152 abilities_line_152
	.globl gText_Rom_2EC19D
gText_Rom_2EC19D: @ 0x082EC19D
	.string "わざの ついかこうかを うけない$"
	.if (. - gText_Rom_2EC19D) > 0x11
	.error "gText_Rom_2EC19D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC19D) < 0x11
	.space 0x11 - (. - gText_Rom_2EC19D)
	.endif
	.incbin "baserom.gba", 0x2ec1ae, 0x2

	@ src/data/abilities.h:160 abilities_line_160
	.globl gText_Rom_2EC1B0
gText_Rom_2EC1B0: @ 0x082EC1B0
	.string "こんらん じょうたいに ならない$"
	.if (. - gText_Rom_2EC1B0) > 0x11
	.error "gText_Rom_2EC1B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1B0) < 0x11
	.space 0x11 - (. - gText_Rom_2EC1B0)
	.endif
	.incbin "baserom.gba", 0x2ec1c1, 0x2

	@ src/data/abilities.h:168 abilities_line_168
	.globl gText_Rom_2EC1C3
gText_Rom_2EC1C3: @ 0x082EC1C3
	.string "きゅうばんで じめんに はりつく$"
	.if (. - gText_Rom_2EC1C3) > 0x11
	.error "gText_Rom_2EC1C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1C3) < 0x11
	.space 0x11 - (. - gText_Rom_2EC1C3)
	.endif
	.incbin "baserom.gba", 0x2ec1d4, 0x2

	@ src/data/abilities.h:176 abilities_line_176
	.globl gText_Rom_2EC1D6
gText_Rom_2EC1D6: @ 0x082EC1D6
	.string "あいての こうげきを さげる$"
	.if (. - gText_Rom_2EC1D6) > 0xf
	.error "gText_Rom_2EC1D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1D6) < 0xf
	.space 0xf - (. - gText_Rom_2EC1D6)
	.endif
	.incbin "baserom.gba", 0x2ec1e5, 0x4

	@ src/data/abilities.h:183 abilities_line_183 (+1 aliases)
	.globl gText_Rom_2EC1E9
gText_Rom_2EC1E9: @ 0x082EC1E9
	.string "あいてを にげられなくする$"
	.if (. - gText_Rom_2EC1E9) > 0xe
	.error "gText_Rom_2EC1E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1E9) < 0xe
	.space 0xe - (. - gText_Rom_2EC1E9)
	.endif
	.incbin "baserom.gba", 0x2ec1f7, 0x5

	@ src/data/abilities.h:190 abilities_line_190 (+1 aliases)
	.globl gText_Rom_2EC1FC
gText_Rom_2EC1FC: @ 0x082EC1FC
	.string "さわった あいてを キズつける$"
	.if (. - gText_Rom_2EC1FC) > 0x10
	.error "gText_Rom_2EC1FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC1FC) < 0x10
	.space 0x10 - (. - gText_Rom_2EC1FC)
	.endif
	.incbin "baserom.gba", 0x2ec20c, 0x3

	@ src/data/abilities.h:197 abilities_line_197
	.globl gText_Rom_2EC20F
gText_Rom_2EC20F: @ 0x082EC20F
	.string "こうか ばつぐん しか あたらない$"
	.if (. - gText_Rom_2EC20F) > 0x12
	.error "gText_Rom_2EC20F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC20F) < 0x12
	.space 0x12 - (. - gText_Rom_2EC20F)
	.endif
	.incbin "baserom.gba", 0x2ec221, 0x1

	@ src/data/abilities.h:207 abilities_line_207
	.globl gText_Rom_2EC222
gText_Rom_2EC222: @ 0x082EC222
	.string "じめんタイプの わざを うけない$"
	.if (. - gText_Rom_2EC222) > 0x11
	.error "gText_Rom_2EC222 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC222) < 0x11
	.space 0x11 - (. - gText_Rom_2EC222)
	.endif
	.incbin "baserom.gba", 0x2ec233, 0x2

	@ src/data/abilities.h:215 abilities_line_215
	.globl gText_Rom_2EC235
gText_Rom_2EC235: @ 0x082EC235
	.string "さわった あいてに ほうしがつく$"
	.if (. - gText_Rom_2EC235) > 0x11
	.error "gText_Rom_2EC235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC235) < 0x11
	.space 0x11 - (. - gText_Rom_2EC235)
	.endif
	.incbin "baserom.gba", 0x2ec246, 0x2

	@ src/data/abilities.h:222 abilities_line_222
	.globl gText_Rom_2EC248
gText_Rom_2EC248: @ 0x082EC248
	.string "どく まひ やけどを あいてにうつす$"
	.if (. - gText_Rom_2EC248) > 0x13
	.error "gText_Rom_2EC248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC248) < 0x13
	.space 0x13 - (. - gText_Rom_2EC248)
	.endif

	@ src/data/abilities.h:229 abilities_line_229 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC25B
gText_Rom_2EC25B: @ 0x082EC25B
	.string "あいてに のうりょくを さげられない$"
	.if (. - gText_Rom_2EC25B) != 0x13
	.error "gText_Rom_2EC25B must retain its original byte length"
	.endif
	.globl gText_Rom_2EC269
	.set gText_Rom_2EC269, gText_Rom_2EC25B + 0xe

	@ src/data/abilities.h:237 abilities_line_237
	.globl gText_Rom_2EC26E
gText_Rom_2EC26E: @ 0x082EC26E
	.string "ひっこむと いじょうが なおる$"
	.if (. - gText_Rom_2EC26E) > 0x10
	.error "gText_Rom_2EC26E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC26E) < 0x10
	.space 0x10 - (. - gText_Rom_2EC26E)
	.endif
	.incbin "baserom.gba", 0x2ec27e, 0x3

	@ src/data/abilities.h:244 abilities_line_244
	.globl gText_Rom_2EC281
gText_Rom_2EC281: @ 0x082EC281
	.string "でんきタイプの わざが じぶんにくる$"
	.if (. - gText_Rom_2EC281) > 0x13
	.error "gText_Rom_2EC281 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC281) < 0x13
	.space 0x13 - (. - gText_Rom_2EC281)
	.endif

	@ src/data/abilities.h:252 abilities_line_252
	.globl gText_Rom_2EC294
gText_Rom_2EC294: @ 0x082EC294
	.string "わざの ついかこうかが でやすい$"
	.if (. - gText_Rom_2EC294) > 0x11
	.error "gText_Rom_2EC294 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC294) < 0x11
	.space 0x11 - (. - gText_Rom_2EC294)
	.endif
	.incbin "baserom.gba", 0x2ec2a5, 0x2

	@ src/data/abilities.h:259 abilities_line_259
	.globl gText_Rom_2EC2A7
gText_Rom_2EC2A7: @ 0x082EC2A7
	.string "あめのとき すばやさが はやくなる$"
	.if (. - gText_Rom_2EC2A7) > 0x12
	.error "gText_Rom_2EC2A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2A7) < 0x12
	.space 0x12 - (. - gText_Rom_2EC2A7)
	.endif
	.incbin "baserom.gba", 0x2ec2b9, 0x1

	@ src/data/abilities.h:266 abilities_line_266
	.globl gText_Rom_2EC2BA
gText_Rom_2EC2BA: @ 0x082EC2BA
	.string "はれのとき すばやさが はやくなる$"
	.if (. - gText_Rom_2EC2BA) > 0x12
	.error "gText_Rom_2EC2BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2BA) < 0x12
	.space 0x12 - (. - gText_Rom_2EC2BA)
	.endif
	.incbin "baserom.gba", 0x2ec2cc, 0x1

	@ src/data/abilities.h:273 abilities_line_273
	.globl gText_Rom_2EC2CD
gText_Rom_2EC2CD: @ 0x082EC2CD
	.string "ポケモンに そうぐう しやすくなる$"
	.if (. - gText_Rom_2EC2CD) > 0x12
	.error "gText_Rom_2EC2CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2CD) < 0x12
	.space 0x12 - (. - gText_Rom_2EC2CD)
	.endif
	.incbin "baserom.gba", 0x2ec2df, 0x1

	@ src/data/abilities.h:281 abilities_line_281
	.globl gText_Rom_2EC2E0
gText_Rom_2EC2E0: @ 0x082EC2E0
	.string "あいてと おなじ とくせいになる$"
	.if (. - gText_Rom_2EC2E0) > 0x11
	.error "gText_Rom_2EC2E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC2E0) < 0x11
	.space 0x11 - (. - gText_Rom_2EC2E0)
	.endif
	.incbin "baserom.gba", 0x2ec2f1, 0x2

	@ src/data/abilities.h:290 abilities_line_290 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC2F3
gText_Rom_2EC2F3: @ 0x082EC2F3
	.string "こうげきりょくが たかい$"
	.if (. - gText_Rom_2EC2F3) != 0xd
	.error "gText_Rom_2EC2F3 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC2FC
	.set gText_Rom_2EC2FC, gText_Rom_2EC2F3 + 0x9
	.incbin "baserom.gba", 0x2ec300, 0x6

	@ src/data/abilities.h:297 abilities_line_297
	.globl gText_Rom_2EC306
gText_Rom_2EC306: @ 0x082EC306
	.string "さわったあいてに どくをあたえる$"
	.if (. - gText_Rom_2EC306) > 0x11
	.error "gText_Rom_2EC306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC306) < 0x11
	.space 0x11 - (. - gText_Rom_2EC306)
	.endif
	.incbin "baserom.gba", 0x2ec317, 0x2

	@ src/data/abilities.h:304 abilities_line_304
	.globl gText_Rom_2EC319
gText_Rom_2EC319: @ 0x082EC319
	.string "ひるまない$"
	.if (. - gText_Rom_2EC319) > 0x6
	.error "gText_Rom_2EC319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC319) < 0x6
	.space 0x6 - (. - gText_Rom_2EC319)
	.endif
	.incbin "baserom.gba", 0x2ec31f, 0xd

	@ src/data/abilities.h:312 abilities_line_312
	.globl gText_Rom_2EC32C
gText_Rom_2EC32C: @ 0x082EC32C
	.string "こおり じょうたいに ならない$"
	.if (. - gText_Rom_2EC32C) > 0x10
	.error "gText_Rom_2EC32C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC32C) < 0x10
	.space 0x10 - (. - gText_Rom_2EC32C)
	.endif
	.incbin "baserom.gba", 0x2ec33c, 0x3

	@ src/data/abilities.h:320 abilities_line_320
	.globl gText_Rom_2EC33F
gText_Rom_2EC33F: @ 0x082EC33F
	.string "やけど じょうたいに ならない$"
	.if (. - gText_Rom_2EC33F) > 0x10
	.error "gText_Rom_2EC33F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC33F) < 0x10
	.space 0x10 - (. - gText_Rom_2EC33F)
	.endif
	.incbin "baserom.gba", 0x2ec34f, 0x3

	@ src/data/abilities.h:328 abilities_line_328
	.globl gText_Rom_2EC352
gText_Rom_2EC352: @ 0x082EC352
	.string "はがねタイプが にげられなくなる$"
	.if (. - gText_Rom_2EC352) > 0x11
	.error "gText_Rom_2EC352 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC352) < 0x11
	.space 0x11 - (. - gText_Rom_2EC352)
	.endif
	.incbin "baserom.gba", 0x2ec363, 0x2

	@ src/data/abilities.h:335 abilities_line_335
	.globl gText_Rom_2EC365
gText_Rom_2EC365: @ 0x082EC365
	.string "おとの わざを うけない$"
	.if (. - gText_Rom_2EC365) > 0xd
	.error "gText_Rom_2EC365 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC365) < 0xd
	.space 0xd - (. - gText_Rom_2EC365)
	.endif
	.incbin "baserom.gba", 0x2ec372, 0x6

	@ src/data/abilities.h:343 abilities_line_343
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC378
gText_Rom_2EC378: @ 0x082EC378
	.string "あめのとき すこしずつ かいふく$"
	.if (. - gText_Rom_2EC378) != 0x11
	.error "gText_Rom_2EC378 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC384
	.set gText_Rom_2EC384, gText_Rom_2EC378 + 0xc
	.incbin "baserom.gba", 0x2ec389, 0x2

	@ src/data/abilities.h:350 abilities_line_350
	.globl gText_Rom_2EC38B
gText_Rom_2EC38B: @ 0x082EC38B
	.string "せんとうで すなあらしを おこす$"
	.if (. - gText_Rom_2EC38B) > 0x11
	.error "gText_Rom_2EC38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC38B) < 0x11
	.space 0x11 - (. - gText_Rom_2EC38B)
	.endif
	.incbin "baserom.gba", 0x2ec39c, 0x2

	@ src/data/abilities.h:357 abilities_line_357
	.globl gText_Rom_2EC39E
gText_Rom_2EC39E: @ 0x082EC39E
	.string "あいての PPが へりやすくなる$"
	.if (. - gText_Rom_2EC39E) > 0x11
	.error "gText_Rom_2EC39E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC39E) < 0x11
	.space 0x11 - (. - gText_Rom_2EC39E)
	.endif
	.incbin "baserom.gba", 0x2ec3af, 0x2

	@ src/data/abilities.h:364 abilities_line_364
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC3B1
gText_Rom_2EC3B1: @ 0x082EC3B1
	.string "ほのお こおりに つよい$"
	.if (. - gText_Rom_2EC3B1) != 0xd
	.error "gText_Rom_2EC3B1 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC3BA
	.set gText_Rom_2EC3BA, gText_Rom_2EC3B1 + 0x9
	.incbin "baserom.gba", 0x2ec3be, 0x6

	@ src/data/abilities.h:372 abilities_line_372
	.globl gText_Rom_2EC3C4
gText_Rom_2EC3C4: @ 0x082EC3C4
	.string "おきるのが はやくなる$"
	.if (. - gText_Rom_2EC3C4) > 0xc
	.error "gText_Rom_2EC3C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC3C4) < 0xc
	.space 0xc - (. - gText_Rom_2EC3C4)
	.endif
	.incbin "baserom.gba", 0x2ec3d0, 0x7

	@ src/data/abilities.h:379 abilities_line_379
	.globl gText_Rom_2EC3D7
gText_Rom_2EC3D7: @ 0x082EC3D7
	.string "さわった あいてを やけど させる$"
	.if (. - gText_Rom_2EC3D7) > 0x12
	.error "gText_Rom_2EC3D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC3D7) < 0x12
	.space 0x12 - (. - gText_Rom_2EC3D7)
	.endif
	.incbin "baserom.gba", 0x2ec3e9, 0x1

	@ src/data/abilities.h:386 abilities_line_386
	.globl gText_Rom_2EC3EA
gText_Rom_2EC3EA: @ 0x082EC3EA
	.string "せんとうから にげやすい$"
	.if (. - gText_Rom_2EC3EA) > 0xd
	.error "gText_Rom_2EC3EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC3EA) < 0xd
	.space 0xd - (. - gText_Rom_2EC3EA)
	.endif
	.incbin "baserom.gba", 0x2ec3f7, 0x6

	@ src/data/abilities.h:393 abilities_line_393
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC3FD
gText_Rom_2EC3FD: @ 0x082EC3FD
	.string "あいてに めいちゅうを さげられない$"
	.if (. - gText_Rom_2EC3FD) != 0x13
	.error "gText_Rom_2EC3FD must retain its original byte length"
	.endif
	.globl gText_Rom_2EC40B
	.set gText_Rom_2EC40B, gText_Rom_2EC3FD + 0xe

	@ src/data/abilities.h:401 abilities_line_401
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC410
gText_Rom_2EC410: @ 0x082EC410
	.string "あいてに こうげきを さげられない$"
	.if (. - gText_Rom_2EC410) != 0x12
	.error "gText_Rom_2EC410 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC41D
	.set gText_Rom_2EC41D, gText_Rom_2EC410 + 0xd
	.incbin "baserom.gba", 0x2ec422, 0x1

	@ src/data/abilities.h:409 abilities_line_409
	.globl gText_Rom_2EC423
gText_Rom_2EC423: @ 0x082EC423
	.string "どうぐを ひろってくる ことがある$"
	.if (. - gText_Rom_2EC423) > 0x12
	.error "gText_Rom_2EC423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC423) < 0x12
	.space 0x12 - (. - gText_Rom_2EC423)
	.endif
	.incbin "baserom.gba", 0x2ec435, 0x1

	@ src/data/abilities.h:416 abilities_line_416
	.globl gText_Rom_2EC436
gText_Rom_2EC436: @ 0x082EC436
	.string "こうげきが れんぞくで だせない$"
	.if (. - gText_Rom_2EC436) > 0x11
	.error "gText_Rom_2EC436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC436) < 0x11
	.space 0x11 - (. - gText_Rom_2EC436)
	.endif
	.incbin "baserom.gba", 0x2ec447, 0x2

	@ src/data/abilities.h:424 abilities_line_424
	.globl gText_Rom_2EC449
gText_Rom_2EC449: @ 0x082EC449
	.string "こうげきは たかいが はずれやすい$"
	.if (. - gText_Rom_2EC449) > 0x12
	.error "gText_Rom_2EC449 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC449) < 0x12
	.space 0x12 - (. - gText_Rom_2EC449)
	.endif
	.incbin "baserom.gba", 0x2ec45b, 0x1

	@ src/data/abilities.h:431 abilities_line_431
	.globl gText_Rom_2EC45C
gText_Rom_2EC45C: @ 0x082EC45C
	.string "さわった あいてを メロメロにする$"
	.if (. - gText_Rom_2EC45C) > 0x12
	.error "gText_Rom_2EC45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC45C) < 0x12
	.space 0x12 - (. - gText_Rom_2EC45C)
	.endif
	.incbin "baserom.gba", 0x2ec46e, 0x1

	@ src/data/abilities.h:438 abilities_line_438
	.globl gText_Rom_2EC46F
gText_Rom_2EC46F: @ 0x082EC46F
	.string "マイナスが いると つよくなる$"
	.if (. - gText_Rom_2EC46F) > 0x10
	.error "gText_Rom_2EC46F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC46F) < 0x10
	.space 0x10 - (. - gText_Rom_2EC46F)
	.endif
	.incbin "baserom.gba", 0x2ec47f, 0x3

	@ src/data/abilities.h:445 abilities_line_445
	.globl gText_Rom_2EC482
gText_Rom_2EC482: @ 0x082EC482
	.string "プラスが いると つよくなる$"
	.if (. - gText_Rom_2EC482) > 0xf
	.error "gText_Rom_2EC482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC482) < 0xf
	.space 0xf - (. - gText_Rom_2EC482)
	.endif
	.incbin "baserom.gba", 0x2ec491, 0x4

	@ src/data/abilities.h:452 abilities_line_452
	.globl gText_Rom_2EC495
gText_Rom_2EC495: @ 0x082EC495
	.string "てんきで ポワルンが へんかする$"
	.if (. - gText_Rom_2EC495) > 0x11
	.error "gText_Rom_2EC495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC495) < 0x11
	.space 0x11 - (. - gText_Rom_2EC495)
	.endif
	.incbin "baserom.gba", 0x2ec4a6, 0x2

	@ src/data/abilities.h:462 abilities_line_462
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC4A8
gText_Rom_2EC4A8: @ 0x082EC4A8
	.string "どうぐを とられない$"
	.if (. - gText_Rom_2EC4A8) != 0xb
	.error "gText_Rom_2EC4A8 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC4AE
	.set gText_Rom_2EC4AE, gText_Rom_2EC4A8 + 0x6
	.incbin "baserom.gba", 0x2ec4b3, 0x8

	@ src/data/abilities.h:470 abilities_line_470
	.globl gText_Rom_2EC4BB
gText_Rom_2EC4BB: @ 0x082EC4BB
	.string "だっぴして からだを なおす$"
	.if (. - gText_Rom_2EC4BB) > 0xf
	.error "gText_Rom_2EC4BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4BB) < 0xf
	.space 0xf - (. - gText_Rom_2EC4BB)
	.endif
	.incbin "baserom.gba", 0x2ec4ca, 0x4

	@ src/data/abilities.h:477 abilities_line_477
	.globl gText_Rom_2EC4CE
gText_Rom_2EC4CE: @ 0x082EC4CE
	.string "いじょうのとき こうげきが あがる$"
	.if (. - gText_Rom_2EC4CE) > 0x12
	.error "gText_Rom_2EC4CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4CE) < 0x12
	.space 0x12 - (. - gText_Rom_2EC4CE)
	.endif
	.incbin "baserom.gba", 0x2ec4e0, 0x1

	@ src/data/abilities.h:484 abilities_line_484
	.globl gText_Rom_2EC4E1
gText_Rom_2EC4E1: @ 0x082EC4E1
	.string "いじょうのとき ぼうぎょが あがる$"
	.if (. - gText_Rom_2EC4E1) > 0x12
	.error "gText_Rom_2EC4E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4E1) < 0x12
	.space 0x12 - (. - gText_Rom_2EC4E1)
	.endif
	.incbin "baserom.gba", 0x2ec4f3, 0x1

	@ src/data/abilities.h:492 abilities_line_492
	.globl gText_Rom_2EC4F4
gText_Rom_2EC4F4: @ 0x082EC4F4
	.string "すいとると たいりょくが へる$"
	.if (. - gText_Rom_2EC4F4) > 0x10
	.error "gText_Rom_2EC4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC4F4) < 0x10
	.space 0x10 - (. - gText_Rom_2EC4F4)
	.endif
	.incbin "baserom.gba", 0x2ec504, 0x3

	@ src/data/abilities.h:499 abilities_line_499
	.globl gText_Rom_2EC507
gText_Rom_2EC507: @ 0x082EC507
	.string "ピンチに くさの いりょくが あがる$"
	.if (. - gText_Rom_2EC507) > 0x13
	.error "gText_Rom_2EC507 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC507) < 0x13
	.space 0x13 - (. - gText_Rom_2EC507)
	.endif

	@ src/data/abilities.h:506 abilities_line_506
	.globl gText_Rom_2EC51A
gText_Rom_2EC51A: @ 0x082EC51A
	.string "ピンチに ほのおが つよくなる$"
	.if (. - gText_Rom_2EC51A) > 0x10
	.error "gText_Rom_2EC51A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC51A) < 0x10
	.space 0x10 - (. - gText_Rom_2EC51A)
	.endif
	.incbin "baserom.gba", 0x2ec52a, 0x3

	@ src/data/abilities.h:513 abilities_line_513
	.globl gText_Rom_2EC52D
gText_Rom_2EC52D: @ 0x082EC52D
	.string "ピンチに みずの いりょくが あがる$"
	.if (. - gText_Rom_2EC52D) > 0x13
	.error "gText_Rom_2EC52D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC52D) < 0x13
	.space 0x13 - (. - gText_Rom_2EC52D)
	.endif

	@ src/data/abilities.h:520 abilities_line_520
	.globl gText_Rom_2EC540
gText_Rom_2EC540: @ 0x082EC540
	.string "ピンチに むしの いりょくが あがる$"
	.if (. - gText_Rom_2EC540) > 0x13
	.error "gText_Rom_2EC540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC540) < 0x13
	.space 0x13 - (. - gText_Rom_2EC540)
	.endif

	@ src/data/abilities.h:527 abilities_line_527
	.globl gText_Rom_2EC553
gText_Rom_2EC553: @ 0x082EC553
	.string "ぶつかっても はんどうを うけない$"
	.if (. - gText_Rom_2EC553) > 0x12
	.error "gText_Rom_2EC553 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC553) < 0x12
	.space 0x12 - (. - gText_Rom_2EC553)
	.endif
	.incbin "baserom.gba", 0x2ec565, 0x1

	@ src/data/abilities.h:534 abilities_line_534 (+1 aliases)
	.globl gText_Rom_2EC566
gText_Rom_2EC566: @ 0x082EC566
	.string "せんとうで ひざしを つよくする$"
	.if (. - gText_Rom_2EC566) > 0x11
	.error "gText_Rom_2EC566 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC566) < 0x11
	.space 0x11 - (. - gText_Rom_2EC566)
	.endif
	.incbin "baserom.gba", 0x2ec577, 0x2

	@ src/data/abilities.h:183 abilities_line_183 (+1 aliases)
	.globl gText_Rom_2EC579
gText_Rom_2EC579: @ 0x082EC579
	.string "あいてを にげられなくする$"
	.if (. - gText_Rom_2EC579) > 0xe
	.error "gText_Rom_2EC579 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC579) < 0xe
	.space 0xe - (. - gText_Rom_2EC579)
	.endif
	.incbin "baserom.gba", 0x2ec587, 0x5

	@ src/data/abilities.h:548 abilities_line_548
	.globl gText_Rom_2EC58C
gText_Rom_2EC58C: @ 0x082EC58C
	.string "ねむらない$"
	.if (. - gText_Rom_2EC58C) > 0x6
	.error "gText_Rom_2EC58C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC58C) < 0x6
	.space 0x6 - (. - gText_Rom_2EC58C)
	.endif
	.incbin "baserom.gba", 0x2ec592, 0xd

	@ src/data/abilities.h:229 abilities_line_229 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC59F
gText_Rom_2EC59F: @ 0x082EC59F
	.string "あいてに のうりょくを さげられない$"
	.if (. - gText_Rom_2EC59F) != 0x13
	.error "gText_Rom_2EC59F must retain its original byte length"
	.endif
	.globl gText_Rom_2EC5AD
	.set gText_Rom_2EC5AD, gText_Rom_2EC59F + 0xe

	@ src/data/abilities.h:290 abilities_line_290 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EC5B2
gText_Rom_2EC5B2: @ 0x082EC5B2
	.string "こうげきりょくが たかい$"
	.if (. - gText_Rom_2EC5B2) != 0xd
	.error "gText_Rom_2EC5B2 must retain its original byte length"
	.endif
	.globl gText_Rom_2EC5BB
	.set gText_Rom_2EC5BB, gText_Rom_2EC5B2 + 0x9
	.incbin "baserom.gba", 0x2ec5bf, 0x6

	@ src/data/abilities.h:36 abilities_line_36 (+1 aliases)
	.globl gText_Rom_2EC5C5
gText_Rom_2EC5C5: @ 0x082EC5C5
	.string "わざを きゅうしょに うけない$"
	.if (. - gText_Rom_2EC5C5) > 0x10
	.error "gText_Rom_2EC5C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC5C5) < 0x10
	.space 0x10 - (. - gText_Rom_2EC5C5)
	.endif
	.incbin "baserom.gba", 0x2ec5d5, 0x3

	@ src/data/abilities.h:335 abilities_line_335
	.globl gText_Rom_2EC5D8
gText_Rom_2EC5D8: @ 0x082EC5D8
	.string "おとの わざを うけない$"
	.if (. - gText_Rom_2EC5D8) > 0xd
	.error "gText_Rom_2EC5D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC5D8) < 0xd
	.space 0xd - (. - gText_Rom_2EC5D8)
	.endif
	.incbin "baserom.gba", 0x2ec5e5, 0x6

	@ src/data/abilities.h:107 abilities_line_107 (+1 aliases)
	.globl gText_Rom_2EC5EB
gText_Rom_2EC5EB: @ 0x082EC5EB
	.string "てんきの えいきょうが なくなる$"
	.if (. - gText_Rom_2EC5EB) > 0x11
	.error "gText_Rom_2EC5EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC5EB) < 0x11
	.space 0x11 - (. - gText_Rom_2EC5EB)
	.endif
	.incbin "baserom.gba", 0x2ec5fc, 0x4
	.globl gUnknown_82EC600
gUnknown_82EC600: @ 0x082EC600
	.incbin "baserom.gba", 0x2ec600, 0x38
	.globl gUnknown_82EC638
gUnknown_82EC638: @ 0x082EC638
	.incbin "baserom.gba", 0x2ec638, 0x2c
	.globl gUnknown_82EC664
gUnknown_82EC664: @ 0x082EC664
	.incbin "baserom.gba", 0x2ec664, 0xf
	.globl gUnknown_82EC673
gUnknown_82EC673: @ 0x082EC673
	.incbin "baserom.gba", 0x2ec673, 0x4
	.globl gUnknown_82EC677
gUnknown_82EC677: @ 0x082EC677
	.incbin "baserom.gba", 0x2ec677, 0x5
	.globl gUnknown_82EC67C
gUnknown_82EC67C: @ 0x082EC67C
	.incbin "baserom.gba", 0x2ec67c, 0x18
	.globl gUnknown_82EC694
gUnknown_82EC694: @ 0x082EC694
	.incbin "baserom.gba", 0x2ec694, 0x3e4
	.globl gUnknown_82ECA78
gUnknown_82ECA78: @ 0x082ECA78
	.incbin "baserom.gba", 0x2eca78, 0x34
	.globl gUnknown_82ECAAC
gUnknown_82ECAAC: @ 0x082ECAAC
	.incbin "baserom.gba", 0x2ecaac, 0xc
	.globl gUnknown_82ECAB8
gUnknown_82ECAB8: @ 0x082ECAB8
	.incbin "baserom.gba", 0x2ecab8, 0xf0
	.globl gUnknown_82ECBA8
gUnknown_82ECBA8: @ 0x082ECBA8
	.incbin "baserom.gba", 0x2ecba8, 0xa4
	.globl gUnknown_82ECC4C
gUnknown_82ECC4C: @ 0x082ECC4C
	.incbin "baserom.gba", 0x2ecc4c, 0x20
	.globl gUnknown_82ECC6C
gUnknown_82ECC6C: @ 0x082ECC6C
	.incbin "baserom.gba", 0x2ecc6c, 0xd8
	.globl gUnknown_82ECD44
gUnknown_82ECD44: @ 0x082ECD44
	.incbin "baserom.gba", 0x2ecd44, 0x18
	.globl gUnknown_82ECD5C
gUnknown_82ECD5C: @ 0x082ECD5C
	.incbin "baserom.gba", 0x2ecd5c, 0x8
	.globl gUnknown_82ECD64
gUnknown_82ECD64: @ 0x082ECD64
	.incbin "baserom.gba", 0x2ecd64, 0x28
	.globl gUnknown_82ECD8C
gUnknown_82ECD8C: @ 0x082ECD8C
	.incbin "baserom.gba", 0x2ecd8c, 0xc
	.globl gUnknown_82ECD98
gUnknown_82ECD98: @ 0x082ECD98
	.incbin "baserom.gba", 0x2ecd98, 0x14
	.globl gUnknown_82ECDAC
gUnknown_82ECDAC: @ 0x082ECDAC
	.incbin "baserom.gba", 0x2ecdac, 0x18
	.globl gUnknown_82ECDC4
gUnknown_82ECDC4: @ 0x082ECDC4
	.incbin "baserom.gba", 0x2ecdc4, 0x24
	.globl gUnknown_82ECDE8
gUnknown_82ECDE8: @ 0x082ECDE8
	.incbin "baserom.gba", 0x2ecde8, 0x16
	.globl gUnknown_82ECDFE
gUnknown_82ECDFE: @ 0x082ECDFE
	.incbin "baserom.gba", 0x2ecdfe, 0x9
	.globl gUnknown_82ECE07
gUnknown_82ECE07: @ 0x082ECE07
	.incbin "baserom.gba", 0x2ece07, 0xa
	.globl gUnknown_82ECE11
gUnknown_82ECE11: @ 0x082ECE11
	.incbin "baserom.gba", 0x2ece11, 0x7
	.globl gUnknown_82ECE18
gUnknown_82ECE18: @ 0x082ECE18
	.incbin "baserom.gba", 0x2ece18, 0x64
	.globl gUnknown_82ECE7C
gUnknown_82ECE7C: @ 0x082ECE7C
	.incbin "baserom.gba", 0x2ece7c, 0x20
	.globl gUnknown_82ECE9C
gUnknown_82ECE9C: @ 0x082ECE9C
	.incbin "baserom.gba", 0x2ece9c, 0xe4
	.globl gUnknown_82ECF80
gUnknown_82ECF80: @ 0x082ECF80
	.incbin "baserom.gba", 0x2ecf80, 0xc
	.globl gUnknown_82ECF8C
gUnknown_82ECF8C: @ 0x082ECF8C
	.incbin "baserom.gba", 0x2ecf8c, 0x1c
	.globl gUnknown_82ECFA8
gUnknown_82ECFA8: @ 0x082ECFA8
	.incbin "baserom.gba", 0x2ecfa8, 0x8
	.globl gUnknown_82ECFB0
gUnknown_82ECFB0: @ 0x082ECFB0
	.incbin "baserom.gba", 0x2ecfb0, 0x60
	.globl gUnknown_82ED010
gUnknown_82ED010: @ 0x082ED010
	.incbin "baserom.gba", 0x2ed010, 0x18
	.globl gUnknown_82ED028
gUnknown_82ED028: @ 0x082ED028
	.incbin "baserom.gba", 0x2ed028, 0x10
	.globl gUnknown_82ED038
gUnknown_82ED038: @ 0x082ED038
	.incbin "baserom.gba", 0x2ed038, 0x18
	.globl gUnknown_82ED050
gUnknown_82ED050: @ 0x082ED050
	.incbin "baserom.gba", 0x2ed050, 0xec
	.globl gUnknown_82ED13C
gUnknown_82ED13C: @ 0x082ED13C
	.incbin "baserom.gba", 0x2ed13c, 0xe4


@------------------------------------------------------------------------------
@ Pokemon ability names
@ ROM: 0x082EBDCC - 0x082EC033
@------------------------------------------------------------------------------

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

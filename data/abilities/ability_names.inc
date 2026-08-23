@------------------------------------------------------------------------------
@ Pokemon ability names
@ ROM: 0x082EBDC4 - 0x082EC033 (78 entries x 8 bytes)
@------------------------------------------------------------------------------

	.globl gAbilityNames
gAbilityNames: @ 0x082EBDC4

	@ src/battle_records.c:89 sText_DashesNoPlayer (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
.Lbatch81_text_start_gText_Rom_2EBDC4: @ 0x082EBDC4
	.string "-------"
	.byte EOS
	.if (. - .Lbatch81_text_start_gText_Rom_2EBDC4) != 0x8
	.error ".Lbatch81_text_start_gText_Rom_2EBDC4 must retain its original byte length"
	.endif
	.globl gText_Rom_2EBDC7
	.set gText_Rom_2EBDC7, .Lbatch81_text_start_gText_Rom_2EBDC4 + 0x3
	.globl gText_Rom_2EBDC8
	.set gText_Rom_2EBDC8, .Lbatch81_text_start_gText_Rom_2EBDC4 + 0x4

@ src/data/abilities.h:14 abilities_line_14 (+1 aliases)
	.globl gText_Rom_2EBDCC
gText_Rom_2EBDCC: @ 0x082EBDCC
	.string "あくしゅう"
	.byte EOS
	.if (. - gText_Rom_2EBDCC) > 0x6
	.error "gText_Rom_2EBDCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDCC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:21 abilities_line_21 (+1 aliases)
	.globl gText_Rom_2EBDD4
gText_Rom_2EBDD4: @ 0x082EBDD4
	.string "あめふらし"
	.byte EOS
	.if (. - gText_Rom_2EBDD4) > 0x6
	.error "gText_Rom_2EBDD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDD4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDD4)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:28 abilities_line_28 (+1 aliases)
	.globl gText_Rom_2EBDDC
gText_Rom_2EBDDC: @ 0x082EBDDC
	.string "かそく"
	.byte EOS
	.if (. - gText_Rom_2EBDDC) > 0x4
	.error "gText_Rom_2EBDDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDDC) < 0x4
	.space 0x4 - (. - gText_Rom_2EBDDC)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:35 abilities_line_35 (+1 aliases)
	.globl gText_Rom_2EBDE4
gText_Rom_2EBDE4: @ 0x082EBDE4
	.string "カブトアーマー"
	.byte EOS
	.if (. - gText_Rom_2EBDE4) > 0x8
	.error "gText_Rom_2EBDE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDE4) < 0x8
	.space 0x8 - (. - gText_Rom_2EBDE4)
	.endif

	@ src/data/abilities.h:43 abilities_line_43 (+1 aliases)
	.globl gText_Rom_2EBDEC
gText_Rom_2EBDEC: @ 0x082EBDEC
	.string "がんじょう"
	.byte EOS
	.if (. - gText_Rom_2EBDEC) > 0x6
	.error "gText_Rom_2EBDEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDEC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:51 abilities_line_51 (+1 aliases)
	.globl gText_Rom_2EBDF4
gText_Rom_2EBDF4: @ 0x082EBDF4
	.string "しめりけ"
	.byte EOS
	.if (. - gText_Rom_2EBDF4) > 0x5
	.error "gText_Rom_2EBDF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDF4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBDF4)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:59 abilities_line_59 (+1 aliases)
	.globl gText_Rom_2EBDFC
gText_Rom_2EBDFC: @ 0x082EBDFC
	.string "じゅうなん"
	.byte EOS
	.if (. - gText_Rom_2EBDFC) > 0x6
	.error "gText_Rom_2EBDFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBDFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBDFC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:67 abilities_line_67 (+1 aliases)
	.globl gText_Rom_2EBE04
gText_Rom_2EBE04: @ 0x082EBE04
	.string "すながくれ"
	.byte EOS
	.if (. - gText_Rom_2EBE04) > 0x6
	.error "gText_Rom_2EBE04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE04) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE04)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:75 abilities_line_75 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBE0C
gText_Rom_2EBE0C: @ 0x082EBE0C
	.string "せいでんき"
	.byte EOS
	.if (. - gText_Rom_2EBE0C) != 0x6
	.error "gText_Rom_2EBE0C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBE0E
	.set gText_Rom_2EBE0E, gText_Rom_2EBE0C + 0x2
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:82 abilities_line_82 (+1 aliases)
	.globl gText_Rom_2EBE14
gText_Rom_2EBE14: @ 0x082EBE14
	.string "ちくでん"
	.byte EOS
	.if (. - gText_Rom_2EBE14) > 0x5
	.error "gText_Rom_2EBE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE14) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE14)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:90 abilities_line_90 (+1 aliases)
	.globl gText_Rom_2EBE1C
gText_Rom_2EBE1C: @ 0x082EBE1C
	.string "ちょすい"
	.byte EOS
	.if (. - gText_Rom_2EBE1C) > 0x5
	.error "gText_Rom_2EBE1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE1C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE1C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:98 abilities_line_98 (+1 aliases)
	.globl gText_Rom_2EBE24
gText_Rom_2EBE24: @ 0x082EBE24
	.string "どんかん"
	.byte EOS
	.if (. - gText_Rom_2EBE24) > 0x5
	.error "gText_Rom_2EBE24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE24) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE24)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:106 abilities_line_106 (+1 aliases)
	.globl gText_Rom_2EBE2C
gText_Rom_2EBE2C: @ 0x082EBE2C
	.string "ノーてんき"
	.byte EOS
	.if (. - gText_Rom_2EBE2C) > 0x6
	.error "gText_Rom_2EBE2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE2C)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:113 abilities_line_113 (+1 aliases)
	.globl gText_Rom_2EBE34
gText_Rom_2EBE34: @ 0x082EBE34
	.string "ふくがん"
	.byte EOS
	.if (. - gText_Rom_2EBE34) > 0x5
	.error "gText_Rom_2EBE34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE34) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE34)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:120 abilities_line_120 (+1 aliases)
	.globl gText_Rom_2EBE3C
gText_Rom_2EBE3C: @ 0x082EBE3C
	.string "ふみん"
	.byte EOS
	.if (. - gText_Rom_2EBE3C) > 0x4
	.error "gText_Rom_2EBE3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE3C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE3C)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:128 abilities_line_128 (+1 aliases)
	.globl gText_Rom_2EBE44
gText_Rom_2EBE44: @ 0x082EBE44
	.string "へんしょく"
	.byte EOS
	.if (. - gText_Rom_2EBE44) > 0x6
	.error "gText_Rom_2EBE44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE44) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE44)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:135 abilities_line_135 (+1 aliases)
	.globl gText_Rom_2EBE4C
gText_Rom_2EBE4C: @ 0x082EBE4C
	.string "めんえき"
	.byte EOS
	.if (. - gText_Rom_2EBE4C) > 0x5
	.error "gText_Rom_2EBE4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE4C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE4C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:143 abilities_line_143 (+1 aliases)
	.globl gText_Rom_2EBE54
gText_Rom_2EBE54: @ 0x082EBE54
	.string "もらいび"
	.byte EOS
	.if (. - gText_Rom_2EBE54) > 0x5
	.error "gText_Rom_2EBE54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE54) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE54)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:151 abilities_line_151 (+1 aliases)
	.globl gText_Rom_2EBE5C
gText_Rom_2EBE5C: @ 0x082EBE5C
	.string "りんぷん"
	.byte EOS
	.if (. - gText_Rom_2EBE5C) > 0x5
	.error "gText_Rom_2EBE5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE5C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE5C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:159 abilities_line_159 (+1 aliases)
	.globl gText_Rom_2EBE64
gText_Rom_2EBE64: @ 0x082EBE64
	.string "マイペース"
	.byte EOS
	.if (. - gText_Rom_2EBE64) > 0x6
	.error "gText_Rom_2EBE64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE64) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE64)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:167 abilities_line_167 (+1 aliases)
	.globl gText_Rom_2EBE6C
gText_Rom_2EBE6C: @ 0x082EBE6C
	.string "きゅうばん"
	.byte EOS
	.if (. - gText_Rom_2EBE6C) > 0x6
	.error "gText_Rom_2EBE6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBE6C)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:175 abilities_line_175 (+1 aliases)
	.globl gText_Rom_2EBE74
gText_Rom_2EBE74: @ 0x082EBE74
	.string "いかく"
	.byte EOS
	.if (. - gText_Rom_2EBE74) > 0x4
	.error "gText_Rom_2EBE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE74) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE74)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:182 abilities_line_182 (+1 aliases)
	.globl gText_Rom_2EBE7C
gText_Rom_2EBE7C: @ 0x082EBE7C
	.string "かげふみ"
	.byte EOS
	.if (. - gText_Rom_2EBE7C) > 0x5
	.error "gText_Rom_2EBE7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE7C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:189 abilities_line_189 (+1 aliases)
	.globl gText_Rom_2EBE84
gText_Rom_2EBE84: @ 0x082EBE84
	.string "さめはだ"
	.byte EOS
	.if (. - gText_Rom_2EBE84) > 0x5
	.error "gText_Rom_2EBE84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE84) < 0x5
	.space 0x5 - (. - gText_Rom_2EBE84)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:196 abilities_line_196 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBE8C
gText_Rom_2EBE8C: @ 0x082EBE8C
	.string "ふしぎなまもり"
	.byte EOS
	.if (. - gText_Rom_2EBE8C) != 0x8
	.error "gText_Rom_2EBE8C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBE90
	.set gText_Rom_2EBE90, gText_Rom_2EBE8C + 0x4

	@ src/data/abilities.h:206 abilities_line_206 (+1 aliases)
	.globl gText_Rom_2EBE94
gText_Rom_2EBE94: @ 0x082EBE94
	.string "ふゆう"
	.byte EOS
	.if (. - gText_Rom_2EBE94) > 0x4
	.error "gText_Rom_2EBE94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE94) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE94)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_2EBE9C
gText_Rom_2EBE9C: @ 0x082EBE9C
	.string "ほうし"
	.byte EOS
	.if (. - gText_Rom_2EBE9C) > 0x4
	.error "gText_Rom_2EBE9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBE9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBE9C)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:221 abilities_line_221 (+1 aliases)
	.globl gText_Rom_2EBEA4
gText_Rom_2EBEA4: @ 0x082EBEA4
	.string "シンクロ"
	.byte EOS
	.if (. - gText_Rom_2EBEA4) > 0x5
	.error "gText_Rom_2EBEA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEA4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEA4)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:228 abilities_line_228 (+1 aliases)
	.globl gText_Rom_2EBEAC
gText_Rom_2EBEAC: @ 0x082EBEAC
	.string "クリアボディ"
	.byte EOS
	.if (. - gText_Rom_2EBEAC) > 0x7
	.error "gText_Rom_2EBEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEAC) < 0x7
	.space 0x7 - (. - gText_Rom_2EBEAC)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:236 abilities_line_236 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBEB4
gText_Rom_2EBEB4: @ 0x082EBEB4
	.string "しぜんかいふく"
	.byte EOS
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
	.string "ひらいしん"
	.byte EOS
	.if (. - gText_Rom_2EBEBC) > 0x6
	.error "gText_Rom_2EBEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEBC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEBC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:251 abilities_line_251 (+1 aliases)
	.globl gText_Rom_2EBEC4
gText_Rom_2EBEC4: @ 0x082EBEC4
	.string "てんのめぐみ"
	.byte EOS
	.if (. - gText_Rom_2EBEC4) > 0x7
	.error "gText_Rom_2EBEC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEC4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBEC4)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:258 abilities_line_258 (+1 aliases)
	.globl gText_Rom_2EBECC
gText_Rom_2EBECC: @ 0x082EBECC
	.string "すいすい"
	.byte EOS
	.if (. - gText_Rom_2EBECC) > 0x5
	.error "gText_Rom_2EBECC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBECC) < 0x5
	.space 0x5 - (. - gText_Rom_2EBECC)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:265 abilities_line_265 (+1 aliases)
	.globl gText_Rom_2EBED4
gText_Rom_2EBED4: @ 0x082EBED4
	.string "ようりょくそ"
	.byte EOS
	.if (. - gText_Rom_2EBED4) > 0x7
	.error "gText_Rom_2EBED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBED4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBED4)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:272 abilities_line_272 (+1 aliases)
	.globl gText_Rom_2EBEDC
gText_Rom_2EBEDC: @ 0x082EBEDC
	.string "はっこう"
	.byte EOS
	.if (. - gText_Rom_2EBEDC) > 0x5
	.error "gText_Rom_2EBEDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEDC) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEDC)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:280 abilities_line_280 (+1 aliases)
	.globl gText_Rom_2EBEE4
gText_Rom_2EBEE4: @ 0x082EBEE4
	.string "トレース"
	.byte EOS
	.if (. - gText_Rom_2EBEE4) > 0x5
	.error "gText_Rom_2EBEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEE4) < 0x5
	.space 0x5 - (. - gText_Rom_2EBEE4)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:289 abilities_line_289 (+1 aliases)
	.globl gText_Rom_2EBEEC
gText_Rom_2EBEEC: @ 0x082EBEEC
	.string "ちからもち"
	.byte EOS
	.if (. - gText_Rom_2EBEEC) > 0x6
	.error "gText_Rom_2EBEEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEEC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:296 abilities_line_296 (+1 aliases)
	.globl gText_Rom_2EBEF4
gText_Rom_2EBEF4: @ 0x082EBEF4
	.string "どくのトゲ"
	.byte EOS
	.if (. - gText_Rom_2EBEF4) > 0x6
	.error "gText_Rom_2EBEF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBEF4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBEF4)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:303 abilities_line_303 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBEFC
gText_Rom_2EBEFC: @ 0x082EBEFC
	.string "せいしんりょく"
	.byte EOS
	.if (. - gText_Rom_2EBEFC) != 0x8
	.error "gText_Rom_2EBEFC must retain its original byte length"
	.endif
	.globl gText_Rom_2EBEFE
	.set gText_Rom_2EBEFE, gText_Rom_2EBEFC + 0x2

	@ src/data/abilities.h:311 abilities_line_311 (+1 aliases)
	.globl gText_Rom_2EBF04
gText_Rom_2EBF04: @ 0x082EBF04
	.string "マグマのよろい"
	.byte EOS
	.if (. - gText_Rom_2EBF04) > 0x8
	.error "gText_Rom_2EBF04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF04) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF04)
	.endif

	@ src/data/abilities.h:319 abilities_line_319 (+1 aliases)
	.globl gText_Rom_2EBF0C
gText_Rom_2EBF0C: @ 0x082EBF0C
	.string "みずのベール"
	.byte EOS
	.if (. - gText_Rom_2EBF0C) > 0x7
	.error "gText_Rom_2EBF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF0C) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF0C)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:327 abilities_line_327 (+1 aliases)
	.globl gText_Rom_2EBF14
gText_Rom_2EBF14: @ 0x082EBF14
	.string "じりょく"
	.byte EOS
	.if (. - gText_Rom_2EBF14) > 0x5
	.error "gText_Rom_2EBF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF14) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF14)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:334 abilities_line_334 (+1 aliases)
	.globl gText_Rom_2EBF1C
gText_Rom_2EBF1C: @ 0x082EBF1C
	.string "ぼうおん"
	.byte EOS
	.if (. - gText_Rom_2EBF1C) > 0x5
	.error "gText_Rom_2EBF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF1C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF1C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:342 abilities_line_342 (+1 aliases)
	.globl gText_Rom_2EBF24
gText_Rom_2EBF24: @ 0x082EBF24
	.string "あめうけざら"
	.byte EOS
	.if (. - gText_Rom_2EBF24) > 0x7
	.error "gText_Rom_2EBF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF24) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF24)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:349 abilities_line_349 (+1 aliases)
	.globl gText_Rom_2EBF2C
gText_Rom_2EBF2C: @ 0x082EBF2C
	.string "すなおこし"
	.byte EOS
	.if (. - gText_Rom_2EBF2C) > 0x6
	.error "gText_Rom_2EBF2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF2C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF2C)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:356 abilities_line_356 (+1 aliases)
	.globl gText_Rom_2EBF34
gText_Rom_2EBF34: @ 0x082EBF34
	.string "プレッシャー"
	.byte EOS
	.if (. - gText_Rom_2EBF34) > 0x7
	.error "gText_Rom_2EBF34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF34) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF34)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:363 abilities_line_363 (+1 aliases)
	.globl gText_Rom_2EBF3C
gText_Rom_2EBF3C: @ 0x082EBF3C
	.string "あついしぼう"
	.byte EOS
	.if (. - gText_Rom_2EBF3C) > 0x7
	.error "gText_Rom_2EBF3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF3C) < 0x7
	.space 0x7 - (. - gText_Rom_2EBF3C)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:371 abilities_line_371 (+1 aliases)
	.globl gText_Rom_2EBF44
gText_Rom_2EBF44: @ 0x082EBF44
	.string "はやおき"
	.byte EOS
	.if (. - gText_Rom_2EBF44) > 0x5
	.error "gText_Rom_2EBF44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF44) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF44)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:378 abilities_line_378 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2EBF4C
gText_Rom_2EBF4C: @ 0x082EBF4C
	.string "ほのおのからだ"
	.byte EOS
	.if (. - gText_Rom_2EBF4C) != 0x8
	.error "gText_Rom_2EBF4C must retain its original byte length"
	.endif
	.globl gText_Rom_2EBF50
	.set gText_Rom_2EBF50, gText_Rom_2EBF4C + 0x4

	@ src/data/abilities.h:385 abilities_line_385 (+1 aliases)
	.globl gText_Rom_2EBF54
gText_Rom_2EBF54: @ 0x082EBF54
	.string "にげあし"
	.byte EOS
	.if (. - gText_Rom_2EBF54) > 0x5
	.error "gText_Rom_2EBF54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF54) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF54)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:392 abilities_line_392 (+1 aliases)
	.globl gText_Rom_2EBF5C
gText_Rom_2EBF5C: @ 0x082EBF5C
	.string "するどいめ"
	.byte EOS
	.if (. - gText_Rom_2EBF5C) > 0x6
	.error "gText_Rom_2EBF5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF5C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF5C)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:400 abilities_line_400 (+1 aliases)
	.globl gText_Rom_2EBF64
gText_Rom_2EBF64: @ 0x082EBF64
	.string "かいりきバサミ"
	.byte EOS
	.if (. - gText_Rom_2EBF64) > 0x8
	.error "gText_Rom_2EBF64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF64) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF64)
	.endif

	@ src/data/abilities.h:408 abilities_line_408 (+1 aliases)
	.globl gText_Rom_2EBF6C
gText_Rom_2EBF6C: @ 0x082EBF6C
	.string "ものひろい"
	.byte EOS
	.if (. - gText_Rom_2EBF6C) > 0x6
	.error "gText_Rom_2EBF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF6C) < 0x6
	.space 0x6 - (. - gText_Rom_2EBF6C)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:415 abilities_line_415 (+1 aliases)
	.globl gText_Rom_2EBF74
gText_Rom_2EBF74: @ 0x082EBF74
	.string "なまけ"
	.byte EOS
	.if (. - gText_Rom_2EBF74) > 0x4
	.error "gText_Rom_2EBF74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF74) < 0x4
	.space 0x4 - (. - gText_Rom_2EBF74)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:423 abilities_line_423 (+1 aliases)
	.globl gText_Rom_2EBF7C
gText_Rom_2EBF7C: @ 0x082EBF7C
	.string "はりきり"
	.byte EOS
	.if (. - gText_Rom_2EBF7C) > 0x5
	.error "gText_Rom_2EBF7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF7C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF7C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:430 abilities_line_430 (+1 aliases)
	.globl gText_Rom_2EBF84
gText_Rom_2EBF84: @ 0x082EBF84
	.string "メロメロボディ"
	.byte EOS
	.if (. - gText_Rom_2EBF84) > 0x8
	.error "gText_Rom_2EBF84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF84) < 0x8
	.space 0x8 - (. - gText_Rom_2EBF84)
	.endif

	@ src/data/abilities.h:437 abilities_line_437 (+1 aliases)
	.globl gText_Rom_2EBF8C
gText_Rom_2EBF8C: @ 0x082EBF8C
	.string "プラス"
	.byte EOS
	.if (. - gText_Rom_2EBF8C) > 0x4
	.error "gText_Rom_2EBF8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF8C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBF8C)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:444 abilities_line_444 (+1 aliases)
	.globl gText_Rom_2EBF94
gText_Rom_2EBF94: @ 0x082EBF94
	.string "マイナス"
	.byte EOS
	.if (. - gText_Rom_2EBF94) > 0x5
	.error "gText_Rom_2EBF94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF94) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF94)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:451 abilities_line_451 (+1 aliases)
	.globl gText_Rom_2EBF9C
gText_Rom_2EBF9C: @ 0x082EBF9C
	.string "てんきや"
	.byte EOS
	.if (. - gText_Rom_2EBF9C) > 0x5
	.error "gText_Rom_2EBF9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBF9C) < 0x5
	.space 0x5 - (. - gText_Rom_2EBF9C)
	.endif
	.space 0x3, 0 @ fixed-slot padding

	@ src/data/abilities.h:461 abilities_line_461 (+1 aliases)
	.globl gText_Rom_2EBFA4
gText_Rom_2EBFA4: @ 0x082EBFA4
	.string "ねんちゃく"
	.byte EOS
	.if (. - gText_Rom_2EBFA4) > 0x6
	.error "gText_Rom_2EBFA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFA4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFA4)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:469 abilities_line_469 (+1 aliases)
	.globl gText_Rom_2EBFAC
gText_Rom_2EBFAC: @ 0x082EBFAC
	.string "だっぴ"
	.byte EOS
	.if (. - gText_Rom_2EBFAC) > 0x4
	.error "gText_Rom_2EBFAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFAC) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFAC)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:476 abilities_line_476 (+2 aliases)
	.globl gText_Rom_2EBFB4
gText_Rom_2EBFB4: @ 0x082EBFB4
	.string "こんじょう"
	.byte EOS
	.if (. - gText_Rom_2EBFB4) > 0x6
	.error "gText_Rom_2EBFB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFB4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFB4)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:483 abilities_line_483 (+1 aliases)
	.globl gText_Rom_2EBFBC
gText_Rom_2EBFBC: @ 0x082EBFBC
	.string "ふしぎなうろこ"
	.byte EOS
	.if (. - gText_Rom_2EBFBC) > 0x8
	.error "gText_Rom_2EBFBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFBC) < 0x8
	.space 0x8 - (. - gText_Rom_2EBFBC)
	.endif

	@ src/data/abilities.h:491 abilities_line_491 (+1 aliases)
	.globl gText_Rom_2EBFC4
gText_Rom_2EBFC4: @ 0x082EBFC4
	.string "ヘドロえき"
	.byte EOS
	.if (. - gText_Rom_2EBFC4) > 0x6
	.error "gText_Rom_2EBFC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFC4) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFC4)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:498 abilities_line_498 (+1 aliases)
	.globl gText_Rom_2EBFCC
gText_Rom_2EBFCC: @ 0x082EBFCC
	.string "しんりょく"
	.byte EOS
	.if (. - gText_Rom_2EBFCC) > 0x6
	.error "gText_Rom_2EBFCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFCC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFCC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:505 abilities_line_505 (+1 aliases)
	.globl gText_Rom_2EBFD4
gText_Rom_2EBFD4: @ 0x082EBFD4
	.string "もうか"
	.byte EOS
	.if (. - gText_Rom_2EBFD4) > 0x4
	.error "gText_Rom_2EBFD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFD4) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFD4)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:512 abilities_line_512 (+1 aliases)
	.globl gText_Rom_2EBFDC
gText_Rom_2EBFDC: @ 0x082EBFDC
	.string "げきりゅう"
	.byte EOS
	.if (. - gText_Rom_2EBFDC) > 0x6
	.error "gText_Rom_2EBFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFDC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFDC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:519 abilities_line_519 (+1 aliases)
	.globl gText_Rom_2EBFE4
gText_Rom_2EBFE4: @ 0x082EBFE4
	.string "むしのしらせ"
	.byte EOS
	.if (. - gText_Rom_2EBFE4) > 0x7
	.error "gText_Rom_2EBFE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFE4) < 0x7
	.space 0x7 - (. - gText_Rom_2EBFE4)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:526 abilities_line_526 (+1 aliases)
	.globl gText_Rom_2EBFEC
gText_Rom_2EBFEC: @ 0x082EBFEC
	.string "いしあたま"
	.byte EOS
	.if (. - gText_Rom_2EBFEC) > 0x6
	.error "gText_Rom_2EBFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFEC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFEC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:533 abilities_line_533 (+1 aliases)
	.globl gText_Rom_2EBFF4
gText_Rom_2EBFF4: @ 0x082EBFF4
	.string "ひでり"
	.byte EOS
	.if (. - gText_Rom_2EBFF4) > 0x4
	.error "gText_Rom_2EBFF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFF4) < 0x4
	.space 0x4 - (. - gText_Rom_2EBFF4)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:540 abilities_line_540 (+1 aliases)
	.globl gText_Rom_2EBFFC
gText_Rom_2EBFFC: @ 0x082EBFFC
	.string "ありじごく"
	.byte EOS
	.if (. - gText_Rom_2EBFFC) > 0x6
	.error "gText_Rom_2EBFFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBFFC) < 0x6
	.space 0x6 - (. - gText_Rom_2EBFFC)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:547 abilities_line_547 (+1 aliases)
	.globl gText_Rom_2EC004
gText_Rom_2EC004: @ 0x082EC004
	.string "やるき"
	.byte EOS
	.if (. - gText_Rom_2EC004) > 0x4
	.error "gText_Rom_2EC004 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC004) < 0x4
	.space 0x4 - (. - gText_Rom_2EC004)
	.endif
	.space 0x4, 0 @ fixed-slot padding

	@ src/data/abilities.h:555 abilities_line_555 (+1 aliases)
	.globl gText_Rom_2EC00C
gText_Rom_2EC00C: @ 0x082EC00C
	.string "しろいけむり"
	.byte EOS
	.if (. - gText_Rom_2EC00C) > 0x7
	.error "gText_Rom_2EC00C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC00C) < 0x7
	.space 0x7 - (. - gText_Rom_2EC00C)
	.endif
	.space 0x1, 0 @ fixed-slot padding

	@ src/data/abilities.h:563 abilities_line_563 (+1 aliases)
	.globl gText_Rom_2EC014
gText_Rom_2EC014: @ 0x082EC014
	.string "ヨガパワー"
	.byte EOS
	.if (. - gText_Rom_2EC014) > 0x6
	.error "gText_Rom_2EC014 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC014) < 0x6
	.space 0x6 - (. - gText_Rom_2EC014)
	.endif
	.space 0x2, 0 @ fixed-slot padding

	@ src/data/abilities.h:570 abilities_line_570 (+1 aliases)
	.globl gText_Rom_2EC01C
gText_Rom_2EC01C: @ 0x082EC01C
	.string "シェルアーマー"
	.byte EOS
	.if (. - gText_Rom_2EC01C) > 0x8
	.error "gText_Rom_2EC01C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC01C) < 0x8
	.space 0x8 - (. - gText_Rom_2EC01C)
	.endif
	@ ABILITY_CACOPHONY (unused)
	.globl gText_Rom_2EC024
gText_Rom_2EC024: @ 0x082EC024
	.string "そうおん"
	.byte EOS
	.if (. - gText_Rom_2EC024) > 0x8
	.error "gText_Rom_2EC024 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC024) < 0x8
	.space 0x8 - (. - gText_Rom_2EC024), 0
	.endif

	@ src/data/abilities.h:578 abilities_line_578 (+1 aliases)
	.globl gText_Rom_2EC02C
gText_Rom_2EC02C: @ 0x082EC02C
	.string "エアロック"
	.byte EOS
	.if (. - gText_Rom_2EC02C) > 0x6
	.error "gText_Rom_2EC02C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EC02C) < 0x6
	.space 0x6 - (. - gText_Rom_2EC02C)
	.endif
	.space 0x2, 0 @ fixed-slot padding

.if (. - gAbilityNames) != 0x270
	.error "gAbilityNames must be exactly 0x270 bytes"
.endif

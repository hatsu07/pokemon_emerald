	@ src/data/easy_chat/easy_chat_group_trainer.h:142 easy_chat_group_trainer_line_142 (+1 aliases)
	.globl gText_Rom_5C918A
gText_Rom_5C918A: @ 0x085C918A
	.string "みどり$"
	.if (. - gText_Rom_5C918A) > 0x4
	.error "gText_Rom_5C918A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C918A) < 0x4
	.space 0x4 - (. - gText_Rom_5C918A)
	.endif
	@ Replaced baserom.gba range: offset=0x5C918E, size=0x3
	.byte 0x08, 0x2B, 0xFF

	@ src/strings.c:97 gText_DexSearchColorBrown
	.globl gText_Rom_5C9191
gText_Rom_5C9191: @ 0x085C9191
	.string "ちゃいろ$"
	.if (. - gText_Rom_5C9191) > 0x5
	.error "gText_Rom_5C9191 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9191) < 0x5
	.space 0x5 - (. - gText_Rom_5C9191)
	.endif

	@ src/strings.c:98 gText_DexSearchColorPurple
	.globl gText_Rom_5C9196
gText_Rom_5C9196: @ 0x085C9196
	.string "むらさき$"
	.if (. - gText_Rom_5C9196) > 0x5
	.error "gText_Rom_5C9196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9196) < 0x5
	.space 0x5 - (. - gText_Rom_5C9196)
	.endif

	@ src/strings.c:99 gText_DexSearchColorGray
	.globl gText_Rom_5C919B
gText_Rom_5C919B: @ 0x085C919B
	.string "はいいろ$"
	.if (. - gText_Rom_5C919B) > 0x5
	.error "gText_Rom_5C919B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C919B) < 0x5
	.space 0x5 - (. - gText_Rom_5C919B)
	.endif
	@ Replaced baserom.gba range: offset=0x5C91A0, size=0x3
	.byte 0x0C, 0x2B, 0xFF

	@ src/strings.c:101 gText_DexSearchColorPink
	.globl gText_Rom_5C91A3
gText_Rom_5C91A3: @ 0x085C91A3
	.string "ピンク$"
	.if (. - gText_Rom_5C91A3) > 0x4
	.error "gText_Rom_5C91A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C91A3) < 0x4
	.space 0x4 - (. - gText_Rom_5C91A3)
	.endif

	@ src/strings.c:102 gText_DexHoennDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91A7
gText_Rom_5C91A7: @ 0x085C91A7
	.string "ホウエンちほう ばん ポケモンずかん$"
	.if (. - gText_Rom_5C91A7) != 0x13
	.error "gText_Rom_5C91A7 must retain its original byte length"
	.endif
	.globl gText_Rom_5C91B2
	.set gText_Rom_5C91B2, gText_Rom_5C91A7 + 0xb
	.globl gText_Rom_5C91B6
	.set gText_Rom_5C91B6, gText_Rom_5C91A7 + 0xf

	@ src/strings.c:103 gText_DexNatDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91BA
gText_Rom_5C91BA: @ 0x085C91BA
	.string "ぜんこく ばん ポケモンずかん$"
	.if (. - gText_Rom_5C91BA) != 0x10
	.error "gText_Rom_5C91BA must retain its original byte length"
	.endif
	.globl gText_Rom_5C91C2
	.set gText_Rom_5C91C2, gText_Rom_5C91BA + 0x8
	.globl gText_Rom_5C91C6
	.set gText_Rom_5C91C6, gText_Rom_5C91BA + 0xc

	@ src/strings.c:104 gText_DexSortNumericalDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91CA
gText_Rom_5C91CA: @ 0x085C91CA
	.string "ポケモンを\nばんごうじゅんで ひょうじ します$"
	.if (. - gText_Rom_5C91CA) != 0x18
	.error "gText_Rom_5C91CA must retain its original byte length"
	.endif
	.globl gText_Rom_5C91DE
	.set gText_Rom_5C91DE, gText_Rom_5C91CA + 0x14

	@ src/strings.c:105 gText_DexSortAtoZDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91E2
gText_Rom_5C91E2: @ 0x085C91E2
	.string "みつけたポケモンの なまえを\nごじゅうおんじゅんで ひょうじ します$"
	.if (. - gText_Rom_5C91E2) != 0x23
	.error "gText_Rom_5C91E2 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9201
	.set gText_Rom_5C9201, gText_Rom_5C91E2 + 0x1f

	@ src/strings.c:106 gText_DexSortHeaviestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9205
gText_Rom_5C9205: @ 0x085C9205
	.string "つかまえたポケモンを\nおもい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9205) != 0x1f
	.error "gText_Rom_5C9205 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9220
	.set gText_Rom_5C9220, gText_Rom_5C9205 + 0x1b

	@ src/strings.c:107 gText_DexSortLightestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9224
gText_Rom_5C9224: @ 0x085C9224
	.string "つかまえたポケモンを\nかるい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9224) != 0x1f
	.error "gText_Rom_5C9224 must retain its original byte length"
	.endif
	.globl gText_Rom_5C923F
	.set gText_Rom_5C923F, gText_Rom_5C9224 + 0x1b

	@ src/strings.c:108 gText_DexSortTallestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9243
gText_Rom_5C9243: @ 0x085C9243
	.string "つかまえたポケモンを\nしんちょうのたかい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9243) != 0x25
	.error "gText_Rom_5C9243 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9264
	.set gText_Rom_5C9264, gText_Rom_5C9243 + 0x21

	@ src/strings.c:109 gText_DexSortSmallestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9268
gText_Rom_5C9268: @ 0x085C9268
	.string "つかまえたポケモンを\nしんちょうのひくい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9268) != 0x25
	.error "gText_Rom_5C9268 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9289
	.set gText_Rom_5C9289, gText_Rom_5C9268 + 0x21
	.space 0x1, 0xFF

	@ src/strings.c:111 gText_DexSearchDontSpecify
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C928E
gText_Rom_5C928E: @ 0x085C928E
	.string "してい しない$"
	.if (. - gText_Rom_5C928E) != 0x8
	.error "gText_Rom_5C928E must retain its original byte length"
	.endif
	.globl gText_Rom_5C9292
	.set gText_Rom_5C9292, gText_Rom_5C928E + 0x4
	@ Replaced baserom.gba range: offset=0x5C9296, size=0x3
	.byte 0x15, 0x0C, 0xFF
	.globl gUnknown_85C9299
gUnknown_85C9299: @ 0x085C9299


	@ src/strings.c:97 gText_DexSearchColorBrown
	.globl gText_DexSearchColorBrown
gText_DexSearchColorBrown: @ 0x085C9191
	.string "ちゃいろ{EOS}"
	.if (. - gText_DexSearchColorBrown) > 0x5
	.error "gText_DexSearchColorBrown may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchColorBrown) < 0x5
	.space 0x5 - (. - gText_DexSearchColorBrown)
	.endif

	@ src/strings.c:98 gText_DexSearchColorPurple
	.globl gText_DexSearchColorPurple
gText_DexSearchColorPurple: @ 0x085C9196
	.string "むらさき{EOS}"
	.if (. - gText_DexSearchColorPurple) > 0x5
	.error "gText_DexSearchColorPurple may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchColorPurple) < 0x5
	.space 0x5 - (. - gText_DexSearchColorPurple)
	.endif

	@ src/strings.c:99 gText_DexSearchColorGray
	.globl gText_DexSearchColorGray
gText_DexSearchColorGray: @ 0x085C919B
	.string "はいいろ{EOS}"
	.if (. - gText_DexSearchColorGray) > 0x5
	.error "gText_DexSearchColorGray may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchColorGray) < 0x5
	.space 0x5 - (. - gText_DexSearchColorGray)
	.endif
	@ Decoded text from ROM range: offset=0x5C91A0, size=0x3
	.string "しろ{EOS}"

	@ src/strings.c:101 gText_DexSearchColorPink
	.globl gText_DexSearchColorPink
gText_DexSearchColorPink: @ 0x085C91A3
	.string "ピンク{EOS}"
	.if (. - gText_DexSearchColorPink) > 0x4
	.error "gText_DexSearchColorPink may not grow beyond its original slot"
	.endif
	.if (. - gText_DexSearchColorPink) < 0x4
	.space 0x4 - (. - gText_DexSearchColorPink)
	.endif

	@ src/strings.c:102 gText_DexHoennDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexHoennDescription
gText_DexHoennDescription: @ 0x085C91A7
	.string "ホウエンちほう ばん ポケモンずかん{EOS}"
	.if (. - gText_DexHoennDescription) != 0x13
	.error "gText_DexHoennDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C91B2
	.set gText_Rom_5C91B2, gText_DexHoennDescription + 0xb
	.globl gText_Rom_5C91B6
	.set gText_Rom_5C91B6, gText_DexHoennDescription + 0xf

	@ src/strings.c:103 gText_DexNatDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexNatDescription
gText_DexNatDescription: @ 0x085C91BA
	.string "ぜんこく ばん ポケモンずかん{EOS}"
	.if (. - gText_DexNatDescription) != 0x10
	.error "gText_DexNatDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C91C2
	.set gText_Rom_5C91C2, gText_DexNatDescription + 0x8
	.globl gText_Rom_5C91C6
	.set gText_Rom_5C91C6, gText_DexNatDescription + 0xc

	@ src/strings.c:104 gText_DexSortNumericalDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSortNumericalDescription
gText_DexSortNumericalDescription: @ 0x085C91CA
	.string "ポケモンを\nばんごうじゅんで ひょうじ します{EOS}"
	.if (. - gText_DexSortNumericalDescription) != 0x18
	.error "gText_DexSortNumericalDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C91DE
	.set gText_Rom_5C91DE, gText_DexSortNumericalDescription + 0x14

	@ src/strings.c:105 gText_DexSortAtoZDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSortAtoZDescription
gText_DexSortAtoZDescription: @ 0x085C91E2
	.string "みつけたポケモンの なまえを\nごじゅうおんじゅんで ひょうじ します{EOS}"
	.if (. - gText_DexSortAtoZDescription) != 0x23
	.error "gText_DexSortAtoZDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C9201
	.set gText_Rom_5C9201, gText_DexSortAtoZDescription + 0x1f

	@ src/strings.c:106 gText_DexSortHeaviestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSortHeaviestDescription
gText_DexSortHeaviestDescription: @ 0x085C9205
	.string "つかまえたポケモンを\nおもい じゅんばんで ひょうじ します{EOS}"
	.if (. - gText_DexSortHeaviestDescription) != 0x1f
	.error "gText_DexSortHeaviestDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C9220
	.set gText_Rom_5C9220, gText_DexSortHeaviestDescription + 0x1b

	@ src/strings.c:107 gText_DexSortLightestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSortLightestDescription
gText_DexSortLightestDescription: @ 0x085C9224
	.string "つかまえたポケモンを\nかるい じゅんばんで ひょうじ します{EOS}"
	.if (. - gText_DexSortLightestDescription) != 0x1f
	.error "gText_DexSortLightestDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C923F
	.set gText_Rom_5C923F, gText_DexSortLightestDescription + 0x1b

	@ src/strings.c:108 gText_DexSortTallestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSortTallestDescription
gText_DexSortTallestDescription: @ 0x085C9243
	.string "つかまえたポケモンを\nしんちょうのたかい じゅんばんで ひょうじ します{EOS}"
	.if (. - gText_DexSortTallestDescription) != 0x25
	.error "gText_DexSortTallestDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C9264
	.set gText_Rom_5C9264, gText_DexSortTallestDescription + 0x21

	@ src/strings.c:109 gText_DexSortSmallestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_DexSortSmallestDescription
gText_DexSortSmallestDescription: @ 0x085C9268
	.string "つかまえたポケモンを\nしんちょうのひくい じゅんばんで ひょうじ します{EOS}"
	.if (. - gText_DexSortSmallestDescription) != 0x25
	.error "gText_DexSortSmallestDescription must retain its original byte length"
	.endif
	.globl gText_Rom_5C9289
	.set gText_Rom_5C9289, gText_DexSortSmallestDescription + 0x21
	.space 0x1, 0xFF


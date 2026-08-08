	@ data/maps/SootopolisCity/scripts.inc:1429 SootopolisCity_Text_SawLegendWithOwnEyes
	.globl gText_Rom_1E2F2C
gText_Rom_1E2F2C: @ 0x081E2F2C
	.string "ポケモンの たたかいに よって\nりくちと うみが つくられた という\lおおむかし からの いいつたえが\pいま このまちで さいげん された!\pうぉぉー! こんな すごいものを\nこの めで みられた なんてー!!$"
	.if (. - gText_Rom_1E2F2C) > 0x6a
	.error "gText_Rom_1E2F2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2F2C) < 0x6a
	.space 0x6a - (. - gText_Rom_1E2F2C)
	.endif

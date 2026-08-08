	@ data/maps/SootopolisCity/scripts.inc:1426 SootopolisCity_Text_SeeingLegendWithOwnEyes
	.globl gText_Rom_1E2EC0
gText_Rom_1E2EC0: @ 0x081E2EC0
	.string "ポケモンの たたかいに よって\nりくちと うみが つくられた という\lおおむかし からの いいつたえが\pいま めのまえで さいげん されている!\pうぉぉー! こんな すごいものを\nこの めで みられる なんてー!!$"
	.if (. - gText_Rom_1E2EC0) > 0x6c
	.error "gText_Rom_1E2EC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2EC0) < 0x6c
	.space 0x6c - (. - gText_Rom_1E2EC0)
	.endif

	@ data/maps/FortreeCity/scripts.inc:146 FortreeCity_Text_CitySign
	.globl gText_Rom_1E0126
gText_Rom_1E0126: @ 0x081E0126
	.string "ここは ヒワマキ シティ\nきの うえで しぜんと たわむれる まち$"
	.if (. - gText_Rom_1E0126) > 0x22
	.error "gText_Rom_1E0126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E0126) < 0x22
	.space 0x22 - (. - gText_Rom_1E0126)
	.endif

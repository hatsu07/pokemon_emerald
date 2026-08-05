	@ data/maps/LilycoveCity/scripts.inc:712 LilycoveCity_Text_MoveDeletersHouseSign
	.globl gText_Rom_1E1383
gText_Rom_1E1383: @ 0x081E1383
	.string "「わざわすれ じいさんの いえ」\nポケモンの わざ わすれさせます$"
	.if (. - gText_Rom_1E1383) > 0x22
	.error "gText_Rom_1E1383 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E1383) < 0x22
	.space 0x22 - (. - gText_Rom_1E1383)
	.endif

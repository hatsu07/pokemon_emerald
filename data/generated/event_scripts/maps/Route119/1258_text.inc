	@ data/maps/Route119/scripts.inc:585 Route119_Text_TallGrassSnaresBikeTires
	.globl gText_Rom_1ED788
gText_Rom_1ED788: @ 0x081ED788
	.string "まいったぜ……\pながい くさが タイヤに からまるから\nじてんしゃに のれないよ……$"
	.if (. - gText_Rom_1ED788) > 0x2b
	.error "gText_Rom_1ED788 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ED788) < 0x2b
	.space 0x2b - (. - gText_Rom_1ED788)
	.endif

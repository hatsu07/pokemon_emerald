	@ data/maps/LilycoveCity_House3/scripts.inc:112 LilycoveCity_House3_Text_GoingToWinMultiBattles
	.globl gText_Rom_20A495
gText_Rom_20A495: @ 0x0820A495
	.string "マルチバトル してるけど\nぼくが かつに きまってるぜ！$"
	.if (. - gText_Rom_20A495) > 0x1d
	.error "gText_Rom_20A495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A495) < 0x1d
	.space 0x1d - (. - gText_Rom_20A495)
	.endif

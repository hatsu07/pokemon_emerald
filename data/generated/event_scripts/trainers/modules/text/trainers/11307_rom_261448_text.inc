	@ data/text/trainers.inc:3041 Route128_Text_WaynePostBattle
	.globl gText_Rom_261448
gText_Rom_261448: @ 0x08261448
	.string "しまった!\pたきのぼりを おぼえた ポケモン つっても\nルネの ジムバッジ もってない!$"
	.if (. - gText_Rom_261448) > 0x2d
	.error "gText_Rom_261448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261448) < 0x2d
	.space 0x2d - (. - gText_Rom_261448)
	.endif

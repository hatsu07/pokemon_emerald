	@ data/text/trainers.inc:3209 Route131_Text_KevinPostBattle
	.globl gText_Rom_261B06
gText_Rom_261B06: @ 0x08261B06
	.string "ちっ! ……じゃ なかった\nお おこってない おこってないよ!\p……ハハ つよいね きみは!\nはっハッは!$"
	.if (. - gText_Rom_261B06) > 0x36
	.error "gText_Rom_261B06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261B06) < 0x36
	.space 0x36 - (. - gText_Rom_261B06)
	.endif

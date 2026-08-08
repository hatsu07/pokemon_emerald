	@ data/maps/Route110_TrickHousePuzzle8/scripts.inc:48 Route110_TrickHousePuzzle8_Text_KeiraPostBattle
	.globl gText_Rom_240586
gText_Rom_240586: @ 0x08240586
	.string "わたしに かつなんて きせきよ!\nじまん できる ことだわ!$"
	.if (. - gText_Rom_240586) > 0x1f
	.error "gText_Rom_240586 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240586) < 0x1f
	.space 0x1f - (. - gText_Rom_240586)
	.endif

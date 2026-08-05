	@ data/text/cable_club.inc:212 MossdeepCity_GameCorner_1F_Text_PlayWhichGame
	.globl gText_Rom_248378
gText_Rom_248378: @ 0x08248378
	.string "さて どの ゲームを\nやりたいのかな?$"
	.if (. - gText_Rom_248378) > 0x14
	.error "gText_Rom_248378 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_248378) < 0x14
	.space 0x14 - (. - gText_Rom_248378)
	.endif

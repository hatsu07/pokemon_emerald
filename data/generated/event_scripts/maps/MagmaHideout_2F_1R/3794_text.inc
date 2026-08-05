	@ data/maps/MagmaHideout_2F_1R/scripts.inc:37 MagmaHideout_2F_1R_Text_Grunt14PostBattle
	.globl gText_Rom_21C35A
gText_Rom_21C35A: @ 0x0821C35A
	.string "さむがりの ひとは\nマグマだんに はいると いいわよ"
	.byte EOS
	.if (. - gText_Rom_21C35A) > 0x1b
	.error "gText_Rom_21C35A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C35A) < 0x1b
	.space 0x1b - (. - gText_Rom_21C35A)
	.endif

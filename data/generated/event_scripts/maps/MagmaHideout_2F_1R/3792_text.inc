	@ data/maps/MagmaHideout_2F_1R/scripts.inc:33 MagmaHideout_2F_1R_Text_Grunt14Defeat (+1 aliases)
	.globl gText_Rom_21C344
gText_Rom_21C344: @ 0x0821C344
	.string "あわわわ……\nマグマだんの プライドが……"
	.byte EOS
	.if (. - gText_Rom_21C344) > 0x16
	.error "gText_Rom_21C344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C344) < 0x16
	.space 0x16 - (. - gText_Rom_21C344)
	.endif

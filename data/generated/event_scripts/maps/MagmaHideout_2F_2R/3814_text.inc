	@ data/maps/MagmaHideout_2F_2R/scripts.inc:24 MagmaHideout_2F_2R_Text_Grunt15Intro (+1 aliases)
	.globl gText_Rom_21C4A2
gText_Rom_21C4A2: @ 0x0821C4A2
	.string "あなたに うらみは ないけど\nこれも めいれい だからね!"
	.byte EOS
	.if (. - gText_Rom_21C4A2) > 0x1e
	.error "gText_Rom_21C4A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C4A2) < 0x1e
	.space 0x1e - (. - gText_Rom_21C4A2)
	.endif

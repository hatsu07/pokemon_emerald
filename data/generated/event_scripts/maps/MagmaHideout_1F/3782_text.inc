	@ data/maps/MagmaHideout_1F/scripts.inc:31 MagmaHideout_1F_Text_Grunt1PostBattle
	.globl gText_Rom_21C1B7
gText_Rom_21C1B7: @ 0x0821C1B7
	.string "わかったよ こんどから もうすこし\nがんばって みるよ……"
	.byte EOS
	.if (. - gText_Rom_21C1B7) > 0x1e
	.error "gText_Rom_21C1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C1B7) < 0x1e
	.space 0x1e - (. - gText_Rom_21C1B7)
	.endif

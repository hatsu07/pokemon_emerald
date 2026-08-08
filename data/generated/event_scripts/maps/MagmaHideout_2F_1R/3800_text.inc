	@ data/maps/MagmaHideout_2F_1R/scripts.inc:50 MagmaHideout_2F_1R_Text_Grunt3PostBattle
	.globl gText_Rom_21C3AC
gText_Rom_21C3AC: @ 0x0821C3AC
	.string "こんなことなら すどおり していって\nもらうほうが よかったかも……"
	.byte EOS
	.if (. - gText_Rom_21C3AC) > 0x23
	.error "gText_Rom_21C3AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21C3AC) < 0x23
	.space 0x23 - (. - gText_Rom_21C3AC)
	.endif

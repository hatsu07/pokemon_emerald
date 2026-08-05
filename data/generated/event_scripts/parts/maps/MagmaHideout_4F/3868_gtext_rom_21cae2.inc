	@ data/maps/MagmaHideout_4F/scripts.inc:154 MagmaHideout_4F_Text_Grunt13Intro (+1 aliases)
	.globl gText_Rom_21CAE2
gText_Rom_21CAE2: @ 0x0821CAE2
	.string "まだまだー!\nかんたんには おくへ いかせない!"
	.byte EOS
	.if (. - gText_Rom_21CAE2) > 0x19
	.error "gText_Rom_21CAE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAE2) < 0x19
	.space 0x19 - (. - gText_Rom_21CAE2)
	.endif

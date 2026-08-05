	@ data/maps/MagmaHideout_4F/scripts.inc:158 MagmaHideout_4F_Text_Grunt13Defeat (+1 aliases)
	.globl gText_Rom_21CAFB
gText_Rom_21CAFB: @ 0x0821CAFB
	.string "オレって たおすの かんたん だった?"
	.byte EOS
	.if (. - gText_Rom_21CAFB) > 0x14
	.error "gText_Rom_21CAFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CAFB) < 0x14
	.space 0x14 - (. - gText_Rom_21CAFB)
	.endif

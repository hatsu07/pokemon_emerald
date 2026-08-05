	@ data/maps/MtPyre_6F/scripts.inc:51 MtPyre_6F_Text_ValerieRematchDefeat (+1 aliases)
	.globl gText_Rom_216AB4
gText_Rom_216AB4: @ 0x08216AB4
	.string "なにかが きえたわ……$"
	.if (. - gText_Rom_216AB4) > 0xc
	.error "gText_Rom_216AB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216AB4) < 0xc
	.space 0xc - (. - gText_Rom_216AB4)
	.endif

	@ data/maps/JaggedPass/scripts.inc:248 JaggedPass_Text_JulioDefeat (+1 aliases)
	.globl gText_Rom_216085
gText_Rom_216085: @ 0x08216085
	.string "ガッタガタ{EOS}"
	.if (. - gText_Rom_216085) > 0x6
	.error "gText_Rom_216085 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216085) < 0x6
	.space 0x6 - (. - gText_Rom_216085)
	.endif

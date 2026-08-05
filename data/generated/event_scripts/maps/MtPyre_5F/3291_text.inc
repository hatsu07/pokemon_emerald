	@ data/maps/MtPyre_5F/scripts.inc:17 MtPyre_4F_Text_TashaDefeat (+1 aliases)
	.globl gText_Rom_216948
gText_Rom_216948: @ 0x08216948
	.string "まけるのは きらい……$"
	.if (. - gText_Rom_216948) > 0xc
	.error "gText_Rom_216948 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216948) < 0xc
	.space 0xc - (. - gText_Rom_216948)
	.endif

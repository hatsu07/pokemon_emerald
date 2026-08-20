	@ data/maps/MtPyre_3F/scripts.inc:66 MtPyre_3F_Text_GabrielleDefeat (+1 aliases)
	.globl gText_Rom_216762
gText_Rom_216762: @ 0x08216762
	.string "すごいわ!\nあなたは すてきな トレーナーさんね{EOS}"
	.if (. - gText_Rom_216762) > 0x19
	.error "gText_Rom_216762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216762) < 0x19
	.space 0x19 - (. - gText_Rom_216762)
	.endif

	@ data/maps/MtPyre_3F/scripts.inc:88 MtPyre_3F_Text_GabrielleRematchDefeat (+1 aliases)
	.globl gText_Rom_216815
gText_Rom_216815: @ 0x08216815
	.string "ほんとうに すごいわ!\nあなたは すてきね{EOS}"
	.if (. - gText_Rom_216815) > 0x16
	.error "gText_Rom_216815 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_216815) < 0x16
	.space 0x16 - (. - gText_Rom_216815)
	.endif

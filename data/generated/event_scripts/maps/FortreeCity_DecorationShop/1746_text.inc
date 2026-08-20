	@ data/maps/FortreeCity_DecorationShop/scripts.inc:56 FortreeCity_DecorationShop_Text_MerchandiseSentToPC
	.globl gText_Rom_20545C
gText_Rom_20545C: @ 0x0820545C
	.string "ここで かった ものは\nパソコンに とどけられる!\pなんと すばらしい! ついでに わしも\nいえまで とどけて くれないものか{EOS}"
	.if (. - gText_Rom_20545C) > 0x40
	.error "gText_Rom_20545C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20545C) < 0x40
	.space 0x40 - (. - gText_Rom_20545C)
	.endif

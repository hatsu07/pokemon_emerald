	@ data/maps/MossdeepCity_SpaceCenter_1F/scripts.inc:302 MossdeepCity_SpaceCenter_1F_Text_MagmaCantStealFuelTakeThis
	.globl gText_Rom_20D281
gText_Rom_20D281: @ 0x0820D281
	.string "マグマだんに ロケットねんりょうを\nうばわれる わけには いかない!\pでも かいがんで みつけた このいしは\nきみに あげるよ!$"
	.if (. - gText_Rom_20D281) > 0x41
	.error "gText_Rom_20D281 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20D281) < 0x41
	.space 0x41 - (. - gText_Rom_20D281)
	.endif

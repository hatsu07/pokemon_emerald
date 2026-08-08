	@ data/maps/SootopolisCity/scripts.inc:1390 SootopolisCity_Text_PhysicallyFitLivingHere
	.globl gText_Rom_1E2C5C
gText_Rom_1E2C5C: @ 0x081E2C5C
	.string "うみに もぐったり\nかいだんを のぼったり おりたり……\pこのまちで くらして いると\nけっこう たくましく なるんだよね$"
	.if (. - gText_Rom_1E2C5C) > 0x3e
	.error "gText_Rom_1E2C5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E2C5C) < 0x3e
	.space 0x3e - (. - gText_Rom_1E2C5C)
	.endif

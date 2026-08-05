	@ data/maps/Route110/scripts.inc:980 Route110_Text_RegisteredBirchInPokenav (+1 aliases)
	.globl gText_Rom_26C23E
gText_Rom_26C23E: @ 0x0826C23E
	.string "オダマキはかせを\nポケナビに とうろく した!"
	.byte EOS
	.if (. - gText_Rom_26C23E) > 0x18
	.error "gText_Rom_26C23E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C23E) < 0x18
	.space 0x18 - (. - gText_Rom_26C23E)
	.endif

	@ data/maps/Route110/scripts.inc:980 Route110_Text_RegisteredBirchInPokenav (+1 aliases)
	.globl gText_Rom_1EA0F2
gText_Rom_1EA0F2: @ 0x081EA0F2
	.string "オダマキはかせを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_1EA0F2) > 0x18
	.error "gText_Rom_1EA0F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA0F2) < 0x18
	.space 0x18 - (. - gText_Rom_1EA0F2)
	.endif

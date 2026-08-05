	@ asm/field_specials.s:6476 sub_0813AE0C
	.globl gText_Rom_5C9299
gText_Rom_5C9299: @ 0x085C9299
	.string "▶$"
	.if (. - gText_Rom_5C9299) > 0x2
	.error "gText_Rom_5C9299 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9299) < 0x2
	.space 0x2 - (. - gText_Rom_5C9299)
	.endif
	@ Replaced baserom.gba range: offset=0x5C929B, size=0x2
	.byte 0x00, 0xFF

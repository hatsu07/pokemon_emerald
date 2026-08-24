	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5E8441
gText_Rom_5E8441: @ 0x085E8441
	.string "こうげき{EOS}"
	.if (. - gText_Rom_5E8441) > 0x5
	.error "gText_Rom_5E8441 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5E8441) < 0x5
	.space 0x5 - (. - gText_Rom_5E8441)
	.endif
	@ analyzed canonical ROM range 0x085E8446-0x085E847B
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0xAEA3, 0x60A6, 0x7EAE, 0x0119, 0x4102
	.2byte 0x1500, 0x0237, 0x2706, 0x2441, 0x12FE, 0x2D29, 0x1200, 0x5006
	.2byte 0x0013, 0x0713, 0x002D

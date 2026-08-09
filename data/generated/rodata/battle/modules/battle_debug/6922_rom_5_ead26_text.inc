	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_5EAD26
gText_Rom_5EAD26: @ 0x085EAD26
	.string "こうげき$"
	.if (. - gText_Rom_5EAD26) > 0x5
	.error "gText_Rom_5EAD26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5EAD26) < 0x5
	.space 0x5 - (. - gText_Rom_5EAD26)
	.endif
	@ analyzed canonical ROM range 0x085EAD2B-0x085EAD64
sAnalyzedData_085EAD2B: @ 0x085EAD2B
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x1300, 0x2D07, 0x0500, 0x270A
	.2byte 0x130E, 0x0A00, 0x272E, 0x0B2E, 0x290E, 0xFE37, 0x030A, 0x073A
	.2byte 0x0023, 0xAE89, 0x147E, 0x0100, 0x133A

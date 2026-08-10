	@ src/data/abilities.h:214 abilities_line_214 (+1 aliases)
	.globl gText_Rom_5B7239
gText_Rom_5B7239: @ 0x085B7239
	.string "ほうし$"
	.if (. - gText_Rom_5B7239) > 0x4
	.error "gText_Rom_5B7239 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5B7239) < 0x4
	.space 0x4 - (. - gText_Rom_5B7239)
	.endif
	@ analyzed canonical ROM range 0x085B723D-0x085B724B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0x1C, 0x20, 0x11, 0x10, 0xFF, 0xFF, 0xD6, 0x12, 0x5B, 0x08, 0x20, 0x00, 0x00, 0x00

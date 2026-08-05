	@ src/data/script_menu.h:771 script_menu_line_771
	.globl gText_Rom_5AC0C1
gText_Rom_5AC0C1: @ 0x085AC0C1
	.string "まけた！$"
	.if (. - gText_Rom_5AC0C1) > 0x5
	.error "gText_Rom_5AC0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AC0C1) < 0x5
	.space 0x5 - (. - gText_Rom_5AC0C1)
	.endif
	.globl gUnknown_85AC0C6
gUnknown_85AC0C6: @ 0x085AC0C6
	@ Replaced baserom.gba range: offset=0x5AC0C6, size=0x17
	.byte 0xFD, 0x1C, 0x19, 0x00, 0xFD, 0x1D, 0xFE, 0x14, 0x19, 0x00, 0x0C, 0x36, 0x03, 0x48, 0x16, 0x00
	.byte 0x1B, 0x07, 0x2C, 0x09, 0x10, 0xAB, 0xFF
	.globl gUnknown_85AC0DD
gUnknown_85AC0DD: @ 0x085AC0DD


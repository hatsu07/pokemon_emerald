	@ src/item_menu.c:304 item_menu_line_304
	.globl gText_Rom_5C93CC
gText_Rom_5C93CC: @ 0x085C93CC
	.string "みせる$"
	.if (. - gText_Rom_5C93CC) > 0x4
	.error "gText_Rom_5C93CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93CC) < 0x4
	.space 0x4 - (. - gText_Rom_5C93CC)
	.endif
	.globl gUnknown_85C93D0
gUnknown_85C93D0: @ 0x085C93D0
	@ Replaced baserom.gba range: offset=0x5C93D0, size=0x7
	.byte 0xFF, 0x57, 0x84, 0x7E, 0x5E, 0x79, 0xFF


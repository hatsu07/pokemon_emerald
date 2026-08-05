	@ src/main_menu.c:482 main_menu_line_482
	.globl gText_Rom_5C8EA0
gText_Rom_5C8EA0: @ 0x085C8EA0
	.string "ギョク$"
	.if (. - gText_Rom_5C8EA0) > 0x4
	.error "gText_Rom_5C8EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EA0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EA0)
	.endif
	@ Replaced baserom.gba range: offset=0x5C8EA4, size=0x8
	.byte 0xFF, 0xFF, 0x59, 0x52, 0xFF, 0xFF, 0xFF, 0xFF

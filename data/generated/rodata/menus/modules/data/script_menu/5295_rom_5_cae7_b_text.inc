	@ src/data/script_menu.h:237 script_menu_line_237 (+1 aliases)
	.globl gText_Rom_5CAE7B
gText_Rom_5CAE7B: @ 0x085CAE7B
	.string "ジャンプ$"
	.if (. - gText_Rom_5CAE7B) > 0x5
	.error "gText_Rom_5CAE7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE7B) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE7B)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAE80, size=0x6
	.byte 0x95, 0xAE, 0x95, 0x78, 0x55, 0x19

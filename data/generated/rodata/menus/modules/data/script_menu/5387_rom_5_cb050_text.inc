	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_5CB050
gText_Rom_5CB050: @ 0x085CB050
	.string "あかいビードロ$"
	.if (. - gText_Rom_5CB050) > 0x8
	.error "gText_Rom_5CB050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB050) < 0x8
	.space 0x8 - (. - gText_Rom_5CB050)
	.endif

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CB060
gText_Rom_5CB060: @ 0x085CB060
	.string "くろいビードロ$"
	.if (. - gText_Rom_5CB060) > 0x8
	.error "gText_Rom_5CB060 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB060) < 0x8
	.space 0x8 - (. - gText_Rom_5CB060)
	.endif

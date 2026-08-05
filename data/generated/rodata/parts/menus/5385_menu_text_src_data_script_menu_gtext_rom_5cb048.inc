	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_5CB048
gText_Rom_5CB048: @ 0x085CB048
	.string "きいろビードロ$"
	.if (. - gText_Rom_5CB048) > 0x8
	.error "gText_Rom_5CB048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB048) < 0x8
	.space 0x8 - (. - gText_Rom_5CB048)
	.endif

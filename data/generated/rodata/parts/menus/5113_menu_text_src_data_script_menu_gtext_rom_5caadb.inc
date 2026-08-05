	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5CAADB
gText_Rom_5CAADB: @ 0x085CAADB
	.string "いいえ$"
	.if (. - gText_Rom_5CAADB) > 0x4
	.error "gText_Rom_5CAADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAADB) < 0x4
	.space 0x4 - (. - gText_Rom_5CAADB)
	.endif

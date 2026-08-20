	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5DBC0D
gText_Rom_5DBC0D: @ 0x085DBC0D
	.string "いいえ{EOS}"
	.if (. - gText_Rom_5DBC0D) > 0x4
	.error "gText_Rom_5DBC0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DBC0D) < 0x4
	.space 0x4 - (. - gText_Rom_5DBC0D)
	.endif

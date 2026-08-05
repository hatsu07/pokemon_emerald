	@ src/data/script_menu.h:637 script_menu_line_637 (+3 aliases)
	.globl gText_Rom_5DC10F
gText_Rom_5DC10F: @ 0x085DC10F
	.string "いいえ$"
	.if (. - gText_Rom_5DC10F) > 0x4
	.error "gText_Rom_5DC10F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC10F) < 0x4
	.space 0x4 - (. - gText_Rom_5DC10F)
	.endif

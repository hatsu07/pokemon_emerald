	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Rom_4E8B72
gText_Rom_4E8B72: @ 0x084E8B72
	.string "せってい$"
	.if (. - gText_Rom_4E8B72) > 0x5
	.error "gText_Rom_4E8B72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B72) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B72)
	.endif

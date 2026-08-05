	@ src/main_menu.c:522 main_menu_line_522
	.globl gText_Rom_5C8F7C
gText_Rom_5C8F7C: @ 0x085C8F7C
	.string "モニカ$"
	.if (. - gText_Rom_5C8F7C) > 0x4
	.error "gText_Rom_5C8F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F7C) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F7C)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:523 main_menu_line_523
	.globl gText_Rom_5C8F82
gText_Rom_5C8F82: @ 0x085C8F82
	.string "ユウメ$"
	.if (. - gText_Rom_5C8F82) > 0x4
	.error "gText_Rom_5C8F82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F82) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F82)
	.endif
	.space 0x2, 0xFF
	.globl gUnknown_85C8F88
gUnknown_85C8F88: @ 0x085C8F88

	@ asm/main_menu.s:2379 Task_NewGameBirchSpeech_ThisIsAPokemon
	.globl gText_Rom_5C8F88
gText_Rom_5C8F88: @ 0x085C8F88
	.string "ポケットモンスター\n……すなわち　ポケモン{PAUSE}{0x60}\p$"
	.if (. - gText_Rom_5C8F88) > 0x1a
	.error "gText_Rom_5C8F88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F88) < 0x1a
	.space 0x1a - (. - gText_Rom_5C8F88)
	.endif

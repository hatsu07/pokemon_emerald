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

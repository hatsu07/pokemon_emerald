	@ src/battle_main.c:363 battle_main_line_363
	.globl gText_Rom_2E3803
gText_Rom_2E3803: @ 0x082E3803
	.string "アリーナキャプテン$"
	.if (. - gText_Rom_2E3803) > 0xa
	.error "gText_Rom_2E3803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3803) < 0xa
	.space 0xa - (. - gText_Rom_2E3803)
	.endif
	.space 0x1, 0x00

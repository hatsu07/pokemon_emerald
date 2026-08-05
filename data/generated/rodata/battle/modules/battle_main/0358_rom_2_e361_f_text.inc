	@ src/battle_main.c:319 battle_main_line_319
	.globl gText_Rom_2E361F
gText_Rom_2E361F: @ 0x082E361F
	.string "インタビュアー$"
	.if (. - gText_Rom_2E361F) > 0x8
	.error "gText_Rom_2E361F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E361F) < 0x8
	.space 0x8 - (. - gText_Rom_2E361F)
	.endif
	.space 0x3, 0x00

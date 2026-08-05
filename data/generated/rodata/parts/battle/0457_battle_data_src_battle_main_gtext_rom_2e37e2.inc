	@ src/battle_main.c:360 battle_main_line_360
	.globl gText_Rom_2E37E2
gText_Rom_2E37E2: @ 0x082E37E2
	.string "タワータイクーン$"
	.if (. - gText_Rom_2E37E2) > 0x9
	.error "gText_Rom_2E37E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37E2) < 0x9
	.space 0x9 - (. - gText_Rom_2E37E2)
	.endif
	.space 0x2, 0x00

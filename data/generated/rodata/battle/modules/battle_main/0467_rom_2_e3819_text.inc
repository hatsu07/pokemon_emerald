	@ src/battle_main.c:365 battle_main_line_365
	.globl gText_Rom_2E3819
gText_Rom_2E3819: @ 0x082E3819
	.string "チューブクイーン$"
	.if (. - gText_Rom_2E3819) > 0x9
	.error "gText_Rom_2E3819 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3819) < 0x9
	.space 0x9 - (. - gText_Rom_2E3819)
	.endif
	.space 0x2, 0x00

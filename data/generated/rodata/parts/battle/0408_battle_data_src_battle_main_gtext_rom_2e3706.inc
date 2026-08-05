	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
	.globl gText_Rom_2E3706
gText_Rom_2E3706: @ 0x082E3706
	.string "チャンピオン$"
	.if (. - gText_Rom_2E3706) > 0x7
	.error "gText_Rom_2E3706 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3706) < 0x7
	.space 0x7 - (. - gText_Rom_2E3706)
	.endif
	.space 0x4, 0x00

	@ src/battle_main.c:349 battle_main_line_349 (+1 aliases)
	.globl gText_Rom_2E3769
gText_Rom_2E3769: @ 0x082E3769
	.string "ふなのり$"
	.if (. - gText_Rom_2E3769) > 0x5
	.error "gText_Rom_2E3769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3769) < 0x5
	.space 0x5 - (. - gText_Rom_2E3769)
	.endif
	.space 0x6, 0x00

	@ src/battle_main.c:354 battle_main_line_354 (+1 aliases)
	.globl gText_Rom_2E37A0
gText_Rom_2E37A0: @ 0x082E37A0
	.string "ポケモンレンジャー$"
	.if (. - gText_Rom_2E37A0) > 0xa
	.error "gText_Rom_2E37A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37A0) < 0xa
	.space 0xa - (. - gText_Rom_2E37A0)
	.endif
	.space 0x1, 0x00

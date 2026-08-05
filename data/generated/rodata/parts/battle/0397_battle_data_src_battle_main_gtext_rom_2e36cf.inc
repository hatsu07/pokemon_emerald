	@ src/battle_main.c:335 battle_main_line_335
	.globl gText_Rom_2E36CF
gText_Rom_2E36CF: @ 0x082E36CF
	.string "じゅくがえり$"
	.if (. - gText_Rom_2E36CF) > 0x7
	.error "gText_Rom_2E36CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36CF) < 0x7
	.space 0x7 - (. - gText_Rom_2E36CF)
	.endif
	.space 0x4, 0x00

	@ src/battle_dome.c:862 battle_dome_line_862
	.globl gText_Rom_27396A
gText_Rom_27396A: @ 0x0827396A
	.string "けっしょうまでは かくじつと いわれる チーム。{EOS}"
	.if (. - gText_Rom_27396A) > 0x19
	.error "gText_Rom_27396A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27396A) < 0x19
	.space 0x19 - (. - gText_Rom_27396A)
	.endif

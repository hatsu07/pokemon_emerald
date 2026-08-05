	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
	.globl gText_Rom_5F7410
gText_Rom_5F7410: @ 0x085F7410
	.string "してんのう$"
	.if (. - gText_Rom_5F7410) > 0x6
	.error "gText_Rom_5F7410 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7410) < 0x6
	.space 0x6 - (. - gText_Rom_5F7410)
	.endif

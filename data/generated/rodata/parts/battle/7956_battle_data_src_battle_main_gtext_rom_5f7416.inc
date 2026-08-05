	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
	.globl gText_Rom_5F7416
gText_Rom_5F7416: @ 0x085F7416
	.string "チャンピオン$"
	.if (. - gText_Rom_5F7416) > 0x7
	.error "gText_Rom_5F7416 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7416) < 0x7
	.space 0x7 - (. - gText_Rom_5F7416)
	.endif

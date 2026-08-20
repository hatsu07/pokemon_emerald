	@ src/battle_debug.c:320 battle_debug_line_320 (+3 aliases)
	.globl gText_Rom_578490
gText_Rom_578490: @ 0x08578490
	.string "ランク{EOS}"
	.if (. - gText_Rom_578490) > 0x4
	.error "gText_Rom_578490 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_578490) < 0x4
	.space 0x4 - (. - gText_Rom_578490)
	.endif

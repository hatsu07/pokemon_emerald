	@ src/battle_debug.c:382 battle_debug_line_382 (+1 aliases)
	.globl gText_Rom_2EB55C
gText_Rom_2EB55C: @ 0x082EB55C
	.string "ねをはる$"
	.if (. - gText_Rom_2EB55C) > 0x5
	.error "gText_Rom_2EB55C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB55C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB55C)
	.endif
	.incbin "baserom.gba", 0x2eb561, 0x3


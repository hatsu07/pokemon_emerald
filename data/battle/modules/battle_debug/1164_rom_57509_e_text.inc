	@ src/battle_debug.c:337 battle_debug_line_337 (+5 aliases)
	.globl gText_Rom_57509E
gText_Rom_57509E: @ 0x0857509E
	.string "こうげき{EOS}"
	.if (. - gText_Rom_57509E) > 0x5
	.error "gText_Rom_57509E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57509E) < 0x5
	.space 0x5 - (. - gText_Rom_57509E)
	.endif

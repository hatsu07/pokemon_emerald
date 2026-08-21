	@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_574993
gText_Rom_574993: @ 0x08574993
	.string "こおり{EOS}"
	.if (. - gText_Rom_574993) > 0x4
	.error "gText_Rom_574993 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574993) < 0x4
	.space 0x4 - (. - gText_Rom_574993)
	.endif

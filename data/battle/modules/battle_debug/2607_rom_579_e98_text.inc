	@ src/battle_debug.c:321 battle_debug_line_321 (+2 aliases)
	.globl gText_Rom_579E98
gText_Rom_579E98: @ 0x08579E98
	.string "じょうたい{EOS}"
	.if (. - gText_Rom_579E98) > 0x6
	.error "gText_Rom_579E98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E98) < 0x6
	.space 0x6 - (. - gText_Rom_579E98)
	.endif

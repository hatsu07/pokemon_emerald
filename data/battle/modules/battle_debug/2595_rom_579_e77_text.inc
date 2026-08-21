	@ src/battle_debug.c:319 battle_debug_line_319 (+1 aliases)
	.globl gText_Rom_579E77
gText_Rom_579E77: @ 0x08579E77
	.string "ステータス{EOS}"
	.if (. - gText_Rom_579E77) > 0x6
	.error "gText_Rom_579E77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E77) < 0x6
	.space 0x6 - (. - gText_Rom_579E77)
	.endif

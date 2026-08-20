	@ src/battle_dome.c:895 battle_dome_line_895
	.globl gText_Rom_273BFA
gText_Rom_273BFA: @ 0x08273BFA
	.string "よわらせてから こうげきを するのが とくい。{EOS}"
	.if (. - gText_Rom_273BFA) > 0x18
	.error "gText_Rom_273BFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BFA) < 0x18
	.space 0x18 - (. - gText_Rom_273BFA)
	.endif

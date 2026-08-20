	@ src/battle_debug.c:235 sText_Ability (+1 aliases)
	.globl gText_Rom_57474A
gText_Rom_57474A: @ 0x0857474A
	.string "とくせい{EOS}"
	.if (. - gText_Rom_57474A) > 0x5
	.error "gText_Rom_57474A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57474A) < 0x5
	.space 0x5 - (. - gText_Rom_57474A)
	.endif

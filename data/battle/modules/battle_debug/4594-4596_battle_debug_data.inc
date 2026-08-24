	.globl sText_HP

	@ src/battle_message.c:148 sText_HP (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_HP
sText_HP: @ 0x085C9AE7
	.string "たいりょく{EOS}"
	.if (. - sText_HP) != 0x6
	.error "sText_HP must retain its original byte length"
	.endif
	.globl gText_Rom_5C9AE8
	.set gText_Rom_5C9AE8, sText_HP + 0x1
	.globl gText_Rom_5C9AED

	@ src/battle_debug.c:340 battle_debug_line_340 (+5 aliases)
	.globl gText_Rom_5C9AED
gText_Rom_5C9AED: @ 0x085C9AED
	.string "とくこう{EOS}"
	.if (. - gText_Rom_5C9AED) > 0x5
	.error "gText_Rom_5C9AED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AED) < 0x5
	.space 0x5 - (. - gText_Rom_5C9AED)
	.endif

	@ src/battle_debug.c:341 battle_debug_line_341 (+5 aliases)
	.globl gText_Rom_5C9AF2
gText_Rom_5C9AF2: @ 0x085C9AF2
	.string "とくぼう{EOS}"
	.if (. - gText_Rom_5C9AF2) > 0x5
	.error "gText_Rom_5C9AF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9AF2) < 0x5
	.space 0x5 - (. - gText_Rom_5C9AF2)
	.endif

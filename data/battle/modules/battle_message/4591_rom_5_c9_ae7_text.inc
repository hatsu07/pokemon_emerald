	@ src/battle_message.c:148 sText_HP (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AE7
gText_Rom_5C9AE7: @ 0x085C9AE7
	.string "たいりょく{EOS}"
	.if (. - gText_Rom_5C9AE7) != 0x6
	.error "gText_Rom_5C9AE7 must retain its original byte length"
	.endif

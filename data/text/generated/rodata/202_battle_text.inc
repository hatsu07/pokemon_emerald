	@ src/battle_message.c:148 sText_HP (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9AE7
gText_Rom_5C9AE7: @ 0x085C9AE7
	.string "たいりょく$"
	.if (. - gText_Rom_5C9AE7) != 0x6
	.error "gText_Rom_5C9AE7 must retain its original byte length"
	.endif
	.globl gText_Rom_5C9AE8
	.set gText_Rom_5C9AE8, gText_Rom_5C9AE7 + 0x1
	.globl gUnknown_85C9AED
gUnknown_85C9AED: @ 0x085C9AED


	@ src/battle_message.c:148 sText_HP (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_HP
sText_HP: @ 0x085C9AE7
	.string "たいりょく{EOS}"
	.if (. - sText_HP) != 0x6
	.error "sText_HP must retain its original byte length"
	.endif

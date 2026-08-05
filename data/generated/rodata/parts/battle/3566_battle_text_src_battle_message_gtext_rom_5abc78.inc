	@ src/battle_message.c:1491 gText_BadEgg
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ABC78
gText_Rom_5ABC78: @ 0x085ABC78
	.string "ダメタマゴ$"
	.if (. - gText_Rom_5ABC78) != 0x6
	.error "gText_Rom_5ABC78 must retain its original byte length"
	.endif

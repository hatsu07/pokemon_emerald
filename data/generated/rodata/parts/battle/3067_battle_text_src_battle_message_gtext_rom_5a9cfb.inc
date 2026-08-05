	@ src/battle_message.c:270 battle_message_line_270
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9CFB
gText_Rom_5A9CFB: @ 0x085A9CFB
	.string "いきおい あまって\n{B_ATK_NAME_WITH_PREFIX}は じめんに ぶつかった!$"
	.if (. - gText_Rom_5A9CFB) != 0x1a
	.error "gText_Rom_5A9CFB must retain its original byte length"
	.endif

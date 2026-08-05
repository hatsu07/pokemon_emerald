	@ src/battle_message.c:248 battle_message_line_248
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5A9AE4
gText_Rom_5A9AE4: @ 0x085A9AE4
	.string "{B_ATK_NAME_WITH_PREFIX}は ひるんで\nうごけなかった!$"
	.if (. - gText_Rom_5A9AE4) != 0x12
	.error "gText_Rom_5A9AE4 must retain its original byte length"
	.endif

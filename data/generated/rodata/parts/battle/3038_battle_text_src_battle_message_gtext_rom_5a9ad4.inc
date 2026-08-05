	@ src/battle_message.c:247 battle_message_line_247
	.globl gText_Rom_5A9AD4
gText_Rom_5A9AD4: @ 0x085A9AD4
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}タイプに なった！$"
	.if (. - gText_Rom_5A9AD4) > 0x10
	.error "gText_Rom_5A9AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9AD4) < 0x10
	.space 0x10 - (. - gText_Rom_5A9AD4)
	.endif

	@ src/battle_message.c:269 battle_message_line_269 (+1 aliases)
	.globl gText_Rom_5A9CE9
gText_Rom_5A9CE9: @ 0x085A9CE9
	.string "{B_ATK_NAME_WITH_PREFIX}は\n{B_BUFF1}から かいほうされた！$"
	.if (. - gText_Rom_5A9CE9) > 0x12
	.error "gText_Rom_5A9CE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9CE9) < 0x12
	.space 0x12 - (. - gText_Rom_5A9CE9)
	.endif

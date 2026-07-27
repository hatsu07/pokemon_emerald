	@ src/battle_message.c:286 battle_message_line_286
	.globl gText_Rom_5A9E28
gText_Rom_5A9E28: @ 0x085A9E28
	.string "{B_ATK_NAME_WITH_PREFIX}は さわいでいる!$"
	.if (. - gText_Rom_5A9E28) > 0xc
	.error "gText_Rom_5A9E28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E28) < 0xc
	.space 0xc - (. - gText_Rom_5A9E28)
	.endif

	@ src/battle_message.c:287 battle_message_line_287
	.globl gText_Rom_5A9E34
gText_Rom_5A9E34: @ 0x085A9E34
	.string "{B_ATK_NAME_WITH_PREFIX}は\nおとなしくなった$"
	.if (. - gText_Rom_5A9E34) > 0xd
	.error "gText_Rom_5A9E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E34) < 0xd
	.space 0xd - (. - gText_Rom_5A9E34)
	.endif
	.incbin "baserom.gba", 0x5a9e41, 0x15

	@ src/battle_message.c:288 battle_message_line_288
	.globl gText_Rom_5A9E56
gText_Rom_5A9E56: @ 0x085A9E56
	.string "{B_ATK_NAME_WITH_PREFIX}は {B_BUFF1}つたくわえた!$"
	.if (. - gText_Rom_5A9E56) > 0xe
	.error "gText_Rom_5A9E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9E56) < 0xe
	.space 0xe - (. - gText_Rom_5A9E56)
	.endif
	.incbin "baserom.gba", 0x5a9e64, 0x5b


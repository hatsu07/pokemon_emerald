	@ src/battle_message.c:224 battle_message_line_224
	.globl gText_Rom_5A98D7
gText_Rom_5A98D7: @ 0x085A98D7
	.string "{B_DEF_NAME_WITH_PREFIX}から\nたいりょくを すいとった!$"
	.if (. - gText_Rom_5A98D7) > 0x13
	.error "gText_Rom_5A98D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A98D7) < 0x13
	.space 0x13 - (. - gText_Rom_5A98D7)
	.endif
	.incbin "baserom.gba", 0x5a98ea, 0x22

	@ src/battle_message.c:227 battle_message_line_227
	.globl gText_Rom_5A990C
gText_Rom_5A990C: @ 0x085A990C
	.string "{B_ATK_NAME_WITH_PREFIX}は\nやけどの ダメージを うけている！$"
	.if (. - gText_Rom_5A990C) > 0x16
	.error "gText_Rom_5A990C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A990C) < 0x16
	.space 0x16 - (. - gText_Rom_5A990C)
	.endif
	.incbin "baserom.gba", 0x5a9922, 0xf


	@ src/battle_message.c:228 battle_message_line_228
	.globl gText_Rom_5A9935
gText_Rom_5A9935: @ 0x085A9935
	.string "{B_EFF_NAME_WITH_PREFIX}は\nこおりづけになった!$"
	.if (. - gText_Rom_5A9935) > 0xf
	.error "gText_Rom_5A9935 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9935) < 0xf
	.space 0xf - (. - gText_Rom_5A9935)
	.endif
	.incbin "baserom.gba", 0x5a9944, 0x17

	@ src/battle_message.c:230 battle_message_line_230
	.globl gText_Rom_5A995B
gText_Rom_5A995B: @ 0x085A995B
	.string "{B_ATK_NAME_WITH_PREFIX}は\nこおって しまって うごかない!$"
	.if (. - gText_Rom_5A995B) > 0x15
	.error "gText_Rom_5A995B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A995B) < 0x15
	.space 0x15 - (. - gText_Rom_5A995B)
	.endif
	.incbin "baserom.gba", 0x5a9970, 0x2e

	@ src/battle_message.c:233 battle_message_line_233
	.globl gText_Rom_5A999E
gText_Rom_5A999E: @ 0x085A999E
	.string "{B_EFF_NAME_WITH_PREFIX}は まひして\nわざが でにくくなった!$"
	.if (. - gText_Rom_5A999E) > 0x16
	.error "gText_Rom_5A999E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A999E) < 0x16
	.space 0x16 - (. - gText_Rom_5A999E)
	.endif
	.incbin "baserom.gba", 0x5a99b4, 0x1e

	@ src/battle_message.c:235 battle_message_line_235
	.globl gText_Rom_5A99D2
gText_Rom_5A99D2: @ 0x085A99D2
	.string "{B_ATK_NAME_WITH_PREFIX}は\nからだが しびれて うごけない$"
	.if (. - gText_Rom_5A99D2) > 0x14
	.error "gText_Rom_5A99D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A99D2) < 0x14
	.space 0x14 - (. - gText_Rom_5A99D2)
	.endif
	.incbin "baserom.gba", 0x5a99e6, 0xb


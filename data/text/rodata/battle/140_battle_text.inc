	@ src/battle_message.c:499 battle_message_line_499
	.globl gText_Rom_5AA826
gText_Rom_5AA826: @ 0x085AA826
	.string "{B_EFF_NAME_WITH_PREFIX}は {B_EFF_ABILITY}で\nひるまない!$"
	.if (. - gText_Rom_5AA826) > 0xf
	.error "gText_Rom_5AA826 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA826) < 0xf
	.space 0xf - (. - gText_Rom_5AA826)
	.endif
	.incbin "baserom.gba", 0x5aa835, 0x37


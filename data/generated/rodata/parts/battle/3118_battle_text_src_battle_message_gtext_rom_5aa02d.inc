	@ src/battle_message.c:314 battle_message_line_314
	.globl gText_Rom_5AA02D
gText_Rom_5AA02D: @ 0x085AA02D
	.string "{B_DEF_NAME_WITH_PREFIX}の\n{B_BUFF1}を {B_BUFF2}けずった!$"
	.if (. - gText_Rom_5AA02D) > 0x10
	.error "gText_Rom_5AA02D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA02D) < 0x10
	.space 0x10 - (. - gText_Rom_5AA02D)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA03D, size=0x15
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0xFD, 0x10, 0x06, 0x27, 0xFE, 0xFD, 0x16, 0x2D, 0x00, 0x03, 0x46, 0x02
	.byte 0x14, 0x50, 0x10, 0xAB, 0xFF

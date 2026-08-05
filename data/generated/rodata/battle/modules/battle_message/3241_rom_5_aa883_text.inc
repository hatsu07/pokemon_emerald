	@ src/battle_message.c:77 gText_StatFell
	.globl gText_Rom_5AA883
gText_Rom_5AA883: @ 0x085AA883
	.string "さがった！$"
	.if (. - gText_Rom_5AA883) > 0x6
	.error "gText_Rom_5AA883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AA883) < 0x6
	.space 0x6 - (. - gText_Rom_5AA883)
	.endif
	@ Replaced baserom.gba range: offset=0x5AA889, size=0xB
	.byte 0xFD, 0x0F, 0x19, 0xFE, 0xFD, 0x00, 0x37, 0x00, 0xFD, 0x01, 0xFF

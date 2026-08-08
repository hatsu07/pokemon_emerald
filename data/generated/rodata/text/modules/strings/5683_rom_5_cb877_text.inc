	@ src/strings.c:543 gText_AndMakeYourProfile
	.globl gText_Rom_5CB877
gText_Rom_5CB877: @ 0x085CB877
	.string "プロフィールを つくろう!$"
	.if (. - gText_Rom_5CB877) > 0xe
	.error "gText_Rom_5CB877 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB877) < 0xe
	.space 0xe - (. - gText_Rom_5CB877)
	.endif
	@ Replaced baserom.gba range: offset=0x5CB885, size=0x9
	.byte 0xA7, 0x12, 0x19, 0x00, 0x0A, 0x14, 0x46, 0x44, 0x00

	@ src/strings.c:1053 gText_ReturnToTitle
	.globl gText_Rom_2C26A5
gText_Rom_2C26A5: @ 0x082C26A5
	.string "   タイトルに もどります$"
	.if (. - gText_Rom_2C26A5) > 0xf
	.error "gText_Rom_2C26A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C26A5) < 0xf
	.space 0xf - (. - gText_Rom_2C26A5)
	.endif
	@ Replaced baserom.gba range: offset=0x2C26B4, size=0x10
	.byte 0x54, 0x26, 0x2C, 0x08, 0x70, 0x26, 0x2C, 0x08, 0x8C, 0x26, 0x2C, 0x08, 0xA8, 0x26, 0x2C, 0x08

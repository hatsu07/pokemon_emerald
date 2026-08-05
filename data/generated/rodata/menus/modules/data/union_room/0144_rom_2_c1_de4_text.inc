	@ src/data/union_room.h:557 sText_BerryBlender
	.globl gText_Rom_2C1DE4
gText_Rom_2C1DE4: @ 0x082C1DE4
	.string "きのみブレンダー$"
	.if (. - gText_Rom_2C1DE4) > 0x9
	.error "gText_Rom_2C1DE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1DE4) < 0x9
	.space 0x9 - (. - gText_Rom_2C1DE4)
	.endif
	@ Replaced baserom.gba range: offset=0x2C1DED, size=0xF
	.byte 0x00, 0x00, 0x00, 0x7A, 0x5A, 0xAE, 0x95, 0x5A, 0xAE, 0x65, 0xAE, 0xFF, 0x00, 0x00, 0x00


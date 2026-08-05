	@ src/data/union_room.h:13 sJPText_Chat
	.globl gText_Rom_2C0720
gText_Rom_2C0720: @ 0x082C0720
	.string "チャットを かいさいする$"
	.if (. - gText_Rom_2C0720) > 0xd
	.error "gText_Rom_2C0720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0720) < 0xd
	.space 0xd - (. - gText_Rom_2C0720)
	.endif
	.space 0x3, 0x00

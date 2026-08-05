	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F78
gText_Rom_2C0F78: @ 0x082C0F78
	.string "あ！　いまね　わたしたち\nチャット　してるんだ\lよかったら　いっしょに　しない？$"
	.if (. - gText_Rom_2C0F78) > 0x29
	.error "gText_Rom_2C0F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F78) < 0x29
	.space 0x29 - (. - gText_Rom_2C0F78)
	.endif
	.space 0x3, 0x00

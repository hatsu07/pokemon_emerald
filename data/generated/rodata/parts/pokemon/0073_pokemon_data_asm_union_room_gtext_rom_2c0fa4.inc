	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0FA4
gText_Rom_2C0FA4: @ 0x082C0FA4
	.string "{0xFD}{0x02}「あ！　{0xFD}{0x01}\nいまね　チャット　してるんだ\lよかったら　いっしょに　しない？$"
	.if (. - gText_Rom_2C0FA4) > 0x29
	.error "gText_Rom_2C0FA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0FA4) < 0x29
	.space 0x29 - (. - gText_Rom_2C0FA4)
	.endif
	.space 0x3, 0x00

	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F4C
gText_Rom_2C0F4C: @ 0x082C0F4C
	.string "{0xFD}{0x02}「お！　{0xFD}{0x01}\nいま　チャットちゅう　なんだ！\lよかったら　いっしょに　はいるかい？$"
	.if (. - gText_Rom_2C0F4C) > 0x2c
	.error "gText_Rom_2C0F4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F4C) < 0x2c
	.space 0x2c - (. - gText_Rom_2C0F4C)
	.endif

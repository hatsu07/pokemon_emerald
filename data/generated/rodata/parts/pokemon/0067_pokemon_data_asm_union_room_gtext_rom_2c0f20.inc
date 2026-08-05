	@ asm/union_room.s:10063 sub_08017484
	.globl gText_Rom_2C0F20
gText_Rom_2C0F20: @ 0x082C0F20
	.string "お！　いま　おれたち\nチャットちゅう　なんだ！\lよかったら　いっしょに　はいるかい？$"
	.if (. - gText_Rom_2C0F20) > 0x2b
	.error "gText_Rom_2C0F20 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F20) < 0x2b
	.space 0x2b - (. - gText_Rom_2C0F20)
	.endif
	.space 0x1, 0x00

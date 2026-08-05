	@ asm/union_room.s:10767 sub_08017960
	.globl gText_Rom_2C0EA8
gText_Rom_2C0EA8: @ 0x082C0EA8
	.string "とうろく　していた　タマゴの\nこうかん　もうしこみが　きています\lこうかん　しますか？$"
	.if (. - gText_Rom_2C0EA8) > 0x2c
	.error "gText_Rom_2C0EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0EA8) < 0x2c
	.space 0x2c - (. - gText_Rom_2C0EA8)
	.endif

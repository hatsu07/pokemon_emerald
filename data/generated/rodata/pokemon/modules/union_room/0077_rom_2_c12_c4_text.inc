	@ asm/union_room.s:6451 sub_080151E8
	.globl gText_Rom_2C12C4
gText_Rom_2C12C4: @ 0x082C12C4
	.string "あ！　ごめん\nほかに　ようじが　あるから\lまたこんどね\p$"
	.if (. - gText_Rom_2C12C4) > 0x1d
	.error "gText_Rom_2C12C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C12C4) < 0x1d
	.space 0x1d - (. - gText_Rom_2C12C4)
	.endif
	.space 0x3, 0x00

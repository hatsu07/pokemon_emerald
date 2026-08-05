	@ asm/union_room.s:10805 sub_08017960
	.globl gText_Rom_2C0ED4
gText_Rom_2C0ED4: @ 0x082C0ED4
	.string "かいわが　きれました\p$"
	.if (. - gText_Rom_2C0ED4) > 0xc
	.error "gText_Rom_2C0ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0ED4) < 0xc
	.space 0xc - (. - gText_Rom_2C0ED4)
	.endif

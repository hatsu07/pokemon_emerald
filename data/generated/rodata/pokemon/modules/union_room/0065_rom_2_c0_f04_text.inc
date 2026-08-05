	@ asm/union_room.s:6950 sub_080151E8
	.globl gText_Rom_2C0F04
gText_Rom_2C0F04: @ 0x082C0F04
	.string "かいわを　きりました\p$"
	.if (. - gText_Rom_2C0F04) > 0xc
	.error "gText_Rom_2C0F04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C0F04) < 0xc
	.space 0xc - (. - gText_Rom_2C0F04)
	.endif
	.4byte gUnknown_82C0DEC
	.4byte gUnknown_82C0E1C
	.4byte gUnknown_82C0E40
	.4byte gUnknown_82C0E68

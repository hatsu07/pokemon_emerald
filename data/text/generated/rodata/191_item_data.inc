	@ asm/dodrio_berry_picking.s:11319 sub_08029D28
	.globl gText_Rom_5C9421
gText_Rom_5C9421: @ 0x085C9421
	.string "▶$"
	.if (. - gText_Rom_5C9421) > 0x2
	.error "gText_Rom_5C9421 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9421) < 0x2
	.space 0x2 - (. - gText_Rom_5C9421)
	.endif
	.globl gUnknown_85C9423
gUnknown_85C9423: @ 0x085C9423

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5C9423
gText_Rom_5C9423: @ 0x085C9423
	.string "まえに　もどります！$"
	.if (. - gText_Rom_5C9423) > 0xb
	.error "gText_Rom_5C9423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9423) < 0xb
	.space 0xb - (. - gText_Rom_5C9423)
	.endif
	.globl gUnknown_85C942E
gUnknown_85C942E: @ 0x085C942E


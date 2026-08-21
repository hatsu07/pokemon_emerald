	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5C9423
gText_Rom_5C9423: @ 0x085C9423
	.string "まえに　もどります！{EOS}"
	.if (. - gText_Rom_5C9423) > 0xb
	.error "gText_Rom_5C9423 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9423) < 0xb
	.space 0xb - (. - gText_Rom_5C9423)
	.endif

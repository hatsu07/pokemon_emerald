	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6E1
gText_Rom_5CA6E1: @ 0x085CA6E1
	.string "えらんだ　グッズを　パソコンに　もどします！$"
	.if (. - gText_Rom_5CA6E1) > 0x17
	.error "gText_Rom_5CA6E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6E1) < 0x17
	.space 0x17 - (. - gText_Rom_5CA6E1)
	.endif

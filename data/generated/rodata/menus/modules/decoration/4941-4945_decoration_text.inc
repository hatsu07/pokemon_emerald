	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6CD
gText_Rom_5CA6CD: @ 0x085CA6CD
	.string "えらんだ　グッズを　へやに　おきます！$"
	.if (. - gText_Rom_5CA6CD) > 0x14
	.error "gText_Rom_5CA6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6CD) < 0x14
	.space 0x14 - (. - gText_Rom_5CA6CD)
	.endif

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

	@ asm/decoration.s:326 PrintCurMainMenuDescription (+1 aliases)
	.globl gText_Rom_5CA6F8
gText_Rom_5CA6F8: @ 0x085CA6F8
	.string "いらなくなった　グッズを　すてます！$"
	.if (. - gText_Rom_5CA6F8) > 0x13
	.error "gText_Rom_5CA6F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA6F8) < 0x13
	.space 0x13 - (. - gText_Rom_5CA6F8)
	.endif

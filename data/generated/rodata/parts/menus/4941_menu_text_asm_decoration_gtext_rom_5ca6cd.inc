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

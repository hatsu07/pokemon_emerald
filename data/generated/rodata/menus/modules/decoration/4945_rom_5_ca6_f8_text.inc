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

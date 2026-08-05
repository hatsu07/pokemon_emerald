	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_Rom_5CBCE0
gText_Rom_5CBCE0: @ 0x085CBCE0
	.string "こたえを えらんでください!$"
	.if (. - gText_Rom_5CBCE0) > 0xf
	.error "gText_Rom_5CBCE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCE0) < 0xf
	.space 0xf - (. - gText_Rom_5CBCE0)
	.endif

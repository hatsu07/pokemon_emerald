	@ src/strings.c:596 gText_SetTheAnswer (+1 aliases)
	.globl gText_SetTheAnswer
gText_SetTheAnswer: @ 0x085CBCE0
	.string "こたえを えらんでください!{EOS}"
	.if (. - gText_SetTheAnswer) > 0xf
	.error "gText_SetTheAnswer may not grow beyond its original slot"
	.endif
	.if (. - gText_SetTheAnswer) < 0xf
	.space 0xf - (. - gText_SetTheAnswer)
	.endif

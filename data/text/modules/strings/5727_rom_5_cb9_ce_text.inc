	@ src/strings.c:566 gText_ToTeachHerAGoodSaying
	.globl gText_ToTeachHerAGoodSaying
gText_ToTeachHerAGoodSaying: @ 0x085CB9CE
	.string "いい ことばを おしえてあげよう!{EOS}"
	.if (. - gText_ToTeachHerAGoodSaying) > 0x12
	.error "gText_ToTeachHerAGoodSaying may not grow beyond its original slot"
	.endif
	.if (. - gText_ToTeachHerAGoodSaying) < 0x12
	.space 0x12 - (. - gText_ToTeachHerAGoodSaying)
	.endif

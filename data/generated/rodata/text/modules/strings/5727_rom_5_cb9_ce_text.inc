	@ src/strings.c:566 gText_ToTeachHerAGoodSaying
	.globl gText_Rom_5CB9CE
gText_Rom_5CB9CE: @ 0x085CB9CE
	.string "いい ことばを おしえてあげよう!{EOS}"
	.if (. - gText_Rom_5CB9CE) > 0x12
	.error "gText_Rom_5CB9CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9CE) < 0x12
	.space 0x12 - (. - gText_Rom_5CB9CE)
	.endif

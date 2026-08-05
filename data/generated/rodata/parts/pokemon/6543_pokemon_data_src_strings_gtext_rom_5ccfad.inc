	@ src/strings.c:869 gJPText_Connecting
	.globl gText_Rom_5CCFAD
gText_Rom_5CCFAD: @ 0x085CCFAD
	.string "つうしん ちゅう です$"
	.if (. - gText_Rom_5CCFAD) > 0xc
	.error "gText_Rom_5CCFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFAD) < 0xc
	.space 0xc - (. - gText_Rom_5CCFAD)
	.endif

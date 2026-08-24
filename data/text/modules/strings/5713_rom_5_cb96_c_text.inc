	@ src/strings.c:559 gText_TheMailSalutation
	.globl gText_TheMailSalutation
gText_TheMailSalutation: @ 0x085CB96C
	.string "はがきに のせる あいさつは{EOS}"
	.if (. - gText_TheMailSalutation) > 0xf
	.error "gText_TheMailSalutation may not grow beyond its original slot"
	.endif
	.if (. - gText_TheMailSalutation) < 0xf
	.space 0xf - (. - gText_TheMailSalutation)
	.endif

	@ src/strings.c:559 gText_TheMailSalutation
	.globl gText_Rom_5CB96C
gText_Rom_5CB96C: @ 0x085CB96C
	.string "はがきに のせる あいさつは{EOS}"
	.if (. - gText_Rom_5CB96C) > 0xf
	.error "gText_Rom_5CB96C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB96C) < 0xf
	.space 0xf - (. - gText_Rom_5CB96C)
	.endif

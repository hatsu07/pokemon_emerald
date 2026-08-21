	@ src/strings.c:577 gText_ApprenticePhrase
	.globl gText_Rom_5CBA58
gText_Rom_5CBA58: @ 0x085CBA58
	.string "でしの きめゼリフは{EOS}"
	.if (. - gText_Rom_5CBA58) > 0xb
	.error "gText_Rom_5CBA58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA58) < 0xb
	.space 0xb - (. - gText_Rom_5CBA58)
	.endif

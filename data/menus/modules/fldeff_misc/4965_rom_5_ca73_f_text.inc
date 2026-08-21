	@ asm/fldeff_misc.s:2181 GetShieldToyTVDecorationInfo
	.globl gText_Rom_5CA73F
gText_Rom_5CA73F: @ 0x085CA73F
	.string "きん{EOS}"
	.if (. - gText_Rom_5CA73F) > 0x3
	.error "gText_Rom_5CA73F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA73F) < 0x3
	.space 0x3 - (. - gText_Rom_5CA73F)
	.endif

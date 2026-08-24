	@ src/strings.c:974 gText_Hoenn
	.globl gText_Hoenn
gText_Hoenn: @ 0x085C611C
	.string "ホウエンちほう{EOS}"
	.if (. - gText_Hoenn) > 0x8
	.error "gText_Hoenn may not grow beyond its original slot"
	.endif
	.if (. - gText_Hoenn) < 0x8
	.space 0x8 - (. - gText_Hoenn)
	.endif

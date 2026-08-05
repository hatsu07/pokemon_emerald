	@ src/strings.c:446 gText_DecorationThrownAway
	.globl gText_Rom_5CA829
gText_Rom_5CA829: @ 0x085CA829
	.string "グッズを すてました!$"
	.if (. - gText_Rom_5CA829) > 0xc
	.error "gText_Rom_5CA829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA829) < 0xc
	.space 0xc - (. - gText_Rom_5CA829)
	.endif

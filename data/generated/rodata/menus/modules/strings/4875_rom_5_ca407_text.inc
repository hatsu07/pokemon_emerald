	@ src/strings.c:393 gText_Info
	.globl gText_Rom_5CA407
gText_Rom_5CA407: @ 0x085CA407
	.string "きりかえ$"
	.if (. - gText_Rom_5CA407) > 0x5
	.error "gText_Rom_5CA407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA407) < 0x5
	.space 0x5 - (. - gText_Rom_5CA407)
	.endif

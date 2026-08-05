	@ src/strings.c:348 gText_Fourth
	.globl gText_Rom_5CA1F5
gText_Rom_5CA1F5: @ 0x085CA1F5
	.string "よんばんめ$"
	.if (. - gText_Rom_5CA1F5) > 0x6
	.error "gText_Rom_5CA1F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1F5) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1F5)
	.endif

	@ src/strings.c:439 gText_InUseAlready
	.globl gText_Rom_5CA768
gText_Rom_5CA768: @ 0x085CA768
	.string "すでに おかれて います!$"
	.if (. - gText_Rom_5CA768) > 0xe
	.error "gText_Rom_5CA768 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA768) < 0xe
	.space 0xe - (. - gText_Rom_5CA768)
	.endif

	@ src/strings.c:396 gText_EggWillHatchSoon
	.globl gText_Rom_5CA448
gText_Rom_5CA448: @ 0x085CA448
	.string "ときどき うごいて いるようだ\nうまれる まで もうちょっと かな?$"
	.if (. - gText_Rom_5CA448) > 0x23
	.error "gText_Rom_5CA448 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA448) < 0x23
	.space 0x23 - (. - gText_Rom_5CA448)
	.endif

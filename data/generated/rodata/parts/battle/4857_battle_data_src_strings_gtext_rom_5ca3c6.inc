	@ src/strings.c:384 gText_NextLv
	.globl gText_Rom_5CA3C6
gText_Rom_5CA3C6: @ 0x085CA3C6
	.string "レベルアップまで$"
	.if (. - gText_Rom_5CA3C6) > 0x9
	.error "gText_Rom_5CA3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3C6) < 0x9
	.space 0x9 - (. - gText_Rom_5CA3C6)
	.endif

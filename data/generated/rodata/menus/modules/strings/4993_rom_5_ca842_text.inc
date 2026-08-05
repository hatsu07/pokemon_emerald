	@ src/strings.c:448 gText_NoDecorationHere
	.globl gText_Rom_5CA842
gText_Rom_5CA842: @ 0x085CA842
	.string "ここに グッズは ありません!$"
	.if (. - gText_Rom_5CA842) > 0x10
	.error "gText_Rom_5CA842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA842) < 0x10
	.space 0x10 - (. - gText_Rom_5CA842)
	.endif

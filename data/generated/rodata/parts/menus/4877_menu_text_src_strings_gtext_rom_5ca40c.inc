	@ src/strings.c:394 gText_EggWillTakeALongTime
	.globl gText_Rom_5CA40C
gText_Rom_5CA40C: @ 0x085CA40C
	.string "この タマゴは\nうまれるまで かなり かかりそう$"
	.if (. - gText_Rom_5CA40C) > 0x19
	.error "gText_Rom_5CA40C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA40C) < 0x19
	.space 0x19 - (. - gText_Rom_5CA40C)
	.endif

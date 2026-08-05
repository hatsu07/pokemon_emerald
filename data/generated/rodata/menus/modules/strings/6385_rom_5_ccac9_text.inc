	@ src/strings.c:793 gText_CheckTrainerCard
	.globl gText_Rom_5CCAC9
gText_Rom_5CCAC9: @ 0x085CCAC9
	.string "トレーナーカードを みます$"
	.if (. - gText_Rom_5CCAC9) > 0xe
	.error "gText_Rom_5CCAC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAC9) < 0xe
	.space 0xe - (. - gText_Rom_5CCAC9)
	.endif

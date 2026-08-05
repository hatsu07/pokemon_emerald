	@ src/strings.c:794 gText_ViewRecordedBattle
	.globl gText_Rom_5CCAD7
gText_Rom_5CCAD7: @ 0x085CCAD7
	.string "きろくした たいせんを みます$"
	.if (. - gText_Rom_5CCAD7) > 0x10
	.error "gText_Rom_5CCAD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAD7) < 0x10
	.space 0x10 - (. - gText_Rom_5CCAD7)
	.endif

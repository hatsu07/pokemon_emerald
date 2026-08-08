	@ src/strings.c:615 gText_QuestionPressTheAButton
	.globl gText_Rom_5CBC94
gText_Rom_5CBC94: @ 0x085CBC94
	.string "Aボタンを おしてね!$"
	.if (. - gText_Rom_5CBC94) > 0xc
	.error "gText_Rom_5CBC94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC94) < 0xc
	.space 0xc - (. - gText_Rom_5CBC94)
	.endif

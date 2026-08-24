	@ src/strings.c:615 gText_QuestionPressTheAButton
	.globl gText_QuestionPressTheAButton
gText_QuestionPressTheAButton: @ 0x085CBC94
	.string "Aボタンを おしてね!{EOS}"
	.if (. - gText_QuestionPressTheAButton) > 0xc
	.error "gText_QuestionPressTheAButton may not grow beyond its original slot"
	.endif
	.if (. - gText_QuestionPressTheAButton) < 0xc
	.space 0xc - (. - gText_QuestionPressTheAButton)
	.endif

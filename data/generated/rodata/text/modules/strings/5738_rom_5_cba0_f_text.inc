	@ src/strings.c:571 gText_SelectTheAnswerToTheQuiz
	.globl gText_Rom_5CBA0F
gText_Rom_5CBA0F: @ 0x085CBA0F
	.string "クイズの こたえを えらぼう!$"
	.if (. - gText_Rom_5CBA0F) > 0x10
	.error "gText_Rom_5CBA0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA0F) < 0x10
	.space 0x10 - (. - gText_Rom_5CBA0F)
	.endif

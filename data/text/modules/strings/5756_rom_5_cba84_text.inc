	@ src/strings.c:580 gText_AndFillOutTheQuestionnaire
	.globl gText_AndFillOutTheQuestionnaire
gText_AndFillOutTheQuestionnaire: @ 0x085CBA84
	.string "ショップの アンケートに こたえよう!{EOS}"
	.if (. - gText_AndFillOutTheQuestionnaire) > 0x14
	.error "gText_AndFillOutTheQuestionnaire may not grow beyond its original slot"
	.endif
	.if (. - gText_AndFillOutTheQuestionnaire) < 0x14
	.space 0x14 - (. - gText_AndFillOutTheQuestionnaire)
	.endif

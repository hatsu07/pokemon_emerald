	@ src/strings.c:580 gText_AndFillOutTheQuestionnaire
	.globl gText_Rom_5CBA84
gText_Rom_5CBA84: @ 0x085CBA84
	.string "ショップの アンケートに こたえよう!$"
	.if (. - gText_Rom_5CBA84) > 0x14
	.error "gText_Rom_5CBA84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA84) < 0x14
	.space 0x14 - (. - gText_Rom_5CBA84)
	.endif

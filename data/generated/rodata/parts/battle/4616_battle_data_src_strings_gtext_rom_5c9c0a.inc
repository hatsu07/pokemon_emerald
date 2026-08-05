	@ src/strings.c:259 gText_MailSentToPC
	.globl gText_Rom_5C9C0A
gText_Rom_5C9C0A: @ 0x085C9C0A
	.string "メールを パソコンに\nてんそうしました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9C0A) > 0x16
	.error "gText_Rom_5C9C0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C0A) < 0x16
	.space 0x16 - (. - gText_Rom_5C9C0A)
	.endif

	@ src/strings.c:261 gText_MailMessageWillBeLost
	.globl gText_Rom_5C9C39
gText_Rom_5C9C39: @ 0x085C9C39
	.string "メールを とると メッセージが\nきえてしまいますが よろしいですか?$"
	.if (. - gText_Rom_5C9C39) > 0x23
	.error "gText_Rom_5C9C39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9C39) < 0x23
	.space 0x23 - (. - gText_Rom_5C9C39)
	.endif

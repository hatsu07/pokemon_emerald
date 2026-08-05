	@ src/strings.c:270 gText_MailTransferredFromMailbox
	.globl gText_Rom_5C9D32
gText_Rom_5C9D32: @ 0x085C9D32
	.string "ボックスから メールを うつしました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D32) > 0x15
	.error "gText_Rom_5C9D32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D32) < 0x15
	.space 0x15 - (. - gText_Rom_5C9D32)
	.endif

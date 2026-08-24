	@ src/strings.c:325 gText_DoWhatWithMail
	.globl gText_DoWhatWithMail
gText_DoWhatWithMail: @ 0x085CA14C
	.string "メールを どうしますか?{EOS}"
	.if (. - gText_DoWhatWithMail) > 0xd
	.error "gText_DoWhatWithMail may not grow beyond its original slot"
	.endif
	.if (. - gText_DoWhatWithMail) < 0xd
	.space 0xd - (. - gText_DoWhatWithMail)
	.endif

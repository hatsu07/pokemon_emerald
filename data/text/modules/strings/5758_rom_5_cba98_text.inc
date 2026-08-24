	@ src/strings.c:581 gText_LetsReplyToTheInterview
	.globl gText_LetsReplyToTheInterview
gText_LetsReplyToTheInterview: @ 0x085CBA98
	.string "インタビューに こたえよう！{EOS}"
	.if (. - gText_LetsReplyToTheInterview) > 0xf
	.error "gText_LetsReplyToTheInterview may not grow beyond its original slot"
	.endif
	.if (. - gText_LetsReplyToTheInterview) < 0xf
	.space 0xf - (. - gText_LetsReplyToTheInterview)
	.endif

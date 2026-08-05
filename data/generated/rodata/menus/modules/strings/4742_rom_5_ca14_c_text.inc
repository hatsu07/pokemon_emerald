	@ src/strings.c:325 gText_DoWhatWithMail
	.globl gText_Rom_5CA14C
gText_Rom_5CA14C: @ 0x085CA14C
	.string "メールを どうしますか?$"
	.if (. - gText_Rom_5CA14C) > 0xd
	.error "gText_Rom_5CA14C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA14C) < 0xd
	.space 0xd - (. - gText_Rom_5CA14C)
	.endif

	@ src/strings.c:598 gText_Profile
	.globl gText_Profile
gText_Profile: @ 0x085CBBB7
	.string "プロフィール{EOS}"
	.if (. - gText_Profile) > 0x7
	.error "gText_Profile may not grow beyond its original slot"
	.endif
	.if (. - gText_Profile) < 0x7
	.space 0x7 - (. - gText_Profile)
	.endif

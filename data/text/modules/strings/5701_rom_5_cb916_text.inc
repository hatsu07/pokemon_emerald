	@ src/strings.c:553 gText_YourProfile
	.globl gText_YourProfile
gText_YourProfile: @ 0x085CB916
	.string "プロフィールは{EOS}"
	.if (. - gText_YourProfile) > 0x8
	.error "gText_YourProfile may not grow beyond its original slot"
	.endif
	.if (. - gText_YourProfile) < 0x8
	.space 0x8 - (. - gText_YourProfile)
	.endif

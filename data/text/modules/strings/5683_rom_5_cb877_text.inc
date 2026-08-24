	@ src/strings.c:543 gText_AndMakeYourProfile
	.globl gText_AndMakeYourProfile
gText_AndMakeYourProfile: @ 0x085CB877
	.string "プロフィールを つくろう!{EOS}"
	.if (. - gText_AndMakeYourProfile) > 0xe
	.error "gText_AndMakeYourProfile may not grow beyond its original slot"
	.endif
	.if (. - gText_AndMakeYourProfile) < 0xe
	.space 0xe - (. - gText_AndMakeYourProfile)
	.endif
	@ analyzed canonical ROM range 0x085CB885-0x085CB88D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xA7, 0x12, 0x19, 0x00, 0x0A, 0x14, 0x46, 0x44, 0x00

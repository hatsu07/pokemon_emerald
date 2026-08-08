	@ src/strings.c:553 gText_YourProfile
	.globl gText_Rom_5CB916
gText_Rom_5CB916: @ 0x085CB916
	.string "プロフィールは$"
	.if (. - gText_Rom_5CB916) > 0x8
	.error "gText_Rom_5CB916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB916) < 0x8
	.space 0x8 - (. - gText_Rom_5CB916)
	.endif

	@ src/strings.c:752 gText_ByeBye
	.globl gText_Rom_5CC798
gText_Rom_5CC798: @ 0x085CC798
	.string "バイバイ!{EOS}"
	.if (. - gText_Rom_5CC798) > 0x6
	.error "gText_Rom_5CC798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC798) < 0x6
	.space 0x6 - (. - gText_Rom_5CC798)
	.endif

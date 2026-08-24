	@ src/strings.c:752 gText_ByeBye
	.globl gText_ByeBye
gText_ByeBye: @ 0x085CC798
	.string "バイバイ!{EOS}"
	.if (. - gText_ByeBye) > 0x6
	.error "gText_ByeBye may not grow beyond its original slot"
	.endif
	.if (. - gText_ByeBye) < 0x6
	.space 0x6 - (. - gText_ByeBye)
	.endif

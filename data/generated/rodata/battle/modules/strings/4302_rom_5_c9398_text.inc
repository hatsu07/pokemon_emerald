	@ src/strings.c:129 gText_FlyToWhere
	.globl gText_Rom_5C9398
gText_Rom_5C9398: @ 0x085C9398
	.string "どこへ とびますか?{EOS}"
	.if (. - gText_Rom_5C9398) > 0xb
	.error "gText_Rom_5C9398 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9398) < 0xb
	.space 0xb - (. - gText_Rom_5C9398)
	.endif

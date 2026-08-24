	@ src/strings.c:129 gText_FlyToWhere
	.globl gText_FlyToWhere
gText_FlyToWhere: @ 0x085C9398
	.string "どこへ とびますか?{EOS}"
	.if (. - gText_FlyToWhere) > 0xb
	.error "gText_FlyToWhere may not grow beyond its original slot"
	.endif
	.if (. - gText_FlyToWhere) < 0xb
	.space 0xb - (. - gText_FlyToWhere)
	.endif

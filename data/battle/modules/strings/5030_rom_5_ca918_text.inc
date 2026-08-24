	@ src/strings.c:452 gText_NoItems
	.globl gText_NoItems
gText_NoItems: @ 0x085CA918
	.string "なにも ありません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoItems) > 0xd
	.error "gText_NoItems may not grow beyond its original slot"
	.endif
	.if (. - gText_NoItems) < 0xd
	.space 0xd - (. - gText_NoItems)
	.endif

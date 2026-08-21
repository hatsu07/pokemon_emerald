	@ src/strings.c:452 gText_NoItems
	.globl gText_Rom_5CA918
gText_Rom_5CA918: @ 0x085CA918
	.string "なにも ありません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5CA918) > 0xd
	.error "gText_Rom_5CA918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA918) < 0xd
	.space 0xd - (. - gText_Rom_5CA918)
	.endif

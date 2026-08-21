	@ src/strings.c:425 gText_NoDecorations
	.globl gText_Rom_5CA70B
gText_Rom_5CA70B: @ 0x085CA70B
	.string "グッズは ありません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_Rom_5CA70B) > 0xe
	.error "gText_Rom_5CA70B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA70B) < 0xe
	.space 0xe - (. - gText_Rom_5CA70B)
	.endif

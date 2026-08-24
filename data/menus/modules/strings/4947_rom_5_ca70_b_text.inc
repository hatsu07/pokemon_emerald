	@ src/strings.c:425 gText_NoDecorations
	.globl gText_NoDecorations
gText_NoDecorations: @ 0x085CA70B
	.string "グッズは ありません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoDecorations) > 0xe
	.error "gText_NoDecorations may not grow beyond its original slot"
	.endif
	.if (. - gText_NoDecorations) < 0xe
	.space 0xe - (. - gText_NoDecorations)
	.endif

	@ src/strings.c:1010 gText_QuitSwapping
	.globl gText_Rom_5DC0FB
gText_Rom_5DC0FB: @ 0x085DC0FB
	.string "こうかんを ちゅうし しますか?$"
	.if (. - gText_Rom_5DC0FB) > 0x11
	.error "gText_Rom_5DC0FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0FB) < 0x11
	.space 0x11 - (. - gText_Rom_5DC0FB)
	.endif

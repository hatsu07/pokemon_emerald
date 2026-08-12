	@ src/strings.c:998 gText_Others2 (+1 aliases)
	.globl gText_Rom_5DC0F4
gText_Rom_5DC0F4: @ 0x085DC0F4
	.string "べつのにする$"
	.if (. - gText_Rom_5DC0F4) > 0x7
	.error "gText_Rom_5DC0F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DC0F4) < 0x7
	.space 0x7 - (. - gText_Rom_5DC0F4)
	.endif

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

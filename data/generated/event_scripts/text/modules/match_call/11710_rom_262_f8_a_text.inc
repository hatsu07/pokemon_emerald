	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F8A
gText_Rom_262F8A: @ 0x08262F8A
	.string "ここまで　あつめるとは……\nきみの　さいのうは　たいした　ものだよ！$"
	.if (. - gText_Rom_262F8A) > 0x23
	.error "gText_Rom_262F8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F8A) < 0x23
	.space 0x23 - (. - gText_Rom_262F8A)
	.endif

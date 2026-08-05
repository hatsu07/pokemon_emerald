	@ src/strings.c:64 gText_SearchCompleted
	.globl gText_Rom_5C900A
gText_Rom_5C900A: @ 0x085C900A
	.string "けんさくが しゅうりょう しました!$"
	.if (. - gText_Rom_5C900A) > 0x13
	.error "gText_Rom_5C900A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C900A) < 0x13
	.space 0x13 - (. - gText_Rom_5C900A)
	.endif

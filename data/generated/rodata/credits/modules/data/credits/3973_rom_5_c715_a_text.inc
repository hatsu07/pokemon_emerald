	@ src/data/credits.h:191 sCreditsText_KazukiYoshihara
	.globl gText_Rom_5C715A
gText_Rom_5C715A: @ 0x085C715A
	.string "よしはら かずき$"
	.if (. - gText_Rom_5C715A) > 0x9
	.error "gText_Rom_5C715A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C715A) < 0x9
	.space 0x9 - (. - gText_Rom_5C715A)
	.endif

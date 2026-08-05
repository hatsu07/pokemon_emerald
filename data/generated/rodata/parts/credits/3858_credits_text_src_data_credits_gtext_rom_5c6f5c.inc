	@ src/data/credits.h:134 sCreditsText_KenjiMatsushima
	.globl gText_Rom_5C6F5C
gText_Rom_5C6F5C: @ 0x085C6F5C
	.string "まつしま けんじ$"
	.if (. - gText_Rom_5C6F5C) > 0x9
	.error "gText_Rom_5C6F5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F5C) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F5C)
	.endif

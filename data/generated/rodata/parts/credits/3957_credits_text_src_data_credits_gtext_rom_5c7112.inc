	@ src/data/credits.h:183 sCreditsText_TomotakaKomura
	.globl gText_Rom_5C7112
gText_Rom_5C7112: @ 0x085C7112
	.string "こむら ともたか$"
	.if (. - gText_Rom_5C7112) > 0x9
	.error "gText_Rom_5C7112 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7112) < 0x9
	.space 0x9 - (. - gText_Rom_5C7112)
	.endif

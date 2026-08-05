	@ src/data/credits.h:120 sCreditsText_HironobuYoshida
	.globl gText_Rom_5C6EE6
gText_Rom_5C6EE6: @ 0x085C6EE6
	.string "よしだ ひろのぶ$"
	.if (. - gText_Rom_5C6EE6) > 0x9
	.error "gText_Rom_5C6EE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EE6) < 0x9
	.space 0x9 - (. - gText_Rom_5C6EE6)
	.endif

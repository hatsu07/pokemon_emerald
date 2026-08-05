	@ src/data/credits.h:130 sCreditsText_RenaYoshikawa
	.globl gText_Rom_5C6F3B
gText_Rom_5C6F3B: @ 0x085C6F3B
	.string "よしかわ れな$"
	.if (. - gText_Rom_5C6F3B) > 0x8
	.error "gText_Rom_5C6F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F3B) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F3B)
	.endif

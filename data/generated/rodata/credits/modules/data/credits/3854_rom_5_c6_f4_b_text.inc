	@ src/data/credits.h:132 sCreditsText_MorikazuAoki
	.globl gText_Rom_5C6F4B
gText_Rom_5C6F4B: @ 0x085C6F4B
	.string "あおき もりかず$"
	.if (. - gText_Rom_5C6F4B) > 0x9
	.error "gText_Rom_5C6F4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F4B) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F4B)
	.endif

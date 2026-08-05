	@ src/data/credits.h:153 sCreditsText_AstukoFujii
	.globl gText_Rom_5C7005
gText_Rom_5C7005: @ 0x085C7005
	.string "ふじい あつこ$"
	.if (. - gText_Rom_5C7005) > 0x8
	.error "gText_Rom_5C7005 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7005) < 0x8
	.space 0x8 - (. - gText_Rom_5C7005)
	.endif

	@ src/data/credits.h:112 sCreditsText_KeitaKagaya
	.globl gText_Rom_5C6EA1
gText_Rom_5C6EA1: @ 0x085C6EA1
	.string "かがや けいた$"
	.if (. - gText_Rom_5C6EA1) > 0x8
	.error "gText_Rom_5C6EA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EA1) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EA1)
	.endif

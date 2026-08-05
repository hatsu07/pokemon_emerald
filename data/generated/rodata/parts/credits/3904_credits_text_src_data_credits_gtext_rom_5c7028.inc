	@ src/data/credits.h:157 sCreditsText_YumiFunasaka
	.globl gText_Rom_5C7028
gText_Rom_5C7028: @ 0x085C7028
	.string "ふなさか ゆみ$"
	.if (. - gText_Rom_5C7028) > 0x8
	.error "gText_Rom_5C7028 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7028) < 0x8
	.space 0x8 - (. - gText_Rom_5C7028)
	.endif

	@ src/data/credits.h:121 sCreditsText_MotofumiFujiwara
	.globl gText_Rom_5C6EEF
gText_Rom_5C6EEF: @ 0x085C6EEF
	.string "ふじわら もとふみ$"
	.if (. - gText_Rom_5C6EEF) > 0xa
	.error "gText_Rom_5C6EEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EEF) < 0xa
	.space 0xa - (. - gText_Rom_5C6EEF)
	.endif

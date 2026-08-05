	@ src/data/credits.h:85 sCreditsText_MapDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D89
gText_Rom_5C6D89: @ 0x085C6D89
	.string "マップ デザイン$"
	.if (. - gText_Rom_5C6D89) != 0x9
	.error "gText_Rom_5C6D89 must retain its original byte length"
	.endif

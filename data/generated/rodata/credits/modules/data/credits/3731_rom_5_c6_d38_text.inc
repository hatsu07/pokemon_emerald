	@ src/data/credits.h:77 sCreditsText_GraphicDesigners (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D38
gText_Rom_5C6D38: @ 0x085C6D38
	.string "グラフィック デザイン$"
	.if (. - gText_Rom_5C6D38) != 0xc
	.error "gText_Rom_5C6D38 must retain its original byte length"
	.endif

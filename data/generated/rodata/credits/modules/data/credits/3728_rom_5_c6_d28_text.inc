	@ src/data/credits.h:76 sCreditsText_MainGraphicDesigner
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D28
gText_Rom_5C6D28: @ 0x085C6D28
	.string "メイン グラフィック デザイン$"
	.if (. - gText_Rom_5C6D28) != 0x10
	.error "gText_Rom_5C6D28 must retain its original byte length"
	.endif

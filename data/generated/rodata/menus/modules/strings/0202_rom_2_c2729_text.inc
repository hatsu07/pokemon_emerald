	@ src/strings.c:1057 gText_WhereShouldNewsBeAccessed
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2729
gText_Rom_2C2729: @ 0x082C2729
	.string "   どちらから ふしぎなニュースを\nよみこみ ますか?$"
	.if (. - gText_Rom_2C2729) != 0x1d
	.error "gText_Rom_2C2729 must retain its original byte length"
	.endif

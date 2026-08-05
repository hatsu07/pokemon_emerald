	@ src/strings.c:1056 gText_WhereShouldCardBeAccessed
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C270E
gText_Rom_2C270E: @ 0x082C270E
	.string "  どちらから ふしぎなカードを\nよみこみ ますか?$"
	.if (. - gText_Rom_2C270E) != 0x1b
	.error "gText_Rom_2C270E must retain its original byte length"
	.endif

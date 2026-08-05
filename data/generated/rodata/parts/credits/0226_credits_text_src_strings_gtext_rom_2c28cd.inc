	@ src/strings.c:1073 gText_AlreadyHadStamp
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C28CD
gText_Rom_2C28CD: @ 0x082C28CD
	.string "   おなじ スタンプを\nすでに もっています$"
	.if (. - gText_Rom_2C28CD) != 0x18
	.error "gText_Rom_2C28CD must retain its original byte length"
	.endif

	@ src/strings.c:1072 gText_AlreadyHadNews
	.globl gText_Rom_2C28B8
gText_Rom_2C28B8: @ 0x082C28B8
	.string "おなじ ニュースを\nすでに もっています$"
	.if (. - gText_Rom_2C28B8) > 0x15
	.error "gText_Rom_2C28B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C28B8) < 0x15
	.space 0x15 - (. - gText_Rom_2C28B8)
	.endif

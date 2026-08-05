	@ src/strings.c:1052 gText_ReadNewsThatArrived
	.globl gText_Rom_2C268A
gText_Rom_2C268A: @ 0x082C268A
	.string "  おくられてきた ニュースを\nみることが できます$"
	.if (. - gText_Rom_2C268A) > 0x1b
	.error "gText_Rom_2C268A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C268A) < 0x1b
	.space 0x1b - (. - gText_Rom_2C268A)
	.endif

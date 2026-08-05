	@ src/strings.c:667 gText_Marco
	.globl gText_Rom_5CC31B
gText_Rom_5CC31B: @ 0x085CC31B
	.string "コウジ$"
	.if (. - gText_Rom_5CC31B) > 0x4
	.error "gText_Rom_5CC31B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC31B) < 0x4
	.space 0x4 - (. - gText_Rom_5CC31B)
	.endif

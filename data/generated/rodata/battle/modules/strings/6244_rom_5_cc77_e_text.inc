	@ src/strings.c:747 gText_Lets
	.globl gText_Rom_5CC77E
gText_Rom_5CC77E: @ 0x085CC77E
	.string "しよう!$"
	.if (. - gText_Rom_5CC77E) > 0x5
	.error "gText_Rom_5CC77E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC77E) < 0x5
	.space 0x5 - (. - gText_Rom_5CC77E)
	.endif

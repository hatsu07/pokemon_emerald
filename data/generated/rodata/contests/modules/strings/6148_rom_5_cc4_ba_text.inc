	@ src/strings.c:712 gText_Round2Results
	.globl gText_Rom_5CC4BA
gText_Rom_5CC4BA: @ 0x085CC4BA
	.string "2じしんさの けっか!$"
	.if (. - gText_Rom_5CC4BA) > 0xc
	.error "gText_Rom_5CC4BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4BA) < 0xc
	.space 0xc - (. - gText_Rom_5CC4BA)
	.endif

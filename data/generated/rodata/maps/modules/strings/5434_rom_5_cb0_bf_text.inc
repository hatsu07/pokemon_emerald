	@ src/strings.c:528 gText_ElevatorNowOn
	.globl gText_Rom_5CB0BF
gText_Rom_5CB0BF: @ 0x085CB0BF
	.string "げんざいのフロア$"
	.if (. - gText_Rom_5CB0BF) > 0x9
	.error "gText_Rom_5CB0BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB0BF) < 0x9
	.space 0x9 - (. - gText_Rom_5CB0BF)
	.endif

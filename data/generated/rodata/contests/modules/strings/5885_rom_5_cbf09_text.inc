	@ src/strings.c:644 gText_PleaseResetTime
	.globl gText_Rom_5CBF09
gText_Rom_5CBF09: @ 0x085CBF09
	.string "じかんを さいせってい してください$"
	.if (. - gText_Rom_5CBF09) > 0x13
	.error "gText_Rom_5CBF09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBF09) < 0x13
	.space 0x13 - (. - gText_Rom_5CBF09)
	.endif

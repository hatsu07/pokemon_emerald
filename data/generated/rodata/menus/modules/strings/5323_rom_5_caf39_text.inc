	@ src/strings.c:657 gText_Knockout
	.globl gText_Rom_5CAF39
gText_Rom_5CAF39: @ 0x085CAF39
	.string "ノックアウト$"
	.if (. - gText_Rom_5CAF39) > 0x7
	.error "gText_Rom_5CAF39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF39) < 0x7
	.space 0x7 - (. - gText_Rom_5CAF39)
	.endif

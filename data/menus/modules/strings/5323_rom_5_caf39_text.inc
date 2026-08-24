	@ src/strings.c:657 gText_Knockout
	.globl gText_Knockout
gText_Knockout: @ 0x085CAF39
	.string "ノックアウト{EOS}"
	.if (. - gText_Knockout) > 0x7
	.error "gText_Knockout may not grow beyond its original slot"
	.endif
	.if (. - gText_Knockout) < 0x7
	.space 0x7 - (. - gText_Knockout)
	.endif

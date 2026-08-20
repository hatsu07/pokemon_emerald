	@ data/maps/Route109/scripts.inc:509 Route109_Text_YouCanHaveThis
	.globl gText_Rom_1E8CDA
gText_Rom_1E8CDA: @ 0x081E8CDA
	.string "{STR_VAR_1} これ あげる!{EOS}"
	.if (. - gText_Rom_1E8CDA) > 0xb
	.error "gText_Rom_1E8CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8CDA) < 0xb
	.space 0xb - (. - gText_Rom_1E8CDA)
	.endif

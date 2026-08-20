	@ data/text/trainers.inc:2531 Route123_Text_JazmynDefeat (+1 aliases)
	.globl gText_Rom_25FEE6
gText_Rom_25FEE6: @ 0x0825FEE6
	.string "じしん なくしました……{EOS}"
	.if (. - gText_Rom_25FEE6) > 0xd
	.error "gText_Rom_25FEE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FEE6) < 0xd
	.space 0xd - (. - gText_Rom_25FEE6)
	.endif

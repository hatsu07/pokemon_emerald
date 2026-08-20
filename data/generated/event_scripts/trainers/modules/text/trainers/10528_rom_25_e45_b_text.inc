	@ data/text/trainers.inc:1883 Route118_Text_ChesterDefeat (+1 aliases)
	.globl gText_Rom_25E45B
gText_Rom_25E45B: @ 0x0825E45B
	.string "はばたいたけど……{EOS}"
	.if (. - gText_Rom_25E45B) > 0xa
	.error "gText_Rom_25E45B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E45B) < 0xa
	.space 0xa - (. - gText_Rom_25E45B)
	.endif

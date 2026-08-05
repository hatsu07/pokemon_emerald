	@ data/text/trainers.inc:1487 Route115_Text_CyndyDefeat (+1 aliases)
	.globl gText_Rom_25D331
gText_Rom_25D331: @ 0x0825D331
	.string "しゅぎょうが たりないわ……!$"
	.if (. - gText_Rom_25D331) > 0x10
	.error "gText_Rom_25D331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D331) < 0x10
	.space 0x10 - (. - gText_Rom_25D331)
	.endif

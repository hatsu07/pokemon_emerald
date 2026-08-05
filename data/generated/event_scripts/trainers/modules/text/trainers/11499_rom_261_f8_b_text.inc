	@ data/text/trainers.inc:3323 Route133_Text_BeckDefeat (+1 aliases)
	.globl gText_Rom_261F8B
gText_Rom_261F8B: @ 0x08261F8B
	.string "きみ……\nなんて かっこいいんだ!$"
	.if (. - gText_Rom_261F8B) > 0x12
	.error "gText_Rom_261F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261F8B) < 0x12
	.space 0x12 - (. - gText_Rom_261F8B)
	.endif

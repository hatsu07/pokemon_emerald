	@ data/text/trainers.inc:2537 Route123_Text_FrederickIntro (+1 aliases)
	.globl gText_Rom_25FF1E
gText_Rom_25FF1E: @ 0x0825FF1E
	.string "おい きみきみ\nじいちゃんと ちょっと あそぼうか$"
	.if (. - gText_Rom_25FF1E) > 0x1a
	.error "gText_Rom_25FF1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FF1E) < 0x1a
	.space 0x1a - (. - gText_Rom_25FF1E)
	.endif

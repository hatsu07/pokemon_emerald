	@ data/text/trainers.inc:1670 Route116_Text_JohnsonIntro (+1 aliases)
	.globl gText_Rom_25DACB
gText_Rom_25DACB: @ 0x0825DACB
	.string "この さきって いきどまりなんだ\nつまんない から しょうぶ してね{EOS}"
	.if (. - gText_Rom_25DACB) > 0x23
	.error "gText_Rom_25DACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DACB) < 0x23
	.space 0x23 - (. - gText_Rom_25DACB)
	.endif

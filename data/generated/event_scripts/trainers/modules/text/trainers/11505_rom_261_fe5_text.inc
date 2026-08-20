	@ data/text/trainers.inc:3332 Route133_Text_MollieDefeat (+1 aliases)
	.globl gText_Rom_261FE5
gText_Rom_261FE5: @ 0x08261FE5
	.string "なんぜんかい まけても\nくやしい もんは くやしいでね{EOS}"
	.if (. - gText_Rom_261FE5) > 0x1c
	.error "gText_Rom_261FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261FE5) < 0x1c
	.space 0x1c - (. - gText_Rom_261FE5)
	.endif

	@ data/text/trainers.inc:3260 Route132_Text_JonathanDefeat (+1 aliases)
	.globl gText_Rom_261D25
gText_Rom_261D25: @ 0x08261D25
	.string "へえ! つよいね!{EOS}"
	.if (. - gText_Rom_261D25) > 0xa
	.error "gText_Rom_261D25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261D25) < 0xa
	.space 0xa - (. - gText_Rom_261D25)
	.endif

	@ data/text/trainers.inc:425 Route107_Text_DarrinIntro (+1 aliases)
	.globl gText_Rom_25A7CD
gText_Rom_25A7CD: @ 0x0825A7CD
	.string "むにゃむにゃ……\pなみに ゆられてたら きもちよくなって\nうっかり ねてしまった!$"
	.if (. - gText_Rom_25A7CD) > 0x2a
	.error "gText_Rom_25A7CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A7CD) < 0x2a
	.space 0x2a - (. - gText_Rom_25A7CD)
	.endif

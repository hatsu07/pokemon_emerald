	@ data/text/trainers.inc:2045 Route119_Text_PhilDefeat (+1 aliases)
	.globl gText_Rom_25EB1A
gText_Rom_25EB1A: @ 0x0825EB1A
	.string "じつりょく ぶそく だった……$"
	.if (. - gText_Rom_25EB1A) > 0x10
	.error "gText_Rom_25EB1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EB1A) < 0x10
	.space 0x10 - (. - gText_Rom_25EB1A)
	.endif

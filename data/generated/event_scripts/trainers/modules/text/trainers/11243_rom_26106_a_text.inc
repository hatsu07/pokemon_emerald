	@ data/text/trainers.inc:2945 Route127_Text_KojiIntro (+1 aliases)
	.globl gText_Rom_26106A
gText_Rom_26106A: @ 0x0826106A
	.string "はだしで かけまわると\nあしの うらが きたえられるぞ!$"
	.if (. - gText_Rom_26106A) > 0x1d
	.error "gText_Rom_26106A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26106A) < 0x1d
	.space 0x1d - (. - gText_Rom_26106A)
	.endif

	@ data/text/trainers.inc:3287 Route133_Text_FranklinDefeat (+1 aliases)
	.globl gText_Rom_261E45
gText_Rom_261E45: @ 0x08261E45
	.string "つよい!\nつよすぎっ!$"
	.if (. - gText_Rom_261E45) > 0xc
	.error "gText_Rom_261E45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261E45) < 0xc
	.space 0xc - (. - gText_Rom_261E45)
	.endif

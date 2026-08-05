	@ data/text/trainers.inc:3173 Route131_Text_ReliDefeat (+1 aliases)
	.globl gText_Rom_261975
gText_Rom_261975: @ 0x08261975
	.string "アミ『きょうだいで ちからを あわせても\nかてなかったわ$"
	.if (. - gText_Rom_261975) > 0x1d
	.error "gText_Rom_261975 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261975) < 0x1d
	.space 0x1d - (. - gText_Rom_261975)
	.endif

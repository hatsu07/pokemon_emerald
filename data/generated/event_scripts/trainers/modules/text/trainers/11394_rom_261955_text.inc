	@ data/text/trainers.inc:3170 Route131_Text_ReliIntro (+1 aliases)
	.globl gText_Rom_261955
gText_Rom_261955: @ 0x08261955
	.string "アミ『きょうだい ちからを あわせて\nがんばっちゃおうかな!?{EOS}"
	.if (. - gText_Rom_261955) > 0x20
	.error "gText_Rom_261955 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261955) < 0x20
	.space 0x20 - (. - gText_Rom_261955)
	.endif

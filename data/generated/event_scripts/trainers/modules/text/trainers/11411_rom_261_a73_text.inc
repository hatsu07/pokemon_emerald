	@ data/text/trainers.inc:3194 Route131_Text_TaliaIntro (+1 aliases)
	.globl gText_Rom_261A73
gText_Rom_261A73: @ 0x08261A73
	.string "わたしに かてたら\nすごい じょうほう おしえてあげる!{EOS}"
	.if (. - gText_Rom_261A73) > 0x1d
	.error "gText_Rom_261A73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261A73) < 0x1d
	.space 0x1d - (. - gText_Rom_261A73)
	.endif

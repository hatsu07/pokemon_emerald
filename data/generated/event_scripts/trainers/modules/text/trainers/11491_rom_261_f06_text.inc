	@ data/text/trainers.inc:3311 Route133_Text_WarrenIntro (+1 aliases)
	.globl gText_Rom_261F06
gText_Rom_261F06: @ 0x08261F06
	.string "かちたいから って\nひとと おなじように そだては しないぜ!$"
	.if (. - gText_Rom_261F06) > 0x20
	.error "gText_Rom_261F06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261F06) < 0x20
	.space 0x20 - (. - gText_Rom_261F06)
	.endif

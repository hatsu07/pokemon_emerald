	@ data/text/trainers.inc:2456 Route123_Text_JackiRematchIntro (+1 aliases)
	.globl gText_Rom_25FC0A
gText_Rom_25FC0A: @ 0x0825FC0A
	.string "どう? あなたの なかの\nちょうのうりょく めばえたり した?{EOS}"
	.if (. - gText_Rom_25FC0A) > 0x20
	.error "gText_Rom_25FC0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FC0A) < 0x20
	.space 0x20 - (. - gText_Rom_25FC0A)
	.endif

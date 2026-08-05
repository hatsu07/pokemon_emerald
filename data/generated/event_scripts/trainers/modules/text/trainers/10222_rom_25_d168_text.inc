	@ data/text/trainers.inc:1445 Route115_Text_TimothyRematchIntro (+1 aliases)
	.globl gText_Rom_25D168
gText_Rom_25D168: @ 0x0825D168
	.string "ふむ……\nあいかわらずの みのこなし\lわたしの あいてを してもらおう!$"
	.if (. - gText_Rom_25D168) > 0x25
	.error "gText_Rom_25D168 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D168) < 0x25
	.space 0x25 - (. - gText_Rom_25D168)
	.endif

	@ data/text/trainers.inc:2573 Route123_Text_KayleyIntro (+1 aliases)
	.globl gText_Rom_26008D
gText_Rom_26008D: @ 0x0826008D
	.string "かった ばかりの パラソルで\nわたしも 3わりましで かわいい はず!{EOS}"
	.if (. - gText_Rom_26008D) > 0x24
	.error "gText_Rom_26008D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26008D) < 0x24
	.space 0x24 - (. - gText_Rom_26008D)
	.endif

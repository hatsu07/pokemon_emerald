	@ data/text/trainers.inc:2816 Route126_Text_DeanIntro (+1 aliases)
	.globl gText_Rom_260BAD
gText_Rom_260BAD: @ 0x08260BAD
	.string "この しろく そびえる いわやまが\nルネシティ なんだぜー!{EOS}"
	.if (. - gText_Rom_260BAD) > 0x1f
	.error "gText_Rom_260BAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260BAD) < 0x1f
	.space 0x1f - (. - gText_Rom_260BAD)
	.endif

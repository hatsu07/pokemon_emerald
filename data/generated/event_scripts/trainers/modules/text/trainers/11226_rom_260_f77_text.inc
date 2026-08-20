	@ data/text/trainers.inc:2921 Route127_Text_HenryDefeat (+1 aliases)
	.globl gText_Rom_260F77
gText_Rom_260F77: @ 0x08260F77
	.string "かなわん!{EOS}"
	.if (. - gText_Rom_260F77) > 0x6
	.error "gText_Rom_260F77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260F77) < 0x6
	.space 0x6 - (. - gText_Rom_260F77)
	.endif

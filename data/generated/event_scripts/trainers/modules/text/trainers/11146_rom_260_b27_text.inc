	@ data/text/trainers.inc:2801 Route125_Text_AuronDefeat (+1 aliases)
	.globl gText_Rom_260B27
gText_Rom_260B27: @ 0x08260B27
	.string "おぬしでは なかったか{EOS}"
	.if (. - gText_Rom_260B27) > 0xc
	.error "gText_Rom_260B27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260B27) < 0xc
	.space 0xc - (. - gText_Rom_260B27)
	.endif

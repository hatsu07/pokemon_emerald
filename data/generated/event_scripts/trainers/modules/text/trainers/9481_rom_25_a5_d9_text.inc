	@ data/text/trainers.inc:377 Route106_Text_ElliotIntro (+1 aliases)
	.globl gText_Rom_25A5D9
gText_Rom_25A5D9: @ 0x0825A5D9
	.string "うみづりと かわづり\nキミは どっちが すき?{EOS}"
	.if (. - gText_Rom_25A5D9) > 0x18
	.error "gText_Rom_25A5D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A5D9) < 0x18
	.space 0x18 - (. - gText_Rom_25A5D9)
	.endif

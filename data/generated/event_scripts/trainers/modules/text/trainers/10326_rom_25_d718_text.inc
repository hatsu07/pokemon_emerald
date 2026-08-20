	@ data/text/trainers.inc:1589 Route116_Text_JaniceDefeat (+1 aliases)
	.globl gText_Rom_25D718
gText_Rom_25D718: @ 0x0825D718
	.string "キミの ほうが いちまい うわてね……{EOS}"
	.if (. - gText_Rom_25D718) > 0x14
	.error "gText_Rom_25D718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D718) < 0x14
	.space 0x14 - (. - gText_Rom_25D718)
	.endif

	@ data/text/trainers.inc:2072 Route119_Text_HideoDefeat (+1 aliases)
	.globl gText_Rom_25EBEE
gText_Rom_25EBEE: @ 0x0825EBEE
	.string "つわもので ござるな{EOS}"
	.if (. - gText_Rom_25EBEE) > 0xb
	.error "gText_Rom_25EBEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EBEE) < 0xb
	.space 0xb - (. - gText_Rom_25EBEE)
	.endif

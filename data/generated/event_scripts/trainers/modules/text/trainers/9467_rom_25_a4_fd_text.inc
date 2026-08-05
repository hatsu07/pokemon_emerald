	@ data/text/trainers.inc:356 Route105_Text_AndresRegister
	.globl gText_Rom_25A4FD
gText_Rom_25A4FD: @ 0x0825A4FD
	.string "ん? こんな よわい わしでも\nポケナビ とうろくして くれるのか?$"
	.if (. - gText_Rom_25A4FD) > 0x23
	.error "gText_Rom_25A4FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A4FD) < 0x23
	.space 0x23 - (. - gText_Rom_25A4FD)
	.endif

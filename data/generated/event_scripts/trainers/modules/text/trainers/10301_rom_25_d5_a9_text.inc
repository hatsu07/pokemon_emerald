	@ data/text/trainers.inc:1553 Route115_Text_MarleneDefeat (+1 aliases)
	.globl gText_Rom_25D5A9
gText_Rom_25D5A9: @ 0x0825D5A9
	.string "こころが みだれて しまう!{EOS}"
	.if (. - gText_Rom_25D5A9) > 0xf
	.error "gText_Rom_25D5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D5A9) < 0xf
	.space 0xf - (. - gText_Rom_25D5A9)
	.endif

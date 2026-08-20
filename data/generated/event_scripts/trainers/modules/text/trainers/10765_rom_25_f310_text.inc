	@ data/text/trainers.inc:2231 Route120_Text_RileyDefeat (+1 aliases)
	.globl gText_Rom_25F310
gText_Rom_25F310: @ 0x0825F310
	.string "まけた!\nかくれぬので かくれるか?{EOS}"
	.if (. - gText_Rom_25F310) > 0x13
	.error "gText_Rom_25F310 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F310) < 0x13
	.space 0x13 - (. - gText_Rom_25F310)
	.endif

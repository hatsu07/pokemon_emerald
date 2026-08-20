	@ data/text/trainers.inc:2213 Route120_Text_AngelicaDefeat (+1 aliases)
	.globl gText_Rom_25F23A
gText_Rom_25F23A: @ 0x0825F23A
	.string "うつくしさが\nだいなしに なっちゃったわ{EOS}"
	.if (. - gText_Rom_25F23A) > 0x15
	.error "gText_Rom_25F23A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25F23A) < 0x15
	.space 0x15 - (. - gText_Rom_25F23A)
	.endif

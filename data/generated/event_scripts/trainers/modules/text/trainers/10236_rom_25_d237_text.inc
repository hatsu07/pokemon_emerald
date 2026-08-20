	@ data/text/trainers.inc:1466 Route115_Text_NobDefeat (+1 aliases)
	.globl gText_Rom_25D237
gText_Rom_25D237: @ 0x0825D237
	.string "うがーっ!\nあたまが くだけたーっ!{EOS}"
	.if (. - gText_Rom_25D237) > 0x13
	.error "gText_Rom_25D237 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D237) < 0x13
	.space 0x13 - (. - gText_Rom_25D237)
	.endif

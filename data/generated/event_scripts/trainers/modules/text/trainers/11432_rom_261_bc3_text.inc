	@ data/text/trainers.inc:3224 Route132_Text_DanaDefeat (+1 aliases)
	.globl gText_Rom_261BC3
gText_Rom_261BC3: @ 0x08261BC3
	.string "いやああああんっ!{EOS}"
	.if (. - gText_Rom_261BC3) > 0xa
	.error "gText_Rom_261BC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261BC3) < 0xa
	.space 0xa - (. - gText_Rom_261BC3)
	.endif

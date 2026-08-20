	@ data/text/trainers.inc:2447 Route123_Text_JackiDefeat (+1 aliases)
	.globl gText_Rom_25FBBF
gText_Rom_25FBBF: @ 0x0825FBBF
	.string "すごい!{EOS}"
	.if (. - gText_Rom_25FBBF) > 0x5
	.error "gText_Rom_25FBBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FBBF) < 0x5
	.space 0x5 - (. - gText_Rom_25FBBF)
	.endif

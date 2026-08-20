	@ data/text/trainers.inc:1418 Route114_Text_CharlotteDefeat (+1 aliases)
	.globl gText_Rom_25D057
gText_Rom_25D057: @ 0x0825D057
	.string "かわいく なーいっ!{EOS}"
	.if (. - gText_Rom_25D057) > 0xb
	.error "gText_Rom_25D057 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D057) < 0xb
	.space 0xb - (. - gText_Rom_25D057)
	.endif

	@ data/text/trainers.inc:878 Route110_Text_AlyssaDefeated (+1 aliases)
	.globl gText_Rom_25B98E
gText_Rom_25B98E: @ 0x0825B98E
	.string "ひぇ まけて しまったわ!{EOS}"
	.if (. - gText_Rom_25B98E) > 0xe
	.error "gText_Rom_25B98E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25B98E) < 0xe
	.space 0xe - (. - gText_Rom_25B98E)
	.endif

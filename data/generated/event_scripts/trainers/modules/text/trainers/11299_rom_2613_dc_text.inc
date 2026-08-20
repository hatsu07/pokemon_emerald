	@ data/text/trainers.inc:3029 Route128_Text_RubenDefeat (+1 aliases)
	.globl gText_Rom_2613DC
gText_Rom_2613DC: @ 0x082613DC
	.string "なんて ことだ……!{EOS}"
	.if (. - gText_Rom_2613DC) > 0xb
	.error "gText_Rom_2613DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2613DC) < 0xb
	.space 0xb - (. - gText_Rom_2613DC)
	.endif

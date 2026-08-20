	@ data/text/trainers.inc:1853 Route118_Text_RoseDefeat (+1 aliases)
	.globl gText_Rom_25E346
gText_Rom_25E346: @ 0x0825E346
	.string "あらら\nまけちゃったわね{EOS}"
	.if (. - gText_Rom_25E346) > 0xd
	.error "gText_Rom_25E346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E346) < 0xd
	.space 0xd - (. - gText_Rom_25E346)
	.endif

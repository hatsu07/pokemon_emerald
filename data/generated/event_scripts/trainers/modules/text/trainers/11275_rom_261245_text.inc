	@ data/text/trainers.inc:2993 Route128_Text_IsaiahPostRematch
	.globl gText_Rom_261245
gText_Rom_261245: @ 0x08261245
	.string "あきらめなきゃ いつかは かてる\nサイユウシティにも たどりつく……!$"
	.if (. - gText_Rom_261245) > 0x24
	.error "gText_Rom_261245 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261245) < 0x24
	.space 0x24 - (. - gText_Rom_261245)
	.endif

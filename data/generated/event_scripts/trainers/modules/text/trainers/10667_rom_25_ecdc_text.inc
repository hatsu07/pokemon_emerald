	@ data/text/trainers.inc:2090 Route119_Text_FabianDefeat (+1 aliases)
	.globl gText_Rom_25ECDC
gText_Rom_25ECDC: @ 0x0825ECDC
	.string "まけたぜーヘ あっさりーヒ まけたぜーヘ$"
	.if (. - gText_Rom_25ECDC) > 0x15
	.error "gText_Rom_25ECDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ECDC) < 0x15
	.space 0x15 - (. - gText_Rom_25ECDC)
	.endif

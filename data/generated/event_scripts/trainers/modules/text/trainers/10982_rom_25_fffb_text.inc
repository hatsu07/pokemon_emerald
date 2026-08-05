	@ data/text/trainers.inc:2558 Route123_Text_EdDefeat (+1 aliases)
	.globl gText_Rom_25FFFB
gText_Rom_25FFFB: @ 0x0825FFFB
	.string "きみの ポケモンも いいねぃ$"
	.if (. - gText_Rom_25FFFB) > 0xf
	.error "gText_Rom_25FFFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25FFFB) < 0xf
	.space 0xf - (. - gText_Rom_25FFFB)
	.endif

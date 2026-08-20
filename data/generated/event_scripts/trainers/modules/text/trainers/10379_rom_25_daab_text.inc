	@ data/text/trainers.inc:1667 Route116_Text_DevanPostBattle
	.globl gText_Rom_25DAAB
gText_Rom_25DAAB: @ 0x0825DAAB
	.string "たまには ほかの タイプの\nポケモンも つかって みるかなあ?{EOS}"
	.if (. - gText_Rom_25DAAB) > 0x20
	.error "gText_Rom_25DAAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DAAB) < 0x20
	.space 0x20 - (. - gText_Rom_25DAAB)
	.endif

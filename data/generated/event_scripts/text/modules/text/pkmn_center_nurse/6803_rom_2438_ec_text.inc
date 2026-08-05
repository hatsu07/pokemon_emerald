	@ data/text/pkmn_center_nurse.inc:49 gText_ThankYouForWaiting
	.globl gText_Rom_2438EC
gText_Rom_2438EC: @ 0x082438EC
	.string "たいへん おまたせ いたしました!$"
	.if (. - gText_Rom_2438EC) > 0x12
	.error "gText_Rom_2438EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2438EC) < 0x12
	.space 0x12 - (. - gText_Rom_2438EC)
	.endif

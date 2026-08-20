	@ data/text/trainers.inc:521 Route108_Text_MatthewPostBattle
	.globl gText_Rom_25ABFF
gText_Rom_25ABFF: @ 0x0825ABFF
	.string "すてられぶねの なかに\nはいっていく やつらが いるんだよ!{EOS}"
	.if (. - gText_Rom_25ABFF) > 0x1f
	.error "gText_Rom_25ABFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ABFF) < 0x1f
	.space 0x1f - (. - gText_Rom_25ABFF)
	.endif

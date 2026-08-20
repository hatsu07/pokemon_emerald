	@ data/text/trainers.inc:947 Route111_Text_DustyRegister
	.globl gText_Rom_25BCAD
gText_Rom_25BCAD: @ 0x0825BCAD
	.string "つよい ポケモンは さがしてないけど\nなぜだか ポケナビは おきにいり なんだ!{EOS}"
	.if (. - gText_Rom_25BCAD) > 0x29
	.error "gText_Rom_25BCAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25BCAD) < 0x29
	.space 0x29 - (. - gText_Rom_25BCAD)
	.endif

	@ data/text/trainers.inc:3032 Route128_Text_RubenPostBattle
	.globl gText_Rom_2613E7
gText_Rom_2613E7: @ 0x082613E7
	.string "きみの ように つよい\nポケモントレーナーは ほかに いないだろう!{EOS}"
	.if (. - gText_Rom_2613E7) > 0x23
	.error "gText_Rom_2613E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2613E7) < 0x23
	.space 0x23 - (. - gText_Rom_2613E7)
	.endif

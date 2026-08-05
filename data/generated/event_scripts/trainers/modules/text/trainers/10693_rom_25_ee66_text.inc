	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+1 aliases)
	.globl gText_Rom_25EE66
gText_Rom_25EE66: @ 0x0825EE66
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!$"
	.if (. - gText_Rom_25EE66) > 0x21
	.error "gText_Rom_25EE66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EE66) < 0x21
	.space 0x21 - (. - gText_Rom_25EE66)
	.endif

	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+2 aliases)
	.globl gText_Rom_25EEAC
gText_Rom_25EEAC: @ 0x0825EEAC
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!{EOS}"
	.if (. - gText_Rom_25EEAC) > 0x21
	.error "gText_Rom_25EEAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EEAC) < 0x21
	.space 0x21 - (. - gText_Rom_25EEAC)
	.endif

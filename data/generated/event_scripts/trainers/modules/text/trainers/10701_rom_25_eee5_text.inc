	@ data/text/trainers.inc:2141 Route120_Text_RobertPostRematch
	.globl gText_Rom_25EEE5
gText_Rom_25EEE5: @ 0x0825EEE5
	.string "ポケモンが つよくなるのと いっしょに\nおれも つよくならないとなー!$"
	.if (. - gText_Rom_25EEE5) > 0x24
	.error "gText_Rom_25EEE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EEE5) < 0x24
	.space 0x24 - (. - gText_Rom_25EEE5)
	.endif

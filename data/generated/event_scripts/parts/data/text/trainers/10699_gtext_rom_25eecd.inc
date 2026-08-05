	@ data/text/trainers.inc:2138 Route120_Text_RobertRematchDefeat (+1 aliases)
	.globl gText_Rom_25EECD
gText_Rom_25EECD: @ 0x0825EECD
	.string "キミの ポケモン\nほんとうに つよいんだな……$"
	.if (. - gText_Rom_25EECD) > 0x18
	.error "gText_Rom_25EECD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25EECD) < 0x18
	.space 0x18 - (. - gText_Rom_25EECD)
	.endif

	@ data/text/trainers.inc:542 Route108_Text_CoryIntro (+1 aliases)
	.globl gText_Rom_25ACCB
gText_Rom_25ACCB: @ 0x0825ACCB
	.string "みずポケモンが だいすきだー!\nほかの ポケモンも だいすきだー!$"
	.if (. - gText_Rom_25ACCB) > 0x22
	.error "gText_Rom_25ACCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25ACCB) < 0x22
	.space 0x22 - (. - gText_Rom_25ACCB)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B00D
gText_Rom_24B00D: @ 0x0824B00D
	.string "アピールが　おわった　ポケモンの\nちょうしを　さげる$"
	.if (. - gText_Rom_24B00D) > 0x1b
	.error "gText_Rom_24B00D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B00D) < 0x1b
	.space 0x1b - (. - gText_Rom_24B00D)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24AFCD
gText_Rom_24AFCD: @ 0x0824AFCD
	.string "このあと　アピールする　ポケモン\n1ひきを　きんちょう　させる{EOS}"
	.if (. - gText_Rom_24AFCD) > 0x20
	.error "gText_Rom_24AFCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AFCD) < 0x20
	.space 0x20 - (. - gText_Rom_24AFCD)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B211
gText_Rom_24B211: @ 0x0824B211
	.string "このつぎの　アピールの\nじゅんばんを　めちゃくちゃに　する$"
	.if (. - gText_Rom_24B211) > 0x1e
	.error "gText_Rom_24B211 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B211) < 0x1e
	.space 0x1e - (. - gText_Rom_24B211)
	.endif

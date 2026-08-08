	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B1F4
gText_Rom_24B1F4: @ 0x0824B1F4
	.string "このつぎの　アピールの\nじゅんばんが　かわりやすく　なる$"
	.if (. - gText_Rom_24B1F4) > 0x1d
	.error "gText_Rom_24B1F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B1F4) < 0x1d
	.space 0x1d - (. - gText_Rom_24B1F4)
	.endif

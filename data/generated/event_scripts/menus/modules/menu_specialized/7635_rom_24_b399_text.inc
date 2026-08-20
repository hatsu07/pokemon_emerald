	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B399
gText_Rom_24B399: @ 0x0824B399
	.string "ほかの　ポケモンに　つられた！{EOS}"
	.if (. - gText_Rom_24B399) > 0x10
	.error "gText_Rom_24B399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B399) < 0x10
	.space 0x10 - (. - gText_Rom_24B399)
	.endif

	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B45C
gText_Rom_24B45C: @ 0x0824B45C
	.string "ふつうより　ちょっと\nうまく　いった！$"
	.if (. - gText_Rom_24B45C) > 0x14
	.error "gText_Rom_24B45C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B45C) < 0x14
	.space 0x14 - (. - gText_Rom_24B45C)
	.endif

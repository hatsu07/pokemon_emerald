	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B3DD
gText_Rom_24B3DD: @ 0x0824B3DD
	.string "これまでの　しっぱいを\nいかして　がんばってみた！$"
	.if (. - gText_Rom_24B3DD) > 0x1a
	.error "gText_Rom_24B3DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B3DD) < 0x1a
	.space 0x1a - (. - gText_Rom_24B3DD)
	.endif

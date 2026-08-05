	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24B4F8
gText_Rom_24B4F8: @ 0x0824B4F8
	.string "しんさいんの　{0xFD}{0x02}への\nいんしょうは　かわらない！$"
	.if (. - gText_Rom_24B4F8) > 0x1a
	.error "gText_Rom_24B4F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B4F8) < 0x1a
	.space 0x1a - (. - gText_Rom_24B4F8)
	.endif

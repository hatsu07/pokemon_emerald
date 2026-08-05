	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription
	.globl gText_Rom_24B436
gText_Rom_24B436: @ 0x0824B436
	.string "しんさいんが　きたいを\nこめた　めで　みつめた！$"
	.if (. - gText_Rom_24B436) > 0x19
	.error "gText_Rom_24B436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B436) < 0x19
	.space 0x19 - (. - gText_Rom_24B436)
	.endif

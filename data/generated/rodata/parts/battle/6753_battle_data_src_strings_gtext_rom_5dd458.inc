	@ src/strings.c:900 gText_RoomsCleared
	.globl gText_Rom_5DD458
gText_Rom_5DD458: @ 0x085DD458
	.string "{STR_VAR_1}へや とっぱ$"
	.if (. - gText_Rom_5DD458) > 0x9
	.error "gText_Rom_5DD458 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD458) < 0x9
	.space 0x9 - (. - gText_Rom_5DD458)
	.endif

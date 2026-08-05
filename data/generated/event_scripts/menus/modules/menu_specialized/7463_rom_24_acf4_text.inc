	@ asm/menu_specialized.s:1928 MoveRelearnerMenuLoadContestMoveDescription (+1 aliases)
	.globl gText_Rom_24ACF4
gText_Rom_24ACF4: @ 0x0824ACF4
	.string "すごいアピールに　なるが　このあと\nさいごまで　なにも　できなくなる$"
	.if (. - gText_Rom_24ACF4) > 0x23
	.error "gText_Rom_24ACF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ACF4) < 0x23
	.space 0x23 - (. - gText_Rom_24ACF4)
	.endif

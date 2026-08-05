	@ src/item_use.c:93 sText_PowderQty
	.globl gText_Rom_5C96CE
gText_Rom_5C96CE: @ 0x085C96CE
	.string "こなの りょう {STR_VAR_1}{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C96CE) > 0xd
	.error "gText_Rom_5C96CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96CE) < 0xd
	.space 0xd - (. - gText_Rom_5C96CE)
	.endif

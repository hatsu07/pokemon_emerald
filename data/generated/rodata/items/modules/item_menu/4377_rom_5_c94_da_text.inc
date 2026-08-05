	@ src/item_menu.c:222 sText_NoRoomForItems
	.globl gText_Rom_5C94DA
gText_Rom_5C94DA: @ 0x085C94DA
	.string "これいじょう\nあずけられません!$"
	.if (. - gText_Rom_5C94DA) > 0x11
	.error "gText_Rom_5C94DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94DA) < 0x11
	.space 0x11 - (. - gText_Rom_5C94DA)
	.endif

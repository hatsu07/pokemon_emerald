	@ src/data/script_menu.h:844 gText_ThreeIsland
	.globl gText_Rom_57CB70
gText_Rom_57CB70: @ 0x0857CB70
	.string "3のしま$"
	.if (. - gText_Rom_57CB70) > 0x5
	.error "gText_Rom_57CB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB70) < 0x5
	.space 0x5 - (. - gText_Rom_57CB70)
	.endif

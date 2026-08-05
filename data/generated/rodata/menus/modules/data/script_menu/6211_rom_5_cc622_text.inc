	@ src/data/script_menu.h:38 gText_Registry (+2 aliases)
	.globl gText_Rom_5CC622
gText_Rom_5CC622: @ 0x085CC622
	.string "とうろく$"
	.if (. - gText_Rom_5CC622) > 0x5
	.error "gText_Rom_5CC622 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC622) < 0x5
	.space 0x5 - (. - gText_Rom_5CC622)
	.endif

	@ src/data/script_menu.h:843 gText_TwoIsland
	.globl gText_Rom_57CB6B
gText_Rom_57CB6B: @ 0x0857CB6B
	.string "2のしま$"
	.if (. - gText_Rom_57CB6B) > 0x5
	.error "gText_Rom_57CB6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB6B) < 0x5
	.space 0x5 - (. - gText_Rom_57CB6B)
	.endif

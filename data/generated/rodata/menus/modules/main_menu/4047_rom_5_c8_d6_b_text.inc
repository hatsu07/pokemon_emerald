	@ src/main_menu.c:260 gText_SaveFileErased
	.globl gText_Rom_5C8D6B
gText_Rom_5C8D6B: @ 0x085C8D6B
	.string "レポートの ないようが きえてしまった!$"
	.if (. - gText_Rom_5C8D6B) > 0x15
	.error "gText_Rom_5C8D6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8D6B) < 0x15
	.space 0x15 - (. - gText_Rom_5C8D6B)
	.endif

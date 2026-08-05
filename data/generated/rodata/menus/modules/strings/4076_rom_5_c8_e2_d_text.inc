	@ src/strings.c:36 gText_LButtonRButton
	.globl gText_Rom_5C8E2D
gText_Rom_5C8E2D: @ 0x085C8E2D
	.string "Lボタン Rボタン$"
	.if (. - gText_Rom_5C8E2D) > 0xa
	.error "gText_Rom_5C8E2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E2D) < 0xa
	.space 0xa - (. - gText_Rom_5C8E2D)
	.endif

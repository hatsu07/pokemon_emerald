	@ src/strings.c:203 gText_ReturnToVar1
	.globl gText_Rom_5C9738
gText_Rom_5C9738: @ 0x085C9738
	.string "{STR_VAR_1}へ\nもどります$"
	.if (. - gText_Rom_5C9738) > 0xa
	.error "gText_Rom_5C9738 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9738) < 0xa
	.space 0xa - (. - gText_Rom_5C9738)
	.endif

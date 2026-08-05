	@ src/strings.c:166 gText_ConfirmTossItems
	.globl gText_Rom_5C9540
gText_Rom_5C9540: @ 0x085C9540
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ すてても\nよろしいですか?$"
	.if (. - gText_Rom_5C9540) > 0x16
	.error "gText_Rom_5C9540 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9540) < 0x16
	.space 0x16 - (. - gText_Rom_5C9540)
	.endif

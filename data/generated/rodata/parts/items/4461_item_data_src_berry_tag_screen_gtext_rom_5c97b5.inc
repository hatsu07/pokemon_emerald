	@ src/berry_tag_screen.c:180 sText_NumberVar1Var2
	.globl gText_Rom_5C97B5
gText_Rom_5C97B5: @ 0x085C97B5
	.string "{NO}{STR_VAR_1} {STR_VAR_2}$"
	.if (. - gText_Rom_5C97B5) > 0x8
	.error "gText_Rom_5C97B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C97B5) < 0x8
	.space 0x8 - (. - gText_Rom_5C97B5)
	.endif

	@ src/strings.c:768 gText_Var1Berry
	.globl gText_Rom_5CC9E6
gText_Rom_5CC9E6: @ 0x085CC9E6
	.string "  {STR_VAR_1}のみ$"
	.if (. - gText_Rom_5CC9E6) > 0x7
	.error "gText_Rom_5CC9E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9E6) < 0x7
	.space 0x7 - (. - gText_Rom_5CC9E6)
	.endif

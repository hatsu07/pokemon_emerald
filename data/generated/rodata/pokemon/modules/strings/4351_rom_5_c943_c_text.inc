	@ src/strings.c:155 gText_xVar1
	.globl gText_Rom_5C943C
gText_Rom_5C943C: @ 0x085C943C
	.string "×{STR_VAR_1}$"
	.if (. - gText_Rom_5C943C) > 0x4
	.error "gText_Rom_5C943C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C943C) < 0x4
	.space 0x4 - (. - gText_Rom_5C943C)
	.endif

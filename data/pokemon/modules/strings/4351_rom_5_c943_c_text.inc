	@ src/strings.c:155 gText_xVar1
	.globl gText_xVar1
gText_xVar1: @ 0x085C943C
	.string "×{STR_VAR_1}{EOS}"
	.if (. - gText_xVar1) > 0x4
	.error "gText_xVar1 may not grow beyond its original slot"
	.endif
	.if (. - gText_xVar1) < 0x4
	.space 0x4 - (. - gText_xVar1)
	.endif

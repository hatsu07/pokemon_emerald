	@ src/strings.c:778 gText_Var1Percent
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA27
gText_Rom_5CCA27: @ 0x085CCA27
	.string " {STR_VAR_1}パーセント$"
	.if (. - gText_Rom_5CCA27) != 0x9
	.error "gText_Rom_5CCA27 must retain its original byte length"
	.endif

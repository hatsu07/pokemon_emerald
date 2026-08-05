	@ src/strings.c:786 gText_Var1Players
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA89
gText_Rom_5CCA89: @ 0x085CCA89
	.string "   {STR_VAR_1}にんよう$"
	.if (. - gText_Rom_5CCA89) != 0xa
	.error "gText_Rom_5CCA89 must retain its original byte length"
	.endif

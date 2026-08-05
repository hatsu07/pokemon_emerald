	@ src/strings.c:780 gText_CrushingResults
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA3F
gText_Rom_5CCA3F: @ 0x085CCA3F
	.string " つぶした けっか$"
	.if (. - gText_Rom_5CCA3F) != 0xa
	.error "gText_Rom_5CCA3F must retain its original byte length"
	.endif

	@ src/strings.c:775 gText_SpaceSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5CCA12
gText_Rom_5CCA12: @ 0x085CCA12
	.string "  びょう{EOS}"
	.if (. - gText_Rom_5CCA12) != 0x6
	.error "gText_Rom_5CCA12 must retain its original byte length"
	.endif

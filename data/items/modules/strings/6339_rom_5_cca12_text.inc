	@ src/strings.c:775 gText_SpaceSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_SpaceSec
gText_SpaceSec: @ 0x085CCA12
	.string "  びょう{EOS}"
	.if (. - gText_SpaceSec) != 0x6
	.error "gText_SpaceSec must retain its original byte length"
	.endif

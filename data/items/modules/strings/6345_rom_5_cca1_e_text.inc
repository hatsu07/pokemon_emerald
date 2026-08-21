	@ src/strings.c:777 gText_TimesPerSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5CCA1E
gText_Rom_5CCA1E: @ 0x085CCA1E
	.string "  かい/びょう{EOS}"
	.if (. - gText_Rom_5CCA1E) != 0x9
	.error "gText_Rom_5CCA1E must retain its original byte length"
	.endif

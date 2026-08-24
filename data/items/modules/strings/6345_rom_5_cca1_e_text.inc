	@ src/strings.c:777 gText_TimesPerSec
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_TimesPerSec
gText_TimesPerSec: @ 0x085CCA1E
	.string "  かい/びょう{EOS}"
	.if (. - gText_TimesPerSec) != 0x9
	.error "gText_TimesPerSec must retain its original byte length"
	.endif

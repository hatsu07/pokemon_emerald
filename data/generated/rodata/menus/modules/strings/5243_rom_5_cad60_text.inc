	@ src/strings.c:489 gText_MultiLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAD60
gText_Rom_5CAD60: @ 0x085CAD60
	.string "つうしん マルチ{EOS}"
	.if (. - gText_Rom_5CAD60) != 0x9
	.error "gText_Rom_5CAD60 must retain its original byte length"
	.endif

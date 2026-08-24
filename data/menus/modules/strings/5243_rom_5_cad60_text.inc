	@ src/strings.c:489 gText_MultiLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MultiLink
gText_MultiLink: @ 0x085CAD60
	.string "つうしん マルチ{EOS}"
	.if (. - gText_MultiLink) != 0x9
	.error "gText_MultiLink must retain its original byte length"
	.endif

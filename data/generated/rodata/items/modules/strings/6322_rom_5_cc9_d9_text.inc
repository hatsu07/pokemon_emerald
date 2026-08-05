	@ src/strings.c:766 gText_SpaceTimes2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC9D9
gText_Rom_5CC9D9: @ 0x085CC9D9
	.string "   かい$"
	.if (. - gText_Rom_5CC9D9) != 0x6
	.error "gText_Rom_5CC9D9 must retain its original byte length"
	.endif

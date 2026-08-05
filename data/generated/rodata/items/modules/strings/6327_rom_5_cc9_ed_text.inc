	@ src/strings.c:769 gText_TimeColon
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_5CC9ED
gText_Rom_5CC9ED: @ 0x085CC9ED
	.string "   じかん$"
	.if (. - gText_Rom_5CC9ED) != 0x7
	.error "gText_Rom_5CC9ED must retain its original byte length"
	.endif

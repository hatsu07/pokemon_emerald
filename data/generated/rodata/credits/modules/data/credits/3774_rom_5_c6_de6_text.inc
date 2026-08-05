	@ src/data/credits.h:94 sCreditsText_ExecProducers
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6DE6
gText_Rom_5C6DE6: @ 0x085C6DE6
	.string "エグゼクティブ プロデューサー$"
	.if (. - gText_Rom_5C6DE6) != 0x10
	.error "gText_Rom_5C6DE6 must retain its original byte length"
	.endif

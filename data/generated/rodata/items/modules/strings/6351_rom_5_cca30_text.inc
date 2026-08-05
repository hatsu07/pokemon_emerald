	@ src/strings.c:779 gText_PressesRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA30
gText_Rom_5CCA30: @ 0x085CCA30
	.string "おした かいすう ランキング$"
	.if (. - gText_Rom_5CCA30) != 0xf
	.error "gText_Rom_5CCA30 must retain its original byte length"
	.endif

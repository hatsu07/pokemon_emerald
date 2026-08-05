	@ src/strings.c:781 gText_NeatnessRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA49
gText_Rom_5CCA49: @ 0x085CCA49
	.string "   ていねいさ ランキング$"
	.if (. - gText_Rom_5CCA49) != 0xf
	.error "gText_Rom_5CCA49 must retain its original byte length"
	.endif

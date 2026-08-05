	@ src/strings.c:785 gText_PressingSpeedRankings
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_5CCA79
gText_Rom_5CCA79: @ 0x085CCA79
	.string "   おすはやさ ランキング!$"
	.if (. - gText_Rom_5CCA79) != 0x10
	.error "gText_Rom_5CCA79 must retain its original byte length"
	.endif

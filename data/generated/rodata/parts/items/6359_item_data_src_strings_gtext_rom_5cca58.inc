	@ src/strings.c:782 gText_CoopRankings
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCA58
gText_Rom_5CCA58: @ 0x085CCA58
	.string "たすけあい ランキング$"
	.if (. - gText_Rom_5CCA58) != 0xc
	.error "gText_Rom_5CCA58 must retain its original byte length"
	.endif

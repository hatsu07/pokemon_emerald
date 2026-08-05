	@ src/player_pc.c:173 sText_TossItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8D1
gText_Rom_5CA8D1: @ 0x085CA8D1
	.string "どうぐを すてる$"
	.if (. - gText_Rom_5CA8D1) != 0x9
	.error "gText_Rom_5CA8D1 must retain its original byte length"
	.endif

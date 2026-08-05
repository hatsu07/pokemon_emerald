	@ src/strings.c:687 gText_PokeblocksWithFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC3BF
gText_Rom_5CC3BF: @ 0x085CC3BF
	.string "ともだちと つくった ポロック$"
	.if (. - gText_Rom_5CC3BF) != 0x10
	.error "gText_Rom_5CC3BF must retain its original byte length"
	.endif

	@ src/strings.c:684 gText_UnionTradesAndBattles
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC390
gText_Rom_5CC390: @ 0x085CC390
	.string "ユニオンたいせんとこうかん$"
	.if (. - gText_Rom_5CC390) != 0xe
	.error "gText_Rom_5CC390 must retain its original byte length"
	.endif

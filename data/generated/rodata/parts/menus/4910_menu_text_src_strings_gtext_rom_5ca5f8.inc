	@ src/strings.c:409 gText_PeculiarEggTrade
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5F8
gText_Rom_5CA5F8: @ 0x085CA5F8
	.string "つうしんこうかんで てにいれた\nふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5F8) != 0x1e
	.error "gText_Rom_5CA5F8 must retain its original byte length"
	.endif

	@ src/strings.c:408 gText_PeculiarEggNicePlace
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA5D5
gText_Rom_5CA5D5: @ 0x085CA5D5
	.string "ステキな ばしょで てにいれた\nふしぎな ふしぎな ポケモンのタマゴ$"
	.if (. - gText_Rom_5CA5D5) != 0x23
	.error "gText_Rom_5CA5D5 must retain its original byte length"
	.endif

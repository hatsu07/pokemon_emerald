	@ src/strings.c:102 gText_DexHoennDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91A7
gText_Rom_5C91A7: @ 0x085C91A7
	.string "ホウエンちほう ばん ポケモンずかん$"
	.if (. - gText_Rom_5C91A7) != 0x13
	.error "gText_Rom_5C91A7 must retain its original byte length"
	.endif

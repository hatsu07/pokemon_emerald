	@ src/strings.c:108 gText_DexSortTallestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9243
gText_Rom_5C9243: @ 0x085C9243
	.string "つかまえたポケモンを\nしんちょうのたかい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9243) != 0x25
	.error "gText_Rom_5C9243 must retain its original byte length"
	.endif

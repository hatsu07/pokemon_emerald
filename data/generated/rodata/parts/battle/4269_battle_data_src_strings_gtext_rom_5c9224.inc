	@ src/strings.c:107 gText_DexSortLightestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9224
gText_Rom_5C9224: @ 0x085C9224
	.string "つかまえたポケモンを\nかるい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9224) != 0x1f
	.error "gText_Rom_5C9224 must retain its original byte length"
	.endif

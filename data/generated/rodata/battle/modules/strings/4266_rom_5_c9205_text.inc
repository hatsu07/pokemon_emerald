	@ src/strings.c:106 gText_DexSortHeaviestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9205
gText_Rom_5C9205: @ 0x085C9205
	.string "つかまえたポケモンを\nおもい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9205) != 0x1f
	.error "gText_Rom_5C9205 must retain its original byte length"
	.endif

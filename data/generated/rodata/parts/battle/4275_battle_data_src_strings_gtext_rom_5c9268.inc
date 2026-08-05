	@ src/strings.c:109 gText_DexSortSmallestDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9268
gText_Rom_5C9268: @ 0x085C9268
	.string "つかまえたポケモンを\nしんちょうのひくい じゅんばんで ひょうじ します$"
	.if (. - gText_Rom_5C9268) != 0x25
	.error "gText_Rom_5C9268 must retain its original byte length"
	.endif

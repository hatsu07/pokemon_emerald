	@ src/strings.c:105 gText_DexSortAtoZDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91E2
gText_Rom_5C91E2: @ 0x085C91E2
	.string "みつけたポケモンの なまえを\nごじゅうおんじゅんで ひょうじ します$"
	.if (. - gText_Rom_5C91E2) != 0x23
	.error "gText_Rom_5C91E2 must retain its original byte length"
	.endif

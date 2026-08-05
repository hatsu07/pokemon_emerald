	@ src/strings.c:104 gText_DexSortNumericalDescription
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C91CA
gText_Rom_5C91CA: @ 0x085C91CA
	.string "ポケモンを\nばんごうじゅんで ひょうじ します$"
	.if (. - gText_Rom_5C91CA) != 0x18
	.error "gText_Rom_5C91CA must retain its original byte length"
	.endif

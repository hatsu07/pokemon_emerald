	@ src/strings.c:390 gText_PkmnSkills
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA3EE
gText_Rom_5CA3EE: @ 0x085CA3EE
	.string "ポケモンのうりょく$"
	.if (. - gText_Rom_5CA3EE) != 0xa
	.error "gText_Rom_5CA3EE must retain its original byte length"
	.endif

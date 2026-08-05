	@ src/strings.c:66 gText_SearchForPkmnBasedOnParameters
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C9035
gText_Rom_5C9035: @ 0x085C9035
	.string "じょうけんを していして\nポケモンの けんさくを します$"
	.if (. - gText_Rom_5C9035) != 0x1d
	.error "gText_Rom_5C9035 must retain its original byte length"
	.endif

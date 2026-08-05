	@ src/data/credits.h:78 sCreditsText_PkmnDesigners
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C6D44
gText_Rom_5C6D44: @ 0x085C6D44
	.string "ポケモン デザイン$"
	.if (. - gText_Rom_5C6D44) != 0xa
	.error "gText_Rom_5C6D44 must retain its original byte length"
	.endif

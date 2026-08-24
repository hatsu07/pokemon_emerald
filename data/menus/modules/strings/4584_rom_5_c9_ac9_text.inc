	@ src/strings.c:337 gText_Able
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Able_Copy_Menus
gText_Able_Copy_Menus: @ 0x085C9AC9
	.string "さんかしない{EOS}"
	.if (. - gText_Able_Copy_Menus) != 0x7
	.error "gText_Able_Copy_Menus must retain its original byte length"
	.endif

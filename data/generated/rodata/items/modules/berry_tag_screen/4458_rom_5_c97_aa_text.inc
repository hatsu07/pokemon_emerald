	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97AA
gText_Rom_5C97AA: @ 0x085C97AA
	.string "とてつもなく　かたい$"
	.if (. - gText_Rom_5C97AA) != 0xb
	.error "gText_Rom_5C97AA must retain its original byte length"
	.endif

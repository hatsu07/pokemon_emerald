	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C978E
gText_Rom_5C978E: @ 0x085C978E
	.string "とても　やわらかい$"
	.if (. - gText_Rom_5C978E) != 0xa
	.error "gText_Rom_5C978E must retain its original byte length"
	.endif

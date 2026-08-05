	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C97A2
gText_Rom_5C97A2: @ 0x085C97A2
	.string "とても　かたい$"
	.if (. - gText_Rom_5C97A2) != 0x8
	.error "gText_Rom_5C97A2 must retain its original byte length"
	.endif

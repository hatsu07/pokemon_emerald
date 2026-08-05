	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+25 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_250858
gText_Rom_250858: @ 0x08250858
	.string "「{0xFD}{0x02}」　「{0xFD}{0x03}」\n……を　おぼえていました$"
	.if (. - gText_Rom_250858) != 0x17
	.error "gText_Rom_250858 must retain its original byte length"
	.endif

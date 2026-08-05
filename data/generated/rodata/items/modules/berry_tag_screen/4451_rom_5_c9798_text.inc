	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C9798
gText_Rom_5C9798: @ 0x085C9798
	.string "やわらかい$"
	.if (. - gText_Rom_5C9798) > 0x6
	.error "gText_Rom_5C9798 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9798) < 0x6
	.space 0x6 - (. - gText_Rom_5C9798)
	.endif

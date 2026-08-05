	@ asm/berry_tag_screen.s:752 PrintBerryFirmness (+1 aliases)
	.globl gText_Rom_5C979E
gText_Rom_5C979E: @ 0x085C979E
	.string "かたい$"
	.if (. - gText_Rom_5C979E) > 0x4
	.error "gText_Rom_5C979E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C979E) < 0x4
	.space 0x4 - (. - gText_Rom_5C979E)
	.endif

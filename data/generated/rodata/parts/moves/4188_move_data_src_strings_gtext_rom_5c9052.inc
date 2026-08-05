	@ src/strings.c:67 gText_SwitchPokedexListings
	.globl gText_Rom_5C9052
gText_Rom_5C9052: @ 0x085C9052
	.string "ずかんリストの ならびを きりかえます$"
	.if (. - gText_Rom_5C9052) > 0x14
	.error "gText_Rom_5C9052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9052) < 0x14
	.space 0x14 - (. - gText_Rom_5C9052)
	.endif

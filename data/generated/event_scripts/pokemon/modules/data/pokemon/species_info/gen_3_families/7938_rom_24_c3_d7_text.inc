	@ src/data/pokemon/species_info/gen_3_families.h:3312 gen_3_families_line_3312 (+1 aliases)
	.globl gText_Rom_24C3D7
gText_Rom_24C3D7: @ 0x0824C3D7
	.string "キノココ{EOS}"
	.if (. - gText_Rom_24C3D7) > 0x5
	.error "gText_Rom_24C3D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3D7) < 0x5
	.space 0x5 - (. - gText_Rom_24C3D7)
	.endif

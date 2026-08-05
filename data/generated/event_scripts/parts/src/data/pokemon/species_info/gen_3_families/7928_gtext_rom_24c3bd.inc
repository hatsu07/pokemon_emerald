	@ src/data/pokemon/species_info/gen_3_families.h:3690 gen_3_families_line_3690 (+1 aliases)
	.globl gText_Rom_24C3BD
gText_Rom_24C3BD: @ 0x0824C3BD
	.string "ツチニン$"
	.if (. - gText_Rom_24C3BD) > 0x5
	.error "gText_Rom_24C3BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3BD) < 0x5
	.space 0x5 - (. - gText_Rom_24C3BD)
	.endif

	@ src/data/pokemon/species_info/gen_1_families.h:5782 gen_1_families_line_5782 (+2 aliases)
	.globl gText_Rom_24C3E7
gText_Rom_24C3E7: @ 0x0824C3E7
	.string "ズバット$"
	.if (. - gText_Rom_24C3E7) > 0x5
	.error "gText_Rom_24C3E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3E7) < 0x5
	.space 0x5 - (. - gText_Rom_24C3E7)
	.endif

	@ src/data/pokemon/species_info/gen_2_families.h:2319 gen_2_families_line_2319 (+1 aliases)
	.globl gText_Rom_24C3A4
gText_Rom_24C3A4: @ 0x0824C3A4
	.string "ルリリ$"
	.if (. - gText_Rom_24C3A4) > 0x4
	.error "gText_Rom_24C3A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3A4) < 0x4
	.space 0x4 - (. - gText_Rom_24C3A4)
	.endif

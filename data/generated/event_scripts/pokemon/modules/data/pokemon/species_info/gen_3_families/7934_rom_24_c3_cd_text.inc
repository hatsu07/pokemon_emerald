	@ src/data/pokemon/species_info/gen_3_families.h:3466 gen_3_families_line_3466 (+1 aliases)
	.globl gText_Rom_24C3CD
gText_Rom_24C3CD: @ 0x0824C3CD
	.string "ナマケロ$"
	.if (. - gText_Rom_24C3CD) > 0x5
	.error "gText_Rom_24C3CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3CD) < 0x5
	.space 0x5 - (. - gText_Rom_24C3CD)
	.endif

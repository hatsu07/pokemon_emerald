	@ src/data/pokemon/species_info/gen_3_families.h:1795 gen_3_families_line_1795 (+1 aliases)
	.globl gText_Rom_24C3B2
gText_Rom_24C3B2: @ 0x0824C3B2
	.string "ドクケイル$"
	.if (. - gText_Rom_24C3B2) > 0x6
	.error "gText_Rom_24C3B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3B2) < 0x6
	.space 0x6 - (. - gText_Rom_24C3B2)
	.endif

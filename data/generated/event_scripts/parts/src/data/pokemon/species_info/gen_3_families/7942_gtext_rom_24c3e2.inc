	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gText_Rom_24C3E2
gText_Rom_24C3E2: @ 0x0824C3E2
	.string "ポチエナ$"
	.if (. - gText_Rom_24C3E2) > 0x5
	.error "gText_Rom_24C3E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3E2) < 0x5
	.space 0x5 - (. - gText_Rom_24C3E2)
	.endif

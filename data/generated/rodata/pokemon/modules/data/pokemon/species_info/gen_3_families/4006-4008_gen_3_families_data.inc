	@ src/data/pokemon/species_info/gen_3_families.h:12768 gen_3_families_line_12768 (+2 aliases)
	.globl gText_Rom_5C8C4E
gText_Rom_5C8C4E: @ 0x085C8C4E
	.string "カイオーガ$"
	.if (. - gText_Rom_5C8C4E) > 0x6
	.error "gText_Rom_5C8C4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C4E) < 0x6
	.space 0x6 - (. - gText_Rom_5C8C4E)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:12923 gen_3_families_line_12923 (+2 aliases)
	.globl gText_Rom_5C8C54
gText_Rom_5C8C54: @ 0x085C8C54
	.string "グラードン$"
	.if (. - gText_Rom_5C8C54) > 0x6
	.error "gText_Rom_5C8C54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C54) < 0x6
	.space 0x6 - (. - gText_Rom_5C8C54)
	.endif

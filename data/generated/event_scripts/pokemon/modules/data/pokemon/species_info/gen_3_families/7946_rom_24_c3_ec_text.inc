	@ src/data/pokemon/species_info/gen_3_families.h:6408 gen_3_families_line_6408 (+1 aliases)
	.globl gText_Rom_24C3EC
gText_Rom_24C3EC: @ 0x0824C3EC
	.string "キバニア{EOS}"
	.if (. - gText_Rom_24C3EC) > 0x5
	.error "gText_Rom_24C3EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3EC) < 0x5
	.space 0x5 - (. - gText_Rom_24C3EC)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:1891 gen_3_families_line_1891 (+1 aliases)
	.globl gText_Rom_24C3A8
gText_Rom_24C3A8: @ 0x0824C3A8
	.string "ハスボー{EOS}"
	.if (. - gText_Rom_24C3A8) > 0x5
	.error "gText_Rom_24C3A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3A8) < 0x5
	.space 0x5 - (. - gText_Rom_24C3A8)
	.endif

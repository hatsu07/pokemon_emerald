	@ src/data/pokemon/species_info/gen_3_families.h:2703 gen_3_families_line_2703 (+1 aliases)
	.globl gText_Rom_24C3C2
gText_Rom_24C3C2: @ 0x0824C3C2
	.string "ラルトス{EOS}"
	.if (. - gText_Rom_24C3C2) > 0x5
	.error "gText_Rom_24C3C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3C2) < 0x5
	.space 0x5 - (. - gText_Rom_24C3C2)
	.endif

	@ src/data/pokemon/species_info/gen_3_families.h:2382 gen_3_families_line_2382 (+1 aliases)
	.globl gText_Rom_24C3A0
gText_Rom_24C3A0: @ 0x0824C3A0
	.string "スバメ{EOS}"
	.if (. - gText_Rom_24C3A0) > 0x4
	.error "gText_Rom_24C3A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3A0) < 0x4
	.space 0x4 - (. - gText_Rom_24C3A0)
	.endif


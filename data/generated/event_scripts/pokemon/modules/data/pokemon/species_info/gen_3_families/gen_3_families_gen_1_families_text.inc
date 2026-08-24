	@ src/data/pokemon/species_info/gen_1_families.h:6068 gen_1_families_line_6068 (+1 aliases)
	.globl gText_Rom_24C395
gText_Rom_24C395: @ 0x0824C395
	.string "ナゾノクサ{EOS}"
	.if (. - gText_Rom_24C395) > 0x6
	.error "gText_Rom_24C395 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C395) < 0x6
	.space 0x6 - (. - gText_Rom_24C395)
	.endif

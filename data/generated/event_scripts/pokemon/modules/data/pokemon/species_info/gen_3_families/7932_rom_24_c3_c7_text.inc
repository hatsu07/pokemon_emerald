	@ src/data/pokemon/species_info/gen_3_families.h:1114 gen_3_families_line_1114 (+3 aliases)
	.globl gText_Rom_24C3C7
gText_Rom_24C3C7: @ 0x0824C3C7
	.string "ジグザグマ{EOS}"
	.if (. - gText_Rom_24C3C7) > 0x6
	.error "gText_Rom_24C3C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3C7) < 0x6
	.space 0x6 - (. - gText_Rom_24C3C7)
	.endif

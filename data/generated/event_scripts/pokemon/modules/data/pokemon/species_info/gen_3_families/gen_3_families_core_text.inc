	@ src/data/pokemon/species_info/gen_3_families.h:958 gen_3_families_line_958 (+3 aliases)
	.globl gText_Rom_24C39B
gText_Rom_24C39B: @ 0x0824C39B
	.string "ポチエナ{EOS}"
	.if (. - gText_Rom_24C39B) > 0x5
	.error "gText_Rom_24C39B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C39B) < 0x5
	.space 0x5 - (. - gText_Rom_24C39B)
	.endif
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


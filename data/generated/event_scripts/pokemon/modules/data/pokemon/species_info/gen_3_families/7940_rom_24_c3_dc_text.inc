	@ src/data/pokemon/species_info/gen_3_families.h:1114 gen_3_families_line_1114 (+3 aliases)
	.globl gText_Rom_24C3DC
gText_Rom_24C3DC: @ 0x0824C3DC
	.string "ジグザグマ{EOS}"
	.if (. - gText_Rom_24C3DC) > 0x6
	.error "gText_Rom_24C3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C3DC) < 0x6
	.space 0x6 - (. - gText_Rom_24C3DC)
	.endif

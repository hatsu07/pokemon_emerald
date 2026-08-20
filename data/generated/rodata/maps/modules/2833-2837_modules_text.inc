	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57CB2C
gText_Rom_57CB2C: @ 0x0857CB2C
	.string "サファリゾーン{EOS}"
	.if (. - gText_Rom_57CB2C) > 0x8
	.error "gText_Rom_57CB2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB2C) < 0x8
	.space 0x8 - (. - gText_Rom_57CB2C)
	.endif

	@ src/strings.c:623 gText_PokemonLeague
	.globl gText_Rom_57CB34
gText_Rom_57CB34: @ 0x0857CB34
	.string "ポケモンリーグ{EOS}"
	.if (. - gText_Rom_57CB34) > 0x8
	.error "gText_Rom_57CB34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB34) < 0x8
	.space 0x8 - (. - gText_Rom_57CB34)
	.endif
	@ analyzed canonical ROM range 0x0857CB3C-0x0857CB4E
	.globl gText_Rom_57CB3C
gText_Rom_57CB3C: @ 0x0857CB3C
	@ text fragments: "イワヤマトンネル$", "ふたごじま$", "ポケモン"
	.byte 0x52, 0x7C, 0x74, 0x6F, 0x64, 0x7E, 0x68, 0x79, 0xFF, 0x1C, 0x10, 0x3B, 0x3D, 0x1F, 0xFF, 0x9F
	.byte 0x59, 0x73, 0x7E
	.globl gText_Rom_57CB4F
gText_Rom_57CB4F: @ 0x0857CB4F
	.string "タワー{EOS}"
	.if (. - gText_Rom_57CB4F) > 0x4
	.error "gText_Rom_57CB4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB4F) < 0x4
	.space 0x4 - (. - gText_Rom_57CB4F)
	.endif
	@ analyzed canonical ROM range 0x0857CB53-0x0857CB56
	.globl gText_Rom_57CB53
gText_Rom_57CB53: @ 0x0857CB53
	@ text fragment: "ハナダの"
	.byte 0x6A, 0x65, 0x91, 0x19

	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_59885D
gText_Rom_59885D: @ 0x0859885D
	.string "トウカのもり$"
	.if (. - gText_Rom_59885D) > 0x7
	.error "gText_Rom_59885D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59885D) < 0x7
	.space 0x7 - (. - gText_Rom_59885D)
	.endif
	@ Replaced baserom.gba range: offset=0x598864, size=0xA
	.byte 0x6A, 0x88, 0x2B, 0x03, 0x3D, 0x2E, 0x19, 0x0A, 0x24, 0xFF

	@ src/data/region_map/region_map_entries.h:441 region_map_entries_line_441
	.globl gText_Rom_59886E
gText_Rom_59886E: @ 0x0859886E
	.string "すてられぶね$"
	.if (. - gText_Rom_59886E) > 0x7
	.error "gText_Rom_59886E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59886E) < 0x7
	.space 0x7 - (. - gText_Rom_59886E)
	.endif
	@ Replaced baserom.gba range: offset=0x598875, size=0x1A
	.byte 0x03, 0x20, 0x19, 0x02, 0x04, 0xFF, 0x56, 0x52, 0x65, 0x19, 0x0D, 0x15, 0x1A, 0x1F, 0xFF, 0x5B
	.byte 0x52, 0x58, 0x78, 0x7E, 0x89, 0x00, 0x7B, 0xAE, 0x95, 0xFF

	@ src/data/region_map/region_map_entries.h:448 region_map_entries_line_448
	.globl gText_Rom_59888F
gText_Rom_59888F: @ 0x0859888F
	.string "ニューキンセツ$"
	.if (. - gText_Rom_59888F) > 0x8
	.error "gText_Rom_59888F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59888F) < 0x8
	.space 0x8 - (. - gText_Rom_59888F)
	.endif
	@ Replaced baserom.gba range: offset=0x598897, size=0x11
	.byte 0x56, 0x77, 0x58, 0x78, 0x24, 0x0C, 0x07, 0xFF, 0x59, 0x7E, 0x5A, 0xAE, 0x46, 0x01, 0x0B, 0x2E
	.byte 0xFF


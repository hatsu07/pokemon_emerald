	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_57C94C
gText_Rom_57C94C: @ 0x0857C94C
	.string "ほのおのぬけみち{EOS}"
	.if (. - gText_Rom_57C94C) > 0x9
	.error "gText_Rom_57C94C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C94C) < 0x9
	.space 0x9 - (. - gText_Rom_57C94C)
	.endif

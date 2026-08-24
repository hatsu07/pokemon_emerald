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
	@ src/data/region_map/region_map_entries.h:546 region_map_entries_line_546
	.globl gText_Rom_57C955
gText_Rom_57C955: @ 0x0857C955
	.string "デコボコさんどう{EOS}"
	.if (. - gText_Rom_57C955) > 0x9
	.error "gText_Rom_57C955 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C955) < 0x9
	.space 0x9 - (. - gText_Rom_57C955)
	.endif
	@ Decoded text from ROM range: offset=0x57C95E, size=0x9
	.string "おふれのせきしつ{EOS}"

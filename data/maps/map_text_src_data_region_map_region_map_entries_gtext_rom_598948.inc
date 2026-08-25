	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_598948
gText_Rom_598948: @ 0x08598948
	.string "そらのはしら{EOS}"
	.if (. - gText_Rom_598948) > 0x7
	.error "gText_Rom_598948 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598948) < 0x7
	.space 0x7 - (. - gText_Rom_598948)
	.endif
	@ Decoded text from ROM range: offset=0x59894F, size=0xC
	.string "きのみ　めいじんのいえ{EOS}"

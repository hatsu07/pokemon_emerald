	@ src/data/region_map/region_map_entries.h:504 region_map_entries_line_504
	.globl gText_Rom_57C92A
gText_Rom_57C92A: @ 0x0857C92A
	.string "チャンピオンロード{EOS}"
	.if (. - gText_Rom_57C92A) > 0xa
	.error "gText_Rom_57C92A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C92A) < 0xa
	.space 0xa - (. - gText_Rom_57C92A)
	.endif
	@ Decoded text from ROM range: offset=0x57C934, size=0x7
	.string "まぼろしじま{EOS}"

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl gText_Rom_57C93B
gText_Rom_57C93B: @ 0x0857C93B
	.string "めざめのほこら{EOS}"
	.if (. - gText_Rom_57C93B) > 0x8
	.error "gText_Rom_57C93B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C93B) < 0x8
	.space 0x8 - (. - gText_Rom_57C93B)
	.endif
	@ Decoded text from ROM range: offset=0x57C943, size=0x9
	.string "みなみの　ことう{EOS}"

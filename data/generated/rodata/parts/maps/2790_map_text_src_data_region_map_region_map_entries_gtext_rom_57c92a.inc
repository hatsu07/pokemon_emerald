	@ src/data/region_map/region_map_entries.h:504 region_map_entries_line_504
	.globl gText_Rom_57C92A
gText_Rom_57C92A: @ 0x0857C92A
	.string "チャンピオンロード$"
	.if (. - gText_Rom_57C92A) > 0xa
	.error "gText_Rom_57C92A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C92A) < 0xa
	.space 0xa - (. - gText_Rom_57C92A)
	.endif
	@ Decoded text from ROM range: offset=0x57C934, size=0x7
	.string "まぼろしじま$"

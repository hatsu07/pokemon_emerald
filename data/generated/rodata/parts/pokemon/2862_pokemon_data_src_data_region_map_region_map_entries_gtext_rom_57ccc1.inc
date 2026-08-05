	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl gText_Rom_57CCC1
gText_Rom_57CCC1: @ 0x0857CCC1
	.string "たんじょうのしま$"
	.if (. - gText_Rom_57CCC1) > 0x9
	.error "gText_Rom_57CCC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CCC1) < 0x9
	.space 0x9 - (. - gText_Rom_57CCC1)
	.endif
	@ Decoded text from ROM range: offset=0x57CCCA, size=0x52
	.string "イレスのせきしつ$"
	.string "ナザンのせきしつ$"
	.string "ユゴのせきしつ$"
	.string "アレボカのせきしつ$"
	.string "コトーのせきしつ$"
	.string "アヌザのせきしつ$"
	.string "オリフのせきしつ$"
	.string "ともしびおんせん$"
	.string "あかみどりとくしゅ$"

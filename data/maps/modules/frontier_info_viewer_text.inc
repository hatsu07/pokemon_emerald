	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C8BF
gText_Rom_57C8BF: @ 0x0857C8BF
	.string "いしのどうくつ{EOS}"
	.if (. - gText_Rom_57C8BF) != 0x8
	.error "gText_Rom_57C8BF must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:406 region_map_entries_line_406
	.globl gText_Rom_57C8C7
gText_Rom_57C8C7: @ 0x0857C8C7
	.string "えんとつやま{EOS}"
	.if (. - gText_Rom_57C8C7) > 0x7
	.error "gText_Rom_57C8C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8C7) < 0x7
	.space 0x7 - (. - gText_Rom_57C8C7)
	.endif

	@ src/data/region_map/region_map_entries.h:413 region_map_entries_line_413
	.globl gText_Rom_57C8CE
gText_Rom_57C8CE: @ 0x0857C8CE
	.string "サファリゾーン{EOS}"
	.if (. - gText_Rom_57C8CE) > 0x8
	.error "gText_Rom_57C8CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8CE) < 0x8
	.space 0x8 - (. - gText_Rom_57C8CE)
	.endif

	@ src/data/info_viewer.h:25 sInfoText_TitleFrontierRules (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sInfoText_TitleFrontierRules
sInfoText_TitleFrontierRules: @ 0x0857C8D6
	.string "バトルフロンティア{EOS}"
	.if (. - sInfoText_TitleFrontierRules) != 0xa
	.error "sInfoText_TitleFrontierRules must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:427 region_map_entries_line_427
	.globl gText_Rom_57C8E0
gText_Rom_57C8E0: @ 0x0857C8E0
	.string "トウカのもり{EOS}"
	.if (. - gText_Rom_57C8E0) > 0x7
	.error "gText_Rom_57C8E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8E0) < 0x7
	.space 0x7 - (. - gText_Rom_57C8E0)
	.endif

	@ src/data/region_map/region_map_entries.h:434 region_map_entries_line_434
	.globl gText_Rom_57C8E7
gText_Rom_57C8E7: @ 0x0857C8E7
	.string "カナシダトンネル{EOS}"
	.if (. - gText_Rom_57C8E7) > 0x9
	.error "gText_Rom_57C8E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8E7) < 0x9
	.space 0x9 - (. - gText_Rom_57C8E7)
	.endif

	@ src/data/region_map/region_map_entries.h:441 region_map_entries_line_441
	.globl gText_Rom_57C8F0
gText_Rom_57C8F0: @ 0x0857C8F0
	.string "すてられぶね{EOS}"
	.if (. - gText_Rom_57C8F0) > 0x7
	.error "gText_Rom_57C8F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8F0) < 0x7
	.space 0x7 - (. - gText_Rom_57C8F0)
	.endif

	@ src/data/region_map/region_map_entries.h:448 region_map_entries_line_448
	.globl gText_Rom_57C8F7
gText_Rom_57C8F7: @ 0x0857C8F7
	.string "ニューキンセツ{EOS}"
	.if (. - gText_Rom_57C8F7) > 0x8
	.error "gText_Rom_57C8F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8F7) < 0x8
	.space 0x8 - (. - gText_Rom_57C8F7)
	.endif

	@ src/data/region_map/region_map_entries.h:455 region_map_entries_line_455
	.globl gText_Rom_57C8FF
gText_Rom_57C8FF: @ 0x0857C8FF
	.string "りゅうせいのたき{EOS}"
	.if (. - gText_Rom_57C8FF) > 0x9
	.error "gText_Rom_57C8FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C8FF) < 0x9
	.space 0x9 - (. - gText_Rom_57C8FF)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_57C908
gText_Rom_57C908: @ 0x0857C908
	.string "おくりびやま{EOS}"
	.if (. - gText_Rom_57C908) > 0x7
	.error "gText_Rom_57C908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C908) < 0x7
	.space 0x7 - (. - gText_Rom_57C908)
	.endif
	@ analyzed canonical ROM range 0x0857C90F-0x0857C913
	.globl gText_Rom_57C90F
gText_Rom_57C90F: @ 0x0857C90F
	@ text fragment: "{AQUA}くだん　"
	.byte 0xFD, 0x08, 0x41, 0x2E, 0x00
	.globl gText_Rom_57C914
gText_Rom_57C914: @ 0x0857C914
	.string "アジト{EOS}"
	.if (. - gText_Rom_57C914) > 0x4
	.error "gText_Rom_57C914 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C914) < 0x4
	.space 0x4 - (. - gText_Rom_57C914)
	.endif

	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_57C918
gText_Rom_57C918: @ 0x0857C918
	.string "あさせのほらあな{EOS}"
	.if (. - gText_Rom_57C918) > 0x9
	.error "gText_Rom_57C918 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C918) < 0x9
	.space 0x9 - (. - gText_Rom_57C918)
	.endif

	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57C921
gText_Rom_57C921: @ 0x0857C921
	.string "かいていどうくつ{EOS}"
	.if (. - gText_Rom_57C921) != 0x9
	.error "gText_Rom_57C921 must retain its original byte length"
	.endif
	
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

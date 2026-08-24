	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl gText_Rom_598908
gText_Rom_598908: @ 0x08598908
	.string "おくりびやま{EOS}"
	.if (. - gText_Rom_598908) > 0x7
	.error "gText_Rom_598908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598908) < 0x7
	.space 0x7 - (. - gText_Rom_598908)
	.endif

	@ src/data/region_map/region_map_entries.h:483 region_map_entries_line_483
	.globl gText_Rom_59890F
gText_Rom_59890F: @ 0x0859890F
	.string "あさせのほらあな{EOS}"
	.if (. - gText_Rom_59890F) > 0x9
	.error "gText_Rom_59890F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59890F) < 0x9
	.space 0x9 - (. - gText_Rom_59890F)
	.endif

	@ src/data/region_map/region_map_entries.h:490 region_map_entries_line_490
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598918
gText_Rom_598918: @ 0x08598918
	.string "かいていどうくつ{EOS}"
	.if (. - gText_Rom_598918) != 0x9
	.error "gText_Rom_598918 must retain its original byte length"
	.endif

	@ src/data/region_map/region_map_entries.h:399 region_map_entries_line_399
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_598921
gText_Rom_598921: @ 0x08598921
	.string "いしのどうくつ{EOS}"
	.if (. - gText_Rom_598921) != 0x8
	.error "gText_Rom_598921 must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x598929, size=0xD
	.string "かいりゅう{EOS}"
	.string "マユミのいえ{EOS}"

	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_598936
gText_Rom_598936: @ 0x08598936
	.string "ほのおのぬけみち{EOS}"
	.if (. - gText_Rom_598936) > 0x9
	.error "gText_Rom_598936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598936) < 0x9
	.space 0x9 - (. - gText_Rom_598936)
	.endif

	@ src/data/region_map/region_map_entries.h:546 region_map_entries_line_546
	.globl gText_Rom_59893F
gText_Rom_59893F: @ 0x0859893F
	.string "デコボコさんどう{EOS}"
	.if (. - gText_Rom_59893F) > 0x9
	.error "gText_Rom_59893F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_59893F) < 0x9
	.space 0x9 - (. - gText_Rom_59893F)
	.endif

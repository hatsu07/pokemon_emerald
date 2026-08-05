	@ src/data/region_map/region_map_entries.h:532 region_map_entries_line_532
	.globl gText_Rom_598936
gText_Rom_598936: @ 0x08598936
	.string "ほのおのぬけみち$"
	.if (. - gText_Rom_598936) > 0x9
	.error "gText_Rom_598936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_598936) < 0x9
	.space 0x9 - (. - gText_Rom_598936)
	.endif

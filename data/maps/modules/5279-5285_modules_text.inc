	@ src/data/region_map/region_map_entries.h:525 region_map_entries_line_525 (+1 aliases)
	.globl sScriptMenuText_SouthernIsland
sScriptMenuText_SouthernIsland: @ 0x085CADF1
	.string "みなみのことう{EOS}"
	.if (. - sScriptMenuText_SouthernIsland) > 0x8
	.error "sScriptMenuText_SouthernIsland may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_SouthernIsland) < 0x8
	.space 0x8 - (. - sScriptMenuText_SouthernIsland)
	.endif

	@ src/data/region_map/region_map_entries.h:1386 region_map_entries_line_1386 (+1 aliases)
	.globl sScriptMenuText_BirthIsland
sScriptMenuText_BirthIsland: @ 0x085CADF9
	.string "たんじょうのしま{EOS}"
	.if (. - sScriptMenuText_BirthIsland) > 0x9
	.error "sScriptMenuText_BirthIsland may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_BirthIsland) < 0x9
	.space 0x9 - (. - sScriptMenuText_BirthIsland)
	.endif

	@ src/data/region_map/region_map_entries.h:1393 region_map_entries_line_1393 (+1 aliases)
	.globl sScriptMenuText_FarawayIsland
sScriptMenuText_FarawayIsland: @ 0x085CAE02
	.string "さいはてのことう{EOS}"
	.if (. - sScriptMenuText_FarawayIsland) > 0x9
	.error "sScriptMenuText_FarawayIsland may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_FarawayIsland) < 0x9
	.space 0x9 - (. - sScriptMenuText_FarawayIsland)
	.endif

	@ src/data/region_map/region_map_entries.h:1463 region_map_entries_line_1463 (+1 aliases)
	.globl sScriptMenuText_NavelRock
sScriptMenuText_NavelRock: @ 0x085CAE0B
	.string "へそのいわ{EOS}"
	.if (. - sScriptMenuText_NavelRock) > 0x6
	.error "sScriptMenuText_NavelRock may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_NavelRock) < 0x6
	.space 0x6 - (. - sScriptMenuText_NavelRock)
	.endif
	@ analyzed canonical ROM range 0x085CAE11-0x085CAE34
.Lbatch83_text_start_gText_Rom_5CAE11: @ 0x085CAE11
	.byte 0x62, 0x72, 0x19, 0x06, 0x0E, 0x07, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE18: @ 0x085CAE18
	.byte 0x18, 0x50, 0x0A, 0x19, 0x06, 0x0E, 0x07, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE20: @ 0x085CAE20
	.byte 0x02, 0x02, 0x04, 0x00, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE25: @ 0x085CAE25
	.byte 0x0A, 0x2A, 0x06, 0x27, 0x0C, 0x36, 0x03, 0x48, 0x41, 0xAB, 0xFF
.Lbatch83_text_start_gText_Rom_5CAE30: @ 0x085CAE30
	.byte 0x0C, 0x36, 0x03, 0x48, 0x16

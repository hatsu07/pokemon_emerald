
	@ src/strings.c:531 gText_ExchangeService
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ExchangeService
gText_ExchangeService: @ 0x085CB184
	.string "ひきかえサービス{EOS}"
	.if (. - gText_ExchangeService) != 0x9
	.error "gText_ExchangeService must retain its original byte length"
	.endif
	.globl gText_Rom_5CB188
	.set gText_Rom_5CB188, gText_ExchangeService + 0x4

	@ src/data/region_map/region_map_entries.h:98 region_map_entries_line_98 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_LilycoveCity
sScriptMenuText_LilycoveCity: @ 0x085CB18D
	.string "ミナモシティ{EOS}"
	.if (. - sScriptMenuText_LilycoveCity) != 0x7
	.error "sScriptMenuText_LilycoveCity must retain its original byte length"
	.endif
	.globl gText_Rom_5CB190
	.set gText_Rom_5CB190, sScriptMenuText_LilycoveCity + 0x3

	@ src/data/region_map/region_map_entries.h:70 region_map_entries_line_70 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sScriptMenuText_SlateportCity
sScriptMenuText_SlateportCity: @ 0x085CB194
	.string "カイナシティ{EOS}"
	.if (. - sScriptMenuText_SlateportCity) != 0x7
	.error "sScriptMenuText_SlateportCity must retain its original byte length"
	.endif
	.globl gText_Rom_5CB197
	.set gText_Rom_5CB197, sScriptMenuText_SlateportCity + 0x3

	@ src/data/region_map/region_map_entries.h:518 region_map_entries_line_518 (+1 aliases)
	.globl sScriptMenuText_CaveOfOrigin
sScriptMenuText_CaveOfOrigin: @ 0x085CB19B
	.string "めざめのほこら{EOS}"
	.if (. - sScriptMenuText_CaveOfOrigin) > 0x8
	.error "sScriptMenuText_CaveOfOrigin may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_CaveOfOrigin) < 0x8
	.space 0x8 - (. - sScriptMenuText_CaveOfOrigin)
	.endif

	@ src/data/region_map/region_map_entries.h:469 region_map_entries_line_469 (+1 aliases)
	.globl sScriptMenuText_MtPyre
sScriptMenuText_MtPyre: @ 0x085CB1A3
	.string "おくりびやま{EOS}"
	.if (. - sScriptMenuText_MtPyre) > 0x7
	.error "sScriptMenuText_MtPyre may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MtPyre) < 0x7
	.space 0x7 - (. - sScriptMenuText_MtPyre)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl sScriptMenuText_SkyPillar
sScriptMenuText_SkyPillar: @ 0x085CB1AA
	.string "そらのはしら{EOS}"
	.if (. - sScriptMenuText_SkyPillar) > 0x7
	.error "sScriptMenuText_SkyPillar may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_SkyPillar) < 0x7
	.space 0x7 - (. - sScriptMenuText_SkyPillar)
	.endif


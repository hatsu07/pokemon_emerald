	@ src/data/region_map/region_map_entries.h:574 region_map_entries_line_574
	.globl gText_Rom_57C967
gText_Rom_57C967: @ 0x0857C967
	.string "ひでりのいわと{EOS}"
	.if (. - gText_Rom_57C967) > 0x8
	.error "gText_Rom_57C967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C967) < 0x8
	.space 0x8 - (. - gText_Rom_57C967)
	.endif

	@ src/data/region_map/region_map_entries.h:581 region_map_entries_line_581
	.globl gText_Rom_57C96F
gText_Rom_57C96F: @ 0x0857C96F
	.string "こじまのよこあな{EOS}"
	.if (. - gText_Rom_57C96F) > 0x9
	.error "gText_Rom_57C96F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C96F) < 0x9
	.space 0x9 - (. - gText_Rom_57C96F)
	.endif

	@ src/data/region_map/region_map_entries.h:588 region_map_entries_line_588
	.globl gText_Rom_57C978
gText_Rom_57C978: @ 0x0857C978
	.string "さばくいせき{EOS}"
	.if (. - gText_Rom_57C978) > 0x7
	.error "gText_Rom_57C978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C978) < 0x7
	.space 0x7 - (. - gText_Rom_57C978)
	.endif

	@ src/data/region_map/region_map_entries.h:595 region_map_entries_line_595
	.globl gText_Rom_57C97F
gText_Rom_57C97F: @ 0x0857C97F
	.string "こだいづか{EOS}"
	.if (. - gText_Rom_57C97F) > 0x6
	.error "gText_Rom_57C97F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C97F) < 0x6
	.space 0x6 - (. - gText_Rom_57C97F)
	.endif

	@ src/data/region_map/region_map_entries.h:602 region_map_entries_line_602
	.globl gText_Rom_57C985
gText_Rom_57C985: @ 0x0857C985
	.string "トラックのなか{EOS}"
	.if (. - gText_Rom_57C985) > 0x8
	.error "gText_Rom_57C985 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C985) < 0x8
	.space 0x8 - (. - gText_Rom_57C985)
	.endif

	@ src/data/region_map/region_map_entries.h:609 region_map_entries_line_609 (+1 aliases)
	.globl gText_Rom_57C98D
gText_Rom_57C98D: @ 0x0857C98D
	.string "そらのはしら{EOS}"
	.if (. - gText_Rom_57C98D) > 0x7
	.error "gText_Rom_57C98D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C98D) < 0x7
	.space 0x7 - (. - gText_Rom_57C98D)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:17 gEasyChatWord_SecretBase (+3 aliases)
	.globl gText_Rom_57C994
gText_Rom_57C994: @ 0x0857C994
	.string "ひみつきち{EOS}"
	.if (. - gText_Rom_57C994) > 0x6
	.error "gText_Rom_57C994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57C994) < 0x6
	.space 0x6 - (. - gText_Rom_57C994)
	.endif
	@ analyzed canonical ROM range 0x0857C99A-0x0857C9A8
	.globl gText_Rom_57C99A
gText_Rom_57C99A: @ 0x0857C99A
	@ text fragments: "とくしゅ$", "マサラタウン$", "トキワ"
	.byte 0x14, 0x08, 0x0C, 0x35, 0xFF, 0x6F, 0x5B, 0x77, 0x60, 0x53, 0x7E, 0xFF, 0x64, 0x57, 0x7C

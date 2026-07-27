@------------------------------------------------------------------------------
@ Pokemon type names
@ ROM: 0x082EBC88 - 0x082EBCE3
@------------------------------------------------------------------------------

	.globl gUnknown_82EBC88
gUnknown_82EBC88: @ 0x082EBC88

	@ src/data/easy_chat/easy_chat_group_events.h:11 gEasyChatWord_Evolution (+4 aliases)
	.globl gText_Rom_2EBC88
gText_Rom_2EBC88: @ 0x082EBC88
	.string "ノーマル$"
	.if (. - gText_Rom_2EBC88) > 0x5
	.error "gText_Rom_2EBC88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC88) < 0x5
	.space 0x5 - (. - gText_Rom_2EBC88)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:100 easy_chat_group_status_line_100 (+1 aliases)
	.globl gText_Rom_2EBC8D
gText_Rom_2EBC8D: @ 0x082EBC8D
	.string "かくとう$"
	.if (. - gText_Rom_2EBC8D) > 0x5
	.error "gText_Rom_2EBC8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC8D) < 0x5
	.space 0x5 - (. - gText_Rom_2EBC8D)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:454 easy_chat_group_status_line_454 (+2 aliases)
	.globl gText_Rom_2EBC92
gText_Rom_2EBC92: @ 0x082EBC92
	.string "ひこう$"
	.if (. - gText_Rom_2EBC92) > 0x4
	.error "gText_Rom_2EBC92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC92) < 0x4
	.space 0x4 - (. - gText_Rom_2EBC92)
	.endif
	.incbin "baserom.gba", 0x2ebc96, 0x6

	@ src/data/easy_chat/easy_chat_group_status.h:232 easy_chat_group_status_line_232 (+1 aliases)
	.globl gText_Rom_2EBC9C
gText_Rom_2EBC9C: @ 0x082EBC9C
	.string "じめん$"
	.if (. - gText_Rom_2EBC9C) > 0x4
	.error "gText_Rom_2EBC9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBC9C) < 0x4
	.space 0x4 - (. - gText_Rom_2EBC9C)
	.endif
	.incbin "baserom.gba", 0x2ebca0, 0xb

	@ src/data/easy_chat/easy_chat_group_status.h:190 easy_chat_group_status_line_190 (+3 aliases)
	.globl gText_Rom_2EBCAB
gText_Rom_2EBCAB: @ 0x082EBCAB
	.string "ゴースト$"
	.if (. - gText_Rom_2EBCAB) > 0x5
	.error "gText_Rom_2EBCAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCAB) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCAB)
	.endif

	@ src/data/easy_chat/easy_chat_group_status.h:424 easy_chat_group_status_line_424 (+1 aliases)
	.globl gText_Rom_2EBCB0
gText_Rom_2EBCB0: @ 0x082EBCB0
	.string "はがね$"
	.if (. - gText_Rom_2EBCB0) > 0x4
	.error "gText_Rom_2EBCB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCB0) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCB0)
	.endif
	.incbin "baserom.gba", 0x2ebcb4, 0x6

	@ src/data/easy_chat/easy_chat_group_status.h:544 easy_chat_group_status_line_544 (+1 aliases)
	.globl gText_Rom_2EBCBA
gText_Rom_2EBCBA: @ 0x082EBCBA
	.string "ほのお$"
	.if (. - gText_Rom_2EBCBA) > 0x4
	.error "gText_Rom_2EBCBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCBA) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCBA)
	.endif
	.incbin "baserom.gba", 0x2ebcbe, 0xb

	@ src/data/easy_chat/easy_chat_group_status.h:346 easy_chat_group_status_line_346 (+1 aliases)
	.globl gText_Rom_2EBCC9
gText_Rom_2EBCC9: @ 0x082EBCC9
	.string "でんき$"
	.if (. - gText_Rom_2EBCC9) > 0x4
	.error "gText_Rom_2EBCC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCC9) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCC9)
	.endif
	.incbin "baserom.gba", 0x2ebccd, 0x1

	@ src/data/easy_chat/easy_chat_group_status.h:88 easy_chat_group_status_line_88 (+1 aliases)
	.globl gText_Rom_2EBCCE
gText_Rom_2EBCCE: @ 0x082EBCCE
	.string "エスパー$"
	.if (. - gText_Rom_2EBCCE) > 0x5
	.error "gText_Rom_2EBCCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCCE) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCCE)
	.endif

@ src/battle_debug.c:349 battle_debug_line_349 (+5 aliases)
	.globl gText_Rom_2EBCD3
gText_Rom_2EBCD3: @ 0x082EBCD3
	.string "こおり$"
	.if (. - gText_Rom_2EBCD3) > 0x4
	.error "gText_Rom_2EBCD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCD3) < 0x4
	.space 0x4 - (. - gText_Rom_2EBCD3)
	.endif
	.incbin "baserom.gba", 0x2ebcd7, 0x1

	@ src/data/easy_chat/easy_chat_group_status.h:376 easy_chat_group_status_line_376 (+2 aliases)
	.globl gText_Rom_2EBCD8
gText_Rom_2EBCD8: @ 0x082EBCD8
	.string "ドラゴン$"
	.if (. - gText_Rom_2EBCD8) > 0x5
	.error "gText_Rom_2EBCD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EBCD8) < 0x5
	.space 0x5 - (. - gText_Rom_2EBCD8)
	.endif
	.incbin "baserom.gba", 0x2ebcdd, 0x7

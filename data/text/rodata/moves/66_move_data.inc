	@ src/data/moves_info.h:8635 moves_info_line_8635
	.globl gText_Rom_2EB79C
gText_Rom_2EB79C: @ 0x082EB79C
	.string "めいそう$"
	.if (. - gText_Rom_2EB79C) > 0x5
	.error "gText_Rom_2EB79C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB79C) < 0x5
	.space 0x5 - (. - gText_Rom_2EB79C)
	.endif
	.incbin "baserom.gba", 0x2eb7a1, 0x3

	@ src/data/moves_info.h:8664 moves_info_line_8664
	.globl gText_Rom_2EB7A4
gText_Rom_2EB7A4: @ 0x082EB7A4
	.string "リーフブレード$"
	.if (. - gText_Rom_2EB7A4) > 0x8
	.error "gText_Rom_2EB7A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7A4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7A4)
	.endif

	@ src/data/moves_info.h:8687 moves_info_line_8687
	.globl gText_Rom_2EB7AC
gText_Rom_2EB7AC: @ 0x082EB7AC
	.string "りゅうのまい$"
	.if (. - gText_Rom_2EB7AC) > 0x7
	.error "gText_Rom_2EB7AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7AC) < 0x7
	.space 0x7 - (. - gText_Rom_2EB7AC)
	.endif
	.incbin "baserom.gba", 0x2eb7b3, 0x1

	@ src/data/moves_info.h:8717 moves_info_line_8717
	.globl gText_Rom_2EB7B4
gText_Rom_2EB7B4: @ 0x082EB7B4
	.string "ロックブラスト$"
	.if (. - gText_Rom_2EB7B4) > 0x8
	.error "gText_Rom_2EB7B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7B4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7B4)
	.endif

	@ src/data/moves_info.h:8738 moves_info_line_8738
	.globl gText_Rom_2EB7BC
gText_Rom_2EB7BC: @ 0x082EB7BC
	.string "でんげきは$"
	.if (. - gText_Rom_2EB7BC) > 0x6
	.error "gText_Rom_2EB7BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7BC) < 0x6
	.space 0x6 - (. - gText_Rom_2EB7BC)
	.endif
	.incbin "baserom.gba", 0x2eb7c2, 0x2

	@ src/data/moves_info.h:8758 moves_info_line_8758
	.globl gText_Rom_2EB7C4
gText_Rom_2EB7C4: @ 0x082EB7C4
	.string "みずのはどう$"
	.if (. - gText_Rom_2EB7C4) > 0x7
	.error "gText_Rom_2EB7C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7C4) < 0x7
	.space 0x7 - (. - gText_Rom_2EB7C4)
	.endif
	.incbin "baserom.gba", 0x2eb7cb, 0x1

	@ src/data/moves_info.h:8783 moves_info_line_8783
	.globl gText_Rom_2EB7CC
gText_Rom_2EB7CC: @ 0x082EB7CC
	.string "はめつのねがい$"
	.if (. - gText_Rom_2EB7CC) > 0x8
	.error "gText_Rom_2EB7CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7CC) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7CC)
	.endif

	@ src/data/moves_info.h:8805 moves_info_line_8805
	.globl gText_Rom_2EB7D4
gText_Rom_2EB7D4: @ 0x082EB7D4
	.string "サイコブースト$"
	.if (. - gText_Rom_2EB7D4) > 0x8
	.error "gText_Rom_2EB7D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2EB7D4) < 0x8
	.space 0x8 - (. - gText_Rom_2EB7D4)
	.endif
	.incbin "baserom.gba", 0x2eb7dc, 0x4c
	.globl gUnknown_82EB828
gUnknown_82EB828: @ 0x082EB828
	.incbin "baserom.gba", 0x2eb828, 0x18
	.globl gUnknown_82EB840
gUnknown_82EB840: @ 0x082EB840
	.incbin "baserom.gba", 0x2eb840, 0x18
	.globl gUnknown_82EB858
gUnknown_82EB858: @ 0x082EB858
	.incbin "baserom.gba", 0x2eb858, 0x8
	.globl gUnknown_82EB860
gUnknown_82EB860: @ 0x082EB860
	.incbin "baserom.gba", 0x2eb860, 0x198
	.globl gUnknown_82EB9F8
gUnknown_82EB9F8: @ 0x082EB9F8
	.incbin "baserom.gba", 0x2eb9f8, 0x8
	.globl gUnknown_82EBA00
gUnknown_82EBA00: @ 0x082EBA00
	.incbin "baserom.gba", 0x2eba00, 0xc8
	.globl gUnknown_82EBAC8
gUnknown_82EBAC8: @ 0x082EBAC8
	.incbin "baserom.gba", 0x2ebac8, 0x18
	.globl gUnknown_82EBAE0
gUnknown_82EBAE0: @ 0x082EBAE0
	.incbin "baserom.gba", 0x2ebae0, 0x50
	.globl gUnknown_82EBB30
gUnknown_82EBB30: @ 0x082EBB30
	.incbin "baserom.gba", 0x2ebb30, 0x8
	.globl gUnknown_82EBB38
gUnknown_82EBB38: @ 0x082EBB38
	.incbin "baserom.gba", 0x2ebb38, 0x150
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


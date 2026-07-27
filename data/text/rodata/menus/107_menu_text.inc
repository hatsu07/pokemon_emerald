	@ src/data/script_menu.h:842 gText_OneIsland
	.globl gText_Rom_57CB66
gText_Rom_57CB66: @ 0x0857CB66
	.string "1のしま$"
	.if (. - gText_Rom_57CB66) > 0x5
	.error "gText_Rom_57CB66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB66) < 0x5
	.space 0x5 - (. - gText_Rom_57CB66)
	.endif

	@ src/data/script_menu.h:843 gText_TwoIsland
	.globl gText_Rom_57CB6B
gText_Rom_57CB6B: @ 0x0857CB6B
	.string "2のしま$"
	.if (. - gText_Rom_57CB6B) > 0x5
	.error "gText_Rom_57CB6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB6B) < 0x5
	.space 0x5 - (. - gText_Rom_57CB6B)
	.endif

	@ src/data/script_menu.h:844 gText_ThreeIsland
	.globl gText_Rom_57CB70
gText_Rom_57CB70: @ 0x0857CB70
	.string "3のしま$"
	.if (. - gText_Rom_57CB70) > 0x5
	.error "gText_Rom_57CB70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB70) < 0x5
	.space 0x5 - (. - gText_Rom_57CB70)
	.endif

	@ src/data/script_menu.h:1428 script_menu_line_1428
	.globl gText_Rom_57CB75
gText_Rom_57CB75: @ 0x0857CB75
	.string "4のしま$"
	.if (. - gText_Rom_57CB75) > 0x5
	.error "gText_Rom_57CB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB75) < 0x5
	.space 0x5 - (. - gText_Rom_57CB75)
	.endif

	@ src/data/script_menu.h:1429 script_menu_line_1429
	.globl gText_Rom_57CB7A
gText_Rom_57CB7A: @ 0x0857CB7A
	.string "5のしま$"
	.if (. - gText_Rom_57CB7A) > 0x5
	.error "gText_Rom_57CB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7A) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7A)
	.endif

	@ src/data/script_menu.h:1431 script_menu_line_1431
	.globl gText_Rom_57CB7F
gText_Rom_57CB7F: @ 0x0857CB7F
	.string "7のしま$"
	.if (. - gText_Rom_57CB7F) > 0x5
	.error "gText_Rom_57CB7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7F) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7F)
	.endif

	@ src/data/script_menu.h:1430 script_menu_line_1430
	.globl gText_Rom_57CB84
gText_Rom_57CB84: @ 0x0857CB84
	.string "6のしま$"
	.if (. - gText_Rom_57CB84) > 0x5
	.error "gText_Rom_57CB84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB84) < 0x5
	.space 0x5 - (. - gText_Rom_57CB84)
	.endif
	.incbin "baserom.gba", 0x57cb89, 0x90

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC19
gText_Rom_57CC19: @ 0x0857CC19
	.string "タワー$"
	.if (. - gText_Rom_57CC19) > 0x4
	.error "gText_Rom_57CC19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC19) < 0x4
	.space 0x4 - (. - gText_Rom_57CC19)
	.endif
	.incbin "baserom.gba", 0x57cc1d, 0x38


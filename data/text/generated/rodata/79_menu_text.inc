	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Rom_4E8B72
gText_Rom_4E8B72: @ 0x084E8B72
	.string "せってい$"
	.if (. - gText_Rom_4E8B72) > 0x5
	.error "gText_Rom_4E8B72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B72) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B72)
	.endif

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_4E8B77
gText_Rom_4E8B77: @ 0x084E8B77
	.string "とじる$"
	.if (. - gText_Rom_4E8B77) > 0x4
	.error "gText_Rom_4E8B77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B77) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B77)
	.endif

	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Rom_4E8B7B
gText_Rom_4E8B7B: @ 0x084E8B7B
	.string "リタイア$"
	.if (. - gText_Rom_4E8B7B) > 0x5
	.error "gText_Rom_4E8B7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B7B) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B7B)
	.endif

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rom_4E8B80
gText_Rom_4E8B80: @ 0x084E8B80
	.string "やすむ$"
	.if (. - gText_Rom_4E8B80) > 0x4
	.error "gText_Rom_4E8B80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B80) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B80)
	.endif
	.globl gUnknown_84E8B84
gUnknown_84E8B84: @ 0x084E8B84

	@ src/strings.c:950 gText_SafariBallStock
	.globl gText_Rom_4E8B84
gText_Rom_4E8B84: @ 0x084E8B84
	.string "サファリボール\nのこり {STR_VAR_1}コ$"
	.if (. - gText_Rom_4E8B84) > 0x10
	.error "gText_Rom_4E8B84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B84) < 0x10
	.space 0x10 - (. - gText_Rom_4E8B84)
	.endif
	.globl gUnknown_84E8B94
gUnknown_84E8B94: @ 0x084E8B94
	.incbin "baserom.gba", 0x4e8b94, 0x8
	.globl gUnknown_84E8B9C
gUnknown_84E8B9C: @ 0x084E8B9C

	@ src/strings.c:952 gText_BattlePyramidFloor
	.globl gText_Rom_4E8B9C
gText_Rom_4E8B9C: @ 0x084E8B9C
	.string "バトルピラミッド\n{STR_VAR_1}$"
	.if (. - gText_Rom_4E8B9C) > 0xc
	.error "gText_Rom_4E8B9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B9C) < 0xc
	.space 0xc - (. - gText_Rom_4E8B9C)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BA8
gText_Rom_4E8BA8: @ 0x084E8BA8
	.string "げんざい　1だんめ$"
	.if (. - gText_Rom_4E8BA8) > 0xa
	.error "gText_Rom_4E8BA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BA8) < 0xa
	.space 0xa - (. - gText_Rom_4E8BA8)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BB2
gText_Rom_4E8BB2: @ 0x084E8BB2
	.string "げんざい　2だんめ$"
	.if (. - gText_Rom_4E8BB2) > 0xa
	.error "gText_Rom_4E8BB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BB2) < 0xa
	.space 0xa - (. - gText_Rom_4E8BB2)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BBC
gText_Rom_4E8BBC: @ 0x084E8BBC
	.string "げんざい　3だんめ$"
	.if (. - gText_Rom_4E8BBC) > 0xa
	.error "gText_Rom_4E8BBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BBC) < 0xa
	.space 0xa - (. - gText_Rom_4E8BBC)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BC6
gText_Rom_4E8BC6: @ 0x084E8BC6
	.string "げんざい　4だんめ$"
	.if (. - gText_Rom_4E8BC6) > 0xa
	.error "gText_Rom_4E8BC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BC6) < 0xa
	.space 0xa - (. - gText_Rom_4E8BC6)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BD0
gText_Rom_4E8BD0: @ 0x084E8BD0
	.string "げんざい　5だんめ$"
	.if (. - gText_Rom_4E8BD0) > 0xa
	.error "gText_Rom_4E8BD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BD0) < 0xa
	.space 0xa - (. - gText_Rom_4E8BD0)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BDA
gText_Rom_4E8BDA: @ 0x084E8BDA
	.string "げんざい　6だんめ$"
	.if (. - gText_Rom_4E8BDA) > 0xa
	.error "gText_Rom_4E8BDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BDA) < 0xa
	.space 0xa - (. - gText_Rom_4E8BDA)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BE4
gText_Rom_4E8BE4: @ 0x084E8BE4
	.string "げんざい　7だんめ$"
	.if (. - gText_Rom_4E8BE4) > 0xa
	.error "gText_Rom_4E8BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BE4) < 0xa
	.space 0xa - (. - gText_Rom_4E8BE4)
	.endif

	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BEE
gText_Rom_4E8BEE: @ 0x084E8BEE
	.string "げんざい　ちょうじょう$"
	.if (. - gText_Rom_4E8BEE) > 0xc
	.error "gText_Rom_4E8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BEE) < 0xc
	.space 0xc - (. - gText_Rom_4E8BEE)
	.endif
	.incbin "baserom.gba", 0x4e8bfa, 0x2
	.globl gUnknown_84E8BFC
gUnknown_84E8BFC: @ 0x084E8BFC
	.incbin "baserom.gba", 0x4e8bfc, 0x20
	.globl gUnknown_84E8C1C
gUnknown_84E8C1C: @ 0x084E8C1C
	.incbin "baserom.gba", 0x4e8c1c, 0x8
	.globl gUnknown_84E8C24
gUnknown_84E8C24: @ 0x084E8C24
	.incbin "baserom.gba", 0x4e8c24, 0x8
	.globl gUnknown_84E8C2C
gUnknown_84E8C2C: @ 0x084E8C2C
	.incbin "baserom.gba", 0x4e8c2c, 0x68
	.globl gUnknown_84E8C94
gUnknown_84E8C94: @ 0x084E8C94
	.incbin "baserom.gba", 0x4e8c94, 0x4
	.globl gUnknown_84E8C98
gUnknown_84E8C98: @ 0x084E8C98
	.incbin "baserom.gba", 0x4e8c98, 0x10
	.globl gUnknown_84E8CA8
gUnknown_84E8CA8: @ 0x084E8CA8
	.incbin "baserom.gba", 0x4e8ca8, 0x8
	.globl gUnknown_84E8CB0
gUnknown_84E8CB0: @ 0x084E8CB0

	@ src/main_menu.c:274 gText_ContinueMenuPlayer (+2 aliases)
	.globl gText_Rom_4E8CB0
gText_Rom_4E8CB0: @ 0x084E8CB0
	.string "しゅじんこう$"
	.if (. - gText_Rom_4E8CB0) > 0x7
	.error "gText_Rom_4E8CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB0) < 0x7
	.space 0x7 - (. - gText_Rom_4E8CB0)
	.endif
	.globl gUnknown_84E8CB7
gUnknown_84E8CB7: @ 0x084E8CB7

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_Rom_4E8CB7
gText_Rom_4E8CB7: @ 0x084E8CB7
	.string "もっているバッジ$"
	.if (. - gText_Rom_4E8CB7) > 0x9
	.error "gText_Rom_4E8CB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8CB7) < 0x9
	.space 0x9 - (. - gText_Rom_4E8CB7)
	.endif
	.globl gUnknown_84E8CC0
gUnknown_84E8CC0: @ 0x084E8CC0


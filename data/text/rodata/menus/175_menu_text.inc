	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8DEC
gText_Rom_5C8DEC: @ 0x085C8DEC
	.string "プレイじかん$"
	.if (. - gText_Rom_5C8DEC) != 0x7
	.error "gText_Rom_5C8DEC must retain its original byte length"
	.endif
	.globl gText_Rom_5C8DEF
	.set gText_Rom_5C8DEF, gText_Rom_5C8DEC + 0x3

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_Rom_5C8DF3
gText_Rom_5C8DF3: @ 0x085C8DF3
	.string "もっているバッジ$"
	.if (. - gText_Rom_5C8DF3) > 0x9
	.error "gText_Rom_5C8DF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DF3) < 0x9
	.space 0x9 - (. - gText_Rom_5C8DF3)
	.endif

	@ src/strings.c:29 gText_AButton
	.globl gText_Rom_5C8DFC
gText_Rom_5C8DFC: @ 0x085C8DFC
	.string "エーボタン$"
	.if (. - gText_Rom_5C8DFC) > 0x6
	.error "gText_Rom_5C8DFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8DFC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8DFC)
	.endif

	@ src/strings.c:30 gText_BButton
	.globl gText_Rom_5C8E02
gText_Rom_5C8E02: @ 0x085C8E02
	.string "ビーボタン$"
	.if (. - gText_Rom_5C8E02) > 0x6
	.error "gText_Rom_5C8E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E02) < 0x6
	.space 0x6 - (. - gText_Rom_5C8E02)
	.endif

	@ src/strings.c:31 gText_RButton
	.globl gText_Rom_5C8E08
gText_Rom_5C8E08: @ 0x085C8E08
	.string "アールボタン$"
	.if (. - gText_Rom_5C8E08) > 0x7
	.error "gText_Rom_5C8E08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E08) < 0x7
	.space 0x7 - (. - gText_Rom_5C8E08)
	.endif

	@ src/strings.c:32 gText_LButton
	.globl gText_Rom_5C8E0F
gText_Rom_5C8E0F: @ 0x085C8E0F
	.string "エルボタン$"
	.if (. - gText_Rom_5C8E0F) > 0x6
	.error "gText_Rom_5C8E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E0F) < 0x6
	.space 0x6 - (. - gText_Rom_5C8E0F)
	.endif

	@ src/strings.c:33 gText_Start
	.globl gText_Rom_5C8E15
gText_Rom_5C8E15: @ 0x085C8E15
	.string "スタートボタン$"
	.if (. - gText_Rom_5C8E15) > 0x8
	.error "gText_Rom_5C8E15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E15) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E15)
	.endif

	@ src/strings.c:34 gText_Select
	.globl gText_Rom_5C8E1D
gText_Rom_5C8E1D: @ 0x085C8E1D
	.string "セレクトボタン$"
	.if (. - gText_Rom_5C8E1D) > 0x8
	.error "gText_Rom_5C8E1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E1D) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E1D)
	.endif

	@ src/strings.c:35 gText_ControlPad
	.globl gText_Rom_5C8E25
gText_Rom_5C8E25: @ 0x085C8E25
	.string "じゅうじボタン$"
	.if (. - gText_Rom_5C8E25) > 0x8
	.error "gText_Rom_5C8E25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E25) < 0x8
	.space 0x8 - (. - gText_Rom_5C8E25)
	.endif

	@ src/strings.c:36 gText_LButtonRButton
	.globl gText_Rom_5C8E2D
gText_Rom_5C8E2D: @ 0x085C8E2D
	.string "Lボタン Rボタン$"
	.if (. - gText_Rom_5C8E2D) > 0xa
	.error "gText_Rom_5C8E2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E2D) < 0xa
	.space 0xa - (. - gText_Rom_5C8E2D)
	.endif

	@ src/strings.c:37 gText_Controls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E37
gText_Rom_5C8E37: @ 0x085C8E37
	.string " そうさ せつめい$"
	.if (. - gText_Rom_5C8E37) != 0xa
	.error "gText_Rom_5C8E37 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E3C
	.set gText_Rom_5C8E3C, gText_Rom_5C8E37 + 0x5
	.incbin "baserom.gba", 0x5c8e41, 0xb

	@ src/strings.c:134 gMenuText_Confirm (+2 aliases)
	.globl gText_Rom_5C8E4C
gText_Rom_5C8E4C: @ 0x085C8E4C
	.string "けってい$"
	.if (. - gText_Rom_5C8E4C) > 0x5
	.error "gText_Rom_5C8E4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E4C) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E4C)
	.endif
	.space 0x3, 0x00

	@ src/strings.c:39 gText_Next
	.globl gText_Rom_5C8E54
gText_Rom_5C8E54: @ 0x085C8E54
	.string "{A_BUTTON}つぎ$"
	.if (. - gText_Rom_5C8E54) > 0x5
	.error "gText_Rom_5C8E54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E54) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E54)
	.endif
	.space 0x3, 0x00

	@ src/strings.c:40 gText_NextBack
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E5C
gText_Rom_5C8E5C: @ 0x085C8E5C
	.string "{A_BUTTON}つぎ {B_BUTTON}もどる$"
	.if (. - gText_Rom_5C8E5C) != 0xb
	.error "gText_Rom_5C8E5C must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E63
	.set gText_Rom_5C8E63, gText_Rom_5C8E5C + 0x7
	.space 0x1, 0x00
	.globl gUnknown_85C8E68
gUnknown_85C8E68: @ 0x085C8E68
	.incbin "baserom.gba", 0x5c8e68, 0xd

	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5C8E75
gText_Rom_5C8E75: @ 0x085C8E75
	.string "おわる$"
	.if (. - gText_Rom_5C8E75) > 0x4
	.error "gText_Rom_5C8E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E75) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E75)
	.endif
	.space 0x3, 0x00
	.globl gUnknown_85C8E7C
gUnknown_85C8E7C: @ 0x085C8E7C
	.incbin "baserom.gba", 0x5c8e7c, 0xa

	@ src/strings.c:1046 gText_Exit3 (+1 aliases)
	.globl gText_Rom_5C8E86
gText_Rom_5C8E86: @ 0x085C8E86
	.string "おわる$"
	.if (. - gText_Rom_5C8E86) > 0x4
	.error "gText_Rom_5C8E86 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E86) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E86)
	.endif
	.space 0x2, 0x00
	.globl gUnknown_85C8E8C
gUnknown_85C8E8C: @ 0x085C8E8C

	@ src/strings.c:43 gText_AButtonExit
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8E8C
gText_Rom_5C8E8C: @ 0x085C8E8C
	.string "{A_BUTTON}おわる$"
	.if (. - gText_Rom_5C8E8C) != 0x6
	.error "gText_Rom_5C8E8C must retain its original byte length"
	.endif
	.globl gText_Rom_5C8E8E
	.set gText_Rom_5C8E8E, gText_Rom_5C8E8C + 0x2

	@ src/data/script_menu.h:177 script_menu_line_177 (+1 aliases)
	.globl gText_Rom_5C8E92
gText_Rom_5C8E92: @ 0x085C8E92
	.string "おとこ$"
	.if (. - gText_Rom_5C8E92) > 0x4
	.error "gText_Rom_5C8E92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E92) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E92)
	.endif

	@ src/data/script_menu.h:178 script_menu_line_178 (+1 aliases)
	.globl gText_Rom_5C8E96
gText_Rom_5C8E96: @ 0x085C8E96
	.string "おんな$"
	.if (. - gText_Rom_5C8E96) > 0x4
	.error "gText_Rom_5C8E96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E96) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E96)
	.endif

	@ src/main_menu.c:481 main_menu_line_481
	.globl gText_Rom_5C8E9A
gText_Rom_5C8E9A: @ 0x085C8E9A
	.string "イツオ$"
	.if (. - gText_Rom_5C8E9A) > 0x4
	.error "gText_Rom_5C8E9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E9A) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E9A)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:482 main_menu_line_482
	.globl gText_Rom_5C8EA0
gText_Rom_5C8EA0: @ 0x085C8EA0
	.string "ギョク$"
	.if (. - gText_Rom_5C8EA0) > 0x4
	.error "gText_Rom_5C8EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EA0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EA0)
	.endif
	.incbin "baserom.gba", 0x5c8ea4, 0x8

	@ src/main_menu.c:484 main_menu_line_484
	.globl gText_Rom_5C8EAC
gText_Rom_5C8EAC: @ 0x085C8EAC
	.string "シュウサク$"
	.if (. - gText_Rom_5C8EAC) > 0x6
	.error "gText_Rom_5C8EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EAC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8EAC)
	.endif

	@ src/main_menu.c:485 main_menu_line_485
	.globl gText_Rom_5C8EB2
gText_Rom_5C8EB2: @ 0x085C8EB2
	.string "セイゴ$"
	.if (. - gText_Rom_5C8EB2) > 0x4
	.error "gText_Rom_5C8EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EB2) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EB2)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:486 main_menu_line_486
	.globl gText_Rom_5C8EB8
gText_Rom_5C8EB8: @ 0x085C8EB8
	.string "ダイサク$"
	.if (. - gText_Rom_5C8EB8) > 0x5
	.error "gText_Rom_5C8EB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EB8) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EB8)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:487 main_menu_line_487
	.globl gText_Rom_5C8EBE
gText_Rom_5C8EBE: @ 0x085C8EBE
	.string "タカヒト$"
	.if (. - gText_Rom_5C8EBE) > 0x5
	.error "gText_Rom_5C8EBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EBE) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EBE)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:488 main_menu_line_488
	.globl gText_Rom_5C8EC4
gText_Rom_5C8EC4: @ 0x085C8EC4
	.string "タツヤ$"
	.if (. - gText_Rom_5C8EC4) > 0x4
	.error "gText_Rom_5C8EC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EC4) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EC4)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:489 main_menu_line_489
	.globl gText_Rom_5C8ECA
gText_Rom_5C8ECA: @ 0x085C8ECA
	.string "ダニエル$"
	.if (. - gText_Rom_5C8ECA) > 0x5
	.error "gText_Rom_5C8ECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ECA) < 0x5
	.space 0x5 - (. - gText_Rom_5C8ECA)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:490 main_menu_line_490
	.globl gText_Rom_5C8ED0
gText_Rom_5C8ED0: @ 0x085C8ED0
	.string "テルキ$"
	.if (. - gText_Rom_5C8ED0) > 0x4
	.error "gText_Rom_5C8ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ED0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8ED0)
	.endif
	.incbin "baserom.gba", 0x5c8ed4, 0x8

	@ src/main_menu.c:492 main_menu_line_492
	.globl gText_Rom_5C8EDC
gText_Rom_5C8EDC: @ 0x085C8EDC
	.string "トモヤ$"
	.if (. - gText_Rom_5C8EDC) > 0x4
	.error "gText_Rom_5C8EDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EDC) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EDC)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:493 main_menu_line_493
	.globl gText_Rom_5C8EE2
gText_Rom_5C8EE2: @ 0x085C8EE2
	.string "ヒトシ$"
	.if (. - gText_Rom_5C8EE2) > 0x4
	.error "gText_Rom_5C8EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EE2) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EE2)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:494 main_menu_line_494
	.globl gText_Rom_5C8EE8
gText_Rom_5C8EE8: @ 0x085C8EE8
	.string "ヒロアキ$"
	.if (. - gText_Rom_5C8EE8) > 0x5
	.error "gText_Rom_5C8EE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EE8) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EE8)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:495 main_menu_line_495
	.globl gText_Rom_5C8EEE
gText_Rom_5C8EEE: @ 0x085C8EEE
	.string "ユキヒコ$"
	.if (. - gText_Rom_5C8EEE) > 0x5
	.error "gText_Rom_5C8EEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EEE) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EEE)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:496 main_menu_line_496
	.globl gText_Rom_5C8EF4
gText_Rom_5C8EF4: @ 0x085C8EF4
	.string "ラルド$"
	.if (. - gText_Rom_5C8EF4) > 0x4
	.error "gText_Rom_5C8EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EF4) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EF4)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:497 main_menu_line_497
	.globl gText_Rom_5C8EFA
gText_Rom_5C8EFA: @ 0x085C8EFA
	.string "リクヤ$"
	.if (. - gText_Rom_5C8EFA) > 0x4
	.error "gText_Rom_5C8EFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EFA) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EFA)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:498 main_menu_line_498
	.globl gText_Rom_5C8F00
gText_Rom_5C8F00: @ 0x085C8F00
	.string "リチャード$"
	.if (. - gText_Rom_5C8F00) > 0x6
	.error "gText_Rom_5C8F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F00) < 0x6
	.space 0x6 - (. - gText_Rom_5C8F00)
	.endif

	@ src/main_menu.c:499 main_menu_line_499
	.globl gText_Rom_5C8F06
gText_Rom_5C8F06: @ 0x085C8F06
	.string "リュウ$"
	.if (. - gText_Rom_5C8F06) > 0x4
	.error "gText_Rom_5C8F06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F06) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F06)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:500 main_menu_line_500
	.globl gText_Rom_5C8F0C
gText_Rom_5C8F0C: @ 0x085C8F0C
	.string "リョウタ$"
	.if (. - gText_Rom_5C8F0C) > 0x5
	.error "gText_Rom_5C8F0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F0C) < 0x5
	.space 0x5 - (. - gText_Rom_5C8F0C)
	.endif
	.space 0x1, 0xFF

	@ src/main_menu.c:504 main_menu_line_504
	.globl gText_Rom_5C8F12
gText_Rom_5C8F12: @ 0x085C8F12
	.string "アイコ$"
	.if (. - gText_Rom_5C8F12) > 0x4
	.error "gText_Rom_5C8F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F12) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F12)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:505 main_menu_line_505
	.globl gText_Rom_5C8F18
gText_Rom_5C8F18: @ 0x085C8F18
	.string "アヤナ$"
	.if (. - gText_Rom_5C8F18) > 0x4
	.error "gText_Rom_5C8F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F18) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F18)
	.endif
	.incbin "baserom.gba", 0x5c8f1c, 0x8

	@ src/main_menu.c:507 main_menu_line_507
	.globl gText_Rom_5C8F24
gText_Rom_5C8F24: @ 0x085C8F24
	.string "エミィ$"
	.if (. - gText_Rom_5C8F24) > 0x4
	.error "gText_Rom_5C8F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F24) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F24)
	.endif

	@ src/main_menu.c:508 main_menu_line_508
	.globl gText_Rom_5C8F28
gText_Rom_5C8F28: @ 0x085C8F28
	.string "カオリ$"
	.if (. - gText_Rom_5C8F28) > 0x4
	.error "gText_Rom_5C8F28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F28) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F28)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:509 main_menu_line_509
	.globl gText_Rom_5C8F2E
gText_Rom_5C8F2E: @ 0x085C8F2E
	.string "カレン$"
	.if (. - gText_Rom_5C8F2E) > 0x4
	.error "gText_Rom_5C8F2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F2E) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F2E)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:510 main_menu_line_510
	.globl gText_Rom_5C8F34
gText_Rom_5C8F34: @ 0x085C8F34
	.string "キョウコ$"
	.if (. - gText_Rom_5C8F34) > 0x5
	.error "gText_Rom_5C8F34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F34) < 0x5
	.space 0x5 - (. - gText_Rom_5C8F34)
	.endif
	.incbin "baserom.gba", 0x5c8f39, 0xd

	@ src/main_menu.c:513 main_menu_line_513
	.globl gText_Rom_5C8F46
gText_Rom_5C8F46: @ 0x085C8F46
	.string "ジュリ$"
	.if (. - gText_Rom_5C8F46) > 0x4
	.error "gText_Rom_5C8F46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F46) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F46)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:514 main_menu_line_514
	.globl gText_Rom_5C8F4C
gText_Rom_5C8F4C: @ 0x085C8F4C
	.string "チエミ$"
	.if (. - gText_Rom_5C8F4C) > 0x4
	.error "gText_Rom_5C8F4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F4C) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F4C)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:515 main_menu_line_515
	.globl gText_Rom_5C8F52
gText_Rom_5C8F52: @ 0x085C8F52
	.string "チヨコ$"
	.if (. - gText_Rom_5C8F52) > 0x4
	.error "gText_Rom_5C8F52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F52) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F52)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:516 main_menu_line_516
	.globl gText_Rom_5C8F58
gText_Rom_5C8F58: @ 0x085C8F58
	.string "テルコ$"
	.if (. - gText_Rom_5C8F58) > 0x4
	.error "gText_Rom_5C8F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F58) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F58)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:517 main_menu_line_517
	.globl gText_Rom_5C8F5E
gText_Rom_5C8F5E: @ 0x085C8F5E
	.string "ナナエ$"
	.if (. - gText_Rom_5C8F5E) > 0x4
	.error "gText_Rom_5C8F5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F5E) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F5E)
	.endif
	.incbin "baserom.gba", 0x5c8f62, 0x8

	@ src/main_menu.c:519 main_menu_line_519
	.globl gText_Rom_5C8F6A
gText_Rom_5C8F6A: @ 0x085C8F6A
	.string "マキコ$"
	.if (. - gText_Rom_5C8F6A) > 0x4
	.error "gText_Rom_5C8F6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F6A) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F6A)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:520 main_menu_line_520
	.globl gText_Rom_5C8F70
gText_Rom_5C8F70: @ 0x085C8F70
	.string "ミサコ$"
	.if (. - gText_Rom_5C8F70) > 0x4
	.error "gText_Rom_5C8F70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F70) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F70)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:521 main_menu_line_521
	.globl gText_Rom_5C8F76
gText_Rom_5C8F76: @ 0x085C8F76
	.string "ムツミ$"
	.if (. - gText_Rom_5C8F76) > 0x4
	.error "gText_Rom_5C8F76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F76) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F76)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:522 main_menu_line_522
	.globl gText_Rom_5C8F7C
gText_Rom_5C8F7C: @ 0x085C8F7C
	.string "モニカ$"
	.if (. - gText_Rom_5C8F7C) > 0x4
	.error "gText_Rom_5C8F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F7C) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F7C)
	.endif
	.space 0x2, 0xFF

	@ src/main_menu.c:523 main_menu_line_523
	.globl gText_Rom_5C8F82
gText_Rom_5C8F82: @ 0x085C8F82
	.string "ユウメ$"
	.if (. - gText_Rom_5C8F82) > 0x4
	.error "gText_Rom_5C8F82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F82) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F82)
	.endif
	.space 0x2, 0xFF
	.globl gUnknown_85C8F88
gUnknown_85C8F88: @ 0x085C8F88

	@ asm/main_menu.s:2379 Task_NewGameBirchSpeech_ThisIsAPokemon
	.globl gText_Rom_5C8F88
gText_Rom_5C8F88: @ 0x085C8F88
	.string "ポケットモンスター\n……すなわち　ポケモン{PAUSE}{0x60}\p$"
	.if (. - gText_Rom_5C8F88) > 0x1a
	.error "gText_Rom_5C8F88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F88) < 0x1a
	.space 0x1a - (. - gText_Rom_5C8F88)
	.endif
	.globl gUnknown_85C8FA2
gUnknown_85C8FA2: @ 0x085C8FA2
	.space 0x5, 0xAC


.if .L__inc_fragment_select_83da6c8dfbd5 == 1

	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_4E8CC0
gText_Rom_4E8CC0: @ 0x084E8CC0
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_4E8CC0) != 0x8
	.error "gText_Rom_4E8CC0 must retain its original byte length"
	.endif

	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.

	.globl gText_ContinueMenuTime_Copy_Rom_4E8CC8
gText_ContinueMenuTime_Copy_Rom_4E8CC8: @ 0x084E8CC8
	.string "プレイじかん{EOS}"
	.if (. - gText_ContinueMenuTime_Copy_Rom_4E8CC8) != 0x7
	.error "gText_ContinueMenuTime_Copy_Rom_4E8CC8 must retain its original byte length"
	.endif
	@ Preserved byte immediately before General flower animation graphics.
	.byte 0x00

	.globl gTilesetAnims_General_Flower_Frame1
gTilesetAnims_General_Flower_Frame1: @ 0x084E8CD0
	.incbin "build/graphics/tilesets/primary/general/anim/flower/1.4bpp"

	.globl gTilesetAnims_General_Flower_Frame0
gTilesetAnims_General_Flower_Frame0: @ 0x084E8D50
	.incbin "build/graphics/tilesets/primary/general/anim/flower/0.4bpp"

	.globl gTilesetAnims_General_Flower_Frame2
gTilesetAnims_General_Flower_Frame2: @ 0x084E8DD0
	.incbin "build/graphics/tilesets/primary/general/anim/flower/2.4bpp"

	.globl tileset_anims_space_0
tileset_anims_space_0: @ 0x084E8E50
	.space 0x20
.elseif .L__inc_fragment_select_83da6c8dfbd5 == 2
	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8DE4
gText_Rom_5C8DE4: @ 0x085C8DE4
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_5C8DE4) != 0x8
	.error "gText_Rom_5C8DE4 must retain its original byte length"
	.endif

	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ContinueMenuTime_Copy_Rom_5C8DEC
gText_ContinueMenuTime_Copy_Rom_5C8DEC: @ 0x085C8DEC
	.string "プレイじかん{EOS}"
	.if (. - gText_ContinueMenuTime_Copy_Rom_5C8DEC) != 0x7
	.error "gText_ContinueMenuTime_Copy_Rom_5C8DEC must retain its original byte length"
	.endif

	@ src/main_menu.c:277 gText_ContinueMenuBadges (+2 aliases)
	.globl gText_ContinueMenuBadges_Copy_Rom_5C8DF3
gText_ContinueMenuBadges_Copy_Rom_5C8DF3: @ 0x085C8DF3
	.string "もっているバッジ{EOS}"
	.if (. - gText_ContinueMenuBadges_Copy_Rom_5C8DF3) > 0x9
	.error "gText_ContinueMenuBadges_Copy_Rom_5C8DF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ContinueMenuBadges_Copy_Rom_5C8DF3) < 0x9
	.space 0x9 - (. - gText_ContinueMenuBadges_Copy_Rom_5C8DF3)
	.endif
.elseif .L__inc_fragment_select_83da6c8dfbd5 == 3
	@ src/main_menu.c:481 main_menu_line_481
	.globl gText_Rom_5C8E9A
gText_Rom_5C8E9A: @ 0x085C8E9A
	.string "イツオ{EOS}"
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
	.string "ギョク{EOS}"
	.if (. - gText_Rom_5C8EA0) > 0x4
	.error "gText_Rom_5C8EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EA0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EA0)
	.endif
	@ analyzed canonical ROM range 0x085C8EA4-0x085C8EAB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x59, 0x52, 0xFF, 0xFF, 0xFF, 0xFF
	.globl gText_Rom_5C8EAC
gText_Rom_5C8EAC: @ 0x085C8EAC
	.string "シュウサク{EOS}"
	.if (. - gText_Rom_5C8EAC) > 0x6
	.error "gText_Rom_5C8EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EAC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8EAC)
	.endif

	@ src/main_menu.c:485 main_menu_line_485
	.globl gText_Rom_5C8EB2
gText_Rom_5C8EB2: @ 0x085C8EB2
	.string "セイゴ{EOS}"
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
	.string "ダイサク{EOS}"
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
	.string "タカヒト{EOS}"
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
	.string "タツヤ{EOS}"
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
	.string "ダニエル{EOS}"
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
	.string "テルキ{EOS}"
	.if (. - gText_Rom_5C8ED0) > 0x4
	.error "gText_Rom_5C8ED0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ED0) < 0x4
	.space 0x4 - (. - gText_Rom_5C8ED0)
	.endif
	@ analyzed canonical ROM range 0x085C8ED4-0x085C8EDB
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x64, 0x71, 0xFF, 0xFF, 0xFF, 0xFF
	.globl gText_Rom_5C8EDC
gText_Rom_5C8EDC: @ 0x085C8EDC
	.string "トモヤ{EOS}"
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
	.string "ヒトシ{EOS}"
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
	.string "ヒロアキ{EOS}"
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
	.string "ユキヒコ{EOS}"
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
	.string "ラルド{EOS}"
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
	.string "リクヤ{EOS}"
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
	.string "リチャード{EOS}"
	.if (. - gText_Rom_5C8F00) > 0x6
	.error "gText_Rom_5C8F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F00) < 0x6
	.space 0x6 - (. - gText_Rom_5C8F00)
	.endif

.elseif .L__inc_fragment_select_83da6c8dfbd5 == 4
	@ src/main_menu.c:499 main_menu_line_499
	.globl gText_Rom_5C8F06
gText_Rom_5C8F06: @ 0x085C8F06
	.string "リュウ{EOS}"
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
	.string "リョウタ{EOS}"
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
	.string "アイコ{EOS}"
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
	.string "アヤナ{EOS}"
	.if (. - gText_Rom_5C8F18) > 0x4
	.error "gText_Rom_5C8F18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F18) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F18)
	.endif
	@ analyzed canonical ROM range 0x085C8F1C-0x085C8F23
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x51, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF
	.globl gText_Rom_5C8F24
gText_Rom_5C8F24: @ 0x085C8F24
	.string "エミィ{EOS}"
	.if (. - gText_Rom_5C8F24) > 0x4
	.error "gText_Rom_5C8F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F24) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F24)
	.endif

	@ src/main_menu.c:508 main_menu_line_508
	.globl gText_Rom_5C8F28
gText_Rom_5C8F28: @ 0x085C8F28
	.string "カオリ{EOS}"
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
	.string "カレン{EOS}"
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
	.string "キョウコ{EOS}"
	.if (. - gText_Rom_5C8F34) > 0x5
	.error "gText_Rom_5C8F34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F34) < 0x5
	.space 0x5 - (. - gText_Rom_5C8F34)
	.endif
	@ analyzed canonical ROM range 0x085C8F39-0x085C8F45
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0x5B, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0x5D, 0x52, 0xFF, 0xFF, 0xFF, 0xFF
	.globl gText_Rom_5C8F46
gText_Rom_5C8F46: @ 0x085C8F46
	.string "ジュリ{EOS}"
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
	.string "チエミ{EOS}"
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
	.string "チヨコ{EOS}"
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
	.string "テルコ{EOS}"
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
	.string "ナナエ{EOS}"
	.if (. - gText_Rom_5C8F5E) > 0x4
	.error "gText_Rom_5C8F5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F5E) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F5E)
	.endif
	@ analyzed canonical ROM range 0x085C8F62-0x085C8F69
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x6B, 0x65, 0xFF, 0xFF, 0xFF, 0xFF
	.globl gText_Rom_5C8F6A
gText_Rom_5C8F6A: @ 0x085C8F6A
	.string "マキコ{EOS}"
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
	.string "ミサコ{EOS}"
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
	.string "ムツミ{EOS}"
	.if (. - gText_Rom_5C8F76) > 0x4
	.error "gText_Rom_5C8F76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F76) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F76)
	.endif
	.space 0x2, 0xFF

.endif

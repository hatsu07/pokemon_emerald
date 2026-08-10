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
	@ analyzed canonical ROM range 0x085C8F1C-0x085C8F23
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x51, 0x7E, 0xFF, 0xFF, 0xFF, 0xFF
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
	@ analyzed canonical ROM range 0x085C8F39-0x085C8F45
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0x5B, 0x54, 0xFF, 0xFF, 0xFF, 0xFF, 0x5D, 0x52, 0xFF, 0xFF, 0xFF, 0xFF
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
	@ analyzed canonical ROM range 0x085C8F62-0x085C8F69
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFF, 0xFF, 0x6B, 0x65, 0xFF, 0xFF, 0xFF, 0xFF
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


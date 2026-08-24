	.globl gText_Sour2

	@ src/strings.c:654 gText_Sour2
	.globl gText_Sour2
gText_Sour2: @ 0x085CBFDF
	.string "すっぱ{EOS}"
	.if (. - gText_Sour2) > 0x4
	.error "gText_Sour2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Sour2) < 0x4
	.space 0x4 - (. - gText_Sour2)
	.endif
	.globl gText_Rom_5CBFE3

	@ src/data/script_menu.h:1330 script_menu_line_1330 (+2 aliases)
	.globl gText_Rom_5CBFE3
gText_Rom_5CBFE3: @ 0x085CBFE3
	.string "シングル{EOS}"
	.if (. - gText_Rom_5CBFE3) > 0x5
	.error "gText_Rom_5CBFE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFE3) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFE3)
	.endif

	@ src/data/script_menu.h:1331 script_menu_line_1331 (+2 aliases)
	.globl gText_Rom_5CBFE8
gText_Rom_5CBFE8: @ 0x085CBFE8
	.string "ダブル{EOS}"
	.if (. - gText_Rom_5CBFE8) > 0x4
	.error "gText_Rom_5CBFE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFE8) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFE8)
	.endif

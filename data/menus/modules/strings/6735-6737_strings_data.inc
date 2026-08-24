
	@ src/strings.c:890 gText_Lv502 (+1 aliases)
	.globl gText_Lv502
gText_Lv502: @ 0x085DD40E
	.string "レベル 50{EOS}"
	.if (. - gText_Lv502) > 0x7
	.error "gText_Lv502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Lv502) < 0x7
	.space 0x7 - (. - gText_Lv502)
	.endif

	@ src/data/script_menu.h:644 script_menu_line_644 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5DD415
gText_Rom_5DD415: @ 0x085DD415
	.string "オープンレベル{EOS}"
	.if (. - gText_Rom_5DD415) != 0x8
	.error "gText_Rom_5DD415 must retain its original byte length"
	.endif

	@ src/strings.c:892 gText_WinStreak
	.globl gText_WinStreak
gText_WinStreak: @ 0x085DD41D
	.string "{STR_VAR_1}れんしょう{EOS}"
	.if (. - gText_WinStreak) > 0x8
	.error "gText_WinStreak may not grow beyond its original slot"
	.endif
	.if (. - gText_WinStreak) < 0x8
	.space 0x8 - (. - gText_WinStreak)
	.endif

	@ src/strings.c:893 gText_Current
	.globl gText_Current
gText_Current: @ 0x085DD425
	.string "げんざい{EOS}"
	.if (. - gText_Current) > 0x5
	.error "gText_Current may not grow beyond its original slot"
	.endif
	.if (. - gText_Current) < 0x5
	.space 0x5 - (. - gText_Current)
	.endif

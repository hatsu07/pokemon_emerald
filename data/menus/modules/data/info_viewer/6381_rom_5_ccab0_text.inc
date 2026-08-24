	.globl gText_Rom_5CCAA4
	.set gText_Rom_5CCAA4, gText_BattleRecord + 0x6
	.globl gText_Rom_5CCAA8

	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCAA8
gText_Rom_5CCAA8: @ 0x085CCAA8
	.string "バトルポイント{EOS}"
	.if (. - gText_Rom_5CCAA8) != 0x8
	.error "gText_Rom_5CCAA8 must retain its original byte length"
	.endif
	.globl gText_Rom_5CCAAB
	.set gText_Rom_5CCAAB, gText_Rom_5CCAA8 + 0x3
	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CCAB0
gText_Rom_5CCAB0: @ 0x085CCAB0
	.string "とじる{EOS}"
	.if (. - gText_Rom_5CCAB0) > 0x4
	.error "gText_Rom_5CCAB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAB0) < 0x4
	.space 0x4 - (. - gText_Rom_5CCAB0)
	.endif
	.space 0x1, 0xFF


	@ src/data/script_menu.h:654 script_menu_line_654 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CCAA8
gText_Rom_5CCAA8: @ 0x085CCAA8
	.string "バトルポイント{EOS}"
	.if (. - gText_Rom_5CCAA8) != 0x8
	.error "gText_Rom_5CCAA8 must retain its original byte length"
	.endif
	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl sInfoText_ChoiceClose_Copy_Rom_5CCAB0
sInfoText_ChoiceClose_Copy_Rom_5CCAB0: @ 0x085CCAB0
	.string "とじる{EOS}"
	.if (. - sInfoText_ChoiceClose_Copy_Rom_5CCAB0) > 0x4
	.error "sInfoText_ChoiceClose_Copy_Rom_5CCAB0 may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceClose_Copy_Rom_5CCAB0) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceClose_Copy_Rom_5CCAB0)
	.endif
	.space 0x1, 0xFF

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

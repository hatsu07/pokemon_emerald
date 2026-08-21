	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_5CC627
gText_Rom_5CC627: @ 0x085CC627
	.string "とじる{EOS}"
	.if (. - gText_Rom_5CC627) > 0x4
	.error "gText_Rom_5CC627 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC627) < 0x4
	.space 0x4 - (. - gText_Rom_5CC627)
	.endif

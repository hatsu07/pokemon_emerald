	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_4E8B77
gText_Rom_4E8B77: @ 0x084E8B77
	.string "とじる{EOS}"
	.if (. - gText_Rom_4E8B77) > 0x4
	.error "gText_Rom_4E8B77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B77) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B77)
	.endif

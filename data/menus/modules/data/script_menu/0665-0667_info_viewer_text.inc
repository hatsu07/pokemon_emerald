	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl sInfoText_ChoiceClose_Copy_Rom_4E8B77
sInfoText_ChoiceClose_Copy_Rom_4E8B77: @ 0x084E8B77
	.string "とじる{EOS}"
	.if (. - sInfoText_ChoiceClose_Copy_Rom_4E8B77) > 0x4
	.error "sInfoText_ChoiceClose_Copy_Rom_4E8B77 may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceClose_Copy_Rom_4E8B77) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceClose_Copy_Rom_4E8B77)
	.endif

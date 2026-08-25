	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl sInfoText_ChoiceClose_Copy_Rom_5CC627
sInfoText_ChoiceClose_Copy_Rom_5CC627: @ 0x085CC627
	.string "とじる{EOS}"
	.if (. - sInfoText_ChoiceClose_Copy_Rom_5CC627) > 0x4
	.error "sInfoText_ChoiceClose_Copy_Rom_5CC627 may not grow beyond its original slot"
	.endif
	.if (. - sInfoText_ChoiceClose_Copy_Rom_5CC627) < 0x4
	.space 0x4 - (. - sInfoText_ChoiceClose_Copy_Rom_5CC627)
	.endif

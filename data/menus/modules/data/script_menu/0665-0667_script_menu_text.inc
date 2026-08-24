	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl gText_MenuOptionSave
gText_MenuOptionSave: @ 0x084E8B6D
	.string "レポート{EOS}"
	.if (. - gText_MenuOptionSave) > 0x5
	.error "gText_MenuOptionSave may not grow beyond its original slot"
	.endif
	.if (. - gText_MenuOptionSave) < 0x5
	.space 0x5 - (. - gText_MenuOptionSave)
	.endif

	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl gText_Option
gText_Option: @ 0x084E8B72
	.string "せってい{EOS}"
	.if (. - gText_Option) > 0x5
	.error "gText_Option may not grow beyond its original slot"
	.endif
	.if (. - gText_Option) < 0x5
	.space 0x5 - (. - gText_Option)
	.endif
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
	@ src/data/script_menu.h:452 gText_Retire (+1 aliases)
	.globl gText_Retire
gText_Retire: @ 0x084E8B7B
	.string "リタイア{EOS}"
	.if (. - gText_Retire) > 0x5
	.error "gText_Retire may not grow beyond its original slot"
	.endif
	.if (. - gText_Retire) < 0x5
	.space 0x5 - (. - gText_Retire)
	.endif

	@ src/data/script_menu.h:451 gText_Rest (+1 aliases)
	.globl gText_Rest
gText_Rest: @ 0x084E8B80
	.string "やすむ{EOS}"
	.if (. - gText_Rest) > 0x4
	.error "gText_Rest may not grow beyond its original slot"
	.endif
	.if (. - gText_Rest) < 0x4
	.space 0x4 - (. - gText_Rest)
	.endif

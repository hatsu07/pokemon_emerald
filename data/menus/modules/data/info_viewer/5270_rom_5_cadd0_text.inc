	.globl sScriptMenuText_MenuOptionSave

	@ src/strings.c:494 gText_MenuOptionSave (+1 aliases)
	.globl sScriptMenuText_MenuOptionSave
sScriptMenuText_MenuOptionSave: @ 0x085CADC6
	.string "レポート{EOS}"
	.if (. - sScriptMenuText_MenuOptionSave) > 0x5
	.error "sScriptMenuText_MenuOptionSave may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionSave) < 0x5
	.space 0x5 - (. - sScriptMenuText_MenuOptionSave)
	.endif
	.globl sScriptMenuText_MenuOptionOption

	@ src/option_menu.c:75 gText_Option (+2 aliases)
	.globl sScriptMenuText_MenuOptionOption
sScriptMenuText_MenuOptionOption: @ 0x085CADCB
	.string "せってい{EOS}"
	.if (. - sScriptMenuText_MenuOptionOption) > 0x5
	.error "sScriptMenuText_MenuOptionOption may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionOption) < 0x5
	.space 0x5 - (. - sScriptMenuText_MenuOptionOption)
	.endif
	.globl sScriptMenuText_MenuOptionExit

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl sScriptMenuText_MenuOptionExit
sScriptMenuText_MenuOptionExit: @ 0x085CADD0
	.string "とじる{EOS}"
	.if (. - sScriptMenuText_MenuOptionExit) > 0x4
	.error "sScriptMenuText_MenuOptionExit may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_MenuOptionExit) < 0x4
	.space 0x4 - (. - sScriptMenuText_MenuOptionExit)
	.endif
	@ Decoded text from ROM range: offset=0x5CADD4, size=0x5
	.string "　5BP{EOS}"

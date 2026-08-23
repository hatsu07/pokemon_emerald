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

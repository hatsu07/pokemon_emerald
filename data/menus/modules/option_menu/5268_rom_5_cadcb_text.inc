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

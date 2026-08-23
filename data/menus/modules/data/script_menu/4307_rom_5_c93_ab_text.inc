	@ src/data/script_menu.h:38 gText_Registry (+2 aliases)
	.globl sScriptMenuText_Menu_Register
sScriptMenuText_Menu_Register: @ 0x085C93AB
	.string "とうろく{EOS}"
	.if (. - sScriptMenuText_Menu_Register) > 0x5
	.error "sScriptMenuText_Menu_Register may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Menu_Register) < 0x5
	.space 0x5 - (. - sScriptMenuText_Menu_Register)
	.endif

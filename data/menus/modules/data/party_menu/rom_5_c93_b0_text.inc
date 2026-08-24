	@ src/data/party_menu.h:815 party_menu_line_815 (+2 aliases)
	.globl gText_Rom_5C93A7
gText_Rom_5C93A7: @ 0x085C93A7
	.string "すてる{EOS}"
	.if (. - gText_Rom_5C93A7) > 0x4
	.error "gText_Rom_5C93A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93A7) < 0x4
	.space 0x4 - (. - gText_Rom_5C93A7)
	.endif
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
	@ src/data/party_menu.h:800 party_menu_line_800 (+2 aliases)
	.globl gText_Rom_5C93B0
gText_Rom_5C93B0: @ 0x085C93B0
	.string "もたせる{EOS}"
	.if (. - gText_Rom_5C93B0) > 0x5
	.error "gText_Rom_5C93B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93B0) < 0x5
	.space 0x5 - (. - gText_Rom_5C93B0)
	.endif


	@ src/data/party_menu.h:815 party_menu_line_815 (+2 aliases)
	.globl gPartyMenuActionText_Toss
gPartyMenuActionText_Toss: @ 0x085C93A7
	.string "すてる{EOS}"
	.if (. - gPartyMenuActionText_Toss) > 0x4
	.error "gPartyMenuActionText_Toss may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Toss) < 0x4
	.space 0x4 - (. - gPartyMenuActionText_Toss)
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
	.globl gPartyMenuActionText_Summary
gPartyMenuActionText_Summary: @ 0x085C93B0
	.string "もたせる{EOS}"
	.if (. - gPartyMenuActionText_Summary) > 0x5
	.error "gPartyMenuActionText_Summary may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Summary) < 0x5
	.space 0x5 - (. - gPartyMenuActionText_Summary)
	.endif


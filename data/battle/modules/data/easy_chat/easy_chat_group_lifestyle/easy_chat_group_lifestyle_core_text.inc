	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gPartyMenuActionText_Mail
gPartyMenuActionText_Mail: @ 0x085C93DC
	.string "メール{EOS}"
	.if (. - gPartyMenuActionText_Mail) > 0x4
	.error "gPartyMenuActionText_Mail may not grow beyond its original slot"
	.endif
	.if (. - gPartyMenuActionText_Mail) < 0x4
	.space 0x4 - (. - gPartyMenuActionText_Mail)
	.endif


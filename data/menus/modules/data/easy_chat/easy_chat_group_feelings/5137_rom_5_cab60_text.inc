	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl sScriptMenuText_Satisfied
sScriptMenuText_Satisfied: @ 0x085CAB60
	.string "まんぞく{EOS}"
	.if (. - sScriptMenuText_Satisfied) > 0x5
	.error "sScriptMenuText_Satisfied may not grow beyond its original slot"
	.endif
	.if (. - sScriptMenuText_Satisfied) < 0x5
	.space 0x5 - (. - sScriptMenuText_Satisfied)
	.endif

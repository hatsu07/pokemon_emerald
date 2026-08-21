	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gText_Rom_5CAB60
gText_Rom_5CAB60: @ 0x085CAB60
	.string "まんぞく{EOS}"
	.if (. - gText_Rom_5CAB60) > 0x5
	.error "gText_Rom_5CAB60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB60) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB60)
	.endif

	@ src/data/easy_chat/easy_chat_group_events.h:10 gEasyChatWord_HallOfFame (+2 aliases)
	.globl gText_Rom_5CAD06
gText_Rom_5CAD06: @ 0x085CAD06
	.string "でんどういり{EOS}"
	.if (. - gText_Rom_5CAD06) > 0x7
	.error "gText_Rom_5CAD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAD06) < 0x7
	.space 0x7 - (. - gText_Rom_5CAD06)
	.endif

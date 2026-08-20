	@ src/data/easy_chat/easy_chat_group_events.h:22 gEasyChatWord_Ribbon (+1 aliases)
	.globl gText_Rom_5CB7D2
gText_Rom_5CB7D2: @ 0x085CB7D2
	.string "リボン{EOS}"
	.if (. - gText_Rom_5CB7D2) > 0x4
	.error "gText_Rom_5CB7D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7D2) < 0x4
	.space 0x4 - (. - gText_Rom_5CB7D2)
	.endif

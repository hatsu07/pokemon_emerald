	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC82
gText_Rom_57CC82: @ 0x0857CC82
	.string "タワー{EOS}"
	.if (. - gText_Rom_57CC82) > 0x4
	.error "gText_Rom_57CC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC82) < 0x4
	.space 0x4 - (. - gText_Rom_57CC82)
	.endif
	@ Decoded text from ROM range: offset=0x57CC86, size=0x16
	.string "てんのあな{EOS}"
	.string "かえらずのあな{EOS}"
	.string "しるしのはやし{EOS}"

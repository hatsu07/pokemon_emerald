	@ src/pokemon_storage_system.c:8108 pokemon_storage_system_line_8108
	.globl gText_Rom_57CC6E
gText_Rom_57CC6E: @ 0x0857CC6E
	.string "どうくつ$"
	.if (. - gText_Rom_57CC6E) > 0x5
	.error "gText_Rom_57CC6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC6E) < 0x5
	.space 0x5 - (. - gText_Rom_57CC6E)
	.endif
	.incbin "baserom.gba", 0x57cc73, 0xf

	@ src/data/easy_chat/easy_chat_group_events.h:25 gEasyChatWord_Tower (+1 aliases)
	.globl gText_Rom_57CC82
gText_Rom_57CC82: @ 0x0857CC82
	.string "タワー$"
	.if (. - gText_Rom_57CC82) > 0x4
	.error "gText_Rom_57CC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CC82) < 0x4
	.space 0x4 - (. - gText_Rom_57CC82)
	.endif
	.incbin "baserom.gba", 0x57cc86, 0x16


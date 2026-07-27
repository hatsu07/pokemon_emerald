	@ asm/pokemon_summary_screen.s:7441 PrintRibbonCount
	.globl gText_Rom_5CA3CF
gText_Rom_5CA3CF: @ 0x085CA3CF
	.string "げんざい　{0xFD}{0x02}こ$"
	.if (. - gText_Rom_5CA3CF) > 0x9
	.error "gText_Rom_5CA3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3CF) < 0x9
	.space 0x9 - (. - gText_Rom_5CA3CF)
	.endif
	.globl gUnknown_85CA3D8
gUnknown_85CA3D8: @ 0x085CA3D8
	.incbin "baserom.gba", 0x5ca3d8, 0x1
	.globl gUnknown_85CA3D9
gUnknown_85CA3D9: @ 0x085CA3D9
	.incbin "baserom.gba", 0x5ca3d9, 0x1

	@ src/data/easy_chat/easy_chat_group_events.h:2 gEasyChatWord_Events (+3 aliases)
	.globl gText_Rom_5CA3DA
gText_Rom_5CA3DA: @ 0x085CA3DA
	.string "イベント$"
	.if (. - gText_Rom_5CA3DA) > 0x5
	.error "gText_Rom_5CA3DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3DA) < 0x5
	.space 0x5 - (. - gText_Rom_5CA3DA)
	.endif
	.globl gUnknown_85CA3DF
gUnknown_85CA3DF: @ 0x085CA3DF


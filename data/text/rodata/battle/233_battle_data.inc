	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CAFA3
gText_Rom_5CAFA3: @ 0x085CAFA3
	.string "ポケモン$"
	.if (. - gText_Rom_5CAFA3) > 0x5
	.error "gText_Rom_5CAFA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFA3) < 0x5
	.space 0x5 - (. - gText_Rom_5CAFA3)
	.endif
	.incbin "baserom.gba", 0x5cafa8, 0x7

	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_5CAFAF
gText_Rom_5CAFAF: @ 0x085CAFAF
	.string "トレーナー$"
	.if (. - gText_Rom_5CAFAF) > 0x6
	.error "gText_Rom_5CAFAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAFAF) < 0x6
	.space 0x6 - (. - gText_Rom_5CAFAF)
	.endif
	.incbin "baserom.gba", 0x5cafb5, 0xb


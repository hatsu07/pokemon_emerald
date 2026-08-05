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
	@ Replaced baserom.gba range: offset=0x5CAFA8, size=0x7
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0x19, 0x00

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
	@ Replaced baserom.gba range: offset=0x5CAFB5, size=0xB
	.byte 0x9C, 0x77, 0x70, 0xA0, 0x95, 0x19, 0x00, 0x22, 0x02, 0x2B, 0xFF


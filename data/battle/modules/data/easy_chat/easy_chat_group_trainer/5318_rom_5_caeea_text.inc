	.globl gText_Rom_5CAED8
	.set gText_Rom_5CAED8, sScriptMenuText_BattlePts + 0x3
	@ ANALYSIS: RAW_RANGE offset=0x5CAEDD, size=0xD
	.byte 0x60, 0x7C, 0xAE, 0x16, 0x12, 0x02, 0x13, 0xFF, 0x12, 0x2A, 0x13, 0x02, 0x08

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CAEEA
gText_Rom_5CAEEA: @ 0x085CAEEA
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5CAEEA) > 0x5
	.error "gText_Rom_5CAEEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAEEA) < 0x5
	.space 0x5 - (. - gText_Rom_5CAEEA)
	.endif


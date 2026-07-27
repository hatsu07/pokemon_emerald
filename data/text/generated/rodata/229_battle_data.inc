	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_5CAE6F
gText_Rom_5CAE6F: @ 0x085CAE6F
	.string "こうかん$"
	.if (. - gText_Rom_5CAE6F) > 0x5
	.error "gText_Rom_5CAE6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAE6F) < 0x5
	.space 0x5 - (. - gText_Rom_5CAE6F)
	.endif
	.incbin "baserom.gba", 0x5cae74, 0x7


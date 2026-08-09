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
	@ analyzed canonical ROM range 0x085CAE74-0x085CAE7A
sAnalyzedData_085CAE74: @ 0x085CAE74
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x70, 0x66, 0x9F, 0x59, 0x73, 0x7E, 0x44

	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_4E8B58
gText_Rom_4E8B58: @ 0x084E8B58
	.string "ずかん{EOS}"
	.if (. - gText_Rom_4E8B58) > 0x4
	.error "gText_Rom_4E8B58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B58) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B58)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_4E8B5C
gText_Rom_4E8B5C: @ 0x084E8B5C
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_4E8B5C) > 0x5
	.error "gText_Rom_4E8B5C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B5C) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B5C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_4E8B61
gText_Rom_4E8B61: @ 0x084E8B61
	.string "バッグ{EOS}"
	.if (. - gText_Rom_4E8B61) > 0x4
	.error "gText_Rom_4E8B61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B61) < 0x4
	.space 0x4 - (. - gText_Rom_4E8B61)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_4E8B65
gText_Rom_4E8B65: @ 0x084E8B65
	.string "ポケナビ{EOS}"
	.if (. - gText_Rom_4E8B65) > 0x5
	.error "gText_Rom_4E8B65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B65) < 0x5
	.space 0x5 - (. - gText_Rom_4E8B65)
	.endif
	@ analyzed canonical ROM range 0x084E8B6A-0x084E8B6C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xFD, 0x01, 0xFF

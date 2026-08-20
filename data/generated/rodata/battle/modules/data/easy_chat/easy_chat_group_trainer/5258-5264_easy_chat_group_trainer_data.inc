	@ src/data/easy_chat/easy_chat_group_trainer.h:34 easy_chat_group_trainer_line_34 (+2 aliases)
	.globl gText_Rom_5CADAE
gText_Rom_5CADAE: @ 0x085CADAE
	.string "ずかん{EOS}"
	.if (. - gText_Rom_5CADAE) > 0x4
	.error "gText_Rom_5CADAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADAE) < 0x4
	.space 0x4 - (. - gText_Rom_5CADAE)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CADB2
gText_Rom_5CADB2: @ 0x085CADB2
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5CADB2) > 0x5
	.error "gText_Rom_5CADB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADB2) < 0x5
	.space 0x5 - (. - gText_Rom_5CADB2)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_5CADB7
gText_Rom_5CADB7: @ 0x085CADB7
	.string "バッグ{EOS}"
	.if (. - gText_Rom_5CADB7) > 0x4
	.error "gText_Rom_5CADB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADB7) < 0x4
	.space 0x4 - (. - gText_Rom_5CADB7)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_5CADBB
gText_Rom_5CADBB: @ 0x085CADBB
	.string "ポケナビ{EOS}"
	.if (. - gText_Rom_5CADBB) > 0x5
	.error "gText_Rom_5CADBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CADBB)
	.endif
	@ analyzed canonical ROM range 0x085CADC0-0x085CADC5
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF

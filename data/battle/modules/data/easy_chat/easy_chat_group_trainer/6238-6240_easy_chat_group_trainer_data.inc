	.globl gText_Rom_5CC769

	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5CC769
gText_Rom_5CC769: @ 0x085CC769
	.string "こんにちは{EOS}"
	.if (. - gText_Rom_5CC769) > 0x6
	.error "gText_Rom_5CC769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC769) < 0x6
	.space 0x6 - (. - gText_Rom_5CC769)
	.endif
	.globl gText_Rom_5CC76F

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CC76F
gText_Rom_5CC76F: @ 0x085CC76F
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5CC76F) > 0x5
	.error "gText_Rom_5CC76F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC76F) < 0x5
	.space 0x5 - (. - gText_Rom_5CC76F)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:16 easy_chat_group_trainer_line_16 (+2 aliases)
	.globl gText_Rom_5CC774
gText_Rom_5CC774: @ 0x085CC774
	.string "こうかん{EOS}"
	.if (. - gText_Rom_5CC774) > 0x5
	.error "gText_Rom_5CC774 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC774) < 0x5
	.space 0x5 - (. - gText_Rom_5CC774)
	.endif

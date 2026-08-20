	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_579E6C
gText_Rom_579E6C: @ 0x08579E6C
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_579E6C) > 0x5
	.error "gText_Rom_579E6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E6C) < 0x5
	.space 0x5 - (. - gText_Rom_579E6C)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_579E71
gText_Rom_579E71: @ 0x08579E71
	.string "トレーナー{EOS}"
	.if (. - gText_Rom_579E71) > 0x6
	.error "gText_Rom_579E71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_579E71) < 0x6
	.space 0x6 - (. - gText_Rom_579E71)
	.endif

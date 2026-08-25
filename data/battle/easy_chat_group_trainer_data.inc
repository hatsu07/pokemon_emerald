	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5CB7C9
gText_Rom_5CB7C9: @ 0x085CB7C9
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_5CB7C9) > 0x5
	.error "gText_Rom_5CB7C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB7C9) < 0x5
	.space 0x5 - (. - gText_Rom_5CB7C9)
	.endif


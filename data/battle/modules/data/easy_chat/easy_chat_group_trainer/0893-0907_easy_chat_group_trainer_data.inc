	@ src/data/easy_chat/easy_chat_group_trainer.h:70 easy_chat_group_trainer_line_70 (+1 aliases)
	.globl gText_Rom_57474F
gText_Rom_57474F: @ 0x0857474F
	.string "トレーナー{EOS}"
	.if (. - gText_Rom_57474F) > 0x6
	.error "gText_Rom_57474F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57474F) < 0x6
	.space 0x6 - (. - gText_Rom_57474F)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:76 easy_chat_group_trainer_line_76
	.globl gText_Rom_574755
gText_Rom_574755: @ 0x08574755
	.string "バージョン{EOS}"
	.if (. - gText_Rom_574755) > 0x6
	.error "gText_Rom_574755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574755) < 0x6
	.space 0x6 - (. - gText_Rom_574755)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:82 easy_chat_group_trainer_line_82 (+2 aliases)
	.globl gText_Rom_57475B
gText_Rom_57475B: @ 0x0857475B
	.string "ポケナビ{EOS}"
	.if (. - gText_Rom_57475B) > 0x5
	.error "gText_Rom_57475B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57475B) < 0x5
	.space 0x5 - (. - gText_Rom_57475B)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_574760
gText_Rom_574760: @ 0x08574760
	.string "ポケモン{EOS}"
	.if (. - gText_Rom_574760) > 0x5
	.error "gText_Rom_574760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574760) < 0x5
	.space 0x5 - (. - gText_Rom_574760)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:94 easy_chat_group_trainer_line_94
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_574765
gText_Rom_574765: @ 0x08574765
	.string "ポケモンゲット{EOS}"
	.if (. - gText_Rom_574765) != 0x8
	.error "gText_Rom_574765 must retain its original byte length"
	.endif
	.globl gText_Rom_574769
	.set gText_Rom_574769, gText_Rom_574765 + 0x4

	@ src/data/easy_chat/easy_chat_group_trainer.h:100 easy_chat_group_trainer_line_100 (+4 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57476D
gText_Rom_57476D: @ 0x0857476D
	.string "ポケモンずかん{EOS}"
	.if (. - gText_Rom_57476D) != 0x8
	.error "gText_Rom_57476D must retain its original byte length"
	.endif
	.globl gText_Rom_574771
	.set gText_Rom_574771, gText_Rom_57476D + 0x4

	@ src/data/easy_chat/easy_chat_group_trainer.h:106 easy_chat_group_trainer_line_106 (+1 aliases)
	.globl gText_Rom_574775
gText_Rom_574775: @ 0x08574775
	.string "ルビー{EOS}"
	.if (. - gText_Rom_574775) > 0x4
	.error "gText_Rom_574775 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574775) < 0x4
	.space 0x4 - (. - gText_Rom_574775)
	.endif


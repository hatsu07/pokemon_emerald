	@ src/data/easy_chat/easy_chat_group_trainer.h:124 easy_chat_group_trainer_line_124 (+2 aliases)
	.globl gText_Rom_574780
gText_Rom_574780: @ 0x08574780
	.string "グリーン$"
	.if (. - gText_Rom_574780) > 0x5
	.error "gText_Rom_574780 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574780) < 0x5
	.space 0x5 - (. - gText_Rom_574780)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:130 easy_chat_group_trainer_line_130 (+2 aliases)
	.globl gText_Rom_574785
gText_Rom_574785: @ 0x08574785
	.string "バッグ$"
	.if (. - gText_Rom_574785) > 0x4
	.error "gText_Rom_574785 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574785) < 0x4
	.space 0x4 - (. - gText_Rom_574785)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:136 easy_chat_group_trainer_line_136
	.globl gText_Rom_574789
gText_Rom_574789: @ 0x08574789
	.string "ファイア$"
	.if (. - gText_Rom_574789) > 0x5
	.error "gText_Rom_574789 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574789) < 0x5
	.space 0x5 - (. - gText_Rom_574789)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:142 easy_chat_group_trainer_line_142 (+1 aliases)
	.globl gText_Rom_57478E
gText_Rom_57478E: @ 0x0857478E
	.string "みどり$"
	.if (. - gText_Rom_57478E) > 0x4
	.error "gText_Rom_57478E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57478E) < 0x4
	.space 0x4 - (. - gText_Rom_57478E)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:148 easy_chat_group_trainer_line_148 (+3 aliases)
	.globl gText_Rom_574792
gText_Rom_574792: @ 0x08574792
	.string "リーフ$"
	.if (. - gText_Rom_574792) > 0x4
	.error "gText_Rom_574792 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574792) < 0x4
	.space 0x4 - (. - gText_Rom_574792)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:154 easy_chat_group_trainer_line_154 (+4 aliases)
	.globl gText_Rom_574796
gText_Rom_574796: @ 0x08574796
	.string "レッド$"
	.if (. - gText_Rom_574796) > 0x4
	.error "gText_Rom_574796 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_574796) < 0x4
	.space 0x4 - (. - gText_Rom_574796)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57479A
gText_Rom_57479A: @ 0x0857479A
	.string "エメラルド$"
	.if (. - gText_Rom_57479A) != 0x6
	.error "gText_Rom_57479A must retain its original byte length"
	.endif

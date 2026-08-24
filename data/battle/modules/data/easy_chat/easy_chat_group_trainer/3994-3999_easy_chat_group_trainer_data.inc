	@ src/data/easy_chat/easy_chat_group_people.h:304 easy_chat_group_people_line_304 (+1 aliases)
	.globl gText_Rom_5C8C28
gText_Rom_5C8C28: @ 0x085C8C28
	.string "ちゃん{EOS}"
	.if (. - gText_Rom_5C8C28) > 0x4
	.error "gText_Rom_5C8C28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C28) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C28)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C2C
gText_Rom_5C8C2C: @ 0x085C8C2C
	.string "サファイア{EOS}"
	.if (. - gText_Rom_5C8C2C) != 0x6
	.error "gText_Rom_5C8C2C must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:106 easy_chat_group_trainer_line_106 (+1 aliases)
	.globl gText_Rom_5C8C32
gText_Rom_5C8C32: @ 0x085C8C32
	.string "ルビー{EOS}"
	.if (. - gText_Rom_5C8C32) > 0x4
	.error "gText_Rom_5C8C32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C32) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C32)
	.endif

	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C36
gText_Rom_5C8C36: @ 0x085C8C36
	.string "エメラルド{EOS}"
	.if (. - gText_Rom_5C8C36) != 0x6
	.error "gText_Rom_5C8C36 must retain its original byte length"
	.endif

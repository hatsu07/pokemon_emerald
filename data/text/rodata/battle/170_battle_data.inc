	@ src/data/easy_chat/easy_chat_group_trainer.h:22 easy_chat_group_trainer_line_22 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C2C
gText_Rom_5C8C2C: @ 0x085C8C2C
	.string "サファイア$"
	.if (. - gText_Rom_5C8C2C) != 0x6
	.error "gText_Rom_5C8C2C must retain its original byte length"
	.endif
	.globl gText_Rom_5C8C2D
	.set gText_Rom_5C8C2D, gText_Rom_5C8C2C + 0x1

	@ src/data/easy_chat/easy_chat_group_trainer.h:106 easy_chat_group_trainer_line_106 (+1 aliases)
	.globl gText_Rom_5C8C32
gText_Rom_5C8C32: @ 0x085C8C32
	.string "ルビー$"
	.if (. - gText_Rom_5C8C32) > 0x4
	.error "gText_Rom_5C8C32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C32) < 0x4
	.space 0x4 - (. - gText_Rom_5C8C32)
	.endif
	.globl gUnknown_85C8C36
gUnknown_85C8C36: @ 0x085C8C36

	@ src/data/easy_chat/easy_chat_group_trainer.h:160 easy_chat_group_trainer_line_160 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8C36
gText_Rom_5C8C36: @ 0x085C8C36
	.string "エメラルド$"
	.if (. - gText_Rom_5C8C36) != 0x6
	.error "gText_Rom_5C8C36 must retain its original byte length"
	.endif
	.globl gText_Rom_5C8C38
	.set gText_Rom_5C8C38, gText_Rom_5C8C36 + 0x2
	.globl gUnknown_85C8C3C
gUnknown_85C8C3C: @ 0x085C8C3C
	@ Replaced baserom.gba range: offset=0x5C8C3C, size=0x4
	.byte 0x51, 0x58, 0x51, 0xFF
	.globl gUnknown_85C8C40
gUnknown_85C8C40: @ 0x085C8C40
	@ Replaced baserom.gba range: offset=0x5C8C40, size=0x4
	.byte 0x6F, 0x89, 0x6F, 0xFF
	.globl gUnknown_85C8C44
gUnknown_85C8C44: @ 0x085C8C44

	@ src/data/trainers.h:1453 trainers_line_1453 (+2 aliases)
	.globl gText_Rom_5C8C44
gText_Rom_5C8C44: @ 0x085C8C44
	.string "アオギリ$"
	.if (. - gText_Rom_5C8C44) > 0x5
	.error "gText_Rom_5C8C44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C44) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C44)
	.endif
	.globl gUnknown_85C8C49
gUnknown_85C8C49: @ 0x085C8C49

	@ src/data/trainers.h:30102 trainers_line_30102 (+4 aliases)
	.globl gText_Rom_5C8C49
gText_Rom_5C8C49: @ 0x085C8C49
	.string "マツブサ$"
	.if (. - gText_Rom_5C8C49) > 0x5
	.error "gText_Rom_5C8C49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8C49) < 0x5
	.space 0x5 - (. - gText_Rom_5C8C49)
	.endif
	.globl gUnknown_85C8C4E
gUnknown_85C8C4E: @ 0x085C8C4E


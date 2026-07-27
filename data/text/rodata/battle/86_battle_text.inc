	@ src/battle_message.c:1475 gText_SafariBalls
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55CFB0
gText_Rom_55CFB0: @ 0x0855CFB0
	.string "サファリボール$"
	.if (. - gText_Rom_55CFB0) != 0x8
	.error "gText_Rom_55CFB0 must retain its original byte length"
	.endif
	.globl gText_Rom_55CFB4
	.set gText_Rom_55CFB4, gText_Rom_55CFB0 + 0x4
	.incbin "baserom.gba", 0x55cfb8, 0x23

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55CFDB
gText_Rom_55CFDB: @ 0x0855CFDB
	.string "ボール$"
	.if (. - gText_Rom_55CFDB) > 0x4
	.error "gText_Rom_55CFDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55CFDB) < 0x4
	.space 0x4 - (. - gText_Rom_55CFDB)
	.endif
	.incbin "baserom.gba", 0x55cfdf, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D003
gText_Rom_55D003: @ 0x0855D003
	.string "ボール$"
	.if (. - gText_Rom_55D003) > 0x4
	.error "gText_Rom_55D003 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D003) < 0x4
	.space 0x4 - (. - gText_Rom_55D003)
	.endif
	.incbin "baserom.gba", 0x55d007, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D02B
gText_Rom_55D02B: @ 0x0855D02B
	.string "ボール$"
	.if (. - gText_Rom_55D02B) > 0x4
	.error "gText_Rom_55D02B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D02B) < 0x4
	.space 0x4 - (. - gText_Rom_55D02B)
	.endif
	.incbin "baserom.gba", 0x55d02f, 0x25

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D054
gText_Rom_55D054: @ 0x0855D054
	.string "ボール$"
	.if (. - gText_Rom_55D054) > 0x4
	.error "gText_Rom_55D054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D054) < 0x4
	.space 0x4 - (. - gText_Rom_55D054)
	.endif
	.incbin "baserom.gba", 0x55d058, 0x24

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D07C
gText_Rom_55D07C: @ 0x0855D07C
	.string "ボール$"
	.if (. - gText_Rom_55D07C) > 0x4
	.error "gText_Rom_55D07C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D07C) < 0x4
	.space 0x4 - (. - gText_Rom_55D07C)
	.endif
	.incbin "baserom.gba", 0x55d080, 0x25

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D0A5
gText_Rom_55D0A5: @ 0x0855D0A5
	.string "ボール$"
	.if (. - gText_Rom_55D0A5) > 0x4
	.error "gText_Rom_55D0A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D0A5) < 0x4
	.space 0x4 - (. - gText_Rom_55D0A5)
	.endif
	.incbin "baserom.gba", 0x55d0a9, 0x23

	@ src/data/easy_chat/easy_chat_group_hobbies.h:274 easy_chat_group_hobbies_line_274 (+2 aliases)
	.globl gText_Rom_55D0CC
gText_Rom_55D0CC: @ 0x0855D0CC
	.string "ボール$"
	.if (. - gText_Rom_55D0CC) > 0x4
	.error "gText_Rom_55D0CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D0CC) < 0x4
	.space 0x4 - (. - gText_Rom_55D0CC)
	.endif
	.incbin "baserom.gba", 0x55d0d0, 0x70


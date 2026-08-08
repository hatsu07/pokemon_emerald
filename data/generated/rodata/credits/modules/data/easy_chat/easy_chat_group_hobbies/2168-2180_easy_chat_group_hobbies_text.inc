	@ src/data/easy_chat/easy_chat_group_hobbies.h:4 easy_chat_group_hobbies_line_4
	.globl gText_Rom_5778BC
gText_Rom_5778BC: @ 0x085778BC
	.string "アイドル$"
	.if (. - gText_Rom_5778BC) > 0x5
	.error "gText_Rom_5778BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778BC) < 0x5
	.space 0x5 - (. - gText_Rom_5778BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:10 easy_chat_group_hobbies_line_10
	.globl gText_Rom_5778C1
gText_Rom_5778C1: @ 0x085778C1
	.string "アニメ$"
	.if (. - gText_Rom_5778C1) > 0x4
	.error "gText_Rom_5778C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C1) < 0x4
	.space 0x4 - (. - gText_Rom_5778C1)
	.endif
	@ Decoded text from ROM range: offset=0x5778C5, size=0x3
	.string "うた$"

	@ src/data/easy_chat/easy_chat_group_hobbies.h:22 easy_chat_group_hobbies_line_22
	.globl gText_Rom_5778C8
gText_Rom_5778C8: @ 0x085778C8
	.string "えいが$"
	.if (. - gText_Rom_5778C8) > 0x4
	.error "gText_Rom_5778C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778C8) < 0x4
	.space 0x4 - (. - gText_Rom_5778C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:28 easy_chat_group_hobbies_line_28
	.globl gText_Rom_5778CC
gText_Rom_5778CC: @ 0x085778CC
	.string "おかし$"
	.if (. - gText_Rom_5778CC) > 0x4
	.error "gText_Rom_5778CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778CC) < 0x4
	.space 0x4 - (. - gText_Rom_5778CC)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:34 easy_chat_group_hobbies_line_34 (+1 aliases)
	.globl gText_Rom_5778D0
gText_Rom_5778D0: @ 0x085778D0
	.string "おしゃべり$"
	.if (. - gText_Rom_5778D0) > 0x6
	.error "gText_Rom_5778D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D0) < 0x6
	.space 0x6 - (. - gText_Rom_5778D0)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:40 easy_chat_group_hobbies_line_40
	.globl gText_Rom_5778D6
gText_Rom_5778D6: @ 0x085778D6
	.string "おままごと$"
	.if (. - gText_Rom_5778D6) > 0x6
	.error "gText_Rom_5778D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778D6) < 0x6
	.space 0x6 - (. - gText_Rom_5778D6)
	.endif

	@ src/data/easy_chat/easy_chat_group_hobbies.h:46 easy_chat_group_hobbies_line_46
	.globl gText_Rom_5778DC
gText_Rom_5778DC: @ 0x085778DC
	.string "おもちゃ$"
	.if (. - gText_Rom_5778DC) > 0x5
	.error "gText_Rom_5778DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778DC) < 0x5
	.space 0x5 - (. - gText_Rom_5778DC)
	.endif

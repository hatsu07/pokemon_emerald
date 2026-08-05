	@ src/data/easy_chat/easy_chat_group_actions.h:262 easy_chat_group_actions_line_262
	.globl gText_Rom_577199
gText_Rom_577199: @ 0x08577199
	.string "つかえ$"
	.if (. - gText_Rom_577199) > 0x4
	.error "gText_Rom_577199 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_577199) < 0x4
	.space 0x4 - (. - gText_Rom_577199)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:268 easy_chat_group_actions_line_268
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57719D
gText_Rom_57719D: @ 0x0857719D
	.string "つかって$"
	.if (. - gText_Rom_57719D) != 0x5
	.error "gText_Rom_57719D must retain its original byte length"
	.endif
	.globl gText_Rom_57719E
	.set gText_Rom_57719E, gText_Rom_57719D + 0x1

	@ src/data/easy_chat/easy_chat_group_actions.h:274 easy_chat_group_actions_line_274
	.globl gText_Rom_5771A2
gText_Rom_5771A2: @ 0x085771A2
	.string "できない$"
	.if (. - gText_Rom_5771A2) > 0x5
	.error "gText_Rom_5771A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A2) < 0x5
	.space 0x5 - (. - gText_Rom_5771A2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:280 easy_chat_group_actions_line_280
	.globl gText_Rom_5771A7
gText_Rom_5771A7: @ 0x085771A7
	.string "できる$"
	.if (. - gText_Rom_5771A7) > 0x4
	.error "gText_Rom_5771A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771A7) < 0x4
	.space 0x4 - (. - gText_Rom_5771A7)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:286 easy_chat_group_actions_line_286
	.globl gText_Rom_5771AB
gText_Rom_5771AB: @ 0x085771AB
	.string "でない$"
	.if (. - gText_Rom_5771AB) > 0x4
	.error "gText_Rom_5771AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AB) < 0x4
	.space 0x4 - (. - gText_Rom_5771AB)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:292 easy_chat_group_actions_line_292 (+2 aliases)
	.globl gText_Rom_5771AF
gText_Rom_5771AF: @ 0x085771AF
	.string "でる$"
	.if (. - gText_Rom_5771AF) > 0x3
	.error "gText_Rom_5771AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771AF) < 0x3
	.space 0x3 - (. - gText_Rom_5771AF)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:298 easy_chat_group_actions_line_298
	.globl gText_Rom_5771B2
gText_Rom_5771B2: @ 0x085771B2
	.string "なげる$"
	.if (. - gText_Rom_5771B2) > 0x4
	.error "gText_Rom_5771B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B2) < 0x4
	.space 0x4 - (. - gText_Rom_5771B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:304 easy_chat_group_actions_line_304
	.globl gText_Rom_5771B6
gText_Rom_5771B6: @ 0x085771B6
	.string "なやみ$"
	.if (. - gText_Rom_5771B6) > 0x4
	.error "gText_Rom_5771B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771B6) < 0x4
	.space 0x4 - (. - gText_Rom_5771B6)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:310 easy_chat_group_actions_line_310
	.globl gText_Rom_5771BA
gText_Rom_5771BA: @ 0x085771BA
	.string "ねられ$"
	.if (. - gText_Rom_5771BA) > 0x4
	.error "gText_Rom_5771BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771BA) < 0x4
	.space 0x4 - (. - gText_Rom_5771BA)
	.endif
	@ Decoded text from ROM range: offset=0x5771BE, size=0x3
	.string "ねる$"

	@ src/data/easy_chat/easy_chat_group_actions.h:322 easy_chat_group_actions_line_322
	.globl gText_Rom_5771C1
gText_Rom_5771C1: @ 0x085771C1
	.string "のがし$"
	.if (. - gText_Rom_5771C1) > 0x4
	.error "gText_Rom_5771C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C1) < 0x4
	.space 0x4 - (. - gText_Rom_5771C1)
	.endif
	@ Decoded text from ROM range: offset=0x5771C5, size=0x3
	.string "のむ$"

	@ src/data/easy_chat/easy_chat_group_actions.h:334 easy_chat_group_actions_line_334
	.globl gText_Rom_5771C8
gText_Rom_5771C8: @ 0x085771C8
	.string "はしり$"
	.if (. - gText_Rom_5771C8) > 0x4
	.error "gText_Rom_5771C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771C8) < 0x4
	.space 0x4 - (. - gText_Rom_5771C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:340 easy_chat_group_actions_line_340
	.globl gText_Rom_5771CC
gText_Rom_5771CC: @ 0x085771CC
	.string "はしる$"
	.if (. - gText_Rom_5771CC) > 0x4
	.error "gText_Rom_5771CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771CC) < 0x4
	.space 0x4 - (. - gText_Rom_5771CC)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:346 easy_chat_group_actions_line_346
	.globl gText_Rom_5771D0
gText_Rom_5771D0: @ 0x085771D0
	.string "はたらき$"
	.if (. - gText_Rom_5771D0) > 0x5
	.error "gText_Rom_5771D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D0) < 0x5
	.space 0x5 - (. - gText_Rom_5771D0)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:352 easy_chat_group_actions_line_352
	.globl gText_Rom_5771D5
gText_Rom_5771D5: @ 0x085771D5
	.string "はたらく$"
	.if (. - gText_Rom_5771D5) > 0x5
	.error "gText_Rom_5771D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771D5) < 0x5
	.space 0x5 - (. - gText_Rom_5771D5)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:358 easy_chat_group_actions_line_358
	.globl gText_Rom_5771DA
gText_Rom_5771DA: @ 0x085771DA
	.string "はなし$"
	.if (. - gText_Rom_5771DA) > 0x4
	.error "gText_Rom_5771DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DA) < 0x4
	.space 0x4 - (. - gText_Rom_5771DA)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:364 easy_chat_group_actions_line_364
	.globl gText_Rom_5771DE
gText_Rom_5771DE: @ 0x085771DE
	.string "はなす$"
	.if (. - gText_Rom_5771DE) > 0x4
	.error "gText_Rom_5771DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5771DE) < 0x4
	.space 0x4 - (. - gText_Rom_5771DE)
	.endif

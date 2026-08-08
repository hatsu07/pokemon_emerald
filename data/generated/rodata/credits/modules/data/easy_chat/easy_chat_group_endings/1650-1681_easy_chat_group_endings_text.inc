	@ src/data/easy_chat/easy_chat_group_endings.h:184 easy_chat_group_endings_line_184
	.globl gText_Rom_576417
gText_Rom_576417: @ 0x08576417
	.string "ている$"
	.if (. - gText_Rom_576417) > 0x4
	.error "gText_Rom_576417 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576417) < 0x4
	.space 0x4 - (. - gText_Rom_576417)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:190 easy_chat_group_endings_line_190
	.globl gText_Rom_57641B
gText_Rom_57641B: @ 0x0857641B
	.string "でーす!$"
	.if (. - gText_Rom_57641B) > 0x5
	.error "gText_Rom_57641B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57641B) < 0x5
	.space 0x5 - (. - gText_Rom_57641B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_576420
gText_Rom_576420: @ 0x08576420
	.string "でした$"
	.if (. - gText_Rom_576420) > 0x4
	.error "gText_Rom_576420 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576420) < 0x4
	.space 0x4 - (. - gText_Rom_576420)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:202 easy_chat_group_endings_line_202
	.globl gText_Rom_576424
gText_Rom_576424: @ 0x08576424
	.string "でしょ?$"
	.if (. - gText_Rom_576424) > 0x5
	.error "gText_Rom_576424 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576424) < 0x5
	.space 0x5 - (. - gText_Rom_576424)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:208 easy_chat_group_endings_line_208
	.globl gText_Rom_576429
gText_Rom_576429: @ 0x08576429
	.string "でしょー!$"
	.if (. - gText_Rom_576429) > 0x6
	.error "gText_Rom_576429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576429) < 0x6
	.space 0x6 - (. - gText_Rom_576429)
	.endif
	@ Decoded text from ROM range: offset=0x57642F, size=0x8
	.string "です$"
	.string "ですか？$"

	@ src/data/easy_chat/easy_chat_group_endings.h:226 easy_chat_group_endings_line_226
	.globl gText_Rom_576437
gText_Rom_576437: @ 0x08576437
	.string "ですよ$"
	.if (. - gText_Rom_576437) > 0x4
	.error "gText_Rom_576437 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576437) < 0x4
	.space 0x4 - (. - gText_Rom_576437)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:232 easy_chat_group_endings_line_232
	.globl gText_Rom_57643B
gText_Rom_57643B: @ 0x0857643B
	.string "ですわ$"
	.if (. - gText_Rom_57643B) > 0x4
	.error "gText_Rom_57643B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643B) < 0x4
	.space 0x4 - (. - gText_Rom_57643B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:238 easy_chat_group_endings_line_238
	.globl gText_Rom_57643F
gText_Rom_57643F: @ 0x0857643F
	.string "どうなの?$"
	.if (. - gText_Rom_57643F) > 0x6
	.error "gText_Rom_57643F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57643F) < 0x6
	.space 0x6 - (. - gText_Rom_57643F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:244 easy_chat_group_endings_line_244
	.globl gText_Rom_576445
gText_Rom_576445: @ 0x08576445
	.string "どうよ?$"
	.if (. - gText_Rom_576445) > 0x5
	.error "gText_Rom_576445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576445) < 0x5
	.space 0x5 - (. - gText_Rom_576445)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:250 easy_chat_group_endings_line_250
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_57644A
gText_Rom_57644A: @ 0x0857644A
	.string "とかいって$"
	.if (. - gText_Rom_57644A) != 0x6
	.error "gText_Rom_57644A must retain its original byte length"
	.endif
	.globl gText_Rom_57644C
	.set gText_Rom_57644C, gText_Rom_57644A + 0x2

	@ src/data/easy_chat/easy_chat_group_endings.h:256 easy_chat_group_endings_line_256
	.globl gText_Rom_576450
gText_Rom_576450: @ 0x08576450
	.string "なさい$"
	.if (. - gText_Rom_576450) > 0x4
	.error "gText_Rom_576450 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576450) < 0x4
	.space 0x4 - (. - gText_Rom_576450)
	.endif
	@ Decoded text from ROM range: offset=0x576454, size=0x3
	.string "なの$"

	@ src/data/easy_chat/easy_chat_group_endings.h:268 easy_chat_group_endings_line_268
	.globl gText_Rom_576457
gText_Rom_576457: @ 0x08576457
	.string "なのか$"
	.if (. - gText_Rom_576457) > 0x4
	.error "gText_Rom_576457 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576457) < 0x4
	.space 0x4 - (. - gText_Rom_576457)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:274 easy_chat_group_endings_line_274
	.globl gText_Rom_57645B
gText_Rom_57645B: @ 0x0857645B
	.string "なのだ$"
	.if (. - gText_Rom_57645B) > 0x4
	.error "gText_Rom_57645B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645B) < 0x4
	.space 0x4 - (. - gText_Rom_57645B)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:280 easy_chat_group_endings_line_280
	.globl gText_Rom_57645F
gText_Rom_57645F: @ 0x0857645F
	.string "なのよ$"
	.if (. - gText_Rom_57645F) > 0x4
	.error "gText_Rom_57645F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57645F) < 0x4
	.space 0x4 - (. - gText_Rom_57645F)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:286 easy_chat_group_endings_line_286
	.globl gText_Rom_576463
gText_Rom_576463: @ 0x08576463
	.string "なんだね$"
	.if (. - gText_Rom_576463) > 0x5
	.error "gText_Rom_576463 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576463) < 0x5
	.space 0x5 - (. - gText_Rom_576463)
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:292 easy_chat_group_endings_line_292
	.globl gText_Rom_576468
gText_Rom_576468: @ 0x08576468
	.string "なんです$"
	.if (. - gText_Rom_576468) > 0x5
	.error "gText_Rom_576468 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576468) < 0x5
	.space 0x5 - (. - gText_Rom_576468)
	.endif

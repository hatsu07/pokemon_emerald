	@ src/data/easy_chat/easy_chat_group_greetings.h:4 easy_chat_group_greetings_line_4
	.globl gText_Rom_575460
gText_Rom_575460: @ 0x08575460
	.string "ありがとう{EOS}"
	.if (. - gText_Rom_575460) > 0x6
	.error "gText_Rom_575460 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575460) < 0x6
	.space 0x6 - (. - gText_Rom_575460)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:10 easy_chat_group_greetings_line_10
	.globl gText_Rom_575466
gText_Rom_575466: @ 0x08575466
	.string "イエス{EOS}"
	.if (. - gText_Rom_575466) > 0x4
	.error "gText_Rom_575466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575466) < 0x4
	.space 0x4 - (. - gText_Rom_575466)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:16 easy_chat_group_greetings_line_16
	.globl gText_Rom_57546A
gText_Rom_57546A: @ 0x0857546A
	.string "いくぜ{EOS}"
	.if (. - gText_Rom_57546A) > 0x4
	.error "gText_Rom_57546A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546A) < 0x4
	.space 0x4 - (. - gText_Rom_57546A)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:22 easy_chat_group_greetings_line_22
	.globl gText_Rom_57546E
gText_Rom_57546E: @ 0x0857546E
	.string "いくよ{EOS}"
	.if (. - gText_Rom_57546E) > 0x4
	.error "gText_Rom_57546E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57546E) < 0x4
	.space 0x4 - (. - gText_Rom_57546E)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:28 easy_chat_group_greetings_line_28
	.globl gText_Rom_575472
gText_Rom_575472: @ 0x08575472
	.string "いくわよ{EOS}"
	.if (. - gText_Rom_575472) > 0x5
	.error "gText_Rom_575472 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575472) < 0x5
	.space 0x5 - (. - gText_Rom_575472)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:34 easy_chat_group_greetings_line_34
	.globl gText_Rom_575477
gText_Rom_575477: @ 0x08575477
	.string "いやー{EOS}"
	.if (. - gText_Rom_575477) > 0x4
	.error "gText_Rom_575477 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575477) < 0x4
	.space 0x4 - (. - gText_Rom_575477)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:40 easy_chat_group_greetings_line_40
	.globl gText_Rom_57547B
gText_Rom_57547B: @ 0x0857547B
	.string "いらっしゃい{EOS}"
	.if (. - gText_Rom_57547B) > 0x7
	.error "gText_Rom_57547B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57547B) < 0x7
	.space 0x7 - (. - gText_Rom_57547B)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:46 easy_chat_group_greetings_line_46
	.globl gText_Rom_575482
gText_Rom_575482: @ 0x08575482
	.string "おーい{EOS}"
	.if (. - gText_Rom_575482) > 0x4
	.error "gText_Rom_575482 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575482) < 0x4
	.space 0x4 - (. - gText_Rom_575482)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:52 easy_chat_group_greetings_line_52
	.globl gText_Rom_575486
gText_Rom_575486: @ 0x08575486
	.string "おっす{EOS}"
	.if (. - gText_Rom_575486) > 0x4
	.error "gText_Rom_575486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575486) < 0x4
	.space 0x4 - (. - gText_Rom_575486)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:58 easy_chat_group_greetings_line_58
	.globl gText_Rom_57548A
gText_Rom_57548A: @ 0x0857548A
	.string "おめでとう{EOS}"
	.if (. - gText_Rom_57548A) > 0x6
	.error "gText_Rom_57548A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57548A) < 0x6
	.space 0x6 - (. - gText_Rom_57548A)
	.endif
	@ Decoded text from ROM range: offset=0x575490, size=0x5
	.string "ください{EOS}"

	@ src/data/easy_chat/easy_chat_group_greetings.h:70 easy_chat_group_greetings_line_70
	.globl gText_Rom_575495
gText_Rom_575495: @ 0x08575495
	.string "ゴメン{EOS}"
	.if (. - gText_Rom_575495) > 0x4
	.error "gText_Rom_575495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_575495) < 0x4
	.space 0x4 - (. - gText_Rom_575495)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:76 easy_chat_group_greetings_line_76
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_575499
gText_Rom_575499: @ 0x08575499
	.string "ごめんなさい{EOS}"
	.if (. - gText_Rom_575499) != 0x7
	.error "gText_Rom_575499 must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:82 easy_chat_group_greetings_line_82
	.globl gText_Rom_5754A0
gText_Rom_5754A0: @ 0x085754A0
	.string "ごめんね{EOS}"
	.if (. - gText_Rom_5754A0) > 0x5
	.error "gText_Rom_5754A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A0) < 0x5
	.space 0x5 - (. - gText_Rom_5754A0)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:88 easy_chat_group_greetings_line_88
	.globl gText_Rom_5754A5
gText_Rom_5754A5: @ 0x085754A5
	.string "こらっ{EOS}"
	.if (. - gText_Rom_5754A5) > 0x4
	.error "gText_Rom_5754A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A5) < 0x4
	.space 0x4 - (. - gText_Rom_5754A5)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5754A9
gText_Rom_5754A9: @ 0x085754A9
	.string "こんにちは{EOS}"
	.if (. - gText_Rom_5754A9) > 0x6
	.error "gText_Rom_5754A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754A9) < 0x6
	.space 0x6 - (. - gText_Rom_5754A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_greetings.h:100 easy_chat_group_greetings_line_100 (+1 aliases)
	.globl gText_Rom_5754AF
gText_Rom_5754AF: @ 0x085754AF
	.string "さようなら{EOS}"
	.if (. - gText_Rom_5754AF) > 0x6
	.error "gText_Rom_5754AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5754AF) < 0x6
	.space 0x6 - (. - gText_Rom_5754AF)
	.endif

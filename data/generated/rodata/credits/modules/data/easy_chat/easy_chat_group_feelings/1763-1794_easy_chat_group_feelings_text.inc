
	@ src/data/easy_chat/easy_chat_group_feelings.h:33 gEasyChatWord_Downcast (+1 aliases)
	.globl gText_Rom_576892
gText_Rom_576892: @ 0x08576892
	.string "しょんぼり$"
	.if (. - gText_Rom_576892) > 0x6
	.error "gText_Rom_576892 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576892) < 0x6
	.space 0x6 - (. - gText_Rom_576892)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:34 gEasyChatWord_Incredible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576898
gText_Rom_576898: @ 0x08576898
	.string "しんじられない$"
	.if (. - gText_Rom_576898) != 0x8
	.error "gText_Rom_576898 must retain its original byte length"
	.endif
	.globl gText_Rom_57689B
	.set gText_Rom_57689B, gText_Rom_576898 + 0x3
	@ Decoded text from ROM range: offset=0x5768A0, size=0x3
	.string "すき$"

	@ src/data/easy_chat/easy_chat_group_feelings.h:36 gEasyChatWord_Dislikes (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5768A3
gText_Rom_5768A3: @ 0x085768A3
	.string "だいきらい$"
	.if (. - gText_Rom_5768A3) != 0x6
	.error "gText_Rom_5768A3 must retain its original byte length"
	.endif
	.globl gText_Rom_5768A5
	.set gText_Rom_5768A5, gText_Rom_5768A3 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:37 gEasyChatWord_Boring (+1 aliases)
	.globl gText_Rom_5768A9
gText_Rom_5768A9: @ 0x085768A9
	.string "たいくつ$"
	.if (. - gText_Rom_5768A9) > 0x5
	.error "gText_Rom_5768A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768A9) < 0x5
	.space 0x5 - (. - gText_Rom_5768A9)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:38 gEasyChatWord_Care (+1 aliases)
	.globl gText_Rom_5768AE
gText_Rom_5768AE: @ 0x085768AE
	.string "だいじ$"
	.if (. - gText_Rom_5768AE) > 0x4
	.error "gText_Rom_5768AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768AE) < 0x4
	.space 0x4 - (. - gText_Rom_5768AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:39 gEasyChatWord_Cares (+1 aliases)
	.globl gText_Rom_5768B2
gText_Rom_5768B2: @ 0x085768B2
	.string "だいじに$"
	.if (. - gText_Rom_5768B2) > 0x5
	.error "gText_Rom_5768B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B2) < 0x5
	.space 0x5 - (. - gText_Rom_5768B2)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:40 gEasyChatWord_AllRight (+1 aliases)
	.globl gText_Rom_5768B7
gText_Rom_5768B7: @ 0x085768B7
	.string "だいじょうぶ$"
	.if (. - gText_Rom_5768B7) > 0x7
	.error "gText_Rom_5768B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768B7) < 0x7
	.space 0x7 - (. - gText_Rom_5768B7)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gText_Rom_5768BE
gText_Rom_5768BE: @ 0x085768BE
	.string "だいすき$"
	.if (. - gText_Rom_5768BE) > 0x5
	.error "gText_Rom_5768BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768BE) < 0x5
	.space 0x5 - (. - gText_Rom_5768BE)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:42 gEasyChatWord_Disaster (+1 aliases)
	.globl gText_Rom_5768C3
gText_Rom_5768C3: @ 0x085768C3
	.string "たいへん$"
	.if (. - gText_Rom_5768C3) > 0x5
	.error "gText_Rom_5768C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C3) < 0x5
	.space 0x5 - (. - gText_Rom_5768C3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:43 gEasyChatWord_Enjoy (+1 aliases)
	.globl gText_Rom_5768C8
gText_Rom_5768C8: @ 0x085768C8
	.string "たのしい$"
	.if (. - gText_Rom_5768C8) > 0x5
	.error "gText_Rom_5768C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768C8) < 0x5
	.space 0x5 - (. - gText_Rom_5768C8)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:44 gEasyChatWord_Enjoys (+1 aliases)
	.globl gText_Rom_5768CD
gText_Rom_5768CD: @ 0x085768CD
	.string "たのしすぎ$"
	.if (. - gText_Rom_5768CD) > 0x6
	.error "gText_Rom_5768CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768CD) < 0x6
	.space 0x6 - (. - gText_Rom_5768CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:45 gEasyChatWord_Eat (+1 aliases)
	.globl gText_Rom_5768D3
gText_Rom_5768D3: @ 0x085768D3
	.string "たべたい$"
	.if (. - gText_Rom_5768D3) > 0x5
	.error "gText_Rom_5768D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D3) < 0x5
	.space 0x5 - (. - gText_Rom_5768D3)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:46 gEasyChatWord_Lacking (+1 aliases)
	.globl gText_Rom_5768D8
gText_Rom_5768D8: @ 0x085768D8
	.string "たりない$"
	.if (. - gText_Rom_5768D8) > 0x5
	.error "gText_Rom_5768D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768D8) < 0x5
	.space 0x5 - (. - gText_Rom_5768D8)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:47 gEasyChatWord_Bad (+1 aliases)
	.globl gText_Rom_5768DD
gText_Rom_5768DD: @ 0x085768DD
	.string "ちくしょー$"
	.if (. - gText_Rom_5768DD) > 0x6
	.error "gText_Rom_5768DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768DD) < 0x6
	.space 0x6 - (. - gText_Rom_5768DD)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:48 gEasyChatWord_Hard (+1 aliases)
	.globl gText_Rom_5768E3
gText_Rom_5768E3: @ 0x085768E3
	.string "つらい$"
	.if (. - gText_Rom_5768E3) > 0x4
	.error "gText_Rom_5768E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5768E3) < 0x4
	.space 0x4 - (. - gText_Rom_5768E3)
	.endif

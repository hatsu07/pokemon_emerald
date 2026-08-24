
	@ src/data/easy_chat/easy_chat_group_feelings.h:33 gEasyChatWord_Downcast (+1 aliases)
	.globl gEasyChatWord_Downcast
gEasyChatWord_Downcast: @ 0x08576892
	.string "しょんぼり{EOS}"
	.if (. - gEasyChatWord_Downcast) > 0x6
	.error "gEasyChatWord_Downcast may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Downcast) < 0x6
	.space 0x6 - (. - gEasyChatWord_Downcast)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:34 gEasyChatWord_Incredible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Incredible
gEasyChatWord_Incredible: @ 0x08576898
	.string "しんじられない{EOS}"
	.if (. - gEasyChatWord_Incredible) != 0x8
	.error "gEasyChatWord_Incredible must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x5768A0, size=0x3
	.string "すき{EOS}"

	@ src/data/easy_chat/easy_chat_group_feelings.h:36 gEasyChatWord_Dislikes (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Dislikes
gEasyChatWord_Dislikes: @ 0x085768A3
	.string "だいきらい{EOS}"
	.if (. - gEasyChatWord_Dislikes) != 0x6
	.error "gEasyChatWord_Dislikes must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:37 gEasyChatWord_Boring (+1 aliases)
	.globl gEasyChatWord_Boring
gEasyChatWord_Boring: @ 0x085768A9
	.string "たいくつ{EOS}"
	.if (. - gEasyChatWord_Boring) > 0x5
	.error "gEasyChatWord_Boring may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Boring) < 0x5
	.space 0x5 - (. - gEasyChatWord_Boring)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:38 gEasyChatWord_Care (+1 aliases)
	.globl gEasyChatWord_Care
gEasyChatWord_Care: @ 0x085768AE
	.string "だいじ{EOS}"
	.if (. - gEasyChatWord_Care) > 0x4
	.error "gEasyChatWord_Care may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Care) < 0x4
	.space 0x4 - (. - gEasyChatWord_Care)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:39 gEasyChatWord_Cares (+1 aliases)
	.globl gEasyChatWord_Cares
gEasyChatWord_Cares: @ 0x085768B2
	.string "だいじに{EOS}"
	.if (. - gEasyChatWord_Cares) > 0x5
	.error "gEasyChatWord_Cares may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Cares) < 0x5
	.space 0x5 - (. - gEasyChatWord_Cares)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:40 gEasyChatWord_AllRight (+1 aliases)
	.globl gEasyChatWord_AllRight
gEasyChatWord_AllRight: @ 0x085768B7
	.string "だいじょうぶ{EOS}"
	.if (. - gEasyChatWord_AllRight) > 0x7
	.error "gEasyChatWord_AllRight may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_AllRight) < 0x7
	.space 0x7 - (. - gEasyChatWord_AllRight)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:41 gEasyChatWord_Adore (+2 aliases)
	.globl gEasyChatWord_Adore
gEasyChatWord_Adore: @ 0x085768BE
	.string "だいすき{EOS}"
	.if (. - gEasyChatWord_Adore) > 0x5
	.error "gEasyChatWord_Adore may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Adore) < 0x5
	.space 0x5 - (. - gEasyChatWord_Adore)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:42 gEasyChatWord_Disaster (+1 aliases)
	.globl gEasyChatWord_Disaster
gEasyChatWord_Disaster: @ 0x085768C3
	.string "たいへん{EOS}"
	.if (. - gEasyChatWord_Disaster) > 0x5
	.error "gEasyChatWord_Disaster may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Disaster) < 0x5
	.space 0x5 - (. - gEasyChatWord_Disaster)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:43 gEasyChatWord_Enjoy (+1 aliases)
	.globl gEasyChatWord_Enjoy
gEasyChatWord_Enjoy: @ 0x085768C8
	.string "たのしい{EOS}"
	.if (. - gEasyChatWord_Enjoy) > 0x5
	.error "gEasyChatWord_Enjoy may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Enjoy) < 0x5
	.space 0x5 - (. - gEasyChatWord_Enjoy)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:44 gEasyChatWord_Enjoys (+1 aliases)
	.globl gEasyChatWord_Enjoys
gEasyChatWord_Enjoys: @ 0x085768CD
	.string "たのしすぎ{EOS}"
	.if (. - gEasyChatWord_Enjoys) > 0x6
	.error "gEasyChatWord_Enjoys may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Enjoys) < 0x6
	.space 0x6 - (. - gEasyChatWord_Enjoys)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:45 gEasyChatWord_Eat (+1 aliases)
	.globl gEasyChatWord_Eat
gEasyChatWord_Eat: @ 0x085768D3
	.string "たべたい{EOS}"
	.if (. - gEasyChatWord_Eat) > 0x5
	.error "gEasyChatWord_Eat may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Eat) < 0x5
	.space 0x5 - (. - gEasyChatWord_Eat)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:46 gEasyChatWord_Lacking (+1 aliases)
	.globl gEasyChatWord_Lacking
gEasyChatWord_Lacking: @ 0x085768D8
	.string "たりない{EOS}"
	.if (. - gEasyChatWord_Lacking) > 0x5
	.error "gEasyChatWord_Lacking may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Lacking) < 0x5
	.space 0x5 - (. - gEasyChatWord_Lacking)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:47 gEasyChatWord_Bad (+1 aliases)
	.globl gEasyChatWord_Bad
gEasyChatWord_Bad: @ 0x085768DD
	.string "ちくしょー{EOS}"
	.if (. - gEasyChatWord_Bad) > 0x6
	.error "gEasyChatWord_Bad may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Bad) < 0x6
	.space 0x6 - (. - gEasyChatWord_Bad)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:48 gEasyChatWord_Hard (+1 aliases)
	.globl gEasyChatWord_Hard
gEasyChatWord_Hard: @ 0x085768E3
	.string "つらい{EOS}"
	.if (. - gEasyChatWord_Hard) > 0x4
	.error "gEasyChatWord_Hard may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Hard) < 0x4
	.space 0x4 - (. - gEasyChatWord_Hard)
	.endif

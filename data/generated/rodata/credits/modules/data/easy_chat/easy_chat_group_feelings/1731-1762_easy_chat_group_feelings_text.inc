	@ src/data/easy_chat/easy_chat_group_feelings.h:17 gEasyChatWord_Tries (+1 aliases)
	.globl gText_Rom_576843
gText_Rom_576843: @ 0x08576843
	.string "がんばる$"
	.if (. - gText_Rom_576843) > 0x5
	.error "gText_Rom_576843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576843) < 0x5
	.space 0x5 - (. - gText_Rom_576843)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:18 gEasyChatWord_Hears (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_576848
gText_Rom_576848: @ 0x08576848
	.string "きがしない$"
	.if (. - gText_Rom_576848) != 0x6
	.error "gText_Rom_576848 must retain its original byte length"
	.endif
	.globl gText_Rom_57684A
	.set gText_Rom_57684A, gText_Rom_576848 + 0x2

	@ src/data/easy_chat/easy_chat_group_feelings.h:19 gEasyChatWord_Think (+1 aliases)
	.globl gText_Rom_57684E
gText_Rom_57684E: @ 0x0857684E
	.string "きがする$"
	.if (. - gText_Rom_57684E) > 0x5
	.error "gText_Rom_57684E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57684E) < 0x5
	.space 0x5 - (. - gText_Rom_57684E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:20 gEasyChatWord_Hear (+1 aliases)
	.globl gText_Rom_576853
gText_Rom_576853: @ 0x08576853
	.string "ききたい$"
	.if (. - gText_Rom_576853) > 0x5
	.error "gText_Rom_576853 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576853) < 0x5
	.space 0x5 - (. - gText_Rom_576853)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:21 gEasyChatWord_Wants (+1 aliases)
	.globl gText_Rom_576858
gText_Rom_576858: @ 0x08576858
	.string "きになる$"
	.if (. - gText_Rom_576858) > 0x5
	.error "gText_Rom_576858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576858) < 0x5
	.space 0x5 - (. - gText_Rom_576858)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:22 gEasyChatWord_Misheard (+1 aliases)
	.globl gText_Rom_57685D
gText_Rom_57685D: @ 0x0857685D
	.string "きのせい$"
	.if (. - gText_Rom_57685D) > 0x5
	.error "gText_Rom_57685D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57685D) < 0x5
	.space 0x5 - (. - gText_Rom_57685D)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:23 gEasyChatWord_Dislike (+1 aliases)
	.globl gText_Rom_576862
gText_Rom_576862: @ 0x08576862
	.string "きらい$"
	.if (. - gText_Rom_576862) > 0x4
	.error "gText_Rom_576862 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576862) < 0x4
	.space 0x4 - (. - gText_Rom_576862)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:24 gEasyChatWord_Angry (+1 aliases)
	.globl gText_Rom_576866
gText_Rom_576866: @ 0x08576866
	.string "くやしい$"
	.if (. - gText_Rom_576866) > 0x5
	.error "gText_Rom_576866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576866) < 0x5
	.space 0x5 - (. - gText_Rom_576866)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:25 gEasyChatWord_Anger (+1 aliases)
	.globl gText_Rom_57686B
gText_Rom_57686B: @ 0x0857686B
	.string "くやしさ$"
	.if (. - gText_Rom_57686B) > 0x5
	.error "gText_Rom_57686B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57686B) < 0x5
	.space 0x5 - (. - gText_Rom_57686B)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:26 gEasyChatWord_Scary (+1 aliases)
	.globl gText_Rom_576870
gText_Rom_576870: @ 0x08576870
	.string "こわい$"
	.if (. - gText_Rom_576870) > 0x4
	.error "gText_Rom_576870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576870) < 0x4
	.space 0x4 - (. - gText_Rom_576870)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:27 gEasyChatWord_Lonesome (+1 aliases)
	.globl gText_Rom_576874
gText_Rom_576874: @ 0x08576874
	.string "さみしい$"
	.if (. - gText_Rom_576874) > 0x5
	.error "gText_Rom_576874 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576874) < 0x5
	.space 0x5 - (. - gText_Rom_576874)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:28 gEasyChatWord_Disappoint (+1 aliases)
	.globl gText_Rom_576879
gText_Rom_576879: @ 0x08576879
	.string "ざんねん$"
	.if (. - gText_Rom_576879) > 0x5
	.error "gText_Rom_576879 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576879) < 0x5
	.space 0x5 - (. - gText_Rom_576879)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:29 gEasyChatWord_Joy (+1 aliases)
	.globl gText_Rom_57687E
gText_Rom_57687E: @ 0x0857687E
	.string "しあわせ$"
	.if (. - gText_Rom_57687E) > 0x5
	.error "gText_Rom_57687E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57687E) < 0x5
	.space 0x5 - (. - gText_Rom_57687E)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:30 gEasyChatWord_Gets (+1 aliases)
	.globl gText_Rom_576883
gText_Rom_576883: @ 0x08576883
	.string "したい$"
	.if (. - gText_Rom_576883) > 0x4
	.error "gText_Rom_576883 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576883) < 0x4
	.space 0x4 - (. - gText_Rom_576883)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:31 gEasyChatWord_Never (+1 aliases)
	.globl gText_Rom_576887
gText_Rom_576887: @ 0x08576887
	.string "したくない$"
	.if (. - gText_Rom_576887) > 0x6
	.error "gText_Rom_576887 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_576887) < 0x6
	.space 0x6 - (. - gText_Rom_576887)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:32 gEasyChatWord_Darn (+1 aliases)
	.globl gText_Rom_57688D
gText_Rom_57688D: @ 0x0857688D
	.string "しまった$"
	.if (. - gText_Rom_57688D) > 0x5
	.error "gText_Rom_57688D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57688D) < 0x5
	.space 0x5 - (. - gText_Rom_57688D)
	.endif

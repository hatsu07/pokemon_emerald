	@ src/data/easy_chat/easy_chat_group_feelings.h:17 gEasyChatWord_Tries (+1 aliases)
	.globl gEasyChatWord_Tries
gEasyChatWord_Tries: @ 0x08576843
	.string "がんばる{EOS}"
	.if (. - gEasyChatWord_Tries) > 0x5
	.error "gEasyChatWord_Tries may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Tries) < 0x5
	.space 0x5 - (. - gEasyChatWord_Tries)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:18 gEasyChatWord_Hears (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Hears
gEasyChatWord_Hears: @ 0x08576848
	.string "きがしない{EOS}"
	.if (. - gEasyChatWord_Hears) != 0x6
	.error "gEasyChatWord_Hears must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:19 gEasyChatWord_Think (+1 aliases)
	.globl gEasyChatWord_Think
gEasyChatWord_Think: @ 0x0857684E
	.string "きがする{EOS}"
	.if (. - gEasyChatWord_Think) > 0x5
	.error "gEasyChatWord_Think may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Think) < 0x5
	.space 0x5 - (. - gEasyChatWord_Think)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:20 gEasyChatWord_Hear (+1 aliases)
	.globl gEasyChatWord_Hear
gEasyChatWord_Hear: @ 0x08576853
	.string "ききたい{EOS}"
	.if (. - gEasyChatWord_Hear) > 0x5
	.error "gEasyChatWord_Hear may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Hear) < 0x5
	.space 0x5 - (. - gEasyChatWord_Hear)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:21 gEasyChatWord_Wants (+1 aliases)
	.globl gEasyChatWord_Wants
gEasyChatWord_Wants: @ 0x08576858
	.string "きになる{EOS}"
	.if (. - gEasyChatWord_Wants) > 0x5
	.error "gEasyChatWord_Wants may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Wants) < 0x5
	.space 0x5 - (. - gEasyChatWord_Wants)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:22 gEasyChatWord_Misheard (+1 aliases)
	.globl gEasyChatWord_Misheard
gEasyChatWord_Misheard: @ 0x0857685D
	.string "きのせい{EOS}"
	.if (. - gEasyChatWord_Misheard) > 0x5
	.error "gEasyChatWord_Misheard may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Misheard) < 0x5
	.space 0x5 - (. - gEasyChatWord_Misheard)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:23 gEasyChatWord_Dislike (+1 aliases)
	.globl gEasyChatWord_Dislike
gEasyChatWord_Dislike: @ 0x08576862
	.string "きらい{EOS}"
	.if (. - gEasyChatWord_Dislike) > 0x4
	.error "gEasyChatWord_Dislike may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Dislike) < 0x4
	.space 0x4 - (. - gEasyChatWord_Dislike)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:24 gEasyChatWord_Angry (+1 aliases)
	.globl gEasyChatWord_Angry
gEasyChatWord_Angry: @ 0x08576866
	.string "くやしい{EOS}"
	.if (. - gEasyChatWord_Angry) > 0x5
	.error "gEasyChatWord_Angry may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Angry) < 0x5
	.space 0x5 - (. - gEasyChatWord_Angry)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:25 gEasyChatWord_Anger (+1 aliases)
	.globl gEasyChatWord_Anger
gEasyChatWord_Anger: @ 0x0857686B
	.string "くやしさ{EOS}"
	.if (. - gEasyChatWord_Anger) > 0x5
	.error "gEasyChatWord_Anger may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Anger) < 0x5
	.space 0x5 - (. - gEasyChatWord_Anger)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:26 gEasyChatWord_Scary (+1 aliases)
	.globl gEasyChatWord_Scary
gEasyChatWord_Scary: @ 0x08576870
	.string "こわい{EOS}"
	.if (. - gEasyChatWord_Scary) > 0x4
	.error "gEasyChatWord_Scary may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Scary) < 0x4
	.space 0x4 - (. - gEasyChatWord_Scary)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:27 gEasyChatWord_Lonesome (+1 aliases)
	.globl gEasyChatWord_Lonesome
gEasyChatWord_Lonesome: @ 0x08576874
	.string "さみしい{EOS}"
	.if (. - gEasyChatWord_Lonesome) > 0x5
	.error "gEasyChatWord_Lonesome may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Lonesome) < 0x5
	.space 0x5 - (. - gEasyChatWord_Lonesome)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:28 gEasyChatWord_Disappoint (+1 aliases)
	.globl gEasyChatWord_Disappoint
gEasyChatWord_Disappoint: @ 0x08576879
	.string "ざんねん{EOS}"
	.if (. - gEasyChatWord_Disappoint) > 0x5
	.error "gEasyChatWord_Disappoint may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Disappoint) < 0x5
	.space 0x5 - (. - gEasyChatWord_Disappoint)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:29 gEasyChatWord_Joy (+1 aliases)
	.globl gEasyChatWord_Joy
gEasyChatWord_Joy: @ 0x0857687E
	.string "しあわせ{EOS}"
	.if (. - gEasyChatWord_Joy) > 0x5
	.error "gEasyChatWord_Joy may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Joy) < 0x5
	.space 0x5 - (. - gEasyChatWord_Joy)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:30 gEasyChatWord_Gets (+1 aliases)
	.globl gEasyChatWord_Gets
gEasyChatWord_Gets: @ 0x08576883
	.string "したい{EOS}"
	.if (. - gEasyChatWord_Gets) > 0x4
	.error "gEasyChatWord_Gets may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Gets) < 0x4
	.space 0x4 - (. - gEasyChatWord_Gets)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:31 gEasyChatWord_Never (+1 aliases)
	.globl gEasyChatWord_Never
gEasyChatWord_Never: @ 0x08576887
	.string "したくない{EOS}"
	.if (. - gEasyChatWord_Never) > 0x6
	.error "gEasyChatWord_Never may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Never) < 0x6
	.space 0x6 - (. - gEasyChatWord_Never)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:32 gEasyChatWord_Darn (+1 aliases)
	.globl gEasyChatWord_Darn
gEasyChatWord_Darn: @ 0x0857688D
	.string "しまった{EOS}"
	.if (. - gEasyChatWord_Darn) > 0x5
	.error "gEasyChatWord_Darn may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Darn) < 0x5
	.space 0x5 - (. - gEasyChatWord_Darn)
	.endif

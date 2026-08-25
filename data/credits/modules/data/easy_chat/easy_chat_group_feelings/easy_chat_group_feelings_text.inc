	@ src/data/easy_chat/easy_chat_group_feelings.h:1 gEasyChatWord_Meet (+1 aliases)
	.globl gEasyChatWord_Meet
gEasyChatWord_Meet: @ 0x085767F0
	.string "あいたい{EOS}"
	.if (. - gEasyChatWord_Meet) > 0x5
	.error "gEasyChatWord_Meet may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Meet) < 0x5
	.space 0x5 - (. - gEasyChatWord_Meet)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:2 gEasyChatWord_Play (+1 aliases)
	.globl gEasyChatWord_Play
gEasyChatWord_Play: @ 0x085767F5
	.string "あそびたい{EOS}"
	.if (. - gEasyChatWord_Play) > 0x6
	.error "gEasyChatWord_Play may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Play) < 0x6
	.space 0x6 - (. - gEasyChatWord_Play)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:3 gEasyChatWord_Hurried (+1 aliases)
	.globl gEasyChatWord_Hurried
gEasyChatWord_Hurried: @ 0x085767FB
	.string "あわてて{EOS}"
	.if (. - gEasyChatWord_Hurried) > 0x5
	.error "gEasyChatWord_Hurried may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Hurried) < 0x5
	.space 0x5 - (. - gEasyChatWord_Hurried)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:4 gEasyChatWord_Goes (+1 aliases)
	.globl gEasyChatWord_Goes
gEasyChatWord_Goes: @ 0x08576800
	.string "いきたい{EOS}"
	.if (. - gEasyChatWord_Goes) > 0x5
	.error "gEasyChatWord_Goes may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Goes) < 0x5
	.space 0x5 - (. - gEasyChatWord_Goes)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:5 gEasyChatWord_Giddy (+1 aliases)
	.globl gEasyChatWord_Giddy
gEasyChatWord_Giddy: @ 0x08576805
	.string "うかれて{EOS}"
	.if (. - gEasyChatWord_Giddy) > 0x5
	.error "gEasyChatWord_Giddy may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Giddy) < 0x5
	.space 0x5 - (. - gEasyChatWord_Giddy)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:6 gEasyChatWord_Happy (+1 aliases)
	.globl gEasyChatWord_Happy
gEasyChatWord_Happy: @ 0x0857680A
	.string "うれしい{EOS}"
	.if (. - gEasyChatWord_Happy) > 0x5
	.error "gEasyChatWord_Happy may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Happy) < 0x5
	.space 0x5 - (. - gEasyChatWord_Happy)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:7 gEasyChatWord_Happiness (+1 aliases)
	.globl gEasyChatWord_Happiness
gEasyChatWord_Happiness: @ 0x0857680F
	.string "うれしさ{EOS}"
	.if (. - gEasyChatWord_Happiness) > 0x5
	.error "gEasyChatWord_Happiness may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Happiness) < 0x5
	.space 0x5 - (. - gEasyChatWord_Happiness)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:8 gEasyChatWord_Excite (+1 aliases)
	.globl gEasyChatWord_Excite
gEasyChatWord_Excite: @ 0x08576814
	.string "エキサイト{EOS}"
	.if (. - gEasyChatWord_Excite) > 0x6
	.error "gEasyChatWord_Excite may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Excite) < 0x6
	.space 0x6 - (. - gEasyChatWord_Excite)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:9 gEasyChatWord_Important (+1 aliases)
	.globl gEasyChatWord_Important
gEasyChatWord_Important: @ 0x0857681A
	.string "えらい{EOS}"
	.if (. - gEasyChatWord_Important) > 0x4
	.error "gEasyChatWord_Important may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Important) < 0x4
	.space 0x4 - (. - gEasyChatWord_Important)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:10 gEasyChatWord_Funny (+1 aliases)
	.globl gEasyChatWord_Funny
gEasyChatWord_Funny: @ 0x0857681E
	.string "おかしい{EOS}"
	.if (. - gEasyChatWord_Funny) > 0x5
	.error "gEasyChatWord_Funny may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Funny) < 0x5
	.space 0x5 - (. - gEasyChatWord_Funny)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:11 gEasyChatWord_Got (+1 aliases)
	.globl gEasyChatWord_Got
gEasyChatWord_Got: @ 0x08576823
	.string "オッケー{EOS}"
	.if (. - gEasyChatWord_Got) > 0x5
	.error "gEasyChatWord_Got may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Got) < 0x5
	.space 0x5 - (. - gEasyChatWord_Got)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:12 gEasyChatWord_GoHome (+1 aliases)
	.globl gEasyChatWord_GoHome
gEasyChatWord_GoHome: @ 0x08576828
	.string "かえりたい{EOS}"
	.if (. - gEasyChatWord_GoHome) > 0x6
	.error "gEasyChatWord_GoHome may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_GoHome) < 0x6
	.space 0x6 - (. - gEasyChatWord_GoHome)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:13 gEasyChatWord_Disappointed (+1 aliases)
	.globl gEasyChatWord_Disappointed
gEasyChatWord_Disappointed: @ 0x0857682E
	.string "がっかり{EOS}"
	.if (. - gEasyChatWord_Disappointed) > 0x5
	.error "gEasyChatWord_Disappointed may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Disappointed) < 0x5
	.space 0x5 - (. - gEasyChatWord_Disappointed)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:14 gEasyChatWord_Disappoints (+1 aliases)
	.globl gEasyChatWord_Disappoints
gEasyChatWord_Disappoints: @ 0x08576833
	.string "がっくし{EOS}"
	.if (. - gEasyChatWord_Disappoints) > 0x5
	.error "gEasyChatWord_Disappoints may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Disappoints) < 0x5
	.space 0x5 - (. - gEasyChatWord_Disappoints)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:15 gEasyChatWord_Sad (+1 aliases)
	.globl gEasyChatWord_Sad
gEasyChatWord_Sad: @ 0x08576838
	.string "かなしい{EOS}"
	.if (. - gEasyChatWord_Sad) > 0x5
	.error "gEasyChatWord_Sad may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Sad) < 0x5
	.space 0x5 - (. - gEasyChatWord_Sad)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:16 gEasyChatWord_Try (+1 aliases)
	.globl gEasyChatWord_Try
gEasyChatWord_Try: @ 0x0857683D
	.string "がんばって{EOS}"
	.if (. - gEasyChatWord_Try) > 0x6
	.error "gEasyChatWord_Try may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Try) < 0x6
	.space 0x6 - (. - gEasyChatWord_Try)
	.endif

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

	@ src/data/easy_chat/easy_chat_group_feelings.h:49 gEasyChatWord_Terrible (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Terrible
gEasyChatWord_Terrible: @ 0x085768E7
	.string "つらかった{EOS}"
	.if (. - gEasyChatWord_Terrible) != 0x6
	.error "gEasyChatWord_Terrible must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:50 gEasyChatWord_Should (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Should
gEasyChatWord_Should: @ 0x085768ED
	.string "どうしよう{EOS}"
	.if (. - gEasyChatWord_Should) != 0x6
	.error "gEasyChatWord_Should must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:51 gEasyChatWord_Nice (+1 aliases)
	.globl gEasyChatWord_Nice
gEasyChatWord_Nice: @ 0x085768F3
	.string "ナイス{EOS}"
	.if (. - gEasyChatWord_Nice) > 0x4
	.error "gEasyChatWord_Nice may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Nice) < 0x4
	.space 0x4 - (. - gEasyChatWord_Nice)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:52 gEasyChatWord_Drink (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Drink
gEasyChatWord_Drink: @ 0x085768F7
	.string "のみたい{EOS}"
	.if (. - gEasyChatWord_Drink) != 0x5
	.error "gEasyChatWord_Drink must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:53 gEasyChatWord_Surprise (+1 aliases)
	.globl gEasyChatWord_Surprise
gEasyChatWord_Surprise: @ 0x085768FC
	.string "びっくり{EOS}"
	.if (. - gEasyChatWord_Surprise) > 0x5
	.error "gEasyChatWord_Surprise may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Surprise) < 0x5
	.space 0x5 - (. - gEasyChatWord_Surprise)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:54 gEasyChatWord_Fear (+1 aliases)
	.globl gEasyChatWord_Fear
gEasyChatWord_Fear: @ 0x08576901
	.string "ふあん{EOS}"
	.if (. - gEasyChatWord_Fear) > 0x4
	.error "gEasyChatWord_Fear may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Fear) < 0x4
	.space 0x4 - (. - gEasyChatWord_Fear)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:55 gEasyChatWord_Want (+1 aliases)
	.globl gEasyChatWord_Want
gEasyChatWord_Want: @ 0x08576905
	.string "ほしい{EOS}"
	.if (. - gEasyChatWord_Want) > 0x4
	.error "gEasyChatWord_Want may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Want) < 0x4
	.space 0x4 - (. - gEasyChatWord_Want)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:56 gEasyChatWord_Wait (+1 aliases)
	.globl gEasyChatWord_Wait
gEasyChatWord_Wait: @ 0x08576909
	.string "まてない{EOS}"
	.if (. - gEasyChatWord_Wait) > 0x5
	.error "gEasyChatWord_Wait may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Wait) < 0x5
	.space 0x5 - (. - gEasyChatWord_Wait)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:57 gEasyChatWord_Satisfied (+2 aliases)
	.globl gEasyChatWord_Satisfied
gEasyChatWord_Satisfied: @ 0x0857690E
	.string "まんぞく{EOS}"
	.if (. - gEasyChatWord_Satisfied) > 0x5
	.error "gEasyChatWord_Satisfied may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Satisfied) < 0x5
	.space 0x5 - (. - gEasyChatWord_Satisfied)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:58 gEasyChatWord_See (+1 aliases)
	.globl gEasyChatWord_See
gEasyChatWord_See: @ 0x08576913
	.string "みたい{EOS}"
	.if (. - gEasyChatWord_See) > 0x4
	.error "gEasyChatWord_See may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_See) < 0x4
	.space 0x4 - (. - gEasyChatWord_See)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:59 gEasyChatWord_Rare (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Rare
gEasyChatWord_Rare: @ 0x08576917
	.string "めずらしい{EOS}"
	.if (. - gEasyChatWord_Rare) != 0x6
	.error "gEasyChatWord_Rare must retain its original byte length"
	.endif
	@ Decoded text from ROM range: offset=0x57691D, size=0x3
	.string "やだ{EOS}"

	@ src/data/easy_chat/easy_chat_group_feelings.h:61 gEasyChatWord_Done (+1 aliases)
	.globl gEasyChatWord_Done
gEasyChatWord_Done: @ 0x08576920
	.string "やったー{EOS}"
	.if (. - gEasyChatWord_Done) > 0x5
	.error "gEasyChatWord_Done may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Done) < 0x5
	.space 0x5 - (. - gEasyChatWord_Done)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:62 gEasyChatWord_Danger (+1 aliases)
	.globl gEasyChatWord_Danger
gEasyChatWord_Danger: @ 0x08576925
	.string "やばい{EOS}"
	.if (. - gEasyChatWord_Danger) > 0x4
	.error "gEasyChatWord_Danger may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Danger) < 0x4
	.space 0x4 - (. - gEasyChatWord_Danger)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:63 gEasyChatWord_Defeated (+1 aliases)
	.globl gEasyChatWord_Defeated
gEasyChatWord_Defeated: @ 0x08576929
	.string "やられた{EOS}"
	.if (. - gEasyChatWord_Defeated) > 0x5
	.error "gEasyChatWord_Defeated may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Defeated) < 0x5
	.space 0x5 - (. - gEasyChatWord_Defeated)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:64 gEasyChatWord_Beat (+1 aliases)
	.globl gEasyChatWord_Beat
gEasyChatWord_Beat: @ 0x0857692E
	.string "やられて{EOS}"
	.if (. - gEasyChatWord_Beat) > 0x5
	.error "gEasyChatWord_Beat may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Beat) < 0x5
	.space 0x5 - (. - gEasyChatWord_Beat)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:65 gEasyChatWord_Great (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gEasyChatWord_Great
gEasyChatWord_Great: @ 0x08576933
	.string "よかった{EOS}"
	.if (. - gEasyChatWord_Great) != 0x5
	.error "gEasyChatWord_Great must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:66 gEasyChatWord_Romantic (+1 aliases)
	.globl gEasyChatWord_Romantic
gEasyChatWord_Romantic: @ 0x08576938
	.string "ロマン{EOS}"
	.if (. - gEasyChatWord_Romantic) > 0x4
	.error "gEasyChatWord_Romantic may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Romantic) < 0x4
	.space 0x4 - (. - gEasyChatWord_Romantic)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:67 gEasyChatWord_Question (+1 aliases)
	.globl gEasyChatWord_Question
gEasyChatWord_Question: @ 0x0857693C
	.string "ろんがい{EOS}"
	.if (. - gEasyChatWord_Question) > 0x5
	.error "gEasyChatWord_Question may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Question) < 0x5
	.space 0x5 - (. - gEasyChatWord_Question)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:68 gEasyChatWord_Understand (+1 aliases)
	.globl gEasyChatWord_Understand
gEasyChatWord_Understand: @ 0x08576941
	.string "わから{EOS}"
	.if (. - gEasyChatWord_Understand) > 0x4
	.error "gEasyChatWord_Understand may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Understand) < 0x4
	.space 0x4 - (. - gEasyChatWord_Understand)
	.endif

	@ src/data/easy_chat/easy_chat_group_feelings.h:69 gEasyChatWord_Understands (+1 aliases)
	.globl gEasyChatWord_Understands
gEasyChatWord_Understands: @ 0x08576945
	.string "わかり{EOS}"
	.if (. - gEasyChatWord_Understands) > 0x4
	.error "gEasyChatWord_Understands may not grow beyond its original slot"
	.endif
	.if (. - gEasyChatWord_Understands) < 0x4
	.space 0x4 - (. - gEasyChatWord_Understands)
	.endif
	@ analyzed canonical ROM range 0x08576949-0x08576C87
	@ struct EasyChatWordInfo[]; format verified against every 12-byte record
	@ prefix before aligned word-info array: 0x3 bytes
	.byte 0x00, 0x00, 0x00
	.globl gEasyChatGroup_Feelings
gEasyChatGroup_Feelings: @ 0x0857694C
	easy_chat_word_info gEasyChatWord_Meet, 0, 1 @ word 0
	easy_chat_word_info gEasyChatWord_Play, 1, 1 @ word 1
	easy_chat_word_info gEasyChatWord_Hurried, 2, 1 @ word 2
	easy_chat_word_info gEasyChatWord_Goes, 3, 1 @ word 3
	easy_chat_word_info gEasyChatWord_Giddy, 4, 1 @ word 4
	easy_chat_word_info gEasyChatWord_Happy, 5, 1 @ word 5
	easy_chat_word_info gEasyChatWord_Happiness, 6, 1 @ word 6
	easy_chat_word_info gEasyChatWord_Excite, 7, 1 @ word 7
	easy_chat_word_info gEasyChatWord_Important, 8, 1 @ word 8
	easy_chat_word_info gEasyChatWord_Funny, 9, 1 @ word 9
	easy_chat_word_info gEasyChatWord_Got, 10, 1 @ word 10
	easy_chat_word_info gEasyChatWord_GoHome, 11, 1 @ word 11
	easy_chat_word_info gEasyChatWord_Disappointed, 12, 1 @ word 12
	easy_chat_word_info gEasyChatWord_Disappoints, 13, 1 @ word 13
	easy_chat_word_info gEasyChatWord_Sad, 14, 1 @ word 14
	easy_chat_word_info gEasyChatWord_Try, 15, 1 @ word 15
	easy_chat_word_info gEasyChatWord_Tries, 16, 1 @ word 16
	easy_chat_word_info gEasyChatWord_Hears, 17, 1 @ word 17
	easy_chat_word_info gEasyChatWord_Think, 18, 1 @ word 18
	easy_chat_word_info gEasyChatWord_Hear, 19, 1 @ word 19
	easy_chat_word_info gEasyChatWord_Wants, 20, 1 @ word 20
	easy_chat_word_info gEasyChatWord_Misheard, 21, 1 @ word 21
	easy_chat_word_info gEasyChatWord_Dislike, 22, 1 @ word 22
	easy_chat_word_info gEasyChatWord_Angry, 23, 1 @ word 23
	easy_chat_word_info gEasyChatWord_Anger, 24, 1 @ word 24
	easy_chat_word_info gEasyChatWord_Scary, 25, 1 @ word 25
	easy_chat_word_info gEasyChatWord_Lonesome, 26, 1 @ word 26
	easy_chat_word_info gEasyChatWord_Disappoint, 27, 1 @ word 27
	easy_chat_word_info gEasyChatWord_Joy, 28, 1 @ word 28
	easy_chat_word_info gEasyChatWord_Gets, 29, 1 @ word 29
	easy_chat_word_info gEasyChatWord_Never, 30, 1 @ word 30
	easy_chat_word_info gEasyChatWord_Darn, 31, 1 @ word 31
	easy_chat_word_info gEasyChatWord_Downcast, 32, 1 @ word 32
	easy_chat_word_info gEasyChatWord_Incredible, 33, 1 @ word 33
	easy_chat_word_info 0x085768A0, 34, 1 @ word 34
	easy_chat_word_info gEasyChatWord_Dislikes, 35, 1 @ word 35
	easy_chat_word_info gEasyChatWord_Boring, 36, 1 @ word 36
	easy_chat_word_info gEasyChatWord_Care, 37, 1 @ word 37
	easy_chat_word_info gEasyChatWord_Cares, 38, 1 @ word 38
	easy_chat_word_info gEasyChatWord_AllRight, 39, 1 @ word 39
	easy_chat_word_info gEasyChatWord_Adore, 40, 1 @ word 40
	easy_chat_word_info gEasyChatWord_Disaster, 41, 1 @ word 41
	easy_chat_word_info gEasyChatWord_Enjoy, 42, 1 @ word 42
	easy_chat_word_info gEasyChatWord_Enjoys, 43, 1 @ word 43
	easy_chat_word_info gEasyChatWord_Eat, 44, 1 @ word 44
	easy_chat_word_info gEasyChatWord_Lacking, 45, 1 @ word 45
	easy_chat_word_info gEasyChatWord_Bad, 46, 1 @ word 46
	easy_chat_word_info gEasyChatWord_Hard, 47, 1 @ word 47
	easy_chat_word_info gEasyChatWord_Terrible, 48, 1 @ word 48
	easy_chat_word_info gEasyChatWord_Should, 49, 1 @ word 49
	easy_chat_word_info gEasyChatWord_Nice, 50, 1 @ word 50
	easy_chat_word_info gEasyChatWord_Drink, 51, 1 @ word 51
	easy_chat_word_info gEasyChatWord_Surprise, 52, 1 @ word 52
	easy_chat_word_info gEasyChatWord_Fear, 53, 1 @ word 53
	easy_chat_word_info gEasyChatWord_Want, 54, 1 @ word 54
	easy_chat_word_info gEasyChatWord_Wait, 55, 1 @ word 55
	easy_chat_word_info gEasyChatWord_Satisfied, 56, 1 @ word 56
	easy_chat_word_info gEasyChatWord_See, 57, 1 @ word 57
	easy_chat_word_info gEasyChatWord_Rare, 58, 1 @ word 58
	easy_chat_word_info 0x0857691D, 59, 1 @ word 59
	easy_chat_word_info gEasyChatWord_Done, 60, 1 @ word 60
	easy_chat_word_info gEasyChatWord_Danger, 61, 1 @ word 61
	easy_chat_word_info gEasyChatWord_Defeated, 62, 1 @ word 62
	easy_chat_word_info gEasyChatWord_Beat, 63, 1 @ word 63
	easy_chat_word_info gEasyChatWord_Great, 64, 1 @ word 64
	easy_chat_word_info gEasyChatWord_Romantic, 65, 1 @ word 65
	easy_chat_word_info gEasyChatWord_Question, 66, 1 @ word 66
	easy_chat_word_info gEasyChatWord_Understand, 67, 1 @ word 67
	easy_chat_word_info gEasyChatWord_Understands, 68, 1 @ word 68

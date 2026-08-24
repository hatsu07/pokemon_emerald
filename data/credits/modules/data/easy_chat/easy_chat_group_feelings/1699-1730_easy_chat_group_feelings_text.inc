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



	@ src/data/text/match_call_messages.h:54 gText_MatchCallLady_Cindy_Intro2
	.globl gText_MatchCallLady_Cindy_Intro2
gText_MatchCallLady_Cindy_Intro2: @ 0x085F2B4A
	.string "プールが ありますのよ{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Intro2) > 0xc
	.error "gText_MatchCallLady_Cindy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallLady_Cindy_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:56 gText_MatchCallBeauty_Thalia_Strategy
	.globl gText_MatchCallBeauty_Thalia_Strategy
gText_MatchCallBeauty_Thalia_Strategy: @ 0x085F2B56
	.string "メロメロに しちゃう!{EOS}"
	.if (. - gText_MatchCallBeauty_Thalia_Strategy) > 0xc
	.error "gText_MatchCallBeauty_Thalia_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Thalia_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallBeauty_Thalia_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:57 gText_MatchCallBeauty_Thalia_Pokemon
	.globl gText_MatchCallBeauty_Thalia_Pokemon
gText_MatchCallBeauty_Thalia_Pokemon: @ 0x085F2B62
	.string "おとなの みずタイプよ!{EOS}"
	.if (. - gText_MatchCallBeauty_Thalia_Pokemon) > 0xd
	.error "gText_MatchCallBeauty_Thalia_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Thalia_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallBeauty_Thalia_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:58 gText_MatchCallBeauty_Thalia_Intro1
	.globl gText_MatchCallBeauty_Thalia_Intro1
gText_MatchCallBeauty_Thalia_Intro1: @ 0x085F2B6F
	.string "ごうか きゃくせんで{EOS}"
	.if (. - gText_MatchCallBeauty_Thalia_Intro1) > 0xb
	.error "gText_MatchCallBeauty_Thalia_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Thalia_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallBeauty_Thalia_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:59 gText_MatchCallBeauty_Thalia_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBeauty_Thalia_Intro2
gText_MatchCallBeauty_Thalia_Intro2: @ 0x085F2B7A
	.string "せかい いっしゅう してみたい{EOS}"
	.if (. - gText_MatchCallBeauty_Thalia_Intro2) != 0x10
	.error "gText_MatchCallBeauty_Thalia_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:61 gText_MatchCallBeauty_Jessica_Strategy
	.globl gText_MatchCallBeauty_Jessica_Strategy
gText_MatchCallBeauty_Jessica_Strategy: @ 0x085F2B8A
	.string "まどわせちゃうわよ{EOS}"
	.if (. - gText_MatchCallBeauty_Jessica_Strategy) > 0xa
	.error "gText_MatchCallBeauty_Jessica_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Jessica_Strategy) < 0xa
	.space 0xa - (. - gText_MatchCallBeauty_Jessica_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:62 gText_MatchCallBeauty_Jessica_Pokemon
	.globl gText_MatchCallBeauty_Jessica_Pokemon
gText_MatchCallBeauty_Jessica_Pokemon: @ 0x085F2B94
	.string "かわいいわよ{EOS}"
	.if (. - gText_MatchCallBeauty_Jessica_Pokemon) > 0x7
	.error "gText_MatchCallBeauty_Jessica_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Jessica_Pokemon) < 0x7
	.space 0x7 - (. - gText_MatchCallBeauty_Jessica_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:63 gText_MatchCallBeauty_Jessica_Intro1
	.globl gText_MatchCallBeauty_Jessica_Intro1
gText_MatchCallBeauty_Jessica_Intro1: @ 0x085F2B9B
	.string "サファリゾーン だいすき!{EOS}"
	.if (. - gText_MatchCallBeauty_Jessica_Intro1) > 0xe
	.error "gText_MatchCallBeauty_Jessica_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Jessica_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallBeauty_Jessica_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:64 gText_MatchCallBeauty_Jessica_Intro2
	.globl gText_MatchCallBeauty_Jessica_Intro2
gText_MatchCallBeauty_Jessica_Intro2: @ 0x085F2BA9
	.string "つい あしを はこんじゃう{EOS}"
	.if (. - gText_MatchCallBeauty_Jessica_Intro2) > 0xe
	.error "gText_MatchCallBeauty_Jessica_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBeauty_Jessica_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallBeauty_Jessica_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:66 gText_MatchCallRichBoy_Winston_Strategy
	.globl gText_MatchCallRichBoy_Winston_Strategy
gText_MatchCallRichBoy_Winston_Strategy: @ 0x085F2BB7
	.string "さくせんなんて ひつようないぜ{EOS}"
	.if (. - gText_MatchCallRichBoy_Winston_Strategy) > 0x10
	.error "gText_MatchCallRichBoy_Winston_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRichBoy_Winston_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallRichBoy_Winston_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:67 gText_MatchCallRichBoy_Winston_Pokemon
	.globl gText_MatchCallRichBoy_Winston_Pokemon
gText_MatchCallRichBoy_Winston_Pokemon: @ 0x085F2BC7
	.string "おかねを かけて そだてたよ!{EOS}"
	.if (. - gText_MatchCallRichBoy_Winston_Pokemon) > 0x10
	.error "gText_MatchCallRichBoy_Winston_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRichBoy_Winston_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallRichBoy_Winston_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:68 gText_MatchCallRichBoy_Winston_Intro1
	.globl gText_MatchCallRichBoy_Winston_Intro1
gText_MatchCallRichBoy_Winston_Intro1: @ 0x085F2BD7
	.string "おかねもちの ボクだから{EOS}"
	.if (. - gText_MatchCallRichBoy_Winston_Intro1) > 0xd
	.error "gText_MatchCallRichBoy_Winston_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRichBoy_Winston_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallRichBoy_Winston_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:69 gText_MatchCallRichBoy_Winston_Intro2
	.globl gText_MatchCallRichBoy_Winston_Intro2
gText_MatchCallRichBoy_Winston_Intro2: @ 0x085F2BE4
	.string "ポケモン ベッドで ねてるのさ{EOS}"
	.if (. - gText_MatchCallRichBoy_Winston_Intro2) > 0x10
	.error "gText_MatchCallRichBoy_Winston_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRichBoy_Winston_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallRichBoy_Winston_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:71 gText_MatchCallPokeManiac_Steve_Strategy
	.globl gText_MatchCallPokeManiac_Steve_Strategy
gText_MatchCallPokeManiac_Steve_Strategy: @ 0x085F2BF4
	.string "パワーで ねじふせる……{EOS}"
	.if (. - gText_MatchCallPokeManiac_Steve_Strategy) > 0xd
	.error "gText_MatchCallPokeManiac_Steve_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokeManiac_Steve_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallPokeManiac_Steve_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:72 gText_MatchCallPokeManiac_Steve_Pokemon
	.globl gText_MatchCallPokeManiac_Steve_Pokemon
gText_MatchCallPokeManiac_Steve_Pokemon: @ 0x085F2C01
	.string "てつやして てにいれた……{EOS}"
	.if (. - gText_MatchCallPokeManiac_Steve_Pokemon) > 0xe
	.error "gText_MatchCallPokeManiac_Steve_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokeManiac_Steve_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallPokeManiac_Steve_Pokemon)
	.endif



	@ src/data/text/match_call_messages.h:54 gText_MatchCallLady_Cindy_Intro2
	.globl gText_Rom_5F2B4A
gText_Rom_5F2B4A: @ 0x085F2B4A
	.string "プールが ありますのよ{EOS}"
	.if (. - gText_Rom_5F2B4A) > 0xc
	.error "gText_Rom_5F2B4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B4A) < 0xc
	.space 0xc - (. - gText_Rom_5F2B4A)
	.endif

	@ src/data/text/match_call_messages.h:56 gText_MatchCallBeauty_Thalia_Strategy
	.globl gText_Rom_5F2B56
gText_Rom_5F2B56: @ 0x085F2B56
	.string "メロメロに しちゃう!{EOS}"
	.if (. - gText_Rom_5F2B56) > 0xc
	.error "gText_Rom_5F2B56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B56) < 0xc
	.space 0xc - (. - gText_Rom_5F2B56)
	.endif

	@ src/data/text/match_call_messages.h:57 gText_MatchCallBeauty_Thalia_Pokemon
	.globl gText_Rom_5F2B62
gText_Rom_5F2B62: @ 0x085F2B62
	.string "おとなの みずタイプよ!{EOS}"
	.if (. - gText_Rom_5F2B62) > 0xd
	.error "gText_Rom_5F2B62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B62) < 0xd
	.space 0xd - (. - gText_Rom_5F2B62)
	.endif

	@ src/data/text/match_call_messages.h:58 gText_MatchCallBeauty_Thalia_Intro1
	.globl gText_Rom_5F2B6F
gText_Rom_5F2B6F: @ 0x085F2B6F
	.string "ごうか きゃくせんで{EOS}"
	.if (. - gText_Rom_5F2B6F) > 0xb
	.error "gText_Rom_5F2B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B6F) < 0xb
	.space 0xb - (. - gText_Rom_5F2B6F)
	.endif

	@ src/data/text/match_call_messages.h:59 gText_MatchCallBeauty_Thalia_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2B7A
gText_Rom_5F2B7A: @ 0x085F2B7A
	.string "せかい いっしゅう してみたい{EOS}"
	.if (. - gText_Rom_5F2B7A) != 0x10
	.error "gText_Rom_5F2B7A must retain its original byte length"
	.endif
	.globl gText_Rom_5F2B86
	.set gText_Rom_5F2B86, gText_Rom_5F2B7A + 0xc

	@ src/data/text/match_call_messages.h:61 gText_MatchCallBeauty_Jessica_Strategy
	.globl gText_Rom_5F2B8A
gText_Rom_5F2B8A: @ 0x085F2B8A
	.string "まどわせちゃうわよ{EOS}"
	.if (. - gText_Rom_5F2B8A) > 0xa
	.error "gText_Rom_5F2B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B8A) < 0xa
	.space 0xa - (. - gText_Rom_5F2B8A)
	.endif

	@ src/data/text/match_call_messages.h:62 gText_MatchCallBeauty_Jessica_Pokemon
	.globl gText_Rom_5F2B94
gText_Rom_5F2B94: @ 0x085F2B94
	.string "かわいいわよ{EOS}"
	.if (. - gText_Rom_5F2B94) > 0x7
	.error "gText_Rom_5F2B94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B94) < 0x7
	.space 0x7 - (. - gText_Rom_5F2B94)
	.endif

	@ src/data/text/match_call_messages.h:63 gText_MatchCallBeauty_Jessica_Intro1
	.globl gText_Rom_5F2B9B
gText_Rom_5F2B9B: @ 0x085F2B9B
	.string "サファリゾーン だいすき!{EOS}"
	.if (. - gText_Rom_5F2B9B) > 0xe
	.error "gText_Rom_5F2B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B9B) < 0xe
	.space 0xe - (. - gText_Rom_5F2B9B)
	.endif

	@ src/data/text/match_call_messages.h:64 gText_MatchCallBeauty_Jessica_Intro2
	.globl gText_Rom_5F2BA9
gText_Rom_5F2BA9: @ 0x085F2BA9
	.string "つい あしを はこんじゃう{EOS}"
	.if (. - gText_Rom_5F2BA9) > 0xe
	.error "gText_Rom_5F2BA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BA9) < 0xe
	.space 0xe - (. - gText_Rom_5F2BA9)
	.endif

	@ src/data/text/match_call_messages.h:66 gText_MatchCallRichBoy_Winston_Strategy
	.globl gText_Rom_5F2BB7
gText_Rom_5F2BB7: @ 0x085F2BB7
	.string "さくせんなんて ひつようないぜ{EOS}"
	.if (. - gText_Rom_5F2BB7) > 0x10
	.error "gText_Rom_5F2BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BB7) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BB7)
	.endif

	@ src/data/text/match_call_messages.h:67 gText_MatchCallRichBoy_Winston_Pokemon
	.globl gText_Rom_5F2BC7
gText_Rom_5F2BC7: @ 0x085F2BC7
	.string "おかねを かけて そだてたよ!{EOS}"
	.if (. - gText_Rom_5F2BC7) > 0x10
	.error "gText_Rom_5F2BC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BC7) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BC7)
	.endif

	@ src/data/text/match_call_messages.h:68 gText_MatchCallRichBoy_Winston_Intro1
	.globl gText_Rom_5F2BD7
gText_Rom_5F2BD7: @ 0x085F2BD7
	.string "おかねもちの ボクだから{EOS}"
	.if (. - gText_Rom_5F2BD7) > 0xd
	.error "gText_Rom_5F2BD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BD7) < 0xd
	.space 0xd - (. - gText_Rom_5F2BD7)
	.endif

	@ src/data/text/match_call_messages.h:69 gText_MatchCallRichBoy_Winston_Intro2
	.globl gText_Rom_5F2BE4
gText_Rom_5F2BE4: @ 0x085F2BE4
	.string "ポケモン ベッドで ねてるのさ{EOS}"
	.if (. - gText_Rom_5F2BE4) > 0x10
	.error "gText_Rom_5F2BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BE4) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BE4)
	.endif

	@ src/data/text/match_call_messages.h:71 gText_MatchCallPokeManiac_Steve_Strategy
	.globl gText_Rom_5F2BF4
gText_Rom_5F2BF4: @ 0x085F2BF4
	.string "パワーで ねじふせる……{EOS}"
	.if (. - gText_Rom_5F2BF4) > 0xd
	.error "gText_Rom_5F2BF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BF4) < 0xd
	.space 0xd - (. - gText_Rom_5F2BF4)
	.endif

	@ src/data/text/match_call_messages.h:72 gText_MatchCallPokeManiac_Steve_Pokemon
	.globl gText_Rom_5F2C01
gText_Rom_5F2C01: @ 0x085F2C01
	.string "てつやして てにいれた……{EOS}"
	.if (. - gText_Rom_5F2C01) > 0xe
	.error "gText_Rom_5F2C01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C01) < 0xe
	.space 0xe - (. - gText_Rom_5F2C01)
	.endif


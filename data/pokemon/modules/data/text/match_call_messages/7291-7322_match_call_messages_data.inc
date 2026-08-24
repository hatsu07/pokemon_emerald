	@ src/data/text/match_call_messages.h:128 gText_MatchCallPsychic_Jacki_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPsychic_Jacki_Intro1
gText_MatchCallPsychic_Jacki_Intro1: @ 0x085F2E69
	.string "ほんと いうと わたし{EOS}"
	.if (. - gText_MatchCallPsychic_Jacki_Intro1) != 0xc
	.error "gText_MatchCallPsychic_Jacki_Intro1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E71
	.set gText_Rom_5F2E71, gText_MatchCallPsychic_Jacki_Intro1 + 0x8

	@ src/data/text/match_call_messages.h:129 gText_MatchCallPsychic_Jacki_Intro2
	.globl gText_MatchCallPsychic_Jacki_Intro2
gText_MatchCallPsychic_Jacki_Intro2: @ 0x085F2E75
	.string "テレパシーで はなしてたの{EOS}"
	.if (. - gText_MatchCallPsychic_Jacki_Intro2) > 0xe
	.error "gText_MatchCallPsychic_Jacki_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPsychic_Jacki_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallPsychic_Jacki_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:131 gText_MatchCallGentleman_Walter_Strategy
	.globl gText_MatchCallGentleman_Walter_Strategy
gText_MatchCallGentleman_Walter_Strategy: @ 0x085F2E83
	.string "あわてず さわがず{EOS}"
	.if (. - gText_MatchCallGentleman_Walter_Strategy) > 0xa
	.error "gText_MatchCallGentleman_Walter_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGentleman_Walter_Strategy) < 0xa
	.space 0xa - (. - gText_MatchCallGentleman_Walter_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:132 gText_MatchCallGentleman_Walter_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallGentleman_Walter_Pokemon
gText_MatchCallGentleman_Walter_Pokemon: @ 0x085F2E8D
	.string "きひん あふれる ポケモン{EOS}"
	.if (. - gText_MatchCallGentleman_Walter_Pokemon) != 0xe
	.error "gText_MatchCallGentleman_Walter_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E96
	.set gText_Rom_5F2E96, gText_MatchCallGentleman_Walter_Pokemon + 0x9

	@ src/data/text/match_call_messages.h:133 gText_MatchCallGentleman_Walter_Intro1
	.globl gText_MatchCallGentleman_Walter_Intro1
gText_MatchCallGentleman_Walter_Intro1: @ 0x085F2E9B
	.string "がいこくの おみやげで{EOS}"
	.if (. - gText_MatchCallGentleman_Walter_Intro1) > 0xc
	.error "gText_MatchCallGentleman_Walter_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGentleman_Walter_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallGentleman_Walter_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:134 gText_MatchCallGentleman_Walter_Intro2
	.globl gText_MatchCallGentleman_Walter_Intro2
gText_MatchCallGentleman_Walter_Intro2: @ 0x085F2EA7
	.string "まいにちの ティータイムです{EOS}"
	.if (. - gText_MatchCallGentleman_Walter_Intro2) > 0xf
	.error "gText_MatchCallGentleman_Walter_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGentleman_Walter_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallGentleman_Walter_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:136 gText_MatchCallSchoolKid_Karen_Strategy
	.globl gText_MatchCallSchoolKid_Karen_Strategy
gText_MatchCallSchoolKid_Karen_Strategy: @ 0x085F2EB6
	.string "あたまを つかって たたかうよ{EOS}"
	.if (. - gText_MatchCallSchoolKid_Karen_Strategy) > 0x10
	.error "gText_MatchCallSchoolKid_Karen_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Karen_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallSchoolKid_Karen_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:137 gText_MatchCallSchoolKid_Karen_Pokemon
	.globl gText_MatchCallSchoolKid_Karen_Pokemon
gText_MatchCallSchoolKid_Karen_Pokemon: @ 0x085F2EC6
	.string "ポケモンは なんでも すき!{EOS}"
	.if (. - gText_MatchCallSchoolKid_Karen_Pokemon) > 0xf
	.error "gText_MatchCallSchoolKid_Karen_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Karen_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallSchoolKid_Karen_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:138 gText_MatchCallSchoolKid_Karen_Intro1
	.globl gText_MatchCallSchoolKid_Karen_Intro1
gText_MatchCallSchoolKid_Karen_Intro1: @ 0x085F2ED5
	.string "テストで いいてん とると{EOS}"
	.if (. - gText_MatchCallSchoolKid_Karen_Intro1) > 0xe
	.error "gText_MatchCallSchoolKid_Karen_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Karen_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallSchoolKid_Karen_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:139 gText_MatchCallSchoolKid_Karen_Intro2
	.globl gText_MatchCallSchoolKid_Karen_Intro2
gText_MatchCallSchoolKid_Karen_Intro2: @ 0x085F2EE3
	.string "パパが おこづかい くれるの!{EOS}"
	.if (. - gText_MatchCallSchoolKid_Karen_Intro2) > 0x10
	.error "gText_MatchCallSchoolKid_Karen_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Karen_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallSchoolKid_Karen_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:141 gText_MatchCallSchoolKid_Jerry_Strategy
	.globl gText_MatchCallSchoolKid_Jerry_Strategy
gText_MatchCallSchoolKid_Jerry_Strategy: @ 0x085F2EF3
	.string "ちしきなら まけないぜ!{EOS}"
	.if (. - gText_MatchCallSchoolKid_Jerry_Strategy) > 0xd
	.error "gText_MatchCallSchoolKid_Jerry_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Jerry_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallSchoolKid_Jerry_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:142 gText_MatchCallSchoolKid_Jerry_Pokemon
	.globl gText_MatchCallSchoolKid_Jerry_Pokemon
gText_MatchCallSchoolKid_Jerry_Pokemon: @ 0x085F2F00
	.string "かしこそうな ポケモン!{EOS}"
	.if (. - gText_MatchCallSchoolKid_Jerry_Pokemon) > 0xd
	.error "gText_MatchCallSchoolKid_Jerry_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Jerry_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallSchoolKid_Jerry_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:143 gText_MatchCallSchoolKid_Jerry_Intro1
	.globl gText_MatchCallSchoolKid_Jerry_Intro1
gText_MatchCallSchoolKid_Jerry_Intro1: @ 0x085F2F0D
	.string "しょうらいは ポケモンの{EOS}"
	.if (. - gText_MatchCallSchoolKid_Jerry_Intro1) > 0xd
	.error "gText_MatchCallSchoolKid_Jerry_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Jerry_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallSchoolKid_Jerry_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:144 gText_MatchCallSchoolKid_Jerry_Intro2
	.globl gText_MatchCallSchoolKid_Jerry_Intro2
gText_MatchCallSchoolKid_Jerry_Intro2: @ 0x085F2F1A
	.string "けんきゅうしゃに なりたい!{EOS}"
	.if (. - gText_MatchCallSchoolKid_Jerry_Intro2) > 0xf
	.error "gText_MatchCallSchoolKid_Jerry_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSchoolKid_Jerry_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallSchoolKid_Jerry_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:146 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Strategy
gText_MatchCallSrAndJr_AnnaAndMeg_Strategy: @ 0x085F2F29
	.string "ふたりで そうだん!{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Strategy) > 0xb
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallSrAndJr_AnnaAndMeg_Strategy)
	.endif


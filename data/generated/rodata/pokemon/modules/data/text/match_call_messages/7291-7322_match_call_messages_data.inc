	@ src/data/text/match_call_messages.h:128 gText_MatchCallPsychic_Jacki_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E69
gText_Rom_5F2E69: @ 0x085F2E69
	.string "ほんと いうと わたし{EOS}"
	.if (. - gText_Rom_5F2E69) != 0xc
	.error "gText_Rom_5F2E69 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E71
	.set gText_Rom_5F2E71, gText_Rom_5F2E69 + 0x8

	@ src/data/text/match_call_messages.h:129 gText_MatchCallPsychic_Jacki_Intro2
	.globl gText_Rom_5F2E75
gText_Rom_5F2E75: @ 0x085F2E75
	.string "テレパシーで はなしてたの{EOS}"
	.if (. - gText_Rom_5F2E75) > 0xe
	.error "gText_Rom_5F2E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E75) < 0xe
	.space 0xe - (. - gText_Rom_5F2E75)
	.endif

	@ src/data/text/match_call_messages.h:131 gText_MatchCallGentleman_Walter_Strategy
	.globl gText_Rom_5F2E83
gText_Rom_5F2E83: @ 0x085F2E83
	.string "あわてず さわがず{EOS}"
	.if (. - gText_Rom_5F2E83) > 0xa
	.error "gText_Rom_5F2E83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E83) < 0xa
	.space 0xa - (. - gText_Rom_5F2E83)
	.endif

	@ src/data/text/match_call_messages.h:132 gText_MatchCallGentleman_Walter_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E8D
gText_Rom_5F2E8D: @ 0x085F2E8D
	.string "きひん あふれる ポケモン{EOS}"
	.if (. - gText_Rom_5F2E8D) != 0xe
	.error "gText_Rom_5F2E8D must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E96
	.set gText_Rom_5F2E96, gText_Rom_5F2E8D + 0x9

	@ src/data/text/match_call_messages.h:133 gText_MatchCallGentleman_Walter_Intro1
	.globl gText_Rom_5F2E9B
gText_Rom_5F2E9B: @ 0x085F2E9B
	.string "がいこくの おみやげで{EOS}"
	.if (. - gText_Rom_5F2E9B) > 0xc
	.error "gText_Rom_5F2E9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E9B) < 0xc
	.space 0xc - (. - gText_Rom_5F2E9B)
	.endif

	@ src/data/text/match_call_messages.h:134 gText_MatchCallGentleman_Walter_Intro2
	.globl gText_Rom_5F2EA7
gText_Rom_5F2EA7: @ 0x085F2EA7
	.string "まいにちの ティータイムです{EOS}"
	.if (. - gText_Rom_5F2EA7) > 0xf
	.error "gText_Rom_5F2EA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EA7) < 0xf
	.space 0xf - (. - gText_Rom_5F2EA7)
	.endif

	@ src/data/text/match_call_messages.h:136 gText_MatchCallSchoolKid_Karen_Strategy
	.globl gText_Rom_5F2EB6
gText_Rom_5F2EB6: @ 0x085F2EB6
	.string "あたまを つかって たたかうよ{EOS}"
	.if (. - gText_Rom_5F2EB6) > 0x10
	.error "gText_Rom_5F2EB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EB6) < 0x10
	.space 0x10 - (. - gText_Rom_5F2EB6)
	.endif

	@ src/data/text/match_call_messages.h:137 gText_MatchCallSchoolKid_Karen_Pokemon
	.globl gText_Rom_5F2EC6
gText_Rom_5F2EC6: @ 0x085F2EC6
	.string "ポケモンは なんでも すき!{EOS}"
	.if (. - gText_Rom_5F2EC6) > 0xf
	.error "gText_Rom_5F2EC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EC6) < 0xf
	.space 0xf - (. - gText_Rom_5F2EC6)
	.endif

	@ src/data/text/match_call_messages.h:138 gText_MatchCallSchoolKid_Karen_Intro1
	.globl gText_Rom_5F2ED5
gText_Rom_5F2ED5: @ 0x085F2ED5
	.string "テストで いいてん とると{EOS}"
	.if (. - gText_Rom_5F2ED5) > 0xe
	.error "gText_Rom_5F2ED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2ED5) < 0xe
	.space 0xe - (. - gText_Rom_5F2ED5)
	.endif

	@ src/data/text/match_call_messages.h:139 gText_MatchCallSchoolKid_Karen_Intro2
	.globl gText_Rom_5F2EE3
gText_Rom_5F2EE3: @ 0x085F2EE3
	.string "パパが おこづかい くれるの!{EOS}"
	.if (. - gText_Rom_5F2EE3) > 0x10
	.error "gText_Rom_5F2EE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EE3) < 0x10
	.space 0x10 - (. - gText_Rom_5F2EE3)
	.endif

	@ src/data/text/match_call_messages.h:141 gText_MatchCallSchoolKid_Jerry_Strategy
	.globl gText_Rom_5F2EF3
gText_Rom_5F2EF3: @ 0x085F2EF3
	.string "ちしきなら まけないぜ!{EOS}"
	.if (. - gText_Rom_5F2EF3) > 0xd
	.error "gText_Rom_5F2EF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EF3) < 0xd
	.space 0xd - (. - gText_Rom_5F2EF3)
	.endif

	@ src/data/text/match_call_messages.h:142 gText_MatchCallSchoolKid_Jerry_Pokemon
	.globl gText_Rom_5F2F00
gText_Rom_5F2F00: @ 0x085F2F00
	.string "かしこそうな ポケモン!{EOS}"
	.if (. - gText_Rom_5F2F00) > 0xd
	.error "gText_Rom_5F2F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F00) < 0xd
	.space 0xd - (. - gText_Rom_5F2F00)
	.endif

	@ src/data/text/match_call_messages.h:143 gText_MatchCallSchoolKid_Jerry_Intro1
	.globl gText_Rom_5F2F0D
gText_Rom_5F2F0D: @ 0x085F2F0D
	.string "しょうらいは ポケモンの{EOS}"
	.if (. - gText_Rom_5F2F0D) > 0xd
	.error "gText_Rom_5F2F0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F0D) < 0xd
	.space 0xd - (. - gText_Rom_5F2F0D)
	.endif

	@ src/data/text/match_call_messages.h:144 gText_MatchCallSchoolKid_Jerry_Intro2
	.globl gText_Rom_5F2F1A
gText_Rom_5F2F1A: @ 0x085F2F1A
	.string "けんきゅうしゃに なりたい!{EOS}"
	.if (. - gText_Rom_5F2F1A) > 0xf
	.error "gText_Rom_5F2F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F1A) < 0xf
	.space 0xf - (. - gText_Rom_5F2F1A)
	.endif

	@ src/data/text/match_call_messages.h:146 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy
	.globl gText_Rom_5F2F29
gText_Rom_5F2F29: @ 0x085F2F29
	.string "ふたりで そうだん!{EOS}"
	.if (. - gText_Rom_5F2F29) > 0xb
	.error "gText_Rom_5F2F29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F29) < 0xb
	.space 0xb - (. - gText_Rom_5F2F29)
	.endif


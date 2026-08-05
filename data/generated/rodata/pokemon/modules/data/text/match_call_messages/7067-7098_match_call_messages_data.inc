	@ src/data/text/match_call_messages.h:1 gText_MatchCallAromaLady_Rose_Strategy
	.globl gText_Rom_5F28F8
gText_Rom_5F28F8: @ 0x085F28F8
	.string "やさしい きもちに しちゃう$"
	.if (. - gText_Rom_5F28F8) > 0xf
	.error "gText_Rom_5F28F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F28F8) < 0xf
	.space 0xf - (. - gText_Rom_5F28F8)
	.endif

	@ src/data/text/match_call_messages.h:2 gText_MatchCallAromaLady_Rose_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2907
gText_Rom_5F2907: @ 0x085F2907
	.string "いい においの くさポケモン$"
	.if (. - gText_Rom_5F2907) != 0xf
	.error "gText_Rom_5F2907 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2911
	.set gText_Rom_5F2911, gText_Rom_5F2907 + 0xa

	@ src/data/text/match_call_messages.h:3 gText_MatchCallAromaLady_Rose_Intro1
	.globl gText_Rom_5F2916
gText_Rom_5F2916: @ 0x085F2916
	.string "よい かおりが こころと$"
	.if (. - gText_Rom_5F2916) > 0xd
	.error "gText_Rom_5F2916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2916) < 0xd
	.space 0xd - (. - gText_Rom_5F2916)
	.endif

	@ src/data/text/match_call_messages.h:4 gText_MatchCallAromaLady_Rose_Intro2
	.globl gText_Rom_5F2923
gText_Rom_5F2923: @ 0x085F2923
	.string "からだを けんこうに します!$"
	.if (. - gText_Rom_5F2923) > 0x10
	.error "gText_Rom_5F2923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2923) < 0x10
	.space 0x10 - (. - gText_Rom_5F2923)
	.endif

	@ src/data/text/match_call_messages.h:6 gText_MatchCallRuinManiac_Andres_Strategy
	.globl gText_Rom_5F2933
gText_Rom_5F2933: @ 0x085F2933
	.string "あんまり つよく ないよ$"
	.if (. - gText_Rom_5F2933) > 0xd
	.error "gText_Rom_5F2933 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2933) < 0xd
	.space 0xd - (. - gText_Rom_5F2933)
	.endif

	@ src/data/text/match_call_messages.h:7 gText_MatchCallRuinManiac_Andres_Pokemon
	.globl gText_Rom_5F2940
gText_Rom_5F2940: @ 0x085F2940
	.string "いせき たんさくの パートナー$"
	.if (. - gText_Rom_5F2940) > 0x10
	.error "gText_Rom_5F2940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2940) < 0x10
	.space 0x10 - (. - gText_Rom_5F2940)
	.endif

	@ src/data/text/match_call_messages.h:8 gText_MatchCallRuinManiac_Andres_Intro1
	.globl gText_Rom_5F2950
gText_Rom_5F2950: @ 0x085F2950
	.string "うみの いせきを$"
	.if (. - gText_Rom_5F2950) > 0x9
	.error "gText_Rom_5F2950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2950) < 0x9
	.space 0x9 - (. - gText_Rom_5F2950)
	.endif

	@ src/data/text/match_call_messages.h:9 gText_MatchCallRuinManiac_Andres_Intro2
	.globl gText_Rom_5F2959
gText_Rom_5F2959: @ 0x085F2959
	.string "さがして いるのだ!$"
	.if (. - gText_Rom_5F2959) > 0xb
	.error "gText_Rom_5F2959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2959) < 0xb
	.space 0xb - (. - gText_Rom_5F2959)
	.endif

	@ src/data/text/match_call_messages.h:11 gText_MatchCallRuinManiac_Dusty_Strategy
	.globl gText_Rom_5F2964
gText_Rom_5F2964: @ 0x085F2964
	.string "ちからおしが しんじょう!$"
	.if (. - gText_Rom_5F2964) > 0xe
	.error "gText_Rom_5F2964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2964) < 0xe
	.space 0xe - (. - gText_Rom_5F2964)
	.endif

	@ src/data/text/match_call_messages.h:12 gText_MatchCallRuinManiac_Dusty_Pokemon
	.globl gText_Rom_5F2972
gText_Rom_5F2972: @ 0x085F2972
	.string "ごっつい いわポケモン!$"
	.if (. - gText_Rom_5F2972) > 0xd
	.error "gText_Rom_5F2972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2972) < 0xd
	.space 0xd - (. - gText_Rom_5F2972)
	.endif

	@ src/data/text/match_call_messages.h:13 gText_MatchCallRuinManiac_Dusty_Intro1
	.globl gText_Rom_5F297F
gText_Rom_5F297F: @ 0x085F297F
	.string "こだいの ロマンを もとめて$"
	.if (. - gText_Rom_5F297F) > 0xf
	.error "gText_Rom_5F297F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F297F) < 0xf
	.space 0xf - (. - gText_Rom_5F297F)
	.endif

	@ src/data/text/match_call_messages.h:14 gText_MatchCallRuinManiac_Dusty_Intro2
	.globl gText_Rom_5F298E
gText_Rom_5F298E: @ 0x085F298E
	.string "とうざいなんぼく どこへでも!$"
	.if (. - gText_Rom_5F298E) > 0x10
	.error "gText_Rom_5F298E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F298E) < 0x10
	.space 0x10 - (. - gText_Rom_5F298E)
	.endif

	@ src/data/text/match_call_messages.h:16 gText_MatchCallTuber_Lola_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F299E
gText_Rom_5F299E: @ 0x085F299E
	.string "がんばりまーす!$"
	.if (. - gText_Rom_5F299E) != 0x9
	.error "gText_Rom_5F299E must retain its original byte length"
	.endif
	.globl gText_Rom_5F29A2
	.set gText_Rom_5F29A2, gText_Rom_5F299E + 0x4

	@ src/data/text/match_call_messages.h:17 gText_MatchCallTuber_Lola_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F29A7
gText_Rom_5F29A7: @ 0x085F29A7
	.string "およぎが じょうずな ポケモン$"
	.if (. - gText_Rom_5F29A7) != 0x10
	.error "gText_Rom_5F29A7 must retain its original byte length"
	.endif
	.globl gText_Rom_5F29B2
	.set gText_Rom_5F29B2, gText_Rom_5F29A7 + 0xb

	@ src/data/text/match_call_messages.h:18 gText_MatchCallTuber_Lola_Intro1
	.globl gText_Rom_5F29B7
gText_Rom_5F29B7: @ 0x085F29B7
	.string "うきわが なくても$"
	.if (. - gText_Rom_5F29B7) > 0xa
	.error "gText_Rom_5F29B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29B7) < 0xa
	.space 0xa - (. - gText_Rom_5F29B7)
	.endif

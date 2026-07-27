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

	@ src/data/text/match_call_messages.h:19 gText_MatchCallTuber_Lola_Intro2
	.globl gText_Rom_5F29C1
gText_Rom_5F29C1: @ 0x085F29C1
	.string "およげるように なりたいなー$"
	.if (. - gText_Rom_5F29C1) > 0xf
	.error "gText_Rom_5F29C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29C1) < 0xf
	.space 0xf - (. - gText_Rom_5F29C1)
	.endif

	@ src/data/text/match_call_messages.h:21 gText_MatchCallTuber_Ricky_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F29D0
gText_Rom_5F29D0: @ 0x085F29D0
	.string "よく わからないけど がんばる$"
	.if (. - gText_Rom_5F29D0) != 0x10
	.error "gText_Rom_5F29D0 must retain its original byte length"
	.endif
	.globl gText_Rom_5F29DB
	.set gText_Rom_5F29DB, gText_Rom_5F29D0 + 0xb

	@ src/data/text/match_call_messages.h:22 gText_MatchCallTuber_Ricky_Pokemon
	.globl gText_Rom_5F29E0
gText_Rom_5F29E0: @ 0x085F29E0
	.string "みずポケモンは ともだち!$"
	.if (. - gText_Rom_5F29E0) > 0xe
	.error "gText_Rom_5F29E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29E0) < 0xe
	.space 0xe - (. - gText_Rom_5F29E0)
	.endif

	@ src/data/text/match_call_messages.h:23 gText_MatchCallTuber_Ricky_Intro1
	.globl gText_Rom_5F29EE
gText_Rom_5F29EE: @ 0x085F29EE
	.string "およげない わけじゃ ないよ!$"
	.if (. - gText_Rom_5F29EE) > 0x10
	.error "gText_Rom_5F29EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29EE) < 0x10
	.space 0x10 - (. - gText_Rom_5F29EE)
	.endif

	@ src/data/text/match_call_messages.h:24 gText_MatchCallTuber_Ricky_Intro2
	.globl gText_Rom_5F29FE
gText_Rom_5F29FE: @ 0x085F29FE
	.string "うきわが すき なんだよ!$"
	.if (. - gText_Rom_5F29FE) > 0xe
	.error "gText_Rom_5F29FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29FE) < 0xe
	.space 0xe - (. - gText_Rom_5F29FE)
	.endif

	@ src/data/text/match_call_messages.h:26 gText_MatchCallSisAndBro_LilaAndRoy_Strategy
	.globl gText_Rom_5F2A0C
gText_Rom_5F2A0C: @ 0x085F2A0C
	.string "やくわり ぶんたん してるわ$"
	.if (. - gText_Rom_5F2A0C) > 0xf
	.error "gText_Rom_5F2A0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A0C) < 0xf
	.space 0xf - (. - gText_Rom_5F2A0C)
	.endif

	@ src/data/text/match_call_messages.h:27 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
	.globl gText_Rom_5F2A1B
gText_Rom_5F2A1B: @ 0x085F2A1B
	.string "なかの いい ポケモンよ!$"
	.if (. - gText_Rom_5F2A1B) > 0xe
	.error "gText_Rom_5F2A1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A1B) < 0xe
	.space 0xe - (. - gText_Rom_5F2A1B)
	.endif

	@ src/data/text/match_call_messages.h:28 gText_MatchCallSisAndBro_LilaAndRoy_Intro1
	.globl gText_Rom_5F2A29
gText_Rom_5F2A29: @ 0x085F2A29
	.string "きょうだい なかよく$"
	.if (. - gText_Rom_5F2A29) > 0xb
	.error "gText_Rom_5F2A29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A29) < 0xb
	.space 0xb - (. - gText_Rom_5F2A29)
	.endif

	@ src/data/text/match_call_messages.h:29 gText_MatchCallSisAndBro_LilaAndRoy_Intro2
	.globl gText_Rom_5F2A34
gText_Rom_5F2A34: @ 0x085F2A34
	.string "ポケモン たのしく ねっ!$"
	.if (. - gText_Rom_5F2A34) > 0xe
	.error "gText_Rom_5F2A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A34) < 0xe
	.space 0xe - (. - gText_Rom_5F2A34)
	.endif

	@ src/data/text/match_call_messages.h:31 gText_MatchCallCooltrainer_Cristin_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A42
gText_Rom_5F2A42: @ 0x085F2A42
	.string "おおわざで しとめるわよ!$"
	.if (. - gText_Rom_5F2A42) != 0xe
	.error "gText_Rom_5F2A42 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2A4C
	.set gText_Rom_5F2A4C, gText_Rom_5F2A42 + 0xa

	@ src/data/text/match_call_messages.h:32 gText_MatchCallCooltrainer_Cristin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A50
gText_Rom_5F2A50: @ 0x085F2A50
	.string "いろんな ポケモンで しょうぶ$"
	.if (. - gText_Rom_5F2A50) != 0x10
	.error "gText_Rom_5F2A50 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2A5B
	.set gText_Rom_5F2A5B, gText_Rom_5F2A50 + 0xb

	@ src/data/text/match_call_messages.h:33 gText_MatchCallCooltrainer_Cristin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A60
gText_Rom_5F2A60: @ 0x085F2A60
	.string "さいきょうの ポケモン$"
	.if (. - gText_Rom_5F2A60) != 0xc
	.error "gText_Rom_5F2A60 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2A67
	.set gText_Rom_5F2A67, gText_Rom_5F2A60 + 0x7

	@ src/data/text/match_call_messages.h:34 gText_MatchCallCooltrainer_Cristin_Intro2
	.globl gText_Rom_5F2A6C
gText_Rom_5F2A6C: @ 0x085F2A6C
	.string "トレーナーを めざしてるの!$"
	.if (. - gText_Rom_5F2A6C) > 0xf
	.error "gText_Rom_5F2A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A6C) < 0xf
	.space 0xf - (. - gText_Rom_5F2A6C)
	.endif

	@ src/data/text/match_call_messages.h:36 gText_MatchCallCooltrainer_Brooke_Strategy
	.globl gText_Rom_5F2A7B
gText_Rom_5F2A7B: @ 0x085F2A7B
	.string "あいての じゃくてんを せめる$"
	.if (. - gText_Rom_5F2A7B) > 0x10
	.error "gText_Rom_5F2A7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A7B) < 0x10
	.space 0x10 - (. - gText_Rom_5F2A7B)
	.endif

	@ src/data/text/match_call_messages.h:37 gText_MatchCallCooltrainer_Brooke_Pokemon
	.globl gText_Rom_5F2A8B
gText_Rom_5F2A8B: @ 0x085F2A8B
	.string "バランスが いのちよ!$"
	.if (. - gText_Rom_5F2A8B) > 0xc
	.error "gText_Rom_5F2A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A8B) < 0xc
	.space 0xc - (. - gText_Rom_5F2A8B)
	.endif

	@ src/data/text/match_call_messages.h:38 gText_MatchCallCooltrainer_Brooke_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A97
gText_Rom_5F2A97: @ 0x085F2A97
	.string "めざすは ポケモンチャンピオン$"
	.if (. - gText_Rom_5F2A97) != 0x10
	.error "gText_Rom_5F2A97 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2AA0
	.set gText_Rom_5F2AA0, gText_Rom_5F2A97 + 0x9

	@ src/data/text/match_call_messages.h:39 gText_MatchCallCooltrainer_Brooke_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AA7
gText_Rom_5F2AA7: @ 0x085F2AA7
	.string "あきらめないわよ!$"
	.if (. - gText_Rom_5F2AA7) != 0xa
	.error "gText_Rom_5F2AA7 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2AAD
	.set gText_Rom_5F2AAD, gText_Rom_5F2AA7 + 0x6

	@ src/data/text/match_call_messages.h:41 gText_MatchCallCooltrainer_Wilton_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AB1
gText_Rom_5F2AB1: @ 0x085F2AB1
	.string "あいてが いやがる たたかい$"
	.if (. - gText_Rom_5F2AB1) != 0xf
	.error "gText_Rom_5F2AB1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2ABB
	.set gText_Rom_5F2ABB, gText_Rom_5F2AB1 + 0xa
	.globl gText_Rom_5F2ABC
	.set gText_Rom_5F2ABC, gText_Rom_5F2AB1 + 0xb

	@ src/data/text/match_call_messages.h:42 gText_MatchCallCooltrainer_Wilton_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2AC0
gText_Rom_5F2AC0: @ 0x085F2AC0
	.string "タイプに こだわらず なんでも$"
	.if (. - gText_Rom_5F2AC0) != 0x10
	.error "gText_Rom_5F2AC0 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2ACB
	.set gText_Rom_5F2ACB, gText_Rom_5F2AC0 + 0xb

	@ src/data/text/match_call_messages.h:43 gText_MatchCallCooltrainer_Wilton_Intro1
	.globl gText_Rom_5F2AD0
gText_Rom_5F2AD0: @ 0x085F2AD0
	.string "トレーナーズ スクールの$"
	.if (. - gText_Rom_5F2AD0) > 0xd
	.error "gText_Rom_5F2AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AD0) < 0xd
	.space 0xd - (. - gText_Rom_5F2AD0)
	.endif

	@ src/data/text/match_call_messages.h:44 gText_MatchCallCooltrainer_Wilton_Intro2
	.globl gText_Rom_5F2ADD
gText_Rom_5F2ADD: @ 0x085F2ADD
	.string "ゆうとうせい なんだよ$"
	.if (. - gText_Rom_5F2ADD) > 0xc
	.error "gText_Rom_5F2ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2ADD) < 0xc
	.space 0xc - (. - gText_Rom_5F2ADD)
	.endif

	@ src/data/text/match_call_messages.h:46 gText_MatchCallHexManiac_Valerie_Strategy
	.globl gText_Rom_5F2AE9
gText_Rom_5F2AE9: @ 0x085F2AE9
	.string "じわりじわりと くるしめます$"
	.if (. - gText_Rom_5F2AE9) > 0xf
	.error "gText_Rom_5F2AE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AE9) < 0xf
	.space 0xf - (. - gText_Rom_5F2AE9)
	.endif

	@ src/data/text/match_call_messages.h:47 gText_MatchCallHexManiac_Valerie_Pokemon
	.globl gText_Rom_5F2AF8
gText_Rom_5F2AF8: @ 0x085F2AF8
	.string "よるに であうと こわいです$"
	.if (. - gText_Rom_5F2AF8) > 0xf
	.error "gText_Rom_5F2AF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AF8) < 0xf
	.space 0xf - (. - gText_Rom_5F2AF8)
	.endif

	@ src/data/text/match_call_messages.h:48 gText_MatchCallHexManiac_Valerie_Intro1
	.globl gText_Rom_5F2B07
gText_Rom_5F2B07: @ 0x085F2B07
	.string "ほかの ひとには みえない$"
	.if (. - gText_Rom_5F2B07) > 0xe
	.error "gText_Rom_5F2B07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B07) < 0xe
	.space 0xe - (. - gText_Rom_5F2B07)
	.endif

	@ src/data/text/match_call_messages.h:49 gText_MatchCallHexManiac_Valerie_Intro2
	.globl gText_Rom_5F2B15
gText_Rom_5F2B15: @ 0x085F2B15
	.string "モノが みえてしまうの……$"
	.if (. - gText_Rom_5F2B15) > 0xe
	.error "gText_Rom_5F2B15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B15) < 0xe
	.space 0xe - (. - gText_Rom_5F2B15)
	.endif

	@ src/data/text/match_call_messages.h:51 gText_MatchCallLady_Cindy_Strategy
	.globl gText_Rom_5F2B23
gText_Rom_5F2B23: @ 0x085F2B23
	.string "かてば いいのでしょう?$"
	.if (. - gText_Rom_5F2B23) > 0xd
	.error "gText_Rom_5F2B23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B23) < 0xd
	.space 0xd - (. - gText_Rom_5F2B23)
	.endif

	@ src/data/text/match_call_messages.h:52 gText_MatchCallLady_Cindy_Pokemon
	.globl gText_Rom_5F2B30
gText_Rom_5F2B30: @ 0x085F2B30
	.string "ゴージャスタイプよ!$"
	.if (. - gText_Rom_5F2B30) > 0xb
	.error "gText_Rom_5F2B30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B30) < 0xb
	.space 0xb - (. - gText_Rom_5F2B30)
	.endif

	@ src/data/text/match_call_messages.h:53 gText_MatchCallLady_Cindy_Intro1
	.globl gText_Rom_5F2B3B
gText_Rom_5F2B3B: @ 0x085F2B3B
	.string "いえには ポケモンせんようの$"
	.if (. - gText_Rom_5F2B3B) > 0xf
	.error "gText_Rom_5F2B3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B3B) < 0xf
	.space 0xf - (. - gText_Rom_5F2B3B)
	.endif

	@ src/data/text/match_call_messages.h:54 gText_MatchCallLady_Cindy_Intro2
	.globl gText_Rom_5F2B4A
gText_Rom_5F2B4A: @ 0x085F2B4A
	.string "プールが ありますのよ$"
	.if (. - gText_Rom_5F2B4A) > 0xc
	.error "gText_Rom_5F2B4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B4A) < 0xc
	.space 0xc - (. - gText_Rom_5F2B4A)
	.endif

	@ src/data/text/match_call_messages.h:56 gText_MatchCallBeauty_Thalia_Strategy
	.globl gText_Rom_5F2B56
gText_Rom_5F2B56: @ 0x085F2B56
	.string "メロメロに しちゃう!$"
	.if (. - gText_Rom_5F2B56) > 0xc
	.error "gText_Rom_5F2B56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B56) < 0xc
	.space 0xc - (. - gText_Rom_5F2B56)
	.endif

	@ src/data/text/match_call_messages.h:57 gText_MatchCallBeauty_Thalia_Pokemon
	.globl gText_Rom_5F2B62
gText_Rom_5F2B62: @ 0x085F2B62
	.string "おとなの みずタイプよ!$"
	.if (. - gText_Rom_5F2B62) > 0xd
	.error "gText_Rom_5F2B62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B62) < 0xd
	.space 0xd - (. - gText_Rom_5F2B62)
	.endif

	@ src/data/text/match_call_messages.h:58 gText_MatchCallBeauty_Thalia_Intro1
	.globl gText_Rom_5F2B6F
gText_Rom_5F2B6F: @ 0x085F2B6F
	.string "ごうか きゃくせんで$"
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
	.string "せかい いっしゅう してみたい$"
	.if (. - gText_Rom_5F2B7A) != 0x10
	.error "gText_Rom_5F2B7A must retain its original byte length"
	.endif
	.globl gText_Rom_5F2B86
	.set gText_Rom_5F2B86, gText_Rom_5F2B7A + 0xc

	@ src/data/text/match_call_messages.h:61 gText_MatchCallBeauty_Jessica_Strategy
	.globl gText_Rom_5F2B8A
gText_Rom_5F2B8A: @ 0x085F2B8A
	.string "まどわせちゃうわよ$"
	.if (. - gText_Rom_5F2B8A) > 0xa
	.error "gText_Rom_5F2B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B8A) < 0xa
	.space 0xa - (. - gText_Rom_5F2B8A)
	.endif

	@ src/data/text/match_call_messages.h:62 gText_MatchCallBeauty_Jessica_Pokemon
	.globl gText_Rom_5F2B94
gText_Rom_5F2B94: @ 0x085F2B94
	.string "かわいいわよ$"
	.if (. - gText_Rom_5F2B94) > 0x7
	.error "gText_Rom_5F2B94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B94) < 0x7
	.space 0x7 - (. - gText_Rom_5F2B94)
	.endif

	@ src/data/text/match_call_messages.h:63 gText_MatchCallBeauty_Jessica_Intro1
	.globl gText_Rom_5F2B9B
gText_Rom_5F2B9B: @ 0x085F2B9B
	.string "サファリゾーン だいすき!$"
	.if (. - gText_Rom_5F2B9B) > 0xe
	.error "gText_Rom_5F2B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B9B) < 0xe
	.space 0xe - (. - gText_Rom_5F2B9B)
	.endif

	@ src/data/text/match_call_messages.h:64 gText_MatchCallBeauty_Jessica_Intro2
	.globl gText_Rom_5F2BA9
gText_Rom_5F2BA9: @ 0x085F2BA9
	.string "つい あしを はこんじゃう$"
	.if (. - gText_Rom_5F2BA9) > 0xe
	.error "gText_Rom_5F2BA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BA9) < 0xe
	.space 0xe - (. - gText_Rom_5F2BA9)
	.endif

	@ src/data/text/match_call_messages.h:66 gText_MatchCallRichBoy_Winston_Strategy
	.globl gText_Rom_5F2BB7
gText_Rom_5F2BB7: @ 0x085F2BB7
	.string "さくせんなんて ひつようないぜ$"
	.if (. - gText_Rom_5F2BB7) > 0x10
	.error "gText_Rom_5F2BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BB7) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BB7)
	.endif

	@ src/data/text/match_call_messages.h:67 gText_MatchCallRichBoy_Winston_Pokemon
	.globl gText_Rom_5F2BC7
gText_Rom_5F2BC7: @ 0x085F2BC7
	.string "おかねを かけて そだてたよ!$"
	.if (. - gText_Rom_5F2BC7) > 0x10
	.error "gText_Rom_5F2BC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BC7) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BC7)
	.endif

	@ src/data/text/match_call_messages.h:68 gText_MatchCallRichBoy_Winston_Intro1
	.globl gText_Rom_5F2BD7
gText_Rom_5F2BD7: @ 0x085F2BD7
	.string "おかねもちの ボクだから$"
	.if (. - gText_Rom_5F2BD7) > 0xd
	.error "gText_Rom_5F2BD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BD7) < 0xd
	.space 0xd - (. - gText_Rom_5F2BD7)
	.endif

	@ src/data/text/match_call_messages.h:69 gText_MatchCallRichBoy_Winston_Intro2
	.globl gText_Rom_5F2BE4
gText_Rom_5F2BE4: @ 0x085F2BE4
	.string "ポケモン ベッドで ねてるのさ$"
	.if (. - gText_Rom_5F2BE4) > 0x10
	.error "gText_Rom_5F2BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BE4) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BE4)
	.endif

	@ src/data/text/match_call_messages.h:71 gText_MatchCallPokeManiac_Steve_Strategy
	.globl gText_Rom_5F2BF4
gText_Rom_5F2BF4: @ 0x085F2BF4
	.string "パワーで ねじふせる……$"
	.if (. - gText_Rom_5F2BF4) > 0xd
	.error "gText_Rom_5F2BF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BF4) < 0xd
	.space 0xd - (. - gText_Rom_5F2BF4)
	.endif

	@ src/data/text/match_call_messages.h:72 gText_MatchCallPokeManiac_Steve_Pokemon
	.globl gText_Rom_5F2C01
gText_Rom_5F2C01: @ 0x085F2C01
	.string "てつやして てにいれた……$"
	.if (. - gText_Rom_5F2C01) > 0xe
	.error "gText_Rom_5F2C01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C01) < 0xe
	.space 0xe - (. - gText_Rom_5F2C01)
	.endif

	@ src/data/text/match_call_messages.h:73 gText_MatchCallPokeManiac_Steve_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C0F
gText_Rom_5F2C0F: @ 0x085F2C0F
	.string "おおきくて たくましい$"
	.if (. - gText_Rom_5F2C0F) != 0xc
	.error "gText_Rom_5F2C0F must retain its original byte length"
	.endif
	.globl gText_Rom_5F2C15
	.set gText_Rom_5F2C15, gText_Rom_5F2C0F + 0x6

	@ src/data/text/match_call_messages.h:74 gText_MatchCallPokeManiac_Steve_Intro2
	.globl gText_Rom_5F2C1B
gText_Rom_5F2C1B: @ 0x085F2C1B
	.string "ポケモンが さいこう……$"
	.if (. - gText_Rom_5F2C1B) > 0xd
	.error "gText_Rom_5F2C1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C1B) < 0xd
	.space 0xd - (. - gText_Rom_5F2C1B)
	.endif

	@ src/data/text/match_call_messages.h:76 gText_MatchCallSwimmer_Tony_Strategy
	.globl gText_Rom_5F2C28
gText_Rom_5F2C28: @ 0x085F2C28
	.string "ぜんりょくで ぶつかる!$"
	.if (. - gText_Rom_5F2C28) > 0xd
	.error "gText_Rom_5F2C28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C28) < 0xd
	.space 0xd - (. - gText_Rom_5F2C28)
	.endif

	@ src/data/text/match_call_messages.h:77 gText_MatchCallSwimmer_Tony_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C35
gText_Rom_5F2C35: @ 0x085F2C35
	.string "いかした みずタイプ$"
	.if (. - gText_Rom_5F2C35) != 0xb
	.error "gText_Rom_5F2C35 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2C3C
	.set gText_Rom_5F2C3C, gText_Rom_5F2C35 + 0x7

	@ src/data/text/match_call_messages.h:78 gText_MatchCallSwimmer_Tony_Intro1
	.globl gText_Rom_5F2C40
gText_Rom_5F2C40: @ 0x085F2C40
	.string "およげない ときには$"
	.if (. - gText_Rom_5F2C40) > 0xb
	.error "gText_Rom_5F2C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C40) < 0xb
	.space 0xb - (. - gText_Rom_5F2C40)
	.endif

	@ src/data/text/match_call_messages.h:79 gText_MatchCallSwimmer_Tony_Intro2
	.globl gText_Rom_5F2C4B
gText_Rom_5F2C4B: @ 0x085F2C4B
	.string "きんトレ やってるぜ!$"
	.if (. - gText_Rom_5F2C4B) > 0xc
	.error "gText_Rom_5F2C4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C4B) < 0xc
	.space 0xc - (. - gText_Rom_5F2C4B)
	.endif

	@ src/data/text/match_call_messages.h:81 gText_MatchCallBlackBelt_Nob_Strategy
	.globl gText_Rom_5F2C57
gText_Rom_5F2C57: @ 0x085F2C57
	.string "だげきワザで がんがん!$"
	.if (. - gText_Rom_5F2C57) > 0xd
	.error "gText_Rom_5F2C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C57) < 0xd
	.space 0xd - (. - gText_Rom_5F2C57)
	.endif

	@ src/data/text/match_call_messages.h:82 gText_MatchCallBlackBelt_Nob_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C64
gText_Rom_5F2C64: @ 0x085F2C64
	.string "かくとうタイプ$"
	.if (. - gText_Rom_5F2C64) != 0x8
	.error "gText_Rom_5F2C64 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2C68
	.set gText_Rom_5F2C68, gText_Rom_5F2C64 + 0x4

	@ src/data/text/match_call_messages.h:83 gText_MatchCallBlackBelt_Nob_Intro1
	.globl gText_Rom_5F2C6C
gText_Rom_5F2C6C: @ 0x085F2C6C
	.string "じまん じゃないけど$"
	.if (. - gText_Rom_5F2C6C) > 0xb
	.error "gText_Rom_5F2C6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C6C) < 0xb
	.space 0xb - (. - gText_Rom_5F2C6C)
	.endif

	@ src/data/text/match_call_messages.h:84 gText_MatchCallBlackBelt_Nob_Intro2
	.globl gText_Rom_5F2C77
gText_Rom_5F2C77: @ 0x085F2C77
	.string "かわら10まい われるぜ!$"
	.if (. - gText_Rom_5F2C77) > 0xe
	.error "gText_Rom_5F2C77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C77) < 0xe
	.space 0xe - (. - gText_Rom_5F2C77)
	.endif

	@ src/data/text/match_call_messages.h:86 gText_MatchCallBlackBelt_Koji_Strategy
	.globl gText_Rom_5F2C85
gText_Rom_5F2C85: @ 0x085F2C85
	.string "からての ちからを みせてやる$"
	.if (. - gText_Rom_5F2C85) > 0x10
	.error "gText_Rom_5F2C85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C85) < 0x10
	.space 0x10 - (. - gText_Rom_5F2C85)
	.endif

	@ src/data/text/match_call_messages.h:87 gText_MatchCallBlackBelt_Koji_Pokemon
	.globl gText_Rom_5F2C95
gText_Rom_5F2C95: @ 0x085F2C95
	.string "おれの れんしゅう あいて!$"
	.if (. - gText_Rom_5F2C95) > 0xf
	.error "gText_Rom_5F2C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C95) < 0xf
	.space 0xf - (. - gText_Rom_5F2C95)
	.endif

	@ src/data/text/match_call_messages.h:88 gText_MatchCallBlackBelt_Koji_Intro1
	.globl gText_Rom_5F2CA4
gText_Rom_5F2CA4: @ 0x085F2CA4
	.string "おれと はだしで$"
	.if (. - gText_Rom_5F2CA4) > 0x9
	.error "gText_Rom_5F2CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CA4) < 0x9
	.space 0x9 - (. - gText_Rom_5F2CA4)
	.endif

	@ src/data/text/match_call_messages.h:89 gText_MatchCallBlackBelt_Koji_Intro2
	.globl gText_Rom_5F2CAD
gText_Rom_5F2CAD: @ 0x085F2CAD
	.string "かたりあって みないか?$"
	.if (. - gText_Rom_5F2CAD) > 0xd
	.error "gText_Rom_5F2CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CAD) < 0xd
	.space 0xd - (. - gText_Rom_5F2CAD)
	.endif

	@ src/data/text/match_call_messages.h:91 gText_MatchCallGuitarist_Fernando_Strategy
	.globl gText_Rom_5F2CBA
gText_Rom_5F2CBA: @ 0x085F2CBA
	.string "しびれる サウンド だゼ!$"
	.if (. - gText_Rom_5F2CBA) > 0xe
	.error "gText_Rom_5F2CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CBA) < 0xe
	.space 0xe - (. - gText_Rom_5F2CBA)
	.endif

	@ src/data/text/match_call_messages.h:92 gText_MatchCallGuitarist_Fernando_Pokemon
	.globl gText_Rom_5F2CC8
gText_Rom_5F2CC8: @ 0x085F2CC8
	.string "でんきと おとの コンビだゼ!$"
	.if (. - gText_Rom_5F2CC8) > 0x10
	.error "gText_Rom_5F2CC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CC8) < 0x10
	.space 0x10 - (. - gText_Rom_5F2CC8)
	.endif

	@ src/data/text/match_call_messages.h:93 gText_MatchCallGuitarist_Fernando_Intro1
	.globl gText_Rom_5F2CD8
gText_Rom_5F2CD8: @ 0x085F2CD8
	.string "オレの つくった きょくで$"
	.if (. - gText_Rom_5F2CD8) > 0xe
	.error "gText_Rom_5F2CD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CD8) < 0xe
	.space 0xe - (. - gText_Rom_5F2CD8)
	.endif

	@ src/data/text/match_call_messages.h:94 gText_MatchCallGuitarist_Fernando_Intro2
	.globl gText_Rom_5F2CE6
gText_Rom_5F2CE6: @ 0x085F2CE6
	.string "みんな しびれるゼ!$"
	.if (. - gText_Rom_5F2CE6) > 0xb
	.error "gText_Rom_5F2CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CE6) < 0xb
	.space 0xb - (. - gText_Rom_5F2CE6)
	.endif

	@ src/data/text/match_call_messages.h:96 gText_MatchCallGuitarist_Dalton_Strategy
	.globl gText_Rom_5F2CF1
gText_Rom_5F2CF1: @ 0x085F2CF1
	.string "ビリビリ しびれさせるゼ!$"
	.if (. - gText_Rom_5F2CF1) > 0xe
	.error "gText_Rom_5F2CF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CF1) < 0xe
	.space 0xe - (. - gText_Rom_5F2CF1)
	.endif

	@ src/data/text/match_call_messages.h:97 gText_MatchCallGuitarist_Dalton_Pokemon
	.globl gText_Rom_5F2CFF
gText_Rom_5F2CFF: @ 0x085F2CFF
	.string "でんきの ちからを みせるゼ!$"
	.if (. - gText_Rom_5F2CFF) > 0x10
	.error "gText_Rom_5F2CFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CFF) < 0x10
	.space 0x10 - (. - gText_Rom_5F2CFF)
	.endif

	@ src/data/text/match_call_messages.h:98 gText_MatchCallGuitarist_Dalton_Intro1
	.globl gText_Rom_5F2D0F
gText_Rom_5F2D0F: @ 0x085F2D0F
	.string "ぼくの こころの メロディで$"
	.if (. - gText_Rom_5F2D0F) > 0xf
	.error "gText_Rom_5F2D0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D0F) < 0xf
	.space 0xf - (. - gText_Rom_5F2D0F)
	.endif

	@ src/data/text/match_call_messages.h:99 gText_MatchCallGuitarist_Dalton_Intro2
	.globl gText_Rom_5F2D1E
gText_Rom_5F2D1E: @ 0x085F2D1E
	.string "みんなを なかせてみたいよ$"
	.if (. - gText_Rom_5F2D1E) > 0xe
	.error "gText_Rom_5F2D1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D1E) < 0xe
	.space 0xe - (. - gText_Rom_5F2D1E)
	.endif

	@ src/data/text/match_call_messages.h:101 gText_MatchCallKindler_Bernie_Strategy
	.globl gText_Rom_5F2D2C
gText_Rom_5F2D2C: @ 0x085F2D2C
	.string "ほのおで すべて やきつくす!$"
	.if (. - gText_Rom_5F2D2C) > 0x10
	.error "gText_Rom_5F2D2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D2C) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D2C)
	.endif

	@ src/data/text/match_call_messages.h:102 gText_MatchCallKindler_Bernie_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2D3C
gText_Rom_5F2D3C: @ 0x085F2D3C
	.string "やけどしそうな ポケモン$"
	.if (. - gText_Rom_5F2D3C) != 0xd
	.error "gText_Rom_5F2D3C must retain its original byte length"
	.endif
	.globl gText_Rom_5F2D44
	.set gText_Rom_5F2D44, gText_Rom_5F2D3C + 0x8

	@ src/data/text/match_call_messages.h:103 gText_MatchCallKindler_Bernie_Intro1
	.globl gText_Rom_5F2D49
gText_Rom_5F2D49: @ 0x085F2D49
	.string "キャンプファイヤーの ときは$"
	.if (. - gText_Rom_5F2D49) > 0xf
	.error "gText_Rom_5F2D49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D49) < 0xf
	.space 0xf - (. - gText_Rom_5F2D49)
	.endif

	@ src/data/text/match_call_messages.h:104 gText_MatchCallKindler_Bernie_Intro2
	.globl gText_Rom_5F2D58
gText_Rom_5F2D58: @ 0x085F2D58
	.string "ひを けす みずを わすれるな$"
	.if (. - gText_Rom_5F2D58) > 0x10
	.error "gText_Rom_5F2D58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D58) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D58)
	.endif

	@ src/data/text/match_call_messages.h:106 gText_MatchCallCamper_Ethan_Strategy
	.globl gText_Rom_5F2D68
gText_Rom_5F2D68: @ 0x085F2D68
	.string "ねばって ねばって ねばる!$"
	.if (. - gText_Rom_5F2D68) > 0xf
	.error "gText_Rom_5F2D68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D68) < 0xf
	.space 0xf - (. - gText_Rom_5F2D68)
	.endif

	@ src/data/text/match_call_messages.h:107 gText_MatchCallCamper_Ethan_Pokemon
	.globl gText_Rom_5F2D77
gText_Rom_5F2D77: @ 0x085F2D77
	.string "どんな ポケモンでも そだてる$"
	.if (. - gText_Rom_5F2D77) > 0x10
	.error "gText_Rom_5F2D77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D77) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D77)
	.endif

	@ src/data/text/match_call_messages.h:108 gText_MatchCallCamper_Ethan_Intro1
	.globl gText_Rom_5F2D87
gText_Rom_5F2D87: @ 0x085F2D87
	.string "しぜんの なかで そだてた$"
	.if (. - gText_Rom_5F2D87) > 0xe
	.error "gText_Rom_5F2D87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D87) < 0xe
	.space 0xe - (. - gText_Rom_5F2D87)
	.endif

	@ src/data/text/match_call_messages.h:109 gText_MatchCallCamper_Ethan_Intro2
	.globl gText_Rom_5F2D95
gText_Rom_5F2D95: @ 0x085F2D95
	.string "ポケモンは つよくなるよ!$"
	.if (. - gText_Rom_5F2D95) > 0xe
	.error "gText_Rom_5F2D95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D95) < 0xe
	.space 0xe - (. - gText_Rom_5F2D95)
	.endif

	@ src/data/text/match_call_messages.h:111 gText_MatchCallOldCouple_JohnAndJay_Strategy
	.globl gText_Rom_5F2DA3
gText_Rom_5F2DA3: @ 0x085F2DA3
	.string "ふうふの あいで かつのよ$"
	.if (. - gText_Rom_5F2DA3) > 0xe
	.error "gText_Rom_5F2DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DA3) < 0xe
	.space 0xe - (. - gText_Rom_5F2DA3)
	.endif

	@ src/data/text/match_call_messages.h:112 gText_MatchCallOldCouple_JohnAndJay_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2DB1
gText_Rom_5F2DB1: @ 0x085F2DB1
	.string "ながねん いっしょの ポケモン$"
	.if (. - gText_Rom_5F2DB1) != 0x10
	.error "gText_Rom_5F2DB1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2DBC
	.set gText_Rom_5F2DBC, gText_Rom_5F2DB1 + 0xb

	@ src/data/text/match_call_messages.h:113 gText_MatchCallOldCouple_JohnAndJay_Intro1
	.globl gText_Rom_5F2DC1
gText_Rom_5F2DC1: @ 0x085F2DC1
	.string "けっこんして 50ねん$"
	.if (. - gText_Rom_5F2DC1) > 0xc
	.error "gText_Rom_5F2DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DC1) < 0xc
	.space 0xc - (. - gText_Rom_5F2DC1)
	.endif

	@ src/data/text/match_call_messages.h:114 gText_MatchCallOldCouple_JohnAndJay_Intro2
	.globl gText_Rom_5F2DCD
gText_Rom_5F2DCD: @ 0x085F2DCD
	.string "ポケモン そだてまくりじゃよ$"
	.if (. - gText_Rom_5F2DCD) > 0xf
	.error "gText_Rom_5F2DCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DCD) < 0xf
	.space 0xf - (. - gText_Rom_5F2DCD)
	.endif

	@ src/data/text/match_call_messages.h:116 gText_MatchCallBugManiac_Jeffrey_Strategy (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2DDC
gText_Rom_5F2DDC: @ 0x085F2DDC
	.string "たたみかける ような こうげき$"
	.if (. - gText_Rom_5F2DDC) != 0x10
	.error "gText_Rom_5F2DDC must retain its original byte length"
	.endif
	.globl gText_Rom_5F2DE7
	.set gText_Rom_5F2DE7, gText_Rom_5F2DDC + 0xb

	@ src/data/text/match_call_messages.h:117 gText_MatchCallBugManiac_Jeffrey_Pokemon
	.globl gText_Rom_5F2DEC
gText_Rom_5F2DEC: @ 0x085F2DEC
	.string "むしポケモンって かっこいいぜ$"
	.if (. - gText_Rom_5F2DEC) > 0x10
	.error "gText_Rom_5F2DEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DEC) < 0x10
	.space 0x10 - (. - gText_Rom_5F2DEC)
	.endif

	@ src/data/text/match_call_messages.h:118 gText_MatchCallBugManiac_Jeffrey_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2DFC
gText_Rom_5F2DFC: @ 0x085F2DFC
	.string "まいにち…… もりに はいって$"
	.if (. - gText_Rom_5F2DFC) != 0x10
	.error "gText_Rom_5F2DFC must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E08
	.set gText_Rom_5F2E08, gText_Rom_5F2DFC + 0xc

	@ src/data/text/match_call_messages.h:119 gText_MatchCallBugManiac_Jeffrey_Intro2
	.globl gText_Rom_5F2E0C
gText_Rom_5F2E0C: @ 0x085F2E0C
	.string "むしポケモン つかまえる……$"
	.if (. - gText_Rom_5F2E0C) > 0xf
	.error "gText_Rom_5F2E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E0C) < 0xf
	.space 0xf - (. - gText_Rom_5F2E0C)
	.endif

	@ src/data/text/match_call_messages.h:121 gText_MatchCallPsychic_Cameron_Strategy
	.globl gText_Rom_5F2E1B
gText_Rom_5F2E1B: @ 0x085F2E1B
	.string "あいてを ほんろう させる$"
	.if (. - gText_Rom_5F2E1B) > 0xe
	.error "gText_Rom_5F2E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E1B) < 0xe
	.space 0xe - (. - gText_Rom_5F2E1B)
	.endif

	@ src/data/text/match_call_messages.h:122 gText_MatchCallPsychic_Cameron_Pokemon
	.globl gText_Rom_5F2E29
gText_Rom_5F2E29: @ 0x085F2E29
	.string "ふしぎな ちからを もつ ヤツ$"
	.if (. - gText_Rom_5F2E29) > 0x10
	.error "gText_Rom_5F2E29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E29) < 0x10
	.space 0x10 - (. - gText_Rom_5F2E29)
	.endif

	@ src/data/text/match_call_messages.h:123 gText_MatchCallPsychic_Cameron_Intro1
	.globl gText_Rom_5F2E39
gText_Rom_5F2E39: @ 0x085F2E39
	.string "おまえの かんがえは$"
	.if (. - gText_Rom_5F2E39) > 0xb
	.error "gText_Rom_5F2E39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E39) < 0xb
	.space 0xb - (. - gText_Rom_5F2E39)
	.endif

	@ src/data/text/match_call_messages.h:124 gText_MatchCallPsychic_Cameron_Intro2
	.globl gText_Rom_5F2E44
gText_Rom_5F2E44: @ 0x085F2E44
	.string "すべて おみとおしだ!$"
	.if (. - gText_Rom_5F2E44) > 0xc
	.error "gText_Rom_5F2E44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E44) < 0xc
	.space 0xc - (. - gText_Rom_5F2E44)
	.endif

	@ src/data/text/match_call_messages.h:126 gText_MatchCallPsychic_Jacki_Strategy
	.globl gText_Rom_5F2E50
gText_Rom_5F2E50: @ 0x085F2E50
	.string "フルパワーで たたかう$"
	.if (. - gText_Rom_5F2E50) > 0xc
	.error "gText_Rom_5F2E50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E50) < 0xc
	.space 0xc - (. - gText_Rom_5F2E50)
	.endif

	@ src/data/text/match_call_messages.h:127 gText_MatchCallPsychic_Jacki_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E5C
gText_Rom_5F2E5C: @ 0x085F2E5C
	.string "ナゾの おおい ポケモン$"
	.if (. - gText_Rom_5F2E5C) != 0xd
	.error "gText_Rom_5F2E5C must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E64
	.set gText_Rom_5F2E64, gText_Rom_5F2E5C + 0x8

	@ src/data/text/match_call_messages.h:128 gText_MatchCallPsychic_Jacki_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E69
gText_Rom_5F2E69: @ 0x085F2E69
	.string "ほんと いうと わたし$"
	.if (. - gText_Rom_5F2E69) != 0xc
	.error "gText_Rom_5F2E69 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E71
	.set gText_Rom_5F2E71, gText_Rom_5F2E69 + 0x8

	@ src/data/text/match_call_messages.h:129 gText_MatchCallPsychic_Jacki_Intro2
	.globl gText_Rom_5F2E75
gText_Rom_5F2E75: @ 0x085F2E75
	.string "テレパシーで はなしてたの$"
	.if (. - gText_Rom_5F2E75) > 0xe
	.error "gText_Rom_5F2E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E75) < 0xe
	.space 0xe - (. - gText_Rom_5F2E75)
	.endif

	@ src/data/text/match_call_messages.h:131 gText_MatchCallGentleman_Walter_Strategy
	.globl gText_Rom_5F2E83
gText_Rom_5F2E83: @ 0x085F2E83
	.string "あわてず さわがず$"
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
	.string "きひん あふれる ポケモン$"
	.if (. - gText_Rom_5F2E8D) != 0xe
	.error "gText_Rom_5F2E8D must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E96
	.set gText_Rom_5F2E96, gText_Rom_5F2E8D + 0x9

	@ src/data/text/match_call_messages.h:133 gText_MatchCallGentleman_Walter_Intro1
	.globl gText_Rom_5F2E9B
gText_Rom_5F2E9B: @ 0x085F2E9B
	.string "がいこくの おみやげで$"
	.if (. - gText_Rom_5F2E9B) > 0xc
	.error "gText_Rom_5F2E9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E9B) < 0xc
	.space 0xc - (. - gText_Rom_5F2E9B)
	.endif

	@ src/data/text/match_call_messages.h:134 gText_MatchCallGentleman_Walter_Intro2
	.globl gText_Rom_5F2EA7
gText_Rom_5F2EA7: @ 0x085F2EA7
	.string "まいにちの ティータイムです$"
	.if (. - gText_Rom_5F2EA7) > 0xf
	.error "gText_Rom_5F2EA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EA7) < 0xf
	.space 0xf - (. - gText_Rom_5F2EA7)
	.endif

	@ src/data/text/match_call_messages.h:136 gText_MatchCallSchoolKid_Karen_Strategy
	.globl gText_Rom_5F2EB6
gText_Rom_5F2EB6: @ 0x085F2EB6
	.string "あたまを つかって たたかうよ$"
	.if (. - gText_Rom_5F2EB6) > 0x10
	.error "gText_Rom_5F2EB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EB6) < 0x10
	.space 0x10 - (. - gText_Rom_5F2EB6)
	.endif

	@ src/data/text/match_call_messages.h:137 gText_MatchCallSchoolKid_Karen_Pokemon
	.globl gText_Rom_5F2EC6
gText_Rom_5F2EC6: @ 0x085F2EC6
	.string "ポケモンは なんでも すき!$"
	.if (. - gText_Rom_5F2EC6) > 0xf
	.error "gText_Rom_5F2EC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EC6) < 0xf
	.space 0xf - (. - gText_Rom_5F2EC6)
	.endif

	@ src/data/text/match_call_messages.h:138 gText_MatchCallSchoolKid_Karen_Intro1
	.globl gText_Rom_5F2ED5
gText_Rom_5F2ED5: @ 0x085F2ED5
	.string "テストで いいてん とると$"
	.if (. - gText_Rom_5F2ED5) > 0xe
	.error "gText_Rom_5F2ED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2ED5) < 0xe
	.space 0xe - (. - gText_Rom_5F2ED5)
	.endif

	@ src/data/text/match_call_messages.h:139 gText_MatchCallSchoolKid_Karen_Intro2
	.globl gText_Rom_5F2EE3
gText_Rom_5F2EE3: @ 0x085F2EE3
	.string "パパが おこづかい くれるの!$"
	.if (. - gText_Rom_5F2EE3) > 0x10
	.error "gText_Rom_5F2EE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EE3) < 0x10
	.space 0x10 - (. - gText_Rom_5F2EE3)
	.endif

	@ src/data/text/match_call_messages.h:141 gText_MatchCallSchoolKid_Jerry_Strategy
	.globl gText_Rom_5F2EF3
gText_Rom_5F2EF3: @ 0x085F2EF3
	.string "ちしきなら まけないぜ!$"
	.if (. - gText_Rom_5F2EF3) > 0xd
	.error "gText_Rom_5F2EF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EF3) < 0xd
	.space 0xd - (. - gText_Rom_5F2EF3)
	.endif

	@ src/data/text/match_call_messages.h:142 gText_MatchCallSchoolKid_Jerry_Pokemon
	.globl gText_Rom_5F2F00
gText_Rom_5F2F00: @ 0x085F2F00
	.string "かしこそうな ポケモン!$"
	.if (. - gText_Rom_5F2F00) > 0xd
	.error "gText_Rom_5F2F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F00) < 0xd
	.space 0xd - (. - gText_Rom_5F2F00)
	.endif

	@ src/data/text/match_call_messages.h:143 gText_MatchCallSchoolKid_Jerry_Intro1
	.globl gText_Rom_5F2F0D
gText_Rom_5F2F0D: @ 0x085F2F0D
	.string "しょうらいは ポケモンの$"
	.if (. - gText_Rom_5F2F0D) > 0xd
	.error "gText_Rom_5F2F0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F0D) < 0xd
	.space 0xd - (. - gText_Rom_5F2F0D)
	.endif

	@ src/data/text/match_call_messages.h:144 gText_MatchCallSchoolKid_Jerry_Intro2
	.globl gText_Rom_5F2F1A
gText_Rom_5F2F1A: @ 0x085F2F1A
	.string "けんきゅうしゃに なりたい!$"
	.if (. - gText_Rom_5F2F1A) > 0xf
	.error "gText_Rom_5F2F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F1A) < 0xf
	.space 0xf - (. - gText_Rom_5F2F1A)
	.endif

	@ src/data/text/match_call_messages.h:146 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy
	.globl gText_Rom_5F2F29
gText_Rom_5F2F29: @ 0x085F2F29
	.string "ふたりで そうだん!$"
	.if (. - gText_Rom_5F2F29) > 0xb
	.error "gText_Rom_5F2F29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F29) < 0xb
	.space 0xb - (. - gText_Rom_5F2F29)
	.endif

	@ src/data/text/match_call_messages.h:147 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
	.globl gText_Rom_5F2F34
gText_Rom_5F2F34: @ 0x085F2F34
	.string "ふたりが すきな ポケモン!$"
	.if (. - gText_Rom_5F2F34) > 0xf
	.error "gText_Rom_5F2F34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F34) < 0xf
	.space 0xf - (. - gText_Rom_5F2F34)
	.endif

	@ src/data/text/match_call_messages.h:148 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
	.globl gText_Rom_5F2F43
gText_Rom_5F2F43: @ 0x085F2F43
	.string "わたしたち ポケモンクラブの$"
	.if (. - gText_Rom_5F2F43) > 0xf
	.error "gText_Rom_5F2F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F43) < 0xf
	.space 0xf - (. - gText_Rom_5F2F43)
	.endif

	@ src/data/text/match_call_messages.h:149 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2F52
gText_Rom_5F2F52: @ 0x085F2F52
	.string "センパイと コウハイでーす!$"
	.if (. - gText_Rom_5F2F52) != 0xf
	.error "gText_Rom_5F2F52 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2F5C
	.set gText_Rom_5F2F5C, gText_Rom_5F2F52 + 0xa

	@ src/data/text/match_call_messages.h:151 gText_MatchCallPokefan_Isabel_Strategy
	.globl gText_Rom_5F2F61
gText_Rom_5F2F61: @ 0x085F2F61
	.string "がんばれ ポケモンちゃん!$"
	.if (. - gText_Rom_5F2F61) > 0xe
	.error "gText_Rom_5F2F61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F61) < 0xe
	.space 0xe - (. - gText_Rom_5F2F61)
	.endif

	@ src/data/text/match_call_messages.h:152 gText_MatchCallPokefan_Isabel_Pokemon
	.globl gText_Rom_5F2F6F
gText_Rom_5F2F6F: @ 0x085F2F6F
	.string "すき きらいは なしよ$"
	.if (. - gText_Rom_5F2F6F) > 0xc
	.error "gText_Rom_5F2F6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F6F) < 0xc
	.space 0xc - (. - gText_Rom_5F2F6F)
	.endif

	@ src/data/text/match_call_messages.h:153 gText_MatchCallPokefan_Isabel_Intro1
	.globl gText_Rom_5F2F7B
gText_Rom_5F2F7B: @ 0x085F2F7B
	.string "ゆうはんの かいもの ついでに$"
	.if (. - gText_Rom_5F2F7B) > 0x10
	.error "gText_Rom_5F2F7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F7B) < 0x10
	.space 0x10 - (. - gText_Rom_5F2F7B)
	.endif

	@ src/data/text/match_call_messages.h:154 gText_MatchCallPokefan_Isabel_Intro2
	.globl gText_Rom_5F2F8B
gText_Rom_5F2F8B: @ 0x085F2F8B
	.string "ひとしょうぶ してますの$"
	.if (. - gText_Rom_5F2F8B) > 0xd
	.error "gText_Rom_5F2F8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F8B) < 0xd
	.space 0xd - (. - gText_Rom_5F2F8B)
	.endif

	@ src/data/text/match_call_messages.h:156 gText_MatchCallPokefan_Miguel_Strategy
	.globl gText_Rom_5F2F98
gText_Rom_5F2F98: @ 0x085F2F98
	.string "あいじょうで しょうぶ!$"
	.if (. - gText_Rom_5F2F98) > 0xd
	.error "gText_Rom_5F2F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F98) < 0xd
	.space 0xd - (. - gText_Rom_5F2F98)
	.endif

	@ src/data/text/match_call_messages.h:157 gText_MatchCallPokefan_Miguel_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2FA5
gText_Rom_5F2FA5: @ 0x085F2FA5
	.string "あいを そそいだ ポケモン$"
	.if (. - gText_Rom_5F2FA5) != 0xe
	.error "gText_Rom_5F2FA5 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2FAE
	.set gText_Rom_5F2FAE, gText_Rom_5F2FA5 + 0x9

	@ src/data/text/match_call_messages.h:158 gText_MatchCallPokefan_Miguel_Intro1
	.globl gText_Rom_5F2FB3
gText_Rom_5F2FB3: @ 0x085F2FB3
	.string "ポケモンと しんらいかんけいを$"
	.if (. - gText_Rom_5F2FB3) > 0x10
	.error "gText_Rom_5F2FB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FB3) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FB3)
	.endif

	@ src/data/text/match_call_messages.h:159 gText_MatchCallPokefan_Miguel_Intro2
	.globl gText_Rom_5F2FC3
gText_Rom_5F2FC3: @ 0x085F2FC3
	.string "きずく ことが だいじだよ!$"
	.if (. - gText_Rom_5F2FC3) > 0xf
	.error "gText_Rom_5F2FC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FC3) < 0xf
	.space 0xf - (. - gText_Rom_5F2FC3)
	.endif

	@ src/data/text/match_call_messages.h:161 gText_MatchCallExpert_Timothy_Strategy
	.globl gText_Rom_5F2FD2
gText_Rom_5F2FD2: @ 0x085F2FD2
	.string "おぬしの こうげきは みきった$"
	.if (. - gText_Rom_5F2FD2) > 0x10
	.error "gText_Rom_5F2FD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FD2) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FD2)
	.endif

	@ src/data/text/match_call_messages.h:162 gText_MatchCallExpert_Timothy_Pokemon
	.globl gText_Rom_5F2FE2
gText_Rom_5F2FE2: @ 0x085F2FE2
	.string "かくとうの おうぎを みよ! $"
	.if (. - gText_Rom_5F2FE2) > 0x10
	.error "gText_Rom_5F2FE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FE2) < 0x10
	.space 0x10 - (. - gText_Rom_5F2FE2)
	.endif

	@ src/data/text/match_call_messages.h:163 gText_MatchCallExpert_Timothy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2FF2
gText_Rom_5F2FF2: @ 0x085F2FF2
	.string "わかいもんには まだまだ$"
	.if (. - gText_Rom_5F2FF2) != 0xd
	.error "gText_Rom_5F2FF2 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2FFA
	.set gText_Rom_5F2FFA, gText_Rom_5F2FF2 + 0x8

	@ src/data/text/match_call_messages.h:164 gText_MatchCallExpert_Timothy_Intro2
	.globl gText_Rom_5F2FFF
gText_Rom_5F2FFF: @ 0x085F2FFF
	.string "まけてられんわ!$"
	.if (. - gText_Rom_5F2FFF) > 0x9
	.error "gText_Rom_5F2FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FFF) < 0x9
	.space 0x9 - (. - gText_Rom_5F2FFF)
	.endif

	@ src/data/text/match_call_messages.h:166 gText_MatchCallExpert_Shelby_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3008
gText_Rom_5F3008: @ 0x085F3008
	.string "ぼうぎょ しつつ こうげき!$"
	.if (. - gText_Rom_5F3008) != 0xf
	.error "gText_Rom_5F3008 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3010
	.set gText_Rom_5F3010, gText_Rom_5F3008 + 0x8

	@ src/data/text/match_call_messages.h:167 gText_MatchCallExpert_Shelby_Pokemon
	.globl gText_Rom_5F3017
gText_Rom_5F3017: @ 0x085F3017
	.string "かくとうタイプ じゃよ$"
	.if (. - gText_Rom_5F3017) > 0xc
	.error "gText_Rom_5F3017 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3017) < 0xc
	.space 0xc - (. - gText_Rom_5F3017)
	.endif

	@ src/data/text/match_call_messages.h:168 gText_MatchCallExpert_Shelby_Intro1
	.globl gText_Rom_5F3023
gText_Rom_5F3023: @ 0x085F3023
	.string "としよりには としよりなりの$"
	.if (. - gText_Rom_5F3023) > 0xf
	.error "gText_Rom_5F3023 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3023) < 0xf
	.space 0xf - (. - gText_Rom_5F3023)
	.endif

	@ src/data/text/match_call_messages.h:169 gText_MatchCallExpert_Shelby_Intro2
	.globl gText_Rom_5F3032
gText_Rom_5F3032: @ 0x085F3032
	.string "たたかいかたが あるのじゃ$"
	.if (. - gText_Rom_5F3032) > 0xe
	.error "gText_Rom_5F3032 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3032) < 0xe
	.space 0xe - (. - gText_Rom_5F3032)
	.endif

	@ src/data/text/match_call_messages.h:171 gText_MatchCallYoungster_Calvin_Strategy
	.globl gText_Rom_5F3040
gText_Rom_5F3040: @ 0x085F3040
	.string "できること やってやるぜ!$"
	.if (. - gText_Rom_5F3040) > 0xe
	.error "gText_Rom_5F3040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3040) < 0xe
	.space 0xe - (. - gText_Rom_5F3040)
	.endif

	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F304E
gText_Rom_5F304E: @ 0x085F304E
	.string "いろんな タイプで しょうぶ$"
	.if (. - gText_Rom_5F304E) != 0xf
	.error "gText_Rom_5F304E must retain its original byte length"
	.endif
	.globl gText_Rom_5F3058
	.set gText_Rom_5F3058, gText_Rom_5F304E + 0xa

	@ src/data/text/match_call_messages.h:173 gText_MatchCallYoungster_Calvin_Intro1
	.globl gText_Rom_5F305D
gText_Rom_5F305D: @ 0x085F305D
	.string "ジムリーダーに かつまで$"
	.if (. - gText_Rom_5F305D) > 0xd
	.error "gText_Rom_5F305D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F305D) < 0xd
	.space 0xd - (. - gText_Rom_5F305D)
	.endif

	@ src/data/text/match_call_messages.h:174 gText_MatchCallYoungster_Calvin_Intro2
	.globl gText_Rom_5F306A
gText_Rom_5F306A: @ 0x085F306A
	.string "がんばるぜ!$"
	.if (. - gText_Rom_5F306A) > 0x7
	.error "gText_Rom_5F306A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F306A) < 0x7
	.space 0x7 - (. - gText_Rom_5F306A)
	.endif

	@ src/data/text/match_call_messages.h:176 gText_MatchCallFisherman_Elliot_Strategy
	.globl gText_Rom_5F3071
gText_Rom_5F3071: @ 0x085F3071
	.string "じっくり たたかう!$"
	.if (. - gText_Rom_5F3071) > 0xb
	.error "gText_Rom_5F3071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3071) < 0xb
	.space 0xb - (. - gText_Rom_5F3071)
	.endif

	@ src/data/text/match_call_messages.h:177 gText_MatchCallFisherman_Elliot_Pokemon
	.globl gText_Rom_5F307C
gText_Rom_5F307C: @ 0x085F307C
	.string "みずポケモンで しょうぶ!$"
	.if (. - gText_Rom_5F307C) > 0xe
	.error "gText_Rom_5F307C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F307C) < 0xe
	.space 0xe - (. - gText_Rom_5F307C)
	.endif

	@ src/data/text/match_call_messages.h:178 gText_MatchCallFisherman_Elliot_Intro1
	.globl gText_Rom_5F308A
gText_Rom_5F308A: @ 0x085F308A
	.string "あんなに でっかい ポケモンを$"
	.if (. - gText_Rom_5F308A) > 0x10
	.error "gText_Rom_5F308A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F308A) < 0x10
	.space 0x10 - (. - gText_Rom_5F308A)
	.endif

	@ src/data/text/match_call_messages.h:179 gText_MatchCallFisherman_Elliot_Intro2
	.globl gText_Rom_5F309A
gText_Rom_5F309A: @ 0x085F309A
	.string "つったのは せかいで オレだけ$"
	.if (. - gText_Rom_5F309A) > 0x10
	.error "gText_Rom_5F309A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F309A) < 0x10
	.space 0x10 - (. - gText_Rom_5F309A)
	.endif

	@ src/data/text/match_call_messages.h:181 gText_MatchCallTriathlete_Isaiah_Strategy
	.globl gText_Rom_5F30AA
gText_Rom_5F30AA: @ 0x085F30AA
	.string "ちのりを りようする$"
	.if (. - gText_Rom_5F30AA) > 0xb
	.error "gText_Rom_5F30AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30AA) < 0xb
	.space 0xb - (. - gText_Rom_5F30AA)
	.endif

	@ src/data/text/match_call_messages.h:182 gText_MatchCallTriathlete_Isaiah_Pokemon
	.globl gText_Rom_5F30B5
gText_Rom_5F30B5: @ 0x085F30B5
	.string "みずタイプ ばんざい!$"
	.if (. - gText_Rom_5F30B5) > 0xc
	.error "gText_Rom_5F30B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30B5) < 0xc
	.space 0xc - (. - gText_Rom_5F30B5)
	.endif

	@ src/data/text/match_call_messages.h:183 gText_MatchCallTriathlete_Isaiah_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F30C1
gText_Rom_5F30C1: @ 0x085F30C1
	.string "みずあそび している$"
	.if (. - gText_Rom_5F30C1) != 0xb
	.error "gText_Rom_5F30C1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F30C8
	.set gText_Rom_5F30C8, gText_Rom_5F30C1 + 0x7

	@ src/data/text/match_call_messages.h:184 gText_MatchCallTriathlete_Isaiah_Intro2
	.globl gText_Rom_5F30CC
gText_Rom_5F30CC: @ 0x085F30CC
	.string "かいパンやろうには まけないぜ$"
	.if (. - gText_Rom_5F30CC) > 0x10
	.error "gText_Rom_5F30CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30CC) < 0x10
	.space 0x10 - (. - gText_Rom_5F30CC)
	.endif

	@ src/data/text/match_call_messages.h:186 gText_MatchCallTriathlete_Maria_Strategy
	.globl gText_Rom_5F30DC
gText_Rom_5F30DC: @ 0x085F30DC
	.string "スピード いのち!$"
	.if (. - gText_Rom_5F30DC) > 0xa
	.error "gText_Rom_5F30DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30DC) < 0xa
	.space 0xa - (. - gText_Rom_5F30DC)
	.endif

	@ src/data/text/match_call_messages.h:187 gText_MatchCallTriathlete_Maria_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F30E6
gText_Rom_5F30E6: @ 0x085F30E6
	.string "すばやい ポケモンを つかう$"
	.if (. - gText_Rom_5F30E6) != 0xf
	.error "gText_Rom_5F30E6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F30F1
	.set gText_Rom_5F30F1, gText_Rom_5F30E6 + 0xb

	@ src/data/text/match_call_messages.h:188 gText_MatchCallTriathlete_Maria_Intro1
	.globl gText_Rom_5F30F5
gText_Rom_5F30F5: @ 0x085F30F5
	.string "マラソンは じぶんとの$"
	.if (. - gText_Rom_5F30F5) > 0xc
	.error "gText_Rom_5F30F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30F5) < 0xc
	.space 0xc - (. - gText_Rom_5F30F5)
	.endif

	@ src/data/text/match_call_messages.h:189 gText_MatchCallTriathlete_Maria_Intro2
	.globl gText_Rom_5F3101
gText_Rom_5F3101: @ 0x085F3101
	.string "たたかい なのよ!$"
	.if (. - gText_Rom_5F3101) > 0xa
	.error "gText_Rom_5F3101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3101) < 0xa
	.space 0xa - (. - gText_Rom_5F3101)
	.endif

	@ src/data/text/match_call_messages.h:191 gText_MatchCallTriathlete_Abigail_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F310B
gText_Rom_5F310B: @ 0x085F310B
	.string "ぼうぎょを だいじに$"
	.if (. - gText_Rom_5F310B) != 0xb
	.error "gText_Rom_5F310B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3111
	.set gText_Rom_5F3111, gText_Rom_5F310B + 0x6

	@ src/data/text/match_call_messages.h:192 gText_MatchCallTriathlete_Abigail_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3116
gText_Rom_5F3116: @ 0x085F3116
	.string "わたしの ポケモンは カチカチ$"
	.if (. - gText_Rom_5F3116) != 0x10
	.error "gText_Rom_5F3116 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3121
	.set gText_Rom_5F3121, gText_Rom_5F3116 + 0xb

	@ src/data/text/match_call_messages.h:193 gText_MatchCallTriathlete_Abigail_Intro1
	.globl gText_Rom_5F3126
gText_Rom_5F3126: @ 0x085F3126
	.string "ダイエットの つもりだったのに$"
	.if (. - gText_Rom_5F3126) > 0x10
	.error "gText_Rom_5F3126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3126) < 0x10
	.space 0x10 - (. - gText_Rom_5F3126)
	.endif

	@ src/data/text/match_call_messages.h:194 gText_MatchCallTriathlete_Abigail_Intro2
	.globl gText_Rom_5F3136
gText_Rom_5F3136: @ 0x085F3136
	.string "たのしくて のめりこんじゃった$"
	.if (. - gText_Rom_5F3136) > 0x10
	.error "gText_Rom_5F3136 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3136) < 0x10
	.space 0x10 - (. - gText_Rom_5F3136)
	.endif

	@ src/data/text/match_call_messages.h:196 gText_MatchCallTriathlete_Dylan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3146
gText_Rom_5F3146: @ 0x085F3146
	.string "あいてより さきに こうげき!$"
	.if (. - gText_Rom_5F3146) != 0x10
	.error "gText_Rom_5F3146 must retain its original byte length"
	.endif
	.globl gText_Rom_5F314F
	.set gText_Rom_5F314F, gText_Rom_5F3146 + 0x9

	@ src/data/text/match_call_messages.h:197 gText_MatchCallTriathlete_Dylan_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3156
gText_Rom_5F3156: @ 0x085F3156
	.string "いい はしりをする ポケモン$"
	.if (. - gText_Rom_5F3156) != 0xf
	.error "gText_Rom_5F3156 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3160
	.set gText_Rom_5F3160, gText_Rom_5F3156 + 0xa

	@ src/data/text/match_call_messages.h:198 gText_MatchCallTriathlete_Dylan_Intro1
	.globl gText_Rom_5F3165
gText_Rom_5F3165: @ 0x085F3165
	.string "はしりつづけていると$"
	.if (. - gText_Rom_5F3165) > 0xb
	.error "gText_Rom_5F3165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3165) < 0xb
	.space 0xb - (. - gText_Rom_5F3165)
	.endif

	@ src/data/text/match_call_messages.h:199 gText_MatchCallTriathlete_Dylan_Intro2
	.globl gText_Rom_5F3170
gText_Rom_5F3170: @ 0x085F3170
	.string "かぜに なれるのさ……!$"
	.if (. - gText_Rom_5F3170) > 0xd
	.error "gText_Rom_5F3170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3170) < 0xd
	.space 0xd - (. - gText_Rom_5F3170)
	.endif

	@ src/data/text/match_call_messages.h:201 gText_MatchCallTriathlete_Katelyn_Strategy
	.globl gText_Rom_5F317D
gText_Rom_5F317D: @ 0x085F317D
	.string "がんがん せめまくる!$"
	.if (. - gText_Rom_5F317D) > 0xc
	.error "gText_Rom_5F317D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F317D) < 0xc
	.space 0xc - (. - gText_Rom_5F317D)
	.endif

	@ src/data/text/match_call_messages.h:202 gText_MatchCallTriathlete_Katelyn_Pokemon
	.globl gText_Rom_5F3189
gText_Rom_5F3189: @ 0x085F3189
	.string "みずポケモン さいこう!$"
	.if (. - gText_Rom_5F3189) > 0xd
	.error "gText_Rom_5F3189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3189) < 0xd
	.space 0xd - (. - gText_Rom_5F3189)
	.endif

	@ src/data/text/match_call_messages.h:203 gText_MatchCallTriathlete_Katelyn_Intro1
	.globl gText_Rom_5F3196
gText_Rom_5F3196: @ 0x085F3196
	.string "まいにち 10キロは$"
	.if (. - gText_Rom_5F3196) > 0xb
	.error "gText_Rom_5F3196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3196) < 0xb
	.space 0xb - (. - gText_Rom_5F3196)
	.endif

	@ src/data/text/match_call_messages.h:204 gText_MatchCallTriathlete_Katelyn_Intro2
	.globl gText_Rom_5F31A1
gText_Rom_5F31A1: @ 0x085F31A1
	.string "およいでいるわね!$"
	.if (. - gText_Rom_5F31A1) > 0xa
	.error "gText_Rom_5F31A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31A1) < 0xa
	.space 0xa - (. - gText_Rom_5F31A1)
	.endif

	@ src/data/text/match_call_messages.h:206 gText_MatchCallTriathlete_Benjamin_Strategy
	.globl gText_Rom_5F31AB
gText_Rom_5F31AB: @ 0x085F31AB
	.string "おして おしまくる さくせん!$"
	.if (. - gText_Rom_5F31AB) > 0x10
	.error "gText_Rom_5F31AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31AB) < 0x10
	.space 0x10 - (. - gText_Rom_5F31AB)
	.endif

	@ src/data/text/match_call_messages.h:207 gText_MatchCallTriathlete_Benjamin_Pokemon
	.globl gText_Rom_5F31BB
gText_Rom_5F31BB: @ 0x085F31BB
	.string "はがねの つよさを みせてやる$"
	.if (. - gText_Rom_5F31BB) > 0x10
	.error "gText_Rom_5F31BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31BB) < 0x10
	.space 0x10 - (. - gText_Rom_5F31BB)
	.endif

	@ src/data/text/match_call_messages.h:208 gText_MatchCallTriathlete_Benjamin_Intro1
	.globl gText_Rom_5F31CB
gText_Rom_5F31CB: @ 0x085F31CB
	.string "あせを かいたら こまめに$"
	.if (. - gText_Rom_5F31CB) > 0xe
	.error "gText_Rom_5F31CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31CB) < 0xe
	.space 0xe - (. - gText_Rom_5F31CB)
	.endif

	@ src/data/text/match_call_messages.h:209 gText_MatchCallTriathlete_Benjamin_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F31D9
gText_Rom_5F31D9: @ 0x085F31D9
	.string "すいぶんを ほきゅうしよう!$"
	.if (. - gText_Rom_5F31D9) != 0xf
	.error "gText_Rom_5F31D9 must retain its original byte length"
	.endif
	.globl gText_Rom_5F31E3
	.set gText_Rom_5F31E3, gText_Rom_5F31D9 + 0xa

	@ src/data/text/match_call_messages.h:211 gText_MatchCallTriathlete_Pablo_Strategy
	.globl gText_Rom_5F31E8
gText_Rom_5F31E8: @ 0x085F31E8
	.string "みずの ちからを ひきだす!$"
	.if (. - gText_Rom_5F31E8) > 0xf
	.error "gText_Rom_5F31E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31E8) < 0xf
	.space 0xf - (. - gText_Rom_5F31E8)
	.endif

	@ src/data/text/match_call_messages.h:212 gText_MatchCallTriathlete_Pablo_Pokemon
	.globl gText_Rom_5F31F7
gText_Rom_5F31F7: @ 0x085F31F7
	.string "きたえぬかれた みずポケモン!$"
	.if (. - gText_Rom_5F31F7) > 0x10
	.error "gText_Rom_5F31F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31F7) < 0x10
	.space 0x10 - (. - gText_Rom_5F31F7)
	.endif

	@ src/data/text/match_call_messages.h:213 gText_MatchCallTriathlete_Pablo_Intro1
	.globl gText_Rom_5F3207
gText_Rom_5F3207: @ 0x085F3207
	.string "ポケモンも いいけど$"
	.if (. - gText_Rom_5F3207) > 0xb
	.error "gText_Rom_5F3207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3207) < 0xb
	.space 0xb - (. - gText_Rom_5F3207)
	.endif

	@ src/data/text/match_call_messages.h:214 gText_MatchCallTriathlete_Pablo_Intro2
	.globl gText_Rom_5F3212
gText_Rom_5F3212: @ 0x085F3212
	.string "からだも きたえよう!$"
	.if (. - gText_Rom_5F3212) > 0xc
	.error "gText_Rom_5F3212 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3212) < 0xc
	.space 0xc - (. - gText_Rom_5F3212)
	.endif

	@ src/data/text/match_call_messages.h:216 gText_MatchCallDragonTamer_Nicolas_Strategy
	.globl gText_Rom_5F321E
gText_Rom_5F321E: @ 0x085F321E
	.string "ポケモンの パワーが すべて!$"
	.if (. - gText_Rom_5F321E) > 0x10
	.error "gText_Rom_5F321E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F321E) < 0x10
	.space 0x10 - (. - gText_Rom_5F321E)
	.endif

	@ src/data/text/match_call_messages.h:217 gText_MatchCallDragonTamer_Nicolas_Pokemon
	.globl gText_Rom_5F322E
gText_Rom_5F322E: @ 0x085F322E
	.string "ドラゴンの つよさを みろ!$"
	.if (. - gText_Rom_5F322E) > 0xf
	.error "gText_Rom_5F322E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F322E) < 0xf
	.space 0xf - (. - gText_Rom_5F322E)
	.endif

	@ src/data/text/match_call_messages.h:218 gText_MatchCallDragonTamer_Nicolas_Intro1
	.globl gText_Rom_5F323D
gText_Rom_5F323D: @ 0x085F323D
	.string "いつか さいきょうでんせつを$"
	.if (. - gText_Rom_5F323D) > 0xf
	.error "gText_Rom_5F323D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F323D) < 0xf
	.space 0xf - (. - gText_Rom_5F323D)
	.endif

	@ src/data/text/match_call_messages.h:219 gText_MatchCallDragonTamer_Nicolas_Intro2
	.globl gText_Rom_5F324C
gText_Rom_5F324C: @ 0x085F324C
	.string "つくってやるぜ!$"
	.if (. - gText_Rom_5F324C) > 0x9
	.error "gText_Rom_5F324C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F324C) < 0x9
	.space 0x9 - (. - gText_Rom_5F324C)
	.endif

	@ src/data/text/match_call_messages.h:221 gText_MatchCallBirdKeeper_Robert_Strategy
	.globl gText_Rom_5F3255
gText_Rom_5F3255: @ 0x085F3255
	.string "おれの テクニック みせてやる$"
	.if (. - gText_Rom_5F3255) > 0x10
	.error "gText_Rom_5F3255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3255) < 0x10
	.space 0x10 - (. - gText_Rom_5F3255)
	.endif

	@ src/data/text/match_call_messages.h:222 gText_MatchCallBirdKeeper_Robert_Pokemon
	.globl gText_Rom_5F3265
gText_Rom_5F3265: @ 0x085F3265
	.string "とりポケの かれいなる まい!$"
	.if (. - gText_Rom_5F3265) > 0x10
	.error "gText_Rom_5F3265 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3265) < 0x10
	.space 0x10 - (. - gText_Rom_5F3265)
	.endif

	@ src/data/text/match_call_messages.h:223 gText_MatchCallBirdKeeper_Robert_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3275
gText_Rom_5F3275: @ 0x085F3275
	.string "とりポケよ おれの きもち$"
	.if (. - gText_Rom_5F3275) != 0xe
	.error "gText_Rom_5F3275 must retain its original byte length"
	.endif
	.globl gText_Rom_5F327F
	.set gText_Rom_5F327F, gText_Rom_5F3275 + 0xa

	@ src/data/text/match_call_messages.h:224 gText_MatchCallBirdKeeper_Robert_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3283
gText_Rom_5F3283: @ 0x085F3283
	.string "あのこに とどけておくれ$"
	.if (. - gText_Rom_5F3283) != 0xd
	.error "gText_Rom_5F3283 must retain its original byte length"
	.endif
	.globl gText_Rom_5F328C
	.set gText_Rom_5F328C, gText_Rom_5F3283 + 0x9

	@ src/data/text/match_call_messages.h:226 gText_MatchCallNinjaBoy_Lao_Strategy
	.globl gText_Rom_5F3290
gText_Rom_5F3290: @ 0x085F3290
	.string "どく こうげきで くるしめる$"
	.if (. - gText_Rom_5F3290) > 0xf
	.error "gText_Rom_5F3290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3290) < 0xf
	.space 0xf - (. - gText_Rom_5F3290)
	.endif

	@ src/data/text/match_call_messages.h:227 gText_MatchCallNinjaBoy_Lao_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F329F
gText_Rom_5F329F: @ 0x085F329F
	.string "どくどくしい ポケモン$"
	.if (. - gText_Rom_5F329F) != 0xc
	.error "gText_Rom_5F329F must retain its original byte length"
	.endif
	.globl gText_Rom_5F32A6
	.set gText_Rom_5F32A6, gText_Rom_5F329F + 0x7

	@ src/data/text/match_call_messages.h:228 gText_MatchCallNinjaBoy_Lao_Intro1
	.globl gText_Rom_5F32AB
gText_Rom_5F32AB: @ 0x085F32AB
	.string "にんじゃに なるため$"
	.if (. - gText_Rom_5F32AB) > 0xb
	.error "gText_Rom_5F32AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32AB) < 0xb
	.space 0xb - (. - gText_Rom_5F32AB)
	.endif

	@ src/data/text/match_call_messages.h:229 gText_MatchCallNinjaBoy_Lao_Intro2
	.globl gText_Rom_5F32B6
gText_Rom_5F32B6: @ 0x085F32B6
	.string "まいにち しゅぎょうで ござる$"
	.if (. - gText_Rom_5F32B6) > 0x10
	.error "gText_Rom_5F32B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32B6) < 0x10
	.space 0x10 - (. - gText_Rom_5F32B6)
	.endif

	@ src/data/text/match_call_messages.h:231 gText_MatchCallBattleGirl_Cyndy_Strategy
	.globl gText_Rom_5F32C6
gText_Rom_5F32C6: @ 0x085F32C6
	.string "せんてひっしょうよ!$"
	.if (. - gText_Rom_5F32C6) > 0xb
	.error "gText_Rom_5F32C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32C6) < 0xb
	.space 0xb - (. - gText_Rom_5F32C6)
	.endif

	@ src/data/text/match_call_messages.h:232 gText_MatchCallBattleGirl_Cyndy_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F32D1
gText_Rom_5F32D1: @ 0x085F32D1
	.string "すばやい かくとうタイプ$"
	.if (. - gText_Rom_5F32D1) != 0xd
	.error "gText_Rom_5F32D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F32D6
	.set gText_Rom_5F32D6, gText_Rom_5F32D1 + 0x5
	.globl gText_Rom_5F32DA
	.set gText_Rom_5F32DA, gText_Rom_5F32D1 + 0x9

	@ src/data/text/match_call_messages.h:233 gText_MatchCallBattleGirl_Cyndy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F32DE
gText_Rom_5F32DE: @ 0x085F32DE
	.string "ポケモンで まけたら$"
	.if (. - gText_Rom_5F32DE) != 0xb
	.error "gText_Rom_5F32DE must retain its original byte length"
	.endif
	.globl gText_Rom_5F32E4
	.set gText_Rom_5F32E4, gText_Rom_5F32DE + 0x6

	@ src/data/text/match_call_messages.h:234 gText_MatchCallBattleGirl_Cyndy_Intro2
	.globl gText_Rom_5F32E9
gText_Rom_5F32E9: @ 0x085F32E9
	.string "あたしが たたかっちゃう!$"
	.if (. - gText_Rom_5F32E9) > 0xe
	.error "gText_Rom_5F32E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32E9) < 0xe
	.space 0xe - (. - gText_Rom_5F32E9)
	.endif

	@ src/data/text/match_call_messages.h:236 gText_MatchCallParasolLady_Madeline_Strategy
	.globl gText_Rom_5F32F7
gText_Rom_5F32F7: @ 0x085F32F7
	.string "がんばれ わたしの ポケモン!$"
	.if (. - gText_Rom_5F32F7) > 0x10
	.error "gText_Rom_5F32F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32F7) < 0x10
	.space 0x10 - (. - gText_Rom_5F32F7)
	.endif

	@ src/data/text/match_call_messages.h:237 gText_MatchCallParasolLady_Madeline_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3307
gText_Rom_5F3307: @ 0x085F3307
	.string "なんでも そだてるわよ!$"
	.if (. - gText_Rom_5F3307) != 0xd
	.error "gText_Rom_5F3307 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3310
	.set gText_Rom_5F3310, gText_Rom_5F3307 + 0x9

	@ src/data/text/match_call_messages.h:238 gText_MatchCallParasolLady_Madeline_Intro1
	.globl gText_Rom_5F3314
gText_Rom_5F3314: @ 0x085F3314
	.string "しがいせんは おはだの てき$"
	.if (. - gText_Rom_5F3314) > 0xf
	.error "gText_Rom_5F3314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3314) < 0xf
	.space 0xf - (. - gText_Rom_5F3314)
	.endif

	@ src/data/text/match_call_messages.h:239 gText_MatchCallParasolLady_Madeline_Intro2
	.globl gText_Rom_5F3323
gText_Rom_5F3323: @ 0x085F3323
	.string "ようじん しなくちゃね!$"
	.if (. - gText_Rom_5F3323) > 0xd
	.error "gText_Rom_5F3323 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3323) < 0xd
	.space 0xd - (. - gText_Rom_5F3323)
	.endif

	@ src/data/text/match_call_messages.h:241 gText_MatchCallSwimmer_Jenny_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3330
gText_Rom_5F3330: @ 0x085F3330
	.string "ようしゃ しないわよ!$"
	.if (. - gText_Rom_5F3330) != 0xc
	.error "gText_Rom_5F3330 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3338
	.set gText_Rom_5F3338, gText_Rom_5F3330 + 0x8

	@ src/data/text/match_call_messages.h:242 gText_MatchCallSwimmer_Jenny_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F333C
gText_Rom_5F333C: @ 0x085F333C
	.string "かわいい みずポケモン$"
	.if (. - gText_Rom_5F333C) != 0xc
	.error "gText_Rom_5F333C must retain its original byte length"
	.endif
	.globl gText_Rom_5F3343
	.set gText_Rom_5F3343, gText_Rom_5F333C + 0x7

	@ src/data/text/match_call_messages.h:243 gText_MatchCallSwimmer_Jenny_Intro1
	.globl gText_Rom_5F3348
gText_Rom_5F3348: @ 0x085F3348
	.string "ファンが おおくて こまるわ$"
	.if (. - gText_Rom_5F3348) > 0xf
	.error "gText_Rom_5F3348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3348) < 0xf
	.space 0xf - (. - gText_Rom_5F3348)
	.endif

	@ src/data/text/match_call_messages.h:244 gText_MatchCallSwimmer_Jenny_Intro2
	.globl gText_Rom_5F3357
gText_Rom_5F3357: @ 0x085F3357
	.string "テレビの しゅざいも うけたし$"
	.if (. - gText_Rom_5F3357) > 0x10
	.error "gText_Rom_5F3357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3357) < 0x10
	.space 0x10 - (. - gText_Rom_5F3357)
	.endif

	@ src/data/text/match_call_messages.h:246 gText_MatchCallPicnicker_Diana_Strategy
	.globl gText_Rom_5F3367
gText_Rom_5F3367: @ 0x085F3367
	.string "いろいろ かんがえてるのよ$"
	.if (. - gText_Rom_5F3367) > 0xe
	.error "gText_Rom_5F3367 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3367) < 0xe
	.space 0xe - (. - gText_Rom_5F3367)
	.endif

	@ src/data/text/match_call_messages.h:247 gText_MatchCallPicnicker_Diana_Pokemon
	.globl gText_Rom_5F3375
gText_Rom_5F3375: @ 0x085F3375
	.string "ポケモンは みんな すき$"
	.if (. - gText_Rom_5F3375) > 0xd
	.error "gText_Rom_5F3375 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3375) < 0xd
	.space 0xd - (. - gText_Rom_5F3375)
	.endif

	@ src/data/text/match_call_messages.h:248 gText_MatchCallPicnicker_Diana_Intro1
	.globl gText_Rom_5F3382
gText_Rom_5F3382: @ 0x085F3382
	.string "あの おかの むこうには$"
	.if (. - gText_Rom_5F3382) > 0xd
	.error "gText_Rom_5F3382 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3382) < 0xd
	.space 0xd - (. - gText_Rom_5F3382)
	.endif

	@ src/data/text/match_call_messages.h:249 gText_MatchCallPicnicker_Diana_Intro2
	.globl gText_Rom_5F338F
gText_Rom_5F338F: @ 0x085F338F
	.string "なにが あるのかしら……?$"
	.if (. - gText_Rom_5F338F) > 0xe
	.error "gText_Rom_5F338F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F338F) < 0xe
	.space 0xe - (. - gText_Rom_5F338F)
	.endif

	@ src/data/text/match_call_messages.h:251 gText_MatchCallTwins_AmyAndLiv_Strategy
	.globl gText_Rom_5F339D
gText_Rom_5F339D: @ 0x085F339D
	.string "いっしょに たたかうの!$"
	.if (. - gText_Rom_5F339D) > 0xd
	.error "gText_Rom_5F339D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F339D) < 0xd
	.space 0xd - (. - gText_Rom_5F339D)
	.endif

	@ src/data/text/match_call_messages.h:252 gText_MatchCallTwins_AmyAndLiv_Pokemon
	.globl gText_Rom_5F33AA
gText_Rom_5F33AA: @ 0x085F33AA
	.string "いっしょに そだててるの!$"
	.if (. - gText_Rom_5F33AA) > 0xe
	.error "gText_Rom_5F33AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33AA) < 0xe
	.space 0xe - (. - gText_Rom_5F33AA)
	.endif

	@ src/data/text/match_call_messages.h:253 gText_MatchCallTwins_AmyAndLiv_Intro1
	.globl gText_Rom_5F33B8
gText_Rom_5F33B8: @ 0x085F33B8
	.string "すきな ポケモンは おなじでも$"
	.if (. - gText_Rom_5F33B8) > 0x10
	.error "gText_Rom_5F33B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33B8) < 0x10
	.space 0x10 - (. - gText_Rom_5F33B8)
	.endif

	@ src/data/text/match_call_messages.h:254 gText_MatchCallTwins_AmyAndLiv_Intro2
	.globl gText_Rom_5F33C8
gText_Rom_5F33C8: @ 0x085F33C8
	.string "デザートの このみは ちがうよ$"
	.if (. - gText_Rom_5F33C8) > 0x10
	.error "gText_Rom_5F33C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33C8) < 0x10
	.space 0x10 - (. - gText_Rom_5F33C8)
	.endif

	@ src/data/text/match_call_messages.h:256 gText_MatchCallSailor_Ernest_Strategy
	.globl gText_Rom_5F33D8
gText_Rom_5F33D8: @ 0x085F33D8
	.string "ちからで おしまくるぜ$"
	.if (. - gText_Rom_5F33D8) > 0xc
	.error "gText_Rom_5F33D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33D8) < 0xc
	.space 0xc - (. - gText_Rom_5F33D8)
	.endif

	@ src/data/text/match_call_messages.h:257 gText_MatchCallSailor_Ernest_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F33E4
gText_Rom_5F33E4: @ 0x085F33E4
	.string "みずと かくとうタイプ$"
	.if (. - gText_Rom_5F33E4) != 0xc
	.error "gText_Rom_5F33E4 must retain its original byte length"
	.endif
	.globl gText_Rom_5F33E8
	.set gText_Rom_5F33E8, gText_Rom_5F33E4 + 0x4
	.globl gText_Rom_5F33EC
	.set gText_Rom_5F33EC, gText_Rom_5F33E4 + 0x8

	@ src/data/text/match_call_messages.h:258 gText_MatchCallSailor_Ernest_Intro1
	.globl gText_Rom_5F33F0
gText_Rom_5F33F0: @ 0x085F33F0
	.string "うみの おとこは きが あらい$"
	.if (. - gText_Rom_5F33F0) > 0x10
	.error "gText_Rom_5F33F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33F0) < 0x10
	.space 0x10 - (. - gText_Rom_5F33F0)
	.endif

	@ src/data/text/match_call_messages.h:259 gText_MatchCallSailor_Ernest_Intro2
	.globl gText_Rom_5F3400
gText_Rom_5F3400: @ 0x085F3400
	.string "もんく あるか こらー!$"
	.if (. - gText_Rom_5F3400) > 0xd
	.error "gText_Rom_5F3400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3400) < 0xd
	.space 0xd - (. - gText_Rom_5F3400)
	.endif

	@ src/data/text/match_call_messages.h:261 gText_MatchCallSailor_Cory_Strategy
	.globl gText_Rom_5F340D
gText_Rom_5F340D: @ 0x085F340D
	.string "ケンカ じょうとう!$"
	.if (. - gText_Rom_5F340D) > 0xb
	.error "gText_Rom_5F340D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F340D) < 0xb
	.space 0xb - (. - gText_Rom_5F340D)
	.endif

	@ src/data/text/match_call_messages.h:262 gText_MatchCallSailor_Cory_Pokemon
	.globl gText_Rom_5F3418
gText_Rom_5F3418: @ 0x085F3418
	.string "みずポケモンが すきだー!$"
	.if (. - gText_Rom_5F3418) > 0xe
	.error "gText_Rom_5F3418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3418) < 0xe
	.space 0xe - (. - gText_Rom_5F3418)
	.endif

	@ src/data/text/match_call_messages.h:263 gText_MatchCallSailor_Cory_Intro1
	.globl gText_Rom_5F3426
gText_Rom_5F3426: @ 0x085F3426
	.string "おおきな こえを だすときは$"
	.if (. - gText_Rom_5F3426) > 0xf
	.error "gText_Rom_5F3426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3426) < 0xf
	.space 0xf - (. - gText_Rom_5F3426)
	.endif

	@ src/data/text/match_call_messages.h:264 gText_MatchCallSailor_Cory_Intro2
	.globl gText_Rom_5F3435
gText_Rom_5F3435: @ 0x085F3435
	.string "おなかで くうきを すうのだ!$"
	.if (. - gText_Rom_5F3435) > 0x10
	.error "gText_Rom_5F3435 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3435) < 0x10
	.space 0x10 - (. - gText_Rom_5F3435)
	.endif

	@ src/data/text/match_call_messages.h:266 gText_MatchCallCollector_Edwin_Strategy
	.globl gText_Rom_5F3445
gText_Rom_5F3445: @ 0x085F3445
	.string "ポケモンを キズつけないように$"
	.if (. - gText_Rom_5F3445) > 0x10
	.error "gText_Rom_5F3445 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3445) < 0x10
	.space 0x10 - (. - gText_Rom_5F3445)
	.endif

	@ src/data/text/match_call_messages.h:267 gText_MatchCallCollector_Edwin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3455
gText_Rom_5F3455: @ 0x085F3455
	.string "めずらしい ポケモン だいすき$"
	.if (. - gText_Rom_5F3455) != 0x10
	.error "gText_Rom_5F3455 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3460
	.set gText_Rom_5F3460, gText_Rom_5F3455 + 0xb

	@ src/data/text/match_call_messages.h:268 gText_MatchCallCollector_Edwin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3465
gText_Rom_5F3465: @ 0x085F3465
	.string "せかいじゅうの めずらしい$"
	.if (. - gText_Rom_5F3465) != 0xe
	.error "gText_Rom_5F3465 must retain its original byte length"
	.endif
	.globl gText_Rom_5F346D
	.set gText_Rom_5F346D, gText_Rom_5F3465 + 0x8
	.globl gText_Rom_5F346F
	.set gText_Rom_5F346F, gText_Rom_5F3465 + 0xa

	@ src/data/text/match_call_messages.h:269 gText_MatchCallCollector_Edwin_Intro2
	.globl gText_Rom_5F3473
gText_Rom_5F3473: @ 0x085F3473
	.string "ポケモンを てにいれたい!$"
	.if (. - gText_Rom_5F3473) > 0xe
	.error "gText_Rom_5F3473 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3473) < 0xe
	.space 0xe - (. - gText_Rom_5F3473)
	.endif

	@ src/data/text/match_call_messages.h:271 gText_MatchCallPkmnBreeder_Lydia_Strategy
	.globl gText_Rom_5F3481
gText_Rom_5F3481: @ 0x085F3481
	.string "つよきで たたかいます$"
	.if (. - gText_Rom_5F3481) > 0xc
	.error "gText_Rom_5F3481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3481) < 0xc
	.space 0xc - (. - gText_Rom_5F3481)
	.endif

	@ src/data/text/match_call_messages.h:272 gText_MatchCallPkmnBreeder_Lydia_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F348D
gText_Rom_5F348D: @ 0x085F348D
	.string "ポケモンは じぶんの こども$"
	.if (. - gText_Rom_5F348D) != 0xf
	.error "gText_Rom_5F348D must retain its original byte length"
	.endif
	.globl gText_Rom_5F3498
	.set gText_Rom_5F3498, gText_Rom_5F348D + 0xb

	@ src/data/text/match_call_messages.h:273 gText_MatchCallPkmnBreeder_Lydia_Intro1
	.globl gText_Rom_5F349C
gText_Rom_5F349C: @ 0x085F349C
	.string "ポケモンを そだてる コツは$"
	.if (. - gText_Rom_5F349C) > 0xf
	.error "gText_Rom_5F349C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F349C) < 0xf
	.space 0xf - (. - gText_Rom_5F349C)
	.endif

	@ src/data/text/match_call_messages.h:274 gText_MatchCallPkmnBreeder_Lydia_Intro2
	.globl gText_Rom_5F34AB
gText_Rom_5F34AB: @ 0x085F34AB
	.string "ちしきと あいじょうよ!$"
	.if (. - gText_Rom_5F34AB) > 0xd
	.error "gText_Rom_5F34AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34AB) < 0xd
	.space 0xd - (. - gText_Rom_5F34AB)
	.endif

	@ src/data/text/match_call_messages.h:276 gText_MatchCallPkmnBreeder_Isaac_Strategy
	.globl gText_Rom_5F34B8
gText_Rom_5F34B8: @ 0x085F34B8
	.string "がんがん おします!$"
	.if (. - gText_Rom_5F34B8) > 0xb
	.error "gText_Rom_5F34B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34B8) < 0xb
	.space 0xb - (. - gText_Rom_5F34B8)
	.endif

	@ src/data/text/match_call_messages.h:277 gText_MatchCallPkmnBreeder_Isaac_Pokemon
	.globl gText_Rom_5F34C3
gText_Rom_5F34C3: @ 0x085F34C3
	.string "なんでも そだてる$"
	.if (. - gText_Rom_5F34C3) > 0xa
	.error "gText_Rom_5F34C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34C3) < 0xa
	.space 0xa - (. - gText_Rom_5F34C3)
	.endif

	@ src/data/text/match_call_messages.h:278 gText_MatchCallPkmnBreeder_Isaac_Intro1
	.globl gText_Rom_5F34CD
gText_Rom_5F34CD: @ 0x085F34CD
	.string "ポロックを たくさん あたえて$"
	.if (. - gText_Rom_5F34CD) > 0x10
	.error "gText_Rom_5F34CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34CD) < 0x10
	.space 0x10 - (. - gText_Rom_5F34CD)
	.endif

	@ src/data/text/match_call_messages.h:279 gText_MatchCallPkmnBreeder_Isaac_Intro2
	.globl gText_Rom_5F34DD
gText_Rom_5F34DD: @ 0x085F34DD
	.string "コンテストも ねらってます$"
	.if (. - gText_Rom_5F34DD) > 0xe
	.error "gText_Rom_5F34DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34DD) < 0xe
	.space 0xe - (. - gText_Rom_5F34DD)
	.endif

	@ src/data/text/match_call_messages.h:281 gText_MatchCallPkmnBreeder_Gabrielle_Strategy
	.globl gText_Rom_5F34EB
gText_Rom_5F34EB: @ 0x085F34EB
	.string "たいせつに そだてて いるのよ$"
	.if (. - gText_Rom_5F34EB) > 0x10
	.error "gText_Rom_5F34EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34EB) < 0x10
	.space 0x10 - (. - gText_Rom_5F34EB)
	.endif

	@ src/data/text/match_call_messages.h:282 gText_MatchCallPkmnBreeder_Gabrielle_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F34FB
gText_Rom_5F34FB: @ 0x085F34FB
	.string "そだてがいの ある ポケモン$"
	.if (. - gText_Rom_5F34FB) != 0xf
	.error "gText_Rom_5F34FB must retain its original byte length"
	.endif
	.globl gText_Rom_5F3505
	.set gText_Rom_5F3505, gText_Rom_5F34FB + 0xa

	@ src/data/text/match_call_messages.h:283 gText_MatchCallPkmnBreeder_Gabrielle_Intro1
	.globl gText_Rom_5F350A
gText_Rom_5F350A: @ 0x085F350A
	.string "であった ポケモンは$"
	.if (. - gText_Rom_5F350A) > 0xb
	.error "gText_Rom_5F350A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F350A) < 0xb
	.space 0xb - (. - gText_Rom_5F350A)
	.endif

	@ src/data/text/match_call_messages.h:284 gText_MatchCallPkmnBreeder_Gabrielle_Intro2
	.globl gText_Rom_5F3515
gText_Rom_5F3515: @ 0x085F3515
	.string "たいせつに して くださいね$"
	.if (. - gText_Rom_5F3515) > 0xf
	.error "gText_Rom_5F3515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3515) < 0xf
	.space 0xf - (. - gText_Rom_5F3515)
	.endif

	@ src/data/text/match_call_messages.h:286 gText_MatchCallPkmnRanger_Catherine_Strategy
	.globl gText_Rom_5F3524
gText_Rom_5F3524: @ 0x085F3524
	.string "ポケモンの ちからを しんじる$"
	.if (. - gText_Rom_5F3524) > 0x10
	.error "gText_Rom_5F3524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3524) < 0x10
	.space 0x10 - (. - gText_Rom_5F3524)
	.endif

	@ src/data/text/match_call_messages.h:287 gText_MatchCallPkmnRanger_Catherine_Pokemon
	.globl gText_Rom_5F3534
gText_Rom_5F3534: @ 0x085F3534
	.string "つよい ポケモンが すき$"
	.if (. - gText_Rom_5F3534) > 0xd
	.error "gText_Rom_5F3534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3534) < 0xd
	.space 0xd - (. - gText_Rom_5F3534)
	.endif

	@ src/data/text/match_call_messages.h:288 gText_MatchCallPkmnRanger_Catherine_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3541
gText_Rom_5F3541: @ 0x085F3541
	.string "ポケモンと いっしょに$"
	.if (. - gText_Rom_5F3541) != 0xc
	.error "gText_Rom_5F3541 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3547
	.set gText_Rom_5F3547, gText_Rom_5F3541 + 0x6

	@ src/data/text/match_call_messages.h:289 gText_MatchCallPkmnRanger_Catherine_Intro2
	.globl gText_Rom_5F354D
gText_Rom_5F354D: @ 0x085F354D
	.string "きゅうじょくんれんを してるの$"
	.if (. - gText_Rom_5F354D) > 0x10
	.error "gText_Rom_5F354D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F354D) < 0x10
	.space 0x10 - (. - gText_Rom_5F354D)
	.endif

	@ src/data/text/match_call_messages.h:116 gText_MatchCallBugManiac_Jeffrey_Strategy (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F355D
gText_Rom_5F355D: @ 0x085F355D
	.string "たたみかける ような こうげき$"
	.if (. - gText_Rom_5F355D) != 0x10
	.error "gText_Rom_5F355D must retain its original byte length"
	.endif
	.globl gText_Rom_5F3568
	.set gText_Rom_5F3568, gText_Rom_5F355D + 0xb

	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F356D
gText_Rom_5F356D: @ 0x085F356D
	.string "いろんな タイプで しょうぶ$"
	.if (. - gText_Rom_5F356D) != 0xf
	.error "gText_Rom_5F356D must retain its original byte length"
	.endif
	.globl gText_Rom_5F3577
	.set gText_Rom_5F3577, gText_Rom_5F356D + 0xa

	@ src/data/text/match_call_messages.h:293 gText_MatchCallPkmnRanger_Jackson_Intro1
	.globl gText_Rom_5F357C
gText_Rom_5F357C: @ 0x085F357C
	.string "しぜんを こわす やからは$"
	.if (. - gText_Rom_5F357C) > 0xe
	.error "gText_Rom_5F357C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F357C) < 0xe
	.space 0xe - (. - gText_Rom_5F357C)
	.endif

	@ src/data/text/match_call_messages.h:294 gText_MatchCallPkmnRanger_Jackson_Intro2
	.globl gText_Rom_5F358A
gText_Rom_5F358A: @ 0x085F358A
	.string "ぜったいに ゆるさない!$"
	.if (. - gText_Rom_5F358A) > 0xd
	.error "gText_Rom_5F358A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F358A) < 0xd
	.space 0xd - (. - gText_Rom_5F358A)
	.endif

	@ src/data/text/match_call_messages.h:296 gText_MatchCallLass_Haley_Strategy
	.globl gText_Rom_5F3597
gText_Rom_5F3597: @ 0x085F3597
	.string "こんじょう みせちゃう!$"
	.if (. - gText_Rom_5F3597) > 0xd
	.error "gText_Rom_5F3597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3597) < 0xd
	.space 0xd - (. - gText_Rom_5F3597)
	.endif

	@ src/data/text/match_call_messages.h:297 gText_MatchCallLass_Haley_Pokemon
	.globl gText_Rom_5F35A4
gText_Rom_5F35A4: @ 0x085F35A4
	.string "かわいい ポケモン だいすき!$"
	.if (. - gText_Rom_5F35A4) > 0x10
	.error "gText_Rom_5F35A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35A4) < 0x10
	.space 0x10 - (. - gText_Rom_5F35A4)
	.endif

	@ src/data/text/match_call_messages.h:298 gText_MatchCallLass_Haley_Intro1
	.globl gText_Rom_5F35B4
gText_Rom_5F35B4: @ 0x085F35B4
	.string "たたかった あとは ポケモンと$"
	.if (. - gText_Rom_5F35B4) > 0x10
	.error "gText_Rom_5F35B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35B4) < 0x10
	.space 0x10 - (. - gText_Rom_5F35B4)
	.endif

	@ src/data/text/match_call_messages.h:299 gText_MatchCallLass_Haley_Intro2
	.globl gText_Rom_5F35C4
gText_Rom_5F35C4: @ 0x085F35C4
	.string "おふろに はいりまーす$"
	.if (. - gText_Rom_5F35C4) > 0xc
	.error "gText_Rom_5F35C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35C4) < 0xc
	.space 0xc - (. - gText_Rom_5F35C4)
	.endif

	@ src/data/text/match_call_messages.h:301 gText_MatchCallBugCatcher_James_Strategy
	.globl gText_Rom_5F35D0
gText_Rom_5F35D0: @ 0x085F35D0
	.string "すばやく こうげきだ!$"
	.if (. - gText_Rom_5F35D0) > 0xc
	.error "gText_Rom_5F35D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35D0) < 0xc
	.space 0xc - (. - gText_Rom_5F35D0)
	.endif

	@ src/data/text/match_call_messages.h:302 gText_MatchCallBugCatcher_James_Pokemon
	.globl gText_Rom_5F35DC
gText_Rom_5F35DC: @ 0x085F35DC
	.string "むしタイプが いちばん!$"
	.if (. - gText_Rom_5F35DC) > 0xd
	.error "gText_Rom_5F35DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35DC) < 0xd
	.space 0xd - (. - gText_Rom_5F35DC)
	.endif

	@ src/data/text/match_call_messages.h:303 gText_MatchCallBugCatcher_James_Intro1
	.globl gText_Rom_5F35E9
gText_Rom_5F35E9: @ 0x085F35E9
	.string "むしポケモンを つかまえるなら$"
	.if (. - gText_Rom_5F35E9) > 0x10
	.error "gText_Rom_5F35E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35E9) < 0x10
	.space 0x10 - (. - gText_Rom_5F35E9)
	.endif

	@ src/data/text/match_call_messages.h:304 gText_MatchCallBugCatcher_James_Intro2
	.globl gText_Rom_5F35F9
gText_Rom_5F35F9: @ 0x085F35F9
	.string "あさはやく おきないとね$"
	.if (. - gText_Rom_5F35F9) > 0xd
	.error "gText_Rom_5F35F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35F9) < 0xd
	.space 0xd - (. - gText_Rom_5F35F9)
	.endif

	@ src/data/text/match_call_messages.h:306 gText_MatchCallHiker_Trent_Strategy
	.globl gText_Rom_5F3606
gText_Rom_5F3606: @ 0x085F3606
	.string "パワーで しょうぶ!$"
	.if (. - gText_Rom_5F3606) > 0xb
	.error "gText_Rom_5F3606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3606) < 0xb
	.space 0xb - (. - gText_Rom_5F3606)
	.endif

	@ src/data/text/match_call_messages.h:307 gText_MatchCallHiker_Trent_Pokemon
	.globl gText_Rom_5F3611
gText_Rom_5F3611: @ 0x085F3611
	.string "かたい からだの ポケモン!$"
	.if (. - gText_Rom_5F3611) > 0xf
	.error "gText_Rom_5F3611 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3611) < 0xf
	.space 0xf - (. - gText_Rom_5F3611)
	.endif

	@ src/data/text/match_call_messages.h:308 gText_MatchCallHiker_Trent_Intro1
	.globl gText_Rom_5F3620
gText_Rom_5F3620: @ 0x085F3620
	.string "きょうの とざんの ために$"
	.if (. - gText_Rom_5F3620) > 0xe
	.error "gText_Rom_5F3620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3620) < 0xe
	.space 0xe - (. - gText_Rom_5F3620)
	.endif

	@ src/data/text/match_call_messages.h:309 gText_MatchCallHiker_Trent_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F362E
gText_Rom_5F362E: @ 0x085F362E
	.string "ひとつきまえから けいかく$"
	.if (. - gText_Rom_5F362E) != 0xe
	.error "gText_Rom_5F362E must retain its original byte length"
	.endif
	.globl gText_Rom_5F3638
	.set gText_Rom_5F3638, gText_Rom_5F362E + 0xa

	@ src/data/text/match_call_messages.h:311 gText_MatchCallHiker_Sawyer_Strategy
	.globl gText_Rom_5F363C
gText_Rom_5F363C: @ 0x085F363C
	.string "あつく たたかうぞ!$"
	.if (. - gText_Rom_5F363C) > 0xb
	.error "gText_Rom_5F363C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F363C) < 0xb
	.space 0xb - (. - gText_Rom_5F363C)
	.endif

	@ src/data/text/match_call_messages.h:312 gText_MatchCallHiker_Sawyer_Pokemon
	.globl gText_Rom_5F3647
gText_Rom_5F3647: @ 0x085F3647
	.string "あつい ポケモンだ!$"
	.if (. - gText_Rom_5F3647) > 0xb
	.error "gText_Rom_5F3647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3647) < 0xb
	.space 0xb - (. - gText_Rom_5F3647)
	.endif

	@ src/data/text/match_call_messages.h:313 gText_MatchCallHiker_Sawyer_Intro1
	.globl gText_Rom_5F3652
gText_Rom_5F3652: @ 0x085F3652
	.string "ポケモンは すきだけど$"
	.if (. - gText_Rom_5F3652) > 0xc
	.error "gText_Rom_5F3652 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3652) < 0xc
	.space 0xc - (. - gText_Rom_5F3652)
	.endif

	@ src/data/text/match_call_messages.h:314 gText_MatchCallHiker_Sawyer_Intro2
	.globl gText_Rom_5F365E
gText_Rom_5F365E: @ 0x085F365E
	.string "おねいさんも すきだぞ$"
	.if (. - gText_Rom_5F365E) > 0xc
	.error "gText_Rom_5F365E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F365E) < 0xc
	.space 0xc - (. - gText_Rom_5F365E)
	.endif

	@ src/data/text/match_call_messages.h:316 gText_MatchCallYoungCouple_LoisAndHal_Strategy
	.globl gText_Rom_5F366A
gText_Rom_5F366A: @ 0x085F366A
	.string "ラブラブさくせん!$"
	.if (. - gText_Rom_5F366A) > 0xa
	.error "gText_Rom_5F366A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F366A) < 0xa
	.space 0xa - (. - gText_Rom_5F366A)
	.endif

	@ src/data/text/match_call_messages.h:317 gText_MatchCallYoungCouple_LoisAndHal_Pokemon
	.globl gText_Rom_5F3674
gText_Rom_5F3674: @ 0x085F3674
	.string "ラブラブ ポケモン!$"
	.if (. - gText_Rom_5F3674) > 0xb
	.error "gText_Rom_5F3674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3674) < 0xb
	.space 0xb - (. - gText_Rom_5F3674)
	.endif

	@ src/data/text/match_call_messages.h:318 gText_MatchCallYoungCouple_LoisAndHal_Intro1
	.globl gText_Rom_5F367F
gText_Rom_5F367F: @ 0x085F367F
	.string "わたしたち ラブラブ!$"
	.if (. - gText_Rom_5F367F) > 0xc
	.error "gText_Rom_5F367F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F367F) < 0xc
	.space 0xc - (. - gText_Rom_5F367F)
	.endif

	@ src/data/text/match_call_messages.h:319 gText_MatchCallYoungCouple_LoisAndHal_Intro2
	.globl gText_Rom_5F368B
gText_Rom_5F368B: @ 0x085F368B
	.string "えいえんに ラブラブ!$"
	.if (. - gText_Rom_5F368B) > 0xc
	.error "gText_Rom_5F368B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F368B) < 0xc
	.space 0xc - (. - gText_Rom_5F368B)
	.endif

	@ src/data/text/match_call_messages.h:321 gText_MatchCallPkmnTrainer_Wally_Strategy
	.globl gText_Rom_5F3697
gText_Rom_5F3697: @ 0x085F3697
	.string "きもちを すべて だしきります$"
	.if (. - gText_Rom_5F3697) > 0x10
	.error "gText_Rom_5F3697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3697) < 0x10
	.space 0x10 - (. - gText_Rom_5F3697)
	.endif

	@ src/data/text/match_call_messages.h:322 gText_MatchCallPkmnTrainer_Wally_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F36A7
gText_Rom_5F36A7: @ 0x085F36A7
	.string "はじめて つかまえた ポケモン$"
	.if (. - gText_Rom_5F36A7) != 0x10
	.error "gText_Rom_5F36A7 must retain its original byte length"
	.endif
	.globl gText_Rom_5F36B2
	.set gText_Rom_5F36B2, gText_Rom_5F36A7 + 0xb

	@ src/data/text/match_call_messages.h:323 gText_MatchCallPkmnTrainer_Wally_Intro1
	.globl gText_Rom_5F36B7
gText_Rom_5F36B7: @ 0x085F36B7
	.string "ぼくと ポケモンは$"
	.if (. - gText_Rom_5F36B7) > 0xa
	.error "gText_Rom_5F36B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36B7) < 0xa
	.space 0xa - (. - gText_Rom_5F36B7)
	.endif

	@ src/data/text/match_call_messages.h:324 gText_MatchCallPkmnTrainer_Wally_Intro2
	.globl gText_Rom_5F36C1
gText_Rom_5F36C1: @ 0x085F36C1
	.string "いっしょに つよくなったんです$"
	.if (. - gText_Rom_5F36C1) > 0x10
	.error "gText_Rom_5F36C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36C1) < 0x10
	.space 0x10 - (. - gText_Rom_5F36C1)
	.endif

	@ src/data/text/match_call_messages.h:326 gText_MatchCallRockinWhiz_Roxanne_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F36D1
gText_Rom_5F36D1: @ 0x085F36D1
	.string "いわタイプ パワーで こうげき$"
	.if (. - gText_Rom_5F36D1) != 0x10
	.error "gText_Rom_5F36D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F36DC
	.set gText_Rom_5F36DC, gText_Rom_5F36D1 + 0xb

	@ src/data/text/match_call_messages.h:327 gText_MatchCallRockinWhiz_Roxanne_Pokemon
	.globl gText_Rom_5F36E1
gText_Rom_5F36E1: @ 0x085F36E1
	.string "がっしり タイプが このみ!$"
	.if (. - gText_Rom_5F36E1) > 0xf
	.error "gText_Rom_5F36E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36E1) < 0xf
	.space 0xf - (. - gText_Rom_5F36E1)
	.endif

	@ src/data/text/match_call_messages.h:328 gText_MatchCallRockinWhiz_Roxanne_Intro1
	.globl gText_Rom_5F36F0
gText_Rom_5F36F0: @ 0x085F36F0
	.string "おおきな まちの リーダーは$"
	.if (. - gText_Rom_5F36F0) > 0xf
	.error "gText_Rom_5F36F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36F0) < 0xf
	.space 0xf - (. - gText_Rom_5F36F0)
	.endif

	@ src/data/text/match_call_messages.h:329 gText_MatchCallRockinWhiz_Roxanne_Intro2
	.globl gText_Rom_5F36FF
gText_Rom_5F36FF: @ 0x085F36FF
	.string "せきにん じゅうだいよ$"
	.if (. - gText_Rom_5F36FF) > 0xc
	.error "gText_Rom_5F36FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36FF) < 0xc
	.space 0xc - (. - gText_Rom_5F36FF)
	.endif

	@ src/data/text/match_call_messages.h:331 gText_MatchCallTheBigHit_Brawly_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F370B
gText_Rom_5F370B: @ 0x085F370B
	.string "ちょくせつ だげきが とくい$"
	.if (. - gText_Rom_5F370B) != 0xf
	.error "gText_Rom_5F370B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3716
	.set gText_Rom_5F3716, gText_Rom_5F370B + 0xb

	@ src/data/text/match_call_messages.h:332 gText_MatchCallTheBigHit_Brawly_Pokemon
	.globl gText_Rom_5F371A
gText_Rom_5F371A: @ 0x085F371A
	.string "かくとう ポケモン いのち!$"
	.if (. - gText_Rom_5F371A) > 0xf
	.error "gText_Rom_5F371A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F371A) < 0xf
	.space 0xf - (. - gText_Rom_5F371A)
	.endif

	@ src/data/text/match_call_messages.h:333 gText_MatchCallTheBigHit_Brawly_Intro1
	.globl gText_Rom_5F3729
gText_Rom_5F3729: @ 0x085F3729
	.string "せかいの ビッグウェーブが$"
	.if (. - gText_Rom_5F3729) > 0xe
	.error "gText_Rom_5F3729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3729) < 0xe
	.space 0xe - (. - gText_Rom_5F3729)
	.endif

	@ src/data/text/match_call_messages.h:334 gText_MatchCallTheBigHit_Brawly_Intro2
	.globl gText_Rom_5F3737
gText_Rom_5F3737: @ 0x085F3737
	.string "オレを よんでいるぜ!$"
	.if (. - gText_Rom_5F3737) > 0xc
	.error "gText_Rom_5F3737 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3737) < 0xc
	.space 0xc - (. - gText_Rom_5F3737)
	.endif

	@ src/data/text/match_call_messages.h:336 gText_MatchCallSwellShock_Wattson_Strategy
	.globl gText_Rom_5F3743
gText_Rom_5F3743: @ 0x085F3743
	.string "ビリビリ しびれ させる$"
	.if (. - gText_Rom_5F3743) > 0xd
	.error "gText_Rom_5F3743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3743) < 0xd
	.space 0xd - (. - gText_Rom_5F3743)
	.endif

	@ src/data/text/match_call_messages.h:337 gText_MatchCallSwellShock_Wattson_Pokemon
	.globl gText_Rom_5F3750
gText_Rom_5F3750: @ 0x085F3750
	.string "でんきの パワーを くらえ!$"
	.if (. - gText_Rom_5F3750) > 0xf
	.error "gText_Rom_5F3750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3750) < 0xf
	.space 0xf - (. - gText_Rom_5F3750)
	.endif

	@ src/data/text/match_call_messages.h:338 gText_MatchCallSwellShock_Wattson_Intro1
	.globl gText_Rom_5F375F
gText_Rom_5F375F: @ 0x085F375F
	.string "とちゅうで なげだしたら$"
	.if (. - gText_Rom_5F375F) > 0xd
	.error "gText_Rom_5F375F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F375F) < 0xd
	.space 0xd - (. - gText_Rom_5F375F)
	.endif

	@ src/data/text/match_call_messages.h:339 gText_MatchCallSwellShock_Wattson_Intro2
	.globl gText_Rom_5F376C
gText_Rom_5F376C: @ 0x085F376C
	.string "いかんぞ ……ワシもな$"
	.if (. - gText_Rom_5F376C) > 0xc
	.error "gText_Rom_5F376C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F376C) < 0xc
	.space 0xc - (. - gText_Rom_5F376C)
	.endif

	@ src/data/text/match_call_messages.h:341 gText_MatchCallPassionBurn_Flannery_Strategy
	.globl gText_Rom_5F3778
gText_Rom_5F3778: @ 0x085F3778
	.string "つよきに せめる$"
	.if (. - gText_Rom_5F3778) > 0x9
	.error "gText_Rom_5F3778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3778) < 0x9
	.space 0x9 - (. - gText_Rom_5F3778)
	.endif

	@ src/data/text/match_call_messages.h:342 gText_MatchCallPassionBurn_Flannery_Pokemon
	.globl gText_Rom_5F3781
gText_Rom_5F3781: @ 0x085F3781
	.string "もえろ じょうねつの ほのお!$"
	.if (. - gText_Rom_5F3781) > 0x10
	.error "gText_Rom_5F3781 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3781) < 0x10
	.space 0x10 - (. - gText_Rom_5F3781)
	.endif

	@ src/data/text/match_call_messages.h:343 gText_MatchCallPassionBurn_Flannery_Intro1
	.globl gText_Rom_5F3791
gText_Rom_5F3791: @ 0x085F3791
	.string "いちにちの つかれは$"
	.if (. - gText_Rom_5F3791) > 0xb
	.error "gText_Rom_5F3791 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3791) < 0xb
	.space 0xb - (. - gText_Rom_5F3791)
	.endif

	@ src/data/text/match_call_messages.h:344 gText_MatchCallPassionBurn_Flannery_Intro2
	.globl gText_Rom_5F379C
gText_Rom_5F379C: @ 0x085F379C
	.string "おんせんで スッキリ!$"
	.if (. - gText_Rom_5F379C) > 0xc
	.error "gText_Rom_5F379C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F379C) < 0xc
	.space 0xc - (. - gText_Rom_5F379C)
	.endif

	@ src/data/text/match_call_messages.h:346 gText_MatchCallReliableOne_Dad_Strategy
	.globl gText_Rom_5F37A8
gText_Rom_5F37A8: @ 0x085F37A8
	.string "りんきおうへんに たたかう$"
	.if (. - gText_Rom_5F37A8) > 0xe
	.error "gText_Rom_5F37A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37A8) < 0xe
	.space 0xe - (. - gText_Rom_5F37A8)
	.endif

	@ src/data/text/match_call_messages.h:347 gText_MatchCallReliableOne_Dad_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F37B6
gText_Rom_5F37B6: @ 0x085F37B6
	.string "バランスよく そだてている$"
	.if (. - gText_Rom_5F37B6) != 0xe
	.error "gText_Rom_5F37B6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F37C0
	.set gText_Rom_5F37C0, gText_Rom_5F37B6 + 0xa

	@ src/data/text/match_call_messages.h:348 gText_MatchCallReliableOne_Dad_Intro1
	.globl gText_Rom_5F37C4
gText_Rom_5F37C4: @ 0x085F37C4
	.string "いえから とほで 30ぷん$"
	.if (. - gText_Rom_5F37C4) > 0xe
	.error "gText_Rom_5F37C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37C4) < 0xe
	.space 0xe - (. - gText_Rom_5F37C4)
	.endif

	@ src/data/text/match_call_messages.h:349 gText_MatchCallReliableOne_Dad_Intro2
	.globl gText_Rom_5F37D2
gText_Rom_5F37D2: @ 0x085F37D2
	.string "まいにち かよっています$"
	.if (. - gText_Rom_5F37D2) > 0xd
	.error "gText_Rom_5F37D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37D2) < 0xd
	.space 0xd - (. - gText_Rom_5F37D2)
	.endif

	@ src/data/text/match_call_messages.h:351 gText_MatchCallSkyTamer_Winona_Strategy
	.globl gText_Rom_5F37DF
gText_Rom_5F37DF: @ 0x085F37DF
	.string "スピードを いかして たたかう$"
	.if (. - gText_Rom_5F37DF) > 0x10
	.error "gText_Rom_5F37DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37DF) < 0x10
	.space 0x10 - (. - gText_Rom_5F37DF)
	.endif

	@ src/data/text/match_call_messages.h:352 gText_MatchCallSkyTamer_Winona_Pokemon
	.globl gText_Rom_5F37EF
gText_Rom_5F37EF: @ 0x085F37EF
	.string "かれいに そらを まう!$"
	.if (. - gText_Rom_5F37EF) > 0xd
	.error "gText_Rom_5F37EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37EF) < 0xd
	.space 0xd - (. - gText_Rom_5F37EF)
	.endif

	@ src/data/text/match_call_messages.h:353 gText_MatchCallSkyTamer_Winona_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F37FC
gText_Rom_5F37FC: @ 0x085F37FC
	.string "しぜんと いったいに なって$"
	.if (. - gText_Rom_5F37FC) != 0xf
	.error "gText_Rom_5F37FC must retain its original byte length"
	.endif
	.globl gText_Rom_5F3807
	.set gText_Rom_5F3807, gText_Rom_5F37FC + 0xb

	@ src/data/text/match_call_messages.h:354 gText_MatchCallSkyTamer_Winona_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F380B
gText_Rom_5F380B: @ 0x085F380B
	.string "くらすことが いちばん$"
	.if (. - gText_Rom_5F380B) != 0xc
	.error "gText_Rom_5F380B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3812
	.set gText_Rom_5F3812, gText_Rom_5F380B + 0x7

	@ src/data/text/match_call_messages.h:356 gText_MatchCallMysticDuo_TateAndLiza_Strategy
	.globl gText_Rom_5F3817
gText_Rom_5F3817: @ 0x085F3817
	.string "ふたりで きょうりょく!$"
	.if (. - gText_Rom_5F3817) > 0xd
	.error "gText_Rom_5F3817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3817) < 0xd
	.space 0xd - (. - gText_Rom_5F3817)
	.endif

	@ src/data/text/match_call_messages.h:357 gText_MatchCallMysticDuo_TateAndLiza_Pokemon
	.globl gText_Rom_5F3824
gText_Rom_5F3824: @ 0x085F3824
	.string "いつも なかよしの ポケモン!$"
	.if (. - gText_Rom_5F3824) > 0x10
	.error "gText_Rom_5F3824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3824) < 0x10
	.space 0x10 - (. - gText_Rom_5F3824)
	.endif

	@ src/data/text/match_call_messages.h:358 gText_MatchCallMysticDuo_TateAndLiza_Intro1
	.globl gText_Rom_5F3834
gText_Rom_5F3834: @ 0x085F3834
	.string "おとうさんは わたしたちの$"
	.if (. - gText_Rom_5F3834) > 0xe
	.error "gText_Rom_5F3834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3834) < 0xe
	.space 0xe - (. - gText_Rom_5F3834)
	.endif

	@ src/data/text/match_call_messages.h:359 gText_MatchCallMysticDuo_TateAndLiza_Intro2
	.globl gText_Rom_5F3842
gText_Rom_5F3842: @ 0x085F3842
	.string "くべつが つかなく なるのよ!$"
	.if (. - gText_Rom_5F3842) > 0x10
	.error "gText_Rom_5F3842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3842) < 0x10
	.space 0x10 - (. - gText_Rom_5F3842)
	.endif

	@ src/data/text/match_call_messages.h:361 gText_MatchCallDandyCharm_Juan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3852
gText_Rom_5F3852: @ 0x085F3852
	.string "すばらしき みずの ちから$"
	.if (. - gText_Rom_5F3852) != 0xe
	.error "gText_Rom_5F3852 must retain its original byte length"
	.endif
	.globl gText_Rom_5F385C
	.set gText_Rom_5F385C, gText_Rom_5F3852 + 0xa

	@ src/data/text/match_call_messages.h:362 gText_MatchCallDandyCharm_Juan_Pokemon
	.globl gText_Rom_5F3860
gText_Rom_5F3860: @ 0x085F3860
	.string "エレガントな ポケモンたち!$"
	.if (. - gText_Rom_5F3860) > 0xf
	.error "gText_Rom_5F3860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3860) < 0xf
	.space 0xf - (. - gText_Rom_5F3860)
	.endif

	@ src/data/text/match_call_messages.h:363 gText_MatchCallDandyCharm_Juan_Intro1
	.globl gText_Rom_5F386F
gText_Rom_5F386F: @ 0x085F386F
	.string "うつくしいレディの せいえんが$"
	.if (. - gText_Rom_5F386F) > 0x10
	.error "gText_Rom_5F386F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F386F) < 0x10
	.space 0x10 - (. - gText_Rom_5F386F)
	.endif

	@ src/data/text/match_call_messages.h:364 gText_MatchCallDandyCharm_Juan_Intro2
	.globl gText_Rom_5F387F
gText_Rom_5F387F: @ 0x085F387F
	.string "わたくしの パワーの みなもと$"
	.if (. - gText_Rom_5F387F) > 0x10
	.error "gText_Rom_5F387F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F387F) < 0x10
	.space 0x10 - (. - gText_Rom_5F387F)
	.endif

	@ src/data/text/match_call_messages.h:366 gText_MatchCallEliteFour_Sidney_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F388F
gText_Rom_5F388F: @ 0x085F388F
	.string "ぼうぎょ よりも こうげき!$"
	.if (. - gText_Rom_5F388F) != 0xf
	.error "gText_Rom_5F388F must retain its original byte length"
	.endif
	.globl gText_Rom_5F3897
	.set gText_Rom_5F3897, gText_Rom_5F388F + 0x8

	@ src/data/text/match_call_messages.h:367 gText_MatchCallEliteFour_Sidney_Pokemon
	.globl gText_Rom_5F389E
gText_Rom_5F389E: @ 0x085F389E
	.string "あくの びがく!$"
	.if (. - gText_Rom_5F389E) > 0x9
	.error "gText_Rom_5F389E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F389E) < 0x9
	.space 0x9 - (. - gText_Rom_5F389E)
	.endif

	@ src/data/text/match_call_messages.h:368 gText_MatchCallEliteFour_Sidney_Intro1
	.globl gText_Rom_5F38A7
gText_Rom_5F38A7: @ 0x085F38A7
	.string "ふりょうと いわれた オレも$"
	.if (. - gText_Rom_5F38A7) > 0xf
	.error "gText_Rom_5F38A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38A7) < 0xf
	.space 0xf - (. - gText_Rom_5F38A7)
	.endif

	@ src/data/text/match_call_messages.h:369 gText_MatchCallEliteFour_Sidney_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38B6
gText_Rom_5F38B6: @ 0x085F38B6
	.string "いまじゃ りっぱな してんのう$"
	.if (. - gText_Rom_5F38B6) != 0x10
	.error "gText_Rom_5F38B6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F38C0
	.set gText_Rom_5F38C0, gText_Rom_5F38B6 + 0xa

	@ src/data/text/match_call_messages.h:371 gText_MatchCallEliteFour_Phoebe_Strategy
	.globl gText_Rom_5F38C6
gText_Rom_5F38C6: @ 0x085F38C6
	.string "あいてを まどわせて たたかう$"
	.if (. - gText_Rom_5F38C6) > 0x10
	.error "gText_Rom_5F38C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38C6) < 0x10
	.space 0x10 - (. - gText_Rom_5F38C6)
	.endif

	@ src/data/text/match_call_messages.h:372 gText_MatchCallEliteFour_Phoebe_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38D6
gText_Rom_5F38D6: @ 0x085F38D6
	.string "つかみどころ ありません$"
	.if (. - gText_Rom_5F38D6) != 0xd
	.error "gText_Rom_5F38D6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F38DF
	.set gText_Rom_5F38DF, gText_Rom_5F38D6 + 0x9

	@ src/data/text/match_call_messages.h:373 gText_MatchCallEliteFour_Phoebe_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38E3
gText_Rom_5F38E3: @ 0x085F38E3
	.string "おくりびやまの おばあちゃん$"
	.if (. - gText_Rom_5F38E3) != 0xf
	.error "gText_Rom_5F38E3 must retain its original byte length"
	.endif
	.globl gText_Rom_5F38EE
	.set gText_Rom_5F38EE, gText_Rom_5F38E3 + 0xb

	@ src/data/text/match_call_messages.h:374 gText_MatchCallEliteFour_Phoebe_Intro2
	.globl gText_Rom_5F38F2
gText_Rom_5F38F2: @ 0x085F38F2
	.string "げんきに している かしら?$"
	.if (. - gText_Rom_5F38F2) > 0xf
	.error "gText_Rom_5F38F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38F2) < 0xf
	.space 0xf - (. - gText_Rom_5F38F2)
	.endif

	@ src/data/text/match_call_messages.h:376 gText_MatchCallEliteFour_Glacia_Strategy
	.globl gText_Rom_5F3901
gText_Rom_5F3901: @ 0x085F3901
	.string "どうぐを くしして たたかう$"
	.if (. - gText_Rom_5F3901) > 0xf
	.error "gText_Rom_5F3901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3901) < 0xf
	.space 0xf - (. - gText_Rom_5F3901)
	.endif

	@ src/data/text/match_call_messages.h:377 gText_MatchCallEliteFour_Glacia_Pokemon
	.globl gText_Rom_5F3910
gText_Rom_5F3910: @ 0x085F3910
	.string "ひょうてんかの じょうねつ!$"
	.if (. - gText_Rom_5F3910) > 0xf
	.error "gText_Rom_5F3910 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3910) < 0xf
	.space 0xf - (. - gText_Rom_5F3910)
	.endif

	@ src/data/text/match_call_messages.h:378 gText_MatchCallEliteFour_Glacia_Intro1
	.globl gText_Rom_5F391F
gText_Rom_5F391F: @ 0x085F391F
	.string "あたたかい とち だからこそ$"
	.if (. - gText_Rom_5F391F) > 0xf
	.error "gText_Rom_5F391F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F391F) < 0xf
	.space 0xf - (. - gText_Rom_5F391F)
	.endif

	@ src/data/text/match_call_messages.h:379 gText_MatchCallEliteFour_Glacia_Intro2
	.globl gText_Rom_5F392E
gText_Rom_5F392E: @ 0x085F392E
	.string "こおりタイプが きたえられる!$"
	.if (. - gText_Rom_5F392E) > 0x10
	.error "gText_Rom_5F392E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F392E) < 0x10
	.space 0x10 - (. - gText_Rom_5F392E)
	.endif

	@ src/data/text/match_call_messages.h:381 gText_MatchCallEliteFour_Drake_Strategy
	.globl gText_Rom_5F393E
gText_Rom_5F393E: @ 0x085F393E
	.string "たかい のうりょくで せめる!$"
	.if (. - gText_Rom_5F393E) > 0x10
	.error "gText_Rom_5F393E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F393E) < 0x10
	.space 0x10 - (. - gText_Rom_5F393E)
	.endif

	@ src/data/text/match_call_messages.h:382 gText_MatchCallEliteFour_Drake_Pokemon
	.globl gText_Rom_5F394E
gText_Rom_5F394E: @ 0x085F394E
	.string "ドラゴンタイプの そこぢから!$"
	.if (. - gText_Rom_5F394E) > 0x10
	.error "gText_Rom_5F394E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F394E) < 0x10
	.space 0x10 - (. - gText_Rom_5F394E)
	.endif

	@ src/data/text/match_call_messages.h:383 gText_MatchCallEliteFour_Drake_Intro1
	.globl gText_Rom_5F395E
gText_Rom_5F395E: @ 0x085F395E
	.string "いのちを すくって くれた$"
	.if (. - gText_Rom_5F395E) > 0xe
	.error "gText_Rom_5F395E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F395E) < 0xe
	.space 0xe - (. - gText_Rom_5F395E)
	.endif

	@ src/data/text/match_call_messages.h:384 gText_MatchCallEliteFour_Drake_Intro2
	.globl gText_Rom_5F396C
gText_Rom_5F396C: @ 0x085F396C
	.string "ポケモンに すべてを そそぐ$"
	.if (. - gText_Rom_5F396C) > 0xf
	.error "gText_Rom_5F396C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F396C) < 0xf
	.space 0xf - (. - gText_Rom_5F396C)
	.endif

	@ src/data/text/match_call_messages.h:386 gText_MatchCallChampion_Wallace_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F397B
gText_Rom_5F397B: @ 0x085F397B
	.string "つつしんで おあいて します$"
	.if (. - gText_Rom_5F397B) != 0xf
	.error "gText_Rom_5F397B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3986
	.set gText_Rom_5F3986, gText_Rom_5F397B + 0xb

	@ src/data/text/match_call_messages.h:387 gText_MatchCallChampion_Wallace_Pokemon
	.globl gText_Rom_5F398A
gText_Rom_5F398A: @ 0x085F398A
	.string "ゆうがな ポケモンが すき$"
	.if (. - gText_Rom_5F398A) > 0xe
	.error "gText_Rom_5F398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F398A) < 0xe
	.space 0xe - (. - gText_Rom_5F398A)
	.endif

	@ src/data/text/match_call_messages.h:388 gText_MatchCallChampion_Wallace_Intro1
	.globl gText_Rom_5F3998
gText_Rom_5F3998: @ 0x085F3998
	.string "ちせいと うつくしさを$"
	.if (. - gText_Rom_5F3998) > 0xc
	.error "gText_Rom_5F3998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3998) < 0xc
	.space 0xc - (. - gText_Rom_5F3998)
	.endif

	@ src/data/text/match_call_messages.h:389 gText_MatchCallChampion_Wallace_Intro2
	.globl gText_Rom_5F39A4
gText_Rom_5F39A4: @ 0x085F39A4
	.string "かねそなえた わたし……$"
	.if (. - gText_Rom_5F39A4) > 0xd
	.error "gText_Rom_5F39A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F39A4) < 0xd
	.space 0xd - (. - gText_Rom_5F39A4)
	.endif
	.incbin "baserom.gba", 0x5f39b1, 0x3
	.globl gUnknown_85F39B4
gUnknown_85F39B4: @ 0x085F39B4
	.incbin "baserom.gba", 0x5f39b4, 0x4e0
	.globl gUnknown_85F3E94
gUnknown_85F3E94: @ 0x085F3E94
	.incbin "baserom.gba", 0x5f3e94, 0x2
	.globl gUnknown_85F3E96
gUnknown_85F3E96: @ 0x085F3E96
	.incbin "baserom.gba", 0x5f3e96, 0x3
	.globl gUnknown_85F3E99
gUnknown_85F3E99: @ 0x085F3E99
	.incbin "baserom.gba", 0x5f3e99, 0x17
	.globl gUnknown_85F3EB0
gUnknown_85F3EB0: @ 0x085F3EB0
	.incbin "baserom.gba", 0x5f3eb0, 0x20
	.globl gUnknown_85F3ED0
gUnknown_85F3ED0: @ 0x085F3ED0
	.incbin "baserom.gba", 0x5f3ed0, 0xa4
	.globl gUnknown_85F3F74
gUnknown_85F3F74: @ 0x085F3F74
	.incbin "baserom.gba", 0x5f3f74, 0x10c
	.globl gUnknown_85F4080
gUnknown_85F4080: @ 0x085F4080
	.incbin "baserom.gba", 0x5f4080, 0x20
	.globl gUnknown_85F40A0
gUnknown_85F40A0: @ 0x085F40A0
	.incbin "baserom.gba", 0x5f40a0, 0x20
	.globl gUnknown_85F40C0
gUnknown_85F40C0: @ 0x085F40C0
	.incbin "baserom.gba", 0x5f40c0, 0x40
	.globl gUnknown_85F4100
gUnknown_85F4100: @ 0x085F4100
	.incbin "baserom.gba", 0x5f4100, 0x2c
	.globl gUnknown_85F412C
gUnknown_85F412C: @ 0x085F412C
	.incbin "baserom.gba", 0x5f412c, 0x8
	.globl gUnknown_85F4134
gUnknown_85F4134: @ 0x085F4134
	.incbin "baserom.gba", 0x5f4134, 0x4
	.globl gUnknown_85F4138
gUnknown_85F4138: @ 0x085F4138
	.incbin "baserom.gba", 0x5f4138, 0x40
	.globl gUnknown_85F4178
gUnknown_85F4178: @ 0x085F4178
	.incbin "baserom.gba", 0x5f4178, 0x8
	.globl gUnknown_85F4180
gUnknown_85F4180: @ 0x085F4180
	.incbin "baserom.gba", 0x5f4180, 0x8
	.globl gUnknown_85F4188
gUnknown_85F4188: @ 0x085F4188
	.incbin "baserom.gba", 0x5f4188, 0xc
	.globl gUnknown_85F4194
gUnknown_85F4194: @ 0x085F4194

	@ src/pokenav_match_call_gfx.c:213 sText_CallingDots
	.globl gText_Rom_5F4194
gText_Rom_5F4194: @ 0x085F4194
	.string "・{PAUSE 4}・{PAUSE 4}・{PAUSE 4}・{PAUSE 4}・\p$"
	.if (. - gText_Rom_5F4194) > 0x13
	.error "gText_Rom_5F4194 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F4194) < 0x13
	.space 0x13 - (. - gText_Rom_5F4194)
	.endif
	.incbin "baserom.gba", 0x5f41a7, 0x1
	.globl gUnknown_85F41A8
gUnknown_85F41A8: @ 0x085F41A8
	.incbin "baserom.gba", 0x5f41a8, 0x8
	.globl gUnknown_85F41B0
gUnknown_85F41B0: @ 0x085F41B0
	.incbin "baserom.gba", 0x5f41b0, 0x8
	.globl gUnknown_85F41B8
gUnknown_85F41B8: @ 0x085F41B8
	.incbin "baserom.gba", 0x5f41b8, 0x18
	.globl gUnknown_85F41D0
gUnknown_85F41D0: @ 0x085F41D0
	.incbin "baserom.gba", 0x5f41d0, 0x20
	.globl gUnknown_85F41F0
gUnknown_85F41F0: @ 0x085F41F0
	.incbin "baserom.gba", 0x5f41f0, 0x18
	.globl gUnknown_85F4208
gUnknown_85F4208: @ 0x085F4208
	.incbin "baserom.gba", 0x5f4208, 0x20
	.globl gUnknown_85F4228
gUnknown_85F4228: @ 0x085F4228
	.incbin "baserom.gba", 0x5f4228, 0x20
	.globl gUnknown_85F4248
gUnknown_85F4248: @ 0x085F4248
	.incbin "baserom.gba", 0x5f4248, 0xab4
	.globl gUnknown_85F4CFC
gUnknown_85F4CFC: @ 0x085F4CFC
	.incbin "baserom.gba", 0x5f4cfc, 0xc
	.globl gUnknown_85F4D08
gUnknown_85F4D08: @ 0x085F4D08
	.incbin "baserom.gba", 0x5f4d08, 0x14
	.globl gUnknown_85F4D1C
gUnknown_85F4D1C: @ 0x085F4D1C
	.incbin "baserom.gba", 0x5f4d1c, 0x8
	.globl gUnknown_85F4D24
gUnknown_85F4D24: @ 0x085F4D24
	.incbin "baserom.gba", 0x5f4d24, 0x10
	.globl gUnknown_85F4D34
gUnknown_85F4D34: @ 0x085F4D34
	.incbin "baserom.gba", 0x5f4d34, 0x8
	.globl gUnknown_85F4D3C
gUnknown_85F4D3C: @ 0x085F4D3C
	.incbin "baserom.gba", 0x5f4d3c, 0xb8
	.globl gUnknown_85F4DF4
gUnknown_85F4DF4: @ 0x085F4DF4
	.incbin "baserom.gba", 0x5f4df4, 0x18
	.globl gUnknown_85F4E0C
gUnknown_85F4E0C: @ 0x085F4E0C
	.incbin "baserom.gba", 0x5f4e0c, 0x20
	.globl gUnknown_85F4E2C
gUnknown_85F4E2C: @ 0x085F4E2C
	.incbin "baserom.gba", 0x5f4e2c, 0x20
	.globl gUnknown_85F4E4C
gUnknown_85F4E4C: @ 0x085F4E4C
	.incbin "baserom.gba", 0x5f4e4c, 0x20
	.globl gUnknown_85F4E6C
gUnknown_85F4E6C: @ 0x085F4E6C
	.incbin "baserom.gba", 0x5f4e6c, 0x794
	.globl gUnknown_85F5600
gUnknown_85F5600: @ 0x085F5600
	.incbin "baserom.gba", 0x5f5600, 0x1ec
	.globl gUnknown_85F57EC
gUnknown_85F57EC: @ 0x085F57EC
	.incbin "baserom.gba", 0x5f57ec, 0x14
	.globl gUnknown_85F5800
gUnknown_85F5800: @ 0x085F5800
	.incbin "baserom.gba", 0x5f5800, 0xfc
	.globl gUnknown_85F58FC
gUnknown_85F58FC: @ 0x085F58FC
	.incbin "baserom.gba", 0x5f58fc, 0x48
	.globl gUnknown_85F5944
gUnknown_85F5944: @ 0x085F5944
	.incbin "baserom.gba", 0x5f5944, 0x20
	.globl gUnknown_85F5964
gUnknown_85F5964: @ 0x085F5964
	.incbin "baserom.gba", 0x5f5964, 0xc
	.globl gUnknown_85F5970
gUnknown_85F5970: @ 0x085F5970
	.incbin "baserom.gba", 0x5f5970, 0x8
	.globl gUnknown_85F5978
gUnknown_85F5978: @ 0x085F5978
	.incbin "baserom.gba", 0x5f5978, 0x8
	.globl gUnknown_85F5980
gUnknown_85F5980: @ 0x085F5980
	.incbin "baserom.gba", 0x5f5980, 0x8
	.globl gUnknown_85F5988
gUnknown_85F5988: @ 0x085F5988
	.incbin "baserom.gba", 0x5f5988, 0x8
	.globl gUnknown_85F5990
gUnknown_85F5990: @ 0x085F5990
	.incbin "baserom.gba", 0x5f5990, 0x1c
	.globl gUnknown_85F59AC
gUnknown_85F59AC: @ 0x085F59AC
	.incbin "baserom.gba", 0x5f59ac, 0x14
	.globl gUnknown_85F59C0
gUnknown_85F59C0: @ 0x085F59C0
	.incbin "baserom.gba", 0x5f59c0, 0x10
	.globl gUnknown_85F59D0
gUnknown_85F59D0: @ 0x085F59D0
	.incbin "baserom.gba", 0x5f59d0, 0x20
	.globl gUnknown_85F59F0
gUnknown_85F59F0: @ 0x085F59F0
	.incbin "baserom.gba", 0x5f59f0, 0xc8
	.globl gUnknown_85F5AB8
gUnknown_85F5AB8: @ 0x085F5AB8
	.incbin "baserom.gba", 0x5f5ab8, 0xc4
	.globl gUnknown_85F5B7C
gUnknown_85F5B7C: @ 0x085F5B7C
	.incbin "baserom.gba", 0x5f5b7c, 0x20
	.globl gUnknown_85F5B9C
gUnknown_85F5B9C: @ 0x085F5B9C
	.incbin "baserom.gba", 0x5f5b9c, 0x4
	.globl gUnknown_85F5BA0
gUnknown_85F5BA0: @ 0x085F5BA0
	.incbin "baserom.gba", 0x5f5ba0, 0x4
	.globl gUnknown_85F5BA4
gUnknown_85F5BA4: @ 0x085F5BA4
	.incbin "baserom.gba", 0x5f5ba4, 0x1c
	.globl gUnknown_85F5BC0
gUnknown_85F5BC0: @ 0x085F5BC0
	.incbin "baserom.gba", 0x5f5bc0, 0x8
	.globl gUnknown_85F5BC8
gUnknown_85F5BC8: @ 0x085F5BC8
	.incbin "baserom.gba", 0x5f5bc8, 0xc
	.globl gUnknown_85F5BD4
gUnknown_85F5BD4: @ 0x085F5BD4
	.incbin "baserom.gba", 0x5f5bd4, 0x20
	.globl gUnknown_85F5BF4
gUnknown_85F5BF4: @ 0x085F5BF4
	.incbin "baserom.gba", 0x5f5bf4, 0xc8
	.globl gUnknown_85F5CBC
gUnknown_85F5CBC: @ 0x085F5CBC
	.incbin "baserom.gba", 0x5f5cbc, 0xc4
	.globl gUnknown_85F5D80
gUnknown_85F5D80: @ 0x085F5D80
	.incbin "baserom.gba", 0x5f5d80, 0x20
	.globl gUnknown_85F5DA0
gUnknown_85F5DA0: @ 0x085F5DA0
	.incbin "baserom.gba", 0x5f5da0, 0x4
	.globl gUnknown_85F5DA4
gUnknown_85F5DA4: @ 0x085F5DA4
	.incbin "baserom.gba", 0x5f5da4, 0x4
	.globl gUnknown_85F5DA8
gUnknown_85F5DA8: @ 0x085F5DA8
	.incbin "baserom.gba", 0x5f5da8, 0x1c
	.globl gUnknown_85F5DC4
gUnknown_85F5DC4: @ 0x085F5DC4
	.incbin "baserom.gba", 0x5f5dc4, 0x8
	.globl gUnknown_85F5DCC
gUnknown_85F5DCC: @ 0x085F5DCC
	.incbin "baserom.gba", 0x5f5dcc, 0x7
	.globl gUnknown_85F5DD3
gUnknown_85F5DD3: @ 0x085F5DD3
	.incbin "baserom.gba", 0x5f5dd3, 0x18
	.globl gUnknown_85F5DEB
gUnknown_85F5DEB: @ 0x085F5DEB
	.incbin "baserom.gba", 0x5f5deb, 0x18
	.globl gUnknown_85F5E03
gUnknown_85F5E03: @ 0x085F5E03
	.incbin "baserom.gba", 0x5f5e03, 0x11
	.globl gUnknown_85F5E14
gUnknown_85F5E14: @ 0x085F5E14
	.incbin "baserom.gba", 0x5f5e14, 0x44

	@ src/data/text/ribbon_descriptions.h:1 gRibbonDescriptionPart1_Champion
	.globl gText_Rom_5F5E58
gText_Rom_5F5E58: @ 0x085F5E58
	.string "チャンピオンを たおして$"
	.if (. - gText_Rom_5F5E58) > 0xd
	.error "gText_Rom_5F5E58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5E58) < 0xd
	.space 0xd - (. - gText_Rom_5F5E58)
	.endif

	@ src/data/text/ribbon_descriptions.h:2 gRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E65
gText_Rom_5F5E65: @ 0x085F5E65
	.string "でんどういり した きねんリボン$"
	.if (. - gText_Rom_5F5E65) != 0x11
	.error "gText_Rom_5F5E65 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E6F
	.set gText_Rom_5F5E6F, gText_Rom_5F5E65 + 0xa
	.globl gText_Rom_5F5E72
	.set gText_Rom_5F5E72, gText_Rom_5F5E65 + 0xd

	@ src/data/text/ribbon_descriptions.h:3 gRibbonDescriptionPart1_CoolContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E76
gText_Rom_5F5E76: @ 0x085F5E76
	.string "かっこよさコンテスト$"
	.if (. - gText_Rom_5F5E76) != 0xb
	.error "gText_Rom_5F5E76 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E7B
	.set gText_Rom_5F5E7B, gText_Rom_5F5E76 + 0x5
	.globl gText_Rom_5F5E7D
	.set gText_Rom_5F5E7D, gText_Rom_5F5E76 + 0x7

	@ src/data/text/ribbon_descriptions.h:4 gRibbonDescriptionPart1_BeautyContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E81
gText_Rom_5F5E81: @ 0x085F5E81
	.string "うつくしさコンテスト$"
	.if (. - gText_Rom_5F5E81) != 0xb
	.error "gText_Rom_5F5E81 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E86
	.set gText_Rom_5F5E86, gText_Rom_5F5E81 + 0x5
	.globl gText_Rom_5F5E88
	.set gText_Rom_5F5E88, gText_Rom_5F5E81 + 0x7

	@ src/data/text/ribbon_descriptions.h:5 gRibbonDescriptionPart1_CuteContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E8C
gText_Rom_5F5E8C: @ 0x085F5E8C
	.string "かわいさコンテスト$"
	.if (. - gText_Rom_5F5E8C) != 0xa
	.error "gText_Rom_5F5E8C must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E90
	.set gText_Rom_5F5E90, gText_Rom_5F5E8C + 0x4
	.globl gText_Rom_5F5E92
	.set gText_Rom_5F5E92, gText_Rom_5F5E8C + 0x6

	@ src/data/text/ribbon_descriptions.h:6 gRibbonDescriptionPart1_SmartContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5E96
gText_Rom_5F5E96: @ 0x085F5E96
	.string "かしこさコンテスト$"
	.if (. - gText_Rom_5F5E96) != 0xa
	.error "gText_Rom_5F5E96 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5E9A
	.set gText_Rom_5F5E9A, gText_Rom_5F5E96 + 0x4
	.globl gText_Rom_5F5E9C
	.set gText_Rom_5F5E9C, gText_Rom_5F5E96 + 0x6

	@ src/data/text/ribbon_descriptions.h:7 gRibbonDescriptionPart1_ToughContest (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5EA0
gText_Rom_5F5EA0: @ 0x085F5EA0
	.string "たくましさコンテスト$"
	.if (. - gText_Rom_5F5EA0) != 0xb
	.error "gText_Rom_5F5EA0 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5EA5
	.set gText_Rom_5F5EA5, gText_Rom_5F5EA0 + 0x5
	.globl gText_Rom_5F5EA7
	.set gText_Rom_5F5EA7, gText_Rom_5F5EA0 + 0x7

	@ src/data/text/ribbon_descriptions.h:8 gRibbonDescriptionPart2_NormalRank
	.globl gText_Rom_5F5EAB
gText_Rom_5F5EAB: @ 0x085F5EAB
	.string "ノーマルランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EAB) > 0xf
	.error "gText_Rom_5F5EAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EAB) < 0xf
	.space 0xf - (. - gText_Rom_5F5EAB)
	.endif

	@ src/data/text/ribbon_descriptions.h:9 gRibbonDescriptionPart2_SuperRank
	.globl gText_Rom_5F5EBA
gText_Rom_5F5EBA: @ 0x085F5EBA
	.string "スーパーランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EBA) > 0xf
	.error "gText_Rom_5F5EBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EBA) < 0xf
	.space 0xf - (. - gText_Rom_5F5EBA)
	.endif

	@ src/data/text/ribbon_descriptions.h:10 gRibbonDescriptionPart2_HyperRank
	.globl gText_Rom_5F5EC9
gText_Rom_5F5EC9: @ 0x085F5EC9
	.string "ハイパーランク ゆうしょう!$"
	.if (. - gText_Rom_5F5EC9) > 0xf
	.error "gText_Rom_5F5EC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EC9) < 0xf
	.space 0xf - (. - gText_Rom_5F5EC9)
	.endif

	@ src/data/text/ribbon_descriptions.h:11 gRibbonDescriptionPart2_MasterRank
	.globl gText_Rom_5F5ED8
gText_Rom_5F5ED8: @ 0x085F5ED8
	.string "マスターランク ゆうしょう!$"
	.if (. - gText_Rom_5F5ED8) > 0xf
	.error "gText_Rom_5F5ED8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5ED8) < 0xf
	.space 0xf - (. - gText_Rom_5F5ED8)
	.endif

	@ src/data/text/ribbon_descriptions.h:12 gRibbonDescriptionPart1_Winning
	.globl gText_Rom_5F5EE7
gText_Rom_5F5EE7: @ 0x085F5EE7
	.string "バトルタワー レベル50を$"
	.if (. - gText_Rom_5F5EE7) > 0xe
	.error "gText_Rom_5F5EE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5EE7) < 0xe
	.space 0xe - (. - gText_Rom_5F5EE7)
	.endif

	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5EF5
gText_Rom_5F5EF5: @ 0x085F5EF5
	.string "かちぬいた きねんのリボン$"
	.if (. - gText_Rom_5F5EF5) != 0xe
	.error "gText_Rom_5F5EF5 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5EFF
	.set gText_Rom_5F5EFF, gText_Rom_5F5EF5 + 0xa
	.incbin "baserom.gba", 0x5f5f03, 0x10

	@ src/data/text/ribbon_descriptions.h:13 gRibbonDescriptionPart2_Winning (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F13
gText_Rom_5F5F13: @ 0x085F5F13
	.string "かちぬいた きねんのリボン$"
	.if (. - gText_Rom_5F5F13) != 0xe
	.error "gText_Rom_5F5F13 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F1D
	.set gText_Rom_5F5F1D, gText_Rom_5F5F13 + 0xa

	@ src/data/text/ribbon_descriptions.h:16 gRibbonDescriptionPart1_Artist
	.globl gText_Rom_5F5F21
gText_Rom_5F5F21: @ 0x085F5F21
	.string "ごうかな にがおえの モデルに$"
	.if (. - gText_Rom_5F5F21) > 0x10
	.error "gText_Rom_5F5F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F5F21) < 0x10
	.space 0x10 - (. - gText_Rom_5F5F21)
	.endif

	@ src/data/text/ribbon_descriptions.h:17 gRibbonDescriptionPart2_Artist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F31
gText_Rom_5F5F31: @ 0x085F5F31
	.string "なった きねんの リボン$"
	.if (. - gText_Rom_5F5F31) != 0xd
	.error "gText_Rom_5F5F31 must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F3A
	.set gText_Rom_5F5F3A, gText_Rom_5F5F31 + 0x9

	@ src/data/text/ribbon_descriptions.h:18 gRibbonDescriptionPart1_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F3E
gText_Rom_5F5F3E: @ 0x085F5F3E
	.string "たくさん どりょく している$"
	.if (. - gText_Rom_5F5F3E) != 0xf
	.error "gText_Rom_5F5F3E must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F49
	.set gText_Rom_5F5F49, gText_Rom_5F5F3E + 0xb

	@ src/data/text/ribbon_descriptions.h:19 gRibbonDescriptionPart2_Effort
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F5F4D
gText_Rom_5F5F4D: @ 0x085F5F4D
	.string "ポケモンに おくられる リボン$"
	.if (. - gText_Rom_5F5F4D) != 0x10
	.error "gText_Rom_5F5F4D must retain its original byte length"
	.endif
	.globl gText_Rom_5F5F59
	.set gText_Rom_5F5F59, gText_Rom_5F5F4D + 0xc
	.incbin "baserom.gba", 0x5f5f5d, 0x3
	.globl gUnknown_85F5F60
gUnknown_85F5F60: @ 0x085F5F60
	.incbin "baserom.gba", 0x5f5f60, 0xc8

	@ src/data/text/gift_ribbon_descriptions.h:1 gGiftRibbonDescriptionPart1_2003RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6028
gText_Rom_5F6028: @ 0x085F6028
	.string "2003ねん ちほう たいかい$"
	.if (. - gText_Rom_5F6028) != 0x10
	.error "gText_Rom_5F6028 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6033
	.set gText_Rom_5F6033, gText_Rom_5F6028 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:2 gGiftRibbonDescriptionPart2_Champion
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6038
gText_Rom_5F6038: @ 0x085F6038
	.string "ゆうしょう きねんリボン$"
	.if (. - gText_Rom_5F6038) != 0xd
	.error "gText_Rom_5F6038 must retain its original byte length"
	.endif
	.globl gText_Rom_5F603E
	.set gText_Rom_5F603E, gText_Rom_5F6038 + 0x6
	.globl gText_Rom_5F6041
	.set gText_Rom_5F6041, gText_Rom_5F6038 + 0x9

	@ src/data/text/gift_ribbon_descriptions.h:3 gGiftRibbonDescriptionPart1_2003NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6045
gText_Rom_5F6045: @ 0x085F6045
	.string "2003ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F6045) != 0x11
	.error "gText_Rom_5F6045 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6051
	.set gText_Rom_5F6051, gText_Rom_5F6045 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:4 gGiftRibbonDescriptionPart1_2003GlobalCup
	.globl gText_Rom_5F6056
gText_Rom_5F6056: @ 0x085F6056
	.string "2003ねん ワールドカップ$"
	.if (. - gText_Rom_5F6056) > 0xf
	.error "gText_Rom_5F6056 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F6056) < 0xf
	.space 0xf - (. - gText_Rom_5F6056)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:5 gGiftRibbonDescriptionPart2_RunnerUp
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6065
gText_Rom_5F6065: @ 0x085F6065
	.string "じゅんゆうしょう きねんリボン$"
	.if (. - gText_Rom_5F6065) != 0x10
	.error "gText_Rom_5F6065 must retain its original byte length"
	.endif
	.globl gText_Rom_5F6068
	.set gText_Rom_5F6068, gText_Rom_5F6065 + 0x3
	.globl gText_Rom_5F606E
	.set gText_Rom_5F606E, gText_Rom_5F6065 + 0x9
	.globl gText_Rom_5F6071
	.set gText_Rom_5F6071, gText_Rom_5F6065 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:6 gGiftRibbonDescriptionPart2_Semifinalist
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6075
gText_Rom_5F6075: @ 0x085F6075
	.string "ベスト4 きねんリボン$"
	.if (. - gText_Rom_5F6075) != 0xc
	.error "gText_Rom_5F6075 must retain its original byte length"
	.endif
	.globl gText_Rom_5F607A
	.set gText_Rom_5F607A, gText_Rom_5F6075 + 0x5
	.globl gText_Rom_5F607D
	.set gText_Rom_5F607D, gText_Rom_5F6075 + 0x8

	@ src/data/text/gift_ribbon_descriptions.h:7 gGiftRibbonDescriptionPart1_2004RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6081
gText_Rom_5F6081: @ 0x085F6081
	.string "2004ねん ちほう たいかい$"
	.if (. - gText_Rom_5F6081) != 0x10
	.error "gText_Rom_5F6081 must retain its original byte length"
	.endif
	.globl gText_Rom_5F608C
	.set gText_Rom_5F608C, gText_Rom_5F6081 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:8 gGiftRibbonDescriptionPart1_2004NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F6091
gText_Rom_5F6091: @ 0x085F6091
	.string "2004ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F6091) != 0x11
	.error "gText_Rom_5F6091 must retain its original byte length"
	.endif
	.globl gText_Rom_5F609D
	.set gText_Rom_5F609D, gText_Rom_5F6091 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:9 gGiftRibbonDescriptionPart1_2004GlobalCup
	.globl gText_Rom_5F60A2
gText_Rom_5F60A2: @ 0x085F60A2
	.string "2004ねん ワールドカップ$"
	.if (. - gText_Rom_5F60A2) > 0xf
	.error "gText_Rom_5F60A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60A2) < 0xf
	.space 0xf - (. - gText_Rom_5F60A2)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:10 gGiftRibbonDescriptionPart1_2005RegionalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60B1
gText_Rom_5F60B1: @ 0x085F60B1
	.string "2005ねん ちほう たいかい$"
	.if (. - gText_Rom_5F60B1) != 0x10
	.error "gText_Rom_5F60B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F60BC
	.set gText_Rom_5F60BC, gText_Rom_5F60B1 + 0xb

	@ src/data/text/gift_ribbon_descriptions.h:11 gGiftRibbonDescriptionPart1_2005NationalTourney
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60C1
gText_Rom_5F60C1: @ 0x085F60C1
	.string "2005ねん ぜんこく たいかい$"
	.if (. - gText_Rom_5F60C1) != 0x11
	.error "gText_Rom_5F60C1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F60CD
	.set gText_Rom_5F60CD, gText_Rom_5F60C1 + 0xc

	@ src/data/text/gift_ribbon_descriptions.h:12 gGiftRibbonDescriptionPart1_2005GlobalCup
	.globl gText_Rom_5F60D2
gText_Rom_5F60D2: @ 0x085F60D2
	.string "2005ねん ワールドカップ$"
	.if (. - gText_Rom_5F60D2) > 0xf
	.error "gText_Rom_5F60D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60D2) < 0xf
	.space 0xf - (. - gText_Rom_5F60D2)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:13 gGiftRibbonDescriptionPart1_PokemonBattleCup
	.globl gText_Rom_5F60E1
gText_Rom_5F60E1: @ 0x085F60E1
	.string "ポケモン バトル カップ$"
	.if (. - gText_Rom_5F60E1) > 0xd
	.error "gText_Rom_5F60E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F60E1) < 0xd
	.space 0xd - (. - gText_Rom_5F60E1)
	.endif

	@ src/data/text/gift_ribbon_descriptions.h:14 gGiftRibbonDescriptionPart2_Participation
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F60EE
gText_Rom_5F60EE: @ 0x085F60EE
	.string "さんか きねんリボン$"
	.if (. - gText_Rom_5F60EE) != 0xb
	.error "gText_Rom_5F60EE must retain its original byte length"
	.endif
	.globl gText_Rom_5F60F2
	.set gText_Rom_5F60F2, gText_Rom_5F60EE + 0x4
	.globl gText_Rom_5F60F5
	.set gText_Rom_5F60F5, gText_Rom_5F60EE + 0x7


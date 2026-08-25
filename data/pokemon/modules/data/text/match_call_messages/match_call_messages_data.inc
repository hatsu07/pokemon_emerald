	@ src/data/text/match_call_messages.h:1 gText_MatchCallAromaLady_Rose_Strategy
	.globl gText_MatchCallAromaLady_Rose_Strategy
gText_MatchCallAromaLady_Rose_Strategy: @ 0x085F28F8
	.string "やさしい きもちに しちゃう{EOS}"
	.if (. - gText_MatchCallAromaLady_Rose_Strategy) > 0xf
	.error "gText_MatchCallAromaLady_Rose_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallAromaLady_Rose_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallAromaLady_Rose_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:2 gText_MatchCallAromaLady_Rose_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallAromaLady_Rose_Pokemon
gText_MatchCallAromaLady_Rose_Pokemon: @ 0x085F2907
	.string "いい においの くさポケモン{EOS}"
	.if (. - gText_MatchCallAromaLady_Rose_Pokemon) != 0xf
	.error "gText_MatchCallAromaLady_Rose_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:3 gText_MatchCallAromaLady_Rose_Intro1
	.globl gText_MatchCallAromaLady_Rose_Intro1
gText_MatchCallAromaLady_Rose_Intro1: @ 0x085F2916
	.string "よい かおりが こころと{EOS}"
	.if (. - gText_MatchCallAromaLady_Rose_Intro1) > 0xd
	.error "gText_MatchCallAromaLady_Rose_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallAromaLady_Rose_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallAromaLady_Rose_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:4 gText_MatchCallAromaLady_Rose_Intro2
	.globl gText_MatchCallAromaLady_Rose_Intro2
gText_MatchCallAromaLady_Rose_Intro2: @ 0x085F2923
	.string "からだを けんこうに します!{EOS}"
	.if (. - gText_MatchCallAromaLady_Rose_Intro2) > 0x10
	.error "gText_MatchCallAromaLady_Rose_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallAromaLady_Rose_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallAromaLady_Rose_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:6 gText_MatchCallRuinManiac_Andres_Strategy
	.globl gText_MatchCallRuinManiac_Andres_Strategy
gText_MatchCallRuinManiac_Andres_Strategy: @ 0x085F2933
	.string "あんまり つよく ないよ{EOS}"
	.if (. - gText_MatchCallRuinManiac_Andres_Strategy) > 0xd
	.error "gText_MatchCallRuinManiac_Andres_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Andres_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallRuinManiac_Andres_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:7 gText_MatchCallRuinManiac_Andres_Pokemon
	.globl gText_MatchCallRuinManiac_Andres_Pokemon
gText_MatchCallRuinManiac_Andres_Pokemon: @ 0x085F2940
	.string "いせき たんさくの パートナー{EOS}"
	.if (. - gText_MatchCallRuinManiac_Andres_Pokemon) > 0x10
	.error "gText_MatchCallRuinManiac_Andres_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Andres_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallRuinManiac_Andres_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:8 gText_MatchCallRuinManiac_Andres_Intro1
	.globl gText_MatchCallRuinManiac_Andres_Intro1
gText_MatchCallRuinManiac_Andres_Intro1: @ 0x085F2950
	.string "うみの いせきを{EOS}"
	.if (. - gText_MatchCallRuinManiac_Andres_Intro1) > 0x9
	.error "gText_MatchCallRuinManiac_Andres_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Andres_Intro1) < 0x9
	.space 0x9 - (. - gText_MatchCallRuinManiac_Andres_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:9 gText_MatchCallRuinManiac_Andres_Intro2
	.globl gText_MatchCallRuinManiac_Andres_Intro2
gText_MatchCallRuinManiac_Andres_Intro2: @ 0x085F2959
	.string "さがして いるのだ!{EOS}"
	.if (. - gText_MatchCallRuinManiac_Andres_Intro2) > 0xb
	.error "gText_MatchCallRuinManiac_Andres_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Andres_Intro2) < 0xb
	.space 0xb - (. - gText_MatchCallRuinManiac_Andres_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:11 gText_MatchCallRuinManiac_Dusty_Strategy
	.globl gText_MatchCallRuinManiac_Dusty_Strategy
gText_MatchCallRuinManiac_Dusty_Strategy: @ 0x085F2964
	.string "ちからおしが しんじょう!{EOS}"
	.if (. - gText_MatchCallRuinManiac_Dusty_Strategy) > 0xe
	.error "gText_MatchCallRuinManiac_Dusty_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Dusty_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallRuinManiac_Dusty_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:12 gText_MatchCallRuinManiac_Dusty_Pokemon
	.globl gText_MatchCallRuinManiac_Dusty_Pokemon
gText_MatchCallRuinManiac_Dusty_Pokemon: @ 0x085F2972
	.string "ごっつい いわポケモン!{EOS}"
	.if (. - gText_MatchCallRuinManiac_Dusty_Pokemon) > 0xd
	.error "gText_MatchCallRuinManiac_Dusty_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Dusty_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallRuinManiac_Dusty_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:13 gText_MatchCallRuinManiac_Dusty_Intro1
	.globl gText_MatchCallRuinManiac_Dusty_Intro1
gText_MatchCallRuinManiac_Dusty_Intro1: @ 0x085F297F
	.string "こだいの ロマンを もとめて{EOS}"
	.if (. - gText_MatchCallRuinManiac_Dusty_Intro1) > 0xf
	.error "gText_MatchCallRuinManiac_Dusty_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Dusty_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallRuinManiac_Dusty_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:14 gText_MatchCallRuinManiac_Dusty_Intro2
	.globl gText_MatchCallRuinManiac_Dusty_Intro2
gText_MatchCallRuinManiac_Dusty_Intro2: @ 0x085F298E
	.string "とうざいなんぼく どこへでも!{EOS}"
	.if (. - gText_MatchCallRuinManiac_Dusty_Intro2) > 0x10
	.error "gText_MatchCallRuinManiac_Dusty_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRuinManiac_Dusty_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallRuinManiac_Dusty_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:16 gText_MatchCallTuber_Lola_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTuber_Lola_Strategy
gText_MatchCallTuber_Lola_Strategy: @ 0x085F299E
	.string "がんばりまーす!{EOS}"
	.if (. - gText_MatchCallTuber_Lola_Strategy) != 0x9
	.error "gText_MatchCallTuber_Lola_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:17 gText_MatchCallTuber_Lola_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTuber_Lola_Pokemon
gText_MatchCallTuber_Lola_Pokemon: @ 0x085F29A7
	.string "およぎが じょうずな ポケモン{EOS}"
	.if (. - gText_MatchCallTuber_Lola_Pokemon) != 0x10
	.error "gText_MatchCallTuber_Lola_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:18 gText_MatchCallTuber_Lola_Intro1
	.globl gText_MatchCallTuber_Lola_Intro1
gText_MatchCallTuber_Lola_Intro1: @ 0x085F29B7
	.string "うきわが なくても{EOS}"
	.if (. - gText_MatchCallTuber_Lola_Intro1) > 0xa
	.error "gText_MatchCallTuber_Lola_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Lola_Intro1) < 0xa
	.space 0xa - (. - gText_MatchCallTuber_Lola_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:19 gText_MatchCallTuber_Lola_Intro2
	.globl gText_MatchCallTuber_Lola_Intro2
gText_MatchCallTuber_Lola_Intro2: @ 0x085F29C1
	.string "およげるように なりたいなー{EOS}"
	.if (. - gText_MatchCallTuber_Lola_Intro2) > 0xf
	.error "gText_MatchCallTuber_Lola_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Lola_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallTuber_Lola_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:21 gText_MatchCallTuber_Ricky_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTuber_Ricky_Strategy
gText_MatchCallTuber_Ricky_Strategy: @ 0x085F29D0
	.string "よく わからないけど がんばる{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Strategy) != 0x10
	.error "gText_MatchCallTuber_Ricky_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:22 gText_MatchCallTuber_Ricky_Pokemon
	.globl gText_MatchCallTuber_Ricky_Pokemon
gText_MatchCallTuber_Ricky_Pokemon: @ 0x085F29E0
	.string "みずポケモンは ともだち!{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Pokemon) > 0xe
	.error "gText_MatchCallTuber_Ricky_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Ricky_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallTuber_Ricky_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:23 gText_MatchCallTuber_Ricky_Intro1
	.globl gText_MatchCallTuber_Ricky_Intro1
gText_MatchCallTuber_Ricky_Intro1: @ 0x085F29EE
	.string "およげない わけじゃ ないよ!{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Intro1) > 0x10
	.error "gText_MatchCallTuber_Ricky_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Ricky_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallTuber_Ricky_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:24 gText_MatchCallTuber_Ricky_Intro2
	.globl gText_MatchCallTuber_Ricky_Intro2
gText_MatchCallTuber_Ricky_Intro2: @ 0x085F29FE
	.string "うきわが すき なんだよ!{EOS}"
	.if (. - gText_MatchCallTuber_Ricky_Intro2) > 0xe
	.error "gText_MatchCallTuber_Ricky_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTuber_Ricky_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallTuber_Ricky_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:26 gText_MatchCallSisAndBro_LilaAndRoy_Strategy
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Strategy
gText_MatchCallSisAndBro_LilaAndRoy_Strategy: @ 0x085F2A0C
	.string "やくわり ぶんたん してるわ{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Strategy) > 0xf
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallSisAndBro_LilaAndRoy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:27 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
gText_MatchCallSisAndBro_LilaAndRoy_Pokemon: @ 0x085F2A1B
	.string "なかの いい ポケモンよ!{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Pokemon) > 0xe
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallSisAndBro_LilaAndRoy_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:28 gText_MatchCallSisAndBro_LilaAndRoy_Intro1
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Intro1
gText_MatchCallSisAndBro_LilaAndRoy_Intro1: @ 0x085F2A29
	.string "きょうだい なかよく{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro1) > 0xb
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:29 gText_MatchCallSisAndBro_LilaAndRoy_Intro2
	.globl gText_MatchCallSisAndBro_LilaAndRoy_Intro2
gText_MatchCallSisAndBro_LilaAndRoy_Intro2: @ 0x085F2A34
	.string "ポケモン たのしく ねっ!{EOS}"
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro2) > 0xe
	.error "gText_MatchCallSisAndBro_LilaAndRoy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallSisAndBro_LilaAndRoy_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:31 gText_MatchCallCooltrainer_Cristin_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Cristin_Strategy
gText_MatchCallCooltrainer_Cristin_Strategy: @ 0x085F2A42
	.string "おおわざで しとめるわよ!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Strategy) != 0xe
	.error "gText_MatchCallCooltrainer_Cristin_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:32 gText_MatchCallCooltrainer_Cristin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Cristin_Pokemon
gText_MatchCallCooltrainer_Cristin_Pokemon: @ 0x085F2A50
	.string "いろんな ポケモンで しょうぶ{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Pokemon) != 0x10
	.error "gText_MatchCallCooltrainer_Cristin_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:33 gText_MatchCallCooltrainer_Cristin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Cristin_Intro1
gText_MatchCallCooltrainer_Cristin_Intro1: @ 0x085F2A60
	.string "さいきょうの ポケモン{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Intro1) != 0xc
	.error "gText_MatchCallCooltrainer_Cristin_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:34 gText_MatchCallCooltrainer_Cristin_Intro2
	.globl gText_MatchCallCooltrainer_Cristin_Intro2
gText_MatchCallCooltrainer_Cristin_Intro2: @ 0x085F2A6C
	.string "トレーナーを めざしてるの!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Cristin_Intro2) > 0xf
	.error "gText_MatchCallCooltrainer_Cristin_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Cristin_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallCooltrainer_Cristin_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:36 gText_MatchCallCooltrainer_Brooke_Strategy
	.globl gText_MatchCallCooltrainer_Brooke_Strategy
gText_MatchCallCooltrainer_Brooke_Strategy: @ 0x085F2A7B
	.string "あいての じゃくてんを せめる{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Strategy) > 0x10
	.error "gText_MatchCallCooltrainer_Brooke_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Brooke_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallCooltrainer_Brooke_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:37 gText_MatchCallCooltrainer_Brooke_Pokemon
	.globl gText_MatchCallCooltrainer_Brooke_Pokemon
gText_MatchCallCooltrainer_Brooke_Pokemon: @ 0x085F2A8B
	.string "バランスが いのちよ!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Pokemon) > 0xc
	.error "gText_MatchCallCooltrainer_Brooke_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Brooke_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallCooltrainer_Brooke_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:38 gText_MatchCallCooltrainer_Brooke_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Brooke_Intro1
gText_MatchCallCooltrainer_Brooke_Intro1: @ 0x085F2A97
	.string "めざすは ポケモンチャンピオン{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Intro1) != 0x10
	.error "gText_MatchCallCooltrainer_Brooke_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:39 gText_MatchCallCooltrainer_Brooke_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Brooke_Intro2
gText_MatchCallCooltrainer_Brooke_Intro2: @ 0x085F2AA7
	.string "あきらめないわよ!{EOS}"
	.if (. - gText_MatchCallCooltrainer_Brooke_Intro2) != 0xa
	.error "gText_MatchCallCooltrainer_Brooke_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:41 gText_MatchCallCooltrainer_Wilton_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Wilton_Strategy
gText_MatchCallCooltrainer_Wilton_Strategy: @ 0x085F2AB1
	.string "あいてが いやがる たたかい{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Strategy) != 0xf
	.error "gText_MatchCallCooltrainer_Wilton_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:42 gText_MatchCallCooltrainer_Wilton_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCooltrainer_Wilton_Pokemon
gText_MatchCallCooltrainer_Wilton_Pokemon: @ 0x085F2AC0
	.string "タイプに こだわらず なんでも{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Pokemon) != 0x10
	.error "gText_MatchCallCooltrainer_Wilton_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:43 gText_MatchCallCooltrainer_Wilton_Intro1
	.globl gText_MatchCallCooltrainer_Wilton_Intro1
gText_MatchCallCooltrainer_Wilton_Intro1: @ 0x085F2AD0
	.string "トレーナーズ スクールの{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro1) > 0xd
	.error "gText_MatchCallCooltrainer_Wilton_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallCooltrainer_Wilton_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:44 gText_MatchCallCooltrainer_Wilton_Intro2
	.globl gText_MatchCallCooltrainer_Wilton_Intro2
gText_MatchCallCooltrainer_Wilton_Intro2: @ 0x085F2ADD
	.string "ゆうとうせい なんだよ{EOS}"
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro2) > 0xc
	.error "gText_MatchCallCooltrainer_Wilton_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCooltrainer_Wilton_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallCooltrainer_Wilton_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:46 gText_MatchCallHexManiac_Valerie_Strategy
	.globl gText_MatchCallHexManiac_Valerie_Strategy
gText_MatchCallHexManiac_Valerie_Strategy: @ 0x085F2AE9
	.string "じわりじわりと くるしめます{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Strategy) > 0xf
	.error "gText_MatchCallHexManiac_Valerie_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallHexManiac_Valerie_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:47 gText_MatchCallHexManiac_Valerie_Pokemon
	.globl gText_MatchCallHexManiac_Valerie_Pokemon
gText_MatchCallHexManiac_Valerie_Pokemon: @ 0x085F2AF8
	.string "よるに であうと こわいです{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Pokemon) > 0xf
	.error "gText_MatchCallHexManiac_Valerie_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallHexManiac_Valerie_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:48 gText_MatchCallHexManiac_Valerie_Intro1
	.globl gText_MatchCallHexManiac_Valerie_Intro1
gText_MatchCallHexManiac_Valerie_Intro1: @ 0x085F2B07
	.string "ほかの ひとには みえない{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Intro1) > 0xe
	.error "gText_MatchCallHexManiac_Valerie_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallHexManiac_Valerie_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:49 gText_MatchCallHexManiac_Valerie_Intro2
	.globl gText_MatchCallHexManiac_Valerie_Intro2
gText_MatchCallHexManiac_Valerie_Intro2: @ 0x085F2B15
	.string "モノが みえてしまうの……{EOS}"
	.if (. - gText_MatchCallHexManiac_Valerie_Intro2) > 0xe
	.error "gText_MatchCallHexManiac_Valerie_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHexManiac_Valerie_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallHexManiac_Valerie_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:51 gText_MatchCallLady_Cindy_Strategy
	.globl gText_MatchCallLady_Cindy_Strategy
gText_MatchCallLady_Cindy_Strategy: @ 0x085F2B23
	.string "かてば いいのでしょう?{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Strategy) > 0xd
	.error "gText_MatchCallLady_Cindy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallLady_Cindy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:52 gText_MatchCallLady_Cindy_Pokemon
	.globl gText_MatchCallLady_Cindy_Pokemon
gText_MatchCallLady_Cindy_Pokemon: @ 0x085F2B30
	.string "ゴージャスタイプよ!{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Pokemon) > 0xb
	.error "gText_MatchCallLady_Cindy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Pokemon) < 0xb
	.space 0xb - (. - gText_MatchCallLady_Cindy_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:53 gText_MatchCallLady_Cindy_Intro1
	.globl gText_MatchCallLady_Cindy_Intro1
gText_MatchCallLady_Cindy_Intro1: @ 0x085F2B3B
	.string "いえには ポケモンせんようの{EOS}"
	.if (. - gText_MatchCallLady_Cindy_Intro1) > 0xf
	.error "gText_MatchCallLady_Cindy_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLady_Cindy_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallLady_Cindy_Intro1)
	.endif

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

	@ src/data/text/match_call_messages.h:73 gText_MatchCallPokeManiac_Steve_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPokeManiac_Steve_Intro1
gText_MatchCallPokeManiac_Steve_Intro1: @ 0x085F2C0F
	.string "おおきくて たくましい{EOS}"
	.if (. - gText_MatchCallPokeManiac_Steve_Intro1) != 0xc
	.error "gText_MatchCallPokeManiac_Steve_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:74 gText_MatchCallPokeManiac_Steve_Intro2
	.globl gText_MatchCallPokeManiac_Steve_Intro2
gText_MatchCallPokeManiac_Steve_Intro2: @ 0x085F2C1B
	.string "ポケモンが さいこう……{EOS}"
	.if (. - gText_MatchCallPokeManiac_Steve_Intro2) > 0xd
	.error "gText_MatchCallPokeManiac_Steve_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokeManiac_Steve_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPokeManiac_Steve_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:76 gText_MatchCallSwimmer_Tony_Strategy
	.globl gText_MatchCallSwimmer_Tony_Strategy
gText_MatchCallSwimmer_Tony_Strategy: @ 0x085F2C28
	.string "ぜんりょくで ぶつかる!{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Strategy) > 0xd
	.error "gText_MatchCallSwimmer_Tony_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Tony_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallSwimmer_Tony_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:77 gText_MatchCallSwimmer_Tony_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSwimmer_Tony_Pokemon
gText_MatchCallSwimmer_Tony_Pokemon: @ 0x085F2C35
	.string "いかした みずタイプ{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Pokemon) != 0xb
	.error "gText_MatchCallSwimmer_Tony_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:78 gText_MatchCallSwimmer_Tony_Intro1
	.globl gText_MatchCallSwimmer_Tony_Intro1
gText_MatchCallSwimmer_Tony_Intro1: @ 0x085F2C40
	.string "およげない ときには{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Intro1) > 0xb
	.error "gText_MatchCallSwimmer_Tony_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Tony_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallSwimmer_Tony_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:79 gText_MatchCallSwimmer_Tony_Intro2
	.globl gText_MatchCallSwimmer_Tony_Intro2
gText_MatchCallSwimmer_Tony_Intro2: @ 0x085F2C4B
	.string "きんトレ やってるぜ!{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Intro2) > 0xc
	.error "gText_MatchCallSwimmer_Tony_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Tony_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallSwimmer_Tony_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:81 gText_MatchCallBlackBelt_Nob_Strategy
	.globl gText_MatchCallBlackBelt_Nob_Strategy
gText_MatchCallBlackBelt_Nob_Strategy: @ 0x085F2C57
	.string "だげきワザで がんがん!{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Strategy) > 0xd
	.error "gText_MatchCallBlackBelt_Nob_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Nob_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallBlackBelt_Nob_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:82 gText_MatchCallBlackBelt_Nob_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBlackBelt_Nob_Pokemon
gText_MatchCallBlackBelt_Nob_Pokemon: @ 0x085F2C64
	.string "かくとうタイプ{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Pokemon) != 0x8
	.error "gText_MatchCallBlackBelt_Nob_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:83 gText_MatchCallBlackBelt_Nob_Intro1
	.globl gText_MatchCallBlackBelt_Nob_Intro1
gText_MatchCallBlackBelt_Nob_Intro1: @ 0x085F2C6C
	.string "じまん じゃないけど{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Intro1) > 0xb
	.error "gText_MatchCallBlackBelt_Nob_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Nob_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallBlackBelt_Nob_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:84 gText_MatchCallBlackBelt_Nob_Intro2
	.globl gText_MatchCallBlackBelt_Nob_Intro2
gText_MatchCallBlackBelt_Nob_Intro2: @ 0x085F2C77
	.string "かわら10まい われるぜ!{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Intro2) > 0xe
	.error "gText_MatchCallBlackBelt_Nob_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Nob_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallBlackBelt_Nob_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:86 gText_MatchCallBlackBelt_Koji_Strategy
	.globl gText_MatchCallBlackBelt_Koji_Strategy
gText_MatchCallBlackBelt_Koji_Strategy: @ 0x085F2C85
	.string "からての ちからを みせてやる{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Strategy) > 0x10
	.error "gText_MatchCallBlackBelt_Koji_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallBlackBelt_Koji_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:87 gText_MatchCallBlackBelt_Koji_Pokemon
	.globl gText_MatchCallBlackBelt_Koji_Pokemon
gText_MatchCallBlackBelt_Koji_Pokemon: @ 0x085F2C95
	.string "おれの れんしゅう あいて!{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Pokemon) > 0xf
	.error "gText_MatchCallBlackBelt_Koji_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallBlackBelt_Koji_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:88 gText_MatchCallBlackBelt_Koji_Intro1
	.globl gText_MatchCallBlackBelt_Koji_Intro1
gText_MatchCallBlackBelt_Koji_Intro1: @ 0x085F2CA4
	.string "おれと はだしで{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Intro1) > 0x9
	.error "gText_MatchCallBlackBelt_Koji_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Intro1) < 0x9
	.space 0x9 - (. - gText_MatchCallBlackBelt_Koji_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:89 gText_MatchCallBlackBelt_Koji_Intro2
	.globl gText_MatchCallBlackBelt_Koji_Intro2
gText_MatchCallBlackBelt_Koji_Intro2: @ 0x085F2CAD
	.string "かたりあって みないか?{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Intro2) > 0xd
	.error "gText_MatchCallBlackBelt_Koji_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallBlackBelt_Koji_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:91 gText_MatchCallGuitarist_Fernando_Strategy
	.globl gText_MatchCallGuitarist_Fernando_Strategy
gText_MatchCallGuitarist_Fernando_Strategy: @ 0x085F2CBA
	.string "しびれる サウンド だゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Strategy) > 0xe
	.error "gText_MatchCallGuitarist_Fernando_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Fernando_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:92 gText_MatchCallGuitarist_Fernando_Pokemon
	.globl gText_MatchCallGuitarist_Fernando_Pokemon
gText_MatchCallGuitarist_Fernando_Pokemon: @ 0x085F2CC8
	.string "でんきと おとの コンビだゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Pokemon) > 0x10
	.error "gText_MatchCallGuitarist_Fernando_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallGuitarist_Fernando_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:93 gText_MatchCallGuitarist_Fernando_Intro1
	.globl gText_MatchCallGuitarist_Fernando_Intro1
gText_MatchCallGuitarist_Fernando_Intro1: @ 0x085F2CD8
	.string "オレの つくった きょくで{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Intro1) > 0xe
	.error "gText_MatchCallGuitarist_Fernando_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Fernando_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:94 gText_MatchCallGuitarist_Fernando_Intro2
	.globl gText_MatchCallGuitarist_Fernando_Intro2
gText_MatchCallGuitarist_Fernando_Intro2: @ 0x085F2CE6
	.string "みんな しびれるゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Intro2) > 0xb
	.error "gText_MatchCallGuitarist_Fernando_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Intro2) < 0xb
	.space 0xb - (. - gText_MatchCallGuitarist_Fernando_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:96 gText_MatchCallGuitarist_Dalton_Strategy
	.globl gText_MatchCallGuitarist_Dalton_Strategy
gText_MatchCallGuitarist_Dalton_Strategy: @ 0x085F2CF1
	.string "ビリビリ しびれさせるゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Strategy) > 0xe
	.error "gText_MatchCallGuitarist_Dalton_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Dalton_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:97 gText_MatchCallGuitarist_Dalton_Pokemon
	.globl gText_MatchCallGuitarist_Dalton_Pokemon
gText_MatchCallGuitarist_Dalton_Pokemon: @ 0x085F2CFF
	.string "でんきの ちからを みせるゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Pokemon) > 0x10
	.error "gText_MatchCallGuitarist_Dalton_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallGuitarist_Dalton_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:98 gText_MatchCallGuitarist_Dalton_Intro1
	.globl gText_MatchCallGuitarist_Dalton_Intro1
gText_MatchCallGuitarist_Dalton_Intro1: @ 0x085F2D0F
	.string "ぼくの こころの メロディで{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Intro1) > 0xf
	.error "gText_MatchCallGuitarist_Dalton_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallGuitarist_Dalton_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:99 gText_MatchCallGuitarist_Dalton_Intro2
	.globl gText_MatchCallGuitarist_Dalton_Intro2
gText_MatchCallGuitarist_Dalton_Intro2: @ 0x085F2D1E
	.string "みんなを なかせてみたいよ{EOS}"
	.if (. - gText_MatchCallGuitarist_Dalton_Intro2) > 0xe
	.error "gText_MatchCallGuitarist_Dalton_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Dalton_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Dalton_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:101 gText_MatchCallKindler_Bernie_Strategy
	.globl gText_MatchCallKindler_Bernie_Strategy
gText_MatchCallKindler_Bernie_Strategy: @ 0x085F2D2C
	.string "ほのおで すべて やきつくす!{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Strategy) > 0x10
	.error "gText_MatchCallKindler_Bernie_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallKindler_Bernie_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallKindler_Bernie_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:102 gText_MatchCallKindler_Bernie_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallKindler_Bernie_Pokemon
gText_MatchCallKindler_Bernie_Pokemon: @ 0x085F2D3C
	.string "やけどしそうな ポケモン{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Pokemon) != 0xd
	.error "gText_MatchCallKindler_Bernie_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:103 gText_MatchCallKindler_Bernie_Intro1
	.globl gText_MatchCallKindler_Bernie_Intro1
gText_MatchCallKindler_Bernie_Intro1: @ 0x085F2D49
	.string "キャンプファイヤーの ときは{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Intro1) > 0xf
	.error "gText_MatchCallKindler_Bernie_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallKindler_Bernie_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallKindler_Bernie_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:104 gText_MatchCallKindler_Bernie_Intro2
	.globl gText_MatchCallKindler_Bernie_Intro2
gText_MatchCallKindler_Bernie_Intro2: @ 0x085F2D58
	.string "ひを けす みずを わすれるな{EOS}"
	.if (. - gText_MatchCallKindler_Bernie_Intro2) > 0x10
	.error "gText_MatchCallKindler_Bernie_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallKindler_Bernie_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallKindler_Bernie_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:106 gText_MatchCallCamper_Ethan_Strategy
	.globl gText_MatchCallCamper_Ethan_Strategy
gText_MatchCallCamper_Ethan_Strategy: @ 0x085F2D68
	.string "ねばって ねばって ねばる!{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Strategy) > 0xf
	.error "gText_MatchCallCamper_Ethan_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallCamper_Ethan_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:107 gText_MatchCallCamper_Ethan_Pokemon
	.globl gText_MatchCallCamper_Ethan_Pokemon
gText_MatchCallCamper_Ethan_Pokemon: @ 0x085F2D77
	.string "どんな ポケモンでも そだてる{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Pokemon) > 0x10
	.error "gText_MatchCallCamper_Ethan_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallCamper_Ethan_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:108 gText_MatchCallCamper_Ethan_Intro1
	.globl gText_MatchCallCamper_Ethan_Intro1
gText_MatchCallCamper_Ethan_Intro1: @ 0x085F2D87
	.string "しぜんの なかで そだてた{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Intro1) > 0xe
	.error "gText_MatchCallCamper_Ethan_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallCamper_Ethan_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:109 gText_MatchCallCamper_Ethan_Intro2
	.globl gText_MatchCallCamper_Ethan_Intro2
gText_MatchCallCamper_Ethan_Intro2: @ 0x085F2D95
	.string "ポケモンは つよくなるよ!{EOS}"
	.if (. - gText_MatchCallCamper_Ethan_Intro2) > 0xe
	.error "gText_MatchCallCamper_Ethan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCamper_Ethan_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallCamper_Ethan_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:111 gText_MatchCallOldCouple_JohnAndJay_Strategy
	.globl gText_MatchCallOldCouple_JohnAndJay_Strategy
gText_MatchCallOldCouple_JohnAndJay_Strategy: @ 0x085F2DA3
	.string "ふうふの あいで かつのよ{EOS}"
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Strategy) > 0xe
	.error "gText_MatchCallOldCouple_JohnAndJay_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallOldCouple_JohnAndJay_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:112 gText_MatchCallOldCouple_JohnAndJay_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallOldCouple_JohnAndJay_Pokemon
gText_MatchCallOldCouple_JohnAndJay_Pokemon: @ 0x085F2DB1
	.string "ながねん いっしょの ポケモン{EOS}"
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Pokemon) != 0x10
	.error "gText_MatchCallOldCouple_JohnAndJay_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:113 gText_MatchCallOldCouple_JohnAndJay_Intro1
	.globl gText_MatchCallOldCouple_JohnAndJay_Intro1
gText_MatchCallOldCouple_JohnAndJay_Intro1: @ 0x085F2DC1
	.string "けっこんして 50ねん{EOS}"
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Intro1) > 0xc
	.error "gText_MatchCallOldCouple_JohnAndJay_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallOldCouple_JohnAndJay_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:114 gText_MatchCallOldCouple_JohnAndJay_Intro2
	.globl gText_MatchCallOldCouple_JohnAndJay_Intro2
gText_MatchCallOldCouple_JohnAndJay_Intro2: @ 0x085F2DCD
	.string "ポケモン そだてまくりじゃよ{EOS}"
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Intro2) > 0xf
	.error "gText_MatchCallOldCouple_JohnAndJay_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallOldCouple_JohnAndJay_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallOldCouple_JohnAndJay_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:116 gText_MatchCallBugManiac_Jeffrey_Strategy (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBugManiac_Jeffrey_Strategy
gText_MatchCallBugManiac_Jeffrey_Strategy: @ 0x085F2DDC
	.string "たたみかける ような こうげき{EOS}"
	.if (. - gText_MatchCallBugManiac_Jeffrey_Strategy) != 0x10
	.error "gText_MatchCallBugManiac_Jeffrey_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:117 gText_MatchCallBugManiac_Jeffrey_Pokemon
	.globl gText_MatchCallBugManiac_Jeffrey_Pokemon
gText_MatchCallBugManiac_Jeffrey_Pokemon: @ 0x085F2DEC
	.string "むしポケモンって かっこいいぜ{EOS}"
	.if (. - gText_MatchCallBugManiac_Jeffrey_Pokemon) > 0x10
	.error "gText_MatchCallBugManiac_Jeffrey_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugManiac_Jeffrey_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallBugManiac_Jeffrey_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:118 gText_MatchCallBugManiac_Jeffrey_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBugManiac_Jeffrey_Intro1
gText_MatchCallBugManiac_Jeffrey_Intro1: @ 0x085F2DFC
	.string "まいにち…… もりに はいって{EOS}"
	.if (. - gText_MatchCallBugManiac_Jeffrey_Intro1) != 0x10
	.error "gText_MatchCallBugManiac_Jeffrey_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:119 gText_MatchCallBugManiac_Jeffrey_Intro2
	.globl gText_MatchCallBugManiac_Jeffrey_Intro2
gText_MatchCallBugManiac_Jeffrey_Intro2: @ 0x085F2E0C
	.string "むしポケモン つかまえる……{EOS}"
	.if (. - gText_MatchCallBugManiac_Jeffrey_Intro2) > 0xf
	.error "gText_MatchCallBugManiac_Jeffrey_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugManiac_Jeffrey_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallBugManiac_Jeffrey_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:121 gText_MatchCallPsychic_Cameron_Strategy
	.globl gText_MatchCallPsychic_Cameron_Strategy
gText_MatchCallPsychic_Cameron_Strategy: @ 0x085F2E1B
	.string "あいてを ほんろう させる{EOS}"
	.if (. - gText_MatchCallPsychic_Cameron_Strategy) > 0xe
	.error "gText_MatchCallPsychic_Cameron_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPsychic_Cameron_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallPsychic_Cameron_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:122 gText_MatchCallPsychic_Cameron_Pokemon
	.globl gText_MatchCallPsychic_Cameron_Pokemon
gText_MatchCallPsychic_Cameron_Pokemon: @ 0x085F2E29
	.string "ふしぎな ちからを もつ ヤツ{EOS}"
	.if (. - gText_MatchCallPsychic_Cameron_Pokemon) > 0x10
	.error "gText_MatchCallPsychic_Cameron_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPsychic_Cameron_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallPsychic_Cameron_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:123 gText_MatchCallPsychic_Cameron_Intro1
	.globl gText_MatchCallPsychic_Cameron_Intro1
gText_MatchCallPsychic_Cameron_Intro1: @ 0x085F2E39
	.string "おまえの かんがえは{EOS}"
	.if (. - gText_MatchCallPsychic_Cameron_Intro1) > 0xb
	.error "gText_MatchCallPsychic_Cameron_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPsychic_Cameron_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallPsychic_Cameron_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:124 gText_MatchCallPsychic_Cameron_Intro2
	.globl gText_MatchCallPsychic_Cameron_Intro2
gText_MatchCallPsychic_Cameron_Intro2: @ 0x085F2E44
	.string "すべて おみとおしだ!{EOS}"
	.if (. - gText_MatchCallPsychic_Cameron_Intro2) > 0xc
	.error "gText_MatchCallPsychic_Cameron_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPsychic_Cameron_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallPsychic_Cameron_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:126 gText_MatchCallPsychic_Jacki_Strategy
	.globl gText_MatchCallPsychic_Jacki_Strategy
gText_MatchCallPsychic_Jacki_Strategy: @ 0x085F2E50
	.string "フルパワーで たたかう{EOS}"
	.if (. - gText_MatchCallPsychic_Jacki_Strategy) > 0xc
	.error "gText_MatchCallPsychic_Jacki_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPsychic_Jacki_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallPsychic_Jacki_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:127 gText_MatchCallPsychic_Jacki_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPsychic_Jacki_Pokemon
gText_MatchCallPsychic_Jacki_Pokemon: @ 0x085F2E5C
	.string "ナゾの おおい ポケモン{EOS}"
	.if (. - gText_MatchCallPsychic_Jacki_Pokemon) != 0xd
	.error "gText_MatchCallPsychic_Jacki_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:128 gText_MatchCallPsychic_Jacki_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPsychic_Jacki_Intro1
gText_MatchCallPsychic_Jacki_Intro1: @ 0x085F2E69
	.string "ほんと いうと わたし{EOS}"
	.if (. - gText_MatchCallPsychic_Jacki_Intro1) != 0xc
	.error "gText_MatchCallPsychic_Jacki_Intro1 must retain its original byte length"
	.endif

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

	@ src/data/text/match_call_messages.h:147 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon: @ 0x085F2F34
	.string "ふたりが すきな ポケモン!{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon) > 0xf
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:148 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
gText_MatchCallSrAndJr_AnnaAndMeg_Intro1: @ 0x085F2F43
	.string "わたしたち ポケモンクラブの{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro1) > 0xf
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:149 gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSrAndJr_AnnaAndMeg_Intro2
gText_MatchCallSrAndJr_AnnaAndMeg_Intro2: @ 0x085F2F52
	.string "センパイと コウハイでーす!{EOS}"
	.if (. - gText_MatchCallSrAndJr_AnnaAndMeg_Intro2) != 0xf
	.error "gText_MatchCallSrAndJr_AnnaAndMeg_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:151 gText_MatchCallPokefan_Isabel_Strategy
	.globl gText_MatchCallPokefan_Isabel_Strategy
gText_MatchCallPokefan_Isabel_Strategy: @ 0x085F2F61
	.string "がんばれ ポケモンちゃん!{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Strategy) > 0xe
	.error "gText_MatchCallPokefan_Isabel_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallPokefan_Isabel_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:152 gText_MatchCallPokefan_Isabel_Pokemon
	.globl gText_MatchCallPokefan_Isabel_Pokemon
gText_MatchCallPokefan_Isabel_Pokemon: @ 0x085F2F6F
	.string "すき きらいは なしよ{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Pokemon) > 0xc
	.error "gText_MatchCallPokefan_Isabel_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallPokefan_Isabel_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:153 gText_MatchCallPokefan_Isabel_Intro1
	.globl gText_MatchCallPokefan_Isabel_Intro1
gText_MatchCallPokefan_Isabel_Intro1: @ 0x085F2F7B
	.string "ゆうはんの かいもの ついでに{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Intro1) > 0x10
	.error "gText_MatchCallPokefan_Isabel_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallPokefan_Isabel_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:154 gText_MatchCallPokefan_Isabel_Intro2
	.globl gText_MatchCallPokefan_Isabel_Intro2
gText_MatchCallPokefan_Isabel_Intro2: @ 0x085F2F8B
	.string "ひとしょうぶ してますの{EOS}"
	.if (. - gText_MatchCallPokefan_Isabel_Intro2) > 0xd
	.error "gText_MatchCallPokefan_Isabel_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Isabel_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPokefan_Isabel_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:156 gText_MatchCallPokefan_Miguel_Strategy
	.globl gText_MatchCallPokefan_Miguel_Strategy
gText_MatchCallPokefan_Miguel_Strategy: @ 0x085F2F98
	.string "あいじょうで しょうぶ!{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Strategy) > 0xd
	.error "gText_MatchCallPokefan_Miguel_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Miguel_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallPokefan_Miguel_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:157 gText_MatchCallPokefan_Miguel_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPokefan_Miguel_Pokemon
gText_MatchCallPokefan_Miguel_Pokemon: @ 0x085F2FA5
	.string "あいを そそいだ ポケモン{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Pokemon) != 0xe
	.error "gText_MatchCallPokefan_Miguel_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:158 gText_MatchCallPokefan_Miguel_Intro1
	.globl gText_MatchCallPokefan_Miguel_Intro1
gText_MatchCallPokefan_Miguel_Intro1: @ 0x085F2FB3
	.string "ポケモンと しんらいかんけいを{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Intro1) > 0x10
	.error "gText_MatchCallPokefan_Miguel_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Miguel_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallPokefan_Miguel_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:159 gText_MatchCallPokefan_Miguel_Intro2
	.globl gText_MatchCallPokefan_Miguel_Intro2
gText_MatchCallPokefan_Miguel_Intro2: @ 0x085F2FC3
	.string "きずく ことが だいじだよ!{EOS}"
	.if (. - gText_MatchCallPokefan_Miguel_Intro2) > 0xf
	.error "gText_MatchCallPokefan_Miguel_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokefan_Miguel_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallPokefan_Miguel_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:161 gText_MatchCallExpert_Timothy_Strategy
	.globl gText_MatchCallExpert_Timothy_Strategy
gText_MatchCallExpert_Timothy_Strategy: @ 0x085F2FD2
	.string "おぬしの こうげきは みきった{EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Strategy) > 0x10
	.error "gText_MatchCallExpert_Timothy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Timothy_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallExpert_Timothy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:162 gText_MatchCallExpert_Timothy_Pokemon
	.globl gText_MatchCallExpert_Timothy_Pokemon
gText_MatchCallExpert_Timothy_Pokemon: @ 0x085F2FE2
	.string "かくとうの おうぎを みよ! {EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Pokemon) > 0x10
	.error "gText_MatchCallExpert_Timothy_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Timothy_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallExpert_Timothy_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:163 gText_MatchCallExpert_Timothy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallExpert_Timothy_Intro1
gText_MatchCallExpert_Timothy_Intro1: @ 0x085F2FF2
	.string "わかいもんには まだまだ{EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Intro1) != 0xd
	.error "gText_MatchCallExpert_Timothy_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:164 gText_MatchCallExpert_Timothy_Intro2
	.globl gText_MatchCallExpert_Timothy_Intro2
gText_MatchCallExpert_Timothy_Intro2: @ 0x085F2FFF
	.string "まけてられんわ!{EOS}"
	.if (. - gText_MatchCallExpert_Timothy_Intro2) > 0x9
	.error "gText_MatchCallExpert_Timothy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Timothy_Intro2) < 0x9
	.space 0x9 - (. - gText_MatchCallExpert_Timothy_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:166 gText_MatchCallExpert_Shelby_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallExpert_Shelby_Strategy
gText_MatchCallExpert_Shelby_Strategy: @ 0x085F3008
	.string "ぼうぎょ しつつ こうげき!{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Strategy) != 0xf
	.error "gText_MatchCallExpert_Shelby_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:167 gText_MatchCallExpert_Shelby_Pokemon
	.globl gText_MatchCallExpert_Shelby_Pokemon
gText_MatchCallExpert_Shelby_Pokemon: @ 0x085F3017
	.string "かくとうタイプ じゃよ{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Pokemon) > 0xc
	.error "gText_MatchCallExpert_Shelby_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Shelby_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallExpert_Shelby_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:168 gText_MatchCallExpert_Shelby_Intro1
	.globl gText_MatchCallExpert_Shelby_Intro1
gText_MatchCallExpert_Shelby_Intro1: @ 0x085F3023
	.string "としよりには としよりなりの{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Intro1) > 0xf
	.error "gText_MatchCallExpert_Shelby_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Shelby_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallExpert_Shelby_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:169 gText_MatchCallExpert_Shelby_Intro2
	.globl gText_MatchCallExpert_Shelby_Intro2
gText_MatchCallExpert_Shelby_Intro2: @ 0x085F3032
	.string "たたかいかたが あるのじゃ{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Intro2) > 0xe
	.error "gText_MatchCallExpert_Shelby_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Shelby_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallExpert_Shelby_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:171 gText_MatchCallYoungster_Calvin_Strategy
	.globl gText_MatchCallYoungster_Calvin_Strategy
gText_MatchCallYoungster_Calvin_Strategy: @ 0x085F3040
	.string "できること やってやるぜ!{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Strategy) > 0xe
	.error "gText_MatchCallYoungster_Calvin_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungster_Calvin_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallYoungster_Calvin_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallYoungster_Calvin_Pokemon
gText_MatchCallYoungster_Calvin_Pokemon: @ 0x085F304E
	.string "いろんな タイプで しょうぶ{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Pokemon) != 0xf
	.error "gText_MatchCallYoungster_Calvin_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:173 gText_MatchCallYoungster_Calvin_Intro1
	.globl gText_MatchCallYoungster_Calvin_Intro1
gText_MatchCallYoungster_Calvin_Intro1: @ 0x085F305D
	.string "ジムリーダーに かつまで{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Intro1) > 0xd
	.error "gText_MatchCallYoungster_Calvin_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungster_Calvin_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallYoungster_Calvin_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:174 gText_MatchCallYoungster_Calvin_Intro2
	.globl gText_MatchCallYoungster_Calvin_Intro2
gText_MatchCallYoungster_Calvin_Intro2: @ 0x085F306A
	.string "がんばるぜ!{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Intro2) > 0x7
	.error "gText_MatchCallYoungster_Calvin_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungster_Calvin_Intro2) < 0x7
	.space 0x7 - (. - gText_MatchCallYoungster_Calvin_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:176 gText_MatchCallFisherman_Elliot_Strategy
	.globl gText_MatchCallFisherman_Elliot_Strategy
gText_MatchCallFisherman_Elliot_Strategy: @ 0x085F3071
	.string "じっくり たたかう!{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Strategy) > 0xb
	.error "gText_MatchCallFisherman_Elliot_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallFisherman_Elliot_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:177 gText_MatchCallFisherman_Elliot_Pokemon
	.globl gText_MatchCallFisherman_Elliot_Pokemon
gText_MatchCallFisherman_Elliot_Pokemon: @ 0x085F307C
	.string "みずポケモンで しょうぶ!{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Pokemon) > 0xe
	.error "gText_MatchCallFisherman_Elliot_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallFisherman_Elliot_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:178 gText_MatchCallFisherman_Elliot_Intro1
	.globl gText_MatchCallFisherman_Elliot_Intro1
gText_MatchCallFisherman_Elliot_Intro1: @ 0x085F308A
	.string "あんなに でっかい ポケモンを{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Intro1) > 0x10
	.error "gText_MatchCallFisherman_Elliot_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallFisherman_Elliot_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:179 gText_MatchCallFisherman_Elliot_Intro2
	.globl gText_MatchCallFisherman_Elliot_Intro2
gText_MatchCallFisherman_Elliot_Intro2: @ 0x085F309A
	.string "つったのは せかいで オレだけ{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Intro2) > 0x10
	.error "gText_MatchCallFisherman_Elliot_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallFisherman_Elliot_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:181 gText_MatchCallTriathlete_Isaiah_Strategy
	.globl gText_MatchCallTriathlete_Isaiah_Strategy
gText_MatchCallTriathlete_Isaiah_Strategy: @ 0x085F30AA
	.string "ちのりを りようする{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Strategy) > 0xb
	.error "gText_MatchCallTriathlete_Isaiah_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Isaiah_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Isaiah_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:182 gText_MatchCallTriathlete_Isaiah_Pokemon
	.globl gText_MatchCallTriathlete_Isaiah_Pokemon
gText_MatchCallTriathlete_Isaiah_Pokemon: @ 0x085F30B5
	.string "みずタイプ ばんざい!{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Pokemon) > 0xc
	.error "gText_MatchCallTriathlete_Isaiah_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Isaiah_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Isaiah_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:183 gText_MatchCallTriathlete_Isaiah_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Isaiah_Intro1
gText_MatchCallTriathlete_Isaiah_Intro1: @ 0x085F30C1
	.string "みずあそび している{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Intro1) != 0xb
	.error "gText_MatchCallTriathlete_Isaiah_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:184 gText_MatchCallTriathlete_Isaiah_Intro2
	.globl gText_MatchCallTriathlete_Isaiah_Intro2
gText_MatchCallTriathlete_Isaiah_Intro2: @ 0x085F30CC
	.string "かいパンやろうには まけないぜ{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Intro2) > 0x10
	.error "gText_MatchCallTriathlete_Isaiah_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Isaiah_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Isaiah_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:186 gText_MatchCallTriathlete_Maria_Strategy
	.globl gText_MatchCallTriathlete_Maria_Strategy
gText_MatchCallTriathlete_Maria_Strategy: @ 0x085F30DC
	.string "スピード いのち!{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Strategy) > 0xa
	.error "gText_MatchCallTriathlete_Maria_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Maria_Strategy) < 0xa
	.space 0xa - (. - gText_MatchCallTriathlete_Maria_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:187 gText_MatchCallTriathlete_Maria_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Maria_Pokemon
gText_MatchCallTriathlete_Maria_Pokemon: @ 0x085F30E6
	.string "すばやい ポケモンを つかう{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Pokemon) != 0xf
	.error "gText_MatchCallTriathlete_Maria_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:188 gText_MatchCallTriathlete_Maria_Intro1
	.globl gText_MatchCallTriathlete_Maria_Intro1
gText_MatchCallTriathlete_Maria_Intro1: @ 0x085F30F5
	.string "マラソンは じぶんとの{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Intro1) > 0xc
	.error "gText_MatchCallTriathlete_Maria_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Maria_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Maria_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:189 gText_MatchCallTriathlete_Maria_Intro2
	.globl gText_MatchCallTriathlete_Maria_Intro2
gText_MatchCallTriathlete_Maria_Intro2: @ 0x085F3101
	.string "たたかい なのよ!{EOS}"
	.if (. - gText_MatchCallTriathlete_Maria_Intro2) > 0xa
	.error "gText_MatchCallTriathlete_Maria_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Maria_Intro2) < 0xa
	.space 0xa - (. - gText_MatchCallTriathlete_Maria_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:191 gText_MatchCallTriathlete_Abigail_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Abigail_Strategy
gText_MatchCallTriathlete_Abigail_Strategy: @ 0x085F310B
	.string "ぼうぎょを だいじに{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Strategy) != 0xb
	.error "gText_MatchCallTriathlete_Abigail_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:192 gText_MatchCallTriathlete_Abigail_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Abigail_Pokemon
gText_MatchCallTriathlete_Abigail_Pokemon: @ 0x085F3116
	.string "わたしの ポケモンは カチカチ{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Pokemon) != 0x10
	.error "gText_MatchCallTriathlete_Abigail_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:193 gText_MatchCallTriathlete_Abigail_Intro1
	.globl gText_MatchCallTriathlete_Abigail_Intro1
gText_MatchCallTriathlete_Abigail_Intro1: @ 0x085F3126
	.string "ダイエットの つもりだったのに{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Intro1) > 0x10
	.error "gText_MatchCallTriathlete_Abigail_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Abigail_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Abigail_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:194 gText_MatchCallTriathlete_Abigail_Intro2
	.globl gText_MatchCallTriathlete_Abigail_Intro2
gText_MatchCallTriathlete_Abigail_Intro2: @ 0x085F3136
	.string "たのしくて のめりこんじゃった{EOS}"
	.if (. - gText_MatchCallTriathlete_Abigail_Intro2) > 0x10
	.error "gText_MatchCallTriathlete_Abigail_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Abigail_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Abigail_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:196 gText_MatchCallTriathlete_Dylan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Dylan_Strategy
gText_MatchCallTriathlete_Dylan_Strategy: @ 0x085F3146
	.string "あいてより さきに こうげき!{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Strategy) != 0x10
	.error "gText_MatchCallTriathlete_Dylan_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:197 gText_MatchCallTriathlete_Dylan_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Dylan_Pokemon
gText_MatchCallTriathlete_Dylan_Pokemon: @ 0x085F3156
	.string "いい はしりをする ポケモン{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Pokemon) != 0xf
	.error "gText_MatchCallTriathlete_Dylan_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:198 gText_MatchCallTriathlete_Dylan_Intro1
	.globl gText_MatchCallTriathlete_Dylan_Intro1
gText_MatchCallTriathlete_Dylan_Intro1: @ 0x085F3165
	.string "はしりつづけていると{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Intro1) > 0xb
	.error "gText_MatchCallTriathlete_Dylan_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Dylan_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Dylan_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:199 gText_MatchCallTriathlete_Dylan_Intro2
	.globl gText_MatchCallTriathlete_Dylan_Intro2
gText_MatchCallTriathlete_Dylan_Intro2: @ 0x085F3170
	.string "かぜに なれるのさ……!{EOS}"
	.if (. - gText_MatchCallTriathlete_Dylan_Intro2) > 0xd
	.error "gText_MatchCallTriathlete_Dylan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Dylan_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallTriathlete_Dylan_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:201 gText_MatchCallTriathlete_Katelyn_Strategy
	.globl gText_MatchCallTriathlete_Katelyn_Strategy
gText_MatchCallTriathlete_Katelyn_Strategy: @ 0x085F317D
	.string "がんがん せめまくる!{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Strategy) > 0xc
	.error "gText_MatchCallTriathlete_Katelyn_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Katelyn_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:202 gText_MatchCallTriathlete_Katelyn_Pokemon
	.globl gText_MatchCallTriathlete_Katelyn_Pokemon
gText_MatchCallTriathlete_Katelyn_Pokemon: @ 0x085F3189
	.string "みずポケモン さいこう!{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Pokemon) > 0xd
	.error "gText_MatchCallTriathlete_Katelyn_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallTriathlete_Katelyn_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:203 gText_MatchCallTriathlete_Katelyn_Intro1
	.globl gText_MatchCallTriathlete_Katelyn_Intro1
gText_MatchCallTriathlete_Katelyn_Intro1: @ 0x085F3196
	.string "まいにち 10キロは{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro1) > 0xb
	.error "gText_MatchCallTriathlete_Katelyn_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Katelyn_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:204 gText_MatchCallTriathlete_Katelyn_Intro2
	.globl gText_MatchCallTriathlete_Katelyn_Intro2
gText_MatchCallTriathlete_Katelyn_Intro2: @ 0x085F31A1
	.string "およいでいるわね!{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro2) > 0xa
	.error "gText_MatchCallTriathlete_Katelyn_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro2) < 0xa
	.space 0xa - (. - gText_MatchCallTriathlete_Katelyn_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:206 gText_MatchCallTriathlete_Benjamin_Strategy
	.globl gText_MatchCallTriathlete_Benjamin_Strategy
gText_MatchCallTriathlete_Benjamin_Strategy: @ 0x085F31AB
	.string "おして おしまくる さくせん!{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Strategy) > 0x10
	.error "gText_MatchCallTriathlete_Benjamin_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Benjamin_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Benjamin_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:207 gText_MatchCallTriathlete_Benjamin_Pokemon
	.globl gText_MatchCallTriathlete_Benjamin_Pokemon
gText_MatchCallTriathlete_Benjamin_Pokemon: @ 0x085F31BB
	.string "はがねの つよさを みせてやる{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Pokemon) > 0x10
	.error "gText_MatchCallTriathlete_Benjamin_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Benjamin_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Benjamin_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:208 gText_MatchCallTriathlete_Benjamin_Intro1
	.globl gText_MatchCallTriathlete_Benjamin_Intro1
gText_MatchCallTriathlete_Benjamin_Intro1: @ 0x085F31CB
	.string "あせを かいたら こまめに{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Intro1) > 0xe
	.error "gText_MatchCallTriathlete_Benjamin_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Benjamin_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallTriathlete_Benjamin_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:209 gText_MatchCallTriathlete_Benjamin_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Benjamin_Intro2
gText_MatchCallTriathlete_Benjamin_Intro2: @ 0x085F31D9
	.string "すいぶんを ほきゅうしよう!{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Intro2) != 0xf
	.error "gText_MatchCallTriathlete_Benjamin_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:211 gText_MatchCallTriathlete_Pablo_Strategy
	.globl gText_MatchCallTriathlete_Pablo_Strategy
gText_MatchCallTriathlete_Pablo_Strategy: @ 0x085F31E8
	.string "みずの ちからを ひきだす!{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Strategy) > 0xf
	.error "gText_MatchCallTriathlete_Pablo_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallTriathlete_Pablo_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:212 gText_MatchCallTriathlete_Pablo_Pokemon
	.globl gText_MatchCallTriathlete_Pablo_Pokemon
gText_MatchCallTriathlete_Pablo_Pokemon: @ 0x085F31F7
	.string "きたえぬかれた みずポケモン!{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Pokemon) > 0x10
	.error "gText_MatchCallTriathlete_Pablo_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Pablo_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:213 gText_MatchCallTriathlete_Pablo_Intro1
	.globl gText_MatchCallTriathlete_Pablo_Intro1
gText_MatchCallTriathlete_Pablo_Intro1: @ 0x085F3207
	.string "ポケモンも いいけど{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Intro1) > 0xb
	.error "gText_MatchCallTriathlete_Pablo_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Pablo_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:214 gText_MatchCallTriathlete_Pablo_Intro2
	.globl gText_MatchCallTriathlete_Pablo_Intro2
gText_MatchCallTriathlete_Pablo_Intro2: @ 0x085F3212
	.string "からだも きたえよう!{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Intro2) > 0xc
	.error "gText_MatchCallTriathlete_Pablo_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Pablo_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:216 gText_MatchCallDragonTamer_Nicolas_Strategy
	.globl gText_MatchCallDragonTamer_Nicolas_Strategy
gText_MatchCallDragonTamer_Nicolas_Strategy: @ 0x085F321E
	.string "ポケモンの パワーが すべて!{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Strategy) > 0x10
	.error "gText_MatchCallDragonTamer_Nicolas_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallDragonTamer_Nicolas_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:217 gText_MatchCallDragonTamer_Nicolas_Pokemon
	.globl gText_MatchCallDragonTamer_Nicolas_Pokemon
gText_MatchCallDragonTamer_Nicolas_Pokemon: @ 0x085F322E
	.string "ドラゴンの つよさを みろ!{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Pokemon) > 0xf
	.error "gText_MatchCallDragonTamer_Nicolas_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallDragonTamer_Nicolas_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:218 gText_MatchCallDragonTamer_Nicolas_Intro1
	.globl gText_MatchCallDragonTamer_Nicolas_Intro1
gText_MatchCallDragonTamer_Nicolas_Intro1: @ 0x085F323D
	.string "いつか さいきょうでんせつを{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro1) > 0xf
	.error "gText_MatchCallDragonTamer_Nicolas_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallDragonTamer_Nicolas_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:219 gText_MatchCallDragonTamer_Nicolas_Intro2
	.globl gText_MatchCallDragonTamer_Nicolas_Intro2
gText_MatchCallDragonTamer_Nicolas_Intro2: @ 0x085F324C
	.string "つくってやるぜ!{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro2) > 0x9
	.error "gText_MatchCallDragonTamer_Nicolas_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro2) < 0x9
	.space 0x9 - (. - gText_MatchCallDragonTamer_Nicolas_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:221 gText_MatchCallBirdKeeper_Robert_Strategy
	.globl gText_MatchCallBirdKeeper_Robert_Strategy
gText_MatchCallBirdKeeper_Robert_Strategy: @ 0x085F3255
	.string "おれの テクニック みせてやる{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Strategy) > 0x10
	.error "gText_MatchCallBirdKeeper_Robert_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBirdKeeper_Robert_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallBirdKeeper_Robert_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:222 gText_MatchCallBirdKeeper_Robert_Pokemon
	.globl gText_MatchCallBirdKeeper_Robert_Pokemon
gText_MatchCallBirdKeeper_Robert_Pokemon: @ 0x085F3265
	.string "とりポケの かれいなる まい!{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Pokemon) > 0x10
	.error "gText_MatchCallBirdKeeper_Robert_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBirdKeeper_Robert_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallBirdKeeper_Robert_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:223 gText_MatchCallBirdKeeper_Robert_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBirdKeeper_Robert_Intro1
gText_MatchCallBirdKeeper_Robert_Intro1: @ 0x085F3275
	.string "とりポケよ おれの きもち{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Intro1) != 0xe
	.error "gText_MatchCallBirdKeeper_Robert_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:224 gText_MatchCallBirdKeeper_Robert_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBirdKeeper_Robert_Intro2
gText_MatchCallBirdKeeper_Robert_Intro2: @ 0x085F3283
	.string "あのこに とどけておくれ{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Intro2) != 0xd
	.error "gText_MatchCallBirdKeeper_Robert_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:226 gText_MatchCallNinjaBoy_Lao_Strategy
	.globl gText_MatchCallNinjaBoy_Lao_Strategy
gText_MatchCallNinjaBoy_Lao_Strategy: @ 0x085F3290
	.string "どく こうげきで くるしめる{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Strategy) > 0xf
	.error "gText_MatchCallNinjaBoy_Lao_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallNinjaBoy_Lao_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallNinjaBoy_Lao_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:227 gText_MatchCallNinjaBoy_Lao_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallNinjaBoy_Lao_Pokemon
gText_MatchCallNinjaBoy_Lao_Pokemon: @ 0x085F329F
	.string "どくどくしい ポケモン{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Pokemon) != 0xc
	.error "gText_MatchCallNinjaBoy_Lao_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:228 gText_MatchCallNinjaBoy_Lao_Intro1
	.globl gText_MatchCallNinjaBoy_Lao_Intro1
gText_MatchCallNinjaBoy_Lao_Intro1: @ 0x085F32AB
	.string "にんじゃに なるため{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro1) > 0xb
	.error "gText_MatchCallNinjaBoy_Lao_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallNinjaBoy_Lao_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:229 gText_MatchCallNinjaBoy_Lao_Intro2
	.globl gText_MatchCallNinjaBoy_Lao_Intro2
gText_MatchCallNinjaBoy_Lao_Intro2: @ 0x085F32B6
	.string "まいにち しゅぎょうで ござる{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro2) > 0x10
	.error "gText_MatchCallNinjaBoy_Lao_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallNinjaBoy_Lao_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:231 gText_MatchCallBattleGirl_Cyndy_Strategy
	.globl gText_MatchCallBattleGirl_Cyndy_Strategy
gText_MatchCallBattleGirl_Cyndy_Strategy: @ 0x085F32C6
	.string "せんてひっしょうよ!{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Strategy) > 0xb
	.error "gText_MatchCallBattleGirl_Cyndy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBattleGirl_Cyndy_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallBattleGirl_Cyndy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:232 gText_MatchCallBattleGirl_Cyndy_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBattleGirl_Cyndy_Pokemon
gText_MatchCallBattleGirl_Cyndy_Pokemon: @ 0x085F32D1
	.string "すばやい かくとうタイプ{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Pokemon) != 0xd
	.error "gText_MatchCallBattleGirl_Cyndy_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:233 gText_MatchCallBattleGirl_Cyndy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBattleGirl_Cyndy_Intro1
gText_MatchCallBattleGirl_Cyndy_Intro1: @ 0x085F32DE
	.string "ポケモンで まけたら{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Intro1) != 0xb
	.error "gText_MatchCallBattleGirl_Cyndy_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:234 gText_MatchCallBattleGirl_Cyndy_Intro2
	.globl gText_MatchCallBattleGirl_Cyndy_Intro2
gText_MatchCallBattleGirl_Cyndy_Intro2: @ 0x085F32E9
	.string "あたしが たたかっちゃう!{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Intro2) > 0xe
	.error "gText_MatchCallBattleGirl_Cyndy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBattleGirl_Cyndy_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallBattleGirl_Cyndy_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:236 gText_MatchCallParasolLady_Madeline_Strategy
	.globl gText_MatchCallParasolLady_Madeline_Strategy
gText_MatchCallParasolLady_Madeline_Strategy: @ 0x085F32F7
	.string "がんばれ わたしの ポケモン!{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Strategy) > 0x10
	.error "gText_MatchCallParasolLady_Madeline_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallParasolLady_Madeline_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallParasolLady_Madeline_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:237 gText_MatchCallParasolLady_Madeline_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallParasolLady_Madeline_Pokemon
gText_MatchCallParasolLady_Madeline_Pokemon: @ 0x085F3307
	.string "なんでも そだてるわよ!{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Pokemon) != 0xd
	.error "gText_MatchCallParasolLady_Madeline_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:238 gText_MatchCallParasolLady_Madeline_Intro1
	.globl gText_MatchCallParasolLady_Madeline_Intro1
gText_MatchCallParasolLady_Madeline_Intro1: @ 0x085F3314
	.string "しがいせんは おはだの てき{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Intro1) > 0xf
	.error "gText_MatchCallParasolLady_Madeline_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallParasolLady_Madeline_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallParasolLady_Madeline_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:239 gText_MatchCallParasolLady_Madeline_Intro2
	.globl gText_MatchCallParasolLady_Madeline_Intro2
gText_MatchCallParasolLady_Madeline_Intro2: @ 0x085F3323
	.string "ようじん しなくちゃね!{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Intro2) > 0xd
	.error "gText_MatchCallParasolLady_Madeline_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallParasolLady_Madeline_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallParasolLady_Madeline_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:241 gText_MatchCallSwimmer_Jenny_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSwimmer_Jenny_Strategy
gText_MatchCallSwimmer_Jenny_Strategy: @ 0x085F3330
	.string "ようしゃ しないわよ!{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Strategy) != 0xc
	.error "gText_MatchCallSwimmer_Jenny_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:242 gText_MatchCallSwimmer_Jenny_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSwimmer_Jenny_Pokemon
gText_MatchCallSwimmer_Jenny_Pokemon: @ 0x085F333C
	.string "かわいい みずポケモン{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Pokemon) != 0xc
	.error "gText_MatchCallSwimmer_Jenny_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:243 gText_MatchCallSwimmer_Jenny_Intro1
	.globl gText_MatchCallSwimmer_Jenny_Intro1
gText_MatchCallSwimmer_Jenny_Intro1: @ 0x085F3348
	.string "ファンが おおくて こまるわ{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Intro1) > 0xf
	.error "gText_MatchCallSwimmer_Jenny_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Jenny_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallSwimmer_Jenny_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:244 gText_MatchCallSwimmer_Jenny_Intro2
	.globl gText_MatchCallSwimmer_Jenny_Intro2
gText_MatchCallSwimmer_Jenny_Intro2: @ 0x085F3357
	.string "テレビの しゅざいも うけたし{EOS}"
	.if (. - gText_MatchCallSwimmer_Jenny_Intro2) > 0x10
	.error "gText_MatchCallSwimmer_Jenny_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Jenny_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallSwimmer_Jenny_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:246 gText_MatchCallPicnicker_Diana_Strategy
	.globl gText_MatchCallPicnicker_Diana_Strategy
gText_MatchCallPicnicker_Diana_Strategy: @ 0x085F3367
	.string "いろいろ かんがえてるのよ{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Strategy) > 0xe
	.error "gText_MatchCallPicnicker_Diana_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallPicnicker_Diana_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:247 gText_MatchCallPicnicker_Diana_Pokemon
	.globl gText_MatchCallPicnicker_Diana_Pokemon
gText_MatchCallPicnicker_Diana_Pokemon: @ 0x085F3375
	.string "ポケモンは みんな すき{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Pokemon) > 0xd
	.error "gText_MatchCallPicnicker_Diana_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallPicnicker_Diana_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:248 gText_MatchCallPicnicker_Diana_Intro1
	.globl gText_MatchCallPicnicker_Diana_Intro1
gText_MatchCallPicnicker_Diana_Intro1: @ 0x085F3382
	.string "あの おかの むこうには{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Intro1) > 0xd
	.error "gText_MatchCallPicnicker_Diana_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallPicnicker_Diana_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:249 gText_MatchCallPicnicker_Diana_Intro2
	.globl gText_MatchCallPicnicker_Diana_Intro2
gText_MatchCallPicnicker_Diana_Intro2: @ 0x085F338F
	.string "なにが あるのかしら……?{EOS}"
	.if (. - gText_MatchCallPicnicker_Diana_Intro2) > 0xe
	.error "gText_MatchCallPicnicker_Diana_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPicnicker_Diana_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallPicnicker_Diana_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:251 gText_MatchCallTwins_AmyAndLiv_Strategy
	.globl gText_MatchCallTwins_AmyAndLiv_Strategy
gText_MatchCallTwins_AmyAndLiv_Strategy: @ 0x085F339D
	.string "いっしょに たたかうの!{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Strategy) > 0xd
	.error "gText_MatchCallTwins_AmyAndLiv_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallTwins_AmyAndLiv_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:252 gText_MatchCallTwins_AmyAndLiv_Pokemon
	.globl gText_MatchCallTwins_AmyAndLiv_Pokemon
gText_MatchCallTwins_AmyAndLiv_Pokemon: @ 0x085F33AA
	.string "いっしょに そだててるの!{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Pokemon) > 0xe
	.error "gText_MatchCallTwins_AmyAndLiv_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallTwins_AmyAndLiv_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:253 gText_MatchCallTwins_AmyAndLiv_Intro1
	.globl gText_MatchCallTwins_AmyAndLiv_Intro1
gText_MatchCallTwins_AmyAndLiv_Intro1: @ 0x085F33B8
	.string "すきな ポケモンは おなじでも{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Intro1) > 0x10
	.error "gText_MatchCallTwins_AmyAndLiv_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallTwins_AmyAndLiv_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:254 gText_MatchCallTwins_AmyAndLiv_Intro2
	.globl gText_MatchCallTwins_AmyAndLiv_Intro2
gText_MatchCallTwins_AmyAndLiv_Intro2: @ 0x085F33C8
	.string "デザートの このみは ちがうよ{EOS}"
	.if (. - gText_MatchCallTwins_AmyAndLiv_Intro2) > 0x10
	.error "gText_MatchCallTwins_AmyAndLiv_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTwins_AmyAndLiv_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallTwins_AmyAndLiv_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:256 gText_MatchCallSailor_Ernest_Strategy
	.globl gText_MatchCallSailor_Ernest_Strategy
gText_MatchCallSailor_Ernest_Strategy: @ 0x085F33D8
	.string "ちからで おしまくるぜ{EOS}"
	.if (. - gText_MatchCallSailor_Ernest_Strategy) > 0xc
	.error "gText_MatchCallSailor_Ernest_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Ernest_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallSailor_Ernest_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:257 gText_MatchCallSailor_Ernest_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSailor_Ernest_Pokemon
gText_MatchCallSailor_Ernest_Pokemon: @ 0x085F33E4
	.string "みずと かくとうタイプ{EOS}"
	.if (. - gText_MatchCallSailor_Ernest_Pokemon) != 0xc
	.error "gText_MatchCallSailor_Ernest_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:258 gText_MatchCallSailor_Ernest_Intro1
	.globl gText_MatchCallSailor_Ernest_Intro1
gText_MatchCallSailor_Ernest_Intro1: @ 0x085F33F0
	.string "うみの おとこは きが あらい{EOS}"
	.if (. - gText_MatchCallSailor_Ernest_Intro1) > 0x10
	.error "gText_MatchCallSailor_Ernest_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Ernest_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallSailor_Ernest_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:259 gText_MatchCallSailor_Ernest_Intro2
	.globl gText_MatchCallSailor_Ernest_Intro2
gText_MatchCallSailor_Ernest_Intro2: @ 0x085F3400
	.string "もんく あるか こらー!{EOS}"
	.if (. - gText_MatchCallSailor_Ernest_Intro2) > 0xd
	.error "gText_MatchCallSailor_Ernest_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Ernest_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallSailor_Ernest_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:261 gText_MatchCallSailor_Cory_Strategy
	.globl gText_MatchCallSailor_Cory_Strategy
gText_MatchCallSailor_Cory_Strategy: @ 0x085F340D
	.string "ケンカ じょうとう!{EOS}"
	.if (. - gText_MatchCallSailor_Cory_Strategy) > 0xb
	.error "gText_MatchCallSailor_Cory_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Cory_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallSailor_Cory_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:262 gText_MatchCallSailor_Cory_Pokemon
	.globl gText_MatchCallSailor_Cory_Pokemon
gText_MatchCallSailor_Cory_Pokemon: @ 0x085F3418
	.string "みずポケモンが すきだー!{EOS}"
	.if (. - gText_MatchCallSailor_Cory_Pokemon) > 0xe
	.error "gText_MatchCallSailor_Cory_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Cory_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallSailor_Cory_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:263 gText_MatchCallSailor_Cory_Intro1
	.globl gText_MatchCallSailor_Cory_Intro1
gText_MatchCallSailor_Cory_Intro1: @ 0x085F3426
	.string "おおきな こえを だすときは{EOS}"
	.if (. - gText_MatchCallSailor_Cory_Intro1) > 0xf
	.error "gText_MatchCallSailor_Cory_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Cory_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallSailor_Cory_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:264 gText_MatchCallSailor_Cory_Intro2
	.globl gText_MatchCallSailor_Cory_Intro2
gText_MatchCallSailor_Cory_Intro2: @ 0x085F3435
	.string "おなかで くうきを すうのだ!{EOS}"
	.if (. - gText_MatchCallSailor_Cory_Intro2) > 0x10
	.error "gText_MatchCallSailor_Cory_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSailor_Cory_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallSailor_Cory_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:266 gText_MatchCallCollector_Edwin_Strategy
	.globl gText_MatchCallCollector_Edwin_Strategy
gText_MatchCallCollector_Edwin_Strategy: @ 0x085F3445
	.string "ポケモンを キズつけないように{EOS}"
	.if (. - gText_MatchCallCollector_Edwin_Strategy) > 0x10
	.error "gText_MatchCallCollector_Edwin_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCollector_Edwin_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallCollector_Edwin_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:267 gText_MatchCallCollector_Edwin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCollector_Edwin_Pokemon
gText_MatchCallCollector_Edwin_Pokemon: @ 0x085F3455
	.string "めずらしい ポケモン だいすき{EOS}"
	.if (. - gText_MatchCallCollector_Edwin_Pokemon) != 0x10
	.error "gText_MatchCallCollector_Edwin_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:268 gText_MatchCallCollector_Edwin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallCollector_Edwin_Intro1
gText_MatchCallCollector_Edwin_Intro1: @ 0x085F3465
	.string "せかいじゅうの めずらしい{EOS}"
	.if (. - gText_MatchCallCollector_Edwin_Intro1) != 0xe
	.error "gText_MatchCallCollector_Edwin_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:269 gText_MatchCallCollector_Edwin_Intro2
	.globl gText_MatchCallCollector_Edwin_Intro2
gText_MatchCallCollector_Edwin_Intro2: @ 0x085F3473
	.string "ポケモンを てにいれたい!{EOS}"
	.if (. - gText_MatchCallCollector_Edwin_Intro2) > 0xe
	.error "gText_MatchCallCollector_Edwin_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallCollector_Edwin_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallCollector_Edwin_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:271 gText_MatchCallPkmnBreeder_Lydia_Strategy
	.globl gText_MatchCallPkmnBreeder_Lydia_Strategy
gText_MatchCallPkmnBreeder_Lydia_Strategy: @ 0x085F3481
	.string "つよきで たたかいます{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Strategy) > 0xc
	.error "gText_MatchCallPkmnBreeder_Lydia_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallPkmnBreeder_Lydia_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:272 gText_MatchCallPkmnBreeder_Lydia_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnBreeder_Lydia_Pokemon
gText_MatchCallPkmnBreeder_Lydia_Pokemon: @ 0x085F348D
	.string "ポケモンは じぶんの こども{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Pokemon) != 0xf
	.error "gText_MatchCallPkmnBreeder_Lydia_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:273 gText_MatchCallPkmnBreeder_Lydia_Intro1
	.globl gText_MatchCallPkmnBreeder_Lydia_Intro1
gText_MatchCallPkmnBreeder_Lydia_Intro1: @ 0x085F349C
	.string "ポケモンを そだてる コツは{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Intro1) > 0xf
	.error "gText_MatchCallPkmnBreeder_Lydia_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallPkmnBreeder_Lydia_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:274 gText_MatchCallPkmnBreeder_Lydia_Intro2
	.globl gText_MatchCallPkmnBreeder_Lydia_Intro2
gText_MatchCallPkmnBreeder_Lydia_Intro2: @ 0x085F34AB
	.string "ちしきと あいじょうよ!{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Intro2) > 0xd
	.error "gText_MatchCallPkmnBreeder_Lydia_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Lydia_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPkmnBreeder_Lydia_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:276 gText_MatchCallPkmnBreeder_Isaac_Strategy
	.globl gText_MatchCallPkmnBreeder_Isaac_Strategy
gText_MatchCallPkmnBreeder_Isaac_Strategy: @ 0x085F34B8
	.string "がんがん おします!{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Strategy) > 0xb
	.error "gText_MatchCallPkmnBreeder_Isaac_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallPkmnBreeder_Isaac_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:277 gText_MatchCallPkmnBreeder_Isaac_Pokemon
	.globl gText_MatchCallPkmnBreeder_Isaac_Pokemon
gText_MatchCallPkmnBreeder_Isaac_Pokemon: @ 0x085F34C3
	.string "なんでも そだてる{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Pokemon) > 0xa
	.error "gText_MatchCallPkmnBreeder_Isaac_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Pokemon) < 0xa
	.space 0xa - (. - gText_MatchCallPkmnBreeder_Isaac_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:278 gText_MatchCallPkmnBreeder_Isaac_Intro1
	.globl gText_MatchCallPkmnBreeder_Isaac_Intro1
gText_MatchCallPkmnBreeder_Isaac_Intro1: @ 0x085F34CD
	.string "ポロックを たくさん あたえて{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Intro1) > 0x10
	.error "gText_MatchCallPkmnBreeder_Isaac_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnBreeder_Isaac_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:279 gText_MatchCallPkmnBreeder_Isaac_Intro2
	.globl gText_MatchCallPkmnBreeder_Isaac_Intro2
gText_MatchCallPkmnBreeder_Isaac_Intro2: @ 0x085F34DD
	.string "コンテストも ねらってます{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Intro2) > 0xe
	.error "gText_MatchCallPkmnBreeder_Isaac_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Isaac_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallPkmnBreeder_Isaac_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:281 gText_MatchCallPkmnBreeder_Gabrielle_Strategy
	.globl gText_MatchCallPkmnBreeder_Gabrielle_Strategy
gText_MatchCallPkmnBreeder_Gabrielle_Strategy: @ 0x085F34EB
	.string "たいせつに そだてて いるのよ{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Strategy) > 0x10
	.error "gText_MatchCallPkmnBreeder_Gabrielle_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnBreeder_Gabrielle_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:282 gText_MatchCallPkmnBreeder_Gabrielle_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnBreeder_Gabrielle_Pokemon
gText_MatchCallPkmnBreeder_Gabrielle_Pokemon: @ 0x085F34FB
	.string "そだてがいの ある ポケモン{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Pokemon) != 0xf
	.error "gText_MatchCallPkmnBreeder_Gabrielle_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:283 gText_MatchCallPkmnBreeder_Gabrielle_Intro1
	.globl gText_MatchCallPkmnBreeder_Gabrielle_Intro1
gText_MatchCallPkmnBreeder_Gabrielle_Intro1: @ 0x085F350A
	.string "であった ポケモンは{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Intro1) > 0xb
	.error "gText_MatchCallPkmnBreeder_Gabrielle_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallPkmnBreeder_Gabrielle_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:284 gText_MatchCallPkmnBreeder_Gabrielle_Intro2
	.globl gText_MatchCallPkmnBreeder_Gabrielle_Intro2
gText_MatchCallPkmnBreeder_Gabrielle_Intro2: @ 0x085F3515
	.string "たいせつに して くださいね{EOS}"
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Intro2) > 0xf
	.error "gText_MatchCallPkmnBreeder_Gabrielle_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnBreeder_Gabrielle_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallPkmnBreeder_Gabrielle_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:286 gText_MatchCallPkmnRanger_Catherine_Strategy
	.globl gText_MatchCallPkmnRanger_Catherine_Strategy
gText_MatchCallPkmnRanger_Catherine_Strategy: @ 0x085F3524
	.string "ポケモンの ちからを しんじる{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Catherine_Strategy) > 0x10
	.error "gText_MatchCallPkmnRanger_Catherine_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Catherine_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnRanger_Catherine_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:287 gText_MatchCallPkmnRanger_Catherine_Pokemon
	.globl gText_MatchCallPkmnRanger_Catherine_Pokemon
gText_MatchCallPkmnRanger_Catherine_Pokemon: @ 0x085F3534
	.string "つよい ポケモンが すき{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Catherine_Pokemon) > 0xd
	.error "gText_MatchCallPkmnRanger_Catherine_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Catherine_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallPkmnRanger_Catherine_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:288 gText_MatchCallPkmnRanger_Catherine_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnRanger_Catherine_Intro1
gText_MatchCallPkmnRanger_Catherine_Intro1: @ 0x085F3541
	.string "ポケモンと いっしょに{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Catherine_Intro1) != 0xc
	.error "gText_MatchCallPkmnRanger_Catherine_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:289 gText_MatchCallPkmnRanger_Catherine_Intro2
	.globl gText_MatchCallPkmnRanger_Catherine_Intro2
gText_MatchCallPkmnRanger_Catherine_Intro2: @ 0x085F354D
	.string "きゅうじょくんれんを してるの{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Catherine_Intro2) > 0x10
	.error "gText_MatchCallPkmnRanger_Catherine_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Catherine_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnRanger_Catherine_Intro2)
	.endif

	@ Structural owner: gText_MatchCallPkmnRanger_Jackson_Strategy; identical bytes are reused from Jeffrey Strategy.
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnRanger_Jackson_Strategy
gText_MatchCallPkmnRanger_Jackson_Strategy: @ 0x085F355D
	.string "たたみかける ような こうげき{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Strategy) != 0x10
	.error "gText_MatchCallPkmnRanger_Jackson_Strategy must retain its original byte length"
	.endif

	@ Structural owner: gText_MatchCallPkmnRanger_Jackson_Pokemon; identical bytes are reused from Calvin Pokemon.
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnRanger_Jackson_Pokemon
gText_MatchCallPkmnRanger_Jackson_Pokemon: @ 0x085F356D
	.string "いろんな タイプで しょうぶ{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Pokemon) != 0xf
	.error "gText_MatchCallPkmnRanger_Jackson_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:293 gText_MatchCallPkmnRanger_Jackson_Intro1
	.globl gText_MatchCallPkmnRanger_Jackson_Intro1
gText_MatchCallPkmnRanger_Jackson_Intro1: @ 0x085F357C
	.string "しぜんを こわす やからは{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro1) > 0xe
	.error "gText_MatchCallPkmnRanger_Jackson_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallPkmnRanger_Jackson_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:294 gText_MatchCallPkmnRanger_Jackson_Intro2
	.globl gText_MatchCallPkmnRanger_Jackson_Intro2
gText_MatchCallPkmnRanger_Jackson_Intro2: @ 0x085F358A
	.string "ぜったいに ゆるさない!{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro2) > 0xd
	.error "gText_MatchCallPkmnRanger_Jackson_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPkmnRanger_Jackson_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:296 gText_MatchCallLass_Haley_Strategy
	.globl gText_MatchCallLass_Haley_Strategy
gText_MatchCallLass_Haley_Strategy: @ 0x085F3597
	.string "こんじょう みせちゃう!{EOS}"
	.if (. - gText_MatchCallLass_Haley_Strategy) > 0xd
	.error "gText_MatchCallLass_Haley_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallLass_Haley_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:297 gText_MatchCallLass_Haley_Pokemon
	.globl gText_MatchCallLass_Haley_Pokemon
gText_MatchCallLass_Haley_Pokemon: @ 0x085F35A4
	.string "かわいい ポケモン だいすき!{EOS}"
	.if (. - gText_MatchCallLass_Haley_Pokemon) > 0x10
	.error "gText_MatchCallLass_Haley_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallLass_Haley_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:298 gText_MatchCallLass_Haley_Intro1
	.globl gText_MatchCallLass_Haley_Intro1
gText_MatchCallLass_Haley_Intro1: @ 0x085F35B4
	.string "たたかった あとは ポケモンと{EOS}"
	.if (. - gText_MatchCallLass_Haley_Intro1) > 0x10
	.error "gText_MatchCallLass_Haley_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallLass_Haley_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:299 gText_MatchCallLass_Haley_Intro2
	.globl gText_MatchCallLass_Haley_Intro2
gText_MatchCallLass_Haley_Intro2: @ 0x085F35C4
	.string "おふろに はいりまーす{EOS}"
	.if (. - gText_MatchCallLass_Haley_Intro2) > 0xc
	.error "gText_MatchCallLass_Haley_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallLass_Haley_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:301 gText_MatchCallBugCatcher_James_Strategy
	.globl gText_MatchCallBugCatcher_James_Strategy
gText_MatchCallBugCatcher_James_Strategy: @ 0x085F35D0
	.string "すばやく こうげきだ!{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Strategy) > 0xc
	.error "gText_MatchCallBugCatcher_James_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallBugCatcher_James_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:302 gText_MatchCallBugCatcher_James_Pokemon
	.globl gText_MatchCallBugCatcher_James_Pokemon
gText_MatchCallBugCatcher_James_Pokemon: @ 0x085F35DC
	.string "むしタイプが いちばん!{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Pokemon) > 0xd
	.error "gText_MatchCallBugCatcher_James_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallBugCatcher_James_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:303 gText_MatchCallBugCatcher_James_Intro1
	.globl gText_MatchCallBugCatcher_James_Intro1
gText_MatchCallBugCatcher_James_Intro1: @ 0x085F35E9
	.string "むしポケモンを つかまえるなら{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Intro1) > 0x10
	.error "gText_MatchCallBugCatcher_James_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallBugCatcher_James_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:304 gText_MatchCallBugCatcher_James_Intro2
	.globl gText_MatchCallBugCatcher_James_Intro2
gText_MatchCallBugCatcher_James_Intro2: @ 0x085F35F9
	.string "あさはやく おきないとね{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Intro2) > 0xd
	.error "gText_MatchCallBugCatcher_James_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallBugCatcher_James_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:306 gText_MatchCallHiker_Trent_Strategy
	.globl gText_MatchCallHiker_Trent_Strategy
gText_MatchCallHiker_Trent_Strategy: @ 0x085F3606
	.string "パワーで しょうぶ!{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Strategy) > 0xb
	.error "gText_MatchCallHiker_Trent_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Trent_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallHiker_Trent_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:307 gText_MatchCallHiker_Trent_Pokemon
	.globl gText_MatchCallHiker_Trent_Pokemon
gText_MatchCallHiker_Trent_Pokemon: @ 0x085F3611
	.string "かたい からだの ポケモン!{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Pokemon) > 0xf
	.error "gText_MatchCallHiker_Trent_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Trent_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallHiker_Trent_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:308 gText_MatchCallHiker_Trent_Intro1
	.globl gText_MatchCallHiker_Trent_Intro1
gText_MatchCallHiker_Trent_Intro1: @ 0x085F3620
	.string "きょうの とざんの ために{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Intro1) > 0xe
	.error "gText_MatchCallHiker_Trent_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Trent_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallHiker_Trent_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:309 gText_MatchCallHiker_Trent_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallHiker_Trent_Intro2
gText_MatchCallHiker_Trent_Intro2: @ 0x085F362E
	.string "ひとつきまえから けいかく{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Intro2) != 0xe
	.error "gText_MatchCallHiker_Trent_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:311 gText_MatchCallHiker_Sawyer_Strategy
	.globl gText_MatchCallHiker_Sawyer_Strategy
gText_MatchCallHiker_Sawyer_Strategy: @ 0x085F363C
	.string "あつく たたかうぞ!{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Strategy) > 0xb
	.error "gText_MatchCallHiker_Sawyer_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallHiker_Sawyer_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:312 gText_MatchCallHiker_Sawyer_Pokemon
	.globl gText_MatchCallHiker_Sawyer_Pokemon
gText_MatchCallHiker_Sawyer_Pokemon: @ 0x085F3647
	.string "あつい ポケモンだ!{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Pokemon) > 0xb
	.error "gText_MatchCallHiker_Sawyer_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Pokemon) < 0xb
	.space 0xb - (. - gText_MatchCallHiker_Sawyer_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:313 gText_MatchCallHiker_Sawyer_Intro1
	.globl gText_MatchCallHiker_Sawyer_Intro1
gText_MatchCallHiker_Sawyer_Intro1: @ 0x085F3652
	.string "ポケモンは すきだけど{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Intro1) > 0xc
	.error "gText_MatchCallHiker_Sawyer_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallHiker_Sawyer_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:314 gText_MatchCallHiker_Sawyer_Intro2
	.globl gText_MatchCallHiker_Sawyer_Intro2
gText_MatchCallHiker_Sawyer_Intro2: @ 0x085F365E
	.string "おねいさんも すきだぞ{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Intro2) > 0xc
	.error "gText_MatchCallHiker_Sawyer_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallHiker_Sawyer_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:316 gText_MatchCallYoungCouple_LoisAndHal_Strategy
	.globl gText_MatchCallYoungCouple_LoisAndHal_Strategy
gText_MatchCallYoungCouple_LoisAndHal_Strategy: @ 0x085F366A
	.string "ラブラブさくせん!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Strategy) > 0xa
	.error "gText_MatchCallYoungCouple_LoisAndHal_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Strategy) < 0xa
	.space 0xa - (. - gText_MatchCallYoungCouple_LoisAndHal_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:317 gText_MatchCallYoungCouple_LoisAndHal_Pokemon
	.globl gText_MatchCallYoungCouple_LoisAndHal_Pokemon
gText_MatchCallYoungCouple_LoisAndHal_Pokemon: @ 0x085F3674
	.string "ラブラブ ポケモン!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Pokemon) > 0xb
	.error "gText_MatchCallYoungCouple_LoisAndHal_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Pokemon) < 0xb
	.space 0xb - (. - gText_MatchCallYoungCouple_LoisAndHal_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:318 gText_MatchCallYoungCouple_LoisAndHal_Intro1
	.globl gText_MatchCallYoungCouple_LoisAndHal_Intro1
gText_MatchCallYoungCouple_LoisAndHal_Intro1: @ 0x085F367F
	.string "わたしたち ラブラブ!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro1) > 0xc
	.error "gText_MatchCallYoungCouple_LoisAndHal_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallYoungCouple_LoisAndHal_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:319 gText_MatchCallYoungCouple_LoisAndHal_Intro2
	.globl gText_MatchCallYoungCouple_LoisAndHal_Intro2
gText_MatchCallYoungCouple_LoisAndHal_Intro2: @ 0x085F368B
	.string "えいえんに ラブラブ!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro2) > 0xc
	.error "gText_MatchCallYoungCouple_LoisAndHal_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallYoungCouple_LoisAndHal_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:321 gText_MatchCallPkmnTrainer_Wally_Strategy
	.globl gText_MatchCallPkmnTrainer_Wally_Strategy
gText_MatchCallPkmnTrainer_Wally_Strategy: @ 0x085F3697
	.string "きもちを すべて だしきります{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Strategy) > 0x10
	.error "gText_MatchCallPkmnTrainer_Wally_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnTrainer_Wally_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnTrainer_Wally_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:322 gText_MatchCallPkmnTrainer_Wally_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnTrainer_Wally_Pokemon
gText_MatchCallPkmnTrainer_Wally_Pokemon: @ 0x085F36A7
	.string "はじめて つかまえた ポケモン{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Pokemon) != 0x10
	.error "gText_MatchCallPkmnTrainer_Wally_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:323 gText_MatchCallPkmnTrainer_Wally_Intro1
	.globl gText_MatchCallPkmnTrainer_Wally_Intro1
gText_MatchCallPkmnTrainer_Wally_Intro1: @ 0x085F36B7
	.string "ぼくと ポケモンは{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro1) > 0xa
	.error "gText_MatchCallPkmnTrainer_Wally_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro1) < 0xa
	.space 0xa - (. - gText_MatchCallPkmnTrainer_Wally_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:324 gText_MatchCallPkmnTrainer_Wally_Intro2
	.globl gText_MatchCallPkmnTrainer_Wally_Intro2
gText_MatchCallPkmnTrainer_Wally_Intro2: @ 0x085F36C1
	.string "いっしょに つよくなったんです{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro2) > 0x10
	.error "gText_MatchCallPkmnTrainer_Wally_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnTrainer_Wally_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:326 gText_MatchCallRockinWhiz_Roxanne_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallRockinWhiz_Roxanne_Strategy
gText_MatchCallRockinWhiz_Roxanne_Strategy: @ 0x085F36D1
	.string "いわタイプ パワーで こうげき{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Strategy) != 0x10
	.error "gText_MatchCallRockinWhiz_Roxanne_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:327 gText_MatchCallRockinWhiz_Roxanne_Pokemon
	.globl gText_MatchCallRockinWhiz_Roxanne_Pokemon
gText_MatchCallRockinWhiz_Roxanne_Pokemon: @ 0x085F36E1
	.string "がっしり タイプが このみ!{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Pokemon) > 0xf
	.error "gText_MatchCallRockinWhiz_Roxanne_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallRockinWhiz_Roxanne_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:328 gText_MatchCallRockinWhiz_Roxanne_Intro1
	.globl gText_MatchCallRockinWhiz_Roxanne_Intro1
gText_MatchCallRockinWhiz_Roxanne_Intro1: @ 0x085F36F0
	.string "おおきな まちの リーダーは{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro1) > 0xf
	.error "gText_MatchCallRockinWhiz_Roxanne_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallRockinWhiz_Roxanne_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:329 gText_MatchCallRockinWhiz_Roxanne_Intro2
	.globl gText_MatchCallRockinWhiz_Roxanne_Intro2
gText_MatchCallRockinWhiz_Roxanne_Intro2: @ 0x085F36FF
	.string "せきにん じゅうだいよ{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro2) > 0xc
	.error "gText_MatchCallRockinWhiz_Roxanne_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallRockinWhiz_Roxanne_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:331 gText_MatchCallTheBigHit_Brawly_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTheBigHit_Brawly_Strategy
gText_MatchCallTheBigHit_Brawly_Strategy: @ 0x085F370B
	.string "ちょくせつ だげきが とくい{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Strategy) != 0xf
	.error "gText_MatchCallTheBigHit_Brawly_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:332 gText_MatchCallTheBigHit_Brawly_Pokemon
	.globl gText_MatchCallTheBigHit_Brawly_Pokemon
gText_MatchCallTheBigHit_Brawly_Pokemon: @ 0x085F371A
	.string "かくとう ポケモン いのち!{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Pokemon) > 0xf
	.error "gText_MatchCallTheBigHit_Brawly_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTheBigHit_Brawly_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallTheBigHit_Brawly_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:333 gText_MatchCallTheBigHit_Brawly_Intro1
	.globl gText_MatchCallTheBigHit_Brawly_Intro1
gText_MatchCallTheBigHit_Brawly_Intro1: @ 0x085F3729
	.string "せかいの ビッグウェーブが{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro1) > 0xe
	.error "gText_MatchCallTheBigHit_Brawly_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallTheBigHit_Brawly_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:334 gText_MatchCallTheBigHit_Brawly_Intro2
	.globl gText_MatchCallTheBigHit_Brawly_Intro2
gText_MatchCallTheBigHit_Brawly_Intro2: @ 0x085F3737
	.string "オレを よんでいるぜ!{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro2) > 0xc
	.error "gText_MatchCallTheBigHit_Brawly_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallTheBigHit_Brawly_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:336 gText_MatchCallSwellShock_Wattson_Strategy
	.globl gText_MatchCallSwellShock_Wattson_Strategy
gText_MatchCallSwellShock_Wattson_Strategy: @ 0x085F3743
	.string "ビリビリ しびれ させる{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Strategy) > 0xd
	.error "gText_MatchCallSwellShock_Wattson_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallSwellShock_Wattson_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:337 gText_MatchCallSwellShock_Wattson_Pokemon
	.globl gText_MatchCallSwellShock_Wattson_Pokemon
gText_MatchCallSwellShock_Wattson_Pokemon: @ 0x085F3750
	.string "でんきの パワーを くらえ!{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Pokemon) > 0xf
	.error "gText_MatchCallSwellShock_Wattson_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallSwellShock_Wattson_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:338 gText_MatchCallSwellShock_Wattson_Intro1
	.globl gText_MatchCallSwellShock_Wattson_Intro1
gText_MatchCallSwellShock_Wattson_Intro1: @ 0x085F375F
	.string "とちゅうで なげだしたら{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Intro1) > 0xd
	.error "gText_MatchCallSwellShock_Wattson_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallSwellShock_Wattson_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:339 gText_MatchCallSwellShock_Wattson_Intro2
	.globl gText_MatchCallSwellShock_Wattson_Intro2
gText_MatchCallSwellShock_Wattson_Intro2: @ 0x085F376C
	.string "いかんぞ ……ワシもな{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Intro2) > 0xc
	.error "gText_MatchCallSwellShock_Wattson_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallSwellShock_Wattson_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:341 gText_MatchCallPassionBurn_Flannery_Strategy
	.globl gText_MatchCallPassionBurn_Flannery_Strategy
gText_MatchCallPassionBurn_Flannery_Strategy: @ 0x085F3778
	.string "つよきに せめる{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Strategy) > 0x9
	.error "gText_MatchCallPassionBurn_Flannery_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Strategy) < 0x9
	.space 0x9 - (. - gText_MatchCallPassionBurn_Flannery_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:342 gText_MatchCallPassionBurn_Flannery_Pokemon
	.globl gText_MatchCallPassionBurn_Flannery_Pokemon
gText_MatchCallPassionBurn_Flannery_Pokemon: @ 0x085F3781
	.string "もえろ じょうねつの ほのお!{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Pokemon) > 0x10
	.error "gText_MatchCallPassionBurn_Flannery_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallPassionBurn_Flannery_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:343 gText_MatchCallPassionBurn_Flannery_Intro1
	.globl gText_MatchCallPassionBurn_Flannery_Intro1
gText_MatchCallPassionBurn_Flannery_Intro1: @ 0x085F3791
	.string "いちにちの つかれは{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro1) > 0xb
	.error "gText_MatchCallPassionBurn_Flannery_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallPassionBurn_Flannery_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:344 gText_MatchCallPassionBurn_Flannery_Intro2
	.globl gText_MatchCallPassionBurn_Flannery_Intro2
gText_MatchCallPassionBurn_Flannery_Intro2: @ 0x085F379C
	.string "おんせんで スッキリ!{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro2) > 0xc
	.error "gText_MatchCallPassionBurn_Flannery_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallPassionBurn_Flannery_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:346 gText_MatchCallReliableOne_Dad_Strategy
	.globl gText_MatchCallReliableOne_Dad_Strategy
gText_MatchCallReliableOne_Dad_Strategy: @ 0x085F37A8
	.string "りんきおうへんに たたかう{EOS}"
	.if (. - gText_MatchCallReliableOne_Dad_Strategy) > 0xe
	.error "gText_MatchCallReliableOne_Dad_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallReliableOne_Dad_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallReliableOne_Dad_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:347 gText_MatchCallReliableOne_Dad_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallReliableOne_Dad_Pokemon
gText_MatchCallReliableOne_Dad_Pokemon: @ 0x085F37B6
	.string "バランスよく そだてている{EOS}"
	.if (. - gText_MatchCallReliableOne_Dad_Pokemon) != 0xe
	.error "gText_MatchCallReliableOne_Dad_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:348 gText_MatchCallReliableOne_Dad_Intro1
	.globl gText_MatchCallReliableOne_Dad_Intro1
gText_MatchCallReliableOne_Dad_Intro1: @ 0x085F37C4
	.string "いえから とほで 30ぷん{EOS}"
	.if (. - gText_MatchCallReliableOne_Dad_Intro1) > 0xe
	.error "gText_MatchCallReliableOne_Dad_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallReliableOne_Dad_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallReliableOne_Dad_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:349 gText_MatchCallReliableOne_Dad_Intro2
	.globl gText_MatchCallReliableOne_Dad_Intro2
gText_MatchCallReliableOne_Dad_Intro2: @ 0x085F37D2
	.string "まいにち かよっています{EOS}"
	.if (. - gText_MatchCallReliableOne_Dad_Intro2) > 0xd
	.error "gText_MatchCallReliableOne_Dad_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallReliableOne_Dad_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallReliableOne_Dad_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:351 gText_MatchCallSkyTamer_Winona_Strategy
	.globl gText_MatchCallSkyTamer_Winona_Strategy
gText_MatchCallSkyTamer_Winona_Strategy: @ 0x085F37DF
	.string "スピードを いかして たたかう{EOS}"
	.if (. - gText_MatchCallSkyTamer_Winona_Strategy) > 0x10
	.error "gText_MatchCallSkyTamer_Winona_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSkyTamer_Winona_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallSkyTamer_Winona_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:352 gText_MatchCallSkyTamer_Winona_Pokemon
	.globl gText_MatchCallSkyTamer_Winona_Pokemon
gText_MatchCallSkyTamer_Winona_Pokemon: @ 0x085F37EF
	.string "かれいに そらを まう!{EOS}"
	.if (. - gText_MatchCallSkyTamer_Winona_Pokemon) > 0xd
	.error "gText_MatchCallSkyTamer_Winona_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSkyTamer_Winona_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallSkyTamer_Winona_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:353 gText_MatchCallSkyTamer_Winona_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSkyTamer_Winona_Intro1
gText_MatchCallSkyTamer_Winona_Intro1: @ 0x085F37FC
	.string "しぜんと いったいに なって{EOS}"
	.if (. - gText_MatchCallSkyTamer_Winona_Intro1) != 0xf
	.error "gText_MatchCallSkyTamer_Winona_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:354 gText_MatchCallSkyTamer_Winona_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSkyTamer_Winona_Intro2
gText_MatchCallSkyTamer_Winona_Intro2: @ 0x085F380B
	.string "くらすことが いちばん{EOS}"
	.if (. - gText_MatchCallSkyTamer_Winona_Intro2) != 0xc
	.error "gText_MatchCallSkyTamer_Winona_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:356 gText_MatchCallMysticDuo_TateAndLiza_Strategy
	.globl gText_MatchCallMysticDuo_TateAndLiza_Strategy
gText_MatchCallMysticDuo_TateAndLiza_Strategy: @ 0x085F3817
	.string "ふたりで きょうりょく!{EOS}"
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Strategy) > 0xd
	.error "gText_MatchCallMysticDuo_TateAndLiza_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallMysticDuo_TateAndLiza_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:357 gText_MatchCallMysticDuo_TateAndLiza_Pokemon
	.globl gText_MatchCallMysticDuo_TateAndLiza_Pokemon
gText_MatchCallMysticDuo_TateAndLiza_Pokemon: @ 0x085F3824
	.string "いつも なかよしの ポケモン!{EOS}"
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Pokemon) > 0x10
	.error "gText_MatchCallMysticDuo_TateAndLiza_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallMysticDuo_TateAndLiza_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:358 gText_MatchCallMysticDuo_TateAndLiza_Intro1
	.globl gText_MatchCallMysticDuo_TateAndLiza_Intro1
gText_MatchCallMysticDuo_TateAndLiza_Intro1: @ 0x085F3834
	.string "おとうさんは わたしたちの{EOS}"
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Intro1) > 0xe
	.error "gText_MatchCallMysticDuo_TateAndLiza_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallMysticDuo_TateAndLiza_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:359 gText_MatchCallMysticDuo_TateAndLiza_Intro2
	.globl gText_MatchCallMysticDuo_TateAndLiza_Intro2
gText_MatchCallMysticDuo_TateAndLiza_Intro2: @ 0x085F3842
	.string "くべつが つかなく なるのよ!{EOS}"
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Intro2) > 0x10
	.error "gText_MatchCallMysticDuo_TateAndLiza_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallMysticDuo_TateAndLiza_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallMysticDuo_TateAndLiza_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:361 gText_MatchCallDandyCharm_Juan_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallDandyCharm_Juan_Strategy
gText_MatchCallDandyCharm_Juan_Strategy: @ 0x085F3852
	.string "すばらしき みずの ちから{EOS}"
	.if (. - gText_MatchCallDandyCharm_Juan_Strategy) != 0xe
	.error "gText_MatchCallDandyCharm_Juan_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:362 gText_MatchCallDandyCharm_Juan_Pokemon
	.globl gText_MatchCallDandyCharm_Juan_Pokemon
gText_MatchCallDandyCharm_Juan_Pokemon: @ 0x085F3860
	.string "エレガントな ポケモンたち!{EOS}"
	.if (. - gText_MatchCallDandyCharm_Juan_Pokemon) > 0xf
	.error "gText_MatchCallDandyCharm_Juan_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDandyCharm_Juan_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallDandyCharm_Juan_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:363 gText_MatchCallDandyCharm_Juan_Intro1
	.globl gText_MatchCallDandyCharm_Juan_Intro1
gText_MatchCallDandyCharm_Juan_Intro1: @ 0x085F386F
	.string "うつくしいレディの せいえんが{EOS}"
	.if (. - gText_MatchCallDandyCharm_Juan_Intro1) > 0x10
	.error "gText_MatchCallDandyCharm_Juan_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDandyCharm_Juan_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallDandyCharm_Juan_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:364 gText_MatchCallDandyCharm_Juan_Intro2
	.globl gText_MatchCallDandyCharm_Juan_Intro2
gText_MatchCallDandyCharm_Juan_Intro2: @ 0x085F387F
	.string "わたくしの パワーの みなもと{EOS}"
	.if (. - gText_MatchCallDandyCharm_Juan_Intro2) > 0x10
	.error "gText_MatchCallDandyCharm_Juan_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDandyCharm_Juan_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallDandyCharm_Juan_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:366 gText_MatchCallEliteFour_Sidney_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Sidney_Strategy
gText_MatchCallEliteFour_Sidney_Strategy: @ 0x085F388F
	.string "ぼうぎょ よりも こうげき!{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Strategy) != 0xf
	.error "gText_MatchCallEliteFour_Sidney_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:367 gText_MatchCallEliteFour_Sidney_Pokemon
	.globl gText_MatchCallEliteFour_Sidney_Pokemon
gText_MatchCallEliteFour_Sidney_Pokemon: @ 0x085F389E
	.string "あくの びがく!{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Pokemon) > 0x9
	.error "gText_MatchCallEliteFour_Sidney_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Sidney_Pokemon) < 0x9
	.space 0x9 - (. - gText_MatchCallEliteFour_Sidney_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:368 gText_MatchCallEliteFour_Sidney_Intro1
	.globl gText_MatchCallEliteFour_Sidney_Intro1
gText_MatchCallEliteFour_Sidney_Intro1: @ 0x085F38A7
	.string "ふりょうと いわれた オレも{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Intro1) > 0xf
	.error "gText_MatchCallEliteFour_Sidney_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Sidney_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Sidney_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:369 gText_MatchCallEliteFour_Sidney_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Sidney_Intro2
gText_MatchCallEliteFour_Sidney_Intro2: @ 0x085F38B6
	.string "いまじゃ りっぱな してんのう{EOS}"
	.if (. - gText_MatchCallEliteFour_Sidney_Intro2) != 0x10
	.error "gText_MatchCallEliteFour_Sidney_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:371 gText_MatchCallEliteFour_Phoebe_Strategy
	.globl gText_MatchCallEliteFour_Phoebe_Strategy
gText_MatchCallEliteFour_Phoebe_Strategy: @ 0x085F38C6
	.string "あいてを まどわせて たたかう{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Strategy) > 0x10
	.error "gText_MatchCallEliteFour_Phoebe_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Phoebe_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Phoebe_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:372 gText_MatchCallEliteFour_Phoebe_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Phoebe_Pokemon
gText_MatchCallEliteFour_Phoebe_Pokemon: @ 0x085F38D6
	.string "つかみどころ ありません{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Pokemon) != 0xd
	.error "gText_MatchCallEliteFour_Phoebe_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:373 gText_MatchCallEliteFour_Phoebe_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallEliteFour_Phoebe_Intro1
gText_MatchCallEliteFour_Phoebe_Intro1: @ 0x085F38E3
	.string "おくりびやまの おばあちゃん{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Intro1) != 0xf
	.error "gText_MatchCallEliteFour_Phoebe_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:374 gText_MatchCallEliteFour_Phoebe_Intro2
	.globl gText_MatchCallEliteFour_Phoebe_Intro2
gText_MatchCallEliteFour_Phoebe_Intro2: @ 0x085F38F2
	.string "げんきに している かしら?{EOS}"
	.if (. - gText_MatchCallEliteFour_Phoebe_Intro2) > 0xf
	.error "gText_MatchCallEliteFour_Phoebe_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Phoebe_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Phoebe_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:376 gText_MatchCallEliteFour_Glacia_Strategy
	.globl gText_MatchCallEliteFour_Glacia_Strategy
gText_MatchCallEliteFour_Glacia_Strategy: @ 0x085F3901
	.string "どうぐを くしして たたかう{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Strategy) > 0xf
	.error "gText_MatchCallEliteFour_Glacia_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Glacia_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:377 gText_MatchCallEliteFour_Glacia_Pokemon
	.globl gText_MatchCallEliteFour_Glacia_Pokemon
gText_MatchCallEliteFour_Glacia_Pokemon: @ 0x085F3910
	.string "ひょうてんかの じょうねつ!{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Pokemon) > 0xf
	.error "gText_MatchCallEliteFour_Glacia_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Glacia_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:378 gText_MatchCallEliteFour_Glacia_Intro1
	.globl gText_MatchCallEliteFour_Glacia_Intro1
gText_MatchCallEliteFour_Glacia_Intro1: @ 0x085F391F
	.string "あたたかい とち だからこそ{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Intro1) > 0xf
	.error "gText_MatchCallEliteFour_Glacia_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Glacia_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:379 gText_MatchCallEliteFour_Glacia_Intro2
	.globl gText_MatchCallEliteFour_Glacia_Intro2
gText_MatchCallEliteFour_Glacia_Intro2: @ 0x085F392E
	.string "こおりタイプが きたえられる!{EOS}"
	.if (. - gText_MatchCallEliteFour_Glacia_Intro2) > 0x10
	.error "gText_MatchCallEliteFour_Glacia_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Glacia_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Glacia_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:381 gText_MatchCallEliteFour_Drake_Strategy
	.globl gText_MatchCallEliteFour_Drake_Strategy
gText_MatchCallEliteFour_Drake_Strategy: @ 0x085F393E
	.string "たかい のうりょくで せめる!{EOS}"
	.if (. - gText_MatchCallEliteFour_Drake_Strategy) > 0x10
	.error "gText_MatchCallEliteFour_Drake_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Drake_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Drake_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:382 gText_MatchCallEliteFour_Drake_Pokemon
	.globl gText_MatchCallEliteFour_Drake_Pokemon
gText_MatchCallEliteFour_Drake_Pokemon: @ 0x085F394E
	.string "ドラゴンタイプの そこぢから!{EOS}"
	.if (. - gText_MatchCallEliteFour_Drake_Pokemon) > 0x10
	.error "gText_MatchCallEliteFour_Drake_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Drake_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallEliteFour_Drake_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:383 gText_MatchCallEliteFour_Drake_Intro1
	.globl gText_MatchCallEliteFour_Drake_Intro1
gText_MatchCallEliteFour_Drake_Intro1: @ 0x085F395E
	.string "いのちを すくって くれた{EOS}"
	.if (. - gText_MatchCallEliteFour_Drake_Intro1) > 0xe
	.error "gText_MatchCallEliteFour_Drake_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Drake_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallEliteFour_Drake_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:384 gText_MatchCallEliteFour_Drake_Intro2
	.globl gText_MatchCallEliteFour_Drake_Intro2
gText_MatchCallEliteFour_Drake_Intro2: @ 0x085F396C
	.string "ポケモンに すべてを そそぐ{EOS}"
	.if (. - gText_MatchCallEliteFour_Drake_Intro2) > 0xf
	.error "gText_MatchCallEliteFour_Drake_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallEliteFour_Drake_Intro2) < 0xf
	.space 0xf - (. - gText_MatchCallEliteFour_Drake_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:386 gText_MatchCallChampion_Wallace_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallChampion_Wallace_Strategy
gText_MatchCallChampion_Wallace_Strategy: @ 0x085F397B
	.string "つつしんで おあいて します{EOS}"
	.if (. - gText_MatchCallChampion_Wallace_Strategy) != 0xf
	.error "gText_MatchCallChampion_Wallace_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:387 gText_MatchCallChampion_Wallace_Pokemon
	.globl gText_MatchCallChampion_Wallace_Pokemon
gText_MatchCallChampion_Wallace_Pokemon: @ 0x085F398A
	.string "ゆうがな ポケモンが すき{EOS}"
	.if (. - gText_MatchCallChampion_Wallace_Pokemon) > 0xe
	.error "gText_MatchCallChampion_Wallace_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallChampion_Wallace_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallChampion_Wallace_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:388 gText_MatchCallChampion_Wallace_Intro1
	.globl gText_MatchCallChampion_Wallace_Intro1
gText_MatchCallChampion_Wallace_Intro1: @ 0x085F3998
	.string "ちせいと うつくしさを{EOS}"
	.if (. - gText_MatchCallChampion_Wallace_Intro1) > 0xc
	.error "gText_MatchCallChampion_Wallace_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallChampion_Wallace_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallChampion_Wallace_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:389 gText_MatchCallChampion_Wallace_Intro2
	.globl gText_MatchCallChampion_Wallace_Intro2
gText_MatchCallChampion_Wallace_Intro2: @ 0x085F39A4
	.string "かねそなえた わたし……{EOS}"
	.if (. - gText_MatchCallChampion_Wallace_Intro2) > 0xd
	.error "gText_MatchCallChampion_Wallace_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallChampion_Wallace_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallChampion_Wallace_Intro2)
	.endif
	.space 0x3, 0x00

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

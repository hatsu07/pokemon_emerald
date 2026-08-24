	@ src/data/text/match_call_messages.h:347 gText_MatchCallReliableOne_Dad_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallReliableOne_Dad_Pokemon
gText_MatchCallReliableOne_Dad_Pokemon: @ 0x085F37B6
	.string "バランスよく そだてている{EOS}"
	.if (. - gText_MatchCallReliableOne_Dad_Pokemon) != 0xe
	.error "gText_MatchCallReliableOne_Dad_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F37C0
	.set gText_Rom_5F37C0, gText_MatchCallReliableOne_Dad_Pokemon + 0xa

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
	.globl gText_Rom_5F3807
	.set gText_Rom_5F3807, gText_MatchCallSkyTamer_Winona_Intro1 + 0xb

	@ src/data/text/match_call_messages.h:354 gText_MatchCallSkyTamer_Winona_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSkyTamer_Winona_Intro2
gText_MatchCallSkyTamer_Winona_Intro2: @ 0x085F380B
	.string "くらすことが いちばん{EOS}"
	.if (. - gText_MatchCallSkyTamer_Winona_Intro2) != 0xc
	.error "gText_MatchCallSkyTamer_Winona_Intro2 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3812
	.set gText_Rom_5F3812, gText_MatchCallSkyTamer_Winona_Intro2 + 0x7

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
	.globl gText_Rom_5F385C
	.set gText_Rom_5F385C, gText_MatchCallDandyCharm_Juan_Strategy + 0xa

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


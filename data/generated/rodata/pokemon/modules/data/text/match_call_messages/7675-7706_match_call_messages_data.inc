	@ src/data/text/match_call_messages.h:347 gText_MatchCallReliableOne_Dad_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F37B6
gText_Rom_5F37B6: @ 0x085F37B6
	.string "バランスよく そだてている{EOS}"
	.if (. - gText_Rom_5F37B6) != 0xe
	.error "gText_Rom_5F37B6 must retain its original byte length"
	.endif
	.globl gText_Rom_5F37C0
	.set gText_Rom_5F37C0, gText_Rom_5F37B6 + 0xa

	@ src/data/text/match_call_messages.h:348 gText_MatchCallReliableOne_Dad_Intro1
	.globl gText_Rom_5F37C4
gText_Rom_5F37C4: @ 0x085F37C4
	.string "いえから とほで 30ぷん{EOS}"
	.if (. - gText_Rom_5F37C4) > 0xe
	.error "gText_Rom_5F37C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37C4) < 0xe
	.space 0xe - (. - gText_Rom_5F37C4)
	.endif

	@ src/data/text/match_call_messages.h:349 gText_MatchCallReliableOne_Dad_Intro2
	.globl gText_Rom_5F37D2
gText_Rom_5F37D2: @ 0x085F37D2
	.string "まいにち かよっています{EOS}"
	.if (. - gText_Rom_5F37D2) > 0xd
	.error "gText_Rom_5F37D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37D2) < 0xd
	.space 0xd - (. - gText_Rom_5F37D2)
	.endif

	@ src/data/text/match_call_messages.h:351 gText_MatchCallSkyTamer_Winona_Strategy
	.globl gText_Rom_5F37DF
gText_Rom_5F37DF: @ 0x085F37DF
	.string "スピードを いかして たたかう{EOS}"
	.if (. - gText_Rom_5F37DF) > 0x10
	.error "gText_Rom_5F37DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37DF) < 0x10
	.space 0x10 - (. - gText_Rom_5F37DF)
	.endif

	@ src/data/text/match_call_messages.h:352 gText_MatchCallSkyTamer_Winona_Pokemon
	.globl gText_Rom_5F37EF
gText_Rom_5F37EF: @ 0x085F37EF
	.string "かれいに そらを まう!{EOS}"
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
	.string "しぜんと いったいに なって{EOS}"
	.if (. - gText_Rom_5F37FC) != 0xf
	.error "gText_Rom_5F37FC must retain its original byte length"
	.endif
	.globl gText_Rom_5F3807
	.set gText_Rom_5F3807, gText_Rom_5F37FC + 0xb

	@ src/data/text/match_call_messages.h:354 gText_MatchCallSkyTamer_Winona_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F380B
gText_Rom_5F380B: @ 0x085F380B
	.string "くらすことが いちばん{EOS}"
	.if (. - gText_Rom_5F380B) != 0xc
	.error "gText_Rom_5F380B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3812
	.set gText_Rom_5F3812, gText_Rom_5F380B + 0x7

	@ src/data/text/match_call_messages.h:356 gText_MatchCallMysticDuo_TateAndLiza_Strategy
	.globl gText_Rom_5F3817
gText_Rom_5F3817: @ 0x085F3817
	.string "ふたりで きょうりょく!{EOS}"
	.if (. - gText_Rom_5F3817) > 0xd
	.error "gText_Rom_5F3817 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3817) < 0xd
	.space 0xd - (. - gText_Rom_5F3817)
	.endif

	@ src/data/text/match_call_messages.h:357 gText_MatchCallMysticDuo_TateAndLiza_Pokemon
	.globl gText_Rom_5F3824
gText_Rom_5F3824: @ 0x085F3824
	.string "いつも なかよしの ポケモン!{EOS}"
	.if (. - gText_Rom_5F3824) > 0x10
	.error "gText_Rom_5F3824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3824) < 0x10
	.space 0x10 - (. - gText_Rom_5F3824)
	.endif

	@ src/data/text/match_call_messages.h:358 gText_MatchCallMysticDuo_TateAndLiza_Intro1
	.globl gText_Rom_5F3834
gText_Rom_5F3834: @ 0x085F3834
	.string "おとうさんは わたしたちの{EOS}"
	.if (. - gText_Rom_5F3834) > 0xe
	.error "gText_Rom_5F3834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3834) < 0xe
	.space 0xe - (. - gText_Rom_5F3834)
	.endif

	@ src/data/text/match_call_messages.h:359 gText_MatchCallMysticDuo_TateAndLiza_Intro2
	.globl gText_Rom_5F3842
gText_Rom_5F3842: @ 0x085F3842
	.string "くべつが つかなく なるのよ!{EOS}"
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
	.string "すばらしき みずの ちから{EOS}"
	.if (. - gText_Rom_5F3852) != 0xe
	.error "gText_Rom_5F3852 must retain its original byte length"
	.endif
	.globl gText_Rom_5F385C
	.set gText_Rom_5F385C, gText_Rom_5F3852 + 0xa

	@ src/data/text/match_call_messages.h:362 gText_MatchCallDandyCharm_Juan_Pokemon
	.globl gText_Rom_5F3860
gText_Rom_5F3860: @ 0x085F3860
	.string "エレガントな ポケモンたち!{EOS}"
	.if (. - gText_Rom_5F3860) > 0xf
	.error "gText_Rom_5F3860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3860) < 0xf
	.space 0xf - (. - gText_Rom_5F3860)
	.endif

	@ src/data/text/match_call_messages.h:363 gText_MatchCallDandyCharm_Juan_Intro1
	.globl gText_Rom_5F386F
gText_Rom_5F386F: @ 0x085F386F
	.string "うつくしいレディの せいえんが{EOS}"
	.if (. - gText_Rom_5F386F) > 0x10
	.error "gText_Rom_5F386F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F386F) < 0x10
	.space 0x10 - (. - gText_Rom_5F386F)
	.endif


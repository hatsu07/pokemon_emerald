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

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
	.globl gText_Rom_5F2DBC
	.set gText_Rom_5F2DBC, gText_MatchCallOldCouple_JohnAndJay_Pokemon + 0xb

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
	.globl gText_Rom_5F2DDC
gText_Rom_5F2DDC: @ 0x085F2DDC
	.string "たたみかける ような こうげき{EOS}"
	.if (. - gText_Rom_5F2DDC) != 0x10
	.error "gText_Rom_5F2DDC must retain its original byte length"
	.endif
	.globl gText_Rom_5F2DE7
	.set gText_Rom_5F2DE7, gText_Rom_5F2DDC + 0xb

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
	.globl gText_Rom_5F2E08
	.set gText_Rom_5F2E08, gText_MatchCallBugManiac_Jeffrey_Intro1 + 0xc

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
	.globl gText_Rom_5F2E64
	.set gText_Rom_5F2E64, gText_MatchCallPsychic_Jacki_Pokemon + 0x8


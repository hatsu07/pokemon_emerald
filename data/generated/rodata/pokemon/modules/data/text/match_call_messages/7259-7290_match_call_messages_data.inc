	@ src/data/text/match_call_messages.h:111 gText_MatchCallOldCouple_JohnAndJay_Strategy
	.globl gText_Rom_5F2DA3
gText_Rom_5F2DA3: @ 0x085F2DA3
	.string "ふうふの あいで かつのよ{EOS}"
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
	.string "ながねん いっしょの ポケモン{EOS}"
	.if (. - gText_Rom_5F2DB1) != 0x10
	.error "gText_Rom_5F2DB1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2DBC
	.set gText_Rom_5F2DBC, gText_Rom_5F2DB1 + 0xb

	@ src/data/text/match_call_messages.h:113 gText_MatchCallOldCouple_JohnAndJay_Intro1
	.globl gText_Rom_5F2DC1
gText_Rom_5F2DC1: @ 0x085F2DC1
	.string "けっこんして 50ねん{EOS}"
	.if (. - gText_Rom_5F2DC1) > 0xc
	.error "gText_Rom_5F2DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DC1) < 0xc
	.space 0xc - (. - gText_Rom_5F2DC1)
	.endif

	@ src/data/text/match_call_messages.h:114 gText_MatchCallOldCouple_JohnAndJay_Intro2
	.globl gText_Rom_5F2DCD
gText_Rom_5F2DCD: @ 0x085F2DCD
	.string "ポケモン そだてまくりじゃよ{EOS}"
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
	.string "たたみかける ような こうげき{EOS}"
	.if (. - gText_Rom_5F2DDC) != 0x10
	.error "gText_Rom_5F2DDC must retain its original byte length"
	.endif
	.globl gText_Rom_5F2DE7
	.set gText_Rom_5F2DE7, gText_Rom_5F2DDC + 0xb

	@ src/data/text/match_call_messages.h:117 gText_MatchCallBugManiac_Jeffrey_Pokemon
	.globl gText_Rom_5F2DEC
gText_Rom_5F2DEC: @ 0x085F2DEC
	.string "むしポケモンって かっこいいぜ{EOS}"
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
	.string "まいにち…… もりに はいって{EOS}"
	.if (. - gText_Rom_5F2DFC) != 0x10
	.error "gText_Rom_5F2DFC must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E08
	.set gText_Rom_5F2E08, gText_Rom_5F2DFC + 0xc

	@ src/data/text/match_call_messages.h:119 gText_MatchCallBugManiac_Jeffrey_Intro2
	.globl gText_Rom_5F2E0C
gText_Rom_5F2E0C: @ 0x085F2E0C
	.string "むしポケモン つかまえる……{EOS}"
	.if (. - gText_Rom_5F2E0C) > 0xf
	.error "gText_Rom_5F2E0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E0C) < 0xf
	.space 0xf - (. - gText_Rom_5F2E0C)
	.endif

	@ src/data/text/match_call_messages.h:121 gText_MatchCallPsychic_Cameron_Strategy
	.globl gText_Rom_5F2E1B
gText_Rom_5F2E1B: @ 0x085F2E1B
	.string "あいてを ほんろう させる{EOS}"
	.if (. - gText_Rom_5F2E1B) > 0xe
	.error "gText_Rom_5F2E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E1B) < 0xe
	.space 0xe - (. - gText_Rom_5F2E1B)
	.endif

	@ src/data/text/match_call_messages.h:122 gText_MatchCallPsychic_Cameron_Pokemon
	.globl gText_Rom_5F2E29
gText_Rom_5F2E29: @ 0x085F2E29
	.string "ふしぎな ちからを もつ ヤツ{EOS}"
	.if (. - gText_Rom_5F2E29) > 0x10
	.error "gText_Rom_5F2E29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E29) < 0x10
	.space 0x10 - (. - gText_Rom_5F2E29)
	.endif

	@ src/data/text/match_call_messages.h:123 gText_MatchCallPsychic_Cameron_Intro1
	.globl gText_Rom_5F2E39
gText_Rom_5F2E39: @ 0x085F2E39
	.string "おまえの かんがえは{EOS}"
	.if (. - gText_Rom_5F2E39) > 0xb
	.error "gText_Rom_5F2E39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E39) < 0xb
	.space 0xb - (. - gText_Rom_5F2E39)
	.endif

	@ src/data/text/match_call_messages.h:124 gText_MatchCallPsychic_Cameron_Intro2
	.globl gText_Rom_5F2E44
gText_Rom_5F2E44: @ 0x085F2E44
	.string "すべて おみとおしだ!{EOS}"
	.if (. - gText_Rom_5F2E44) > 0xc
	.error "gText_Rom_5F2E44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E44) < 0xc
	.space 0xc - (. - gText_Rom_5F2E44)
	.endif

	@ src/data/text/match_call_messages.h:126 gText_MatchCallPsychic_Jacki_Strategy
	.globl gText_Rom_5F2E50
gText_Rom_5F2E50: @ 0x085F2E50
	.string "フルパワーで たたかう{EOS}"
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
	.string "ナゾの おおい ポケモン{EOS}"
	.if (. - gText_Rom_5F2E5C) != 0xd
	.error "gText_Rom_5F2E5C must retain its original byte length"
	.endif
	.globl gText_Rom_5F2E64
	.set gText_Rom_5F2E64, gText_Rom_5F2E5C + 0x8


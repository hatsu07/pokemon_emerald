	.globl gText_Rom_5F3498
	.set gText_Rom_5F3498, gText_MatchCallPkmnBreeder_Lydia_Pokemon + 0xb

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
	.globl gText_Rom_5F3505
	.set gText_Rom_5F3505, gText_MatchCallPkmnBreeder_Gabrielle_Pokemon + 0xa

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
	.globl gText_Rom_5F3547
	.set gText_Rom_5F3547, gText_MatchCallPkmnRanger_Catherine_Intro1 + 0x6

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


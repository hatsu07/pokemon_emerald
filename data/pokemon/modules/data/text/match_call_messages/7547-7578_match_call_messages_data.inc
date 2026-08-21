	.globl gText_Rom_5F3498
	.set gText_Rom_5F3498, gText_Rom_5F348D + 0xb

	@ src/data/text/match_call_messages.h:273 gText_MatchCallPkmnBreeder_Lydia_Intro1
	.globl gText_Rom_5F349C
gText_Rom_5F349C: @ 0x085F349C
	.string "ポケモンを そだてる コツは{EOS}"
	.if (. - gText_Rom_5F349C) > 0xf
	.error "gText_Rom_5F349C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F349C) < 0xf
	.space 0xf - (. - gText_Rom_5F349C)
	.endif

	@ src/data/text/match_call_messages.h:274 gText_MatchCallPkmnBreeder_Lydia_Intro2
	.globl gText_Rom_5F34AB
gText_Rom_5F34AB: @ 0x085F34AB
	.string "ちしきと あいじょうよ!{EOS}"
	.if (. - gText_Rom_5F34AB) > 0xd
	.error "gText_Rom_5F34AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34AB) < 0xd
	.space 0xd - (. - gText_Rom_5F34AB)
	.endif

	@ src/data/text/match_call_messages.h:276 gText_MatchCallPkmnBreeder_Isaac_Strategy
	.globl gText_Rom_5F34B8
gText_Rom_5F34B8: @ 0x085F34B8
	.string "がんがん おします!{EOS}"
	.if (. - gText_Rom_5F34B8) > 0xb
	.error "gText_Rom_5F34B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34B8) < 0xb
	.space 0xb - (. - gText_Rom_5F34B8)
	.endif

	@ src/data/text/match_call_messages.h:277 gText_MatchCallPkmnBreeder_Isaac_Pokemon
	.globl gText_Rom_5F34C3
gText_Rom_5F34C3: @ 0x085F34C3
	.string "なんでも そだてる{EOS}"
	.if (. - gText_Rom_5F34C3) > 0xa
	.error "gText_Rom_5F34C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34C3) < 0xa
	.space 0xa - (. - gText_Rom_5F34C3)
	.endif

	@ src/data/text/match_call_messages.h:278 gText_MatchCallPkmnBreeder_Isaac_Intro1
	.globl gText_Rom_5F34CD
gText_Rom_5F34CD: @ 0x085F34CD
	.string "ポロックを たくさん あたえて{EOS}"
	.if (. - gText_Rom_5F34CD) > 0x10
	.error "gText_Rom_5F34CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34CD) < 0x10
	.space 0x10 - (. - gText_Rom_5F34CD)
	.endif

	@ src/data/text/match_call_messages.h:279 gText_MatchCallPkmnBreeder_Isaac_Intro2
	.globl gText_Rom_5F34DD
gText_Rom_5F34DD: @ 0x085F34DD
	.string "コンテストも ねらってます{EOS}"
	.if (. - gText_Rom_5F34DD) > 0xe
	.error "gText_Rom_5F34DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34DD) < 0xe
	.space 0xe - (. - gText_Rom_5F34DD)
	.endif

	@ src/data/text/match_call_messages.h:281 gText_MatchCallPkmnBreeder_Gabrielle_Strategy
	.globl gText_Rom_5F34EB
gText_Rom_5F34EB: @ 0x085F34EB
	.string "たいせつに そだてて いるのよ{EOS}"
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
	.string "そだてがいの ある ポケモン{EOS}"
	.if (. - gText_Rom_5F34FB) != 0xf
	.error "gText_Rom_5F34FB must retain its original byte length"
	.endif
	.globl gText_Rom_5F3505
	.set gText_Rom_5F3505, gText_Rom_5F34FB + 0xa

	@ src/data/text/match_call_messages.h:283 gText_MatchCallPkmnBreeder_Gabrielle_Intro1
	.globl gText_Rom_5F350A
gText_Rom_5F350A: @ 0x085F350A
	.string "であった ポケモンは{EOS}"
	.if (. - gText_Rom_5F350A) > 0xb
	.error "gText_Rom_5F350A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F350A) < 0xb
	.space 0xb - (. - gText_Rom_5F350A)
	.endif

	@ src/data/text/match_call_messages.h:284 gText_MatchCallPkmnBreeder_Gabrielle_Intro2
	.globl gText_Rom_5F3515
gText_Rom_5F3515: @ 0x085F3515
	.string "たいせつに して くださいね{EOS}"
	.if (. - gText_Rom_5F3515) > 0xf
	.error "gText_Rom_5F3515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3515) < 0xf
	.space 0xf - (. - gText_Rom_5F3515)
	.endif

	@ src/data/text/match_call_messages.h:286 gText_MatchCallPkmnRanger_Catherine_Strategy
	.globl gText_Rom_5F3524
gText_Rom_5F3524: @ 0x085F3524
	.string "ポケモンの ちからを しんじる{EOS}"
	.if (. - gText_Rom_5F3524) > 0x10
	.error "gText_Rom_5F3524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3524) < 0x10
	.space 0x10 - (. - gText_Rom_5F3524)
	.endif

	@ src/data/text/match_call_messages.h:287 gText_MatchCallPkmnRanger_Catherine_Pokemon
	.globl gText_Rom_5F3534
gText_Rom_5F3534: @ 0x085F3534
	.string "つよい ポケモンが すき{EOS}"
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
	.string "ポケモンと いっしょに{EOS}"
	.if (. - gText_Rom_5F3541) != 0xc
	.error "gText_Rom_5F3541 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3547
	.set gText_Rom_5F3547, gText_Rom_5F3541 + 0x6

	@ src/data/text/match_call_messages.h:289 gText_MatchCallPkmnRanger_Catherine_Intro2
	.globl gText_Rom_5F354D
gText_Rom_5F354D: @ 0x085F354D
	.string "きゅうじょくんれんを してるの{EOS}"
	.if (. - gText_Rom_5F354D) > 0x10
	.error "gText_Rom_5F354D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F354D) < 0x10
	.space 0x10 - (. - gText_Rom_5F354D)
	.endif


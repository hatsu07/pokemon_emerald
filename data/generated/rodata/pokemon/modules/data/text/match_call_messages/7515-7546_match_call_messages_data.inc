	@ src/data/text/match_call_messages.h:254 gText_MatchCallTwins_AmyAndLiv_Intro2
	.globl gText_Rom_5F33C8
gText_Rom_5F33C8: @ 0x085F33C8
	.string "デザートの このみは ちがうよ{EOS}"
	.if (. - gText_Rom_5F33C8) > 0x10
	.error "gText_Rom_5F33C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33C8) < 0x10
	.space 0x10 - (. - gText_Rom_5F33C8)
	.endif

	@ src/data/text/match_call_messages.h:256 gText_MatchCallSailor_Ernest_Strategy
	.globl gText_Rom_5F33D8
gText_Rom_5F33D8: @ 0x085F33D8
	.string "ちからで おしまくるぜ{EOS}"
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
	.string "みずと かくとうタイプ{EOS}"
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
	.string "うみの おとこは きが あらい{EOS}"
	.if (. - gText_Rom_5F33F0) > 0x10
	.error "gText_Rom_5F33F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33F0) < 0x10
	.space 0x10 - (. - gText_Rom_5F33F0)
	.endif

	@ src/data/text/match_call_messages.h:259 gText_MatchCallSailor_Ernest_Intro2
	.globl gText_Rom_5F3400
gText_Rom_5F3400: @ 0x085F3400
	.string "もんく あるか こらー!{EOS}"
	.if (. - gText_Rom_5F3400) > 0xd
	.error "gText_Rom_5F3400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3400) < 0xd
	.space 0xd - (. - gText_Rom_5F3400)
	.endif

	@ src/data/text/match_call_messages.h:261 gText_MatchCallSailor_Cory_Strategy
	.globl gText_Rom_5F340D
gText_Rom_5F340D: @ 0x085F340D
	.string "ケンカ じょうとう!{EOS}"
	.if (. - gText_Rom_5F340D) > 0xb
	.error "gText_Rom_5F340D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F340D) < 0xb
	.space 0xb - (. - gText_Rom_5F340D)
	.endif

	@ src/data/text/match_call_messages.h:262 gText_MatchCallSailor_Cory_Pokemon
	.globl gText_Rom_5F3418
gText_Rom_5F3418: @ 0x085F3418
	.string "みずポケモンが すきだー!{EOS}"
	.if (. - gText_Rom_5F3418) > 0xe
	.error "gText_Rom_5F3418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3418) < 0xe
	.space 0xe - (. - gText_Rom_5F3418)
	.endif

	@ src/data/text/match_call_messages.h:263 gText_MatchCallSailor_Cory_Intro1
	.globl gText_Rom_5F3426
gText_Rom_5F3426: @ 0x085F3426
	.string "おおきな こえを だすときは{EOS}"
	.if (. - gText_Rom_5F3426) > 0xf
	.error "gText_Rom_5F3426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3426) < 0xf
	.space 0xf - (. - gText_Rom_5F3426)
	.endif

	@ src/data/text/match_call_messages.h:264 gText_MatchCallSailor_Cory_Intro2
	.globl gText_Rom_5F3435
gText_Rom_5F3435: @ 0x085F3435
	.string "おなかで くうきを すうのだ!{EOS}"
	.if (. - gText_Rom_5F3435) > 0x10
	.error "gText_Rom_5F3435 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3435) < 0x10
	.space 0x10 - (. - gText_Rom_5F3435)
	.endif

	@ src/data/text/match_call_messages.h:266 gText_MatchCallCollector_Edwin_Strategy
	.globl gText_Rom_5F3445
gText_Rom_5F3445: @ 0x085F3445
	.string "ポケモンを キズつけないように{EOS}"
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
	.string "めずらしい ポケモン だいすき{EOS}"
	.if (. - gText_Rom_5F3455) != 0x10
	.error "gText_Rom_5F3455 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3460
	.set gText_Rom_5F3460, gText_Rom_5F3455 + 0xb

	@ src/data/text/match_call_messages.h:268 gText_MatchCallCollector_Edwin_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3465
gText_Rom_5F3465: @ 0x085F3465
	.string "せかいじゅうの めずらしい{EOS}"
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
	.string "ポケモンを てにいれたい!{EOS}"
	.if (. - gText_Rom_5F3473) > 0xe
	.error "gText_Rom_5F3473 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3473) < 0xe
	.space 0xe - (. - gText_Rom_5F3473)
	.endif

	@ src/data/text/match_call_messages.h:271 gText_MatchCallPkmnBreeder_Lydia_Strategy
	.globl gText_Rom_5F3481
gText_Rom_5F3481: @ 0x085F3481
	.string "つよきで たたかいます{EOS}"
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
	.string "ポケモンは じぶんの こども{EOS}"
	.if (. - gText_Rom_5F348D) != 0xf
	.error "gText_Rom_5F348D must retain its original byte length"
	.endif

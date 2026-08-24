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

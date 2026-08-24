	@ src/data/text/match_call_messages.h:73 gText_MatchCallPokeManiac_Steve_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPokeManiac_Steve_Intro1
gText_MatchCallPokeManiac_Steve_Intro1: @ 0x085F2C0F
	.string "おおきくて たくましい{EOS}"
	.if (. - gText_MatchCallPokeManiac_Steve_Intro1) != 0xc
	.error "gText_MatchCallPokeManiac_Steve_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:74 gText_MatchCallPokeManiac_Steve_Intro2
	.globl gText_MatchCallPokeManiac_Steve_Intro2
gText_MatchCallPokeManiac_Steve_Intro2: @ 0x085F2C1B
	.string "ポケモンが さいこう……{EOS}"
	.if (. - gText_MatchCallPokeManiac_Steve_Intro2) > 0xd
	.error "gText_MatchCallPokeManiac_Steve_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPokeManiac_Steve_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPokeManiac_Steve_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:76 gText_MatchCallSwimmer_Tony_Strategy
	.globl gText_MatchCallSwimmer_Tony_Strategy
gText_MatchCallSwimmer_Tony_Strategy: @ 0x085F2C28
	.string "ぜんりょくで ぶつかる!{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Strategy) > 0xd
	.error "gText_MatchCallSwimmer_Tony_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Tony_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallSwimmer_Tony_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:77 gText_MatchCallSwimmer_Tony_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallSwimmer_Tony_Pokemon
gText_MatchCallSwimmer_Tony_Pokemon: @ 0x085F2C35
	.string "いかした みずタイプ{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Pokemon) != 0xb
	.error "gText_MatchCallSwimmer_Tony_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:78 gText_MatchCallSwimmer_Tony_Intro1
	.globl gText_MatchCallSwimmer_Tony_Intro1
gText_MatchCallSwimmer_Tony_Intro1: @ 0x085F2C40
	.string "およげない ときには{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Intro1) > 0xb
	.error "gText_MatchCallSwimmer_Tony_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Tony_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallSwimmer_Tony_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:79 gText_MatchCallSwimmer_Tony_Intro2
	.globl gText_MatchCallSwimmer_Tony_Intro2
gText_MatchCallSwimmer_Tony_Intro2: @ 0x085F2C4B
	.string "きんトレ やってるぜ!{EOS}"
	.if (. - gText_MatchCallSwimmer_Tony_Intro2) > 0xc
	.error "gText_MatchCallSwimmer_Tony_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwimmer_Tony_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallSwimmer_Tony_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:81 gText_MatchCallBlackBelt_Nob_Strategy
	.globl gText_MatchCallBlackBelt_Nob_Strategy
gText_MatchCallBlackBelt_Nob_Strategy: @ 0x085F2C57
	.string "だげきワザで がんがん!{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Strategy) > 0xd
	.error "gText_MatchCallBlackBelt_Nob_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Nob_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallBlackBelt_Nob_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:82 gText_MatchCallBlackBelt_Nob_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBlackBelt_Nob_Pokemon
gText_MatchCallBlackBelt_Nob_Pokemon: @ 0x085F2C64
	.string "かくとうタイプ{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Pokemon) != 0x8
	.error "gText_MatchCallBlackBelt_Nob_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:83 gText_MatchCallBlackBelt_Nob_Intro1
	.globl gText_MatchCallBlackBelt_Nob_Intro1
gText_MatchCallBlackBelt_Nob_Intro1: @ 0x085F2C6C
	.string "じまん じゃないけど{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Intro1) > 0xb
	.error "gText_MatchCallBlackBelt_Nob_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Nob_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallBlackBelt_Nob_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:84 gText_MatchCallBlackBelt_Nob_Intro2
	.globl gText_MatchCallBlackBelt_Nob_Intro2
gText_MatchCallBlackBelt_Nob_Intro2: @ 0x085F2C77
	.string "かわら10まい われるぜ!{EOS}"
	.if (. - gText_MatchCallBlackBelt_Nob_Intro2) > 0xe
	.error "gText_MatchCallBlackBelt_Nob_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Nob_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallBlackBelt_Nob_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:86 gText_MatchCallBlackBelt_Koji_Strategy
	.globl gText_MatchCallBlackBelt_Koji_Strategy
gText_MatchCallBlackBelt_Koji_Strategy: @ 0x085F2C85
	.string "からての ちからを みせてやる{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Strategy) > 0x10
	.error "gText_MatchCallBlackBelt_Koji_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallBlackBelt_Koji_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:87 gText_MatchCallBlackBelt_Koji_Pokemon
	.globl gText_MatchCallBlackBelt_Koji_Pokemon
gText_MatchCallBlackBelt_Koji_Pokemon: @ 0x085F2C95
	.string "おれの れんしゅう あいて!{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Pokemon) > 0xf
	.error "gText_MatchCallBlackBelt_Koji_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallBlackBelt_Koji_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:88 gText_MatchCallBlackBelt_Koji_Intro1
	.globl gText_MatchCallBlackBelt_Koji_Intro1
gText_MatchCallBlackBelt_Koji_Intro1: @ 0x085F2CA4
	.string "おれと はだしで{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Intro1) > 0x9
	.error "gText_MatchCallBlackBelt_Koji_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Intro1) < 0x9
	.space 0x9 - (. - gText_MatchCallBlackBelt_Koji_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:89 gText_MatchCallBlackBelt_Koji_Intro2
	.globl gText_MatchCallBlackBelt_Koji_Intro2
gText_MatchCallBlackBelt_Koji_Intro2: @ 0x085F2CAD
	.string "かたりあって みないか?{EOS}"
	.if (. - gText_MatchCallBlackBelt_Koji_Intro2) > 0xd
	.error "gText_MatchCallBlackBelt_Koji_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBlackBelt_Koji_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallBlackBelt_Koji_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:91 gText_MatchCallGuitarist_Fernando_Strategy
	.globl gText_MatchCallGuitarist_Fernando_Strategy
gText_MatchCallGuitarist_Fernando_Strategy: @ 0x085F2CBA
	.string "しびれる サウンド だゼ!{EOS}"
	.if (. - gText_MatchCallGuitarist_Fernando_Strategy) > 0xe
	.error "gText_MatchCallGuitarist_Fernando_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallGuitarist_Fernando_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallGuitarist_Fernando_Strategy)
	.endif

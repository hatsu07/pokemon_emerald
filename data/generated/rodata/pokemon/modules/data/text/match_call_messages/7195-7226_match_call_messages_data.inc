	@ src/data/text/match_call_messages.h:73 gText_MatchCallPokeManiac_Steve_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C0F
gText_Rom_5F2C0F: @ 0x085F2C0F
	.string "おおきくて たくましい$"
	.if (. - gText_Rom_5F2C0F) != 0xc
	.error "gText_Rom_5F2C0F must retain its original byte length"
	.endif
	.globl gText_Rom_5F2C15
	.set gText_Rom_5F2C15, gText_Rom_5F2C0F + 0x6

	@ src/data/text/match_call_messages.h:74 gText_MatchCallPokeManiac_Steve_Intro2
	.globl gText_Rom_5F2C1B
gText_Rom_5F2C1B: @ 0x085F2C1B
	.string "ポケモンが さいこう……$"
	.if (. - gText_Rom_5F2C1B) > 0xd
	.error "gText_Rom_5F2C1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C1B) < 0xd
	.space 0xd - (. - gText_Rom_5F2C1B)
	.endif

	@ src/data/text/match_call_messages.h:76 gText_MatchCallSwimmer_Tony_Strategy
	.globl gText_Rom_5F2C28
gText_Rom_5F2C28: @ 0x085F2C28
	.string "ぜんりょくで ぶつかる!$"
	.if (. - gText_Rom_5F2C28) > 0xd
	.error "gText_Rom_5F2C28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C28) < 0xd
	.space 0xd - (. - gText_Rom_5F2C28)
	.endif

	@ src/data/text/match_call_messages.h:77 gText_MatchCallSwimmer_Tony_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C35
gText_Rom_5F2C35: @ 0x085F2C35
	.string "いかした みずタイプ$"
	.if (. - gText_Rom_5F2C35) != 0xb
	.error "gText_Rom_5F2C35 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2C3C
	.set gText_Rom_5F2C3C, gText_Rom_5F2C35 + 0x7

	@ src/data/text/match_call_messages.h:78 gText_MatchCallSwimmer_Tony_Intro1
	.globl gText_Rom_5F2C40
gText_Rom_5F2C40: @ 0x085F2C40
	.string "およげない ときには$"
	.if (. - gText_Rom_5F2C40) > 0xb
	.error "gText_Rom_5F2C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C40) < 0xb
	.space 0xb - (. - gText_Rom_5F2C40)
	.endif

	@ src/data/text/match_call_messages.h:79 gText_MatchCallSwimmer_Tony_Intro2
	.globl gText_Rom_5F2C4B
gText_Rom_5F2C4B: @ 0x085F2C4B
	.string "きんトレ やってるぜ!$"
	.if (. - gText_Rom_5F2C4B) > 0xc
	.error "gText_Rom_5F2C4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C4B) < 0xc
	.space 0xc - (. - gText_Rom_5F2C4B)
	.endif

	@ src/data/text/match_call_messages.h:81 gText_MatchCallBlackBelt_Nob_Strategy
	.globl gText_Rom_5F2C57
gText_Rom_5F2C57: @ 0x085F2C57
	.string "だげきワザで がんがん!$"
	.if (. - gText_Rom_5F2C57) > 0xd
	.error "gText_Rom_5F2C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C57) < 0xd
	.space 0xd - (. - gText_Rom_5F2C57)
	.endif

	@ src/data/text/match_call_messages.h:82 gText_MatchCallBlackBelt_Nob_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C64
gText_Rom_5F2C64: @ 0x085F2C64
	.string "かくとうタイプ$"
	.if (. - gText_Rom_5F2C64) != 0x8
	.error "gText_Rom_5F2C64 must retain its original byte length"
	.endif
	.globl gText_Rom_5F2C68
	.set gText_Rom_5F2C68, gText_Rom_5F2C64 + 0x4

	@ src/data/text/match_call_messages.h:83 gText_MatchCallBlackBelt_Nob_Intro1
	.globl gText_Rom_5F2C6C
gText_Rom_5F2C6C: @ 0x085F2C6C
	.string "じまん じゃないけど$"
	.if (. - gText_Rom_5F2C6C) > 0xb
	.error "gText_Rom_5F2C6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C6C) < 0xb
	.space 0xb - (. - gText_Rom_5F2C6C)
	.endif

	@ src/data/text/match_call_messages.h:84 gText_MatchCallBlackBelt_Nob_Intro2
	.globl gText_Rom_5F2C77
gText_Rom_5F2C77: @ 0x085F2C77
	.string "かわら10まい われるぜ!$"
	.if (. - gText_Rom_5F2C77) > 0xe
	.error "gText_Rom_5F2C77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C77) < 0xe
	.space 0xe - (. - gText_Rom_5F2C77)
	.endif

	@ src/data/text/match_call_messages.h:86 gText_MatchCallBlackBelt_Koji_Strategy
	.globl gText_Rom_5F2C85
gText_Rom_5F2C85: @ 0x085F2C85
	.string "からての ちからを みせてやる$"
	.if (. - gText_Rom_5F2C85) > 0x10
	.error "gText_Rom_5F2C85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C85) < 0x10
	.space 0x10 - (. - gText_Rom_5F2C85)
	.endif

	@ src/data/text/match_call_messages.h:87 gText_MatchCallBlackBelt_Koji_Pokemon
	.globl gText_Rom_5F2C95
gText_Rom_5F2C95: @ 0x085F2C95
	.string "おれの れんしゅう あいて!$"
	.if (. - gText_Rom_5F2C95) > 0xf
	.error "gText_Rom_5F2C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C95) < 0xf
	.space 0xf - (. - gText_Rom_5F2C95)
	.endif

	@ src/data/text/match_call_messages.h:88 gText_MatchCallBlackBelt_Koji_Intro1
	.globl gText_Rom_5F2CA4
gText_Rom_5F2CA4: @ 0x085F2CA4
	.string "おれと はだしで$"
	.if (. - gText_Rom_5F2CA4) > 0x9
	.error "gText_Rom_5F2CA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CA4) < 0x9
	.space 0x9 - (. - gText_Rom_5F2CA4)
	.endif

	@ src/data/text/match_call_messages.h:89 gText_MatchCallBlackBelt_Koji_Intro2
	.globl gText_Rom_5F2CAD
gText_Rom_5F2CAD: @ 0x085F2CAD
	.string "かたりあって みないか?$"
	.if (. - gText_Rom_5F2CAD) > 0xd
	.error "gText_Rom_5F2CAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CAD) < 0xd
	.space 0xd - (. - gText_Rom_5F2CAD)
	.endif

	@ src/data/text/match_call_messages.h:91 gText_MatchCallGuitarist_Fernando_Strategy
	.globl gText_Rom_5F2CBA
gText_Rom_5F2CBA: @ 0x085F2CBA
	.string "しびれる サウンド だゼ!$"
	.if (. - gText_Rom_5F2CBA) > 0xe
	.error "gText_Rom_5F2CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2CBA) < 0xe
	.space 0xe - (. - gText_Rom_5F2CBA)
	.endif

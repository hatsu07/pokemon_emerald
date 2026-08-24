
	@ src/data/text/match_call_messages.h:201 gText_MatchCallTriathlete_Katelyn_Strategy
	.globl gText_MatchCallTriathlete_Katelyn_Strategy
gText_MatchCallTriathlete_Katelyn_Strategy: @ 0x085F317D
	.string "がんがん せめまくる!{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Strategy) > 0xc
	.error "gText_MatchCallTriathlete_Katelyn_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Katelyn_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:202 gText_MatchCallTriathlete_Katelyn_Pokemon
	.globl gText_MatchCallTriathlete_Katelyn_Pokemon
gText_MatchCallTriathlete_Katelyn_Pokemon: @ 0x085F3189
	.string "みずポケモン さいこう!{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Pokemon) > 0xd
	.error "gText_MatchCallTriathlete_Katelyn_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallTriathlete_Katelyn_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:203 gText_MatchCallTriathlete_Katelyn_Intro1
	.globl gText_MatchCallTriathlete_Katelyn_Intro1
gText_MatchCallTriathlete_Katelyn_Intro1: @ 0x085F3196
	.string "まいにち 10キロは{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro1) > 0xb
	.error "gText_MatchCallTriathlete_Katelyn_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Katelyn_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:204 gText_MatchCallTriathlete_Katelyn_Intro2
	.globl gText_MatchCallTriathlete_Katelyn_Intro2
gText_MatchCallTriathlete_Katelyn_Intro2: @ 0x085F31A1
	.string "およいでいるわね!{EOS}"
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro2) > 0xa
	.error "gText_MatchCallTriathlete_Katelyn_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Katelyn_Intro2) < 0xa
	.space 0xa - (. - gText_MatchCallTriathlete_Katelyn_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:206 gText_MatchCallTriathlete_Benjamin_Strategy
	.globl gText_MatchCallTriathlete_Benjamin_Strategy
gText_MatchCallTriathlete_Benjamin_Strategy: @ 0x085F31AB
	.string "おして おしまくる さくせん!{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Strategy) > 0x10
	.error "gText_MatchCallTriathlete_Benjamin_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Benjamin_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Benjamin_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:207 gText_MatchCallTriathlete_Benjamin_Pokemon
	.globl gText_MatchCallTriathlete_Benjamin_Pokemon
gText_MatchCallTriathlete_Benjamin_Pokemon: @ 0x085F31BB
	.string "はがねの つよさを みせてやる{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Pokemon) > 0x10
	.error "gText_MatchCallTriathlete_Benjamin_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Benjamin_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Benjamin_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:208 gText_MatchCallTriathlete_Benjamin_Intro1
	.globl gText_MatchCallTriathlete_Benjamin_Intro1
gText_MatchCallTriathlete_Benjamin_Intro1: @ 0x085F31CB
	.string "あせを かいたら こまめに{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Intro1) > 0xe
	.error "gText_MatchCallTriathlete_Benjamin_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Benjamin_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallTriathlete_Benjamin_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:209 gText_MatchCallTriathlete_Benjamin_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Benjamin_Intro2
gText_MatchCallTriathlete_Benjamin_Intro2: @ 0x085F31D9
	.string "すいぶんを ほきゅうしよう!{EOS}"
	.if (. - gText_MatchCallTriathlete_Benjamin_Intro2) != 0xf
	.error "gText_MatchCallTriathlete_Benjamin_Intro2 must retain its original byte length"
	.endif
	.globl gText_Rom_5F31E3
	.set gText_Rom_5F31E3, gText_MatchCallTriathlete_Benjamin_Intro2 + 0xa

	@ src/data/text/match_call_messages.h:211 gText_MatchCallTriathlete_Pablo_Strategy
	.globl gText_MatchCallTriathlete_Pablo_Strategy
gText_MatchCallTriathlete_Pablo_Strategy: @ 0x085F31E8
	.string "みずの ちからを ひきだす!{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Strategy) > 0xf
	.error "gText_MatchCallTriathlete_Pablo_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallTriathlete_Pablo_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:212 gText_MatchCallTriathlete_Pablo_Pokemon
	.globl gText_MatchCallTriathlete_Pablo_Pokemon
gText_MatchCallTriathlete_Pablo_Pokemon: @ 0x085F31F7
	.string "きたえぬかれた みずポケモン!{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Pokemon) > 0x10
	.error "gText_MatchCallTriathlete_Pablo_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallTriathlete_Pablo_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:213 gText_MatchCallTriathlete_Pablo_Intro1
	.globl gText_MatchCallTriathlete_Pablo_Intro1
gText_MatchCallTriathlete_Pablo_Intro1: @ 0x085F3207
	.string "ポケモンも いいけど{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Intro1) > 0xb
	.error "gText_MatchCallTriathlete_Pablo_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Pablo_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:214 gText_MatchCallTriathlete_Pablo_Intro2
	.globl gText_MatchCallTriathlete_Pablo_Intro2
gText_MatchCallTriathlete_Pablo_Intro2: @ 0x085F3212
	.string "からだも きたえよう!{EOS}"
	.if (. - gText_MatchCallTriathlete_Pablo_Intro2) > 0xc
	.error "gText_MatchCallTriathlete_Pablo_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Pablo_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Pablo_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:216 gText_MatchCallDragonTamer_Nicolas_Strategy
	.globl gText_MatchCallDragonTamer_Nicolas_Strategy
gText_MatchCallDragonTamer_Nicolas_Strategy: @ 0x085F321E
	.string "ポケモンの パワーが すべて!{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Strategy) > 0x10
	.error "gText_MatchCallDragonTamer_Nicolas_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallDragonTamer_Nicolas_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:217 gText_MatchCallDragonTamer_Nicolas_Pokemon
	.globl gText_MatchCallDragonTamer_Nicolas_Pokemon
gText_MatchCallDragonTamer_Nicolas_Pokemon: @ 0x085F322E
	.string "ドラゴンの つよさを みろ!{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Pokemon) > 0xf
	.error "gText_MatchCallDragonTamer_Nicolas_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallDragonTamer_Nicolas_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:218 gText_MatchCallDragonTamer_Nicolas_Intro1
	.globl gText_MatchCallDragonTamer_Nicolas_Intro1
gText_MatchCallDragonTamer_Nicolas_Intro1: @ 0x085F323D
	.string "いつか さいきょうでんせつを{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro1) > 0xf
	.error "gText_MatchCallDragonTamer_Nicolas_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallDragonTamer_Nicolas_Intro1)
	.endif


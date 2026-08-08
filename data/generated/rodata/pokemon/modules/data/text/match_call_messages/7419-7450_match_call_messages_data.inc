
	@ src/data/text/match_call_messages.h:201 gText_MatchCallTriathlete_Katelyn_Strategy
	.globl gText_Rom_5F317D
gText_Rom_5F317D: @ 0x085F317D
	.string "がんがん せめまくる!$"
	.if (. - gText_Rom_5F317D) > 0xc
	.error "gText_Rom_5F317D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F317D) < 0xc
	.space 0xc - (. - gText_Rom_5F317D)
	.endif

	@ src/data/text/match_call_messages.h:202 gText_MatchCallTriathlete_Katelyn_Pokemon
	.globl gText_Rom_5F3189
gText_Rom_5F3189: @ 0x085F3189
	.string "みずポケモン さいこう!$"
	.if (. - gText_Rom_5F3189) > 0xd
	.error "gText_Rom_5F3189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3189) < 0xd
	.space 0xd - (. - gText_Rom_5F3189)
	.endif

	@ src/data/text/match_call_messages.h:203 gText_MatchCallTriathlete_Katelyn_Intro1
	.globl gText_Rom_5F3196
gText_Rom_5F3196: @ 0x085F3196
	.string "まいにち 10キロは$"
	.if (. - gText_Rom_5F3196) > 0xb
	.error "gText_Rom_5F3196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3196) < 0xb
	.space 0xb - (. - gText_Rom_5F3196)
	.endif

	@ src/data/text/match_call_messages.h:204 gText_MatchCallTriathlete_Katelyn_Intro2
	.globl gText_Rom_5F31A1
gText_Rom_5F31A1: @ 0x085F31A1
	.string "およいでいるわね!$"
	.if (. - gText_Rom_5F31A1) > 0xa
	.error "gText_Rom_5F31A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31A1) < 0xa
	.space 0xa - (. - gText_Rom_5F31A1)
	.endif

	@ src/data/text/match_call_messages.h:206 gText_MatchCallTriathlete_Benjamin_Strategy
	.globl gText_Rom_5F31AB
gText_Rom_5F31AB: @ 0x085F31AB
	.string "おして おしまくる さくせん!$"
	.if (. - gText_Rom_5F31AB) > 0x10
	.error "gText_Rom_5F31AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31AB) < 0x10
	.space 0x10 - (. - gText_Rom_5F31AB)
	.endif

	@ src/data/text/match_call_messages.h:207 gText_MatchCallTriathlete_Benjamin_Pokemon
	.globl gText_Rom_5F31BB
gText_Rom_5F31BB: @ 0x085F31BB
	.string "はがねの つよさを みせてやる$"
	.if (. - gText_Rom_5F31BB) > 0x10
	.error "gText_Rom_5F31BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31BB) < 0x10
	.space 0x10 - (. - gText_Rom_5F31BB)
	.endif

	@ src/data/text/match_call_messages.h:208 gText_MatchCallTriathlete_Benjamin_Intro1
	.globl gText_Rom_5F31CB
gText_Rom_5F31CB: @ 0x085F31CB
	.string "あせを かいたら こまめに$"
	.if (. - gText_Rom_5F31CB) > 0xe
	.error "gText_Rom_5F31CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31CB) < 0xe
	.space 0xe - (. - gText_Rom_5F31CB)
	.endif

	@ src/data/text/match_call_messages.h:209 gText_MatchCallTriathlete_Benjamin_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F31D9
gText_Rom_5F31D9: @ 0x085F31D9
	.string "すいぶんを ほきゅうしよう!$"
	.if (. - gText_Rom_5F31D9) != 0xf
	.error "gText_Rom_5F31D9 must retain its original byte length"
	.endif
	.globl gText_Rom_5F31E3
	.set gText_Rom_5F31E3, gText_Rom_5F31D9 + 0xa

	@ src/data/text/match_call_messages.h:211 gText_MatchCallTriathlete_Pablo_Strategy
	.globl gText_Rom_5F31E8
gText_Rom_5F31E8: @ 0x085F31E8
	.string "みずの ちからを ひきだす!$"
	.if (. - gText_Rom_5F31E8) > 0xf
	.error "gText_Rom_5F31E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31E8) < 0xf
	.space 0xf - (. - gText_Rom_5F31E8)
	.endif

	@ src/data/text/match_call_messages.h:212 gText_MatchCallTriathlete_Pablo_Pokemon
	.globl gText_Rom_5F31F7
gText_Rom_5F31F7: @ 0x085F31F7
	.string "きたえぬかれた みずポケモン!$"
	.if (. - gText_Rom_5F31F7) > 0x10
	.error "gText_Rom_5F31F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31F7) < 0x10
	.space 0x10 - (. - gText_Rom_5F31F7)
	.endif

	@ src/data/text/match_call_messages.h:213 gText_MatchCallTriathlete_Pablo_Intro1
	.globl gText_Rom_5F3207
gText_Rom_5F3207: @ 0x085F3207
	.string "ポケモンも いいけど$"
	.if (. - gText_Rom_5F3207) > 0xb
	.error "gText_Rom_5F3207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3207) < 0xb
	.space 0xb - (. - gText_Rom_5F3207)
	.endif

	@ src/data/text/match_call_messages.h:214 gText_MatchCallTriathlete_Pablo_Intro2
	.globl gText_Rom_5F3212
gText_Rom_5F3212: @ 0x085F3212
	.string "からだも きたえよう!$"
	.if (. - gText_Rom_5F3212) > 0xc
	.error "gText_Rom_5F3212 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3212) < 0xc
	.space 0xc - (. - gText_Rom_5F3212)
	.endif

	@ src/data/text/match_call_messages.h:216 gText_MatchCallDragonTamer_Nicolas_Strategy
	.globl gText_Rom_5F321E
gText_Rom_5F321E: @ 0x085F321E
	.string "ポケモンの パワーが すべて!$"
	.if (. - gText_Rom_5F321E) > 0x10
	.error "gText_Rom_5F321E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F321E) < 0x10
	.space 0x10 - (. - gText_Rom_5F321E)
	.endif

	@ src/data/text/match_call_messages.h:217 gText_MatchCallDragonTamer_Nicolas_Pokemon
	.globl gText_Rom_5F322E
gText_Rom_5F322E: @ 0x085F322E
	.string "ドラゴンの つよさを みろ!$"
	.if (. - gText_Rom_5F322E) > 0xf
	.error "gText_Rom_5F322E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F322E) < 0xf
	.space 0xf - (. - gText_Rom_5F322E)
	.endif

	@ src/data/text/match_call_messages.h:218 gText_MatchCallDragonTamer_Nicolas_Intro1
	.globl gText_Rom_5F323D
gText_Rom_5F323D: @ 0x085F323D
	.string "いつか さいきょうでんせつを$"
	.if (. - gText_Rom_5F323D) > 0xf
	.error "gText_Rom_5F323D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F323D) < 0xf
	.space 0xf - (. - gText_Rom_5F323D)
	.endif


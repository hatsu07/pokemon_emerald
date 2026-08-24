
	@ src/data/text/match_call_messages.h:328 gText_MatchCallRockinWhiz_Roxanne_Intro1
	.globl gText_MatchCallRockinWhiz_Roxanne_Intro1
gText_MatchCallRockinWhiz_Roxanne_Intro1: @ 0x085F36F0
	.string "おおきな まちの リーダーは{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro1) > 0xf
	.error "gText_MatchCallRockinWhiz_Roxanne_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallRockinWhiz_Roxanne_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:329 gText_MatchCallRockinWhiz_Roxanne_Intro2
	.globl gText_MatchCallRockinWhiz_Roxanne_Intro2
gText_MatchCallRockinWhiz_Roxanne_Intro2: @ 0x085F36FF
	.string "せきにん じゅうだいよ{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro2) > 0xc
	.error "gText_MatchCallRockinWhiz_Roxanne_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallRockinWhiz_Roxanne_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:331 gText_MatchCallTheBigHit_Brawly_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTheBigHit_Brawly_Strategy
gText_MatchCallTheBigHit_Brawly_Strategy: @ 0x085F370B
	.string "ちょくせつ だげきが とくい{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Strategy) != 0xf
	.error "gText_MatchCallTheBigHit_Brawly_Strategy must retain its original byte length"
	.endif
	.globl gText_Rom_5F3716
	.set gText_Rom_5F3716, gText_MatchCallTheBigHit_Brawly_Strategy + 0xb

	@ src/data/text/match_call_messages.h:332 gText_MatchCallTheBigHit_Brawly_Pokemon
	.globl gText_MatchCallTheBigHit_Brawly_Pokemon
gText_MatchCallTheBigHit_Brawly_Pokemon: @ 0x085F371A
	.string "かくとう ポケモン いのち!{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Pokemon) > 0xf
	.error "gText_MatchCallTheBigHit_Brawly_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTheBigHit_Brawly_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallTheBigHit_Brawly_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:333 gText_MatchCallTheBigHit_Brawly_Intro1
	.globl gText_MatchCallTheBigHit_Brawly_Intro1
gText_MatchCallTheBigHit_Brawly_Intro1: @ 0x085F3729
	.string "せかいの ビッグウェーブが{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro1) > 0xe
	.error "gText_MatchCallTheBigHit_Brawly_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallTheBigHit_Brawly_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:334 gText_MatchCallTheBigHit_Brawly_Intro2
	.globl gText_MatchCallTheBigHit_Brawly_Intro2
gText_MatchCallTheBigHit_Brawly_Intro2: @ 0x085F3737
	.string "オレを よんでいるぜ!{EOS}"
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro2) > 0xc
	.error "gText_MatchCallTheBigHit_Brawly_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTheBigHit_Brawly_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallTheBigHit_Brawly_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:336 gText_MatchCallSwellShock_Wattson_Strategy
	.globl gText_MatchCallSwellShock_Wattson_Strategy
gText_MatchCallSwellShock_Wattson_Strategy: @ 0x085F3743
	.string "ビリビリ しびれ させる{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Strategy) > 0xd
	.error "gText_MatchCallSwellShock_Wattson_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallSwellShock_Wattson_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:337 gText_MatchCallSwellShock_Wattson_Pokemon
	.globl gText_MatchCallSwellShock_Wattson_Pokemon
gText_MatchCallSwellShock_Wattson_Pokemon: @ 0x085F3750
	.string "でんきの パワーを くらえ!{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Pokemon) > 0xf
	.error "gText_MatchCallSwellShock_Wattson_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallSwellShock_Wattson_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:338 gText_MatchCallSwellShock_Wattson_Intro1
	.globl gText_MatchCallSwellShock_Wattson_Intro1
gText_MatchCallSwellShock_Wattson_Intro1: @ 0x085F375F
	.string "とちゅうで なげだしたら{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Intro1) > 0xd
	.error "gText_MatchCallSwellShock_Wattson_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallSwellShock_Wattson_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:339 gText_MatchCallSwellShock_Wattson_Intro2
	.globl gText_MatchCallSwellShock_Wattson_Intro2
gText_MatchCallSwellShock_Wattson_Intro2: @ 0x085F376C
	.string "いかんぞ ……ワシもな{EOS}"
	.if (. - gText_MatchCallSwellShock_Wattson_Intro2) > 0xc
	.error "gText_MatchCallSwellShock_Wattson_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallSwellShock_Wattson_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallSwellShock_Wattson_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:341 gText_MatchCallPassionBurn_Flannery_Strategy
	.globl gText_MatchCallPassionBurn_Flannery_Strategy
gText_MatchCallPassionBurn_Flannery_Strategy: @ 0x085F3778
	.string "つよきに せめる{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Strategy) > 0x9
	.error "gText_MatchCallPassionBurn_Flannery_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Strategy) < 0x9
	.space 0x9 - (. - gText_MatchCallPassionBurn_Flannery_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:342 gText_MatchCallPassionBurn_Flannery_Pokemon
	.globl gText_MatchCallPassionBurn_Flannery_Pokemon
gText_MatchCallPassionBurn_Flannery_Pokemon: @ 0x085F3781
	.string "もえろ じょうねつの ほのお!{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Pokemon) > 0x10
	.error "gText_MatchCallPassionBurn_Flannery_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallPassionBurn_Flannery_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:343 gText_MatchCallPassionBurn_Flannery_Intro1
	.globl gText_MatchCallPassionBurn_Flannery_Intro1
gText_MatchCallPassionBurn_Flannery_Intro1: @ 0x085F3791
	.string "いちにちの つかれは{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro1) > 0xb
	.error "gText_MatchCallPassionBurn_Flannery_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallPassionBurn_Flannery_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:344 gText_MatchCallPassionBurn_Flannery_Intro2
	.globl gText_MatchCallPassionBurn_Flannery_Intro2
gText_MatchCallPassionBurn_Flannery_Intro2: @ 0x085F379C
	.string "おんせんで スッキリ!{EOS}"
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro2) > 0xc
	.error "gText_MatchCallPassionBurn_Flannery_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPassionBurn_Flannery_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallPassionBurn_Flannery_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:346 gText_MatchCallReliableOne_Dad_Strategy
	.globl gText_MatchCallReliableOne_Dad_Strategy
gText_MatchCallReliableOne_Dad_Strategy: @ 0x085F37A8
	.string "りんきおうへんに たたかう{EOS}"
	.if (. - gText_MatchCallReliableOne_Dad_Strategy) > 0xe
	.error "gText_MatchCallReliableOne_Dad_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallReliableOne_Dad_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallReliableOne_Dad_Strategy)
	.endif


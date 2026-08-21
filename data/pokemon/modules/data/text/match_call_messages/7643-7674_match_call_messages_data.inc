
	@ src/data/text/match_call_messages.h:328 gText_MatchCallRockinWhiz_Roxanne_Intro1
	.globl gText_Rom_5F36F0
gText_Rom_5F36F0: @ 0x085F36F0
	.string "おおきな まちの リーダーは{EOS}"
	.if (. - gText_Rom_5F36F0) > 0xf
	.error "gText_Rom_5F36F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36F0) < 0xf
	.space 0xf - (. - gText_Rom_5F36F0)
	.endif

	@ src/data/text/match_call_messages.h:329 gText_MatchCallRockinWhiz_Roxanne_Intro2
	.globl gText_Rom_5F36FF
gText_Rom_5F36FF: @ 0x085F36FF
	.string "せきにん じゅうだいよ{EOS}"
	.if (. - gText_Rom_5F36FF) > 0xc
	.error "gText_Rom_5F36FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36FF) < 0xc
	.space 0xc - (. - gText_Rom_5F36FF)
	.endif

	@ src/data/text/match_call_messages.h:331 gText_MatchCallTheBigHit_Brawly_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F370B
gText_Rom_5F370B: @ 0x085F370B
	.string "ちょくせつ だげきが とくい{EOS}"
	.if (. - gText_Rom_5F370B) != 0xf
	.error "gText_Rom_5F370B must retain its original byte length"
	.endif
	.globl gText_Rom_5F3716
	.set gText_Rom_5F3716, gText_Rom_5F370B + 0xb

	@ src/data/text/match_call_messages.h:332 gText_MatchCallTheBigHit_Brawly_Pokemon
	.globl gText_Rom_5F371A
gText_Rom_5F371A: @ 0x085F371A
	.string "かくとう ポケモン いのち!{EOS}"
	.if (. - gText_Rom_5F371A) > 0xf
	.error "gText_Rom_5F371A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F371A) < 0xf
	.space 0xf - (. - gText_Rom_5F371A)
	.endif

	@ src/data/text/match_call_messages.h:333 gText_MatchCallTheBigHit_Brawly_Intro1
	.globl gText_Rom_5F3729
gText_Rom_5F3729: @ 0x085F3729
	.string "せかいの ビッグウェーブが{EOS}"
	.if (. - gText_Rom_5F3729) > 0xe
	.error "gText_Rom_5F3729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3729) < 0xe
	.space 0xe - (. - gText_Rom_5F3729)
	.endif

	@ src/data/text/match_call_messages.h:334 gText_MatchCallTheBigHit_Brawly_Intro2
	.globl gText_Rom_5F3737
gText_Rom_5F3737: @ 0x085F3737
	.string "オレを よんでいるぜ!{EOS}"
	.if (. - gText_Rom_5F3737) > 0xc
	.error "gText_Rom_5F3737 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3737) < 0xc
	.space 0xc - (. - gText_Rom_5F3737)
	.endif

	@ src/data/text/match_call_messages.h:336 gText_MatchCallSwellShock_Wattson_Strategy
	.globl gText_Rom_5F3743
gText_Rom_5F3743: @ 0x085F3743
	.string "ビリビリ しびれ させる{EOS}"
	.if (. - gText_Rom_5F3743) > 0xd
	.error "gText_Rom_5F3743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3743) < 0xd
	.space 0xd - (. - gText_Rom_5F3743)
	.endif

	@ src/data/text/match_call_messages.h:337 gText_MatchCallSwellShock_Wattson_Pokemon
	.globl gText_Rom_5F3750
gText_Rom_5F3750: @ 0x085F3750
	.string "でんきの パワーを くらえ!{EOS}"
	.if (. - gText_Rom_5F3750) > 0xf
	.error "gText_Rom_5F3750 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3750) < 0xf
	.space 0xf - (. - gText_Rom_5F3750)
	.endif

	@ src/data/text/match_call_messages.h:338 gText_MatchCallSwellShock_Wattson_Intro1
	.globl gText_Rom_5F375F
gText_Rom_5F375F: @ 0x085F375F
	.string "とちゅうで なげだしたら{EOS}"
	.if (. - gText_Rom_5F375F) > 0xd
	.error "gText_Rom_5F375F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F375F) < 0xd
	.space 0xd - (. - gText_Rom_5F375F)
	.endif

	@ src/data/text/match_call_messages.h:339 gText_MatchCallSwellShock_Wattson_Intro2
	.globl gText_Rom_5F376C
gText_Rom_5F376C: @ 0x085F376C
	.string "いかんぞ ……ワシもな{EOS}"
	.if (. - gText_Rom_5F376C) > 0xc
	.error "gText_Rom_5F376C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F376C) < 0xc
	.space 0xc - (. - gText_Rom_5F376C)
	.endif

	@ src/data/text/match_call_messages.h:341 gText_MatchCallPassionBurn_Flannery_Strategy
	.globl gText_Rom_5F3778
gText_Rom_5F3778: @ 0x085F3778
	.string "つよきに せめる{EOS}"
	.if (. - gText_Rom_5F3778) > 0x9
	.error "gText_Rom_5F3778 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3778) < 0x9
	.space 0x9 - (. - gText_Rom_5F3778)
	.endif

	@ src/data/text/match_call_messages.h:342 gText_MatchCallPassionBurn_Flannery_Pokemon
	.globl gText_Rom_5F3781
gText_Rom_5F3781: @ 0x085F3781
	.string "もえろ じょうねつの ほのお!{EOS}"
	.if (. - gText_Rom_5F3781) > 0x10
	.error "gText_Rom_5F3781 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3781) < 0x10
	.space 0x10 - (. - gText_Rom_5F3781)
	.endif

	@ src/data/text/match_call_messages.h:343 gText_MatchCallPassionBurn_Flannery_Intro1
	.globl gText_Rom_5F3791
gText_Rom_5F3791: @ 0x085F3791
	.string "いちにちの つかれは{EOS}"
	.if (. - gText_Rom_5F3791) > 0xb
	.error "gText_Rom_5F3791 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3791) < 0xb
	.space 0xb - (. - gText_Rom_5F3791)
	.endif

	@ src/data/text/match_call_messages.h:344 gText_MatchCallPassionBurn_Flannery_Intro2
	.globl gText_Rom_5F379C
gText_Rom_5F379C: @ 0x085F379C
	.string "おんせんで スッキリ!{EOS}"
	.if (. - gText_Rom_5F379C) > 0xc
	.error "gText_Rom_5F379C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F379C) < 0xc
	.space 0xc - (. - gText_Rom_5F379C)
	.endif

	@ src/data/text/match_call_messages.h:346 gText_MatchCallReliableOne_Dad_Strategy
	.globl gText_Rom_5F37A8
gText_Rom_5F37A8: @ 0x085F37A8
	.string "りんきおうへんに たたかう{EOS}"
	.if (. - gText_Rom_5F37A8) > 0xe
	.error "gText_Rom_5F37A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37A8) < 0xe
	.space 0xe - (. - gText_Rom_5F37A8)
	.endif


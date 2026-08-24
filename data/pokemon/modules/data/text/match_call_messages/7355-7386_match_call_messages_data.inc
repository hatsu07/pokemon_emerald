
	@ src/data/text/match_call_messages.h:166 gText_MatchCallExpert_Shelby_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallExpert_Shelby_Strategy
gText_MatchCallExpert_Shelby_Strategy: @ 0x085F3008
	.string "ぼうぎょ しつつ こうげき!{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Strategy) != 0xf
	.error "gText_MatchCallExpert_Shelby_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:167 gText_MatchCallExpert_Shelby_Pokemon
	.globl gText_MatchCallExpert_Shelby_Pokemon
gText_MatchCallExpert_Shelby_Pokemon: @ 0x085F3017
	.string "かくとうタイプ じゃよ{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Pokemon) > 0xc
	.error "gText_MatchCallExpert_Shelby_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Shelby_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallExpert_Shelby_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:168 gText_MatchCallExpert_Shelby_Intro1
	.globl gText_MatchCallExpert_Shelby_Intro1
gText_MatchCallExpert_Shelby_Intro1: @ 0x085F3023
	.string "としよりには としよりなりの{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Intro1) > 0xf
	.error "gText_MatchCallExpert_Shelby_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Shelby_Intro1) < 0xf
	.space 0xf - (. - gText_MatchCallExpert_Shelby_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:169 gText_MatchCallExpert_Shelby_Intro2
	.globl gText_MatchCallExpert_Shelby_Intro2
gText_MatchCallExpert_Shelby_Intro2: @ 0x085F3032
	.string "たたかいかたが あるのじゃ{EOS}"
	.if (. - gText_MatchCallExpert_Shelby_Intro2) > 0xe
	.error "gText_MatchCallExpert_Shelby_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallExpert_Shelby_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallExpert_Shelby_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:171 gText_MatchCallYoungster_Calvin_Strategy
	.globl gText_MatchCallYoungster_Calvin_Strategy
gText_MatchCallYoungster_Calvin_Strategy: @ 0x085F3040
	.string "できること やってやるぜ!{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Strategy) > 0xe
	.error "gText_MatchCallYoungster_Calvin_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungster_Calvin_Strategy) < 0xe
	.space 0xe - (. - gText_MatchCallYoungster_Calvin_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallYoungster_Calvin_Pokemon
gText_MatchCallYoungster_Calvin_Pokemon: @ 0x085F304E
	.string "いろんな タイプで しょうぶ{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Pokemon) != 0xf
	.error "gText_MatchCallYoungster_Calvin_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:173 gText_MatchCallYoungster_Calvin_Intro1
	.globl gText_MatchCallYoungster_Calvin_Intro1
gText_MatchCallYoungster_Calvin_Intro1: @ 0x085F305D
	.string "ジムリーダーに かつまで{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Intro1) > 0xd
	.error "gText_MatchCallYoungster_Calvin_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungster_Calvin_Intro1) < 0xd
	.space 0xd - (. - gText_MatchCallYoungster_Calvin_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:174 gText_MatchCallYoungster_Calvin_Intro2
	.globl gText_MatchCallYoungster_Calvin_Intro2
gText_MatchCallYoungster_Calvin_Intro2: @ 0x085F306A
	.string "がんばるぜ!{EOS}"
	.if (. - gText_MatchCallYoungster_Calvin_Intro2) > 0x7
	.error "gText_MatchCallYoungster_Calvin_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungster_Calvin_Intro2) < 0x7
	.space 0x7 - (. - gText_MatchCallYoungster_Calvin_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:176 gText_MatchCallFisherman_Elliot_Strategy
	.globl gText_MatchCallFisherman_Elliot_Strategy
gText_MatchCallFisherman_Elliot_Strategy: @ 0x085F3071
	.string "じっくり たたかう!{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Strategy) > 0xb
	.error "gText_MatchCallFisherman_Elliot_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallFisherman_Elliot_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:177 gText_MatchCallFisherman_Elliot_Pokemon
	.globl gText_MatchCallFisherman_Elliot_Pokemon
gText_MatchCallFisherman_Elliot_Pokemon: @ 0x085F307C
	.string "みずポケモンで しょうぶ!{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Pokemon) > 0xe
	.error "gText_MatchCallFisherman_Elliot_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Pokemon) < 0xe
	.space 0xe - (. - gText_MatchCallFisherman_Elliot_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:178 gText_MatchCallFisherman_Elliot_Intro1
	.globl gText_MatchCallFisherman_Elliot_Intro1
gText_MatchCallFisherman_Elliot_Intro1: @ 0x085F308A
	.string "あんなに でっかい ポケモンを{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Intro1) > 0x10
	.error "gText_MatchCallFisherman_Elliot_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallFisherman_Elliot_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:179 gText_MatchCallFisherman_Elliot_Intro2
	.globl gText_MatchCallFisherman_Elliot_Intro2
gText_MatchCallFisherman_Elliot_Intro2: @ 0x085F309A
	.string "つったのは せかいで オレだけ{EOS}"
	.if (. - gText_MatchCallFisherman_Elliot_Intro2) > 0x10
	.error "gText_MatchCallFisherman_Elliot_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallFisherman_Elliot_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallFisherman_Elliot_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:181 gText_MatchCallTriathlete_Isaiah_Strategy
	.globl gText_MatchCallTriathlete_Isaiah_Strategy
gText_MatchCallTriathlete_Isaiah_Strategy: @ 0x085F30AA
	.string "ちのりを りようする{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Strategy) > 0xb
	.error "gText_MatchCallTriathlete_Isaiah_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Isaiah_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallTriathlete_Isaiah_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:182 gText_MatchCallTriathlete_Isaiah_Pokemon
	.globl gText_MatchCallTriathlete_Isaiah_Pokemon
gText_MatchCallTriathlete_Isaiah_Pokemon: @ 0x085F30B5
	.string "みずタイプ ばんざい!{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Pokemon) > 0xc
	.error "gText_MatchCallTriathlete_Isaiah_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallTriathlete_Isaiah_Pokemon) < 0xc
	.space 0xc - (. - gText_MatchCallTriathlete_Isaiah_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:183 gText_MatchCallTriathlete_Isaiah_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallTriathlete_Isaiah_Intro1
gText_MatchCallTriathlete_Isaiah_Intro1: @ 0x085F30C1
	.string "みずあそび している{EOS}"
	.if (. - gText_MatchCallTriathlete_Isaiah_Intro1) != 0xb
	.error "gText_MatchCallTriathlete_Isaiah_Intro1 must retain its original byte length"
	.endif

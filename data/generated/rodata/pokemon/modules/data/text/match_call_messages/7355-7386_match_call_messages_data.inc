
	@ src/data/text/match_call_messages.h:166 gText_MatchCallExpert_Shelby_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3008
gText_Rom_5F3008: @ 0x085F3008
	.string "ぼうぎょ しつつ こうげき!$"
	.if (. - gText_Rom_5F3008) != 0xf
	.error "gText_Rom_5F3008 must retain its original byte length"
	.endif
	.globl gText_Rom_5F3010
	.set gText_Rom_5F3010, gText_Rom_5F3008 + 0x8

	@ src/data/text/match_call_messages.h:167 gText_MatchCallExpert_Shelby_Pokemon
	.globl gText_Rom_5F3017
gText_Rom_5F3017: @ 0x085F3017
	.string "かくとうタイプ じゃよ$"
	.if (. - gText_Rom_5F3017) > 0xc
	.error "gText_Rom_5F3017 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3017) < 0xc
	.space 0xc - (. - gText_Rom_5F3017)
	.endif

	@ src/data/text/match_call_messages.h:168 gText_MatchCallExpert_Shelby_Intro1
	.globl gText_Rom_5F3023
gText_Rom_5F3023: @ 0x085F3023
	.string "としよりには としよりなりの$"
	.if (. - gText_Rom_5F3023) > 0xf
	.error "gText_Rom_5F3023 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3023) < 0xf
	.space 0xf - (. - gText_Rom_5F3023)
	.endif

	@ src/data/text/match_call_messages.h:169 gText_MatchCallExpert_Shelby_Intro2
	.globl gText_Rom_5F3032
gText_Rom_5F3032: @ 0x085F3032
	.string "たたかいかたが あるのじゃ$"
	.if (. - gText_Rom_5F3032) > 0xe
	.error "gText_Rom_5F3032 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3032) < 0xe
	.space 0xe - (. - gText_Rom_5F3032)
	.endif

	@ src/data/text/match_call_messages.h:171 gText_MatchCallYoungster_Calvin_Strategy
	.globl gText_Rom_5F3040
gText_Rom_5F3040: @ 0x085F3040
	.string "できること やってやるぜ!$"
	.if (. - gText_Rom_5F3040) > 0xe
	.error "gText_Rom_5F3040 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3040) < 0xe
	.space 0xe - (. - gText_Rom_5F3040)
	.endif

	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F304E
gText_Rom_5F304E: @ 0x085F304E
	.string "いろんな タイプで しょうぶ$"
	.if (. - gText_Rom_5F304E) != 0xf
	.error "gText_Rom_5F304E must retain its original byte length"
	.endif
	.globl gText_Rom_5F3058
	.set gText_Rom_5F3058, gText_Rom_5F304E + 0xa

	@ src/data/text/match_call_messages.h:173 gText_MatchCallYoungster_Calvin_Intro1
	.globl gText_Rom_5F305D
gText_Rom_5F305D: @ 0x085F305D
	.string "ジムリーダーに かつまで$"
	.if (. - gText_Rom_5F305D) > 0xd
	.error "gText_Rom_5F305D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F305D) < 0xd
	.space 0xd - (. - gText_Rom_5F305D)
	.endif

	@ src/data/text/match_call_messages.h:174 gText_MatchCallYoungster_Calvin_Intro2
	.globl gText_Rom_5F306A
gText_Rom_5F306A: @ 0x085F306A
	.string "がんばるぜ!$"
	.if (. - gText_Rom_5F306A) > 0x7
	.error "gText_Rom_5F306A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F306A) < 0x7
	.space 0x7 - (. - gText_Rom_5F306A)
	.endif

	@ src/data/text/match_call_messages.h:176 gText_MatchCallFisherman_Elliot_Strategy
	.globl gText_Rom_5F3071
gText_Rom_5F3071: @ 0x085F3071
	.string "じっくり たたかう!$"
	.if (. - gText_Rom_5F3071) > 0xb
	.error "gText_Rom_5F3071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3071) < 0xb
	.space 0xb - (. - gText_Rom_5F3071)
	.endif

	@ src/data/text/match_call_messages.h:177 gText_MatchCallFisherman_Elliot_Pokemon
	.globl gText_Rom_5F307C
gText_Rom_5F307C: @ 0x085F307C
	.string "みずポケモンで しょうぶ!$"
	.if (. - gText_Rom_5F307C) > 0xe
	.error "gText_Rom_5F307C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F307C) < 0xe
	.space 0xe - (. - gText_Rom_5F307C)
	.endif

	@ src/data/text/match_call_messages.h:178 gText_MatchCallFisherman_Elliot_Intro1
	.globl gText_Rom_5F308A
gText_Rom_5F308A: @ 0x085F308A
	.string "あんなに でっかい ポケモンを$"
	.if (. - gText_Rom_5F308A) > 0x10
	.error "gText_Rom_5F308A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F308A) < 0x10
	.space 0x10 - (. - gText_Rom_5F308A)
	.endif

	@ src/data/text/match_call_messages.h:179 gText_MatchCallFisherman_Elliot_Intro2
	.globl gText_Rom_5F309A
gText_Rom_5F309A: @ 0x085F309A
	.string "つったのは せかいで オレだけ$"
	.if (. - gText_Rom_5F309A) > 0x10
	.error "gText_Rom_5F309A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F309A) < 0x10
	.space 0x10 - (. - gText_Rom_5F309A)
	.endif

	@ src/data/text/match_call_messages.h:181 gText_MatchCallTriathlete_Isaiah_Strategy
	.globl gText_Rom_5F30AA
gText_Rom_5F30AA: @ 0x085F30AA
	.string "ちのりを りようする$"
	.if (. - gText_Rom_5F30AA) > 0xb
	.error "gText_Rom_5F30AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30AA) < 0xb
	.space 0xb - (. - gText_Rom_5F30AA)
	.endif

	@ src/data/text/match_call_messages.h:182 gText_MatchCallTriathlete_Isaiah_Pokemon
	.globl gText_Rom_5F30B5
gText_Rom_5F30B5: @ 0x085F30B5
	.string "みずタイプ ばんざい!$"
	.if (. - gText_Rom_5F30B5) > 0xc
	.error "gText_Rom_5F30B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F30B5) < 0xc
	.space 0xc - (. - gText_Rom_5F30B5)
	.endif

	@ src/data/text/match_call_messages.h:183 gText_MatchCallTriathlete_Isaiah_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F30C1
gText_Rom_5F30C1: @ 0x085F30C1
	.string "みずあそび している$"
	.if (. - gText_Rom_5F30C1) != 0xb
	.error "gText_Rom_5F30C1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:219 gText_MatchCallDragonTamer_Nicolas_Intro2
	.globl gText_Rom_5F324C
gText_Rom_5F324C: @ 0x085F324C
	.string "つくってやるぜ!{EOS}"
	.if (. - gText_Rom_5F324C) > 0x9
	.error "gText_Rom_5F324C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F324C) < 0x9
	.space 0x9 - (. - gText_Rom_5F324C)
	.endif

	@ src/data/text/match_call_messages.h:221 gText_MatchCallBirdKeeper_Robert_Strategy
	.globl gText_Rom_5F3255
gText_Rom_5F3255: @ 0x085F3255
	.string "おれの テクニック みせてやる{EOS}"
	.if (. - gText_Rom_5F3255) > 0x10
	.error "gText_Rom_5F3255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3255) < 0x10
	.space 0x10 - (. - gText_Rom_5F3255)
	.endif

	@ src/data/text/match_call_messages.h:222 gText_MatchCallBirdKeeper_Robert_Pokemon
	.globl gText_Rom_5F3265
gText_Rom_5F3265: @ 0x085F3265
	.string "とりポケの かれいなる まい!{EOS}"
	.if (. - gText_Rom_5F3265) > 0x10
	.error "gText_Rom_5F3265 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3265) < 0x10
	.space 0x10 - (. - gText_Rom_5F3265)
	.endif

	@ src/data/text/match_call_messages.h:223 gText_MatchCallBirdKeeper_Robert_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3275
gText_Rom_5F3275: @ 0x085F3275
	.string "とりポケよ おれの きもち{EOS}"
	.if (. - gText_Rom_5F3275) != 0xe
	.error "gText_Rom_5F3275 must retain its original byte length"
	.endif
	.globl gText_Rom_5F327F
	.set gText_Rom_5F327F, gText_Rom_5F3275 + 0xa

	@ src/data/text/match_call_messages.h:224 gText_MatchCallBirdKeeper_Robert_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3283
gText_Rom_5F3283: @ 0x085F3283
	.string "あのこに とどけておくれ{EOS}"
	.if (. - gText_Rom_5F3283) != 0xd
	.error "gText_Rom_5F3283 must retain its original byte length"
	.endif
	.globl gText_Rom_5F328C
	.set gText_Rom_5F328C, gText_Rom_5F3283 + 0x9

	@ src/data/text/match_call_messages.h:226 gText_MatchCallNinjaBoy_Lao_Strategy
	.globl gText_Rom_5F3290
gText_Rom_5F3290: @ 0x085F3290
	.string "どく こうげきで くるしめる{EOS}"
	.if (. - gText_Rom_5F3290) > 0xf
	.error "gText_Rom_5F3290 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3290) < 0xf
	.space 0xf - (. - gText_Rom_5F3290)
	.endif

	@ src/data/text/match_call_messages.h:227 gText_MatchCallNinjaBoy_Lao_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F329F
gText_Rom_5F329F: @ 0x085F329F
	.string "どくどくしい ポケモン{EOS}"
	.if (. - gText_Rom_5F329F) != 0xc
	.error "gText_Rom_5F329F must retain its original byte length"
	.endif
	.globl gText_Rom_5F32A6
	.set gText_Rom_5F32A6, gText_Rom_5F329F + 0x7

	@ src/data/text/match_call_messages.h:228 gText_MatchCallNinjaBoy_Lao_Intro1
	.globl gText_Rom_5F32AB
gText_Rom_5F32AB: @ 0x085F32AB
	.string "にんじゃに なるため{EOS}"
	.if (. - gText_Rom_5F32AB) > 0xb
	.error "gText_Rom_5F32AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32AB) < 0xb
	.space 0xb - (. - gText_Rom_5F32AB)
	.endif

	@ src/data/text/match_call_messages.h:229 gText_MatchCallNinjaBoy_Lao_Intro2
	.globl gText_Rom_5F32B6
gText_Rom_5F32B6: @ 0x085F32B6
	.string "まいにち しゅぎょうで ござる{EOS}"
	.if (. - gText_Rom_5F32B6) > 0x10
	.error "gText_Rom_5F32B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32B6) < 0x10
	.space 0x10 - (. - gText_Rom_5F32B6)
	.endif

	@ src/data/text/match_call_messages.h:231 gText_MatchCallBattleGirl_Cyndy_Strategy
	.globl gText_Rom_5F32C6
gText_Rom_5F32C6: @ 0x085F32C6
	.string "せんてひっしょうよ!{EOS}"
	.if (. - gText_Rom_5F32C6) > 0xb
	.error "gText_Rom_5F32C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32C6) < 0xb
	.space 0xb - (. - gText_Rom_5F32C6)
	.endif

	@ src/data/text/match_call_messages.h:232 gText_MatchCallBattleGirl_Cyndy_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F32D1
gText_Rom_5F32D1: @ 0x085F32D1
	.string "すばやい かくとうタイプ{EOS}"
	.if (. - gText_Rom_5F32D1) != 0xd
	.error "gText_Rom_5F32D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F32D6
	.set gText_Rom_5F32D6, gText_Rom_5F32D1 + 0x5
	.globl gText_Rom_5F32DA
	.set gText_Rom_5F32DA, gText_Rom_5F32D1 + 0x9

	@ src/data/text/match_call_messages.h:233 gText_MatchCallBattleGirl_Cyndy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F32DE
gText_Rom_5F32DE: @ 0x085F32DE
	.string "ポケモンで まけたら{EOS}"
	.if (. - gText_Rom_5F32DE) != 0xb
	.error "gText_Rom_5F32DE must retain its original byte length"
	.endif
	.globl gText_Rom_5F32E4
	.set gText_Rom_5F32E4, gText_Rom_5F32DE + 0x6

	@ src/data/text/match_call_messages.h:234 gText_MatchCallBattleGirl_Cyndy_Intro2
	.globl gText_Rom_5F32E9
gText_Rom_5F32E9: @ 0x085F32E9
	.string "あたしが たたかっちゃう!{EOS}"
	.if (. - gText_Rom_5F32E9) > 0xe
	.error "gText_Rom_5F32E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32E9) < 0xe
	.space 0xe - (. - gText_Rom_5F32E9)
	.endif

	@ src/data/text/match_call_messages.h:236 gText_MatchCallParasolLady_Madeline_Strategy
	.globl gText_Rom_5F32F7
gText_Rom_5F32F7: @ 0x085F32F7
	.string "がんばれ わたしの ポケモン!{EOS}"
	.if (. - gText_Rom_5F32F7) > 0x10
	.error "gText_Rom_5F32F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32F7) < 0x10
	.space 0x10 - (. - gText_Rom_5F32F7)
	.endif

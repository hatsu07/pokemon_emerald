	@ src/data/text/match_call_messages.h:219 gText_MatchCallDragonTamer_Nicolas_Intro2
	.globl gText_MatchCallDragonTamer_Nicolas_Intro2
gText_MatchCallDragonTamer_Nicolas_Intro2: @ 0x085F324C
	.string "つくってやるぜ!{EOS}"
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro2) > 0x9
	.error "gText_MatchCallDragonTamer_Nicolas_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallDragonTamer_Nicolas_Intro2) < 0x9
	.space 0x9 - (. - gText_MatchCallDragonTamer_Nicolas_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:221 gText_MatchCallBirdKeeper_Robert_Strategy
	.globl gText_MatchCallBirdKeeper_Robert_Strategy
gText_MatchCallBirdKeeper_Robert_Strategy: @ 0x085F3255
	.string "おれの テクニック みせてやる{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Strategy) > 0x10
	.error "gText_MatchCallBirdKeeper_Robert_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBirdKeeper_Robert_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallBirdKeeper_Robert_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:222 gText_MatchCallBirdKeeper_Robert_Pokemon
	.globl gText_MatchCallBirdKeeper_Robert_Pokemon
gText_MatchCallBirdKeeper_Robert_Pokemon: @ 0x085F3265
	.string "とりポケの かれいなる まい!{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Pokemon) > 0x10
	.error "gText_MatchCallBirdKeeper_Robert_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBirdKeeper_Robert_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallBirdKeeper_Robert_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:223 gText_MatchCallBirdKeeper_Robert_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBirdKeeper_Robert_Intro1
gText_MatchCallBirdKeeper_Robert_Intro1: @ 0x085F3275
	.string "とりポケよ おれの きもち{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Intro1) != 0xe
	.error "gText_MatchCallBirdKeeper_Robert_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:224 gText_MatchCallBirdKeeper_Robert_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBirdKeeper_Robert_Intro2
gText_MatchCallBirdKeeper_Robert_Intro2: @ 0x085F3283
	.string "あのこに とどけておくれ{EOS}"
	.if (. - gText_MatchCallBirdKeeper_Robert_Intro2) != 0xd
	.error "gText_MatchCallBirdKeeper_Robert_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:226 gText_MatchCallNinjaBoy_Lao_Strategy
	.globl gText_MatchCallNinjaBoy_Lao_Strategy
gText_MatchCallNinjaBoy_Lao_Strategy: @ 0x085F3290
	.string "どく こうげきで くるしめる{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Strategy) > 0xf
	.error "gText_MatchCallNinjaBoy_Lao_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallNinjaBoy_Lao_Strategy) < 0xf
	.space 0xf - (. - gText_MatchCallNinjaBoy_Lao_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:227 gText_MatchCallNinjaBoy_Lao_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallNinjaBoy_Lao_Pokemon
gText_MatchCallNinjaBoy_Lao_Pokemon: @ 0x085F329F
	.string "どくどくしい ポケモン{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Pokemon) != 0xc
	.error "gText_MatchCallNinjaBoy_Lao_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:228 gText_MatchCallNinjaBoy_Lao_Intro1
	.globl gText_MatchCallNinjaBoy_Lao_Intro1
gText_MatchCallNinjaBoy_Lao_Intro1: @ 0x085F32AB
	.string "にんじゃに なるため{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro1) > 0xb
	.error "gText_MatchCallNinjaBoy_Lao_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro1) < 0xb
	.space 0xb - (. - gText_MatchCallNinjaBoy_Lao_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:229 gText_MatchCallNinjaBoy_Lao_Intro2
	.globl gText_MatchCallNinjaBoy_Lao_Intro2
gText_MatchCallNinjaBoy_Lao_Intro2: @ 0x085F32B6
	.string "まいにち しゅぎょうで ござる{EOS}"
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro2) > 0x10
	.error "gText_MatchCallNinjaBoy_Lao_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallNinjaBoy_Lao_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallNinjaBoy_Lao_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:231 gText_MatchCallBattleGirl_Cyndy_Strategy
	.globl gText_MatchCallBattleGirl_Cyndy_Strategy
gText_MatchCallBattleGirl_Cyndy_Strategy: @ 0x085F32C6
	.string "せんてひっしょうよ!{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Strategy) > 0xb
	.error "gText_MatchCallBattleGirl_Cyndy_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBattleGirl_Cyndy_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallBattleGirl_Cyndy_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:232 gText_MatchCallBattleGirl_Cyndy_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBattleGirl_Cyndy_Pokemon
gText_MatchCallBattleGirl_Cyndy_Pokemon: @ 0x085F32D1
	.string "すばやい かくとうタイプ{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Pokemon) != 0xd
	.error "gText_MatchCallBattleGirl_Cyndy_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:233 gText_MatchCallBattleGirl_Cyndy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallBattleGirl_Cyndy_Intro1
gText_MatchCallBattleGirl_Cyndy_Intro1: @ 0x085F32DE
	.string "ポケモンで まけたら{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Intro1) != 0xb
	.error "gText_MatchCallBattleGirl_Cyndy_Intro1 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:234 gText_MatchCallBattleGirl_Cyndy_Intro2
	.globl gText_MatchCallBattleGirl_Cyndy_Intro2
gText_MatchCallBattleGirl_Cyndy_Intro2: @ 0x085F32E9
	.string "あたしが たたかっちゃう!{EOS}"
	.if (. - gText_MatchCallBattleGirl_Cyndy_Intro2) > 0xe
	.error "gText_MatchCallBattleGirl_Cyndy_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBattleGirl_Cyndy_Intro2) < 0xe
	.space 0xe - (. - gText_MatchCallBattleGirl_Cyndy_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:236 gText_MatchCallParasolLady_Madeline_Strategy
	.globl gText_MatchCallParasolLady_Madeline_Strategy
gText_MatchCallParasolLady_Madeline_Strategy: @ 0x085F32F7
	.string "がんばれ わたしの ポケモン!{EOS}"
	.if (. - gText_MatchCallParasolLady_Madeline_Strategy) > 0x10
	.error "gText_MatchCallParasolLady_Madeline_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallParasolLady_Madeline_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallParasolLady_Madeline_Strategy)
	.endif

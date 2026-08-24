	@ Structural owner: gText_MatchCallPkmnRanger_Jackson_Strategy; identical bytes are reused from Jeffrey Strategy.
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnRanger_Jackson_Strategy
gText_MatchCallPkmnRanger_Jackson_Strategy: @ 0x085F355D
	.string "たたみかける ような こうげき{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Strategy) != 0x10
	.error "gText_MatchCallPkmnRanger_Jackson_Strategy must retain its original byte length"
	.endif
	.globl gText_Rom_5F3568
	.set gText_Rom_5F3568, gText_MatchCallPkmnRanger_Jackson_Strategy + 0xb

	@ Structural owner: gText_MatchCallPkmnRanger_Jackson_Pokemon; identical bytes are reused from Calvin Pokemon.
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnRanger_Jackson_Pokemon
gText_MatchCallPkmnRanger_Jackson_Pokemon: @ 0x085F356D
	.string "いろんな タイプで しょうぶ{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Pokemon) != 0xf
	.error "gText_MatchCallPkmnRanger_Jackson_Pokemon must retain its original byte length"
	.endif
	.globl gText_Rom_5F3577
	.set gText_Rom_5F3577, gText_MatchCallPkmnRanger_Jackson_Pokemon + 0xa

	@ src/data/text/match_call_messages.h:293 gText_MatchCallPkmnRanger_Jackson_Intro1
	.globl gText_MatchCallPkmnRanger_Jackson_Intro1
gText_MatchCallPkmnRanger_Jackson_Intro1: @ 0x085F357C
	.string "しぜんを こわす やからは{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro1) > 0xe
	.error "gText_MatchCallPkmnRanger_Jackson_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallPkmnRanger_Jackson_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:294 gText_MatchCallPkmnRanger_Jackson_Intro2
	.globl gText_MatchCallPkmnRanger_Jackson_Intro2
gText_MatchCallPkmnRanger_Jackson_Intro2: @ 0x085F358A
	.string "ぜったいに ゆるさない!{EOS}"
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro2) > 0xd
	.error "gText_MatchCallPkmnRanger_Jackson_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnRanger_Jackson_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallPkmnRanger_Jackson_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:296 gText_MatchCallLass_Haley_Strategy
	.globl gText_MatchCallLass_Haley_Strategy
gText_MatchCallLass_Haley_Strategy: @ 0x085F3597
	.string "こんじょう みせちゃう!{EOS}"
	.if (. - gText_MatchCallLass_Haley_Strategy) > 0xd
	.error "gText_MatchCallLass_Haley_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Strategy) < 0xd
	.space 0xd - (. - gText_MatchCallLass_Haley_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:297 gText_MatchCallLass_Haley_Pokemon
	.globl gText_MatchCallLass_Haley_Pokemon
gText_MatchCallLass_Haley_Pokemon: @ 0x085F35A4
	.string "かわいい ポケモン だいすき!{EOS}"
	.if (. - gText_MatchCallLass_Haley_Pokemon) > 0x10
	.error "gText_MatchCallLass_Haley_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Pokemon) < 0x10
	.space 0x10 - (. - gText_MatchCallLass_Haley_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:298 gText_MatchCallLass_Haley_Intro1
	.globl gText_MatchCallLass_Haley_Intro1
gText_MatchCallLass_Haley_Intro1: @ 0x085F35B4
	.string "たたかった あとは ポケモンと{EOS}"
	.if (. - gText_MatchCallLass_Haley_Intro1) > 0x10
	.error "gText_MatchCallLass_Haley_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallLass_Haley_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:299 gText_MatchCallLass_Haley_Intro2
	.globl gText_MatchCallLass_Haley_Intro2
gText_MatchCallLass_Haley_Intro2: @ 0x085F35C4
	.string "おふろに はいりまーす{EOS}"
	.if (. - gText_MatchCallLass_Haley_Intro2) > 0xc
	.error "gText_MatchCallLass_Haley_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallLass_Haley_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallLass_Haley_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:301 gText_MatchCallBugCatcher_James_Strategy
	.globl gText_MatchCallBugCatcher_James_Strategy
gText_MatchCallBugCatcher_James_Strategy: @ 0x085F35D0
	.string "すばやく こうげきだ!{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Strategy) > 0xc
	.error "gText_MatchCallBugCatcher_James_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Strategy) < 0xc
	.space 0xc - (. - gText_MatchCallBugCatcher_James_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:302 gText_MatchCallBugCatcher_James_Pokemon
	.globl gText_MatchCallBugCatcher_James_Pokemon
gText_MatchCallBugCatcher_James_Pokemon: @ 0x085F35DC
	.string "むしタイプが いちばん!{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Pokemon) > 0xd
	.error "gText_MatchCallBugCatcher_James_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Pokemon) < 0xd
	.space 0xd - (. - gText_MatchCallBugCatcher_James_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:303 gText_MatchCallBugCatcher_James_Intro1
	.globl gText_MatchCallBugCatcher_James_Intro1
gText_MatchCallBugCatcher_James_Intro1: @ 0x085F35E9
	.string "むしポケモンを つかまえるなら{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Intro1) > 0x10
	.error "gText_MatchCallBugCatcher_James_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Intro1) < 0x10
	.space 0x10 - (. - gText_MatchCallBugCatcher_James_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:304 gText_MatchCallBugCatcher_James_Intro2
	.globl gText_MatchCallBugCatcher_James_Intro2
gText_MatchCallBugCatcher_James_Intro2: @ 0x085F35F9
	.string "あさはやく おきないとね{EOS}"
	.if (. - gText_MatchCallBugCatcher_James_Intro2) > 0xd
	.error "gText_MatchCallBugCatcher_James_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallBugCatcher_James_Intro2) < 0xd
	.space 0xd - (. - gText_MatchCallBugCatcher_James_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:306 gText_MatchCallHiker_Trent_Strategy
	.globl gText_MatchCallHiker_Trent_Strategy
gText_MatchCallHiker_Trent_Strategy: @ 0x085F3606
	.string "パワーで しょうぶ!{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Strategy) > 0xb
	.error "gText_MatchCallHiker_Trent_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Trent_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallHiker_Trent_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:307 gText_MatchCallHiker_Trent_Pokemon
	.globl gText_MatchCallHiker_Trent_Pokemon
gText_MatchCallHiker_Trent_Pokemon: @ 0x085F3611
	.string "かたい からだの ポケモン!{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Pokemon) > 0xf
	.error "gText_MatchCallHiker_Trent_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Trent_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallHiker_Trent_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:308 gText_MatchCallHiker_Trent_Intro1
	.globl gText_MatchCallHiker_Trent_Intro1
gText_MatchCallHiker_Trent_Intro1: @ 0x085F3620
	.string "きょうの とざんの ために{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Intro1) > 0xe
	.error "gText_MatchCallHiker_Trent_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Trent_Intro1) < 0xe
	.space 0xe - (. - gText_MatchCallHiker_Trent_Intro1)
	.endif


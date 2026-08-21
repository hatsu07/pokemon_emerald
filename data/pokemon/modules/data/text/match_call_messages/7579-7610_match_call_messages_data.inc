	@ src/data/text/match_call_messages.h:116 gText_MatchCallBugManiac_Jeffrey_Strategy (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F355D
gText_Rom_5F355D: @ 0x085F355D
	.string "たたみかける ような こうげき{EOS}"
	.if (. - gText_Rom_5F355D) != 0x10
	.error "gText_Rom_5F355D must retain its original byte length"
	.endif
	.globl gText_Rom_5F3568
	.set gText_Rom_5F3568, gText_Rom_5F355D + 0xb

	@ src/data/text/match_call_messages.h:172 gText_MatchCallYoungster_Calvin_Pokemon (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F356D
gText_Rom_5F356D: @ 0x085F356D
	.string "いろんな タイプで しょうぶ{EOS}"
	.if (. - gText_Rom_5F356D) != 0xf
	.error "gText_Rom_5F356D must retain its original byte length"
	.endif
	.globl gText_Rom_5F3577
	.set gText_Rom_5F3577, gText_Rom_5F356D + 0xa

	@ src/data/text/match_call_messages.h:293 gText_MatchCallPkmnRanger_Jackson_Intro1
	.globl gText_Rom_5F357C
gText_Rom_5F357C: @ 0x085F357C
	.string "しぜんを こわす やからは{EOS}"
	.if (. - gText_Rom_5F357C) > 0xe
	.error "gText_Rom_5F357C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F357C) < 0xe
	.space 0xe - (. - gText_Rom_5F357C)
	.endif

	@ src/data/text/match_call_messages.h:294 gText_MatchCallPkmnRanger_Jackson_Intro2
	.globl gText_Rom_5F358A
gText_Rom_5F358A: @ 0x085F358A
	.string "ぜったいに ゆるさない!{EOS}"
	.if (. - gText_Rom_5F358A) > 0xd
	.error "gText_Rom_5F358A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F358A) < 0xd
	.space 0xd - (. - gText_Rom_5F358A)
	.endif

	@ src/data/text/match_call_messages.h:296 gText_MatchCallLass_Haley_Strategy
	.globl gText_Rom_5F3597
gText_Rom_5F3597: @ 0x085F3597
	.string "こんじょう みせちゃう!{EOS}"
	.if (. - gText_Rom_5F3597) > 0xd
	.error "gText_Rom_5F3597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3597) < 0xd
	.space 0xd - (. - gText_Rom_5F3597)
	.endif

	@ src/data/text/match_call_messages.h:297 gText_MatchCallLass_Haley_Pokemon
	.globl gText_Rom_5F35A4
gText_Rom_5F35A4: @ 0x085F35A4
	.string "かわいい ポケモン だいすき!{EOS}"
	.if (. - gText_Rom_5F35A4) > 0x10
	.error "gText_Rom_5F35A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35A4) < 0x10
	.space 0x10 - (. - gText_Rom_5F35A4)
	.endif

	@ src/data/text/match_call_messages.h:298 gText_MatchCallLass_Haley_Intro1
	.globl gText_Rom_5F35B4
gText_Rom_5F35B4: @ 0x085F35B4
	.string "たたかった あとは ポケモンと{EOS}"
	.if (. - gText_Rom_5F35B4) > 0x10
	.error "gText_Rom_5F35B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35B4) < 0x10
	.space 0x10 - (. - gText_Rom_5F35B4)
	.endif

	@ src/data/text/match_call_messages.h:299 gText_MatchCallLass_Haley_Intro2
	.globl gText_Rom_5F35C4
gText_Rom_5F35C4: @ 0x085F35C4
	.string "おふろに はいりまーす{EOS}"
	.if (. - gText_Rom_5F35C4) > 0xc
	.error "gText_Rom_5F35C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35C4) < 0xc
	.space 0xc - (. - gText_Rom_5F35C4)
	.endif

	@ src/data/text/match_call_messages.h:301 gText_MatchCallBugCatcher_James_Strategy
	.globl gText_Rom_5F35D0
gText_Rom_5F35D0: @ 0x085F35D0
	.string "すばやく こうげきだ!{EOS}"
	.if (. - gText_Rom_5F35D0) > 0xc
	.error "gText_Rom_5F35D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35D0) < 0xc
	.space 0xc - (. - gText_Rom_5F35D0)
	.endif

	@ src/data/text/match_call_messages.h:302 gText_MatchCallBugCatcher_James_Pokemon
	.globl gText_Rom_5F35DC
gText_Rom_5F35DC: @ 0x085F35DC
	.string "むしタイプが いちばん!{EOS}"
	.if (. - gText_Rom_5F35DC) > 0xd
	.error "gText_Rom_5F35DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35DC) < 0xd
	.space 0xd - (. - gText_Rom_5F35DC)
	.endif

	@ src/data/text/match_call_messages.h:303 gText_MatchCallBugCatcher_James_Intro1
	.globl gText_Rom_5F35E9
gText_Rom_5F35E9: @ 0x085F35E9
	.string "むしポケモンを つかまえるなら{EOS}"
	.if (. - gText_Rom_5F35E9) > 0x10
	.error "gText_Rom_5F35E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35E9) < 0x10
	.space 0x10 - (. - gText_Rom_5F35E9)
	.endif

	@ src/data/text/match_call_messages.h:304 gText_MatchCallBugCatcher_James_Intro2
	.globl gText_Rom_5F35F9
gText_Rom_5F35F9: @ 0x085F35F9
	.string "あさはやく おきないとね{EOS}"
	.if (. - gText_Rom_5F35F9) > 0xd
	.error "gText_Rom_5F35F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35F9) < 0xd
	.space 0xd - (. - gText_Rom_5F35F9)
	.endif

	@ src/data/text/match_call_messages.h:306 gText_MatchCallHiker_Trent_Strategy
	.globl gText_Rom_5F3606
gText_Rom_5F3606: @ 0x085F3606
	.string "パワーで しょうぶ!{EOS}"
	.if (. - gText_Rom_5F3606) > 0xb
	.error "gText_Rom_5F3606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3606) < 0xb
	.space 0xb - (. - gText_Rom_5F3606)
	.endif

	@ src/data/text/match_call_messages.h:307 gText_MatchCallHiker_Trent_Pokemon
	.globl gText_Rom_5F3611
gText_Rom_5F3611: @ 0x085F3611
	.string "かたい からだの ポケモン!{EOS}"
	.if (. - gText_Rom_5F3611) > 0xf
	.error "gText_Rom_5F3611 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3611) < 0xf
	.space 0xf - (. - gText_Rom_5F3611)
	.endif

	@ src/data/text/match_call_messages.h:308 gText_MatchCallHiker_Trent_Intro1
	.globl gText_Rom_5F3620
gText_Rom_5F3620: @ 0x085F3620
	.string "きょうの とざんの ために{EOS}"
	.if (. - gText_Rom_5F3620) > 0xe
	.error "gText_Rom_5F3620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3620) < 0xe
	.space 0xe - (. - gText_Rom_5F3620)
	.endif


	@ src/data/text/match_call_messages.h:309 gText_MatchCallHiker_Trent_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallHiker_Trent_Intro2
gText_MatchCallHiker_Trent_Intro2: @ 0x085F362E
	.string "ひとつきまえから けいかく{EOS}"
	.if (. - gText_MatchCallHiker_Trent_Intro2) != 0xe
	.error "gText_MatchCallHiker_Trent_Intro2 must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:311 gText_MatchCallHiker_Sawyer_Strategy
	.globl gText_MatchCallHiker_Sawyer_Strategy
gText_MatchCallHiker_Sawyer_Strategy: @ 0x085F363C
	.string "あつく たたかうぞ!{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Strategy) > 0xb
	.error "gText_MatchCallHiker_Sawyer_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Strategy) < 0xb
	.space 0xb - (. - gText_MatchCallHiker_Sawyer_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:312 gText_MatchCallHiker_Sawyer_Pokemon
	.globl gText_MatchCallHiker_Sawyer_Pokemon
gText_MatchCallHiker_Sawyer_Pokemon: @ 0x085F3647
	.string "あつい ポケモンだ!{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Pokemon) > 0xb
	.error "gText_MatchCallHiker_Sawyer_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Pokemon) < 0xb
	.space 0xb - (. - gText_MatchCallHiker_Sawyer_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:313 gText_MatchCallHiker_Sawyer_Intro1
	.globl gText_MatchCallHiker_Sawyer_Intro1
gText_MatchCallHiker_Sawyer_Intro1: @ 0x085F3652
	.string "ポケモンは すきだけど{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Intro1) > 0xc
	.error "gText_MatchCallHiker_Sawyer_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallHiker_Sawyer_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:314 gText_MatchCallHiker_Sawyer_Intro2
	.globl gText_MatchCallHiker_Sawyer_Intro2
gText_MatchCallHiker_Sawyer_Intro2: @ 0x085F365E
	.string "おねいさんも すきだぞ{EOS}"
	.if (. - gText_MatchCallHiker_Sawyer_Intro2) > 0xc
	.error "gText_MatchCallHiker_Sawyer_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallHiker_Sawyer_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallHiker_Sawyer_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:316 gText_MatchCallYoungCouple_LoisAndHal_Strategy
	.globl gText_MatchCallYoungCouple_LoisAndHal_Strategy
gText_MatchCallYoungCouple_LoisAndHal_Strategy: @ 0x085F366A
	.string "ラブラブさくせん!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Strategy) > 0xa
	.error "gText_MatchCallYoungCouple_LoisAndHal_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Strategy) < 0xa
	.space 0xa - (. - gText_MatchCallYoungCouple_LoisAndHal_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:317 gText_MatchCallYoungCouple_LoisAndHal_Pokemon
	.globl gText_MatchCallYoungCouple_LoisAndHal_Pokemon
gText_MatchCallYoungCouple_LoisAndHal_Pokemon: @ 0x085F3674
	.string "ラブラブ ポケモン!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Pokemon) > 0xb
	.error "gText_MatchCallYoungCouple_LoisAndHal_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Pokemon) < 0xb
	.space 0xb - (. - gText_MatchCallYoungCouple_LoisAndHal_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:318 gText_MatchCallYoungCouple_LoisAndHal_Intro1
	.globl gText_MatchCallYoungCouple_LoisAndHal_Intro1
gText_MatchCallYoungCouple_LoisAndHal_Intro1: @ 0x085F367F
	.string "わたしたち ラブラブ!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro1) > 0xc
	.error "gText_MatchCallYoungCouple_LoisAndHal_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro1) < 0xc
	.space 0xc - (. - gText_MatchCallYoungCouple_LoisAndHal_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:319 gText_MatchCallYoungCouple_LoisAndHal_Intro2
	.globl gText_MatchCallYoungCouple_LoisAndHal_Intro2
gText_MatchCallYoungCouple_LoisAndHal_Intro2: @ 0x085F368B
	.string "えいえんに ラブラブ!{EOS}"
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro2) > 0xc
	.error "gText_MatchCallYoungCouple_LoisAndHal_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallYoungCouple_LoisAndHal_Intro2) < 0xc
	.space 0xc - (. - gText_MatchCallYoungCouple_LoisAndHal_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:321 gText_MatchCallPkmnTrainer_Wally_Strategy
	.globl gText_MatchCallPkmnTrainer_Wally_Strategy
gText_MatchCallPkmnTrainer_Wally_Strategy: @ 0x085F3697
	.string "きもちを すべて だしきります{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Strategy) > 0x10
	.error "gText_MatchCallPkmnTrainer_Wally_Strategy may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnTrainer_Wally_Strategy) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnTrainer_Wally_Strategy)
	.endif

	@ src/data/text/match_call_messages.h:322 gText_MatchCallPkmnTrainer_Wally_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallPkmnTrainer_Wally_Pokemon
gText_MatchCallPkmnTrainer_Wally_Pokemon: @ 0x085F36A7
	.string "はじめて つかまえた ポケモン{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Pokemon) != 0x10
	.error "gText_MatchCallPkmnTrainer_Wally_Pokemon must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:323 gText_MatchCallPkmnTrainer_Wally_Intro1
	.globl gText_MatchCallPkmnTrainer_Wally_Intro1
gText_MatchCallPkmnTrainer_Wally_Intro1: @ 0x085F36B7
	.string "ぼくと ポケモンは{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro1) > 0xa
	.error "gText_MatchCallPkmnTrainer_Wally_Intro1 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro1) < 0xa
	.space 0xa - (. - gText_MatchCallPkmnTrainer_Wally_Intro1)
	.endif

	@ src/data/text/match_call_messages.h:324 gText_MatchCallPkmnTrainer_Wally_Intro2
	.globl gText_MatchCallPkmnTrainer_Wally_Intro2
gText_MatchCallPkmnTrainer_Wally_Intro2: @ 0x085F36C1
	.string "いっしょに つよくなったんです{EOS}"
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro2) > 0x10
	.error "gText_MatchCallPkmnTrainer_Wally_Intro2 may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallPkmnTrainer_Wally_Intro2) < 0x10
	.space 0x10 - (. - gText_MatchCallPkmnTrainer_Wally_Intro2)
	.endif

	@ src/data/text/match_call_messages.h:326 gText_MatchCallRockinWhiz_Roxanne_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_MatchCallRockinWhiz_Roxanne_Strategy
gText_MatchCallRockinWhiz_Roxanne_Strategy: @ 0x085F36D1
	.string "いわタイプ パワーで こうげき{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Strategy) != 0x10
	.error "gText_MatchCallRockinWhiz_Roxanne_Strategy must retain its original byte length"
	.endif

	@ src/data/text/match_call_messages.h:327 gText_MatchCallRockinWhiz_Roxanne_Pokemon
	.globl gText_MatchCallRockinWhiz_Roxanne_Pokemon
gText_MatchCallRockinWhiz_Roxanne_Pokemon: @ 0x085F36E1
	.string "がっしり タイプが このみ!{EOS}"
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Pokemon) > 0xf
	.error "gText_MatchCallRockinWhiz_Roxanne_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_MatchCallRockinWhiz_Roxanne_Pokemon) < 0xf
	.space 0xf - (. - gText_MatchCallRockinWhiz_Roxanne_Pokemon)
	.endif

	@ src/data/text/match_call_messages.h:309 gText_MatchCallHiker_Trent_Intro2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F362E
gText_Rom_5F362E: @ 0x085F362E
	.string "ひとつきまえから けいかく{EOS}"
	.if (. - gText_Rom_5F362E) != 0xe
	.error "gText_Rom_5F362E must retain its original byte length"
	.endif
	.globl gText_Rom_5F3638
	.set gText_Rom_5F3638, gText_Rom_5F362E + 0xa

	@ src/data/text/match_call_messages.h:311 gText_MatchCallHiker_Sawyer_Strategy
	.globl gText_Rom_5F363C
gText_Rom_5F363C: @ 0x085F363C
	.string "あつく たたかうぞ!{EOS}"
	.if (. - gText_Rom_5F363C) > 0xb
	.error "gText_Rom_5F363C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F363C) < 0xb
	.space 0xb - (. - gText_Rom_5F363C)
	.endif

	@ src/data/text/match_call_messages.h:312 gText_MatchCallHiker_Sawyer_Pokemon
	.globl gText_Rom_5F3647
gText_Rom_5F3647: @ 0x085F3647
	.string "あつい ポケモンだ!{EOS}"
	.if (. - gText_Rom_5F3647) > 0xb
	.error "gText_Rom_5F3647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3647) < 0xb
	.space 0xb - (. - gText_Rom_5F3647)
	.endif

	@ src/data/text/match_call_messages.h:313 gText_MatchCallHiker_Sawyer_Intro1
	.globl gText_Rom_5F3652
gText_Rom_5F3652: @ 0x085F3652
	.string "ポケモンは すきだけど{EOS}"
	.if (. - gText_Rom_5F3652) > 0xc
	.error "gText_Rom_5F3652 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3652) < 0xc
	.space 0xc - (. - gText_Rom_5F3652)
	.endif

	@ src/data/text/match_call_messages.h:314 gText_MatchCallHiker_Sawyer_Intro2
	.globl gText_Rom_5F365E
gText_Rom_5F365E: @ 0x085F365E
	.string "おねいさんも すきだぞ{EOS}"
	.if (. - gText_Rom_5F365E) > 0xc
	.error "gText_Rom_5F365E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F365E) < 0xc
	.space 0xc - (. - gText_Rom_5F365E)
	.endif

	@ src/data/text/match_call_messages.h:316 gText_MatchCallYoungCouple_LoisAndHal_Strategy
	.globl gText_Rom_5F366A
gText_Rom_5F366A: @ 0x085F366A
	.string "ラブラブさくせん!{EOS}"
	.if (. - gText_Rom_5F366A) > 0xa
	.error "gText_Rom_5F366A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F366A) < 0xa
	.space 0xa - (. - gText_Rom_5F366A)
	.endif

	@ src/data/text/match_call_messages.h:317 gText_MatchCallYoungCouple_LoisAndHal_Pokemon
	.globl gText_Rom_5F3674
gText_Rom_5F3674: @ 0x085F3674
	.string "ラブラブ ポケモン!{EOS}"
	.if (. - gText_Rom_5F3674) > 0xb
	.error "gText_Rom_5F3674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3674) < 0xb
	.space 0xb - (. - gText_Rom_5F3674)
	.endif

	@ src/data/text/match_call_messages.h:318 gText_MatchCallYoungCouple_LoisAndHal_Intro1
	.globl gText_Rom_5F367F
gText_Rom_5F367F: @ 0x085F367F
	.string "わたしたち ラブラブ!{EOS}"
	.if (. - gText_Rom_5F367F) > 0xc
	.error "gText_Rom_5F367F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F367F) < 0xc
	.space 0xc - (. - gText_Rom_5F367F)
	.endif

	@ src/data/text/match_call_messages.h:319 gText_MatchCallYoungCouple_LoisAndHal_Intro2
	.globl gText_Rom_5F368B
gText_Rom_5F368B: @ 0x085F368B
	.string "えいえんに ラブラブ!{EOS}"
	.if (. - gText_Rom_5F368B) > 0xc
	.error "gText_Rom_5F368B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F368B) < 0xc
	.space 0xc - (. - gText_Rom_5F368B)
	.endif

	@ src/data/text/match_call_messages.h:321 gText_MatchCallPkmnTrainer_Wally_Strategy
	.globl gText_Rom_5F3697
gText_Rom_5F3697: @ 0x085F3697
	.string "きもちを すべて だしきります{EOS}"
	.if (. - gText_Rom_5F3697) > 0x10
	.error "gText_Rom_5F3697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3697) < 0x10
	.space 0x10 - (. - gText_Rom_5F3697)
	.endif

	@ src/data/text/match_call_messages.h:322 gText_MatchCallPkmnTrainer_Wally_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F36A7
gText_Rom_5F36A7: @ 0x085F36A7
	.string "はじめて つかまえた ポケモン{EOS}"
	.if (. - gText_Rom_5F36A7) != 0x10
	.error "gText_Rom_5F36A7 must retain its original byte length"
	.endif
	.globl gText_Rom_5F36B2
	.set gText_Rom_5F36B2, gText_Rom_5F36A7 + 0xb

	@ src/data/text/match_call_messages.h:323 gText_MatchCallPkmnTrainer_Wally_Intro1
	.globl gText_Rom_5F36B7
gText_Rom_5F36B7: @ 0x085F36B7
	.string "ぼくと ポケモンは{EOS}"
	.if (. - gText_Rom_5F36B7) > 0xa
	.error "gText_Rom_5F36B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36B7) < 0xa
	.space 0xa - (. - gText_Rom_5F36B7)
	.endif

	@ src/data/text/match_call_messages.h:324 gText_MatchCallPkmnTrainer_Wally_Intro2
	.globl gText_Rom_5F36C1
gText_Rom_5F36C1: @ 0x085F36C1
	.string "いっしょに つよくなったんです{EOS}"
	.if (. - gText_Rom_5F36C1) > 0x10
	.error "gText_Rom_5F36C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36C1) < 0x10
	.space 0x10 - (. - gText_Rom_5F36C1)
	.endif

	@ src/data/text/match_call_messages.h:326 gText_MatchCallRockinWhiz_Roxanne_Strategy
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F36D1
gText_Rom_5F36D1: @ 0x085F36D1
	.string "いわタイプ パワーで こうげき{EOS}"
	.if (. - gText_Rom_5F36D1) != 0x10
	.error "gText_Rom_5F36D1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F36DC
	.set gText_Rom_5F36DC, gText_Rom_5F36D1 + 0xb

	@ src/data/text/match_call_messages.h:327 gText_MatchCallRockinWhiz_Roxanne_Pokemon
	.globl gText_Rom_5F36E1
gText_Rom_5F36E1: @ 0x085F36E1
	.string "がっしり タイプが このみ!{EOS}"
	.if (. - gText_Rom_5F36E1) > 0xf
	.error "gText_Rom_5F36E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36E1) < 0xf
	.space 0xf - (. - gText_Rom_5F36E1)
	.endif

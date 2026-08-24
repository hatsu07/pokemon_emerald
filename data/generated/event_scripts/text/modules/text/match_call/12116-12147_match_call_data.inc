	.globl gText_Rom_265A3B
	.set gText_Rom_265A3B, MatchCall_NegativeBattleText14 + 0x31

	@ data/text/match_call.inc:88 MatchCall_PositiveBattleText1
	.globl MatchCall_PositiveBattleText1
MatchCall_PositiveBattleText1: @ 0x08265A3F
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です!\pさっき しょうぶ したんだけど\nかったよ! かったよ!\pぼくの {STR_VAR_2} が\nすごく がんばったんだ! うれしいなー{EOS}"
	.if (. - MatchCall_PositiveBattleText1) > 0x4c
	.error "MatchCall_PositiveBattleText1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText1) < 0x4c
	.space 0x4c - (. - MatchCall_PositiveBattleText1)
	.endif

	@ data/text/match_call.inc:91 MatchCall_PositiveBattleText2
	.globl MatchCall_PositiveBattleText2
MatchCall_PositiveBattleText2: @ 0x08265A8B
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です!\pきのう しょうぶ したんだけど\nかったのよ! うれしいー!{EOS}"
	.if (. - MatchCall_PositiveBattleText2) > 0x31
	.error "MatchCall_PositiveBattleText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText2) < 0x31
	.space 0x31 - (. - MatchCall_PositiveBattleText2)
	.endif

	@ data/text/match_call.inc:94 MatchCall_PositiveBattleText3
	.globl MatchCall_PositiveBattleText3
MatchCall_PositiveBattleText3: @ 0x08265ABC
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だぞ\pちょうしは どうだ?\nおれも このまえ しょうぶ したんだけど\lおれの {STR_VAR_2}が だいかつやく さ!\pつぎ {PLAYER}と しょうぶ するときは\nぜったい まけない からなー!{EOS}"
	.if (. - MatchCall_PositiveBattleText3) > 0x63
	.error "MatchCall_PositiveBattleText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText3) < 0x63
	.space 0x63 - (. - MatchCall_PositiveBattleText3)
	.endif

	@ data/text/match_call.inc:97 MatchCall_PositiveBattleText4
	.globl MatchCall_PositiveBattleText4
MatchCall_PositiveBattleText4: @ 0x08265B1F
	.string "やあ {PLAYER}\n{STR_VAR_1} だ\pさっき しょうぶ したんだけど\nなんとか かつ ことが できたよ\pぼくの {STR_VAR_2}が\nすごく がんばったんだ{EOS}"
	.if (. - MatchCall_PositiveBattleText4) > 0x40
	.error "MatchCall_PositiveBattleText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText4) < 0x40
	.space 0x40 - (. - MatchCall_PositiveBattleText4)
	.endif

	@ data/text/match_call.inc:100 MatchCall_PositiveBattleText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_PositiveBattleText5
MatchCall_PositiveBattleText5: @ 0x08265B5F
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pちょうしは どうだい?\nしょうぶ してる?\pおれ このまえ かったよ!\n{STR_VAR_2}が だいかつやく さ!\pつぎこそ きみに かつからね!\nじゃあ またね{EOS}"
	.if (. - MatchCall_PositiveBattleText5) != 0x57
	.error "MatchCall_PositiveBattleText5 must retain its original byte length"
	.endif
	.globl gText_Rom_265BB2
	.set gText_Rom_265BB2, MatchCall_PositiveBattleText5 + 0x53

	@ data/text/match_call.inc:103 MatchCall_PositiveBattleText6
	.globl MatchCall_PositiveBattleText6
MatchCall_PositiveBattleText6: @ 0x08265BB6
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pげんき かい?\nおれは さいきん ちょうしが よくて\lさっきも しょうぶに かったところだ\pつぎに きみと しょうぶ するときは\nぜったいに まけないからな{EOS}"
	.if (. - MatchCall_PositiveBattleText6) > 0x5c
	.error "MatchCall_PositiveBattleText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText6) < 0x5c
	.space 0x5c - (. - MatchCall_PositiveBattleText6)
	.endif

	@ data/text/match_call.inc:106 MatchCall_PositiveBattleText7
	.globl MatchCall_PositiveBattleText7
MatchCall_PositiveBattleText7: @ 0x08265C12
	.string "{PLAYER}{KUN}?\n{STR_VAR_1} だけど\pぼくの {STR_VAR_2} つよいわけよ!\nさっきも しょうぶで かったわけよ!\pつぎに きみと しょうぶ するのが\nたのしみだなあ{EOS}"
	.if (. - MatchCall_PositiveBattleText7) > 0x49
	.error "MatchCall_PositiveBattleText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText7) < 0x49
	.space 0x49 - (. - MatchCall_PositiveBattleText7)
	.endif

	@ data/text/match_call.inc:109 MatchCall_PositiveBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_PositiveBattleText8
MatchCall_PositiveBattleText8: @ 0x08265C5B
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pげんき かしら?\nわたしね さっき しょうぶ して かったの\p{STR_VAR_2} が とっても がんばったのよ\nじゃあ またね{EOS}"
	.if (. - MatchCall_PositiveBattleText8) != 0x4c
	.error "MatchCall_PositiveBattleText8 must retain its original byte length"
	.endif
	.globl gText_Rom_265CA3
	.set gText_Rom_265CA3, MatchCall_PositiveBattleText8 + 0x48

	@ data/text/match_call.inc:112 MatchCall_PositiveBattleText9
	.globl MatchCall_PositiveBattleText9
MatchCall_PositiveBattleText9: @ 0x08265CA7
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} でーす!\pポケモンの ちょうしは どう?\nわたしのほうは さっき しょうぶして\lかった ところよ!\pわたしの {STR_VAR_2} が\nすごい かつやく だったのよ\pみせたかったなー\nじゃあ またね!{EOS}"
	.if (. - MatchCall_PositiveBattleText9) > 0x6c
	.error "MatchCall_PositiveBattleText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText9) < 0x6c
	.space 0x6c - (. - MatchCall_PositiveBattleText9)
	.endif

	@ data/text/match_call.inc:115 MatchCall_PositiveBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_PositiveBattleText10
MatchCall_PositiveBattleText10: @ 0x08265D13
	.string "あら こんにちは {PLAYER}{KUN}\n{STR_VAR_1} よ\pちょうしは どうかしら?\nわたしの ポケモン ちょうし いいみたい\pさっきも しょうぶで かてたのよ\nじゃあ またね{EOS}"
	.if (. - MatchCall_PositiveBattleText10) != 0x4e
	.error "MatchCall_PositiveBattleText10 must retain its original byte length"
	.endif
	.globl gText_Rom_265D5D
	.set gText_Rom_265D5D, MatchCall_PositiveBattleText10 + 0x4a

	@ data/text/match_call.inc:118 MatchCall_PositiveBattleText11
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_PositiveBattleText11
MatchCall_PositiveBattleText11: @ 0x08265D61
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だよ\pポケモン しょうぶ してるかい?\nおじさん きょうも しょうぶに かってねー\pちょうし いいんだよ がははは\nじゃあ またね{EOS}"
	.if (. - MatchCall_PositiveBattleText11) != 0x4d
	.error "MatchCall_PositiveBattleText11 must retain its original byte length"
	.endif
	.globl gText_Rom_265DAA
	.set gText_Rom_265DAA, MatchCall_PositiveBattleText11 + 0x49

	@ data/text/match_call.inc:121 MatchCall_PositiveBattleText12
	.globl MatchCall_PositiveBattleText12
MatchCall_PositiveBattleText12: @ 0x08265DAE
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃよ\pげんきに してるかのう?\nわしは げんき じゃぞ\pさっきも しょうぶに かった ところじゃ\nわかいもんには まだまだ まけんぞ{EOS}"
	.if (. - MatchCall_PositiveBattleText12) > 0x4f
	.error "MatchCall_PositiveBattleText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText12) < 0x4f
	.space 0x4f - (. - MatchCall_PositiveBattleText12)
	.endif

	@ data/text/match_call.inc:124 MatchCall_PositiveBattleText13
	.globl MatchCall_PositiveBattleText13
MatchCall_PositiveBattleText13: @ 0x08265DFD
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃよ\pげんきに してるかのう?\nわしは げんき じゃぞ\pさっきも しょうぶに かった ところじゃ\nわかいもんには まだまだ まけんぞ\pじゃあ またのう{EOS}"
	.if (. - MatchCall_PositiveBattleText13) > 0x58
	.error "MatchCall_PositiveBattleText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText13) < 0x58
	.space 0x58 - (. - MatchCall_PositiveBattleText13)
	.endif


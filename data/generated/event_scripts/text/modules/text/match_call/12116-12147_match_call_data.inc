	.globl gText_Rom_265A3B
	.set gText_Rom_265A3B, gText_Rom_265A0A + 0x31

	@ data/text/match_call.inc:88 MatchCall_PositiveBattleText1
	.globl gText_Rom_265A3F
gText_Rom_265A3F: @ 0x08265A3F
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です!\pさっき しょうぶ したんだけど\nかったよ! かったよ!\pぼくの {STR_VAR_2} が\nすごく がんばったんだ! うれしいなー{EOS}"
	.if (. - gText_Rom_265A3F) > 0x4c
	.error "gText_Rom_265A3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265A3F) < 0x4c
	.space 0x4c - (. - gText_Rom_265A3F)
	.endif

	@ data/text/match_call.inc:91 MatchCall_PositiveBattleText2
	.globl gText_Rom_265A8B
gText_Rom_265A8B: @ 0x08265A8B
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} です!\pきのう しょうぶ したんだけど\nかったのよ! うれしいー!{EOS}"
	.if (. - gText_Rom_265A8B) > 0x31
	.error "gText_Rom_265A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265A8B) < 0x31
	.space 0x31 - (. - gText_Rom_265A8B)
	.endif

	@ data/text/match_call.inc:94 MatchCall_PositiveBattleText3
	.globl gText_Rom_265ABC
gText_Rom_265ABC: @ 0x08265ABC
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だぞ\pちょうしは どうだ?\nおれも このまえ しょうぶ したんだけど\lおれの {STR_VAR_2}が だいかつやく さ!\pつぎ {PLAYER}と しょうぶ するときは\nぜったい まけない からなー!{EOS}"
	.if (. - gText_Rom_265ABC) > 0x63
	.error "gText_Rom_265ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265ABC) < 0x63
	.space 0x63 - (. - gText_Rom_265ABC)
	.endif

	@ data/text/match_call.inc:97 MatchCall_PositiveBattleText4
	.globl gText_Rom_265B1F
gText_Rom_265B1F: @ 0x08265B1F
	.string "やあ {PLAYER}\n{STR_VAR_1} だ\pさっき しょうぶ したんだけど\nなんとか かつ ことが できたよ\pぼくの {STR_VAR_2}が\nすごく がんばったんだ{EOS}"
	.if (. - gText_Rom_265B1F) > 0x40
	.error "gText_Rom_265B1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265B1F) < 0x40
	.space 0x40 - (. - gText_Rom_265B1F)
	.endif

	@ data/text/match_call.inc:100 MatchCall_PositiveBattleText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265B5F
gText_Rom_265B5F: @ 0x08265B5F
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pちょうしは どうだい?\nしょうぶ してる?\pおれ このまえ かったよ!\n{STR_VAR_2}が だいかつやく さ!\pつぎこそ きみに かつからね!\nじゃあ またね{EOS}"
	.if (. - gText_Rom_265B5F) != 0x57
	.error "gText_Rom_265B5F must retain its original byte length"
	.endif
	.globl gText_Rom_265BB2
	.set gText_Rom_265BB2, gText_Rom_265B5F + 0x53

	@ data/text/match_call.inc:103 MatchCall_PositiveBattleText6
	.globl gText_Rom_265BB6
gText_Rom_265BB6: @ 0x08265BB6
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pげんき かい?\nおれは さいきん ちょうしが よくて\lさっきも しょうぶに かったところだ\pつぎに きみと しょうぶ するときは\nぜったいに まけないからな{EOS}"
	.if (. - gText_Rom_265BB6) > 0x5c
	.error "gText_Rom_265BB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265BB6) < 0x5c
	.space 0x5c - (. - gText_Rom_265BB6)
	.endif

	@ data/text/match_call.inc:106 MatchCall_PositiveBattleText7
	.globl gText_Rom_265C12
gText_Rom_265C12: @ 0x08265C12
	.string "{PLAYER}{KUN}?\n{STR_VAR_1} だけど\pぼくの {STR_VAR_2} つよいわけよ!\nさっきも しょうぶで かったわけよ!\pつぎに きみと しょうぶ するのが\nたのしみだなあ{EOS}"
	.if (. - gText_Rom_265C12) > 0x49
	.error "gText_Rom_265C12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265C12) < 0x49
	.space 0x49 - (. - gText_Rom_265C12)
	.endif

	@ data/text/match_call.inc:109 MatchCall_PositiveBattleText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265C5B
gText_Rom_265C5B: @ 0x08265C5B
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pげんき かしら?\nわたしね さっき しょうぶ して かったの\p{STR_VAR_2} が とっても がんばったのよ\nじゃあ またね{EOS}"
	.if (. - gText_Rom_265C5B) != 0x4c
	.error "gText_Rom_265C5B must retain its original byte length"
	.endif
	.globl gText_Rom_265CA3
	.set gText_Rom_265CA3, gText_Rom_265C5B + 0x48

	@ data/text/match_call.inc:112 MatchCall_PositiveBattleText9
	.globl gText_Rom_265CA7
gText_Rom_265CA7: @ 0x08265CA7
	.string "こんにちは {PLAYER}{KUN}!\n{STR_VAR_1} でーす!\pポケモンの ちょうしは どう?\nわたしのほうは さっき しょうぶして\lかった ところよ!\pわたしの {STR_VAR_2} が\nすごい かつやく だったのよ\pみせたかったなー\nじゃあ またね!{EOS}"
	.if (. - gText_Rom_265CA7) > 0x6c
	.error "gText_Rom_265CA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265CA7) < 0x6c
	.space 0x6c - (. - gText_Rom_265CA7)
	.endif

	@ data/text/match_call.inc:115 MatchCall_PositiveBattleText10
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265D13
gText_Rom_265D13: @ 0x08265D13
	.string "あら こんにちは {PLAYER}{KUN}\n{STR_VAR_1} よ\pちょうしは どうかしら?\nわたしの ポケモン ちょうし いいみたい\pさっきも しょうぶで かてたのよ\nじゃあ またね{EOS}"
	.if (. - gText_Rom_265D13) != 0x4e
	.error "gText_Rom_265D13 must retain its original byte length"
	.endif
	.globl gText_Rom_265D5D
	.set gText_Rom_265D5D, gText_Rom_265D13 + 0x4a

	@ data/text/match_call.inc:118 MatchCall_PositiveBattleText11
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_265D61
gText_Rom_265D61: @ 0x08265D61
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だよ\pポケモン しょうぶ してるかい?\nおじさん きょうも しょうぶに かってねー\pちょうし いいんだよ がははは\nじゃあ またね{EOS}"
	.if (. - gText_Rom_265D61) != 0x4d
	.error "gText_Rom_265D61 must retain its original byte length"
	.endif
	.globl gText_Rom_265DAA
	.set gText_Rom_265DAA, gText_Rom_265D61 + 0x49

	@ data/text/match_call.inc:121 MatchCall_PositiveBattleText12
	.globl gText_Rom_265DAE
gText_Rom_265DAE: @ 0x08265DAE
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃよ\pげんきに してるかのう?\nわしは げんき じゃぞ\pさっきも しょうぶに かった ところじゃ\nわかいもんには まだまだ まけんぞ{EOS}"
	.if (. - gText_Rom_265DAE) > 0x4f
	.error "gText_Rom_265DAE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265DAE) < 0x4f
	.space 0x4f - (. - gText_Rom_265DAE)
	.endif

	@ data/text/match_call.inc:124 MatchCall_PositiveBattleText13
	.globl gText_Rom_265DFD
gText_Rom_265DFD: @ 0x08265DFD
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃよ\pげんきに してるかのう?\nわしは げんき じゃぞ\pさっきも しょうぶに かった ところじゃ\nわかいもんには まだまだ まけんぞ\pじゃあ またのう{EOS}"
	.if (. - gText_Rom_265DFD) > 0x58
	.error "gText_Rom_265DFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265DFD) < 0x58
	.space 0x58 - (. - gText_Rom_265DFD)
	.endif


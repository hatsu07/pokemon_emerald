	@ data/text/match_call.inc:127 MatchCall_PositiveBattleText14
	.globl gText_Rom_265E55
gText_Rom_265E55: @ 0x08265E55
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pこのまえ しょうぶ したんだけど\nわたしの {STR_VAR_2}が だいかつやく!\p{PLAYER}{KUN}にも みせたかったな\nじゃあ また{EOS}"
	.if (. - gText_Rom_265E55) > 0x48
	.error "gText_Rom_265E55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265E55) < 0x48
	.space 0x48 - (. - gText_Rom_265E55)
	.endif

	@ data/text/match_call.inc:130 MatchCall_SameRouteBattleRequestText1
	.globl gText_Rom_265E9D
gText_Rom_265E9D: @ 0x08265E9D
	.string "{PLAYER}さん こんにちは!\n{STR_VAR_1} だよ\pえ! いま {STR_VAR_2} に いるの?\nじゃあ いまから しょうぶ しようよ!\lまってるよ! じゃあね!{EOS}"
	.if (. - gText_Rom_265E9D) > 0x43
	.error "gText_Rom_265E9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265E9D) < 0x43
	.space 0x43 - (. - gText_Rom_265E9D)
	.endif

	@ data/text/match_call.inc:133 MatchCall_SameRouteBattleRequestText2
	.globl gText_Rom_265EE0
gText_Rom_265EE0: @ 0x08265EE0
	.string "{PLAYER}さん こんにちは!\n{STR_VAR_1} でーす\pえ! いま {STR_VAR_2} に いるの?\nじゃあ いまから しょうぶ しない?\lまってるわよ! じゃあね!{EOS}"
	.if (. - gText_Rom_265EE0) > 0x44
	.error "gText_Rom_265EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265EE0) < 0x44
	.space 0x44 - (. - gText_Rom_265EE0)
	.endif

	@ data/text/match_call.inc:136 MatchCall_SameRouteBattleRequestText3
	.globl gText_Rom_265F24
gText_Rom_265F24: @ 0x08265F24
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pお いま {STR_VAR_2}にいるのか?\nじゃあ これから しょうぶ しないか?\pこんどこそ まけない からな!\nまってるぞー じゃあな{EOS}"
	.if (. - gText_Rom_265F24) > 0x4d
	.error "gText_Rom_265F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265F24) < 0x4d
	.space 0x4d - (. - gText_Rom_265F24)
	.endif

	@ data/text/match_call.inc:139 MatchCall_SameRouteBattleRequestText4
	.globl gText_Rom_265F71
gText_Rom_265F71: @ 0x08265F71
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pいま どこに いるんだい?\nえ {STR_VAR_2}?\pじゃあ これから しょうぶ しないか?\nまってるよ じゃあね{EOS}"
	.if (. - gText_Rom_265F71) > 0x40
	.error "gText_Rom_265F71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265F71) < 0x40
	.space 0x40 - (. - gText_Rom_265F71)
	.endif

	@ data/text/match_call.inc:142 MatchCall_SameRouteBattleRequestText5
	.globl gText_Rom_265FB1
gText_Rom_265FB1: @ 0x08265FB1
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nえ? いま {STR_VAR_2}に いるの?\pそれなら これから おれと\nしょうぶ してみないかい?\pまってるよ じゃあね{EOS}"
	.if (. - gText_Rom_265FB1) > 0x50
	.error "gText_Rom_265FB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_265FB1) < 0x50
	.space 0x50 - (. - gText_Rom_265FB1)
	.endif

	@ data/text/match_call.inc:145 MatchCall_SameRouteBattleRequestText6
	.globl gText_Rom_266001
gText_Rom_266001: @ 0x08266001
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pポケモンの ちょうしは どうだい?\nへえ いま {STR_VAR_2}に いるのか\pじゃあ これから おれと\nしょうぶ しよう\pまってるよ じゃあね{EOS}"
	.if (. - gText_Rom_266001) > 0x4f
	.error "gText_Rom_266001 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266001) < 0x4f
	.space 0x4f - (. - gText_Rom_266001)
	.endif

	@ data/text/match_call.inc:148 MatchCall_SameRouteBattleRequestText7
	.globl gText_Rom_266050
gText_Rom_266050: @ 0x08266050
	.string "・・・あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pへー いま {STR_VAR_2}に いるの?\nじゃあ しょうぶ しよう これから\pおれの ポケモンを みせてあげるよ\nじゃあ まってるよ{EOS}"
	.if (. - gText_Rom_266050) > 0x52
	.error "gText_Rom_266050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266050) < 0x52
	.space 0x52 - (. - gText_Rom_266050)
	.endif

	@ data/text/match_call.inc:151 MatchCall_SameRouteBattleRequestText8 (+1 aliases)
	.globl gText_Rom_2660A2
gText_Rom_2660A2: @ 0x082660A2
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pげんき ですか?\nあら いま {STR_VAR_2}に いるのね\pじゃあ これから\nわたしと しょうぶ しない?\pまってるわよ じゃあね!{EOS}"
	.if (. - gText_Rom_2660A2) > 0x50
	.error "gText_Rom_2660A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2660A2) < 0x50
	.space 0x50 - (. - gText_Rom_2660A2)
	.endif

	@ data/text/match_call.inc:154 MatchCall_SameRouteBattleRequestText9
	.globl gText_Rom_2660F2
gText_Rom_2660F2: @ 0x082660F2
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pげんきに してる?\nあら いま {STR_VAR_2}に いるの?\pそっかー じゃあ これから\nわたしと しょうぶ してみない?\pじゃあね まってるわよ{EOS}"
	.if (. - gText_Rom_2660F2) > 0x5a
	.error "gText_Rom_2660F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2660F2) < 0x5a
	.space 0x5a - (. - gText_Rom_2660F2)
	.endif

	@ data/text/match_call.inc:151 MatchCall_SameRouteBattleRequestText8 (+1 aliases)
	.globl gText_Rom_26614C
gText_Rom_26614C: @ 0x0826614C
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pげんき ですか?\nあら いま {STR_VAR_2}に いるのね\pじゃあ これから\nわたしと しょうぶ しない?\pまってるわよ じゃあね!{EOS}"
	.if (. - gText_Rom_26614C) > 0x50
	.error "gText_Rom_26614C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26614C) < 0x50
	.space 0x50 - (. - gText_Rom_26614C)
	.endif

	@ data/text/match_call.inc:160 MatchCall_SameRouteBattleRequestText11
	.globl gText_Rom_26619C
gText_Rom_26619C: @ 0x0826619C
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\pほほう\nいま {STR_VAR_2}に いるんだって?\pじゃあ これから おじさんと\nポケモン しょうぶ しないかい?\pまってるよ じゃあね{EOS}"
	.if (. - gText_Rom_26619C) > 0x4c
	.error "gText_Rom_26619C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26619C) < 0x4c
	.space 0x4c - (. - gText_Rom_26619C)
	.endif

	@ data/text/match_call.inc:163 MatchCall_SameRouteBattleRequestText12
	.globl gText_Rom_2661E8
gText_Rom_2661E8: @ 0x082661E8
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lいま どこに いるのかな?\p{STR_VAR_2} か! すぐ ちかく じゃな\nこれから わしと しょうぶ せんか?\pまっておるぞ じゃあの{EOS}"
	.if (. - gText_Rom_2661E8) > 0x4d
	.error "gText_Rom_2661E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2661E8) < 0x4d
	.space 0x4d - (. - gText_Rom_2661E8)
	.endif

	@ data/text/match_call.inc:166 MatchCall_SameRouteBattleRequestText13
	.globl gText_Rom_266235
gText_Rom_266235: @ 0x08266235
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかのう?\pほうほう いまは {STR_VAR_2}に おるのか\nちかいから こっちへ よって\pいちど しょうぶ して いかんかの?\nまっておるぞ じゃあの{EOS}"
	.if (. - gText_Rom_266235) > 0x57
	.error "gText_Rom_266235 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266235) < 0x57
	.space 0x57 - (. - gText_Rom_266235)
	.endif

	@ data/text/match_call.inc:169 MatchCall_SameRouteBattleRequestText14
	.globl gText_Rom_26628C
gText_Rom_26628C: @ 0x0826628C
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pあら いま {STR_VAR_2}に いるの?\nすぐちかくに いるのね\pじゃあ これから おばさんと\nポケモンしょうぶ してみない?\pまってるわよ じゃあね{EOS}"
	.if (. - gText_Rom_26628C) > 0x59
	.error "gText_Rom_26628C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26628C) < 0x59
	.space 0x59 - (. - gText_Rom_26628C)
	.endif

	@ data/text/match_call.inc:172 MatchCall_DifferentRouteBattleRequestText1
	.globl gText_Rom_2662E5
gText_Rom_2662E5: @ 0x082662E5
	.string "あ! {PLAYER}{KUN}!\n{STR_VAR_1} です\pこれから ぼくと しょうぶ しない?\n{STR_VAR_2} で まってるよ!{EOS}"
	.if (. - gText_Rom_2662E5) > 0x2e
	.error "gText_Rom_2662E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2662E5) < 0x2e
	.space 0x2e - (. - gText_Rom_2662E5)
	.endif


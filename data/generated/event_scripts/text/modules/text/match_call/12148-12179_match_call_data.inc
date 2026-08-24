	@ data/text/match_call.inc:127 MatchCall_PositiveBattleText14
	.globl MatchCall_PositiveBattleText14
MatchCall_PositiveBattleText14: @ 0x08265E55
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pこのまえ しょうぶ したんだけど\nわたしの {STR_VAR_2}が だいかつやく!\p{PLAYER}{KUN}にも みせたかったな\nじゃあ また{EOS}"
	.if (. - MatchCall_PositiveBattleText14) > 0x48
	.error "MatchCall_PositiveBattleText14 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PositiveBattleText14) < 0x48
	.space 0x48 - (. - MatchCall_PositiveBattleText14)
	.endif

	@ data/text/match_call.inc:130 MatchCall_SameRouteBattleRequestText1
	.globl MatchCall_SameRouteBattleRequestText1
MatchCall_SameRouteBattleRequestText1: @ 0x08265E9D
	.string "{PLAYER}さん こんにちは!\n{STR_VAR_1} だよ\pえ! いま {STR_VAR_2} に いるの?\nじゃあ いまから しょうぶ しようよ!\lまってるよ! じゃあね!{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText1) > 0x43
	.error "MatchCall_SameRouteBattleRequestText1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText1) < 0x43
	.space 0x43 - (. - MatchCall_SameRouteBattleRequestText1)
	.endif

	@ data/text/match_call.inc:133 MatchCall_SameRouteBattleRequestText2
	.globl MatchCall_SameRouteBattleRequestText2
MatchCall_SameRouteBattleRequestText2: @ 0x08265EE0
	.string "{PLAYER}さん こんにちは!\n{STR_VAR_1} でーす\pえ! いま {STR_VAR_2} に いるの?\nじゃあ いまから しょうぶ しない?\lまってるわよ! じゃあね!{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText2) > 0x44
	.error "MatchCall_SameRouteBattleRequestText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText2) < 0x44
	.space 0x44 - (. - MatchCall_SameRouteBattleRequestText2)
	.endif

	@ data/text/match_call.inc:136 MatchCall_SameRouteBattleRequestText3
	.globl MatchCall_SameRouteBattleRequestText3
MatchCall_SameRouteBattleRequestText3: @ 0x08265F24
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pお いま {STR_VAR_2}にいるのか?\nじゃあ これから しょうぶ しないか?\pこんどこそ まけない からな!\nまってるぞー じゃあな{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText3) > 0x4d
	.error "MatchCall_SameRouteBattleRequestText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText3) < 0x4d
	.space 0x4d - (. - MatchCall_SameRouteBattleRequestText3)
	.endif

	@ data/text/match_call.inc:139 MatchCall_SameRouteBattleRequestText4
	.globl MatchCall_SameRouteBattleRequestText4
MatchCall_SameRouteBattleRequestText4: @ 0x08265F71
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pいま どこに いるんだい?\nえ {STR_VAR_2}?\pじゃあ これから しょうぶ しないか?\nまってるよ じゃあね{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText4) > 0x40
	.error "MatchCall_SameRouteBattleRequestText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText4) < 0x40
	.space 0x40 - (. - MatchCall_SameRouteBattleRequestText4)
	.endif

	@ data/text/match_call.inc:142 MatchCall_SameRouteBattleRequestText5
	.globl MatchCall_SameRouteBattleRequestText5
MatchCall_SameRouteBattleRequestText5: @ 0x08265FB1
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だよ\pちょうしは どうだい?\nえ? いま {STR_VAR_2}に いるの?\pそれなら これから おれと\nしょうぶ してみないかい?\pまってるよ じゃあね{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText5) > 0x50
	.error "MatchCall_SameRouteBattleRequestText5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText5) < 0x50
	.space 0x50 - (. - MatchCall_SameRouteBattleRequestText5)
	.endif

	@ data/text/match_call.inc:145 MatchCall_SameRouteBattleRequestText6
	.globl MatchCall_SameRouteBattleRequestText6
MatchCall_SameRouteBattleRequestText6: @ 0x08266001
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pポケモンの ちょうしは どうだい?\nへえ いま {STR_VAR_2}に いるのか\pじゃあ これから おれと\nしょうぶ しよう\pまってるよ じゃあね{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText6) > 0x4f
	.error "MatchCall_SameRouteBattleRequestText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText6) < 0x4f
	.space 0x4f - (. - MatchCall_SameRouteBattleRequestText6)
	.endif

	@ data/text/match_call.inc:148 MatchCall_SameRouteBattleRequestText7
	.globl MatchCall_SameRouteBattleRequestText7
MatchCall_SameRouteBattleRequestText7: @ 0x08266050
	.string "・・・あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pへー いま {STR_VAR_2}に いるの?\nじゃあ しょうぶ しよう これから\pおれの ポケモンを みせてあげるよ\nじゃあ まってるよ{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText7) > 0x52
	.error "MatchCall_SameRouteBattleRequestText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText7) < 0x52
	.space 0x52 - (. - MatchCall_SameRouteBattleRequestText7)
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
	.globl MatchCall_SameRouteBattleRequestText9
MatchCall_SameRouteBattleRequestText9: @ 0x082660F2
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pげんきに してる?\nあら いま {STR_VAR_2}に いるの?\pそっかー じゃあ これから\nわたしと しょうぶ してみない?\pじゃあね まってるわよ{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText9) > 0x5a
	.error "MatchCall_SameRouteBattleRequestText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText9) < 0x5a
	.space 0x5a - (. - MatchCall_SameRouteBattleRequestText9)
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
	.globl MatchCall_SameRouteBattleRequestText11
MatchCall_SameRouteBattleRequestText11: @ 0x0826619C
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\pほほう\nいま {STR_VAR_2}に いるんだって?\pじゃあ これから おじさんと\nポケモン しょうぶ しないかい?\pまってるよ じゃあね{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText11) > 0x4c
	.error "MatchCall_SameRouteBattleRequestText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText11) < 0x4c
	.space 0x4c - (. - MatchCall_SameRouteBattleRequestText11)
	.endif

	@ data/text/match_call.inc:163 MatchCall_SameRouteBattleRequestText12
	.globl MatchCall_SameRouteBattleRequestText12
MatchCall_SameRouteBattleRequestText12: @ 0x082661E8
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが\lいま どこに いるのかな?\p{STR_VAR_2} か! すぐ ちかく じゃな\nこれから わしと しょうぶ せんか?\pまっておるぞ じゃあの{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText12) > 0x4d
	.error "MatchCall_SameRouteBattleRequestText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText12) < 0x4d
	.space 0x4d - (. - MatchCall_SameRouteBattleRequestText12)
	.endif

	@ data/text/match_call.inc:166 MatchCall_SameRouteBattleRequestText13
	.globl MatchCall_SameRouteBattleRequestText13
MatchCall_SameRouteBattleRequestText13: @ 0x08266235
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかのう?\pほうほう いまは {STR_VAR_2}に おるのか\nちかいから こっちへ よって\pいちど しょうぶ して いかんかの?\nまっておるぞ じゃあの{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText13) > 0x57
	.error "MatchCall_SameRouteBattleRequestText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText13) < 0x57
	.space 0x57 - (. - MatchCall_SameRouteBattleRequestText13)
	.endif

	@ data/text/match_call.inc:169 MatchCall_SameRouteBattleRequestText14
	.globl MatchCall_SameRouteBattleRequestText14
MatchCall_SameRouteBattleRequestText14: @ 0x0826628C
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pあら いま {STR_VAR_2}に いるの?\nすぐちかくに いるのね\pじゃあ これから おばさんと\nポケモンしょうぶ してみない?\pまってるわよ じゃあね{EOS}"
	.if (. - MatchCall_SameRouteBattleRequestText14) > 0x59
	.error "MatchCall_SameRouteBattleRequestText14 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_SameRouteBattleRequestText14) < 0x59
	.space 0x59 - (. - MatchCall_SameRouteBattleRequestText14)
	.endif

	@ data/text/match_call.inc:172 MatchCall_DifferentRouteBattleRequestText1
	.globl MatchCall_DifferentRouteBattleRequestText1
MatchCall_DifferentRouteBattleRequestText1: @ 0x082662E5
	.string "あ! {PLAYER}{KUN}!\n{STR_VAR_1} です\pこれから ぼくと しょうぶ しない?\n{STR_VAR_2} で まってるよ!{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText1) > 0x2e
	.error "MatchCall_DifferentRouteBattleRequestText1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText1) < 0x2e
	.space 0x2e - (. - MatchCall_DifferentRouteBattleRequestText1)
	.endif


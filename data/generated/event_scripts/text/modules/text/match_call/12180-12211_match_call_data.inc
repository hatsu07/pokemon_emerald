	@ data/text/match_call.inc:175 MatchCall_DifferentRouteBattleRequestText2
	.globl MatchCall_DifferentRouteBattleRequestText2
MatchCall_DifferentRouteBattleRequestText2: @ 0x08266313
	.string "あ! {PLAYER}{KUN}!\n{STR_VAR_1} です\pこれから わたしと しょうぶ してみない?\n{STR_VAR_2} で まってるよ!{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText2) > 0x31
	.error "MatchCall_DifferentRouteBattleRequestText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText2) < 0x31
	.space 0x31 - (. - MatchCall_DifferentRouteBattleRequestText2)
	.endif

	@ data/text/match_call.inc:178 MatchCall_DifferentRouteBattleRequestText3
	.globl MatchCall_DifferentRouteBattleRequestText3
MatchCall_DifferentRouteBattleRequestText3: @ 0x08266344
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pあれから おれの ポケモンも\nたくましく なったぞ!\p{PLAYER}の ポケモンで\nうでだめし したいから\pしょうぶ してみないか?\n{STR_VAR_2} で まってるぞ{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText3) > 0x58
	.error "MatchCall_DifferentRouteBattleRequestText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText3) < 0x58
	.space 0x58 - (. - MatchCall_DifferentRouteBattleRequestText3)
	.endif

	@ data/text/match_call.inc:181 MatchCall_DifferentRouteBattleRequestText4
	.globl MatchCall_DifferentRouteBattleRequestText4
MatchCall_DifferentRouteBattleRequestText4: @ 0x0826639C
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pちょうしは どうだい?\nおれの ポケモンも\lずいぶん つよく なったよ\pそうだ また おれと\nしょうぶ しないかい?\pじゃあ {STR_VAR_2}で あおう{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText4) > 0x54
	.error "MatchCall_DifferentRouteBattleRequestText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText4) < 0x54
	.space 0x54 - (. - MatchCall_DifferentRouteBattleRequestText4)
	.endif

	@ data/text/match_call.inc:184 MatchCall_DifferentRouteBattleRequestText5
	.globl MatchCall_DifferentRouteBattleRequestText5
MatchCall_DifferentRouteBattleRequestText5: @ 0x082663F0
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\pおれの ポケモン\nけっこう いいかんじに そだってきたよ\pきみと もういちど\nしょうぶ してみたいなあ\p{STR_VAR_2} で まってるよ\nじゃあね{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText5) > 0x53
	.error "MatchCall_DifferentRouteBattleRequestText5 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText5) < 0x53
	.space 0x53 - (. - MatchCall_DifferentRouteBattleRequestText5)
	.endif

	@ data/text/match_call.inc:187 MatchCall_DifferentRouteBattleRequestText6
	.globl MatchCall_DifferentRouteBattleRequestText6
MatchCall_DifferentRouteBattleRequestText6: @ 0x08266443
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\lげんきで やってるかい?\pまた きみと ポケモンしょうぶを\nしてみたいんだけど どうだい?\pしょうぶ したくなったら\n{STR_VAR_2}に きてくれよ\pじゃあ また{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText6) > 0x5b
	.error "MatchCall_DifferentRouteBattleRequestText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText6) < 0x5b
	.space 0x5b - (. - MatchCall_DifferentRouteBattleRequestText6)
	.endif

	@ data/text/match_call.inc:190 MatchCall_DifferentRouteBattleRequestText7
	.globl MatchCall_DifferentRouteBattleRequestText7
MatchCall_DifferentRouteBattleRequestText7: @ 0x0826649E
	.string "あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pどう? ポケモン そだってる?\nぼくの ポケモンも つよくなったから\lきみに みせたいなあ\p{STR_VAR_2}で まってるから\nしょうぶ しに きてくれよ\pじゃあ また{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText7) > 0x60
	.error "MatchCall_DifferentRouteBattleRequestText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText7) < 0x60
	.space 0x60 - (. - MatchCall_DifferentRouteBattleRequestText7)
	.endif

	@ data/text/match_call.inc:193 MatchCall_DifferentRouteBattleRequestText8
	.globl MatchCall_DifferentRouteBattleRequestText8
MatchCall_DifferentRouteBattleRequestText8: @ 0x082664FE
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nわたしの ポケモンは とても げんきですよ\pこんど こちらに いらしたら\nまた わたしと\lしょうぶ してくださいね\p{STR_VAR_2}で まってます\nでは また{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText8) > 0x6a
	.error "MatchCall_DifferentRouteBattleRequestText8 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText8) < 0x6a
	.space 0x6a - (. - MatchCall_DifferentRouteBattleRequestText8)
	.endif

	@ data/text/match_call.inc:196 MatchCall_DifferentRouteBattleRequestText9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_DifferentRouteBattleRequestText9
MatchCall_DifferentRouteBattleRequestText9: @ 0x08266568
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pポケモンの ちょうしは どうかな?\nわたしの ポケモンも\pどんどん つよく なってるのよ\n{PLAYER}{KUN}にも みせてあげたいなあ\p{STR_VAR_2}に いるから\nちかくに きたら しょうぶでも しようよ\pじゃあ またね{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText9) != 0x7a
	.error "MatchCall_DifferentRouteBattleRequestText9 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:199 MatchCall_DifferentRouteBattleRequestText10
	.globl MatchCall_DifferentRouteBattleRequestText10
MatchCall_DifferentRouteBattleRequestText10: @ 0x082665E2
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pどう? げんきで やってるかしら?\nあれから わたしの ポケモンも\lずいぶん つよく なったのよ\pまた {PLAYER}{KUN}と\nしょうぶ したいなあ\p{STR_VAR_2}に いるから\nちかくに きたら あいに きてね{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText10) > 0x71
	.error "MatchCall_DifferentRouteBattleRequestText10 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText10) < 0x71
	.space 0x71 - (. - MatchCall_DifferentRouteBattleRequestText10)
	.endif

	@ data/text/match_call.inc:202 MatchCall_DifferentRouteBattleRequestText11
	.globl MatchCall_DifferentRouteBattleRequestText11
MatchCall_DifferentRouteBattleRequestText11: @ 0x08266653
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\lいま どこに いるのかな?\pわしの ポケモンは とても げんき だぞ\n{PLAYER}{KUN}の ポケモンと あうのを\lたのしみに しているみたいだ\p{STR_VAR_2}に いるから\nぜひ あいに きてくれよ{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText11) > 0x67
	.error "MatchCall_DifferentRouteBattleRequestText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText11) < 0x67
	.space 0x67 - (. - MatchCall_DifferentRouteBattleRequestText11)
	.endif

	@ data/text/match_call.inc:205 MatchCall_DifferentRouteBattleRequestText12
	.globl MatchCall_DifferentRouteBattleRequestText12
MatchCall_DifferentRouteBattleRequestText12: @ 0x082666BA
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pわしの ポケモンも あれから\nずいぶんと たくましく なったぞ\p{PLAYER}{KUN}の ポケモンと\nもういちど てあわせ したいのう\p{STR_VAR_2}に おるから\nいつでも きてくれたまえ{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText12) > 0x61
	.error "MatchCall_DifferentRouteBattleRequestText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText12) < 0x61
	.space 0x61 - (. - MatchCall_DifferentRouteBattleRequestText12)
	.endif

	@ data/text/match_call.inc:208 MatchCall_DifferentRouteBattleRequestText13
	.globl MatchCall_DifferentRouteBattleRequestText13
MatchCall_DifferentRouteBattleRequestText13: @ 0x0826671B
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pポケモンは げんきに しとるかね?\nわしの ポケモンも\lまけない ぐらい げんきに しておるよ\pまた しょうぶ してみたいので\n{STR_VAR_2}の ちかくに きたら\pあいに きてくれんかのう\nでは またの{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText13) > 0x6f
	.error "MatchCall_DifferentRouteBattleRequestText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText13) < 0x6f
	.space 0x6f - (. - MatchCall_DifferentRouteBattleRequestText13)
	.endif

	@ data/text/match_call.inc:211 MatchCall_DifferentRouteBattleRequestText14
	.globl MatchCall_DifferentRouteBattleRequestText14
MatchCall_DifferentRouteBattleRequestText14: @ 0x0826678A
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pげんきに してる?\nあ そうそう\pわたしの ポケモン\nあれから けっこう つよく なったのよ\p{PLAYER}{KUN}と もういちど\nしょうぶ してみたいわねえ\p{STR_VAR_2}で まってるから\nいつでも あいに きてね{EOS}"
	.if (. - MatchCall_DifferentRouteBattleRequestText14) > 0x74
	.error "MatchCall_DifferentRouteBattleRequestText14 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_DifferentRouteBattleRequestText14) < 0x74
	.space 0x74 - (. - MatchCall_DifferentRouteBattleRequestText14)
	.endif

	@ data/text/match_call.inc:214 MatchCall_PersonalizedText1
	.globl MatchCall_PersonalizedText1
MatchCall_PersonalizedText1: @ 0x082667FE
	.string "やまを あいする {STR_VAR_1}だが\pどうだね あれから\nすこしは やまが すきに なったか?\lあまり やまで きみを みかけないが……\pよし つぎは {STR_VAR_2}で\nあおう じゃないか またな!{EOS}"
	.if (. - MatchCall_PersonalizedText1) > 0x5a
	.error "MatchCall_PersonalizedText1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText1) < 0x5a
	.space 0x5a - (. - MatchCall_PersonalizedText1)
	.endif

	@ data/text/match_call.inc:217 MatchCall_PersonalizedText2
	.globl MatchCall_PersonalizedText2
MatchCall_PersonalizedText2: @ 0x08266858
	.string "{STR_VAR_1}です\nこんにちは\pいまね トレーナーに なりたてのコに\nあなたの ことを きかせて いたのよ!\lポケモンを たいせつに そだてている\lつよい トレーナーが いるのよって……\pみんなの あこがれに なるような\nすばらしい トレーナーに なってね!\lじゃあ また あいましょう!{EOS}"
	.if (. - MatchCall_PersonalizedText2) > 0x8c
	.error "MatchCall_PersonalizedText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText2) < 0x8c
	.space 0x8c - (. - MatchCall_PersonalizedText2)
	.endif

	@ data/text/match_call.inc:220 MatchCall_PersonalizedText3
	.globl MatchCall_PersonalizedText3
MatchCall_PersonalizedText3: @ 0x082668E4
	.string "こんにちは! {STR_VAR_1}よ\nこの あたりは ほんとうに\lいいかおりが して きもちがいいわ\pだれかが きのみを うめて\nはなを さかせて くれたのかしら? うふふ\pそれじゃ またね!{EOS}"
	.if (. - MatchCall_PersonalizedText3) > 0x59
	.error "MatchCall_PersonalizedText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_PersonalizedText3) < 0x59
	.space 0x59 - (. - MatchCall_PersonalizedText3)
	.endif

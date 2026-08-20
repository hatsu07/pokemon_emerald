	@ data/text/match_call.inc:175 MatchCall_DifferentRouteBattleRequestText2
	.globl gText_Rom_266313
gText_Rom_266313: @ 0x08266313
	.string "あ! {PLAYER}{KUN}!\n{STR_VAR_1} です\pこれから わたしと しょうぶ してみない?\n{STR_VAR_2} で まってるよ!{EOS}"
	.if (. - gText_Rom_266313) > 0x31
	.error "gText_Rom_266313 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266313) < 0x31
	.space 0x31 - (. - gText_Rom_266313)
	.endif

	@ data/text/match_call.inc:178 MatchCall_DifferentRouteBattleRequestText3
	.globl gText_Rom_266344
gText_Rom_266344: @ 0x08266344
	.string "おーっす {PLAYER}!\n{STR_VAR_1} だ!\pあれから おれの ポケモンも\nたくましく なったぞ!\p{PLAYER}の ポケモンで\nうでだめし したいから\pしょうぶ してみないか?\n{STR_VAR_2} で まってるぞ{EOS}"
	.if (. - gText_Rom_266344) > 0x58
	.error "gText_Rom_266344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266344) < 0x58
	.space 0x58 - (. - gText_Rom_266344)
	.endif

	@ data/text/match_call.inc:181 MatchCall_DifferentRouteBattleRequestText4
	.globl gText_Rom_26639C
gText_Rom_26639C: @ 0x0826639C
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\pちょうしは どうだい?\nおれの ポケモンも\lずいぶん つよく なったよ\pそうだ また おれと\nしょうぶ しないかい?\pじゃあ {STR_VAR_2}で あおう{EOS}"
	.if (. - gText_Rom_26639C) > 0x54
	.error "gText_Rom_26639C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26639C) < 0x54
	.space 0x54 - (. - gText_Rom_26639C)
	.endif

	@ data/text/match_call.inc:184 MatchCall_DifferentRouteBattleRequestText5
	.globl gText_Rom_2663F0
gText_Rom_2663F0: @ 0x082663F0
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\pおれの ポケモン\nけっこう いいかんじに そだってきたよ\pきみと もういちど\nしょうぶ してみたいなあ\p{STR_VAR_2} で まってるよ\nじゃあね{EOS}"
	.if (. - gText_Rom_2663F0) > 0x53
	.error "gText_Rom_2663F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2663F0) < 0x53
	.space 0x53 - (. - gText_Rom_2663F0)
	.endif

	@ data/text/match_call.inc:187 MatchCall_DifferentRouteBattleRequestText6
	.globl gText_Rom_266443
gText_Rom_266443: @ 0x08266443
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど\lげんきで やってるかい?\pまた きみと ポケモンしょうぶを\nしてみたいんだけど どうだい?\pしょうぶ したくなったら\n{STR_VAR_2}に きてくれよ\pじゃあ また{EOS}"
	.if (. - gText_Rom_266443) > 0x5b
	.error "gText_Rom_266443 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266443) < 0x5b
	.space 0x5b - (. - gText_Rom_266443)
	.endif

	@ data/text/match_call.inc:190 MatchCall_DifferentRouteBattleRequestText7
	.globl gText_Rom_26649E
gText_Rom_26649E: @ 0x0826649E
	.string "あ {PLAYER}{KUN}?\n{STR_VAR_1} だけど・・・\pどう? ポケモン そだってる?\nぼくの ポケモンも つよくなったから\lきみに みせたいなあ\p{STR_VAR_2}で まってるから\nしょうぶ しに きてくれよ\pじゃあ また{EOS}"
	.if (. - gText_Rom_26649E) > 0x60
	.error "gText_Rom_26649E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26649E) < 0x60
	.space 0x60 - (. - gText_Rom_26649E)
	.endif

	@ data/text/match_call.inc:193 MatchCall_DifferentRouteBattleRequestText8
	.globl gText_Rom_2664FE
gText_Rom_2664FE: @ 0x082664FE
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nわたしの ポケモンは とても げんきですよ\pこんど こちらに いらしたら\nまた わたしと\lしょうぶ してくださいね\p{STR_VAR_2}で まってます\nでは また{EOS}"
	.if (. - gText_Rom_2664FE) > 0x6a
	.error "gText_Rom_2664FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2664FE) < 0x6a
	.space 0x6a - (. - gText_Rom_2664FE)
	.endif

	@ data/text/match_call.inc:196 MatchCall_DifferentRouteBattleRequestText9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_266568
gText_Rom_266568: @ 0x08266568
	.string "あ {PLAYER}{KUN} こんにちはー!\n{STR_VAR_1} です!\pポケモンの ちょうしは どうかな?\nわたしの ポケモンも\pどんどん つよく なってるのよ\n{PLAYER}{KUN}にも みせてあげたいなあ\p{STR_VAR_2}に いるから\nちかくに きたら しょうぶでも しようよ\pじゃあ またね{EOS}"
	.if (. - gText_Rom_266568) != 0x7a
	.error "gText_Rom_266568 must retain its original byte length"
	.endif
	.globl gText_Rom_2665DE
	.set gText_Rom_2665DE, gText_Rom_266568 + 0x76

	@ data/text/match_call.inc:199 MatchCall_DifferentRouteBattleRequestText10
	.globl gText_Rom_2665E2
gText_Rom_2665E2: @ 0x082665E2
	.string "あ {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pどう? げんきで やってるかしら?\nあれから わたしの ポケモンも\lずいぶん つよく なったのよ\pまた {PLAYER}{KUN}と\nしょうぶ したいなあ\p{STR_VAR_2}に いるから\nちかくに きたら あいに きてね{EOS}"
	.if (. - gText_Rom_2665E2) > 0x71
	.error "gText_Rom_2665E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2665E2) < 0x71
	.space 0x71 - (. - gText_Rom_2665E2)
	.endif

	@ data/text/match_call.inc:202 MatchCall_DifferentRouteBattleRequestText11
	.globl gText_Rom_266653
gText_Rom_266653: @ 0x08266653
	.string "ああ {PLAYER}{KUN}\n{STR_VAR_1}だけど\lいま どこに いるのかな?\pわしの ポケモンは とても げんき だぞ\n{PLAYER}{KUN}の ポケモンと あうのを\lたのしみに しているみたいだ\p{STR_VAR_2}に いるから\nぜひ あいに きてくれよ{EOS}"
	.if (. - gText_Rom_266653) > 0x67
	.error "gText_Rom_266653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266653) < 0x67
	.space 0x67 - (. - gText_Rom_266653)
	.endif

	@ data/text/match_call.inc:205 MatchCall_DifferentRouteBattleRequestText12
	.globl gText_Rom_2666BA
gText_Rom_2666BA: @ 0x082666BA
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pわしの ポケモンも あれから\nずいぶんと たくましく なったぞ\p{PLAYER}{KUN}の ポケモンと\nもういちど てあわせ したいのう\p{STR_VAR_2}に おるから\nいつでも きてくれたまえ{EOS}"
	.if (. - gText_Rom_2666BA) > 0x61
	.error "gText_Rom_2666BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2666BA) < 0x61
	.space 0x61 - (. - gText_Rom_2666BA)
	.endif

	@ data/text/match_call.inc:208 MatchCall_DifferentRouteBattleRequestText13
	.globl gText_Rom_26671B
gText_Rom_26671B: @ 0x0826671B
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃ\pポケモンは げんきに しとるかね?\nわしの ポケモンも\lまけない ぐらい げんきに しておるよ\pまた しょうぶ してみたいので\n{STR_VAR_2}の ちかくに きたら\pあいに きてくれんかのう\nでは またの{EOS}"
	.if (. - gText_Rom_26671B) > 0x6f
	.error "gText_Rom_26671B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26671B) < 0x6f
	.space 0x6f - (. - gText_Rom_26671B)
	.endif

	@ data/text/match_call.inc:211 MatchCall_DifferentRouteBattleRequestText14
	.globl gText_Rom_26678A
gText_Rom_26678A: @ 0x0826678A
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pげんきに してる?\nあ そうそう\pわたしの ポケモン\nあれから けっこう つよく なったのよ\p{PLAYER}{KUN}と もういちど\nしょうぶ してみたいわねえ\p{STR_VAR_2}で まってるから\nいつでも あいに きてね{EOS}"
	.if (. - gText_Rom_26678A) > 0x74
	.error "gText_Rom_26678A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26678A) < 0x74
	.space 0x74 - (. - gText_Rom_26678A)
	.endif

	@ data/text/match_call.inc:214 MatchCall_PersonalizedText1
	.globl gText_Rom_2667FE
gText_Rom_2667FE: @ 0x082667FE
	.string "やまを あいする {STR_VAR_1}だが\pどうだね あれから\nすこしは やまが すきに なったか?\lあまり やまで きみを みかけないが……\pよし つぎは {STR_VAR_2}で\nあおう じゃないか またな!{EOS}"
	.if (. - gText_Rom_2667FE) > 0x5a
	.error "gText_Rom_2667FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2667FE) < 0x5a
	.space 0x5a - (. - gText_Rom_2667FE)
	.endif

	@ data/text/match_call.inc:217 MatchCall_PersonalizedText2
	.globl gText_Rom_266858
gText_Rom_266858: @ 0x08266858
	.string "{STR_VAR_1}です\nこんにちは\pいまね トレーナーに なりたてのコに\nあなたの ことを きかせて いたのよ!\lポケモンを たいせつに そだてている\lつよい トレーナーが いるのよって……\pみんなの あこがれに なるような\nすばらしい トレーナーに なってね!\lじゃあ また あいましょう!{EOS}"
	.if (. - gText_Rom_266858) > 0x8c
	.error "gText_Rom_266858 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_266858) < 0x8c
	.space 0x8c - (. - gText_Rom_266858)
	.endif

	@ data/text/match_call.inc:220 MatchCall_PersonalizedText3
	.globl gText_Rom_2668E4
gText_Rom_2668E4: @ 0x082668E4
	.string "こんにちは! {STR_VAR_1}よ\nこの あたりは ほんとうに\lいいかおりが して きもちがいいわ\pだれかが きのみを うめて\nはなを さかせて くれたのかしら? うふふ\pそれじゃ またね!{EOS}"
	.if (. - gText_Rom_2668E4) > 0x59
	.error "gText_Rom_2668E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2668E4) < 0x59
	.space 0x59 - (. - gText_Rom_2668E4)
	.endif

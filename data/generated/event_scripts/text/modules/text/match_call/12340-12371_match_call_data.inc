	@ data/text/match_call.inc:409 MatchCall_BattleFrontierStreakText2 (+1 aliases)
	.globl gText_Rom_268A08
gText_Rom_268A08: @ 0x08268A08
	.string "こんにちは {STR_VAR_1} でーす\n{STR_VAR_2} で\l{STR_VAR_3}れんしょう したって きいたわよ!\pすっごーい! わたしも がんばろうっと!\nじゃあ またね!{EOS}"
	.if (. - gText_Rom_268A08) > 0x44
	.error "gText_Rom_268A08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268A08) < 0x44
	.space 0x44 - (. - gText_Rom_268A08)
	.endif

	@ data/text/match_call.inc:412 MatchCall_BattleFrontierStreakText3 (+1 aliases)
	.globl gText_Rom_268A4C
gText_Rom_268A4C: @ 0x08268A4C
	.string "おう! {PLAYER}!\n{STR_VAR_1}だぞ!\p{STR_VAR_2} で\nおおあばれ したらしいな!\p{STR_VAR_3}れんしょう って\nすごい きろく なんだろ?\pおれも まけられねーな!\nじゃ またな!{EOS}"
	.if (. - gText_Rom_268A4C) > 0x4f
	.error "gText_Rom_268A4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268A4C) < 0x4f
	.space 0x4f - (. - gText_Rom_268A4C)
	.endif

	@ data/text/match_call.inc:415 MatchCall_BattleFrontierStreakText4 (+1 aliases)
	.globl gText_Rom_268A9B
gText_Rom_268A9B: @ 0x08268A9B
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど げんき かい?\pうわさで きいたんだけど\nきみ {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだって?\pぼくも がんばらなきゃな\nじゃあ また{EOS}"
	.if (. - gText_Rom_268A9B) > 0x50
	.error "gText_Rom_268A9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268A9B) < 0x50
	.space 0x50 - (. - gText_Rom_268A9B)
	.endif

	@ data/text/match_call.inc:418 MatchCall_BattleFrontierStreakText5
	.globl gText_Rom_268AEB
gText_Rom_268AEB: @ 0x08268AEB
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんだってね!\lすごいなあ\pぼくも ポケモン そだてなきゃ\nじゃあ また{EOS}"
	.if (. - gText_Rom_268AEB) > 0x44
	.error "gText_Rom_268AEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268AEB) < 0x44
	.space 0x44 - (. - gText_Rom_268AEB)
	.endif

	@ data/text/match_call.inc:421 MatchCall_BattleFrontierStreakText6
	.globl gText_Rom_268B2F
gText_Rom_268B2F: @ 0x08268B2F
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだってね\pおれも がんばって\nポケモンを そだてるよ{EOS}"
	.if (. - gText_Rom_268B2F) > 0x48
	.error "gText_Rom_268B2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268B2F) < 0x48
	.space 0x48 - (. - gText_Rom_268B2F)
	.endif

	@ data/text/match_call.inc:424 MatchCall_BattleFrontierStreakText7 (+1 aliases)
	.globl gText_Rom_268B77
gText_Rom_268B77: @ 0x08268B77
	.string "えーと あ {PLAYER}{KUN}?\n{STR_VAR_1} だ・・・\pそういえば {STR_VAR_2} で\n{STR_VAR_3}れんしょう したんだってね\pあ! いま めずらしい ポケモンを\nみつけたから じゃあ また!{EOS}"
	.if (. - gText_Rom_268B77) > 0x50
	.error "gText_Rom_268B77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268B77) < 0x50
	.space 0x50 - (. - gText_Rom_268B77)
	.endif

	@ data/text/match_call.inc:427 MatchCall_BattleFrontierStreakText8
	.globl gText_Rom_268BC7
gText_Rom_268BC7: @ 0x08268BC7
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nそういえば {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいですね!\nつぎも がんばってね{EOS}"
	.if (. - gText_Rom_268BC7) > 0x4d
	.error "gText_Rom_268BC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268BC7) < 0x4d
	.space 0x4d - (. - gText_Rom_268BC7)
	.endif

	@ data/text/match_call.inc:430 MatchCall_BattleFrontierStreakText9 (+1 aliases)
	.globl gText_Rom_268C14
gText_Rom_268C14: @ 0x08268C14
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\pきいたわよ! {STR_VAR_2}で\n{STR_VAR_3}れんしょうも したって!\pすっごいねー\nわたしも がんばらなくちゃ{EOS}"
	.if (. - gText_Rom_268C14) > 0x44
	.error "gText_Rom_268C14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268C14) < 0x44
	.space 0x44 - (. - gText_Rom_268C14)
	.endif

	@ data/text/match_call.inc:433 MatchCall_BattleFrontierStreakText10 (+2 aliases)
	.globl gText_Rom_268C58
gText_Rom_268C58: @ 0x08268C58
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ{EOS}"
	.if (. - gText_Rom_268C58) > 0x3c
	.error "gText_Rom_268C58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268C58) < 0x3c
	.space 0x3c - (. - gText_Rom_268C58)
	.endif

	@ data/text/match_call.inc:436 MatchCall_BattleFrontierStreakText11 (+1 aliases)
	.globl gText_Rom_268C94
gText_Rom_268C94: @ 0x08268C94
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で だいかつやく らしいなあ\n{STR_VAR_3}れんしょう したんだって?\pすげえなあ おれだったら\nなんれんしょう できるのかな{EOS}"
	.if (. - gText_Rom_268C94) > 0x4b
	.error "gText_Rom_268C94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268C94) < 0x4b
	.space 0x4b - (. - gText_Rom_268C94)
	.endif

	@ data/text/match_call.inc:439 MatchCall_BattleFrontierStreakText12 (+1 aliases)
	.globl gText_Rom_268CDF
gText_Rom_268CDF: @ 0x08268CDF
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\pひとづてに きいたのじゃが\n{STR_VAR_2} とかいう ところで\l{STR_VAR_3}れんしょうも したらしいのう?\pすごい はなし だのう\nでは またの{EOS}"
	.if (. - gText_Rom_268CDF) > 0x56
	.error "gText_Rom_268CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268CDF) < 0x56
	.space 0x56 - (. - gText_Rom_268CDF)
	.endif

	@ data/text/match_call.inc:442 MatchCall_BattleFrontierStreakText13 (+1 aliases)
	.globl gText_Rom_268D35
gText_Rom_268D35: @ 0x08268D35
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したそうじゃのう\pげんきで いいことじゃ\nでは またのう{EOS}"
	.if (. - gText_Rom_268D35) > 0x41
	.error "gText_Rom_268D35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268D35) < 0x41
	.space 0x41 - (. - gText_Rom_268D35)
	.endif

	@ data/text/match_call.inc:445 MatchCall_BattleFrontierStreakText14 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_268D76
gText_Rom_268D76: @ 0x08268D76
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね{EOS}"
	.if (. - gText_Rom_268D76) != 0x4b
	.error "gText_Rom_268D76 must retain its original byte length"
	.endif
	.globl gText_Rom_268DBD
	.set gText_Rom_268DBD, gText_Rom_268D76 + 0x47

	@ data/text/match_call.inc:406 MatchCall_BattleFrontierStreakText1 (+1 aliases)
	.globl gText_Rom_268DC1
gText_Rom_268DC1: @ 0x08268DC1
	.string "こんにちは {STR_VAR_1} です!\nきいたよ!\p{STR_VAR_2} で\nすごい かつやく したんだって?\p{STR_VAR_3}れんしょう って すごいなあ\nじゃあ またね!"
	.byte EOS
	.if (. - gText_Rom_268DC1) > 0x43
	.error "gText_Rom_268DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268DC1) < 0x43
	.space 0x43 - (. - gText_Rom_268DC1)
	.endif

	@ data/text/match_call.inc:409 MatchCall_BattleFrontierStreakText2 (+1 aliases)
	.globl gText_Rom_268E04
gText_Rom_268E04: @ 0x08268E04
	.string "こんにちは {STR_VAR_1} でーす\n{STR_VAR_2} で\l{STR_VAR_3}れんしょう したって きいたわよ!\pすっごーい! わたしも がんばろうっと!\nじゃあ またね!"
	.byte EOS
	.if (. - gText_Rom_268E04) > 0x44
	.error "gText_Rom_268E04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268E04) < 0x44
	.space 0x44 - (. - gText_Rom_268E04)
	.endif

	@ data/text/match_call.inc:412 MatchCall_BattleFrontierStreakText3 (+1 aliases)
	.globl gText_Rom_268E48
gText_Rom_268E48: @ 0x08268E48
	.string "おう! {PLAYER}!\n{STR_VAR_1}だぞ!\p{STR_VAR_2} で\nおおあばれ したらしいな!\p{STR_VAR_3}れんしょう って\nすごい きろく なんだろ?\pおれも まけられねーな!\nじゃ またな!"
	.byte EOS
	.if (. - gText_Rom_268E48) > 0x4f
	.error "gText_Rom_268E48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268E48) < 0x4f
	.space 0x4f - (. - gText_Rom_268E48)
	.endif


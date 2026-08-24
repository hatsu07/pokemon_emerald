	@ data/text/match_call.inc:415 MatchCall_BattleFrontierStreakText4 (+1 aliases)
	.globl gText_Rom_268E97
gText_Rom_268E97: @ 0x08268E97
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だけど げんき かい?\pうわさで きいたんだけど\nきみ {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだって?\pぼくも がんばらなきゃな\nじゃあ また"
	.byte EOS
	.if (. - gText_Rom_268E97) > 0x50
	.error "gText_Rom_268E97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268E97) < 0x50
	.space 0x50 - (. - gText_Rom_268E97)
	.endif

	@ data/text/match_call.inc:460 MatchCall_BattleFrontierRecordStreakText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleFrontierRecordStreakText5
MatchCall_BattleFrontierRecordStreakText5: @ 0x08268EE7
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんだってね!\lすごいなあ\pおれ? おれは まあ ぼちぼちかなー\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleFrontierRecordStreakText5) != 0x48
	.error "MatchCall_BattleFrontierRecordStreakText5 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:463 MatchCall_BattleFrontierRecordStreakText6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleFrontierRecordStreakText6
MatchCall_BattleFrontierRecordStreakText6: @ 0x08268F2F
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだってね\pおれも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleFrontierRecordStreakText6) != 0x47
	.error "MatchCall_BattleFrontierRecordStreakText6 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:424 MatchCall_BattleFrontierStreakText7 (+1 aliases)
	.globl gText_Rom_268F76
gText_Rom_268F76: @ 0x08268F76
	.string "えーと あ {PLAYER}{KUN}?\n{STR_VAR_1} だ・・・\pそういえば {STR_VAR_2} で\n{STR_VAR_3}れんしょう したんだってね\pあ! いま めずらしい ポケモンを\nみつけたから じゃあ また!"
	.byte EOS
	.if (. - gText_Rom_268F76) > 0x50
	.error "gText_Rom_268F76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268F76) < 0x50
	.space 0x50 - (. - gText_Rom_268F76)
	.endif

	@ data/text/match_call.inc:469 MatchCall_BattleFrontierRecordStreakText8
	.globl MatchCall_BattleFrontierRecordStreakText8
MatchCall_BattleFrontierRecordStreakText8: @ 0x08268FC6
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nそういえば {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいですね! わたしも がんばって\nポケモンを そだてなきゃ"
	.byte EOS
	.if (. - MatchCall_BattleFrontierRecordStreakText8) > 0x5a
	.error "MatchCall_BattleFrontierRecordStreakText8 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleFrontierRecordStreakText8) < 0x5a
	.space 0x5a - (. - MatchCall_BattleFrontierRecordStreakText8)
	.endif

	@ data/text/match_call.inc:430 MatchCall_BattleFrontierStreakText9 (+1 aliases)
	.globl gText_Rom_269020
gText_Rom_269020: @ 0x08269020
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\pきいたわよ! {STR_VAR_2}で\n{STR_VAR_3}れんしょうも したって!\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269020) > 0x44
	.error "gText_Rom_269020 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269020) < 0x44
	.space 0x44 - (. - gText_Rom_269020)
	.endif

	@ data/text/match_call.inc:433 MatchCall_BattleFrontierStreakText10 (+2 aliases)
	.globl gText_Rom_269064
gText_Rom_269064: @ 0x08269064
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269064) > 0x3c
	.error "gText_Rom_269064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269064) < 0x3c
	.space 0x3c - (. - gText_Rom_269064)
	.endif

	@ data/text/match_call.inc:436 MatchCall_BattleFrontierStreakText11 (+1 aliases)
	.globl gText_Rom_2690A0
gText_Rom_2690A0: @ 0x082690A0
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で だいかつやく らしいなあ\n{STR_VAR_3}れんしょう したんだって?\pすげえなあ おれだったら\nなんれんしょう できるのかな"
	.byte EOS
	.if (. - gText_Rom_2690A0) > 0x4b
	.error "gText_Rom_2690A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2690A0) < 0x4b
	.space 0x4b - (. - gText_Rom_2690A0)
	.endif

	@ data/text/match_call.inc:439 MatchCall_BattleFrontierStreakText12 (+1 aliases)
	.globl gText_Rom_2690EB
gText_Rom_2690EB: @ 0x082690EB
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\pひとづてに きいたのじゃが\n{STR_VAR_2} とかいう ところで\l{STR_VAR_3}れんしょうも したらしいのう?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_2690EB) > 0x56
	.error "gText_Rom_2690EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2690EB) < 0x56
	.space 0x56 - (. - gText_Rom_2690EB)
	.endif

	@ data/text/match_call.inc:442 MatchCall_BattleFrontierStreakText13 (+1 aliases)
	.globl gText_Rom_269141
gText_Rom_269141: @ 0x08269141
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したそうじゃのう\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269141) > 0x41
	.error "gText_Rom_269141 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269141) < 0x41
	.space 0x41 - (. - gText_Rom_269141)
	.endif

	@ data/text/match_call.inc:445 MatchCall_BattleFrontierStreakText14 (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269182
gText_Rom_269182: @ 0x08269182
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269182) != 0x4b
	.error "gText_Rom_269182 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:490 MatchCall_BattleDomeText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleDomeText1
MatchCall_BattleDomeText1: @ 0x082691CD
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}かい も\nゆうしょう したんだって?\pすごいね! ぼくも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleDomeText1) != 0x4f
	.error "MatchCall_BattleDomeText1 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:493 MatchCall_BattleDomeText2
	.globl MatchCall_BattleDomeText2
MatchCall_BattleDomeText2: @ 0x0826921C
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で\n{STR_VAR_3}かい も\lゆうしょう したんですって?\pすごいわねー\nわたしも ゆうしょう できるのかな?"
	.byte EOS
	.if (. - MatchCall_BattleDomeText2) > 0x4a
	.error "MatchCall_BattleDomeText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText2) < 0x4a
	.space 0x4a - (. - MatchCall_BattleDomeText2)
	.endif

	@ data/text/match_call.inc:496 MatchCall_BattleDomeText3
	.globl MatchCall_BattleDomeText3
MatchCall_BattleDomeText3: @ 0x08269266
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}かいも\nゆうしょう したって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - MatchCall_BattleDomeText3) > 0x41
	.error "MatchCall_BattleDomeText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText3) < 0x41
	.space 0x41 - (. - MatchCall_BattleDomeText3)
	.endif


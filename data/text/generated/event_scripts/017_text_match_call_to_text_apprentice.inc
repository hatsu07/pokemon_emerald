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
	.globl gText_Rom_268EE7
gText_Rom_268EE7: @ 0x08268EE7
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんだってね!\lすごいなあ\pおれ? おれは まあ ぼちぼちかなー\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_268EE7) != 0x48
	.error "gText_Rom_268EE7 must retain its original byte length"
	.endif
	.globl gText_Rom_268F2B
	.set gText_Rom_268F2B, gText_Rom_268EE7 + 0x44

	@ data/text/match_call.inc:463 MatchCall_BattleFrontierRecordStreakText6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_268F2F
gText_Rom_268F2F: @ 0x08268F2F
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんだってね\pおれも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_268F2F) != 0x47
	.error "gText_Rom_268F2F must retain its original byte length"
	.endif
	.globl gText_Rom_268F72
	.set gText_Rom_268F72, gText_Rom_268F2F + 0x43

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
	.globl gText_Rom_268FC6
gText_Rom_268FC6: @ 0x08268FC6
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\pちょうしは どうですか?\nそういえば {STR_VAR_2}で\l{STR_VAR_3}れんしょうも したんですって?\pすごいですね! わたしも がんばって\nポケモンを そだてなきゃ"
	.byte EOS
	.if (. - gText_Rom_268FC6) > 0x5a
	.error "gText_Rom_268FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268FC6) < 0x5a
	.space 0x5a - (. - gText_Rom_268FC6)
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
	.globl gText_Rom_2691C9
	.set gText_Rom_2691C9, gText_Rom_269182 + 0x47

	@ data/text/match_call.inc:490 MatchCall_BattleDomeText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2691CD
gText_Rom_2691CD: @ 0x082691CD
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}かい も\nゆうしょう したんだって?\pすごいね! ぼくも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2691CD) != 0x4f
	.error "gText_Rom_2691CD must retain its original byte length"
	.endif
	.globl gText_Rom_269218
	.set gText_Rom_269218, gText_Rom_2691CD + 0x4b

	@ data/text/match_call.inc:493 MatchCall_BattleDomeText2
	.globl gText_Rom_26921C
gText_Rom_26921C: @ 0x0826921C
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で\n{STR_VAR_3}かい も\lゆうしょう したんですって?\pすごいわねー\nわたしも ゆうしょう できるのかな?"
	.byte EOS
	.if (. - gText_Rom_26921C) > 0x4a
	.error "gText_Rom_26921C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26921C) < 0x4a
	.space 0x4a - (. - gText_Rom_26921C)
	.endif

	@ data/text/match_call.inc:496 MatchCall_BattleDomeText3
	.globl gText_Rom_269266
gText_Rom_269266: @ 0x08269266
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}かいも\nゆうしょう したって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_269266) > 0x41
	.error "gText_Rom_269266 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269266) < 0x41
	.space 0x41 - (. - gText_Rom_269266)
	.endif

	@ data/text/match_call.inc:499 MatchCall_BattleDomeText4
	.globl gText_Rom_2692A7
gText_Rom_2692A7: @ 0x082692A7
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}かいも\nゆうしょう した らしいね\pがんばってる みたいだね\nぼくも まけないように しなきゃ"
	.byte EOS
	.if (. - gText_Rom_2692A7) > 0x43
	.error "gText_Rom_2692A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2692A7) < 0x43
	.space 0x43 - (. - gText_Rom_2692A7)
	.endif

	@ data/text/match_call.inc:502 MatchCall_BattleDomeText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2692EA
gText_Rom_2692EA: @ 0x082692EA
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2}で\n{STR_VAR_3}かいも ゆうしょう したんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2692EA) != 0x42
	.error "gText_Rom_2692EA must retain its original byte length"
	.endif
	.globl gText_Rom_269328
	.set gText_Rom_269328, gText_Rom_2692EA + 0x3e

	@ data/text/match_call.inc:505 MatchCall_BattleDomeText6
	.globl gText_Rom_26932C
gText_Rom_26932C: @ 0x0826932C
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}かいも\lゆうしょう したんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_26932C) > 0x4f
	.error "gText_Rom_26932C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26932C) < 0x4f
	.space 0x4f - (. - gText_Rom_26932C)
	.endif

	@ data/text/match_call.inc:508 MatchCall_BattleDomeText7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26937B
gText_Rom_26937B: @ 0x0826937B
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で ゆうしょうを\n{STR_VAR_3}かいも したんだって?\pへー ところで さいきん\nめずらしい ポケモン つかまえた?\pあ そう\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_26937B) != 0x55
	.error "gText_Rom_26937B must retain its original byte length"
	.endif
	.globl gText_Rom_2693CC
	.set gText_Rom_2693CC, gText_Rom_26937B + 0x51

	@ data/text/match_call.inc:511 MatchCall_BattleDomeText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2693D0
gText_Rom_2693D0: @ 0x082693D0
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}かいも\lゆうしょう したんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2693D0) != 0x5b
	.error "gText_Rom_2693D0 must retain its original byte length"
	.endif
	.globl gText_Rom_269427
	.set gText_Rom_269427, gText_Rom_2693D0 + 0x57

	@ data/text/match_call.inc:514 MatchCall_BattleDomeText9
	.globl gText_Rom_26942B
gText_Rom_26942B: @ 0x0826942B
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で\n{STR_VAR_3}かいも ゆうしょう したんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_26942B) > 0x42
	.error "gText_Rom_26942B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26942B) < 0x42
	.space 0x42 - (. - gText_Rom_26942B)
	.endif

	@ data/text/match_call.inc:433 MatchCall_BattleFrontierStreakText10 (+2 aliases)
	.globl gText_Rom_26946D
gText_Rom_26946D: @ 0x0826946D
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}れんしょうも したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_26946D) > 0x3c
	.error "gText_Rom_26946D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26946D) < 0x3c
	.space 0x3c - (. - gText_Rom_26946D)
	.endif

	@ data/text/match_call.inc:520 MatchCall_BattleDomeText11
	.globl gText_Rom_2694A9
gText_Rom_2694A9: @ 0x082694A9
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}れんしょう したんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ むりかな?\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_2694A9) > 0x59
	.error "gText_Rom_2694A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2694A9) < 0x59
	.space 0x59 - (. - gText_Rom_2694A9)
	.endif

	@ data/text/match_call.inc:523 MatchCall_BattleDomeText12
	.globl gText_Rom_269502
gText_Rom_269502: @ 0x08269502
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}かい ゆうしょう したとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_269502) > 0x47
	.error "gText_Rom_269502 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269502) < 0x47
	.space 0x47 - (. - gText_Rom_269502)
	.endif

	@ data/text/match_call.inc:526 MatchCall_BattleDomeText13
	.globl gText_Rom_269549
gText_Rom_269549: @ 0x08269549
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} で\n{STR_VAR_3}かいも ゆうしょう とな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269549) > 0x40
	.error "gText_Rom_269549 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269549) < 0x40
	.space 0x40 - (. - gText_Rom_269549)
	.endif

	@ data/text/match_call.inc:529 MatchCall_BattleDomeText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269589
gText_Rom_269589: @ 0x08269589
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2} で\p{STR_VAR_3}かいも\nゆうしょう したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269589) != 0x4f
	.error "gText_Rom_269589 must retain its original byte length"
	.endif
	.globl gText_Rom_2695D4
	.set gText_Rom_2695D4, gText_Rom_269589 + 0x4b

	@ data/text/match_call.inc:532 MatchCall_BattlePikeText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2695D8
gText_Rom_2695D8: @ 0x082695D8
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}も へやを\nとっぱ したんだって?\pすごいなあ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2695D8) != 0x41
	.error "gText_Rom_2695D8 must retain its original byte length"
	.endif
	.globl gText_Rom_269615
	.set gText_Rom_269615, gText_Rom_2695D8 + 0x3d

	@ data/text/match_call.inc:535 MatchCall_BattlePikeText2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269619
gText_Rom_269619: @ 0x08269619
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で{STR_VAR_3}へやも\nかちぬいたんですって?\pわたしも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269619) != 0x41
	.error "gText_Rom_269619 must retain its original byte length"
	.endif
	.globl gText_Rom_269656
	.set gText_Rom_269656, gText_Rom_269619 + 0x3d

	@ data/text/match_call.inc:538 MatchCall_BattlePikeText3
	.globl gText_Rom_26965A
gText_Rom_26965A: @ 0x0826965A
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_26965A) > 0x3f
	.error "gText_Rom_26965A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26965A) < 0x3f
	.space 0x3f - (. - gText_Rom_26965A)
	.endif

	@ data/text/match_call.inc:541 MatchCall_BattlePikeText4
	.globl gText_Rom_269699
gText_Rom_269699: @ 0x08269699
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ した らしいね\pおれも まけないように\nポケモン そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_269699) > 0x3c
	.error "gText_Rom_269699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269699) < 0x3c
	.space 0x3c - (. - gText_Rom_269699)
	.endif

	@ data/text/match_call.inc:544 MatchCall_BattlePikeText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2696D5
gText_Rom_2696D5: @ 0x082696D5
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2}で\n{STR_VAR_3}へやも とっぱ したんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2696D5) != 0x40
	.error "gText_Rom_2696D5 must retain its original byte length"
	.endif
	.globl gText_Rom_269711
	.set gText_Rom_269711, gText_Rom_2696D5 + 0x3c

	@ data/text/match_call.inc:547 MatchCall_BattlePikeText6
	.globl gText_Rom_269715
gText_Rom_269715: @ 0x08269715
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}へやも\lとっぱ したんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_269715) > 0x4d
	.error "gText_Rom_269715 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269715) < 0x4d
	.space 0x4d - (. - gText_Rom_269715)
	.endif

	@ data/text/match_call.inc:550 MatchCall_BattlePikeText7
	.globl gText_Rom_269762
gText_Rom_269762: @ 0x08269762
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したんだって?\pすごいねえ\nあ めずらしいポケモンを みつけたから\pじゃあ また"
	.byte EOS
	.if (. - gText_Rom_269762) > 0x47
	.error "gText_Rom_269762 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269762) < 0x47
	.space 0x47 - (. - gText_Rom_269762)
	.endif

	@ data/text/match_call.inc:553 MatchCall_BattlePikeText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2697A9
gText_Rom_2697A9: @ 0x082697A9
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}へやも\lとっぱ したんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_2697A9) != 0x59
	.error "gText_Rom_2697A9 must retain its original byte length"
	.endif
	.globl gText_Rom_2697FE
	.set gText_Rom_2697FE, gText_Rom_2697A9 + 0x55

	@ data/text/match_call.inc:556 MatchCall_BattlePikeText9
	.globl gText_Rom_269802
gText_Rom_269802: @ 0x08269802
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269802) > 0x40
	.error "gText_Rom_269802 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269802) < 0x40
	.space 0x40 - (. - gText_Rom_269802)
	.endif

	@ data/text/match_call.inc:559 MatchCall_BattlePikeText10
	.globl gText_Rom_269842
gText_Rom_269842: @ 0x08269842
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}へやも とっぱ したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269842) > 0x3d
	.error "gText_Rom_269842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269842) < 0x3d
	.space 0x3d - (. - gText_Rom_269842)
	.endif

	@ data/text/match_call.inc:562 MatchCall_BattlePikeText11
	.globl gText_Rom_26987F
gText_Rom_26987F: @ 0x0826987F
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}へやも とっぱ したんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ むりかなあ?\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_26987F) > 0x5c
	.error "gText_Rom_26987F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26987F) < 0x5c
	.space 0x5c - (. - gText_Rom_26987F)
	.endif

	@ data/text/match_call.inc:565 MatchCall_BattlePikeText12
	.globl gText_Rom_2698DB
gText_Rom_2698DB: @ 0x082698DB
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}へや とっぱ したとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_2698DB) > 0x45
	.error "gText_Rom_2698DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2698DB) < 0x45
	.space 0x45 - (. - gText_Rom_2698DB)
	.endif

	@ data/text/match_call.inc:568 MatchCall_BattlePikeText13
	.globl gText_Rom_269920
gText_Rom_269920: @ 0x08269920
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}へやも とっぱした とな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269920) > 0x3f
	.error "gText_Rom_269920 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269920) < 0x3f
	.space 0x3f - (. - gText_Rom_269920)
	.endif

	@ data/text/match_call.inc:571 MatchCall_BattlePikeText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26995F
gText_Rom_26995F: @ 0x0826995F
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\p{STR_VAR_3}へやも\nとっぱ したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_26995F) != 0x4c
	.error "gText_Rom_26995F must retain its original byte length"
	.endif
	.globl gText_Rom_2699A7
	.set gText_Rom_2699A7, gText_Rom_26995F + 0x48

	@ data/text/match_call.inc:574 MatchCall_BattlePyramidText1
	.globl gText_Rom_2699AB
gText_Rom_2699AB: @ 0x082699AB
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}だん も\nのぼったんだって?\pすごいねー ぼくも こんど\nちょうせん してみようかなー"
	.byte EOS
	.if (. - gText_Rom_2699AB) > 0x4d
	.error "gText_Rom_2699AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2699AB) < 0x4d
	.space 0x4d - (. - gText_Rom_2699AB)
	.endif

	@ data/text/match_call.inc:577 MatchCall_BattlePyramidText2
	.globl gText_Rom_2699F8
gText_Rom_2699F8: @ 0x082699F8
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で\n{STR_VAR_3}だん も\lかちぬいたんですって?\pすごーい! わたしの ポケモンも\nがんばって そだてなくちゃ"
	.byte EOS
	.if (. - gText_Rom_2699F8) > 0x4c
	.error "gText_Rom_2699F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2699F8) < 0x4c
	.space 0x4c - (. - gText_Rom_2699F8)
	.endif

	@ data/text/match_call.inc:580 MatchCall_BattlePyramidText3
	.globl gText_Rom_269A44
gText_Rom_269A44: @ 0x08269A44
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼったって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_269A44) > 0x3d
	.error "gText_Rom_269A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269A44) < 0x3d
	.space 0x3d - (. - gText_Rom_269A44)
	.endif

	@ data/text/match_call.inc:583 MatchCall_BattlePyramidText4
	.globl gText_Rom_269A81
gText_Rom_269A81: @ 0x08269A81
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼった らしいね\pぼくも きみに まけないように\nがんばらなきゃな"
	.byte EOS
	.if (. - gText_Rom_269A81) > 0x3a
	.error "gText_Rom_269A81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269A81) < 0x3a
	.space 0x3a - (. - gText_Rom_269A81)
	.endif

	@ data/text/match_call.inc:586 MatchCall_BattlePyramidText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269ABB
gText_Rom_269ABB: @ 0x08269ABB
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2} で\n{STR_VAR_3}だんも のぼったんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269ABB) != 0x3f
	.error "gText_Rom_269ABB must retain its original byte length"
	.endif
	.globl gText_Rom_269AF6
	.set gText_Rom_269AF6, gText_Rom_269ABB + 0x3b

	@ data/text/match_call.inc:589 MatchCall_BattlePyramidText6
	.globl gText_Rom_269AFA
gText_Rom_269AFA: @ 0x08269AFA
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}だんも\lかちぬいたんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - gText_Rom_269AFA) > 0x4c
	.error "gText_Rom_269AFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269AFA) < 0x4c
	.space 0x4c - (. - gText_Rom_269AFA)
	.endif

	@ data/text/match_call.inc:592 MatchCall_BattlePyramidText7
	.globl gText_Rom_269B46
gText_Rom_269B46: @ 0x08269B46
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼったんだって?\pへー…… そこに\nめずらしい ポケモン いなかった?\pそうかー いないかー\nじゃあ また"
	.byte EOS
	.if (. - gText_Rom_269B46) > 0x51
	.error "gText_Rom_269B46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269B46) < 0x51
	.space 0x51 - (. - gText_Rom_269B46)
	.endif

	@ data/text/match_call.inc:595 MatchCall_BattlePyramidText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269B97
gText_Rom_269B97: @ 0x08269B97
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}だんも\lかちぬいたんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269B97) != 0x58
	.error "gText_Rom_269B97 must retain its original byte length"
	.endif
	.globl gText_Rom_269BEB
	.set gText_Rom_269BEB, gText_Rom_269B97 + 0x54

	@ data/text/match_call.inc:598 MatchCall_BattlePyramidText9
	.globl gText_Rom_269BEF
gText_Rom_269BEF: @ 0x08269BEF
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で {STR_VAR_3}だんも\nかちぬいたんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269BEF) > 0x3f
	.error "gText_Rom_269BEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269BEF) < 0x3f
	.space 0x3f - (. - gText_Rom_269BEF)
	.endif

	@ data/text/match_call.inc:601 MatchCall_BattlePyramidText10
	.globl gText_Rom_269C2E
gText_Rom_269C2E: @ 0x08269C2E
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}だんも のぼったんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - gText_Rom_269C2E) > 0x3b
	.error "gText_Rom_269C2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269C2E) < 0x3b
	.space 0x3b - (. - gText_Rom_269C2E)
	.endif

	@ data/text/match_call.inc:604 MatchCall_BattlePyramidText11
	.globl gText_Rom_269C69
gText_Rom_269C69: @ 0x08269C69
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}だんも のぼったんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ できない?\nじゃあ またな"
	.byte EOS
	.if (. - gText_Rom_269C69) > 0x59
	.error "gText_Rom_269C69 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269C69) < 0x59
	.space 0x59 - (. - gText_Rom_269C69)
	.endif

	@ data/text/match_call.inc:607 MatchCall_BattlePyramidText12
	.globl gText_Rom_269CC2
gText_Rom_269CC2: @ 0x08269CC2
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}だんも かちぬいたとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - gText_Rom_269CC2) > 0x45
	.error "gText_Rom_269CC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269CC2) < 0x45
	.space 0x45 - (. - gText_Rom_269CC2)
	.endif

	@ data/text/match_call.inc:610 MatchCall_BattlePyramidText13
	.globl gText_Rom_269D07
gText_Rom_269D07: @ 0x08269D07
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}だんも のぼったとな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - gText_Rom_269D07) > 0x3d
	.error "gText_Rom_269D07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269D07) < 0x3d
	.space 0x3d - (. - gText_Rom_269D07)
	.endif

	@ data/text/match_call.inc:613 MatchCall_BattlePyramidText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_269D44
gText_Rom_269D44: @ 0x08269D44
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\p{STR_VAR_3}だんも\nかちぬいたんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - gText_Rom_269D44) != 0x4b
	.error "gText_Rom_269D44 must retain its original byte length"
	.endif
	.globl gText_Rom_269D8B
	.set gText_Rom_269D8B, gText_Rom_269D44 + 0x47

	@ data/text/match_call.inc:616 MatchCall_Text_Mom1
	.globl gText_Rom_269D8F
gText_Rom_269D8F: @ 0x08269D8F
	.string "ママ『パパも あなたも\nみんな ポケモンに むちゅう なのね\pポケモンの みりょく って\nなんなの かしら……\pわたし?\nわたしは いえの ようじを おてつだい\lしてくれる ポケモンが すきだわ"
	.byte EOS
	.if (. - gText_Rom_269D8F) > 0x62
	.error "gText_Rom_269D8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269D8F) < 0x62
	.space 0x62 - (. - gText_Rom_269D8F)
	.endif

	@ data/text/match_call.inc:619 MatchCall_Text_Mom2
	.globl gText_Rom_269DF1
gText_Rom_269DF1: @ 0x08269DF1
	.string "ママ『あら {PLAYER}\nパパなら まいにち トウカシティの\lジムに こもってるわよ!\pときどき うちに かえってきては\nたくさん ごはんを たべて\lまた でかけて いくの!\pあなたに まけたのが\nよっぽど くやしかった みたいね!"
	.byte EOS
	.if (. - gText_Rom_269DF1) > 0x71
	.error "gText_Rom_269DF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269DF1) < 0x71
	.space 0x71 - (. - gText_Rom_269DF1)
	.endif

	@ data/text/match_call.inc:622 MatchCall_Text_Mom3
	.globl gText_Rom_269E62
gText_Rom_269E62: @ 0x08269E62
	.string "ママ『{PLAYER}……\pおうちの ことなら きにしなくて いいから\nママが あげた ランニングシューズ\lボロボロに なるまで はいてちょうだいね!"
	.byte EOS
	.if (. - gText_Rom_269E62) > 0x46
	.error "gText_Rom_269E62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269E62) < 0x46
	.space 0x46 - (. - gText_Rom_269E62)
	.endif

	@ data/text/match_call.inc:625 MatchCall_Text_Roxanne_Preparing
	.globl gText_Rom_269EA8
gText_Rom_269EA8: @ 0x08269EA8
	.string "ツツジ『あら {PLAYER}さん!\pあれから また トレーニングを\nやりなおして いるところ なんですよ!\pまた ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - gText_Rom_269EA8) > 0x7c
	.error "gText_Rom_269EA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269EA8) < 0x7c
	.space 0x7c - (. - gText_Rom_269EA8)
	.endif

	@ data/text/match_call.inc:628 MatchCall_Text_Roxanne_PreparingPostGame
	.globl gText_Rom_269F24
gText_Rom_269F24: @ 0x08269F24
	.string "ツツジ『{PLAYER}さん おめでとう!\nうわさは ききましたよ!\pこちらは ジムを さいかい するためには\nもうすこし じかんが かかりますが\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくださいね……"
	.byte EOS
	.if (. - gText_Rom_269F24) > 0x6a
	.error "gText_Rom_269F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269F24) < 0x6a
	.space 0x6a - (. - gText_Rom_269F24)
	.endif

	@ data/text/match_call.inc:631 MatchCall_Text_Roxanne_RematchReady
	.globl gText_Rom_269F8E
gText_Rom_269F8E: @ 0x08269F8E
	.string "ツツジ『{PLAYER}さん!\nジムの じゅんびが できました!\pいつでも カナズミ シティまで\nきてくださいな!"
	.byte EOS
	.if (. - gText_Rom_269F8E) > 0x34
	.error "gText_Rom_269F8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269F8E) < 0x34
	.space 0x34 - (. - gText_Rom_269F8E)
	.endif

	@ data/text/match_call.inc:634 MatchCall_Text_Roxanne_PostRematch
	.globl gText_Rom_269FC2
gText_Rom_269FC2: @ 0x08269FC2
	.string "ツツジ『{PLAYER}さんと\nしょうぶ できたことは\lカナズミ ジムの ほこりですよ!"
	.byte EOS
	.if (. - gText_Rom_269FC2) > 0x27
	.error "gText_Rom_269FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269FC2) < 0x27
	.space 0x27 - (. - gText_Rom_269FC2)
	.endif

	@ data/text/match_call.inc:637 MatchCall_Text_Brawly_Preparing
	.globl gText_Rom_269FE9
gText_Rom_269FE9: @ 0x08269FE9
	.string "トウキ『やあ {PLAYER}{KUN}!\pキミとの しょうぶでは いろんなことを\nまなばせて もらったよ!\pまた しゅぎょう しなおして\nジムを さいかいする つもりさ!\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - gText_Rom_269FE9) > 0x95
	.error "gText_Rom_269FE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_269FE9) < 0x95
	.space 0x95 - (. - gText_Rom_269FE9)
	.endif

	@ data/text/match_call.inc:640 MatchCall_Text_Brawly_PreparingPostGame
	.globl gText_Rom_26A07E
gText_Rom_26A07E: @ 0x0826A07E
	.string "トウキ『{PLAYER}{KUN} おめでとう!\pキミの うわさは しおかぜに のって\nこのまちにも とどいて いるよ!\pボクのほうは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうだ\pジムの じゅんびが できるまでは\nまだ じかんが かかりそう だけど\pもし ジムを さいかい できたら\nぜひまた ちょうせん してくれよ……"
	.byte EOS
	.if (. - gText_Rom_26A07E) > 0xa0
	.error "gText_Rom_26A07E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A07E) < 0xa0
	.space 0xa0 - (. - gText_Rom_26A07E)
	.endif

	@ data/text/match_call.inc:643 MatchCall_Text_Brawly_RematchReady
	.globl gText_Rom_26A11E
gText_Rom_26A11E: @ 0x0826A11E
	.string "トウキ『{PLAYER}{KUN}!\nジムの じゅんびが できたよ!\pいつでも ムロ タウンまで\nちょうせんしに きてくれよな!"
	.byte EOS
	.if (. - gText_Rom_26A11E) > 0x38
	.error "gText_Rom_26A11E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A11E) < 0x38
	.space 0x38 - (. - gText_Rom_26A11E)
	.endif

	@ data/text/match_call.inc:646 MatchCall_Text_Brawly_PostRematch
	.globl gText_Rom_26A156
gText_Rom_26A156: @ 0x0826A156
	.string "トウキ『{PLAYER}{KUN} とは\nなんど しょうぶ しても あきないよ!"
	.byte EOS
	.if (. - gText_Rom_26A156) > 0x20
	.error "gText_Rom_26A156 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A156) < 0x20
	.space 0x20 - (. - gText_Rom_26A156)
	.endif

	@ data/text/match_call.inc:649 MatchCall_Text_Wattson_Preparing
	.globl gText_Rom_26A176
gText_Rom_26A176: @ 0x0826A176
	.string "テッセン『おう おまえさんか!\pわしは あれから また トレーニングを\nやりなおして いるところ じゃよ!\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - gText_Rom_26A176) > 0x75
	.error "gText_Rom_26A176 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A176) < 0x75
	.space 0x75 - (. - gText_Rom_26A176)
	.endif

	@ data/text/match_call.inc:652 MatchCall_Text_Wattson_PreparingPostGame
	.globl gText_Rom_26A1EB
gText_Rom_26A1EB: @ 0x0826A1EB
	.string "テッセン『わっははは!\pおまえさん とうとう やったな!\nうわさは わしの みみにも とどいとる!\pこちらは まだまだ しゅぎょうを\nやりなおす ひつようが ありそうじゃ\pわしの ジムを さいかいするには\nまだ ちーと じかんが かかりそうじゃな!\pそれまで まっていて おくれ!\nわっはははは!"
	.byte EOS
	.if (. - gText_Rom_26A1EB) > 0x95
	.error "gText_Rom_26A1EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A1EB) < 0x95
	.space 0x95 - (. - gText_Rom_26A1EB)
	.endif

	@ data/text/match_call.inc:655 MatchCall_Text_Wattson_RematchReady
	.globl gText_Rom_26A280
gText_Rom_26A280: @ 0x0826A280
	.string "テッセン『おう おまえさんか!\nジムの じゅんびが できたぞい!\pいつでも キンセツ シティまで\nくるがいいぞ! わっははは!"
	.byte EOS
	.if (. - gText_Rom_26A280) > 0x40
	.error "gText_Rom_26A280 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A280) < 0x40
	.space 0x40 - (. - gText_Rom_26A280)
	.endif

	@ data/text/match_call.inc:658 MatchCall_Text_Wattson_PostRematch
	.globl gText_Rom_26A2C0
gText_Rom_26A2C0: @ 0x0826A2C0
	.string "テッセン『わっははは!\pおまえさんとの ポケモン しょうぶは\nビリビリと しげきてきじゃな!"
	.byte EOS
	.if (. - gText_Rom_26A2C0) > 0x2f
	.error "gText_Rom_26A2C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A2C0) < 0x2f
	.space 0x2f - (. - gText_Rom_26A2C0)
	.endif

	@ data/text/match_call.inc:661 MatchCall_Text_Flannery_Preparing
	.globl gText_Rom_26A2EF
gText_Rom_26A2EF: @ 0x0826A2EF
	.string "アスナ『{PLAYER}さん……\pあなたとの しょうぶで じぶんの\nみじゅくさを おもいしらされた けど\lわたしは これで おわったり しないよ!\pもういちど しゅぎょうを しなおして\nまた ジムを さいかい するんだ!\pそのときには {PLAYER}さん\nぜったい ちょうせんしに きてよね!"
	.byte EOS
	.if (. - gText_Rom_26A2EF) > 0x88
	.error "gText_Rom_26A2EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A2EF) < 0x88
	.space 0x88 - (. - gText_Rom_26A2EF)
	.endif

	@ data/text/match_call.inc:664 MatchCall_Text_Flannery_PreparingPostGame
	.globl gText_Rom_26A377
gText_Rom_26A377: @ 0x0826A377
	.string "アスナ『{PLAYER}さん おめでとう!\pあなたの うわさは かざんの ねつのように\nわたしにも つたわって きてるよ!\pこちらも じゅんちょうに\nトレーニングが すすんでるんだ!\pジムの じゅんびが できたら\nエントリーコールの なまえの ところに\lしるしが つくからね!"
	.byte EOS
	.if (. - gText_Rom_26A377) > 0x85
	.error "gText_Rom_26A377 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A377) < 0x85
	.space 0x85 - (. - gText_Rom_26A377)
	.endif

	@ data/text/match_call.inc:667 MatchCall_Text_Flannery_RematchReady
	.globl gText_Rom_26A3FC
gText_Rom_26A3FC: @ 0x0826A3FC
	.string "アスナ『あっ {PLAYER}さん?\nジムの じゅんびは もうできてます!\pおんせんに はいる ついでに\nフエン タウンまで きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_26A3FC) > 0x42
	.error "gText_Rom_26A3FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A3FC) < 0x42
	.space 0x42 - (. - gText_Rom_26A3FC)
	.endif

	@ data/text/match_call.inc:670 MatchCall_Text_Flannery_PostRematch
	.globl gText_Rom_26A43E
gText_Rom_26A43E: @ 0x0826A43E
	.string "アスナ『{PLAYER}さん……\nポケモンの あつかいかたが\lどんどん うまくなってる きがするよ!"
	.byte EOS
	.if (. - gText_Rom_26A43E) > 0x2d
	.error "gText_Rom_26A43E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A43E) < 0x2d
	.space 0x2d - (. - gText_Rom_26A43E)
	.endif

	@ data/text/match_call.inc:673 MatchCall_Text_Winona_Preparing
	.globl gText_Rom_26A46B
gText_Rom_26A46B: @ 0x0826A46B
	.string "ナギ『こんにちは {PLAYER}さん!\pあなたと しょうぶを したおかげで\nじぶんの じゃくてんが よくわかったわ!\pいつか また ジムを さいかい できたら\nそのときは もう まけませんよ!"
	.byte EOS
	.if (. - gText_Rom_26A46B) > 0x5c
	.error "gText_Rom_26A46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A46B) < 0x5c
	.space 0x5c - (. - gText_Rom_26A46B)
	.endif

	@ data/text/match_call.inc:676 MatchCall_Text_Winona_PreparingPostGame
	.globl gText_Rom_26A4C7
gText_Rom_26A4C7: @ 0x0826A4C7
	.string "ナギ『やりましたね {PLAYER}さん!\pしんチャンピオン たんじょうの うわさは\nヒワマキにも とどいて いますよ!\pでも…… つぎに しょうぶ するときは\nこのまえの ようには いきませんからね!"
	.byte EOS
	.if (. - gText_Rom_26A4C7) > 0x60
	.error "gText_Rom_26A4C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A4C7) < 0x60
	.space 0x60 - (. - gText_Rom_26A4C7)
	.endif
	@ Embedded ROM bytes: file offset 0x26A527, size 0x30
	.byte 0x65, 0x88, 0xB1, 0x04, 0x04, 0x14, 0x00, 0xFD, 0x01, 0x0B, 0x2E, 0xAC, 0xFE, 0x8D, 0x71, 0x19
	.byte 0x00, 0x3D, 0x35, 0x2E, 0x47, 0x37, 0x00, 0x44, 0x07, 0x1F, 0x0C, 0x10, 0x26, 0xAB, 0xFB, 0x6B
	.byte 0x7C, 0x6F, 0x57, 0x00, 0x60, 0x53, 0x7E, 0x44, 0x00, 0x1F, 0x50, 0x13, 0x1F, 0x0D, 0xAB, 0xFF

	@ data/text/match_call.inc:682 MatchCall_Text_Winona_PostRematch
	.globl gText_Rom_26A557
gText_Rom_26A557: @ 0x0826A557
	.string "ナギ『{PLAYER}さん……\nしょうぶに まけても わたしの つばさは\lけっして おれることは ないのです!\pそう {PLAYER}さんが\nゆめを あきらめなかった ように!"
	.byte EOS
	.if (. - gText_Rom_26A557) > 0x4d
	.error "gText_Rom_26A557 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A557) < 0x4d
	.space 0x4d - (. - gText_Rom_26A557)
	.endif

	@ data/text/match_call.inc:685 MatchCall_Text_TateLiza_Preparing
	.globl gText_Rom_26A5A4
gText_Rom_26A5A4: @ 0x0826A5A4
	.string "フウ『あっ あなたは\nラン『{PLAYER}さん ですね!\pフウ『ぼくたち ジムを さいかい するため\nラン『しゅぎょう しなおして いるんです!\pフウ『ジムの じゅんびが できたら\nラン『ジムの じゅんびが できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくので わかるんです!"
	.byte EOS
	.if (. - gText_Rom_26A5A4) > 0x8f
	.error "gText_Rom_26A5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A5A4) < 0x8f
	.space 0x8f - (. - gText_Rom_26A5A4)
	.endif

	@ data/text/match_call.inc:688 MatchCall_Text_TateLiza_PreparingPostGame
	.globl gText_Rom_26A633
gText_Rom_26A633: @ 0x0826A633
	.string "フウ『{PLAYER}さん おめでとう!\nラン『{PLAYER}さん おめでとう!\pフウ『ぼくたち ふたりは\nラン『まだ しゅぎょうちゅう!\pフウ『もうすこし じかんが かかるけど\nラン『もし ジムを さいかい できたら\pフウ『エントリーコールの なまえに\nラン『しるしが つくから わかりますよ!"
	.byte EOS
	.if (. - gText_Rom_26A633) > 0x8a
	.error "gText_Rom_26A633 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A633) < 0x8a
	.space 0x8a - (. - gText_Rom_26A633)
	.endif

	@ data/text/match_call.inc:691 MatchCall_Text_TateLiza_RematchReady
	.globl gText_Rom_26A6BD
gText_Rom_26A6BD: @ 0x0826A6BD
	.string "フウ『{PLAYER}さん!\nラン『{PLAYER}さん!\pフウ『ジムの じゅんびが できました!\nラン『ジムの じゅんびが できました!\pフウ『いつでも トクサネ シティまで\nラン『きてくださいね!"
	.byte EOS
	.if (. - gText_Rom_26A6BD) > 0x59
	.error "gText_Rom_26A6BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A6BD) < 0x59
	.space 0x59 - (. - gText_Rom_26A6BD)
	.endif

	@ data/text/match_call.inc:694 MatchCall_Text_TateLiza_PostRematch
	.globl gText_Rom_26A716
gText_Rom_26A716: @ 0x0826A716
	.string "フウ『{PLAYER}さんとの しょうぶは\nラン『わたしたちの だいじな けいけん\pフウ『いつか また 3にんで\nラン『しょうぶが できると いいですね"
	.byte EOS
	.if (. - gText_Rom_26A716) > 0x47
	.error "gText_Rom_26A716 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A716) < 0x47
	.space 0x47 - (. - gText_Rom_26A716)
	.endif

	@ data/text/match_call.inc:697 MatchCall_Text_Juan_Preparing
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26A75D
gText_Rom_26A75D: @ 0x0826A75D
	.string "アダン『ほ……\n{PLAYER}{KUN}…… でしたね\pユーとの たたかいは\nはじめて ミクリと であったときを\lおもいださせて くれましたよ\pもしかすると ユーは\nミクリを こえるほどの ジーニアス!\lすなわち てんさい かもしれません"
	.byte EOS
	.if (. - gText_Rom_26A75D) != 0x70
	.error "gText_Rom_26A75D must retain its original byte length"
	.endif
	.globl gText_Rom_26A7C9
	.set gText_Rom_26A7C9, gText_Rom_26A75D + 0x6c

	@ data/text/match_call.inc:700 MatchCall_Text_Juan_PreparingPostGame
	.globl gText_Rom_26A7CD
gText_Rom_26A7CD: @ 0x0826A7CD
	.string "アダン『ふ…… {PLAYER}{KUN}\nついに やりとげた ようですね\pやはり わたくしの ひとを みるめは\nまちがって いなかった……\pつよさを きわめた ユーとは\nぜひ また しょうぶ したい ものです"
	.byte EOS
	.if (. - gText_Rom_26A7CD) > 0x61
	.error "gText_Rom_26A7CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A7CD) < 0x61
	.space 0x61 - (. - gText_Rom_26A7CD)
	.endif

	@ data/text/match_call.inc:703 MatchCall_Text_Juan_RematchReady
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26A82E
gText_Rom_26A82E: @ 0x0826A82E
	.string "アダン『ほっほ…… {PLAYER}{KUN}\pわが ルネシティ ジムが\nふたたび オープン したのですよ\pわたくしの すがたを みたくなったら\nまあ いつでも おいでなさい"
	.byte EOS
	.if (. - gText_Rom_26A82E) != 0x4f
	.error "gText_Rom_26A82E must retain its original byte length"
	.endif
	.globl gText_Rom_26A879
	.set gText_Rom_26A879, gText_Rom_26A82E + 0x4b

	@ data/text/match_call.inc:706 MatchCall_Text_Juan_PostRematch
	.globl gText_Rom_26A87D
gText_Rom_26A87D: @ 0x0826A87D
	.string "アダン『{PLAYER}{KUN}……\pユーと かなでる ポケモン しょうぶは\nせんれんされた おんがくにも にて\lハートに ふかく ひびいて きます……\pめを とじれば メロディーに あわせて\nゆうがに まう ユーの すがたが……"
	.byte EOS
	.if (. - gText_Rom_26A87D) > 0x6c
	.error "gText_Rom_26A87D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A87D) < 0x6c
	.space 0x6c - (. - gText_Rom_26A87D)
	.endif

	@ data/text/match_call.inc:709 MatchCall_Text_Sidney
	.globl gText_Rom_26A8E9
gText_Rom_26A8E9: @ 0x0826A8E9
	.string "カゲツ『よお {PLAYER}!\pおれと ポケモン しょうぶ したけりゃ\nいつでも ポケモン リーグに おいで!\pおれは いつでも ここに いるからな\nじゃあ まってるぜ!"
	.byte EOS
	.if (. - gText_Rom_26A8E9) > 0x51
	.error "gText_Rom_26A8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A8E9) < 0x51
	.space 0x51 - (. - gText_Rom_26A8E9)
	.endif

	@ data/text/match_call.inc:712 MatchCall_Text_Phoebe
	.globl gText_Rom_26A93A
gText_Rom_26A93A: @ 0x0826A93A
	.string "フヨウ『ハーイ {PLAYER}!\pあなたと ポケモンの きずなが\nどれぐらい ふかく なったか\lたまには ここまで みせに きてよね!"
	.byte EOS
	.if (. - gText_Rom_26A93A) > 0x3f
	.error "gText_Rom_26A93A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A93A) < 0x3f
	.space 0x3f - (. - gText_Rom_26A93A)
	.endif

	@ data/text/match_call.inc:715 MatchCall_Text_Glacia
	.globl gText_Rom_26A979
gText_Rom_26A979: @ 0x0826A979
	.string "プリム『こんにちは {PLAYER}\pあなたは その つよさに\nおぼれたり していない でしょうね\pあつい きもちを すこしだけ\nひやしたいと おもったら\lポケモン リーグに いらっしゃい……"
	.byte EOS
	.if (. - gText_Rom_26A979) > 0x5b
	.error "gText_Rom_26A979 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A979) < 0x5b
	.space 0x5b - (. - gText_Rom_26A979)
	.endif

	@ data/text/match_call.inc:718 MatchCall_Text_Drake
	.globl gText_Rom_26A9D4
gText_Rom_26A9D4: @ 0x0826A9D4
	.string "ゲンジ『そのこえは {PLAYER}か\nげんきそう だな……\pさいきん ポケモン リーグとは べつに\nトレーナーの うでを きそわせる\lバトル フロンティア とかいう しせつが\lあるらしいが……\pほんとうの しょうぶを したいのなら\nやはり ポケモン リーグだ!\pなあ {PLAYER}も そうおもう だろう?"
	.byte EOS
	.if (. - gText_Rom_26A9D4) > 0x90
	.error "gText_Rom_26A9D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26A9D4) < 0x90
	.space 0x90 - (. - gText_Rom_26A9D4)
	.endif

	@ data/text/match_call.inc:721 MatchCall_Text_Wallace
	.globl gText_Rom_26AA64
gText_Rom_26AA64: @ 0x0826AA64
	.string "ミクリ『やあ {PLAYER}{KUN}\nきみは ダイゴには あったかな?\pかれって……\nほんとうは ものすごく つよいのに\pあまり ポケモン しょうぶを しないで\nめずらしい いしを さがして ばかりいる\lかわりもの なんだよ\pどこかの どうくつか いわやまに\nもぐってるんじゃ ないかな\pめずらしい いし なんて\nわたしには いんせき ぐらいしか\lおもい うかばないんだけど……"
	.byte EOS
	.if (. - gText_Rom_26AA64) > 0xb7
	.error "gText_Rom_26AA64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AA64) < 0xb7
	.space 0xb7 - (. - gText_Rom_26AA64)
	.endif

	@ data/text/match_call.inc:724 MatchCall_Text_MayRayquazaCall
	.globl gText_Rom_26AB1B
gText_Rom_26AB1B: @ 0x0826AB1B
	.string "…… …… ……\n…… …… …… ピッ!\pハルカ『あっ {PLAYER}{KUN}!?\pあたしね さっきまで キナギ タウンに\nいってたんだけど\lおおきな みどりいろの ポケモンが\lそらを とんで いくのを みたの!\pあたし……\nあんな ポケモン みたこと ない!\pなんだろう もしかしたら これって\nだいはっけん!?\p…… …… ……\n…… …… …… ツー"
	.byte EOS
	.if (. - gText_Rom_26AB1B) > 0xad
	.error "gText_Rom_26AB1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AB1B) < 0xad
	.space 0xad - (. - gText_Rom_26AB1B)
	.endif

	@ data/text/match_call.inc:727 MatchCall_Text_BrendanRayquazaCall
	.globl gText_Rom_26ABC8
gText_Rom_26ABC8: @ 0x0826ABC8
	.string "…… …… ……\n…… …… …… ピッ!\pユウキ『おっ {PLAYER}!?\pオレ さっきまで キナギ タウンに\nいってたんだけどさ\lでっかい みどりいろの ポケモンが\lそらを とんで いくのを みたんだ!\pあんな すごいの みたこと ないよ\n{PLAYER}にも みせたかったなあ!\p…… …… ……\n…… …… …… ツー"
	.byte EOS
	.if (. - gText_Rom_26ABC8) > 0x99
	.error "gText_Rom_26ABC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ABC8) < 0x99
	.space 0x99 - (. - gText_Rom_26ABC8)
	.endif

	@ data/text/match_call.inc:730 MatchCall_Text_May1
	.globl gText_Rom_26AC61
gText_Rom_26AC61: @ 0x0826AC61
	.string "ハルカ『あっ {PLAYER}{KUN}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるよ\pきっと いまも うみが すきなんだね!"
	.byte EOS
	.if (. - gText_Rom_26AC61) > 0x5c
	.error "gText_Rom_26AC61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AC61) < 0x5c
	.space 0x5c - (. - gText_Rom_26AC61)
	.endif

	@ data/text/match_call.inc:733 MatchCall_Text_May2
	.globl gText_Rom_26ACBD
gText_Rom_26ACBD: @ 0x0826ACBD
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないのよね\pいつか ジムが できたら あたし\nジムリーダーに りっこうほ しよっかなー"
	.byte EOS
	.if (. - gText_Rom_26ACBD) > 0x73
	.error "gText_Rom_26ACBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ACBD) < 0x73
	.space 0x73 - (. - gText_Rom_26ACBD)
	.endif

	@ data/text/match_call.inc:736 MatchCall_Text_May3
	.globl gText_Rom_26AD30
gText_Rom_26AD30: @ 0x0826AD30
	.string "ハルカ『あっ {PLAYER}{KUN}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あったでしょ?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ っていうの!"
	.byte EOS
	.if (. - gText_Rom_26AD30) > 0x88
	.error "gText_Rom_26AD30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AD30) < 0x88
	.space 0x88 - (. - gText_Rom_26AD30)
	.endif

	@ data/text/match_call.inc:739 MatchCall_Text_May4
	.globl gText_Rom_26ADB8
gText_Rom_26ADB8: @ 0x0826ADB8
	.string "ハルカ『{PLAYER}{KUN}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル って いうのよね!"
	.byte EOS
	.if (. - gText_Rom_26ADB8) > 0x3a
	.error "gText_Rom_26ADB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ADB8) < 0x3a
	.space 0x3a - (. - gText_Rom_26ADB8)
	.endif

	@ data/text/match_call.inc:742 MatchCall_Text_May5
	.globl gText_Rom_26ADF2
gText_Rom_26ADF2: @ 0x0826ADF2
	.string "ハルカ『{PLAYER}{KUN} げんきー?\pあたしは いま\n111ばんどうろに きているの!\pさばくの うえのほうに すんでる\nおばあさんの ところで\lひとやすみ していく つもりよ!"
	.byte EOS
	.if (. - gText_Rom_26ADF2) > 0x56
	.error "gText_Rom_26ADF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ADF2) < 0x56
	.space 0x56 - (. - gText_Rom_26ADF2)
	.endif

	@ data/text/match_call.inc:745 MatchCall_Text_May6
	.globl gText_Rom_26AE48
gText_Rom_26AE48: @ 0x0826AE48
	.string "ハルカ『あっ {PLAYER}{KUN}!\pさばくに げんえいのとう っていうのが\nたってるの しってる?\pしんきろう みたいに\nみえたり みえなかったり するんだって!\pあたしも みてみたいなー"
	.byte EOS
	.if (. - gText_Rom_26AE48) > 0x5a
	.error "gText_Rom_26AE48 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AE48) < 0x5a
	.space 0x5a - (. - gText_Rom_26AE48)
	.endif

	@ data/text/match_call.inc:748 MatchCall_Text_May7
	.globl gText_Rom_26AEA2
gText_Rom_26AEA2: @ 0x0826AEA2
	.string "ハルカ『{PLAYER}{KUN} やっほー!\pあたしは いま\n119ばんどうろに きているの!\pこのあたりは おおきな かわが あるし\nあめも しょっちゅう ふってるから\lずぶぬれに なっちゃったよ!"
	.byte EOS
	.if (. - gText_Rom_26AEA2) > 0x5d
	.error "gText_Rom_26AEA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AEA2) < 0x5d
	.space 0x5d - (. - gText_Rom_26AEA2)
	.endif

	@ data/text/match_call.inc:751 MatchCall_Text_May8
	.globl gText_Rom_26AEFF
gText_Rom_26AEFF: @ 0x0826AEFF
	.string "ハルカ『{PLAYER}{KUN}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるの!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいのよ!"
	.byte EOS
	.if (. - gText_Rom_26AEFF) > 0x51
	.error "gText_Rom_26AEFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AEFF) < 0x51
	.space 0x51 - (. - gText_Rom_26AEFF)
	.endif

	@ data/text/match_call.inc:754 MatchCall_Text_May9
	.globl gText_Rom_26AF50
gText_Rom_26AF50: @ 0x0826AF50
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pあたし また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうに\nにんそうの わるいのが うろついていて\lなんか いやーな かんじ だったわ!"
	.byte EOS
	.if (. - gText_Rom_26AF50) > 0x63
	.error "gText_Rom_26AF50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AF50) < 0x63
	.space 0x63 - (. - gText_Rom_26AF50)
	.endif

	@ data/text/match_call.inc:757 MatchCall_Text_May10
	.globl gText_Rom_26AFB3
gText_Rom_26AFB3: @ 0x0826AFB3
	.string "ハルカ『あっ {PLAYER}{KUN}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みた?"
	.byte EOS
	.if (. - gText_Rom_26AFB3) > 0x45
	.error "gText_Rom_26AFB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AFB3) < 0x45
	.space 0x45 - (. - gText_Rom_26AFB3)
	.endif

	@ data/text/match_call.inc:760 MatchCall_Text_May11
	.globl gText_Rom_26AFF8
gText_Rom_26AFF8: @ 0x0826AFF8
	.string "ハルカ『ねえねえ {PLAYER}{KUN}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lすごいよね!\pでも それだけじゃなくて\nポケモンと いっしょに うみのそこに\lもぐれちゃう わざも あるんだって!"
	.byte EOS
	.if (. - gText_Rom_26AFF8) > 0x6e
	.error "gText_Rom_26AFF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26AFF8) < 0x6e
	.space 0x6e - (. - gText_Rom_26AFF8)
	.endif

	@ data/text/match_call.inc:763 MatchCall_Text_May12
	.globl gText_Rom_26B066
gText_Rom_26B066: @ 0x0826B066
	.string "ハルカ『{PLAYER}{KUN} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいの!"
	.byte EOS
	.if (. - gText_Rom_26B066) > 0x67
	.error "gText_Rom_26B066 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B066) < 0x67
	.space 0x67 - (. - gText_Rom_26B066)
	.endif

	@ data/text/match_call.inc:766 MatchCall_Text_May13
	.globl gText_Rom_26B0CD
gText_Rom_26B0CD: @ 0x0826B0CD
	.string "ハルカ『はーい {PLAYER}{KUN}\pどう? ずかんは じゅんちょうに\nうまっていってる?\pあのね うわさで きいたんだけど\nどこかに ちょうこだいポケモン というのが\l3しゅるいも いるらしいの!\pうーん 1しゅるい だけでも いいから\nみてみたいなあ……"
	.byte EOS
	.if (. - gText_Rom_26B0CD) > 0x7c
	.error "gText_Rom_26B0CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B0CD) < 0x7c
	.space 0x7c - (. - gText_Rom_26B0CD)
	.endif

	@ data/text/match_call.inc:769 MatchCall_Text_May14
	.globl gText_Rom_26B149
gText_Rom_26B149: @ 0x0826B149
	.string "ハルカ『{PLAYER}{KUN}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nということは もうひといき だね!"
	.byte EOS
	.if (. - gText_Rom_26B149) > 0x3b
	.error "gText_Rom_26B149 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B149) < 0x3b
	.space 0x3b - (. - gText_Rom_26B149)
	.endif

	@ data/text/match_call.inc:772 MatchCall_Text_May15
	.globl gText_Rom_26B184
gText_Rom_26B184: @ 0x0826B184
	.string "ハルカ『もう ホウエンちほうで\n{PLAYER}{KUN}を しらない\lトレーナー なんて いないんだよ!\pあたしが {PLAYER}{KUN}と\nともだちだ っていうと\lみんな ビックリ するんだから!"
	.byte EOS
	.if (. - gText_Rom_26B184) > 0x55
	.error "gText_Rom_26B184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B184) < 0x55
	.space 0x55 - (. - gText_Rom_26B184)
	.endif

	@ data/text/match_call.inc:775 MatchCall_Text_Brendan1
	.globl gText_Rom_26B1D9
gText_Rom_26B1D9: @ 0x0826B1D9
	.string "ユウキ『おっ {PLAYER}!\pハギろうじんは\nふなのりを いんたい したけど\pときどき ピーコちゃんと いっしょに\nうみに でてるのを みかけるんだ\pきっと いまも うみが すきなんだろうな!"
	.byte EOS
	.if (. - gText_Rom_26B1D9) > 0x5d
	.error "gText_Rom_26B1D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B1D9) < 0x5d
	.space 0x5d - (. - gText_Rom_26B1D9)
	.endif

	@ data/text/match_call.inc:778 MatchCall_Text_Brendan2
	.globl gText_Rom_26B236
gText_Rom_26B236: @ 0x0826B236
	.string "ユウキ『やあ {PLAYER}!\pトウカや ムロみたいな\nちいさい まちに ジムが あるのに\pおおきな みなとまちの カイナには\nなぜか ジムが ないんだよな\pいつか ジムが できたら オレ\nジムリーダーに りっこうほ しようかな"
	.byte EOS
	.if (. - gText_Rom_26B236) > 0x6e
	.error "gText_Rom_26B236 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B236) < 0x6e
	.space 0x6e - (. - gText_Rom_26B236)
	.endif

	@ data/text/match_call.inc:781 MatchCall_Text_Brendan3
	.globl gText_Rom_26B2A4
gText_Rom_26B2A4: @ 0x0826B2A4
	.string "ユウキ『おっ {PLAYER}!\pそういえば カナズミシティに\nいあいぎりオヤジ っていう ひとの\lいえが あっただろう?\pキンセツシティには\nその おとうとが すんでるんだって!\pどんな なまえだと おもう?\p…… …… ……\n…… …… ……\pいわくだきオヤジ だってさ!"
	.byte EOS
	.if (. - gText_Rom_26B2A4) > 0x85
	.error "gText_Rom_26B2A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B2A4) < 0x85
	.space 0x85 - (. - gText_Rom_26B2A4)
	.endif

	@ data/text/match_call.inc:784 MatchCall_Text_Brendan4
	.globl gText_Rom_26B329
gText_Rom_26B329: @ 0x0826B329
	.string "ユウキ『そのこえは {PLAYER}?\pカナシダトンネル って\nカナズミと シダケを むすぶから\lカナシダトンネル なんだよ\pおまえ…… しってたか?"
	.byte EOS
	.if (. - gText_Rom_26B329) > 0x46
	.error "gText_Rom_26B329 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B329) < 0x46
	.space 0x46 - (. - gText_Rom_26B329)
	.endif

	@ data/text/match_call.inc:787 MatchCall_Text_Brendan5
	.globl gText_Rom_26B36F
gText_Rom_26B36F: @ 0x0826B36F
	.string "ユウキ『{PLAYER} げんきか?\pオレは いま\n111ばんどうろに きてるんだ!\pさばくの うえのほうに すんでる\nばあさんの ところで\lひとやすみ していく つもりさ!\pちかくまで きたら\nおまえも よっていくと いいよ!"
	.byte EOS
	.if (. - gText_Rom_26B36F) > 0x6d
	.error "gText_Rom_26B36F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B36F) < 0x6d
	.space 0x6d - (. - gText_Rom_26B36F)
	.endif

	@ data/text/match_call.inc:790 MatchCall_Text_Brendan6
	.globl gText_Rom_26B3DC
gText_Rom_26B3DC: @ 0x0826B3DC
	.string "ユウキ『あっ {PLAYER}!\pさばくに げんえいのとう っていうのが\nたってるの しってるか?\pしんきろう みたいに\nみえたり みえなかったり するんだよ!\pオレも みてみたいなー"
	.byte EOS
	.if (. - gText_Rom_26B3DC) > 0x57
	.error "gText_Rom_26B3DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B3DC) < 0x57
	.space 0x57 - (. - gText_Rom_26B3DC)
	.endif

	@ data/text/match_call.inc:793 MatchCall_Text_Brendan7
	.globl gText_Rom_26B433
gText_Rom_26B433: @ 0x0826B433
	.string "ユウキ『だれ? {PLAYER}か?\pオレは いま\n119ばんどうろに きてるんだ!\pこのへんは でっかい かわが あるし\nいっつも あめが ふってるから\lずぶぬれに なっちまったよ!"
	.byte EOS
	.if (. - gText_Rom_26B433) > 0x57
	.error "gText_Rom_26B433 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B433) < 0x57
	.space 0x57 - (. - gText_Rom_26B433)
	.endif

	@ data/text/match_call.inc:796 MatchCall_Text_Brendan8
	.globl gText_Rom_26B48A
gText_Rom_26B48A: @ 0x0826B48A
	.string "ユウキ『{PLAYER}!\pおくりびやまには じゅみょうを おえた\nポケモンが まつられてるんだ!\pそのせいか しゅつげんする ポケモンも\nゴーストタイプが おおいんだよな!"
	.byte EOS
	.if (. - gText_Rom_26B48A) > 0x52
	.error "gText_Rom_26B48A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B48A) < 0x52
	.space 0x52 - (. - gText_Rom_26B48A)
	.endif

	@ data/text/match_call.inc:799 MatchCall_Text_Brendan9
	.globl gText_Rom_26B4DC
gText_Rom_26B4DC: @ 0x0826B4DC
	.string "ユウキ『なあなあ {PLAYER}!\pオレ また フエンタウンの\nおんせんに いこうと おもったんだけど\pデコボコさんどうの とちゅうに\nにんそうの わるいのが いたんだよ!\pあれって マグマだん…… だよな!?"
	.byte EOS
	.if (. - gText_Rom_26B4DC) > 0x65
	.error "gText_Rom_26B4DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B4DC) < 0x65
	.space 0x65 - (. - gText_Rom_26B4DC)
	.endif

	@ data/text/match_call.inc:802 MatchCall_Text_Brendan10
	.globl gText_Rom_26B541
gText_Rom_26B541: @ 0x0826B541
	.string "ユウキ『おっ {PLAYER}!\pクスノキかんちょうが せんすいていで\nかいていどうくつを はっけんした って\lニュースで やってたけど みたか?"
	.byte EOS
	.if (. - gText_Rom_26B541) > 0x44
	.error "gText_Rom_26B541 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B541) < 0x44
	.space 0x44 - (. - gText_Rom_26B541)
	.endif

	@ data/text/match_call.inc:805 MatchCall_Text_Brendan11
	.globl gText_Rom_26B585
gText_Rom_26B585: @ 0x0826B585
	.string "ユウキ『なあなあ {PLAYER}!\pふねが なくても ポケモンの わざで\nうみのうえを わたって いけるって\lなんだか すごくないか!?\pしかも ポケモンと いっしょに\nうみのそこに もぐれる わざも あるって!\pポケモンって なんでも できるんだなー!"
	.byte EOS
	.if (. - gText_Rom_26B585) > 0x7b
	.error "gText_Rom_26B585 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B585) < 0x7b
	.space 0x7b - (. - gText_Rom_26B585)
	.endif

	@ data/text/match_call.inc:808 MatchCall_Text_Brendan12
	.globl gText_Rom_26B600
gText_Rom_26B600: @ 0x0826B600
	.string "ユウキ『{PLAYER} おつかれ!\pうみのうえで みえてるのに むこうがわへ\nいけない ところ なんかは\pどこかから いったん もぐって\nかいていの みちを とおりぬけて\lむこうの すいめんに でれば いいんだ!"
	.byte EOS
	.if (. - gText_Rom_26B600) > 0x66
	.error "gText_Rom_26B600 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B600) < 0x66
	.space 0x66 - (. - gText_Rom_26B600)
	.endif

	@ data/text/match_call.inc:811 MatchCall_Text_Brendan13
	.globl gText_Rom_26B666
gText_Rom_26B666: @ 0x0826B666
	.string "ユウキ『おーす {PLAYER}!\pどうだ? ずかんは じゅんちょうに\nうまっていってるか?\pあのな うわさで きいたんだけど\nどこかに ちょうこだいポケモン ってのが\l3しゅるいも いるらしいんだよ!\pうーん 1しゅるい だけでも いいから\nつかまえて みたいよなあ……"
	.byte EOS
	.if (. - gText_Rom_26B666) > 0x83
	.error "gText_Rom_26B666 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B666) < 0x83
	.space 0x83 - (. - gText_Rom_26B666)
	.endif

	@ data/text/match_call.inc:814 MatchCall_Text_Brendan14
	.globl gText_Rom_26B6E9
gText_Rom_26B6E9: @ 0x0826B6E9
	.string "ユウキ『{PLAYER}!\nうわさは きいたよ!\pルネの ジムリーダーにも かったって?\nすげえなあ もうひといき だな!"
	.byte EOS
	.if (. - gText_Rom_26B6E9) > 0x38
	.error "gText_Rom_26B6E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B6E9) < 0x38
	.space 0x38 - (. - gText_Rom_26B6E9)
	.endif

	@ data/text/match_call.inc:817 MatchCall_Text_Brendan15
	.globl gText_Rom_26B721
gText_Rom_26B721: @ 0x0826B721
	.string "ユウキ『もう ホウエンちほうで\n{PLAYER}のこと しらない\lトレーナー なんて いないんだ!\pオレが {PLAYER}と\nともだちだ っていうと\lみんな うらやましそうに するよ!"
	.byte EOS
	.if (. - gText_Rom_26B721) > 0x52
	.error "gText_Rom_26B721 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B721) < 0x52
	.space 0x52 - (. - gText_Rom_26B721)
	.endif

	@ data/text/match_call.inc:820 MatchCall_Text_Wally1
	.globl gText_Rom_26B773
gText_Rom_26B773: @ 0x0826B773
	.string "ミツル『あっ {PLAYER}さん!\pさいきんは からだの ぐあいも\nずいぶん よくなって きたし\pぼくも はやく {PLAYER}さん みたいな\nトレーナーに なりたいな!"
	.byte EOS
	.if (. - gText_Rom_26B773) > 0x4c
	.error "gText_Rom_26B773 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B773) < 0x4c
	.space 0x4c - (. - gText_Rom_26B773)
	.endif

	@ data/text/match_call.inc:823 MatchCall_Text_Wally2
	.globl gText_Rom_26B7BF
gText_Rom_26B7BF: @ 0x0826B7BF
	.string "ミツル『{PLAYER}さん こんにちは!\pカナシダトンネルが かいつう したせいで\nミチルおねえちゃんも\lすっごく うれしそう ですよ!"
	.byte EOS
	.if (. - gText_Rom_26B7BF) > 0x40
	.error "gText_Rom_26B7BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B7BF) < 0x40
	.space 0x40 - (. - gText_Rom_26B7BF)
	.endif

	@ data/text/match_call.inc:826 MatchCall_Text_Wally3
	.globl gText_Rom_26B7FF
gText_Rom_26B7FF: @ 0x0826B7FF
	.string "ミツル『あっ {PLAYER}さん!\pぼく…… シダケの おじさんに\nなにも いわずに でてきちゃった けど\lおじさん おこってないかな……\p{PLAYER}さん なら\nぼくの きもち わかって くれますよね?"
	.byte EOS
	.if (. - gText_Rom_26B7FF) > 0x5e
	.error "gText_Rom_26B7FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B7FF) < 0x5e
	.space 0x5e - (. - gText_Rom_26B7FF)
	.endif

	@ data/text/match_call.inc:829 MatchCall_Text_Wally4
	.globl gText_Rom_26B85D
gText_Rom_26B85D: @ 0x0826B85D
	.string "ミツル『{PLAYER}さん?\nぼくです ミツルです!\pトレーナーの せかいって すごいですね!\nポケモンを つれて あるいていると\lみんなが こえを かけて くれるんです!\pまるで ポケモンを つうじて\nみんなが つながっている みたいに!"
	.byte EOS
	.if (. - gText_Rom_26B85D) > 0x74
	.error "gText_Rom_26B85D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B85D) < 0x74
	.space 0x74 - (. - gText_Rom_26B85D)
	.endif

	@ data/text/match_call.inc:832 MatchCall_Text_Wally5
	.globl gText_Rom_26B8D1
gText_Rom_26B8D1: @ 0x0826B8D1
	.string "ミツル『{PLAYER}さん? すごいですよ!\n{PLAYER}さんと いっしょに つかまえた\lラルトスが しんか したんです!\pぼくって さいのう あるのかなあ……\pなーんて ちょうしに のったら\nいけませんよね\pえらいのは ポケモン ですもん!"
	.byte EOS
	.if (. - gText_Rom_26B8D1) > 0x71
	.error "gText_Rom_26B8D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B8D1) < 0x71
	.space 0x71 - (. - gText_Rom_26B8D1)
	.endif

	@ data/text/match_call.inc:835 MatchCall_Text_Wally6
	.globl gText_Rom_26B942
gText_Rom_26B942: @ 0x0826B942
	.string "…… …… ……\n…… …… ……\pミツルは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - gText_Rom_26B942) > 0x36
	.error "gText_Rom_26B942 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B942) < 0x36
	.space 0x36 - (. - gText_Rom_26B942)
	.endif

	@ data/text/match_call.inc:838 MatchCall_Text_Wally7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26B978
gText_Rom_26B978: @ 0x0826B978
	.string "ミツル『あっ {PLAYER}さん!\pいままで ほとんど いえから\nでたことの ない ぼくが\pこうして ポケモンと いっしょに\nぼうけんを している なんて……\p{PLAYER}さん…… ありがとう"
	.byte EOS
	.if (. - gText_Rom_26B978) != 0x58
	.error "gText_Rom_26B978 must retain its original byte length"
	.endif
	.globl gText_Rom_26B9CA
	.set gText_Rom_26B9CA, gText_Rom_26B978 + 0x52

	@ data/text/match_call.inc:841 MatchCall_Text_Scott1
	.globl gText_Rom_26B9D0
gText_Rom_26B9D0: @ 0x0826B9D0
	.string "エニシダ『どーも どーも {PLAYER}{KUN}\pやまでも うみでも くさむらでも\nどこにだって ポケモンが いるように\lトレーナーさん というのも\lいろんな ところに いるもんだねえ\pおかげで わたしも\nアッチいったり コッチいったり\lいそがしくて しょうがないよ!"
	.byte EOS
	.if (. - gText_Rom_26B9D0) > 0x80
	.error "gText_Rom_26B9D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26B9D0) < 0x80
	.space 0x80 - (. - gText_Rom_26B9D0)
	.endif

	@ data/text/match_call.inc:844 MatchCall_Text_Scott2
	.globl gText_Rom_26BA50
gText_Rom_26BA50: @ 0x0826BA50
	.string "エニシダ『わたしは いま\n119ばん どうろに きてるんだけど\lたくさんの トレーナーが いるねえ!\pでも このあたりは せのたかい くさが\nいっぱい はえてるから\pはんズボンで あるきまわると\nあしが くすぐったくて こまるよ!"
	.byte EOS
	.if (. - gText_Rom_26BA50) > 0x74
	.error "gText_Rom_26BA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BA50) < 0x74
	.space 0x74 - (. - gText_Rom_26BA50)
	.endif

	@ data/text/match_call.inc:847 MatchCall_Text_Scott3
	.globl gText_Rom_26BAC4
gText_Rom_26BAC4: @ 0x0826BAC4
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pきみは おくりびやま って\nのぼったこと ある?\pあそこは ポケモンの たましいが\nまつられている ばしょ だからねえ\pトレーナー ならば いちど ぐらいは\nてっぺんまで のぼって みないとね!"
	.byte EOS
	.if (. - gText_Rom_26BAC4) > 0x72
	.error "gText_Rom_26BAC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BAC4) < 0x72
	.space 0x72 - (. - gText_Rom_26BAC4)
	.endif

	@ data/text/match_call.inc:850 MatchCall_Text_Scott4
	.globl gText_Rom_26BB36
gText_Rom_26BB36: @ 0x0826BB36
	.string "エニシダ『んー {PLAYER}{KUN}!\pどうも ちかごろは\nマグマだん とか アクアだん とか\lおかしな れんちゅうが あばれてるね\pかれらの なかには\nすぐれた トレーナーも いるんだろうけど\lでも わるもの じゃあなあ……"
	.byte EOS
	.if (. - gText_Rom_26BB36) > 0x6c
	.error "gText_Rom_26BB36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BB36) < 0x6c
	.space 0x6c - (. - gText_Rom_26BB36)
	.endif

	@ data/text/match_call.inc:853 MatchCall_Text_Scott5
	.globl gText_Rom_26BBA2
gText_Rom_26BBA2: @ 0x0826BBA2
	.string "エニシダ『おおー {PLAYER}{KUN}\pあのね うみのそこにも すごうでの\nトレーナーが いたり するのかな?\pでも たしかめに いこうにも\nわたしは およげないし\lポケモンも もってないし……"
	.byte EOS
	.if (. - gText_Rom_26BBA2) > 0x5c
	.error "gText_Rom_26BBA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BBA2) < 0x5c
	.space 0x5c - (. - gText_Rom_26BBA2)
	.endif

	@ data/text/match_call.inc:856 MatchCall_Text_Scott6
	.globl gText_Rom_26BBFE
gText_Rom_26BBFE: @ 0x0826BBFE
	.string "エニシダ『やあやあ {PLAYER}{KUN}!\pぜんぶの ジムバッジを あつめたら\nポケモンリーグに ちょうせん できる\lというのは しってるよね?\pきみほどの じつりょくが あるなら\nチャンピオンも ゆめじゃない けど……\lじつは もっと いいところが あるんだよ\pまあ いまは それいじょう\nいわないで おくよ\pポケモンリーグを かちぬいて\nでんどういり してからの おたのしみだね!"
	.byte EOS
	.if (. - gText_Rom_26BBFE) > 0xbb
	.error "gText_Rom_26BBFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BBFE) < 0xbb
	.space 0xbb - (. - gText_Rom_26BBFE)
	.endif

	@ data/text/match_call.inc:859 MatchCall_Text_Scott7
	.globl gText_Rom_26BCB9
gText_Rom_26BCB9: @ 0x0826BCB9
	.string "…… …… ……\n…… …… ……\pエニシダは ポケナビの よびだしが\nとどかない ところに いるようだ……"
	.byte EOS
	.if (. - gText_Rom_26BCB9) > 0x37
	.error "gText_Rom_26BCB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BCB9) < 0x37
	.space 0x37 - (. - gText_Rom_26BCB9)
	.endif

	@ data/text/match_call.inc:862 MatchCall_Text_Norman1
	.globl gText_Rom_26BCF0
gText_Rom_26BCF0: @ 0x0826BCF0
	.string "パパ『カナズミの まちには\nいあいぎりおやじ という\lかわった なまえの ひとが すんでいる!\pちかくまで いったら\nおまえも たずねて みると いいぞ!"
	.byte EOS
	.if (. - gText_Rom_26BCF0) > 0x4e
	.error "gText_Rom_26BCF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BCF0) < 0x4e
	.space 0x4e - (. - gText_Rom_26BCF0)
	.endif

	@ data/text/match_call.inc:865 MatchCall_Text_Norman2
	.globl gText_Rom_26BD3E
gText_Rom_26BD3E: @ 0x0826BD3E
	.string "パパ『ふむ…… {PLAYER}は\nすこしずつ しかし かくじつに\lつよく なっているな\pおまえが つよくなれば なるほど\nわたしや ママの もとから\lとおくへ はなれて いってしまう……\pなんとも ふくざつな きぶんだよ"
	.byte EOS
	.if (. - gText_Rom_26BD3E) > 0x6a
	.error "gText_Rom_26BD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BD3E) < 0x6a
	.space 0x6a - (. - gText_Rom_26BD3E)
	.endif

	@ data/text/match_call.inc:868 MatchCall_Text_Norman3
	.globl gText_Rom_26BDA8
gText_Rom_26BDA8: @ 0x0826BDA8
	.string "パパ『そうか……\nジムバッジを 4つ あつめたのか\pでは やくそく どおり\nポケモンしょうぶ だな……\pいつでも おいで まってるぞ!"
	.byte EOS
	.if (. - gText_Rom_26BDA8) > 0x44
	.error "gText_Rom_26BDA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BDA8) < 0x44
	.space 0x44 - (. - gText_Rom_26BDA8)
	.endif

	@ data/text/match_call.inc:871 MatchCall_Text_Norman4
	.globl gText_Rom_26BDEC
gText_Rom_26BDEC: @ 0x0826BDEC
	.string "パパ『{PLAYER}! たまには ママにも\nあいに いって あげるんだぞ!\pわたしは ここで\nじぶんを きたえなおす!\pポケモンしょうぶの みちは\nおくが ふかい からな!"
	.byte EOS
	.if (. - gText_Rom_26BDEC) > 0x52
	.error "gText_Rom_26BDEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BDEC) < 0x52
	.space 0x52 - (. - gText_Rom_26BDEC)
	.endif

	@ data/text/match_call.inc:874 MatchCall_Text_Norman5
	.globl gText_Rom_26BE3E
gText_Rom_26BE3E: @ 0x0826BE3E
	.string "パパ『おお {PLAYER}!\pなになに? マグマのしるし……?\nなんのことか わたしには わからないが\pマグマと いうぐらい だから\nなにか かざんと かんけい ありそうだな!"
	.byte EOS
	.if (. - gText_Rom_26BE3E) > 0x54
	.error "gText_Rom_26BE3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BE3E) < 0x54
	.space 0x54 - (. - gText_Rom_26BE3E)
	.endif

	@ data/text/match_call.inc:877 MatchCall_Text_Norman_Preparing
	.globl gText_Rom_26BE92
gText_Rom_26BE92: @ 0x0826BE92
	.string "パパ『せや! うりゃ! どりゃー!\p……お {PLAYER}か!\pわたしは いま ポケモンと いっしょに\nトレーニングの まっさいちゅうだ!"
	.byte EOS
	.if (. - gText_Rom_26BE92) > 0x41
	.error "gText_Rom_26BE92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BE92) < 0x41
	.space 0x41 - (. - gText_Rom_26BE92)
	.endif

	@ data/text/match_call.inc:880 MatchCall_Text_Norman_PreparingPostGame
	.globl gText_Rom_26BED3
gText_Rom_26BED3: @ 0x0826BED3
	.string "パパ『{PLAYER}!\pまさか おまえが でんどういりを\nはたして しまうとは……\pよし!\nわたしも まけては いられないぞ!"
	.byte EOS
	.if (. - gText_Rom_26BED3) > 0x3b
	.error "gText_Rom_26BED3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BED3) < 0x3b
	.space 0x3b - (. - gText_Rom_26BED3)
	.endif

	@ data/text/match_call.inc:883 MatchCall_Text_Norman_RematchReady
	.globl gText_Rom_26BF0E
gText_Rom_26BF0E: @ 0x0826BF0E
	.string "パパ『……ん? {PLAYER}か?\nこれは ちょうど よかった!\pこんどは パパから おまえに\nしょうぶを もうしこんで やろう\pトウカの ジムで まってるから\nいつでも ちょうせんしに おいで!"
	.byte EOS
	.if (. - gText_Rom_26BF0E) > 0x5e
	.error "gText_Rom_26BF0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF0E) < 0x5e
	.space 0x5e - (. - gText_Rom_26BF0E)
	.endif

	@ data/text/match_call.inc:886 MatchCall_Text_Norman_PostRematch
	.globl gText_Rom_26BF6C
gText_Rom_26BF6C: @ 0x0826BF6C
	.string "パパ『……すごいなあ {PLAYER}\nどこまで つよく なっちゃうんだろう "
	.byte EOS
	.if (. - gText_Rom_26BF6C) > 0x22
	.error "gText_Rom_26BF6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF6C) < 0x22
	.space 0x22 - (. - gText_Rom_26BF6C)
	.endif

	@ data/text/match_call.inc:889 MatchCall_Text_Steven1
	.globl gText_Rom_26BF8E
gText_Rom_26BF8E: @ 0x0826BF8E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pもう キンセツシティには いったかな?\pまちの サイクルショップで\nマッハじてんしゃを てにいれたら\pもういちど いしのどうくつの おくに\nいってみるのも いいね!\pなにか あたらしい はっけんが\nあるかも しれないよ!"
	.byte EOS
	.if (. - gText_Rom_26BF8E) > 0x7c
	.error "gText_Rom_26BF8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26BF8E) < 0x7c
	.space 0x7c - (. - gText_Rom_26BF8E)
	.endif

	@ data/text/match_call.inc:892 MatchCall_Text_Steven2
	.globl gText_Rom_26C00A
gText_Rom_26C00A: @ 0x0826C00A
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pボクは これまでに ずいぶん いろいろな\nトレーナーを みてきた けれど\pキミは だれにも にていない\nはじめて みる タイプの ひとだよ!"
	.byte EOS
	.if (. - gText_Rom_26C00A) > 0x54
	.error "gText_Rom_26C00A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C00A) < 0x54
	.space 0x54 - (. - gText_Rom_26C00A)
	.endif

	@ data/text/match_call.inc:895 MatchCall_Text_Steven3
	.globl gText_Rom_26C05E
gText_Rom_26C05E: @ 0x0826C05E
	.string "ダイゴ『やあ {PLAYER}{KUN}!\pキミは ポケモンと ぼうけんを していて\nどんな きぶんに なる?\pつよいみかた だと おもうかい?\nたのしいなかま だと おもうかい?\pキミが どう かんじるかに よって\nその ぼうけんの いみは かわるんだ!"
	.byte EOS
	.if (. - gText_Rom_26C05E) > 0x78
	.error "gText_Rom_26C05E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C05E) < 0x78
	.space 0x78 - (. - gText_Rom_26C05E)
	.endif

	@ data/text/match_call.inc:898 MatchCall_Text_Steven4
	.globl gText_Rom_26C0D6
gText_Rom_26C0D6: @ 0x0826C0D6
	.string "ダイゴ『ああ {PLAYER}{KUN} かい?\pちょっと いま うちゅうセンターで\nめんどうな ことが おきてるんだ\pわるいけど また あとでね!"
	.byte EOS
	.if (. - gText_Rom_26C0D6) > 0x42
	.error "gText_Rom_26C0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C0D6) < 0x42
	.space 0x42 - (. - gText_Rom_26C0D6)
	.endif

	@ data/text/match_call.inc:901 MatchCall_Text_Steven5
	.globl gText_Rom_26C118
gText_Rom_26C118: @ 0x0826C118
	.string "ダイゴ『あっ {PLAYER}{KUN}!\pなにも いわなくて いいよ!\nとにかく いまは……\pキミが おもうように すすむんだ!"
	.byte EOS
	.if (. - gText_Rom_26C118) > 0x39
	.error "gText_Rom_26C118 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C118) < 0x39
	.space 0x39 - (. - gText_Rom_26C118)
	.endif

	@ data/text/match_call.inc:904 MatchCall_Text_Steven6
	.globl gText_Rom_26C151
gText_Rom_26C151: @ 0x0826C151
	.string "…… …… ……\pダイゴには よびだしが\nつうじていない ようだ……"
	.byte EOS
	.if (. - gText_Rom_26C151) > 0x23
	.error "gText_Rom_26C151 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C151) < 0x23
	.space 0x23 - (. - gText_Rom_26C151)
	.endif

	@ data/text/match_call.inc:907 MatchCall_Text_Steven7
	.globl gText_Rom_26C174
gText_Rom_26C174: @ 0x0826C174
	.string "ダイゴ『{PLAYER}{KUN}……\nでんどういり おめでとう\p…… …… ……\n…… …… ……\pまた いつか あえると いいね!"
	.byte EOS
	.if (. - gText_Rom_26C174) > 0x3b
	.error "gText_Rom_26C174 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C174) < 0x3b
	.space 0x3b - (. - gText_Rom_26C174)
	.endif

	@ data/text/match_call.inc:910 MatchCall_Text_BirchRegisterCall
	.globl gText_Rom_26C1AF
gText_Rom_26C1AF: @ 0x0826C1AF
	.string "オダマキ『おお {PLAYER}{KUN}!\nはなしは すでに きいて いるよ!\pきみの ポケナビに エントリーコールが\nセットされた らしいな!\pならば わたしも とうろく しておこう!\pこれで きみと はなれていても\nすぐに ポケモンずかんの ひょうかを\lしてあげられる からね!\p…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C1AF) > 0x8f
	.error "gText_Rom_26C1AF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C1AF) < 0x8f
	.space 0x8f - (. - gText_Rom_26C1AF)
	.endif

	@ data/maps/Route110/scripts.inc:980 Route110_Text_RegisteredBirchInPokenav (+1 aliases)
	.globl gText_Rom_26C23E
gText_Rom_26C23E: @ 0x0826C23E
	.string "オダマキはかせを\nポケナビに とうろく した!"
	.byte EOS
	.if (. - gText_Rom_26C23E) > 0x18
	.error "gText_Rom_26C23E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C23E) < 0x18
	.space 0x18 - (. - gText_Rom_26C23E)
	.endif

	@ data/text/match_call.inc:916 MatchCall_Text_UnusedProfBirch
	.globl gText_Rom_26C256
gText_Rom_26C256: @ 0x0826C256
	.string "オダマキ『ずかんと ポケナビが あれば\nポケモンの ちょうさも\lより いっそう たのしくなるな!"
	.byte EOS
	.if (. - gText_Rom_26C256) > 0x31
	.error "gText_Rom_26C256 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C256) < 0x31
	.space 0x31 - (. - gText_Rom_26C256)
	.endif

	@ data/text/match_call.inc:919 MatchCall_Text_MrStone1
	.globl gText_Rom_26C287
gText_Rom_26C287: @ 0x0826C287
	.string "ツワブキ『おっ! {PLAYER}{KUN}か?\pこうして わしを よびだした ってことは\nポケナビの ちょうしは よさそうだな!\pわしの ほかにも いろんな ひとが\nとうろく されて いくから どんどん\lよびだして はなしを すると いいぞ!\pけっこう! けっこう!\nうれしそうに しとる ようだな!\p……ん? なんで わかるのかって?\pそれは…… しゃちょうしつの まどから\nきみを みおろして いるからだよ!\pわははは! じゃあ またな!"
	.byte EOS
	.if (. - gText_Rom_26C287) > 0xd6
	.error "gText_Rom_26C287 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C287) < 0xd6
	.space 0xd6 - (. - gText_Rom_26C287)
	.endif

	@ data/text/match_call.inc:922 MatchCall_Text_MrStone2
	.globl gText_Rom_26C35D
gText_Rom_26C35D: @ 0x0826C35D
	.string "ツワブキ『おっ! {PLAYER}{KUN}か?\pどうした! わしが たのんだ しごと\nわすれちゃったの かな?\pまずは ムロタウンで ダイゴに\nてがみを わたしてくれ!\pそのあと カイナシティの クスノキくんに\nわがしゃの にもつを とどけるんだ!\pな? おぼえたかな?\nわしは いそがしい しゃちょう だからね\lこれで しつれい するよ!"
	.byte EOS
	.if (. - gText_Rom_26C35D) > 0xa3
	.error "gText_Rom_26C35D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C35D) < 0xa3
	.space 0xa3 - (. - gText_Rom_26C35D)
	.endif

	@ data/text/match_call.inc:925 MatchCall_Text_MrStone3
	.globl gText_Rom_26C400
gText_Rom_26C400: @ 0x0826C400
	.string "ツワブキ『おっ! {PLAYER}{KUN}!\pそうか ダイゴに あえたのか!\nよーし おれいに プレゼントを やろう!\pカナズミに くることが あったら\nわしの へやに よっていって おくれ!\pじゃあな まっとるぞ!"
	.byte EOS
	.if (. - gText_Rom_26C400) > 0x65
	.error "gText_Rom_26C400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C400) < 0x65
	.space 0x65 - (. - gText_Rom_26C400)
	.endif

	@ data/text/match_call.inc:928 MatchCall_Text_MrStone4
	.globl gText_Rom_26C465
gText_Rom_26C465: @ 0x0826C465
	.string "ツワブキ『おお! {PLAYER}{KUN}!\pそうそう カナシダトンネルは\nわがしゃが ほって いたんだけどね\pあの あたりに せいそく している\nポケモンを ほご するために\lこうじは ちゅうし したんだよ\pまあ にんげんの べんりさ よりは\nポケモンが しずかに くらせる\lそのほうが だいじな ことだからね!"
	.byte EOS
	.if (. - gText_Rom_26C465) > 0x96
	.error "gText_Rom_26C465 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C465) < 0x96
	.space 0x96 - (. - gText_Rom_26C465)
	.endif

	@ data/text/match_call.inc:931 MatchCall_Text_MrStone5
	.globl gText_Rom_26C4FB
gText_Rom_26C4FB: @ 0x0826C4FB
	.string "ツワブキ『やあやあ {PLAYER}{KUN}!\pトウカシティの ひとから きいたんだけど\nきみは センリさんの こども なんだね\pどうりで たのもしいと おもったよ!"
	.byte EOS
	.if (. - gText_Rom_26C4FB) > 0x4c
	.error "gText_Rom_26C4FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C4FB) < 0x4c
	.space 0x4c - (. - gText_Rom_26C4FB)
	.endif

	@ data/text/match_call.inc:934 MatchCall_Text_MrStone6
	.globl gText_Rom_26C547
gText_Rom_26C547: @ 0x0826C547
	.string "ツワブキ『ええっ!\nきみは じぶんの おとうさんと\lポケモンしょうぶを して かったのかい?\pこりゃ びっくりだ!\nわしは すごい ひとと ともだちに\lなっちゃったんだなあ! わはは!"
	.byte EOS
	.if (. - gText_Rom_26C547) > 0x5d
	.error "gText_Rom_26C547 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C547) < 0x5d
	.space 0x5d - (. - gText_Rom_26C547)
	.endif

	@ data/text/match_call.inc:937 MatchCall_Text_MrStone7
	.globl gText_Rom_26C5A4
gText_Rom_26C5A4: @ 0x0826C5A4
	.string "もしもし!\nデボンコーポレーションで ございま……\lああ {PLAYER}さん ですね!\pしゃちょうは さっきまで いたんですけど\nいまは るすに してるんですよ!\pうちの しゃちょうも いそがしいけど\n{PLAYER}さんも いそがしそう ですね!"
	.byte EOS
	.if (. - gText_Rom_26C5A4) > 0x72
	.error "gText_Rom_26C5A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C5A4) < 0x72
	.space 0x72 - (. - gText_Rom_26C5A4)
	.endif

	@ data/text/match_call.inc:940 MatchCall_Text_MrStone8
	.globl gText_Rom_26C616
gText_Rom_26C616: @ 0x0826C616
	.string "……え ……なにかね?\pグラ…… はい? ……ドン?\pなんだか…… きこえな……\pザザザザザ…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C616) > 0x37
	.error "gText_Rom_26C616 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C616) < 0x37
	.space 0x37 - (. - gText_Rom_26C616)
	.endif

	@ data/text/match_call.inc:943 MatchCall_Text_MrStone9
	.globl gText_Rom_26C64D
gText_Rom_26C64D: @ 0x0826C64D
	.string "……え ……なにかね?\pかいて…… はい? ……どうくつ?\pなんだか…… きこえな……\pザザザザザ…… …… ……"
	.byte EOS
	.if (. - gText_Rom_26C64D) > 0x3a
	.error "gText_Rom_26C64D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C64D) < 0x3a
	.space 0x3a - (. - gText_Rom_26C64D)
	.endif

	@ data/text/match_call.inc:946 MatchCall_Text_MrStone10
	.globl gText_Rom_26C687
gText_Rom_26C687: @ 0x0826C687
	.string "ツワブキ『{PLAYER}{KUN}! わしだ!\pなんだか いろいろ あった らしいが\nいそがしい わしには\lなんの ことだか サッパリ わからん!\pとにかく キミは じぶんの しんじた\nみちを あゆんで いきたまえ!\pわしも カゲながら おうえん しとるぞ!\nじゃあな!"
	.byte EOS
	.if (. - gText_Rom_26C687) > 0x80
	.error "gText_Rom_26C687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C687) < 0x80
	.space 0x80 - (. - gText_Rom_26C687)
	.endif

	@ data/text/match_call.inc:949 MatchCall_Text_MrStone11
	.globl gText_Rom_26C707
gText_Rom_26C707: @ 0x0826C707
	.string "ツワブキ『…… …… ……\nもしかして {PLAYER}{KUN} か?\pこえに じしんが みなぎっていて\nいっしゅん ちがうひとかと おもったぞ!\pうむ! たまには わがしゃにも\nあそびに きておくれ!"
	.byte EOS
	.if (. - gText_Rom_26C707) > 0x5e
	.error "gText_Rom_26C707 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26C707) < 0x5e
	.space 0x5e - (. - gText_Rom_26C707)
	.endif
	@ Embedded ROM bytes: file offset 0x26C765, size 0x618
	.byte 0x6A, 0x5A, 0x16, 0x04, 0x80, 0x00, 0x00, 0x25, 0x94, 0x01, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06
	.byte 0x01, 0xD8, 0xC7, 0x26, 0x08, 0x16, 0x04, 0x80, 0x0A, 0x00, 0x25, 0x94, 0x01, 0x21, 0x04, 0x80
	.byte 0x00, 0x00, 0x06, 0x01, 0x96, 0xC7, 0x26, 0x08, 0x2B, 0x34, 0x09, 0x06, 0x01, 0x68, 0xCD, 0x26
	.byte 0x08, 0x16, 0x04, 0x80, 0x0B, 0x00, 0x25, 0x94, 0x01, 0x21, 0x0D, 0x80, 0x02, 0x00, 0x06, 0x01
	.byte 0xAB, 0xC8, 0x26, 0x08, 0x21, 0x0D, 0x80, 0x04, 0x00, 0x06, 0x01, 0xA7, 0xC9, 0x26, 0x08, 0x21
	.byte 0x0D, 0x80, 0x03, 0x00, 0x06, 0x01, 0x4F, 0xCB, 0x26, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0x34, 0xCC, 0x26, 0x08, 0x21, 0x0D, 0x80, 0x05, 0x00, 0x06, 0x01, 0xAC, 0xCC, 0x26, 0x08
	.byte 0x6C, 0x6B, 0x02, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80
	.byte 0x06, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16
	.byte 0x06, 0x80, 0x00, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80
	.byte 0x06, 0x00, 0x25, 0x94, 0x01, 0x27, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x93, 0xC8, 0x26
	.byte 0x08, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x02, 0x00
	.byte 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x25, 0x94
	.byte 0x01, 0x27, 0x16, 0x04, 0x80, 0x01, 0x00, 0x1A, 0x05, 0x80, 0x0D, 0x80, 0x17, 0x05, 0x80, 0x01
	.byte 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x03, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10
	.byte 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x08, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04
	.byte 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x03, 0x00, 0x25, 0x94, 0x01
	.byte 0x27, 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C, 0x6B, 0x19, 0x00, 0x80, 0x0C, 0x80, 0x21, 0x00, 0x80
	.byte 0x02, 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26, 0x08, 0x05, 0x4A, 0xCD, 0x26, 0x08, 0x02, 0x16, 0x04
	.byte 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x01, 0x00, 0x25, 0x94, 0x01
	.byte 0x27, 0x05, 0xFD, 0xC7, 0x26, 0x08, 0x16, 0x04, 0x80, 0x0E, 0x00, 0x16, 0x05, 0x80, 0x02, 0x00
	.byte 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80
	.byte 0x00, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16
	.byte 0x06, 0x80, 0x01, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00
	.byte 0x00, 0x16, 0x06, 0x80, 0x06, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16
	.byte 0x05, 0x80, 0x02, 0x00, 0x25, 0x94, 0x01, 0x27, 0x19, 0x05, 0x80, 0x0D, 0x80, 0x21, 0x05, 0x80
	.byte 0x00, 0x00, 0x07, 0x01, 0x92, 0xC9, 0x26, 0x08, 0x21, 0x05, 0x80, 0x01, 0x00, 0x07, 0x01, 0x98
	.byte 0xC9, 0x26, 0x08, 0x16, 0x04, 0x80, 0x0C, 0x00, 0x25, 0x94, 0x01, 0x19, 0x06, 0x80, 0x0D, 0x80
	.byte 0x16, 0x04, 0x80, 0x0D, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x05, 0x00, 0x25, 0x94, 0x01
	.byte 0x16, 0x04, 0x80, 0x0C, 0x00, 0x25, 0x94, 0x01, 0x21, 0x0D, 0x80, 0x03, 0x00, 0x07, 0x01, 0x9E
	.byte 0xC9, 0x26, 0x08, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x19, 0x06, 0x80
	.byte 0x07, 0x80, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x0F, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80
	.byte 0x08, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x07, 0x00, 0x25, 0x94, 0x01, 0x27
	.byte 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C, 0x6B, 0x19, 0x00, 0x80, 0x0C, 0x80, 0x21, 0x00, 0x80, 0x02
	.byte 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26, 0x08, 0x05, 0x4A, 0xCD, 0x26, 0x08, 0x02, 0x16, 0x07, 0x80
	.byte 0x00, 0x00, 0x03, 0x16, 0x07, 0x80, 0x01, 0x00, 0x03, 0x16, 0x04, 0x80, 0x04, 0x00, 0x25, 0x94
	.byte 0x01, 0x03, 0x16, 0x04, 0x80, 0x0E, 0x00, 0x16, 0x05, 0x80, 0x04, 0x00, 0x25, 0x94, 0x01, 0x16
	.byte 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x02, 0x00, 0x25, 0x94
	.byte 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x0A, 0x00
	.byte 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x0F, 0x00, 0x25, 0x94, 0x01, 0x97, 0x01, 0x16, 0x0D
	.byte 0x80, 0x00, 0x00, 0x16, 0x04, 0x80, 0x13, 0x00, 0x25, 0x94, 0x01, 0x27, 0x21, 0x0D, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0x59, 0xCA, 0x26, 0x08, 0x16, 0x04, 0x80, 0x14, 0x00, 0x25, 0x94, 0x01, 0x21
	.byte 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xE4, 0xCA, 0x26, 0x08, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16
	.byte 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x05, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08
	.byte 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x0C, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16
	.byte 0x04, 0x80, 0x05, 0x00, 0x25, 0x94, 0x01, 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C, 0x6B, 0x19, 0x00
	.byte 0x80, 0x0C, 0x80, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26, 0x08, 0x05, 0x4A
	.byte 0xCD, 0x26, 0x08, 0x02, 0x16, 0x04, 0x80, 0x0E, 0x00, 0x16, 0x05, 0x80, 0x04, 0x00, 0x25, 0x94
	.byte 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x02, 0x00
	.byte 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80
	.byte 0x0D, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80, 0x04, 0x00
	.byte 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x0F, 0x00, 0x25, 0x94, 0x01, 0x21, 0x0D, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0xE1, 0xC9, 0x26, 0x08, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x01
	.byte 0x00, 0x16, 0x06, 0x80, 0x0E, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x05, 0x00, 0x25
	.byte 0x94, 0x01, 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C, 0x6B, 0x19, 0x00, 0x80, 0x0C, 0x80, 0x21, 0x00
	.byte 0x80, 0x02, 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26, 0x08, 0x05, 0x4A, 0xCD, 0x26, 0x08, 0x02, 0x16
	.byte 0x04, 0x80, 0x0E, 0x00, 0x16, 0x05, 0x80, 0x04, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10
	.byte 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x05, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04
	.byte 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x02, 0x00, 0x25, 0x94, 0x01
	.byte 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x10, 0x00, 0x25
	.byte 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80, 0x04, 0x00, 0x25, 0x94, 0x01
	.byte 0x27, 0x16, 0x04, 0x80, 0x0F, 0x00, 0x25, 0x94, 0x01, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01
	.byte 0xE1, 0xC9, 0x26, 0x08, 0x05, 0xAC, 0xCA, 0x26, 0x08, 0x02, 0x16, 0x04, 0x80, 0x0E, 0x00, 0x16
	.byte 0x05, 0x80, 0x03, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00
	.byte 0x00, 0x16, 0x06, 0x80, 0x02, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05
	.byte 0x80, 0x01, 0x00, 0x16, 0x06, 0x80, 0x03, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00
	.byte 0x16, 0x05, 0x80, 0x02, 0x00, 0x16, 0x06, 0x80, 0x04, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80
	.byte 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x08, 0x00, 0x25, 0x94, 0x01, 0x27
	.byte 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80, 0x03, 0x00, 0x25, 0x94, 0x01, 0x27, 0x19, 0x05
	.byte 0x80, 0x0D, 0x80, 0x21, 0x05, 0x80, 0x00, 0x00, 0x07, 0x01, 0x28, 0xCC, 0x26, 0x08, 0x21, 0x05
	.byte 0x80, 0x01, 0x00, 0x07, 0x01, 0x2E, 0xCC, 0x26, 0x08, 0x16, 0x04, 0x80, 0x11, 0x00, 0x25, 0x94
	.byte 0x01, 0x16, 0x04, 0x80, 0x05, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05
	.byte 0x80, 0x00, 0x00, 0x19, 0x06, 0x80, 0x07, 0x80, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x0F, 0x00
	.byte 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x16, 0x06, 0x80
	.byte 0x09, 0x00, 0x25, 0x94, 0x01, 0x27, 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C, 0x6B, 0x19, 0x00, 0x80
	.byte 0x0C, 0x80, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26, 0x08, 0x05, 0x4A, 0xCD
	.byte 0x26, 0x08, 0x02, 0x16, 0x07, 0x80, 0x03, 0x00, 0x03, 0x16, 0x07, 0x80, 0x04, 0x00, 0x03, 0x16
	.byte 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x04, 0x00, 0x25, 0x94
	.byte 0x01, 0x27, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x25, 0x94, 0x01, 0x27
	.byte 0x19, 0x05, 0x80, 0x0D, 0x80, 0x16, 0x04, 0x80, 0x12, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80
	.byte 0x05, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16
	.byte 0x06, 0x80, 0x09, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x01
	.byte 0x00, 0x16, 0x06, 0x80, 0x05, 0x00, 0x25, 0x94, 0x01, 0x27, 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C
	.byte 0x6B, 0x19, 0x00, 0x80, 0x0C, 0x80, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26
	.byte 0x08, 0x05, 0x4A, 0xCD, 0x26, 0x08, 0x02, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80, 0x01
	.byte 0x00, 0x16, 0x06, 0x80, 0x0B, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x19, 0x00, 0x25
	.byte 0x94, 0x01, 0x16, 0x04, 0x80, 0x13, 0x00, 0x04, 0x08, 0x2F, 0x24, 0x08, 0x6A, 0x5A, 0x16, 0x04
	.byte 0x80, 0x15, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x10, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00
	.byte 0x16, 0x06, 0x80, 0x07, 0x00, 0x25, 0x94, 0x01, 0x16, 0x04, 0x80, 0x08, 0x00, 0x16, 0x05, 0x80
	.byte 0x01, 0x00, 0x16, 0x06, 0x80, 0x0F, 0x00, 0x25, 0x94, 0x01, 0x27, 0x16, 0x04, 0x80, 0x09, 0x00
	.byte 0x25, 0x94, 0x01, 0x04, 0x25, 0xCD, 0x26, 0x08, 0x6C, 0x6B, 0x19, 0x00, 0x80, 0x0C, 0x80, 0x21
	.byte 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x2C, 0xCD, 0x26, 0x08, 0x05, 0x4A, 0xCD, 0x26, 0x08, 0x02
	.byte 0x29, 0xBD, 0x02, 0x29, 0x34, 0x09, 0x03, 0x16, 0x04, 0x80, 0x18, 0x00, 0x25, 0x94, 0x01, 0x21
	.byte 0x04, 0x80, 0x00, 0x00, 0x06, 0x01, 0x6B, 0xCD, 0x26, 0x08, 0x4F, 0x06, 0x00, 0x6C, 0xCD, 0x26
	.byte 0x08, 0x51, 0x00, 0x00, 0x02, 0x16, 0x04, 0x80, 0x18, 0x00, 0x25, 0x94, 0x01, 0x21, 0x04, 0x80
	.byte 0x00, 0x00, 0x06, 0x01, 0x6B, 0xCD, 0x26, 0x08, 0x4F, 0x06, 0x00, 0x6D, 0xCD, 0x26, 0x08, 0x51
	.byte 0x00, 0x00, 0x02, 0x6C, 0x6B, 0x02, 0x02, 0x18, 0x15, 0x15, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18
	.byte 0x18, 0x18, 0x18, 0x54, 0x31, 0x31, 0x31, 0xFE

	@ data/text/apprentice.inc:1 gText_ApprenticeChallenge0
	.globl gText_Rom_26CD7D
gText_Rom_26CD7D: @ 0x0826CD7D
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばん でしです!\nグスン…… きんちょう するなあ"
	.byte EOS
	.if (. - gText_Rom_26CD7D) > 0x22
	.error "gText_Rom_26CD7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CD7D) < 0x22
	.space 0x22 - (. - gText_Rom_26CD7D)
	.endif

	@ data/text/apprentice.inc:4 gText_ApprenticeChallenge1
	.globl gText_Rom_26CD9F
gText_Rom_26CD9F: @ 0x0826CD9F
	.string "ぼく {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし なんだ! いくぞー!"
	.byte EOS
	.if (. - gText_Rom_26CD9F) > 0x1d
	.error "gText_Rom_26CD9F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CD9F) < 0x1d
	.space 0x1d - (. - gText_Rom_26CD9F)
	.endif

	@ data/text/apprentice.inc:7 gText_ApprenticeChallenge2
	.globl gText_Rom_26CDBC
gText_Rom_26CDBC: @ 0x0826CDBC
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ!\nいざ しょうぶ!"
	.byte EOS
	.if (. - gText_Rom_26CDBC) > 0x1a
	.error "gText_Rom_26CDBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CDBC) < 0x1a
	.space 0x1a - (. - gText_Rom_26CDBC)
	.endif

	@ data/text/apprentice.inc:10 gText_ApprenticeChallenge3
	.globl gText_Rom_26CDD6
gText_Rom_26CDD6: @ 0x0826CDD6
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんでしです…\nあたし なんかが かてる かな……?"
	.byte EOS
	.if (. - gText_Rom_26CDD6) > 0x23
	.error "gText_Rom_26CDD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CDD6) < 0x23
	.space 0x23 - (. - gText_Rom_26CDD6)
	.endif

	@ data/text/apprentice.inc:13 gText_ApprenticeChallenge4
	.globl gText_Rom_26CDF9
gText_Rom_26CDF9: @ 0x0826CDF9
	.string "{STR_VAR_1}の {STR_VAR_2}ばん でしなの!\nしょうぶ して あげるわ!"
	.byte EOS
	.if (. - gText_Rom_26CDF9) > 0x1d
	.error "gText_Rom_26CDF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CDF9) < 0x1d
	.space 0x1d - (. - gText_Rom_26CDF9)
	.endif

	@ data/text/apprentice.inc:16 gText_ApprenticeChallenge5
	.globl gText_Rom_26CE16
gText_Rom_26CE16: @ 0x0826CE16
	.string "いそがしい なか {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってる オレです!"
	.byte EOS
	.if (. - gText_Rom_26CE16) > 0x23
	.error "gText_Rom_26CE16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE16) < 0x23
	.space 0x23 - (. - gText_Rom_26CE16)
	.endif

	@ data/text/apprentice.inc:19 gText_ApprenticeChallenge6
	.globl gText_Rom_26CE39
gText_Rom_26CE39: @ 0x0826CE39
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしトレーナーよ よっろしくぅ!"
	.byte EOS
	.if (. - gText_Rom_26CE39) > 0x1d
	.error "gText_Rom_26CE39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE39) < 0x1d
	.space 0x1d - (. - gText_Rom_26CE39)
	.endif

	@ data/text/apprentice.inc:22 gText_ApprenticeChallenge7
	.globl gText_Rom_26CE56
gText_Rom_26CE56: @ 0x0826CE56
	.string "わたくし {STR_VAR_1}さまの {STR_VAR_2}ばんの\nでしで ございますの…… いきますわよ"
	.byte EOS
	.if (. - gText_Rom_26CE56) > 0x25
	.error "gText_Rom_26CE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE56) < 0x25
	.space 0x25 - (. - gText_Rom_26CE56)
	.endif

	@ data/text/apprentice.inc:25 gText_ApprenticeChallenge8
	.globl gText_Rom_26CE7B
gText_Rom_26CE7B: @ 0x0826CE7B
	.string "キャー! {STR_VAR_1}せんせいの\n{STR_VAR_2}ばん でし ですっ! がんばります!"
	.byte EOS
	.if (. - gText_Rom_26CE7B) > 0x22
	.error "gText_Rom_26CE7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE7B) < 0x22
	.space 0x22 - (. - gText_Rom_26CE7B)
	.endif

	@ data/text/apprentice.inc:28 gText_ApprenticeChallenge9
	.globl gText_Rom_26CE9D
gText_Rom_26CE9D: @ 0x0826CE9D
	.string "いえーい! {STR_VAR_1}さんの\n{STR_VAR_2}ばん でしの おじさんと しょうぶ!"
	.byte EOS
	.if (. - gText_Rom_26CE9D) > 0x21
	.error "gText_Rom_26CE9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CE9D) < 0x21
	.space 0x21 - (. - gText_Rom_26CE9D)
	.endif

	@ data/text/apprentice.inc:31 gText_ApprenticeChallenge10
	.globl gText_Rom_26CEBE
gText_Rom_26CEBE: @ 0x0826CEBE
	.string "{STR_VAR_1}の 1000ばんめの でしだ!\nうそ ほんとは {STR_VAR_2}ばん! いくぞ!"
	.byte EOS
	.if (. - gText_Rom_26CEBE) > 0x25
	.error "gText_Rom_26CEBE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CEBE) < 0x25
	.space 0x25 - (. - gText_Rom_26CEBE)
	.endif

	@ data/text/apprentice.inc:34 gText_ApprenticeChallenge11
	.globl gText_Rom_26CEE3
gText_Rom_26CEE3: @ 0x0826CEE3
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしだぜ! ノリノリで いってみようぜー!"
	.byte EOS
	.if (. - gText_Rom_26CEE3) > 0x22
	.error "gText_Rom_26CEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CEE3) < 0x22
	.space 0x22 - (. - gText_Rom_26CEE3)
	.endif

	@ data/text/apprentice.inc:37 gText_ApprenticeChallenge12
	.globl gText_Rom_26CF05
gText_Rom_26CF05: @ 0x0826CF05
	.string "イヤハァ! {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でしとは オレのことっ!"
	.byte EOS
	.if (. - gText_Rom_26CF05) > 0x1f
	.error "gText_Rom_26CF05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF05) < 0x1f
	.space 0x1f - (. - gText_Rom_26CF05)
	.endif

	@ data/text/apprentice.inc:40 gText_ApprenticeChallenge13
	.globl gText_Rom_26CF24
gText_Rom_26CF24: @ 0x0826CF24
	.string "……ゴホっ ゴホっ よろしく!\n{STR_VAR_1}さんの {STR_VAR_2}ばんでしだ!"
	.byte EOS
	.if (. - gText_Rom_26CF24) > 0x1f
	.error "gText_Rom_26CF24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF24) < 0x1f
	.space 0x1f - (. - gText_Rom_26CF24)
	.endif

	@ data/text/apprentice.inc:43 gText_ApprenticeChallenge14
	.globl gText_Rom_26CF43
gText_Rom_26CF43: @ 0x0826CF43
	.string "て てれますが {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってます……!"
	.byte EOS
	.if (. - gText_Rom_26CF43) > 0x20
	.error "gText_Rom_26CF43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF43) < 0x20
	.space 0x20 - (. - gText_Rom_26CF43)
	.endif

	@ data/text/apprentice.inc:46 gText_ApprenticeChallenge15
	.globl gText_Rom_26CF63
gText_Rom_26CF63: @ 0x0826CF63
	.string "うそじゃない! わたしは\n{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ"
	.byte EOS
	.if (. - gText_Rom_26CF63) > 0x1d
	.error "gText_Rom_26CF63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF63) < 0x1d
	.space 0x1d - (. - gText_Rom_26CF63)
	.endif

	@ data/text/apprentice.inc:49 gText_ApprenticePleaseTeach0
	.globl gText_Rom_26CF80
gText_Rom_26CF80: @ 0x0826CF80
	.string "も もしかして {PLAYER}さん……?\lああ! グスっ……\pあ…… ごめんなさい!\nきんちょう して なみだが でちゃった……\pぼくは {STR_VAR_1} って いって\n{PLAYER}さんに あこがれて います!\lい いつか {PLAYER}さんに あって\lポケモンのこと おしえて もらう って\lゆめ みて いたんです……! うう……\pあのう あのう {PLAYER}さん!\nできたら…… ポケモンのこと\lおしえて ください!"
	.byte EOS
	.if (. - gText_Rom_26CF80) > 0xbb
	.error "gText_Rom_26CF80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26CF80) < 0xbb
	.space 0xbb - (. - gText_Rom_26CF80)
	.endif

	@ data/text/apprentice.inc:52 gText_ApprenticeRejectTeaching0
	.globl gText_Rom_26D03B
gText_Rom_26D03B: @ 0x0826D03B
	.string "そ そんな……\nう うう うわーん!\pおねがいです…… おねがい ですから……!"
	.byte EOS
	.if (. - gText_Rom_26D03B) > 0x29
	.error "gText_Rom_26D03B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D03B) < 0x29
	.space 0x29 - (. - gText_Rom_26D03B)
	.endif

	@ data/text/apprentice.inc:55 gText_ApprenticeWhichLevelMode0
	.globl gText_Rom_26D064
gText_Rom_26D064: @ 0x0826D064
	.string "えー ほんとですか!\nやった! うれしいよう! うぉぉーん!\pあ…… ごめん なさい\nうれしくて なみだが……\pあのう じゃあ おしえて ください!\nバトルタワーの へや なんですけど\lレベル50と オープンレベルの へや\lぼく だったら どっちが いいのかな……?"
	.byte EOS
	.if (. - gText_Rom_26D064) > 0x86
	.error "gText_Rom_26D064 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D064) < 0x86
	.space 0x86 - (. - gText_Rom_26D064)
	.endif

	@ data/text/apprentice.inc:58 gText_ApprenticeLevelModeThanks0
	.globl gText_Rom_26D0EA
gText_Rom_26D0EA: @ 0x0826D0EA
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\n{PLAYER}さんが ぼくに へやを\lきめてくれた うれしさで なみだが……\p……グスン\nありがとう ございました!\lまた おはなし してください!"
	.byte EOS
	.if (. - gText_Rom_26D0EA) > 0x61
	.error "gText_Rom_26D0EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D0EA) < 0x61
	.space 0x61 - (. - gText_Rom_26D0EA)
	.endif

	@ data/text/apprentice.inc:61 gText_ApprenticePleaseTeach1
	.globl gText_Rom_26D14B
gText_Rom_26D14B: @ 0x0826D14B
	.string "うわー! {PLAYER}さん だよね?\nすごく つよい ひと なんだよね?\pボク {STR_VAR_1}!\nトレーナーに なった ばかり なんだ\pねえ おねがい {PLAYER}さん!\nぼくの せんせいに なって\lトレーナーのこと いっぱい おしえてよ!"
	.byte EOS
	.if (. - gText_Rom_26D14B) > 0x6c
	.error "gText_Rom_26D14B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D14B) < 0x6c
	.space 0x6c - (. - gText_Rom_26D14B)
	.endif

	@ data/text/apprentice.inc:64 gText_ApprenticeRejectTeaching1
	.globl gText_Rom_26D1B7
gText_Rom_26D1B7: @ 0x0826D1B7
	.string "えー? どうして?\nねーっ いいでしょ いいでしょ\lせんせいに なってよ おねがい!"
	.byte EOS
	.if (. - gText_Rom_26D1B7) > 0x2b
	.error "gText_Rom_26D1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D1B7) < 0x2b
	.space 0x2b - (. - gText_Rom_26D1B7)
	.endif

	@ data/text/apprentice.inc:67 gText_ApprenticeWhichLevelMode1
	.globl gText_Rom_26D1E2
gText_Rom_26D1E2: @ 0x0826D1E2
	.string "わーい やった!\nじゃあねー はじめに ききたい ことはね\lバトルタワーの こと!\pレベル50と オープンレベルの へや\nどっちが ボクに ピッタリ かなあ?"
	.byte EOS
	.if (. - gText_Rom_26D1E2) > 0x50
	.error "gText_Rom_26D1E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D1E2) < 0x50
	.space 0x50 - (. - gText_Rom_26D1E2)
	.endif

	@ data/text/apprentice.inc:70 gText_ApprenticeLevelModeThanks1
	.globl gText_Rom_26D232
gText_Rom_26D232: @ 0x0826D232
	.string "{STR_VAR_1}か! そーだよね!\nじゃあ ボク がんばるね!\pまた こんど ここで あったら\nなにか おしえてね せんせい!"
	.byte EOS
	.if (. - gText_Rom_26D232) > 0x3a
	.error "gText_Rom_26D232 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D232) < 0x3a
	.space 0x3a - (. - gText_Rom_26D232)
	.endif

	@ data/text/apprentice.inc:73 gText_ApprenticePleaseTeach2
	.globl gText_Rom_26D26C
gText_Rom_26D26C: @ 0x0826D26C
	.string "あの…… {PLAYER}さん ですか!?\nぼく {STR_VAR_1} って いいます!\pぼく ポケモントレーナーに なりたいんだけど\nどうすれば いいのか わからなくて……\pそれで ゆうめいな {PLAYER}さんに\nどうすれば いいのか きいてみようと\lおもったんです!\pそうだんに のって もらえますか?"
	.byte EOS
	.if (. - gText_Rom_26D26C) > 0x88
	.error "gText_Rom_26D26C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D26C) < 0x88
	.space 0x88 - (. - gText_Rom_26D26C)
	.endif

	@ data/text/apprentice.inc:76 gText_ApprenticeRejectTeaching2
	.globl gText_Rom_26D2F4
gText_Rom_26D2F4: @ 0x0826D2F4
	.string "そんなあ!\nぼく どうしても ポケモントレーナーに\lなりたいんです!\pしつもんに こたえて もらえますか?"
	.byte EOS
	.if (. - gText_Rom_26D2F4) > 0x36
	.error "gText_Rom_26D2F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D2F4) < 0x36
	.space 0x36 - (. - gText_Rom_26D2F4)
	.endif

	@ data/text/apprentice.inc:79 gText_ApprenticeWhichLevelMode2
	.globl gText_Rom_26D32A
gText_Rom_26D32A: @ 0x0826D32A
	.string "ありがとう ございます!\nじゃあ さっそく さいしょの しつもん!\pバトルタワーって レベル50と オープンと\nふたつの レベルが ありますよね!\pどっちの レベルが\nぼくに あってると おもいますか?"
	.byte EOS
	.if (. - gText_Rom_26D32A) > 0x66
	.error "gText_Rom_26D32A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D32A) < 0x66
	.space 0x66 - (. - gText_Rom_26D32A)
	.endif

	@ data/text/apprentice.inc:82 gText_ApprenticeLevelModeThanks2
	.globl gText_Rom_26D390
gText_Rom_26D390: @ 0x0826D390
	.string "{STR_VAR_1} ですね! わかりました!\nじゃあ また しつもんが あったら\lここに くるので おしえて ください!"
	.byte EOS
	.if (. - gText_Rom_26D390) > 0x36
	.error "gText_Rom_26D390 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D390) < 0x36
	.space 0x36 - (. - gText_Rom_26D390)
	.endif

	@ data/text/apprentice.inc:85 gText_ApprenticePleaseTeach3
	.globl gText_Rom_26D3C6
gText_Rom_26D3C6: @ 0x0826D3C6
	.string "あれ? え? あなたは……!\nいえ そんなはず ないわ\lあたし なんかが {PLAYER}さんに\lあえるはず なんて ないもん\p……ほんとに {PLAYER}さん なの?\nしんじられない おはなし できるなんて!\lああ こんな いいことが あったら\lあとは わるいこと ばっかり おきるんだわ\p……あ ごめんなさい\nあたし…… {STR_VAR_1} です……\lなんの とりえも ありません\lって じこしょうかい なんて しても\lどうせ すぐ わすれちゃいます よね……\p{PLAYER}さんに あえたら\nトレーナーとして そうだんに のって って\lおねがい しようと おもっていたけど\lどうせ ムリですよね?\p……それとも もしかして\nそうだんに のって もらえたり しますか?"
	.byte EOS
	.if (. - gText_Rom_26D3C6) > 0x13a
	.error "gText_Rom_26D3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D3C6) < 0x13a
	.space 0x13a - (. - gText_Rom_26D3C6)
	.endif

	@ data/text/apprentice.inc:88 gText_ApprenticeRejectTeaching3
	.globl gText_Rom_26D500
gText_Rom_26D500: @ 0x0826D500
	.string "やっぱり…… そうですよね\nあたし なんて ほんとに\lつまらない おんなのこで……\pでも もしかしたら って おもって……\nかんがえなおして なんて くれませんよね?\pけど やっぱり あきらめられない\nうんが いい うちに おねがいしよう!\l……そうだんに のって もらえますか?"
	.byte EOS
	.if (. - gText_Rom_26D500) > 0x8d
	.error "gText_Rom_26D500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D500) < 0x8d
	.space 0x8d - (. - gText_Rom_26D500)
	.endif

	@ data/text/apprentice.inc:91 gText_ApprenticeWhichLevelMode3
	.globl gText_Rom_26D58D
gText_Rom_26D58D: @ 0x0826D58D
	.string "ほんとう ですか? しんじられない!\nあたし なんかの そうだんに\lのってもらえる なんて!\lうれしい です……\pほんとうに くだらないです けど\nあたし には きめられないん です\pバトルタワーって レベルが\nレベル50と オープンレベルと\lふたつ えらべる けど……\pあたし なんか でも がんばれそうな\nレベルって どっちの へや でしょうか?"
	.byte EOS
	.if (. - gText_Rom_26D58D) > 0xb0
	.error "gText_Rom_26D58D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D58D) < 0xb0
	.space 0xb0 - (. - gText_Rom_26D58D)
	.endif

	@ data/text/apprentice.inc:94 gText_ApprenticeLevelModeThanks3
	.globl gText_Rom_26D63D
gText_Rom_26D63D: @ 0x0826D63D
	.string "{STR_VAR_1} ですか わかりました!\nほんとうに こんな あたしでも\lだいじょうぶ でしょうか\lがんばって みます ダメかも しれないけど\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_Rom_26D63D) > 0x63
	.error "gText_Rom_26D63D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D63D) < 0x63
	.space 0x63 - (. - gText_Rom_26D63D)
	.endif

	@ data/text/apprentice.inc:97 gText_ApprenticePleaseTeach4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26D6A0
gText_Rom_26D6A0: @ 0x0826D6A0
	.string "あっ! {PLAYER}{KUN} でしょ!?\nポケモン つよいって きいてるよ!\pわたしは {STR_VAR_1}\nおともだちに なって あげる!\pあのね トレーナーズスクール で\nおそわった こと だけじゃ\lバトルフロンティア では かてないの!\pそうだんに のってくれても いいわよ\nもちろん オーケー でしょ?"
	.byte EOS
	.if (. - gText_Rom_26D6A0) != 0x8e
	.error "gText_Rom_26D6A0 must retain its original byte length"
	.endif
	.globl gText_Rom_26D729
	.set gText_Rom_26D729, gText_Rom_26D6A0 + 0x89

	@ data/text/apprentice.inc:100 gText_ApprenticeRejectTeaching4
	.globl gText_Rom_26D72E
gText_Rom_26D72E: @ 0x0826D72E
	.string "え? なんで ことわるの?\nあたしの おねがい なんだけど!\lかんがえなおしてよぉ!"
	.byte EOS
	.if (. - gText_Rom_26D72E) > 0x2b
	.error "gText_Rom_26D72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D72E) < 0x2b
	.space 0x2b - (. - gText_Rom_26D72E)
	.endif

	@ data/text/apprentice.inc:103 gText_ApprenticeWhichLevelMode4
	.globl gText_Rom_26D759
gText_Rom_26D759: @ 0x0826D759
	.string "うん じゃあ おねがいね\nさっそく きめて ほしいことが あるから\pレベル50と オープンレベルの へやが\nバトルタワーに あるじゃない?\l{PLAYER}{KUN}は わたしには\lどっちが いいと おもう?"
	.byte EOS
	.if (. - gText_Rom_26D759) > 0x60
	.error "gText_Rom_26D759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D759) < 0x60
	.space 0x60 - (. - gText_Rom_26D759)
	.endif

	@ data/text/apprentice.inc:106 gText_ApprenticeLevelModeThanks4
	.globl gText_Rom_26D7B9
gText_Rom_26D7B9: @ 0x0826D7B9
	.string "そう {STR_VAR_1}が\nわたしに ふさわしいのね ありがと!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26D7B9) > 0x4e
	.error "gText_Rom_26D7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D7B9) < 0x4e
	.space 0x4e - (. - gText_Rom_26D7B9)
	.endif

	@ data/text/apprentice.inc:109 gText_ApprenticePleaseTeach5
	.globl gText_Rom_26D807
gText_Rom_26D807: @ 0x0826D807
	.string "ああ きみ! {PLAYER}{KUN}!\nゆうめい だから しってるぜ\lオレは {STR_VAR_1} よろしく!\pオレは トライアスリート やってて\nからだを きたえる かたわら\lポケモンも そだてて ほかにも\lバイトに ひるねに しゃこうダンス……\pいそがしくて なっかなか\nいい トレーナーに なれないんだよね!\pそこで おねがい!\pここで あえたのも なにかの ごえん!\n{PLAYER}{KUN} たまに オレに\lアドバイスを おねがい できないかな?"
	.byte EOS
	.if (. - gText_Rom_26D807) > 0xce
	.error "gText_Rom_26D807 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D807) < 0xce
	.space 0xce - (. - gText_Rom_26D807)
	.endif

	@ data/text/apprentice.inc:112 gText_ApprenticeRejectTeaching5
	.globl gText_Rom_26D8D5
gText_Rom_26D8D5: @ 0x0826D8D5
	.string "えー! たのむよ!\n{PLAYER}{KUN} みたいな ひとが\lオレには ひつよう なんだよー!\pオレに アドバイス たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26D8D5) > 0x39
	.error "gText_Rom_26D8D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D8D5) < 0x39
	.space 0x39 - (. - gText_Rom_26D8D5)
	.endif

	@ data/text/apprentice.inc:115 gText_ApprenticeWhichLevelMode5
	.globl gText_Rom_26D90E
gText_Rom_26D90E: @ 0x0826D90E
	.string "サンキュー そう こなくっちゃ!\nんじゃ てはじめに かるいのを 1つね!\pあのさ バトルタワー って\nレベルが 2しゅるい あるじゃん?\lレベル50と オープンレベル!\pいそがしい オレ だったら\nどっちで がんばれば いいかな?"
	.byte EOS
	.if (. - gText_Rom_26D90E) > 0x75
	.error "gText_Rom_26D90E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D90E) < 0x75
	.space 0x75 - (. - gText_Rom_26D90E)
	.endif

	@ data/text/apprentice.inc:118 gText_ApprenticeLevelModeThanks5
	.globl gText_Rom_26D983
gText_Rom_26D983: @ 0x0826D983
	.string "{STR_VAR_1} ね! オーケー!\nなんとか じかん つくって やってみるぜ!\p……っと いけね バイトのじかんだ!\nじゃあ サンキュー またな!"
	.byte EOS
	.if (. - gText_Rom_26D983) > 0x44
	.error "gText_Rom_26D983 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D983) < 0x44
	.space 0x44 - (. - gText_Rom_26D983)
	.endif

	@ data/text/apprentice.inc:121 gText_ApprenticePleaseTeach6
	.globl gText_Rom_26D9C7
gText_Rom_26D9C7: @ 0x0826D9C7
	.string "うっそ もしかして\nほんものの {PLAYER}さん?\pあっは! すごーい!\nわたし {STR_VAR_1}よ よろしくぅ!\p{PLAYER}さん って なんか\nとっても つよいんでしょ\lみんな うわさ してるもんね!\pあ! いいこと かんがえちゃった\nわたし {PLAYER}さんに\lアドバイスを もらおうっと!\lきっと つよく なれそう!\pねっ いいでしょ?\nわたしに アドバイス おねがい!"
	.byte EOS
	.if (. - gText_Rom_26D9C7) > 0xac
	.error "gText_Rom_26D9C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D9C7) < 0xac
	.space 0xac - (. - gText_Rom_26D9C7)
	.endif

	@ data/text/apprentice.inc:124 gText_ApprenticeRejectTeaching6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26DA73
gText_Rom_26DA73: @ 0x0826DA73
	.string "あははは! そんな いじわる いっても\nあたし には つうじないわよん!\lほんとは オーケー なんでしょ?"
	.byte EOS
	.if (. - gText_Rom_26DA73) != 0x36
	.error "gText_Rom_26DA73 must retain its original byte length"
	.endif
	.globl gText_Rom_26DAA4
	.set gText_Rom_26DAA4, gText_Rom_26DA73 + 0x31

	@ data/text/apprentice.inc:127 gText_ApprenticeWhichLevelMode6
	.globl gText_Rom_26DAA9
gText_Rom_26DAA9: @ 0x0826DAA9
	.string "わーい さっすが {PLAYER}さん!\nココロひろーい!\lまずは なにから きこうかなー?\l……あっ おもいついた!\pジャーン しつもんです!\nわたしが バトルタワーに いどむなら!\lレベル50のへや! オープンレベルのへや!\lさて どっちが にあっている でしょう?"
	.byte EOS
	.if (. - gText_Rom_26DAA9) > 0x82
	.error "gText_Rom_26DAA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DAA9) < 0x82
	.space 0x82 - (. - gText_Rom_26DAA9)
	.endif

	@ data/text/apprentice.inc:130 gText_ApprenticeLevelModeThanks6
	.globl gText_Rom_26DB2B
gText_Rom_26DB2B: @ 0x0826DB2B
	.string "ほほぉー!\n{STR_VAR_1} と きましたか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26DB2B) > 0x4a
	.error "gText_Rom_26DB2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DB2B) < 0x4a
	.space 0x4a - (. - gText_Rom_26DB2B)
	.endif

	@ data/text/apprentice.inc:133 gText_ApprenticePleaseTeach7
	.globl gText_Rom_26DB75
gText_Rom_26DB75: @ 0x0826DB75
	.string "もし {PLAYER}さんで\nいらっしゃいますか?\pおめに かかれて うれしゅうございます\nわたくし {STR_VAR_1}と もうしますの\l{PLAYER}さんに かねてより\lあこがれて おりました……\p…… …… ……\pあの…… こんな おねがい\nおこまりに なるかも しれませんが…\pわたくしを {PLAYER}さんに\nでしいり させて いただけません?"
	.byte EOS
	.if (. - gText_Rom_26DB75) > 0x9a
	.error "gText_Rom_26DB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DB75) < 0x9a
	.space 0x9a - (. - gText_Rom_26DB75)
	.endif

	@ data/text/apprentice.inc:136 gText_ApprenticeRejectTeaching7
	.globl gText_Rom_26DC0F
gText_Rom_26DC0F: @ 0x0826DC0F
	.string "まあ……!\p…… …… ……\n…… …… ……\p……あ ショックで きを うしないましたわ\nいいえ! きっと ききまちがい ですわ\pおねがい! わたくしを\nでしに して くださると おっしゃって!"
	.byte EOS
	.if (. - gText_Rom_26DC0F) > 0x63
	.error "gText_Rom_26DC0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DC0F) < 0x63
	.space 0x63 - (. - gText_Rom_26DC0F)
	.endif

	@ data/text/apprentice.inc:139 gText_ApprenticeWhichLevelMode7
	.globl gText_Rom_26DC72
gText_Rom_26DC72: @ 0x0826DC72
	.string "うっ うれしい ですわ……!\pでは さっそくですけど わたくしの\nそうだんを きいて くださいませ!\pわたくし いちど バトルタワーに\nちょうせん しようと おもっていますの\lただ レベルが ふたつ ありまして……\pわたくしは レベル50と オープンレベル\nどちらに ふさわしいと おもわれますか?"
	.byte EOS
	.if (. - gText_Rom_26DC72) > 0x96
	.error "gText_Rom_26DC72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DC72) < 0x96
	.space 0x96 - (. - gText_Rom_26DC72)
	.endif

	@ data/text/apprentice.inc:142 gText_ApprenticeLevelModeThanks7
	.globl gText_Rom_26DD08
gText_Rom_26DD08: @ 0x0826DD08
	.string "{STR_VAR_1} ですのね!\nわかりました がんばりますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26DD08) > 0x3f
	.error "gText_Rom_26DD08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DD08) < 0x3f
	.space 0x3f - (. - gText_Rom_26DD08)
	.endif

	@ data/text/apprentice.inc:145 gText_ApprenticePleaseTeach8
	.globl gText_Rom_26DD47
gText_Rom_26DD47: @ 0x0826DD47
	.string "キャー! キャー!!!\n{PLAYER}さんに はなしかけられた!\lかっ かんげきっ……!\pわたし! {STR_VAR_1}と いいますっ!\nトレーナーに なって すぐに\lポケモンかいの おおもの {PLAYER}さんと\lおはなし できて かんどう してますっ!\pそそそそ そうだ!\n{PLAYER}さん おねがいが!\lわたしを でしに して くださいっ!\lいろいろ おしえて ほしいのですっ!"
	.byte EOS
	.if (. - gText_Rom_26DD47) > 0xab
	.error "gText_Rom_26DD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DD47) < 0xab
	.space 0xab - (. - gText_Rom_26DD47)
	.endif

	@ data/text/apprentice.inc:148 gText_ApprenticeRejectTeaching8
	.globl gText_Rom_26DDF2
gText_Rom_26DDF2: @ 0x0826DDF2
	.string "うっわああ!!\n{PLAYER}さんに ことわられた……\lきっ きちょうな けいけん だわっ!\p{PLAYER}さんっ! こんどは\nよい おへんじも きかせて くださいっ!\lわたしに ごしどうを おねがいしますっ!"
	.byte EOS
	.if (. - gText_Rom_26DDF2) > 0x60
	.error "gText_Rom_26DDF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DDF2) < 0x60
	.space 0x60 - (. - gText_Rom_26DDF2)
	.endif

	@ data/text/apprentice.inc:151 gText_ApprenticeWhichLevelMode8
	.globl gText_Rom_26DE52
gText_Rom_26DE52: @ 0x0826DE52
	.string "ひええええぇ! {PLAYER}さんに\nはい って いわれたああぁ!!\lきょうは もう ねむれない……\lおありがとう ございますう!\pではっ うかがいます!\nわたしは バトルタワー\lレベル50のへやと オープンレベルのへや\lどちらに むいてると おもわれますかっ?"
	.byte EOS
	.if (. - gText_Rom_26DE52) > 0x7f
	.error "gText_Rom_26DE52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DE52) < 0x7f
	.space 0x7f - (. - gText_Rom_26DE52)
	.endif

	@ data/text/apprentice.inc:154 gText_ApprenticeLevelModeThanks8
	.globl gText_Rom_26DED1
gText_Rom_26DED1: @ 0x0826DED1
	.string "{STR_VAR_1} りょうかいですっ\nりょうかいで ありますっ!\lわたし かんげき です!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26DED1) > 0x43
	.error "gText_Rom_26DED1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DED1) < 0x43
	.space 0x43 - (. - gText_Rom_26DED1)
	.endif

	@ data/text/apprentice.inc:157 gText_ApprenticePleaseTeach9
	.globl gText_Rom_26DF14
gText_Rom_26DF14: @ 0x0826DF14
	.string "ワォ! きみは\nもしや もしや {PLAYER}{KUN}!\lストロングで フェイマスな トレーナー!\lいや おじさん ラッキーだなー!\pハロウ おじさんは {STR_VAR_1}ね!\nポケモン ティーチャー さがしてるんだ\lそんな ときに グッドタイミングで\l{PLAYER}{KUN}が あらわれた!\pと いうわけで {PLAYER}{KUN}!\nおじさんを でしいり させて くれ!"
	.byte EOS
	.if (. - gText_Rom_26DF14) > 0x9f
	.error "gText_Rom_26DF14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DF14) < 0x9f
	.space 0x9f - (. - gText_Rom_26DF14)
	.endif

	@ data/text/apprentice.inc:160 gText_ApprenticeRejectTeaching9
	.globl gText_Rom_26DFB3
gText_Rom_26DFB3: @ 0x0826DFB3
	.string "ぐわーっ!\nきみも なかなか クールで タフだね……\lそんなこと いわずに おねがいだよ!"
	.byte EOS
	.if (. - gText_Rom_26DFB3) > 0x2e
	.error "gText_Rom_26DFB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DFB3) < 0x2e
	.space 0x2e - (. - gText_Rom_26DFB3)
	.endif

	@ data/text/apprentice.inc:163 gText_ApprenticeWhichLevelMode9
	.globl gText_Rom_26DFE1
gText_Rom_26DFE1: @ 0x0826DFE1
	.string "おぅー! グッと くるね!\nエクセレント!\pでは ファースト アドバイス たのむね!\nバトルタワー なんだけどさ\lおじさんが やるなら レベルは\l50と オープン どっちが ベターかな?"
	.byte EOS
	.if (. - gText_Rom_26DFE1) > 0x5e
	.error "gText_Rom_26DFE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DFE1) < 0x5e
	.space 0x5e - (. - gText_Rom_26DFE1)
	.endif

	@ data/text/apprentice.inc:166 gText_ApprenticeLevelModeThanks9
	.globl gText_Rom_26E03F
gText_Rom_26E03F: @ 0x0826E03F
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん バーっと がんばって くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26E03F) > 0x42
	.error "gText_Rom_26E03F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E03F) < 0x42
	.space 0x42 - (. - gText_Rom_26E03F)
	.endif

	@ data/text/apprentice.inc:169 gText_ApprenticePleaseTeach10
	.globl gText_Rom_26E081
gText_Rom_26E081: @ 0x0826E081
	.string "お おいっ {PLAYER}{KUN}だろ!\nさっき おまわりさんが さがしてたぞ!\p…… …… ……\nなんてね うっそ うそ!\pおいらは {STR_VAR_1} って いうんだ\nこうみえても ポケモンチャンピオンさ!\l……て いうのも ウソ!\pじつは おいら ポケモンしょうぶが\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらの ししょうに なってくれない かな?"
	.byte EOS
	.if (. - gText_Rom_26E081) > 0xac
	.error "gText_Rom_26E081 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E081) < 0xac
	.space 0xac - (. - gText_Rom_26E081)
	.endif

	@ data/text/apprentice.inc:172 gText_ApprenticeRejectTeaching10
	.globl gText_Rom_26E12D
gText_Rom_26E12D: @ 0x0826E12D
	.string "そんな つめたい こと いうと\nこうだぞ!\pうえーん うえーん えーん えん えん\pなんてね うそなき!\pね! いいだろ\nおいらの ししょうに なって おくれよ!"
	.byte EOS
	.if (. - gText_Rom_26E12D) > 0x52
	.error "gText_Rom_26E12D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E12D) < 0x52
	.space 0x52 - (. - gText_Rom_26E12D)
	.endif

	@ data/text/apprentice.inc:175 gText_ApprenticeWhichLevelMode10
	.globl gText_Rom_26E17F
gText_Rom_26E17F: @ 0x0826E17F
	.string "やったー!\nおれいに ふねを かって あげよう!\pなんて じょうだん だけど……\nししょう! よろしく たのむぜ!\pあのさ バトルタワーで\nレベル50と オープンレベルと あるだろ!\pどっちで がんばれば いいか\nまよってるんだよ……\lししょうが きめて くれないかな?"
	.byte EOS
	.if (. - gText_Rom_26E17F) > 0x88
	.error "gText_Rom_26E17F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E17F) < 0x88
	.space 0x88 - (. - gText_Rom_26E17F)
	.endif

	@ data/text/apprentice.inc:178 gText_ApprenticeLevelModeThanks10
	.globl gText_Rom_26E207
gText_Rom_26E207: @ 0x0826E207
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに いこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26E207) > 0x5d
	.error "gText_Rom_26E207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E207) < 0x5d
	.space 0x5d - (. - gText_Rom_26E207)
	.endif

	@ data/text/apprentice.inc:181 gText_ApprenticePleaseTeach11
	.globl gText_Rom_26E264
gText_Rom_26E264: @ 0x0826E264
	.string "は・じ・め・ま・し・て!\nはーい はじめまして!\lわし ノリノリ ふなのり {STR_VAR_1}!\lきみも じこしょうかい いってみようぜ!\pふん ふん なまえは {PLAYER}{KUN}!\nポケモン だいすきで\lびみょうな おとしごろね!\pじつは きみは わしが はなしかけた\nほんじつ 10にんめの トレーナーでーす!\pこの であいを きねんして\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_Rom_26E264) > 0xb5
	.error "gText_Rom_26E264 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E264) < 0xb5
	.space 0xb5 - (. - gText_Rom_26E264)
	.endif

	@ data/text/apprentice.inc:184 gText_ApprenticeRejectTeaching11
	.globl gText_Rom_26E319
gText_Rom_26E319: @ 0x0826E319
	.string "そんな!\nノリが わるいじゃ ないか!\pな いいじゃ ないか\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_Rom_26E319) > 0x34
	.error "gText_Rom_26E319 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E319) < 0x34
	.space 0x34 - (. - gText_Rom_26E319)
	.endif

	@ data/text/apprentice.inc:187 gText_ApprenticeWhichLevelMode11
	.globl gText_Rom_26E34D
gText_Rom_26E34D: @ 0x0826E34D
	.string "ようよう! ノリが いいね!\n{PLAYER}さん よろしく たのみますよ!\pそれじゃあ 1つめの しつもん\nいってみようぜ!\lバトルタワーに かんする しつもんだ!\pレベル50のへやと オープンレベルのへや\nわしが いくなら さあ どっち?"
	.byte EOS
	.if (. - gText_Rom_26E34D) > 0x74
	.error "gText_Rom_26E34D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E34D) < 0x74
	.space 0x74 - (. - gText_Rom_26E34D)
	.endif

	@ data/text/apprentice.inc:190 gText_ApprenticeLevelModeThanks11
	.globl gText_Rom_26E3C1
gText_Rom_26E3C1: @ 0x0826E3C1
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いってみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26E3C1) > 0x36
	.error "gText_Rom_26E3C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E3C1) < 0x36
	.space 0x36 - (. - gText_Rom_26E3C1)
	.endif

	@ data/text/apprentice.inc:193 gText_ApprenticePleaseTeach12
	.globl gText_Rom_26E3F7
gText_Rom_26E3F7: @ 0x0826E3F7
	.string "ヒャホー {PLAYER}さんじゃなーい!?\nどうする オレ? はなしかけてみる!?\lってもう はなし してるよ!!\pって {PLAYER}さん あきれてる!?\nしかたねー じこしょうかい してみる!?\pオスっ オレっ {STR_VAR_1}!\nポケモン ギタリストかいの 1ばんぼしさ!\pって きいてる!? きいてる!!\nついでに たのみごと してみる!?\pあの {PLAYER}さん!\nオレを {PLAYER}さんの でしに して!"
	.byte EOS
	.if (. - gText_Rom_26E3F7) > 0xba
	.error "gText_Rom_26E3F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E3F7) < 0xba
	.space 0xba - (. - gText_Rom_26E3F7)
	.endif

	@ data/text/apprentice.inc:196 gText_ApprenticeRejectTeaching12
	.globl gText_Rom_26E4B1
gText_Rom_26E4B1: @ 0x0826E4B1
	.string "って ことわられてる オレっ!?\nしかたねー もういちど たのんでみる!?\pおねがい だよ {PLAYER}さん!\nオレを でしに してエェ!!"
	.byte EOS
	.if (. - gText_Rom_26E4B1) > 0x43
	.error "gText_Rom_26E4B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E4B1) < 0x43
	.space 0x43 - (. - gText_Rom_26E4B1)
	.endif

	@ data/text/apprentice.inc:199 gText_ApprenticeWhichLevelMode12
	.globl gText_Rom_26E4F4
gText_Rom_26E4F4: @ 0x0826E4F4
	.string "やったラッキー うれしーよ オレ!!\nさっそく なんか そうだんしてみる!?\lしかも ここは バトルタワー だから\lそのへん から きいてみる!?\pあのさっ! バトルタワーで オレ\nどっちの レベルが にあってる!?"
	.byte EOS
	.if (. - gText_Rom_26E4F4) > 0x6d
	.error "gText_Rom_26E4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E4F4) < 0x6d
	.space 0x6d - (. - gText_Rom_26E4F4)
	.endif

	@ data/text/apprentice.inc:202 gText_ApprenticeLevelModeThanks12
	.globl gText_Rom_26E561
gText_Rom_26E561: @ 0x0826E561
	.string "{STR_VAR_1}だって!\nじゃ そこ いってみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26E561) > 0x37
	.error "gText_Rom_26E561 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E561) < 0x37
	.space 0x37 - (. - gText_Rom_26E561)
	.endif

	@ data/text/apprentice.inc:205 gText_ApprenticePleaseTeach13
	.globl gText_Rom_26E598
gText_Rom_26E598: @ 0x0826E598
	.string "あ…… きみきみ!\nちょっとさ かた もんでくれる?\p……ああ そうそう そこそこ\nはー きもちいい!\pおれ {STR_VAR_1} って いうんだ\nカラテ やってるんだけど\lいまいち からだが よわくてさ……\pポケモンしょうぶも やって\nきたえようと おもって いるんだよね\pきみ ポケモンリーグで かった\n{PLAYER}{KUN} だろう?\lどうかな たまに おれの\lそうだんに のって もらえない かい?"
	.byte EOS
	.if (. - gText_Rom_26E598) > 0xbd
	.error "gText_Rom_26E598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E598) < 0xbd
	.space 0xbd - (. - gText_Rom_26E598)
	.endif

	@ data/text/apprentice.inc:208 gText_ApprenticeRejectTeaching13
	.globl gText_Rom_26E655
gText_Rom_26E655: @ 0x0826E655
	.string "えー なんで!\pそんなに めんどうは かけないからさ\nおねがいだよ!"
	.byte EOS
	.if (. - gText_Rom_26E655) > 0x23
	.error "gText_Rom_26E655 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E655) < 0x23
	.space 0x23 - (. - gText_Rom_26E655)
	.endif

	@ data/text/apprentice.inc:211 gText_ApprenticeWhichLevelMode13
	.globl gText_Rom_26E678
gText_Rom_26E678: @ 0x0826E678
	.string "ありがとう わるいね\n……ゴホ ゴホっ!\pうう はやく きたえなきゃ……\nすぐに バトルタワーに いくから\lレベル50のへや オープンレベルのへや\lどっちが いいか きめてくれるかい?"
	.byte EOS
	.if (. - gText_Rom_26E678) > 0x5d
	.error "gText_Rom_26E678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E678) < 0x5d
	.space 0x5d - (. - gText_Rom_26E678)
	.endif

	@ data/text/apprentice.inc:214 gText_ApprenticeLevelModeThanks13
	.globl gText_Rom_26E6D5
gText_Rom_26E6D5: @ 0x0826E6D5
	.string "ん わかった {STR_VAR_1}な!\nじゃあ さっそく いってくる!\pこれからも おれを よろしく たのむよ!\nもう でしいり したんだからな!"
	.byte EOS
	.if (. - gText_Rom_26E6D5) > 0x42
	.error "gText_Rom_26E6D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E6D5) < 0x42
	.space 0x42 - (. - gText_Rom_26E6D5)
	.endif

	@ data/text/apprentice.inc:217 gText_ApprenticePleaseTeach14
	.globl gText_Rom_26E717
gText_Rom_26E717: @ 0x0826E717
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pワシは {STR_VAR_1}と いって\nは はずかしい けど\lいせきを さがしたり して くらしてるんだ\pでも バトルフロンティア にも\nはずかしながら き きょうみが あるんだ\p{PLAYER}{KUN}は ポケモン つよいって\nひょうばん だから……\lその いいづらいん だけど\lひとつ おねがいを したいんだ\pワシの せんせいに なって\nアドバイスして もらえない かな……?"
	.byte EOS
	.if (. - gText_Rom_26E717) > 0xd8
	.error "gText_Rom_26E717 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E717) < 0xd8
	.space 0xd8 - (. - gText_Rom_26E717)
	.endif

	@ data/text/apprentice.inc:220 gText_ApprenticeRejectTeaching14
	.globl gText_Rom_26E7EF
gText_Rom_26E7EF: @ 0x0826E7EF
	.string "こ ことわらないでくれ!\nワシに はじを かかせないで くれ!\pおねがい だから\nワシの せんせいに なってくれ!"
	.byte EOS
	.if (. - gText_Rom_26E7EF) > 0x3a
	.error "gText_Rom_26E7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E7EF) < 0x3a
	.space 0x3a - (. - gText_Rom_26E7EF)
	.endif

	@ data/text/apprentice.inc:223 gText_ApprenticeWhichLevelMode14
	.globl gText_Rom_26E829
gText_Rom_26E829: @ 0x0826E829
	.string "あ ありがとう……\pいや だから そんなに みないで くれよ\nてれるだろ\pめを あわせずに こたえて くれ!\pば バトルタワ…… バトルタワー だが\nどの レベルに ちょうせん すれば いい?"
	.byte EOS
	.if (. - gText_Rom_26E829) > 0x61
	.error "gText_Rom_26E829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E829) < 0x61
	.space 0x61 - (. - gText_Rom_26E829)
	.endif

	@ data/text/apprentice.inc:226 gText_ApprenticeLevelModeThanks14
	.globl gText_Rom_26E88A
gText_Rom_26E88A: @ 0x0826E88A
	.string "よ よし!\nそれで がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26E88A) > 0x4c
	.error "gText_Rom_26E88A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E88A) < 0x4c
	.space 0x4c - (. - gText_Rom_26E88A)
	.endif

	@ data/text/apprentice.inc:229 gText_ApprenticePleaseTeach15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26E8D6
gText_Rom_26E8D6: @ 0x0826E8D6
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pわたしは {STR_VAR_1}だ\nいまね だれか つよい トレーナーに\lでしいり したいと おもって いたんだよ\pきみが いるなら よかった!\n……ほんとうに {PLAYER}{KUN} だよね?\pいや ほんもの なら いいんだ\nわたしの でしいりを みとめて ほしい"
	.byte EOS
	.if (. - gText_Rom_26E8D6) != 0x95
	.error "gText_Rom_26E8D6 must retain its original byte length"
	.endif
	.globl gText_Rom_26E967
	.set gText_Rom_26E967, gText_Rom_26E8D6 + 0x91

	@ data/text/apprentice.inc:232 gText_ApprenticeRejectTeaching15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26E96B
gText_Rom_26E96B: @ 0x0826E96B
	.string "え? なぜ ことわるのかね?\pほんものか どうか うたがって わるかった\nあやまるから でしいり させてほしい"
	.byte EOS
	.if (. - gText_Rom_26E96B) != 0x38
	.error "gText_Rom_26E96B must retain its original byte length"
	.endif
	.globl gText_Rom_26E99F
	.set gText_Rom_26E99F, gText_Rom_26E96B + 0x34

	@ data/text/apprentice.inc:235 gText_ApprenticeWhichLevelMode15
	.globl gText_Rom_26E9A3
gText_Rom_26E9A3: @ 0x0826E9A3
	.string "ほんとうに みとめて くれるのかね?\nぬかよろこびは したく ないからな\pいや ほんとうなら いいんだ わるかった\nさっそく そうだんに のってほしい\pわたしが バトルタワーに でるなら\nレベル50…… オープンレベル……\lどちらの ほうが ふさわしいと おもうかね"
	.byte EOS
	.if (. - gText_Rom_26E9A3) > 0x86
	.error "gText_Rom_26E9A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E9A3) < 0x86
	.space 0x86 - (. - gText_Rom_26E9A3)
	.endif

	@ data/text/apprentice.inc:238 gText_ApprenticeLevelModeThanks15
	.globl gText_Rom_26EA29
gText_Rom_26EA29: @ 0x0826EA29
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\pこんな わたし だが\nでし として みとめて くれて うれしい\lいずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_26EA29) > 0x52
	.error "gText_Rom_26EA29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EA29) < 0x52
	.space 0x52 - (. - gText_Rom_26EA29)
	.endif

	@ data/text/apprentice.inc:241 gText_ApprenticeWhatHeldItem0
	.globl gText_Rom_26EA7B
gText_Rom_26EA7B: @ 0x0826EA7B
	.string "はあ…… シクシク\nああっ {PLAYER}さん!\pぼくね きめられない ことが あって\nちょっと こまってたんです\pきめられない のは {STR_VAR_1}に\nなにを もたせるかって ことなんです\lおしえて ください {PLAYER}さん\lなにか もたせた ほうが いいですか?"
	.byte EOS
	.if (. - gText_Rom_26EA7B) > 0x79
	.error "gText_Rom_26EA7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EA7B) < 0x79
	.space 0x79 - (. - gText_Rom_26EA7B)
	.endif

	@ data/text/apprentice.inc:244 gText_ApprenticeHoldNothing0
	.globl gText_Rom_26EAF4
gText_Rom_26EAF4: @ 0x0826EAF4
	.string "えっ…… {STR_VAR_1}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EAF4) > 0x1d
	.error "gText_Rom_26EAF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EAF4) < 0x1d
	.space 0x1d - (. - gText_Rom_26EAF4)
	.endif

	@ data/text/apprentice.inc:247 gText_ApprenticeThanksNoHeldItem0
	.globl gText_Rom_26EB11
gText_Rom_26EB11: @ 0x0826EB11
	.string "わっ わかりました!\nきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_26EB11) > 0x30
	.error "gText_Rom_26EB11 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB11) < 0x30
	.space 0x30 - (. - gText_Rom_26EB11)
	.endif

	@ data/text/apprentice.inc:250 gText_ApprenticeThanksHeldItem0
	.globl gText_Rom_26EB41
gText_Rom_26EB41: @ 0x0826EB41
	.string "よ よかった\n{STR_VAR_1}なら もってるかも……\lきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_26EB41) > 0x3a
	.error "gText_Rom_26EB41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB41) < 0x3a
	.space 0x3a - (. - gText_Rom_26EB41)
	.endif

	@ data/text/apprentice.inc:253 gText_ApprenticeItemAlreadyRecommended0
	.globl gText_Rom_26EB7B
gText_Rom_26EB7B: @ 0x0826EB7B
	.string "うわーん! ひどいです\n{STR_VAR_1}は もう\lおしえてもらった どうぐ です グスン\pそれとも {STR_VAR_2}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EB7B) > 0x44
	.error "gText_Rom_26EB7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EB7B) < 0x44
	.space 0x44 - (. - gText_Rom_26EB7B)
	.endif

	@ data/text/apprentice.inc:256 gText_ApprenticeWhatHeldItem1
	.globl gText_Rom_26EBBF
gText_Rom_26EBBF: @ 0x0826EBBF
	.string "わー {PLAYER}さん だ!\nよかった! ききたい ことが あったんだ!\pあのね {PLAYER}さんは\nポケモンに どうぐを もたせてる?\lボクも もたせたいんだけど……\pボクの {STR_VAR_1}には\nなにを もたせたら いいのかな\l{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_Rom_26EBBF) > 0x74
	.error "gText_Rom_26EBBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EBBF) < 0x74
	.space 0x74 - (. - gText_Rom_26EBBF)
	.endif

	@ data/text/apprentice.inc:259 gText_ApprenticeHoldNothing1
	.globl gText_Rom_26EC33
gText_Rom_26EC33: @ 0x0826EC33
	.string "えっ {STR_VAR_1}は\nなにも もたせなくて いいって こと?"
	.byte EOS
	.if (. - gText_Rom_26EC33) > 0x1b
	.error "gText_Rom_26EC33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC33) < 0x1b
	.space 0x1b - (. - gText_Rom_26EC33)
	.endif

	@ data/text/apprentice.inc:262 gText_ApprenticeThanksNoHeldItem1
	.globl gText_Rom_26EC4E
gText_Rom_26EC4E: @ 0x0826EC4E
	.string "わかったー じゃあ そうするー!\nせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_26EC4E) > 0x1c
	.error "gText_Rom_26EC4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC4E) < 0x1c
	.space 0x1c - (. - gText_Rom_26EC4E)
	.endif

	@ data/text/apprentice.inc:265 gText_ApprenticeThanksHeldItem1
	.globl gText_Rom_26EC6A
gText_Rom_26EC6A: @ 0x0826EC6A
	.string "へええ! {STR_VAR_1}かー\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_26EC6A) > 0x20
	.error "gText_Rom_26EC6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC6A) < 0x20
	.space 0x20 - (. - gText_Rom_26EC6A)
	.endif

	@ data/text/apprentice.inc:268 gText_ApprenticeItemAlreadyRecommended1
	.globl gText_Rom_26EC8A
gText_Rom_26EC8A: @ 0x0826EC8A
	.string "あ えっと そうじゃなくて\nまだ おしえて もらってない どうぐで\lなにが いいか しりたいんだ!\pそれとも こんどは\nなにも もたせなくって いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26EC8A) > 0x4f
	.error "gText_Rom_26EC8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EC8A) < 0x4f
	.space 0x4f - (. - gText_Rom_26EC8A)
	.endif

	@ data/text/apprentice.inc:271 gText_ApprenticeWhatHeldItem2
	.globl gText_Rom_26ECD9
gText_Rom_26ECD9: @ 0x0826ECD9
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の ことなんだけど\pなにか もちものを もたせたいんだ!\nなにか いい もちもの おしえてください!"
	.byte EOS
	.if (. - gText_Rom_26ECD9) > 0x45
	.error "gText_Rom_26ECD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ECD9) < 0x45
	.space 0x45 - (. - gText_Rom_26ECD9)
	.endif

	@ data/text/apprentice.inc:274 gText_ApprenticeHoldNothing2
	.globl gText_Rom_26ED1E
gText_Rom_26ED1E: @ 0x0826ED1E
	.string "じゃあ {STR_VAR_1}には\nなにも もたせなくても いいんだね?"
	.byte EOS
	.if (. - gText_Rom_26ED1E) > 0x1c
	.error "gText_Rom_26ED1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED1E) < 0x1c
	.space 0x1c - (. - gText_Rom_26ED1E)
	.endif

	@ data/text/apprentice.inc:277 gText_ApprenticeThanksNoHeldItem2
	.globl gText_Rom_26ED3A
gText_Rom_26ED3A: @ 0x0826ED3A
	.string "わかりました!\nじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_26ED3A) > 0x10
	.error "gText_Rom_26ED3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED3A) < 0x10
	.space 0x10 - (. - gText_Rom_26ED3A)
	.endif

	@ data/text/apprentice.inc:280 gText_ApprenticeThanksHeldItem2
	.globl gText_Rom_26ED4A
gText_Rom_26ED4A: @ 0x0826ED4A
	.string "{STR_VAR_1} ですか!\nわかりました!\pがんばって さがしてきます!\nじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_26ED4A) > 0x27
	.error "gText_Rom_26ED4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED4A) < 0x27
	.space 0x27 - (. - gText_Rom_26ED4A)
	.endif

	@ data/text/apprentice.inc:283 gText_ApprenticeItemAlreadyRecommended2
	.globl gText_Rom_26ED71
gText_Rom_26ED71: @ 0x0826ED71
	.string "{STR_VAR_1}は\nまえに おしえて もらいましたよ\pそれとは ちがう もちものを\nもたせたいんです\pそれとも {STR_VAR_2}には\nなにも もたせなくて いいんだね?"
	.byte EOS
	.if (. - gText_Rom_26ED71) > 0x49
	.error "gText_Rom_26ED71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26ED71) < 0x49
	.space 0x49 - (. - gText_Rom_26ED71)
	.endif

	@ data/text/apprentice.inc:286 gText_ApprenticeWhatHeldItem3
	.globl gText_Rom_26EDBA
gText_Rom_26EDBA: @ 0x0826EDBA
	.string "{PLAYER}さん こんにちは……\nごめんなさい きょうも あたし\lききたい ことが あるんです\pあたしの ちから だけでは\nしょうぶに かてないかも しれないから\lなにか どうぐを {STR_VAR_1}に\lもたせようかと おもって いるんです\lでも なにが いいのか……\p{PLAYER}さん おねがいします\nあたしの かわりに きめてください!"
	.byte EOS
	.if (. - gText_Rom_26EDBA) > 0x9c
	.error "gText_Rom_26EDBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EDBA) < 0x9c
	.space 0x9c - (. - gText_Rom_26EDBA)
	.endif

	@ data/text/apprentice.inc:289 gText_ApprenticeHoldNothing3
	.globl gText_Rom_26EE56
gText_Rom_26EE56: @ 0x0826EE56
	.string "あの あたしなんかの ポケモンには\nなにも もたせないほうが いいんですか?"
	.byte EOS
	.if (. - gText_Rom_26EE56) > 0x27
	.error "gText_Rom_26EE56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EE56) < 0x27
	.space 0x27 - (. - gText_Rom_26EE56)
	.endif

	@ data/text/apprentice.inc:292 gText_ApprenticeThanksNoHeldItem3
	.globl gText_Rom_26EE7D
gText_Rom_26EE7D: @ 0x0826EE7D
	.string "わかりました……\nどうぐに たよるなって ことですね?\lがんばって みます!\pありがとう ございます!"
	.byte EOS
	.if (. - gText_Rom_26EE7D) > 0x34
	.error "gText_Rom_26EE7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EE7D) < 0x34
	.space 0x34 - (. - gText_Rom_26EE7D)
	.endif

	@ data/text/apprentice.inc:295 gText_ApprenticeThanksHeldItem3
	.globl gText_Rom_26EEB1
gText_Rom_26EEB1: @ 0x0826EEB1
	.string "{STR_VAR_1} ですか!\nあたしに みつけられるか……\lいえ! がんばって みます\pありがとう ございます!"
	.byte EOS
	.if (. - gText_Rom_26EEB1) > 0x32
	.error "gText_Rom_26EEB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EEB1) < 0x32
	.space 0x32 - (. - gText_Rom_26EEB1)
	.endif

	@ data/text/apprentice.inc:298 gText_ApprenticeItemAlreadyRecommended3
	.globl gText_Rom_26EEE3
gText_Rom_26EEE3: @ 0x0826EEE3
	.string "え…… それは\nまえに おしえて いただいたと おもいます\pあ もしかして\nあたしが {STR_VAR_1}を\lつかいこなせて いないから ですか?\pそれとも {STR_VAR_2}には なにも\nもたせるなと いう こと でしょうか?"
	.byte EOS
	.if (. - gText_Rom_26EEE3) > 0x64
	.error "gText_Rom_26EEE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EEE3) < 0x64
	.space 0x64 - (. - gText_Rom_26EEE3)
	.endif

	@ data/text/apprentice.inc:301 gText_ApprenticeWhatHeldItem4
	.globl gText_Rom_26EF47
gText_Rom_26EF47: @ 0x0826EF47
	.string "あら {PLAYER}{KUN}\nちょっと ききたい ことが あるのよ!\pわたし ポケモンは きめて もらったけど\nどの どうぐを もたせるか までは\lきめて もらってない じゃない?\pどうせ なら さいごまで\nあなたが きめて くれない?\lねえ なにが いいかしら?\l{STR_VAR_1}に もたせたいの!"
	.byte EOS
	.if (. - gText_Rom_26EF47) > 0x8a
	.error "gText_Rom_26EF47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EF47) < 0x8a
	.space 0x8a - (. - gText_Rom_26EF47)
	.endif

	@ data/text/apprentice.inc:304 gText_ApprenticeHoldNothing4
	.globl gText_Rom_26EFD1
gText_Rom_26EFD1: @ 0x0826EFD1
	.string "あら! {STR_VAR_1}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_Rom_26EFD1) > 0x1c
	.error "gText_Rom_26EFD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EFD1) < 0x1c
	.space 0x1c - (. - gText_Rom_26EFD1)
	.endif

	@ data/text/apprentice.inc:307 gText_ApprenticeThanksNoHeldItem4
	.globl gText_Rom_26EFED
gText_Rom_26EFED: @ 0x0826EFED
	.string "それが よければ そうするわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26EFED) > 0x44
	.error "gText_Rom_26EFED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26EFED) < 0x44
	.space 0x44 - (. - gText_Rom_26EFED)
	.endif

	@ data/text/apprentice.inc:310 gText_ApprenticeThanksHeldItem4
	.globl gText_Rom_26F031
gText_Rom_26F031: @ 0x0826F031
	.string "{STR_VAR_1}か\nわるく ないわね そうするわ!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26F031) > 0x48
	.error "gText_Rom_26F031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F031) < 0x48
	.space 0x48 - (. - gText_Rom_26F031)
	.endif

	@ data/text/apprentice.inc:313 gText_ApprenticeItemAlreadyRecommended4
	.globl gText_Rom_26F079
gText_Rom_26F079: @ 0x0826F079
	.string "えっ なに いってるのよ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\pそれとも {STR_VAR_2}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_Rom_26F079) > 0x41
	.error "gText_Rom_26F079 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F079) < 0x41
	.space 0x41 - (. - gText_Rom_26F079)
	.endif

	@ data/text/apprentice.inc:316 gText_ApprenticeWhatHeldItem5
	.globl gText_Rom_26F0BA
gText_Rom_26F0BA: @ 0x0826F0BA
	.string "よっ {PLAYER}{KUN}\nいそがしい わりには よく あうよね!\lオレは きょうは\lウォーキング クリーニング それに\lブラッシングと たいへん そのものさ!\pおかげで だいじな {STR_VAR_1}にも\nどうぐ さえ かって やれなくてねー\pあのさ! じかんも ないから\nなにを {STR_VAR_1}に\lもたせて やったら いいか\lそれだけでも アドバイス してよ!"
	.byte EOS
	.if (. - gText_Rom_26F0BA) > 0xa4
	.error "gText_Rom_26F0BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F0BA) < 0xa4
	.space 0xa4 - (. - gText_Rom_26F0BA)
	.endif

	@ data/text/apprentice.inc:319 gText_ApprenticeHoldNothing5
	.globl gText_Rom_26F15E
gText_Rom_26F15E: @ 0x0826F15E
	.string "おっ それじゃ\nいそがしい オレの {STR_VAR_1}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_Rom_26F15E) > 0x29
	.error "gText_Rom_26F15E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F15E) < 0x29
	.space 0x29 - (. - gText_Rom_26F15E)
	.endif

	@ data/text/apprentice.inc:322 gText_ApprenticeThanksNoHeldItem5
	.globl gText_Rom_26F187
gText_Rom_26F187: @ 0x0826F187
	.string "オーケー わかった!\nそれ なら じかんも いらないぜ\pきょうは サンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_26F187) > 0x30
	.error "gText_Rom_26F187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F187) < 0x30
	.space 0x30 - (. - gText_Rom_26F187)
	.endif

	@ data/text/apprentice.inc:325 gText_ApprenticeThanksHeldItem5
	.globl gText_Rom_26F1B7
gText_Rom_26F1B7: @ 0x0826F1B7
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を さがすぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_26F1B7) > 0x49
	.error "gText_Rom_26F1B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F1B7) < 0x49
	.space 0x49 - (. - gText_Rom_26F1B7)
	.endif

	@ data/text/apprentice.inc:328 gText_ApprenticeItemAlreadyRecommended5
	.globl gText_Rom_26F200
gText_Rom_26F200: @ 0x0826F200
	.string "あれっ {STR_VAR_1}は\nもう しってるよ!\pん? それとも\nいそがしい オレの {STR_VAR_2}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_Rom_26F200) > 0x3b
	.error "gText_Rom_26F200 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F200) < 0x3b
	.space 0x3b - (. - gText_Rom_26F200)
	.endif

	@ data/text/apprentice.inc:331 gText_ApprenticeWhatHeldItem6
	.globl gText_Rom_26F23B
gText_Rom_26F23B: @ 0x0826F23B
	.string "よぅ {PLAYER}さん わたしだよ!\nきょうも ひとつ そうだんが あるの\lアドバイス おねがい ねっ!\pジャーン では そうだんです!\nわたしの {STR_VAR_1}に\lなにか どうぐを もたせるなら\lいったい なにに したら いいかな?"
	.byte EOS
	.if (. - gText_Rom_26F23B) > 0x6d
	.error "gText_Rom_26F23B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F23B) < 0x6d
	.space 0x6d - (. - gText_Rom_26F23B)
	.endif

	@ data/text/apprentice.inc:334 gText_ApprenticeHoldNothing6
	.globl gText_Rom_26F2A8
gText_Rom_26F2A8: @ 0x0826F2A8
	.string "ふーん? {STR_VAR_1}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26F2A8) > 0x1c
	.error "gText_Rom_26F2A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2A8) < 0x1c
	.space 0x1c - (. - gText_Rom_26F2A8)
	.endif

	@ data/text/apprentice.inc:337 gText_ApprenticeThanksNoHeldItem6
	.globl gText_Rom_26F2C4
gText_Rom_26F2C4: @ 0x0826F2C4
	.string "じゃ そうするね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26F2C4) > 0x32
	.error "gText_Rom_26F2C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2C4) < 0x32
	.space 0x32 - (. - gText_Rom_26F2C4)
	.endif

	@ data/text/apprentice.inc:340 gText_ApprenticeThanksHeldItem6
	.globl gText_Rom_26F2F6
gText_Rom_26F2F6: @ 0x0826F2F6
	.string "ははぁーん!\n{STR_VAR_1}とは シブイわぁ\lぜひ そうして みるね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26F2F6) > 0x47
	.error "gText_Rom_26F2F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F2F6) < 0x47
	.space 0x47 - (. - gText_Rom_26F2F6)
	.endif

	@ data/text/apprentice.inc:343 gText_ApprenticeItemAlreadyRecommended6
	.globl gText_Rom_26F33D
gText_Rom_26F33D: @ 0x0826F33D
	.string "あっはは やだぁ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\l{PLAYER}さん だいじょぶ?\pあ! それとも {STR_VAR_2}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26F33D) > 0x4b
	.error "gText_Rom_26F33D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F33D) < 0x4b
	.space 0x4b - (. - gText_Rom_26F33D)
	.endif

	@ data/text/apprentice.inc:346 gText_ApprenticeWhatHeldItem7
	.globl gText_Rom_26F388
gText_Rom_26F388: @ 0x0826F388
	.string "ごきげん いかがですか {PLAYER}さん\nきいて くださる?\pこのまえ たたかった トレーナーさん\nポケモンに なにか どうぐを\lもたせていた らしいんですの\pおかげで まけて しまいましたわ……\pわたくしも まけずに なにか\n{STR_VAR_1}に もたせたいんですの!\lなにが よろしいの でしょう\lきめて いただければ うれしいのですが……"
	.byte EOS
	.if (. - gText_Rom_26F388) > 0xa2
	.error "gText_Rom_26F388 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F388) < 0xa2
	.space 0xa2 - (. - gText_Rom_26F388)
	.endif

	@ data/text/apprentice.inc:349 gText_ApprenticeHoldNothing7
	.globl gText_Rom_26F42A
gText_Rom_26F42A: @ 0x0826F42A
	.string "それは つまり…… どうぐは\nもたせなくて よろしいんですのね?"
	.byte EOS
	.if (. - gText_Rom_26F42A) > 0x21
	.error "gText_Rom_26F42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F42A) < 0x21
	.space 0x21 - (. - gText_Rom_26F42A)
	.endif

	@ data/text/apprentice.inc:352 gText_ApprenticeThanksNoHeldItem7
	.globl gText_Rom_26F44B
gText_Rom_26F44B: @ 0x0826F44B
	.string "わかりましたわ!\nこのまま がんばる ことに しますわ\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26F44B) > 0x42
	.error "gText_Rom_26F44B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F44B) < 0x42
	.space 0x42 - (. - gText_Rom_26F44B)
	.endif

	@ data/text/apprentice.inc:355 gText_ApprenticeThanksHeldItem7
	.globl gText_Rom_26F48D
gText_Rom_26F48D: @ 0x0826F48D
	.string "{STR_VAR_1} ですのね!\nさっそく とりよせますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_26F48D) > 0x3d
	.error "gText_Rom_26F48D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F48D) < 0x3d
	.space 0x3d - (. - gText_Rom_26F48D)
	.endif

	@ data/text/apprentice.inc:358 gText_ApprenticeItemAlreadyRecommended7
	.globl gText_Rom_26F4CA
gText_Rom_26F4CA: @ 0x0826F4CA
	.string "それは もう おしえて いただいて\nわたくし もっておりますわ!\pそれとも…… {STR_VAR_2}には\nなにも もたせないで よろしいと……?"
	.byte EOS
	.if (. - gText_Rom_26F4CA) > 0x41
	.error "gText_Rom_26F4CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F4CA) < 0x41
	.space 0x41 - (. - gText_Rom_26F4CA)
	.endif

	@ data/text/apprentice.inc:361 gText_ApprenticeWhatHeldItem8
	.globl gText_Rom_26F50B
gText_Rom_26F50B: @ 0x0826F50B
	.string "{PLAYER}さんっ!\nきょうも あえて かんげき ですっ……!\pそそそそそ そうだっ!\nあのっ {PLAYER}さんに\lきめて ほしいことが あるのですっ!\pわたしの {STR_VAR_1}には\nなにを もたせれば いいですかっ?"
	.byte EOS
	.if (. - gText_Rom_26F50B) > 0x61
	.error "gText_Rom_26F50B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F50B) < 0x61
	.space 0x61 - (. - gText_Rom_26F50B)
	.endif

	@ data/text/apprentice.inc:364 gText_ApprenticeHoldNothing8
	.globl gText_Rom_26F56C
gText_Rom_26F56C: @ 0x0826F56C
	.string "うわあぁっ いがいな おこたえだあ!\nつまり なにも いらないの ですねっ?"
	.byte EOS
	.if (. - gText_Rom_26F56C) > 0x27
	.error "gText_Rom_26F56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F56C) < 0x27
	.space 0x27 - (. - gText_Rom_26F56C)
	.endif

	@ data/text/apprentice.inc:367 gText_ApprenticeThanksNoHeldItem8
	.globl gText_Rom_26F593
gText_Rom_26F593: @ 0x0826F593
	.string "りょうかいで ありますっ!\nどうぐ なしで がんばるで あります!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26F593) > 0x3e
	.error "gText_Rom_26F593 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F593) < 0x3e
	.space 0x3e - (. - gText_Rom_26F593)
	.endif

	@ data/text/apprentice.inc:370 gText_ApprenticeThanksHeldItem8
	.globl gText_Rom_26F5D1
gText_Rom_26F5D1: @ 0x0826F5D1
	.string "{STR_VAR_1} ですねっ!\nこれって これって {PLAYER}さんと\lもしかして おそろい だったりしてっ!\pもー ぜったい もたせちゃいます!\nでは また こんど\lいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_26F5D1) > 0x5b
	.error "gText_Rom_26F5D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F5D1) < 0x5b
	.space 0x5b - (. - gText_Rom_26F5D1)
	.endif

	@ data/text/apprentice.inc:373 gText_ApprenticeItemAlreadyRecommended8
	.globl gText_Rom_26F62C
gText_Rom_26F62C: @ 0x0826F62C
	.string "あれ まえにも {STR_VAR_1}を\nおすすめして くれました よね!\pやっぱり コレが いちばん ですかっ?\nあ それとも もしかして\l{STR_VAR_2}には なにも\lもたせなくて いいって ことですかっ?"
	.byte EOS
	.if (. - gText_Rom_26F62C) > 0x5b
	.error "gText_Rom_26F62C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F62C) < 0x5b
	.space 0x5b - (. - gText_Rom_26F62C)
	.endif

	@ data/text/apprentice.inc:376 gText_ApprenticeWhatHeldItem9
	.globl gText_Rom_26F687
gText_Rom_26F687: @ 0x0826F687
	.string "ハロウ ハローウ\nマイ ティーチャー {PLAYER}{KUN}!\pきょうは ポケモンの どうぐに ついて\nアドバイスを おねがい したいんだ!\pおじさんの {STR_VAR_1}には\nどんな どうぐを もたせれば いいかな?\lパーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_Rom_26F687) > 0x70
	.error "gText_Rom_26F687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F687) < 0x70
	.space 0x70 - (. - gText_Rom_26F687)
	.endif

	@ data/text/apprentice.inc:379 gText_ApprenticeHoldNothing9
	.globl gText_Rom_26F6F7
gText_Rom_26F6F7: @ 0x0826F6F7
	.string "おっと それは\n{STR_VAR_1}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_Rom_26F6F7) > 0x29
	.error "gText_Rom_26F6F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F6F7) < 0x29
	.space 0x29 - (. - gText_Rom_26F6F7)
	.endif

	@ data/text/apprentice.inc:382 gText_ApprenticeThanksNoHeldItem9
	.globl gText_Rom_26F720
gText_Rom_26F720: @ 0x0826F720
	.string "オーケイ オーケイ!\nおじさん グーっと がんばるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26F720) > 0x36
	.error "gText_Rom_26F720 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F720) < 0x36
	.space 0x36 - (. - gText_Rom_26F720)
	.endif

	@ data/text/apprentice.inc:385 gText_ApprenticeThanksHeldItem9
	.globl gText_Rom_26F756
gText_Rom_26F756: @ 0x0826F756
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ゴーっと さがして くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_26F756) > 0x41
	.error "gText_Rom_26F756 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F756) < 0x41
	.space 0x41 - (. - gText_Rom_26F756)
	.endif

	@ data/text/apprentice.inc:388 gText_ApprenticeItemAlreadyRecommended9
	.globl gText_Rom_26F797
gText_Rom_26F797: @ 0x0826F797
	.string "ノンノン! {STR_VAR_1}は\nまえに おしえて もらったよ!\pお それとも もしや\n{STR_VAR_2}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_Rom_26F797) > 0x46
	.error "gText_Rom_26F797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F797) < 0x46
	.space 0x46 - (. - gText_Rom_26F797)
	.endif

	@ data/text/apprentice.inc:391 gText_ApprenticeWhatHeldItem10
	.globl gText_Rom_26F7DD
gText_Rom_26F7DD: @ 0x0826F7DD
	.string "{PLAYER}{KUN} ちょっと\nしんじられん ことが おきた!\pけさ おきたら ポケモンが\nきんのたまを 10コ もってたんだ!\l…… なーんて うっそさ! うわはは!\pじつは おいら ポケモンの どうぐを\nかんがえる こと なんて\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの {STR_VAR_1}\lなにを もたせたら いいのか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_Rom_26F7DD) > 0xb3
	.error "gText_Rom_26F7DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F7DD) < 0xb3
	.space 0xb3 - (. - gText_Rom_26F7DD)
	.endif

	@ data/text/apprentice.inc:394 gText_ApprenticeHoldNothing10
	.globl gText_Rom_26F890
gText_Rom_26F890: @ 0x0826F890
	.string "どういう ことかな?\nなにも もたせなくて いいんだな?"
	.byte EOS
	.if (. - gText_Rom_26F890) > 0x1d
	.error "gText_Rom_26F890 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F890) < 0x1d
	.space 0x1d - (. - gText_Rom_26F890)
	.endif

	@ data/text/apprentice.inc:397 gText_ApprenticeThanksNoHeldItem10
	.globl gText_Rom_26F8AD
gText_Rom_26F8AD: @ 0x0826F8AD
	.string "そうか てぶらで いいのね!\nじゃあ なにか もたせようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26F8AD) > 0x5d
	.error "gText_Rom_26F8AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F8AD) < 0x5d
	.space 0x5d - (. - gText_Rom_26F8AD)
	.endif

	@ data/text/apprentice.inc:400 gText_ApprenticeThanksHeldItem10
	.globl gText_Rom_26F90A
gText_Rom_26F90A: @ 0x0826F90A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ それだけは やめとこっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_26F90A) > 0x5d
	.error "gText_Rom_26F90A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F90A) < 0x5d
	.space 0x5d - (. - gText_Rom_26F90A)
	.endif

	@ data/text/apprentice.inc:403 gText_ApprenticeItemAlreadyRecommended10
	.globl gText_Rom_26F967
gText_Rom_26F967: @ 0x0826F967
	.string "あー それは いちど\nおしえて もらったことが あるだろ?\lちがうので なにか ないかな?\pそれとも {STR_VAR_2}は\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26F967) > 0x49
	.error "gText_Rom_26F967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F967) < 0x49
	.space 0x49 - (. - gText_Rom_26F967)
	.endif

	@ data/text/apprentice.inc:406 gText_ApprenticeWhatHeldItem11
	.globl gText_Rom_26F9B0
gText_Rom_26F9B0: @ 0x0826F9B0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしが おくる\lそうだんタイム いってみよう!\lどうぐに かんする そうだんだよ!\pわしの {STR_VAR_1}に もたせるなら\nさあ どんな どうぐがいい?"
	.byte EOS
	.if (. - gText_Rom_26F9B0) > 0x69
	.error "gText_Rom_26F9B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26F9B0) < 0x69
	.space 0x69 - (. - gText_Rom_26F9B0)
	.endif

	@ data/text/apprentice.inc:409 gText_ApprenticeHoldNothing11
	.globl gText_Rom_26FA19
gText_Rom_26FA19: @ 0x0826FA19
	.string "それは あれかな? {STR_VAR_1}は\nなんにも もたなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26FA19) > 0x20
	.error "gText_Rom_26FA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA19) < 0x20
	.space 0x20 - (. - gText_Rom_26FA19)
	.endif

	@ data/text/apprentice.inc:412 gText_ApprenticeThanksNoHeldItem11
	.globl gText_Rom_26FA39
gText_Rom_26FA39: @ 0x0826FA39
	.string "そうかーっ! ようよう!\nそんなら ノリノリで てぶらでいくぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26FA39) > 0x37
	.error "gText_Rom_26FA39 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA39) < 0x37
	.space 0x37 - (. - gText_Rom_26FA39)
	.endif

	@ data/text/apprentice.inc:415 gText_ApprenticeThanksHeldItem11
	.globl gText_Rom_26FA70
gText_Rom_26FA70: @ 0x0826FA70
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで もたせてみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26FA70) > 0x37
	.error "gText_Rom_26FA70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FA70) < 0x37
	.space 0x37 - (. - gText_Rom_26FA70)
	.endif

	@ data/text/apprentice.inc:418 gText_ApprenticeItemAlreadyRecommended11
	.globl gText_Rom_26FAA7
gText_Rom_26FAA7: @ 0x0826FAA7
	.string "{STR_VAR_1}かーっ! おいおい!\nそれなら きいたことが あるぜ!\lなんか ちがうやつを たのむぜ!\pそれとも あれかな?\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_Rom_26FAA7) > 0x4c
	.error "gText_Rom_26FAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FAA7) < 0x4c
	.space 0x4c - (. - gText_Rom_26FAA7)
	.endif

	@ data/text/apprentice.inc:421 gText_ApprenticeWhatHeldItem12
	.globl gText_Rom_26FAF3
gText_Rom_26FAF3: @ 0x0826FAF3
	.string "オッケ {PLAYER}さん!\nきょうも みつけたぜェ!\lどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pって {PLAYER}さん オレのこと そろそろ\nきらいに なってる!? なってない!!\lそうだんが あるんだけど きいてェ!\pオレの {STR_VAR_1} なんだけど\nいい どうぐを もたせたいんだ!\lなにが いいか さあ きめて!"
	.byte EOS
	.if (. - gText_Rom_26FAF3) > 0xa3
	.error "gText_Rom_26FAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FAF3) < 0xa3
	.space 0xa3 - (. - gText_Rom_26FAF3)
	.endif

	@ data/text/apprentice.inc:424 gText_ApprenticeHoldNothing12
	.globl gText_Rom_26FB96
gText_Rom_26FB96: @ 0x0826FB96
	.string "エェ!? じゃあ {STR_VAR_1}には\nなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_Rom_26FB96) > 0x23
	.error "gText_Rom_26FB96 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FB96) < 0x23
	.space 0x23 - (. - gText_Rom_26FB96)
	.endif

	@ data/text/apprentice.inc:427 gText_ApprenticeThanksNoHeldItem12
	.globl gText_Rom_26FBB9
gText_Rom_26FBB9: @ 0x0826FBB9
	.string "もたせないってエェ!\nじゃ いうとおりに するよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26FBB9) > 0x3c
	.error "gText_Rom_26FBB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FBB9) < 0x3c
	.space 0x3c - (. - gText_Rom_26FBB9)
	.endif

	@ data/text/apprentice.inc:430 gText_ApprenticeThanksHeldItem12
	.globl gText_Rom_26FBF5
gText_Rom_26FBF5: @ 0x0826FBF5
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく もたせてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26FBF5) > 0x3c
	.error "gText_Rom_26FBF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FBF5) < 0x3c
	.space 0x3c - (. - gText_Rom_26FBF5)
	.endif

	@ data/text/apprentice.inc:433 gText_ApprenticeItemAlreadyRecommended12
	.globl gText_Rom_26FC31
gText_Rom_26FC31: @ 0x0826FC31
	.string "ちょっと まったァ!\nその {STR_VAR_1}って\lまえに きいたことが ある!? ある!!\pほかのを おしえて!\nそれとも {STR_VAR_2}には\lなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_Rom_26FC31) > 0x52
	.error "gText_Rom_26FC31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FC31) < 0x52
	.space 0x52 - (. - gText_Rom_26FC31)
	.endif

	@ data/text/apprentice.inc:436 gText_ApprenticeWhatHeldItem13
	.globl gText_Rom_26FC83
gText_Rom_26FC83: @ 0x0826FC83
	.string "ギャッ いててっ! {PLAYER}{KUN}\nうでが おれてるから さわらないでよ!\pポケモンに なにを もたせるか\nじぶんで いろいろ ためしすぎちゃって\lうでが おれちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\nどんな どうぐ もたせたら いいとおもう?"
	.byte EOS
	.if (. - gText_Rom_26FC83) > 0x99
	.error "gText_Rom_26FC83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FC83) < 0x99
	.space 0x99 - (. - gText_Rom_26FC83)
	.endif

	@ data/text/apprentice.inc:439 gText_ApprenticeHoldNothing13
	.globl gText_Rom_26FD1C
gText_Rom_26FD1C: @ 0x0826FD1C
	.string "いてて…… えーっと それって\n{STR_VAR_1}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26FD1C) > 0x2b
	.error "gText_Rom_26FD1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FD1C) < 0x2b
	.space 0x2b - (. - gText_Rom_26FD1C)
	.endif

	@ data/text/apprentice.inc:442 gText_ApprenticeThanksNoHeldItem13
	.globl gText_Rom_26FD47
gText_Rom_26FD47: @ 0x0826FD47
	.string "ん わかった\nおれも いまは そのほうが たすかるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26FD47) > 0x31
	.error "gText_Rom_26FD47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FD47) < 0x31
	.space 0x31 - (. - gText_Rom_26FD47)
	.endif

	@ data/text/apprentice.inc:445 gText_ApprenticeThanksHeldItem13
	.globl gText_Rom_26FD78
gText_Rom_26FD78: @ 0x0826FD78
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ポケモンの うでは ぶじだから\lさっそく もたせてみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26FD78) > 0x43
	.error "gText_Rom_26FD78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FD78) < 0x43
	.space 0x43 - (. - gText_Rom_26FD78)
	.endif

	@ data/text/apprentice.inc:448 gText_ApprenticeItemAlreadyRecommended13
	.globl gText_Rom_26FDBB
gText_Rom_26FDBB: @ 0x0826FDBB
	.string "いやいや {STR_VAR_1}は\nこのあいだ おしえて くれただろ?\lもっと すごいの おしえてくれよ!\pあ それとも\n{STR_VAR_2}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_Rom_26FDBB) > 0x4f
	.error "gText_Rom_26FDBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FDBB) < 0x4f
	.space 0x4f - (. - gText_Rom_26FDBB)
	.endif

	@ data/text/apprentice.inc:451 gText_ApprenticeWhatHeldItem14
	.globl gText_Rom_26FE0A
gText_Rom_26FE0A: @ 0x0826FE0A
	.string "あ…… あ……\n{PLAYER}{KUN}……\pそ そんなに みないで くれよ\nワシの ポケモン なにも もってないからさ\pちょっと…… そうだん させて くれよ\nは はずかしいん だけどさ!\l{STR_VAR_1}が なにを\lもったら つよいか って なやんでてさ\l{PLAYER}{KUN} なにが いいと おもう?"
	.byte EOS
	.if (. - gText_Rom_26FE0A) > 0x86
	.error "gText_Rom_26FE0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FE0A) < 0x86
	.space 0x86 - (. - gText_Rom_26FE0A)
	.endif

	@ data/text/apprentice.inc:454 gText_ApprenticeHoldNothing14
	.globl gText_Rom_26FE90
gText_Rom_26FE90: @ 0x0826FE90
	.string "じゃ…… {STR_VAR_1}は なにも\nもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_Rom_26FE90) > 0x20
	.error "gText_Rom_26FE90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FE90) < 0x20
	.space 0x20 - (. - gText_Rom_26FE90)
	.endif

	@ data/text/apprentice.inc:457 gText_ApprenticeThanksNoHeldItem14
	.globl gText_Rom_26FEB0
gText_Rom_26FEB0: @ 0x0826FEB0
	.string "よ よし!\nどうぐ なしで いくよ!\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26FEB0) > 0x4a
	.error "gText_Rom_26FEB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FEB0) < 0x4a
	.space 0x4a - (. - gText_Rom_26FEB0)
	.endif

	@ data/text/apprentice.inc:460 gText_ApprenticeThanksHeldItem14
	.globl gText_Rom_26FEFA
gText_Rom_26FEFA: @ 0x0826FEFA
	.string "よ よし!\n{STR_VAR_1}に してみるよ\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26FEFA) > 0x47
	.error "gText_Rom_26FEFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FEFA) < 0x47
	.space 0x47 - (. - gText_Rom_26FEFA)
	.endif

	@ data/text/apprentice.inc:463 gText_ApprenticeItemAlreadyRecommended14
	.globl gText_Rom_26FF41
gText_Rom_26FF41: @ 0x0826FF41
	.string "それは も もう きいた じゃないか\pて てを ぬかないでくれ!\nワシに はじを かかせないで くれ!\pあ…… それとも\n{STR_VAR_2}は なにも\lもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_Rom_26FF41) > 0x58
	.error "gText_Rom_26FF41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FF41) < 0x58
	.space 0x58 - (. - gText_Rom_26FF41)
	.endif

	@ data/text/apprentice.inc:466 gText_ApprenticeWhatHeldItem15
	.globl gText_Rom_26FF99
gText_Rom_26FF99: @ 0x0826FF99
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\lふたごの きょうだい って ことは?\pあっ いやいや いやいや!\nほんもの なら いいんだ わすれてくれ!\lさらに じょげんを おねがい したい!\pこの わたしの {STR_VAR_1}!\nなにか べんりな どうぐを もたせたい\lいったい どれが ふさわしい かな?"
	.byte EOS
	.if (. - gText_Rom_26FF99) > 0x9c
	.error "gText_Rom_26FF99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26FF99) < 0x9c
	.space 0x9c - (. - gText_Rom_26FF99)
	.endif

	@ data/text/apprentice.inc:469 gText_ApprenticeHoldNothing15
	.globl gText_Rom_270035
gText_Rom_270035: @ 0x08270035
	.string "なにも もたない ほうが いい……?\nほんとうかね?"
	.byte EOS
	.if (. - gText_Rom_270035) > 0x1b
	.error "gText_Rom_270035 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270035) < 0x1b
	.space 0x1b - (. - gText_Rom_270035)
	.endif

	@ data/text/apprentice.inc:472 gText_ApprenticeThanksNoHeldItem15
	.globl gText_Rom_270050
gText_Rom_270050: @ 0x08270050
	.string "いや そうか なら いいんだ\nどうも ありがとう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270050) > 0x27
	.error "gText_Rom_270050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270050) < 0x27
	.space 0x27 - (. - gText_Rom_270050)
	.endif

	@ data/text/apprentice.inc:475 gText_ApprenticeThanksHeldItem15
	.globl gText_Rom_270077
gText_Rom_270077: @ 0x08270077
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lつかいこなせると いいな\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270077) > 0x52
	.error "gText_Rom_270077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270077) < 0x52
	.space 0x52 - (. - gText_Rom_270077)
	.endif

	@ data/text/apprentice.inc:478 gText_ApprenticeItemAlreadyRecommended15
	.globl gText_Rom_2700C9
gText_Rom_2700C9: @ 0x082700C9
	.string "いやいや まってくれ\nそれは まえに おしえてくれた だろう\lそれとは ちがった ものを\lすすめられて みたいんだ\pそれとも {STR_VAR_2}は\nなにも もたない ほうが いい……?\lほんとうかね?"
	.byte EOS
	.if (. - gText_Rom_2700C9) > 0x5e
	.error "gText_Rom_2700C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2700C9) < 0x5e
	.space 0x5e - (. - gText_Rom_2700C9)
	.endif

	@ data/text/apprentice.inc:481 gText_ApprenticeWhichMonFirst0
	.globl gText_Rom_270127
gText_Rom_270127: @ 0x08270127
	.string "えーん {PLAYER}さーん!\nぼく こまって いるんです グスン\pそろそろ しょうぶを して みたいけど\nポケモンを どんな じゅんばんで\lだしたら つよいのか わかんない……\p{PLAYER}さん だったら\nどの ポケモンを さいしょに だすか\l……おしえて ください!"
	.byte EOS
	.if (. - gText_Rom_270127) > 0x7f
	.error "gText_Rom_270127 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270127) < 0x7f
	.space 0x7f - (. - gText_Rom_270127)
	.endif

	@ data/text/apprentice.inc:484 gText_ApprenticeMonFirstThanks0
	.globl gText_Rom_2701A6
gText_Rom_2701A6: @ 0x082701A6
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\nじゅんばんが きまった うれしさで\lなみだが……\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_2701A6) > 0x46
	.error "gText_Rom_2701A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2701A6) < 0x46
	.space 0x46 - (. - gText_Rom_2701A6)
	.endif

	@ data/text/apprentice.inc:487 gText_ApprenticeWhichMonFirst1
	.globl gText_Rom_2701EC
gText_Rom_2701EC: @ 0x082701EC
	.string "わわっ! {PLAYER}さんだー!\nわーい あえて よかった\lそうだん したいことが あるんだ!\pあのね ぼくの もってる\nポケモン たちの なかで\lどれを さいしょに だせば\lいいと おもう?"
	.byte EOS
	.if (. - gText_Rom_2701EC) > 0x5d
	.error "gText_Rom_2701EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2701EC) < 0x5d
	.space 0x5d - (. - gText_Rom_2701EC)
	.endif

	@ data/text/apprentice.inc:490 gText_ApprenticeMonFirstThanks1
	.globl gText_Rom_270249
gText_Rom_270249: @ 0x08270249
	.string "{STR_VAR_1}かあ そーだよね!\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_270249) > 0x22
	.error "gText_Rom_270249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270249) < 0x22
	.space 0x22 - (. - gText_Rom_270249)
	.endif

	@ data/text/apprentice.inc:493 gText_ApprenticeWhichMonFirst2
	.globl gText_Rom_27026B
gText_Rom_27026B: @ 0x0827026B
	.string "{PLAYER}さん こんにちは!\nしょうぶのときって さいしょに\pどの ポケモンを だすのかが\nとても だいじな きが するんです!\pぼくが もってる ポケモンの なかで\nどの ポケモンを\lさいしょに だすと いいでしょうか?"
	.byte EOS
	.if (. - gText_Rom_27026B) > 0x6d
	.error "gText_Rom_27026B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27026B) < 0x6d
	.space 0x6d - (. - gText_Rom_27026B)
	.endif

	@ data/text/apprentice.inc:496 gText_ApprenticeMonFirstThanks2
	.globl gText_Rom_2702D8
gText_Rom_2702D8: @ 0x082702D8
	.string "{STR_VAR_1} ですね!\nわかりました!\pじゃあ また!"
	.byte EOS
	.if (. - gText_Rom_2702D8) > 0x18
	.error "gText_Rom_2702D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2702D8) < 0x18
	.space 0x18 - (. - gText_Rom_2702D8)
	.endif

	@ data/text/apprentice.inc:499 gText_ApprenticeWhichMonFirst3
	.globl gText_Rom_2702F0
gText_Rom_2702F0: @ 0x082702F0
	.string "{PLAYER}さん いつも\nそうだん ばかりで すみません……\lあたし じしんが なくって\l{PLAYER}さんが いないと……!\pあの ポケモンの じゅんばん って……\nどうすれば いいと おもいますか?\pあたし なんかが こだわっても\nしかたが ないかも しれません けど\lどうしても きめられなくて……\pどの ポケモンを 1ばん\nせんとうに すれば よいんでしょうか!"
	.byte EOS
	.if (. - gText_Rom_2702F0) > 0xb1
	.error "gText_Rom_2702F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2702F0) < 0xb1
	.space 0xb1 - (. - gText_Rom_2702F0)
	.endif

	@ data/text/apprentice.inc:502 gText_ApprenticeMonFirstThanks3
	.globl gText_Rom_2703A1
gText_Rom_2703A1: @ 0x082703A1
	.string "{STR_VAR_1} ですか わかりました!\pこんな あたし なんかに\nなんども こたえて いただけるなんて\lしんじられない!\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_Rom_2703A1) > 0x59
	.error "gText_Rom_2703A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2703A1) < 0x59
	.space 0x59 - (. - gText_Rom_2703A1)
	.endif

	@ data/text/apprentice.inc:505 gText_ApprenticeWhichMonFirst4
	.globl gText_Rom_2703FA
gText_Rom_2703FA: @ 0x082703FA
	.string "{PLAYER}{KUN}! わたしよ\nよかったわ こまっていたの!\pちょっと ポケモンの じゅんばんを\nきめて もらえる かしら!\lと いっても そうねえ\lとりあえず 1ばんめの ポケモンで いいわ\lどの ポケモンに したら いいかしら?"
	.byte EOS
	.if (. - gText_Rom_2703FA) > 0x70
	.error "gText_Rom_2703FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2703FA) < 0x70
	.space 0x70 - (. - gText_Rom_2703FA)
	.endif

	@ data/text/apprentice.inc:508 gText_ApprenticeMonFirstThanks4
	.globl gText_Rom_27046A
gText_Rom_27046A: @ 0x0827046A
	.string "{STR_VAR_1}ね いいわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_27046A) > 0x3d
	.error "gText_Rom_27046A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27046A) < 0x3d
	.space 0x3d - (. - gText_Rom_27046A)
	.endif

	@ data/text/apprentice.inc:511 gText_ApprenticeWhichMonFirst5
	.globl gText_Rom_2704A7
gText_Rom_2704A7: @ 0x082704A7
	.string "ハイ! オレの せんせい\n{PLAYER}{KUN}!\pきょうも いそがしいんだ オレ\nサイクリングに ショッピングに ハミング!\pしょうぶに つかう ポケモンの\nじゅんばんさえ きめられなくてねー\pあのさ!\nちょっと オレの ポケモン みてよ!\lで どいつが はじめに でれば いいかな?"
	.byte EOS
	.if (. - gText_Rom_2704A7) > 0x89
	.error "gText_Rom_2704A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2704A7) < 0x89
	.space 0x89 - (. - gText_Rom_2704A7)
	.endif

	@ data/text/apprentice.inc:514 gText_ApprenticeMonFirstThanks5
	.globl gText_Rom_270530
gText_Rom_270530: @ 0x08270530
	.string "オーケー わかった!\n{STR_VAR_1}を せんとうに する\nじかん くらいは あるぜ!\p……と いけね かのじょが まってる!\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_Rom_270530) > 0x49
	.error "gText_Rom_270530 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270530) < 0x49
	.space 0x49 - (. - gText_Rom_270530)
	.endif

	@ data/text/apprentice.inc:517 gText_ApprenticeWhichMonFirst6
	.globl gText_Rom_270579
gText_Rom_270579: @ 0x08270579
	.string "ヤッホー ハーイ {PLAYER}さーん\nいつも つよそうな かおで あるいてるわね\pねえねえ! きょうも\nあれ…… おねがい! いいでしょ!\pジャーン では ほんじつの そうだん!\nわたしが もっている ポケモン!\lさあ どのコを いちばん\lさいしょに だせば いいでしょう?"
	.byte EOS
	.if (. - gText_Rom_270579) > 0x86
	.error "gText_Rom_270579 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270579) < 0x86
	.space 0x86 - (. - gText_Rom_270579)
	.endif

	@ data/text/apprentice.inc:520 gText_ApprenticeMonFirstThanks6
	.globl gText_Rom_2705FF
gText_Rom_2705FF: @ 0x082705FF
	.string "ふむふむ!\n{STR_VAR_1} ですねぇ?\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_2705FF) > 0x47
	.error "gText_Rom_2705FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2705FF) < 0x47
	.space 0x47 - (. - gText_Rom_2705FF)
	.endif

	@ data/text/apprentice.inc:523 gText_ApprenticeWhichMonFirst7
	.globl gText_Rom_270646
gText_Rom_270646: @ 0x08270646
	.string "はなしかけて くださって\nありがとう ございます {PLAYER}さん\pその おやさしさに あまえて\nきょうも そうだんが ありますの……\pあの ポケモンの じゅんばんを\nきめて いただきたいん ですの\pさいしょに だす なら\nどの ポケモンが よろしいでしょうか?"
	.byte EOS
	.if (. - gText_Rom_270646) > 0x80
	.error "gText_Rom_270646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270646) < 0x80
	.space 0x80 - (. - gText_Rom_270646)
	.endif

	@ data/text/apprentice.inc:526 gText_ApprenticeMonFirstThanks7
	.globl gText_Rom_2706C6
gText_Rom_2706C6: @ 0x082706C6
	.string "{STR_VAR_1} ですのね!\nすぐに ならびかえますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_Rom_2706C6) > 0x3d
	.error "gText_Rom_2706C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2706C6) < 0x3d
	.space 0x3d - (. - gText_Rom_2706C6)
	.endif

	@ data/text/apprentice.inc:529 gText_ApprenticeWhichMonFirst8
	.globl gText_Rom_270703
gText_Rom_270703: @ 0x08270703
	.string "キャーキャー!\n{PLAYER} さーんっ!\lきょうも あえて かんげきっ……!\pわたしの ポケモンたち\nつよく なりましたよ!\lでも はじめに だす ポケモンで\lかったり まけたり しちゃうんです\p{PLAYER}さん おねがいが!\nどのコを はじめに だしたら いいのか\lぜひ きめて ほしいのですっ!"
	.byte EOS
	.if (. - gText_Rom_270703) > 0x8e
	.error "gText_Rom_270703 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270703) < 0x8e
	.space 0x8e - (. - gText_Rom_270703)
	.endif

	@ data/text/apprentice.inc:532 gText_ApprenticeMonFirstThanks8
	.globl gText_Rom_270791
gText_Rom_270791: @ 0x08270791
	.string "はあああ…… しあわせすぎる\n{PLAYER}さんに きめて もらうなんて!\lりょうかいですっ! わたし\l{STR_VAR_1}から いくで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_Rom_270791) > 0x5b
	.error "gText_Rom_270791 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270791) < 0x5b
	.space 0x5b - (. - gText_Rom_270791)
	.endif

	@ data/text/apprentice.inc:535 gText_ApprenticeWhichMonFirst9
	.globl gText_Rom_2707EC
gText_Rom_2707EC: @ 0x082707EC
	.string "ハローウ!\nマイ ティーチャー {PLAYER}{KUN}\lきょうも アドバイス バンバンたのむよ!\pおじさん スリー ポケモンズで\nティームを つくったのは いいんだが\lまだ じゅんばんが きまって ないんだよ\pそこで! {PLAYER}{KUN}が\nまず はじめに だす ポケモンを\lササーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_Rom_2707EC) > 0x8f
	.error "gText_Rom_2707EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2707EC) < 0x8f
	.space 0x8f - (. - gText_Rom_2707EC)
	.endif

	@ data/text/apprentice.inc:538 gText_ApprenticeMonFirstThanks9
	.globl gText_Rom_27087B
gText_Rom_27087B: @ 0x0827087B
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガガーっと いれかえるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_Rom_27087B) > 0x40
	.error "gText_Rom_27087B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27087B) < 0x40
	.space 0x40 - (. - gText_Rom_27087B)
	.endif

	@ data/text/apprentice.inc:541 gText_ApprenticeWhichMonFirst10
	.globl gText_Rom_2708BB
gText_Rom_2708BB: @ 0x082708BB
	.string "{PLAYER}{KUN} きいてくれ たいへんだ!\nおいらの ポケモンと きたら\l3びき いっしょに とびだすんだよ!\l……なんて わきゃ ないな わはは!\pじつは おいら ポケモンの\nじゅんばん なんて きめるの\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを さいしょに だしたら いいか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_Rom_2708BB) > 0xaf
	.error "gText_Rom_2708BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2708BB) < 0xaf
	.space 0xaf - (. - gText_Rom_2708BB)
	.endif

	@ data/text/apprentice.inc:544 gText_ApprenticeMonFirstThanks10
	.globl gText_Rom_27096A
gText_Rom_27096A: @ 0x0827096A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ そいつだけは やめようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_Rom_27096A) > 0x5e
	.error "gText_Rom_27096A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27096A) < 0x5e
	.space 0x5e - (. - gText_Rom_27096A)
	.endif

	@ data/text/apprentice.inc:547 gText_ApprenticeWhichMonFirst11
	.globl gText_Rom_2709C8
gText_Rom_2709C8: @ 0x082709C8
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしの\lきょうの そうだん いってみようよ!\lじゅんばんに かんする そうだんだよ!\pこたえて! この なかで\nせんとうに したい ポケモンは どれ?"
	.byte EOS
	.if (. - gText_Rom_2709C8) > 0x6d
	.error "gText_Rom_2709C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2709C8) < 0x6d
	.space 0x6d - (. - gText_Rom_2709C8)
	.endif

	@ data/text/apprentice.inc:550 gText_ApprenticeMonFirstThanks11
	.globl gText_Rom_270A35
gText_Rom_270A35: @ 0x08270A35
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いれかえるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_270A35) > 0x36
	.error "gText_Rom_270A35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270A35) < 0x36
	.space 0x36 - (. - gText_Rom_270A35)
	.endif

	@ data/text/apprentice.inc:553 gText_ApprenticeWhichMonFirst12
	.globl gText_Rom_270A6B
gText_Rom_270A6B: @ 0x08270A6B
	.string "ヤァーフゥー {PLAYER}さんじゃーん?\nどうする オレ? アレきいてみる!?\lそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\pオレの ポケモンの うち どいつを\nさいしょに だしたら いいか きめてエェ!"
	.byte EOS
	.if (. - gText_Rom_270A6B) > 0x70
	.error "gText_Rom_270A6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270A6B) < 0x70
	.space 0x70 - (. - gText_Rom_270A6B)
	.endif

	@ data/text/apprentice.inc:556 gText_ApprenticeMonFirstThanks12
	.globl gText_Rom_270ADB
gText_Rom_270ADB: @ 0x08270ADB
	.string "{STR_VAR_1}だって! イエス!\nじゃ そうしてみる!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_270ADB) > 0x39
	.error "gText_Rom_270ADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270ADB) < 0x39
	.space 0x39 - (. - gText_Rom_270ADB)
	.endif

	@ data/text/apprentice.inc:559 gText_ApprenticeWhichMonFirst13
	.globl gText_Rom_270B14
gText_Rom_270B14: @ 0x08270B14
	.string "うう {PLAYER}{KUN} ……\nおなか いたくってさ ちょっとまって……\p……ああ なおってきた……\pどの ポケモンを しょうぶのとき\nさいしょに だすか なやんで いて\lなやみ すぎちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\nどれを さいしょに だせば\lかてると おもうかい?"
	.byte EOS
	.if (. - gText_Rom_270B14) > 0xa9
	.error "gText_Rom_270B14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270B14) < 0xa9
	.space 0xa9 - (. - gText_Rom_270B14)
	.endif

	@ data/text/apprentice.inc:562 gText_ApprenticeMonFirstThanks13
	.globl gText_Rom_270BBD
gText_Rom_270BBD: @ 0x08270BBD
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ごはんを たべたら\lそういうふうに してみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_Rom_270BBD) > 0x3e
	.error "gText_Rom_270BBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270BBD) < 0x3e
	.space 0x3e - (. - gText_Rom_270BBD)
	.endif

	@ data/text/apprentice.inc:565 gText_ApprenticeWhichMonFirst14
	.globl gText_Rom_270BFB
gText_Rom_270BFB: @ 0x08270BFB
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lひとつ…… そうだん させてよ\pは はずかし ながら\nポケモン 3びき きまった けどさ\lじゅんばんが きまらないんだよ\pどの ポケモンを 1ばんめに\nだせば かっこが つくの かな……?"
	.byte EOS
	.if (. - gText_Rom_270BFB) > 0x88
	.error "gText_Rom_270BFB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270BFB) < 0x88
	.space 0x88 - (. - gText_Rom_270BFB)
	.endif

	@ data/text/apprentice.inc:568 gText_ApprenticeMonFirstThanks14
	.globl gText_Rom_270C83
gText_Rom_270C83: @ 0x08270C83
	.string "よ よし!\n{STR_VAR_1}から だして みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_270C83) > 0x4b
	.error "gText_Rom_270C83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270C83) < 0x4b
	.space 0x4b - (. - gText_Rom_270C83)
	.endif

	@ data/text/apprentice.inc:571 gText_ApprenticeWhichMonFirst15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_270CCE
gText_Rom_270CCE: @ 0x08270CCE
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lかげむしゃ って ことは ないだろうね\pいやいやいや! ほんものなら いいんだ\nおこらないで くれ!\lそして じょげんを おねがい したい!\pわたしの てもちの なかから\nどのポケモンを しょうぶの はじめに\lだせば いいのか おしえて ほしい"
	.byte EOS
	.if (. - gText_Rom_270CCE) != 0x8f
	.error "gText_Rom_270CCE must retain its original byte length"
	.endif
	.globl gText_Rom_270D59
	.set gText_Rom_270D59, gText_Rom_270CCE + 0x8b

	@ data/text/apprentice.inc:574 gText_ApprenticeMonFirstThanks15
	.globl gText_Rom_270D5D
gText_Rom_270D5D: @ 0x08270D5D
	.string "{STR_VAR_1}……\nうそでは ないだろうね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしだが がんばって みよう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270D5D) > 0x4e
	.error "gText_Rom_270D5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270D5D) < 0x4e
	.space 0x4e - (. - gText_Rom_270D5D)
	.endif

	@ data/text/apprentice.inc:577 gText_ApprenticeWhichMon0
	.globl gText_Rom_270DAB
gText_Rom_270DAB: @ 0x08270DAB
	.string "グスン……\nあっ {PLAYER}さん!\lちょうど よかったよう\lぼく きめられない ことが あって……\pあのね ポケモンをね\nどっちを つかうか きめられないんです\p{STR_VAR_1} と {STR_VAR_2}で\nまよって いるんだけど……\l{PLAYER}さんは どっち だったら\lぼくでも かてそう って おもいますか?"
	.byte EOS
	.if (. - gText_Rom_270DAB) > 0x89
	.error "gText_Rom_270DAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270DAB) < 0x89
	.space 0x89 - (. - gText_Rom_270DAB)
	.endif

	@ data/text/apprentice.inc:580 gText_ApprenticeMonThanks0
	.globl gText_Rom_270E34
gText_Rom_270E34: @ 0x08270E34
	.string "グスっ わ わかりました!\nあ ごめんなさい うれしくて なみだが……\pぼく がんばって {STR_VAR_1}を\nつかまえてみます!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_Rom_270E34) > 0x4d
	.error "gText_Rom_270E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270E34) < 0x4d
	.space 0x4d - (. - gText_Rom_270E34)
	.endif

	@ data/text/apprentice.inc:583 gText_ApprenticeWhichMon1
	.globl gText_Rom_270E81
gText_Rom_270E81: @ 0x08270E81
	.string "あっ! {PLAYER}さんだー!\nわーい ちょうど よかった\lきょうも ボクの そうだんに のってね!\pあのね ボクね\n{STR_VAR_1}と {STR_VAR_2}の どっちを\lつかうか まよっちゃったの\pどっちを そだてようかなあ\n{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_Rom_270E81) > 0x6e
	.error "gText_Rom_270E81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270E81) < 0x6e
	.space 0x6e - (. - gText_Rom_270E81)
	.endif

	@ data/text/apprentice.inc:586 gText_ApprenticeMonThanks1
	.globl gText_Rom_270EEF
gText_Rom_270EEF: @ 0x08270EEF
	.string "へえ\n{STR_VAR_1}が いいのか!\lじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_Rom_270EEF) > 0x23
	.error "gText_Rom_270EEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270EEF) < 0x23
	.space 0x23 - (. - gText_Rom_270EEF)
	.endif


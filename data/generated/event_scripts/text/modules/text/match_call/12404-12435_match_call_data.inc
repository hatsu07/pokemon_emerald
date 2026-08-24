	@ data/text/match_call.inc:499 MatchCall_BattleDomeText4
	.globl MatchCall_BattleDomeText4
MatchCall_BattleDomeText4: @ 0x082692A7
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}かいも\nゆうしょう した らしいね\pがんばってる みたいだね\nぼくも まけないように しなきゃ"
	.byte EOS
	.if (. - MatchCall_BattleDomeText4) > 0x43
	.error "MatchCall_BattleDomeText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText4) < 0x43
	.space 0x43 - (. - MatchCall_BattleDomeText4)
	.endif

	@ data/text/match_call.inc:502 MatchCall_BattleDomeText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleDomeText5
MatchCall_BattleDomeText5: @ 0x082692EA
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2}で\n{STR_VAR_3}かいも ゆうしょう したんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleDomeText5) != 0x42
	.error "MatchCall_BattleDomeText5 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:505 MatchCall_BattleDomeText6
	.globl MatchCall_BattleDomeText6
MatchCall_BattleDomeText6: @ 0x0826932C
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}かいも\lゆうしょう したんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - MatchCall_BattleDomeText6) > 0x4f
	.error "MatchCall_BattleDomeText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText6) < 0x4f
	.space 0x4f - (. - MatchCall_BattleDomeText6)
	.endif

	@ data/text/match_call.inc:508 MatchCall_BattleDomeText7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleDomeText7
MatchCall_BattleDomeText7: @ 0x0826937B
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で ゆうしょうを\n{STR_VAR_3}かいも したんだって?\pへー ところで さいきん\nめずらしい ポケモン つかまえた?\pあ そう\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleDomeText7) != 0x55
	.error "MatchCall_BattleDomeText7 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:511 MatchCall_BattleDomeText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleDomeText8
MatchCall_BattleDomeText8: @ 0x082693D0
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}かいも\lゆうしょう したんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleDomeText8) != 0x5b
	.error "MatchCall_BattleDomeText8 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:514 MatchCall_BattleDomeText9
	.globl MatchCall_BattleDomeText9
MatchCall_BattleDomeText9: @ 0x0826942B
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で\n{STR_VAR_3}かいも ゆうしょう したんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - MatchCall_BattleDomeText9) > 0x42
	.error "MatchCall_BattleDomeText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText9) < 0x42
	.space 0x42 - (. - MatchCall_BattleDomeText9)
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
	.globl MatchCall_BattleDomeText11
MatchCall_BattleDomeText11: @ 0x082694A9
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}れんしょう したんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ むりかな?\nじゃあ またな"
	.byte EOS
	.if (. - MatchCall_BattleDomeText11) > 0x59
	.error "MatchCall_BattleDomeText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText11) < 0x59
	.space 0x59 - (. - MatchCall_BattleDomeText11)
	.endif

	@ data/text/match_call.inc:523 MatchCall_BattleDomeText12
	.globl MatchCall_BattleDomeText12
MatchCall_BattleDomeText12: @ 0x08269502
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}かい ゆうしょう したとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - MatchCall_BattleDomeText12) > 0x47
	.error "MatchCall_BattleDomeText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText12) < 0x47
	.space 0x47 - (. - MatchCall_BattleDomeText12)
	.endif

	@ data/text/match_call.inc:526 MatchCall_BattleDomeText13
	.globl MatchCall_BattleDomeText13
MatchCall_BattleDomeText13: @ 0x08269549
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} で\n{STR_VAR_3}かいも ゆうしょう とな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - MatchCall_BattleDomeText13) > 0x40
	.error "MatchCall_BattleDomeText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattleDomeText13) < 0x40
	.space 0x40 - (. - MatchCall_BattleDomeText13)
	.endif

	@ data/text/match_call.inc:529 MatchCall_BattleDomeText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattleDomeText14
MatchCall_BattleDomeText14: @ 0x08269589
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2} で\p{STR_VAR_3}かいも\nゆうしょう したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattleDomeText14) != 0x4f
	.error "MatchCall_BattleDomeText14 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:532 MatchCall_BattlePikeText1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePikeText1
MatchCall_BattlePikeText1: @ 0x082695D8
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}も へやを\nとっぱ したんだって?\pすごいなあ\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePikeText1) != 0x41
	.error "MatchCall_BattlePikeText1 must retain its original byte length"
	.endif

	@ data/text/match_call.inc:535 MatchCall_BattlePikeText2
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePikeText2
MatchCall_BattlePikeText2: @ 0x08269619
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で{STR_VAR_3}へやも\nかちぬいたんですって?\pわたしも がんばらなきゃ!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePikeText2) != 0x41
	.error "MatchCall_BattlePikeText2 must retain its original byte length"
	.endif


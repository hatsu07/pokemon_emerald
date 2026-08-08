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


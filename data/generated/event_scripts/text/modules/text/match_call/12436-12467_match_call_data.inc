	@ data/text/match_call.inc:538 MatchCall_BattlePikeText3
	.globl MatchCall_BattlePikeText3
MatchCall_BattlePikeText3: @ 0x0826965A
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - MatchCall_BattlePikeText3) > 0x3f
	.error "MatchCall_BattlePikeText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText3) < 0x3f
	.space 0x3f - (. - MatchCall_BattlePikeText3)
	.endif

	@ data/text/match_call.inc:541 MatchCall_BattlePikeText4
	.globl MatchCall_BattlePikeText4
MatchCall_BattlePikeText4: @ 0x08269699
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ した らしいね\pおれも まけないように\nポケモン そだてなきゃな"
	.byte EOS
	.if (. - MatchCall_BattlePikeText4) > 0x3c
	.error "MatchCall_BattlePikeText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText4) < 0x3c
	.space 0x3c - (. - MatchCall_BattlePikeText4)
	.endif

	@ data/text/match_call.inc:544 MatchCall_BattlePikeText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePikeText5
MatchCall_BattlePikeText5: @ 0x082696D5
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2}で\n{STR_VAR_3}へやも とっぱ したんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePikeText5) != 0x40
	.error "MatchCall_BattlePikeText5 must retain its original byte length"
	.endif
	.globl gText_Rom_269711
	.set gText_Rom_269711, MatchCall_BattlePikeText5 + 0x3c

	@ data/text/match_call.inc:547 MatchCall_BattlePikeText6
	.globl MatchCall_BattlePikeText6
MatchCall_BattlePikeText6: @ 0x08269715
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}へやも\lとっぱ したんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - MatchCall_BattlePikeText6) > 0x4d
	.error "MatchCall_BattlePikeText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText6) < 0x4d
	.space 0x4d - (. - MatchCall_BattlePikeText6)
	.endif

	@ data/text/match_call.inc:550 MatchCall_BattlePikeText7
	.globl MatchCall_BattlePikeText7
MatchCall_BattlePikeText7: @ 0x08269762
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したんだって?\pすごいねえ\nあ めずらしいポケモンを みつけたから\pじゃあ また"
	.byte EOS
	.if (. - MatchCall_BattlePikeText7) > 0x47
	.error "MatchCall_BattlePikeText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText7) < 0x47
	.space 0x47 - (. - MatchCall_BattlePikeText7)
	.endif

	@ data/text/match_call.inc:553 MatchCall_BattlePikeText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePikeText8
MatchCall_BattlePikeText8: @ 0x082697A9
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}へやも\lとっぱ したんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePikeText8) != 0x59
	.error "MatchCall_BattlePikeText8 must retain its original byte length"
	.endif
	.globl gText_Rom_2697FE
	.set gText_Rom_2697FE, MatchCall_BattlePikeText8 + 0x55

	@ data/text/match_call.inc:556 MatchCall_BattlePikeText9
	.globl MatchCall_BattlePikeText9
MatchCall_BattlePikeText9: @ 0x08269802
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で {STR_VAR_3}へやも\nとっぱ したんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - MatchCall_BattlePikeText9) > 0x40
	.error "MatchCall_BattlePikeText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText9) < 0x40
	.space 0x40 - (. - MatchCall_BattlePikeText9)
	.endif

	@ data/text/match_call.inc:559 MatchCall_BattlePikeText10
	.globl MatchCall_BattlePikeText10
MatchCall_BattlePikeText10: @ 0x08269842
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}へやも とっぱ したんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - MatchCall_BattlePikeText10) > 0x3d
	.error "MatchCall_BattlePikeText10 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText10) < 0x3d
	.space 0x3d - (. - MatchCall_BattlePikeText10)
	.endif

	@ data/text/match_call.inc:562 MatchCall_BattlePikeText11
	.globl MatchCall_BattlePikeText11
MatchCall_BattlePikeText11: @ 0x0826987F
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}へやも とっぱ したんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ むりかなあ?\nじゃあ またな"
	.byte EOS
	.if (. - MatchCall_BattlePikeText11) > 0x5c
	.error "MatchCall_BattlePikeText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText11) < 0x5c
	.space 0x5c - (. - MatchCall_BattlePikeText11)
	.endif

	@ data/text/match_call.inc:565 MatchCall_BattlePikeText12
	.globl MatchCall_BattlePikeText12
MatchCall_BattlePikeText12: @ 0x082698DB
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}へや とっぱ したとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - MatchCall_BattlePikeText12) > 0x45
	.error "MatchCall_BattlePikeText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText12) < 0x45
	.space 0x45 - (. - MatchCall_BattlePikeText12)
	.endif

	@ data/text/match_call.inc:568 MatchCall_BattlePikeText13
	.globl MatchCall_BattlePikeText13
MatchCall_BattlePikeText13: @ 0x08269920
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}へやも とっぱした とな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - MatchCall_BattlePikeText13) > 0x3f
	.error "MatchCall_BattlePikeText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePikeText13) < 0x3f
	.space 0x3f - (. - MatchCall_BattlePikeText13)
	.endif

	@ data/text/match_call.inc:571 MatchCall_BattlePikeText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePikeText14
MatchCall_BattlePikeText14: @ 0x0826995F
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\p{STR_VAR_3}へやも\nとっぱ したんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePikeText14) != 0x4c
	.error "MatchCall_BattlePikeText14 must retain its original byte length"
	.endif
	.globl gText_Rom_2699A7
	.set gText_Rom_2699A7, MatchCall_BattlePikeText14 + 0x48

	@ data/text/match_call.inc:574 MatchCall_BattlePyramidText1
	.globl MatchCall_BattlePyramidText1
MatchCall_BattlePyramidText1: @ 0x082699AB
	.string "あ! {PLAYER}?\nこんにちは {STR_VAR_1} です!\pきいたよ!\n{STR_VAR_2} で\p{STR_VAR_3}だん も\nのぼったんだって?\pすごいねー ぼくも こんど\nちょうせん してみようかなー"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText1) > 0x4d
	.error "MatchCall_BattlePyramidText1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText1) < 0x4d
	.space 0x4d - (. - MatchCall_BattlePyramidText1)
	.endif

	@ data/text/match_call.inc:577 MatchCall_BattlePyramidText2
	.globl MatchCall_BattlePyramidText2
MatchCall_BattlePyramidText2: @ 0x082699F8
	.string "こんにちは {STR_VAR_1} でーす!\nきいたわよ!\p{STR_VAR_2} で\n{STR_VAR_3}だん も\lかちぬいたんですって?\pすごーい! わたしの ポケモンも\nがんばって そだてなくちゃ"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText2) > 0x4c
	.error "MatchCall_BattlePyramidText2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText2) < 0x4c
	.space 0x4c - (. - MatchCall_BattlePyramidText2)
	.endif

	@ data/text/match_call.inc:580 MatchCall_BattlePyramidText3
	.globl MatchCall_BattlePyramidText3
MatchCall_BattlePyramidText3: @ 0x08269A44
	.string "よう {PLAYER}!\n{STR_VAR_1}だぞ げんきかー?\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼったって きいたぞ\pつぎも がんばれよなー\nじゃあ またな"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText3) > 0x3d
	.error "MatchCall_BattlePyramidText3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText3) < 0x3d
	.space 0x3d - (. - MatchCall_BattlePyramidText3)
	.endif

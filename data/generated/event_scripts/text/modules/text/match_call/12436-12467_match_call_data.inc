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

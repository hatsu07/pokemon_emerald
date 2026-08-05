
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


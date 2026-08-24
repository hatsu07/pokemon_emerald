
	@ data/text/match_call.inc:583 MatchCall_BattlePyramidText4
	.globl MatchCall_BattlePyramidText4
MatchCall_BattlePyramidText4: @ 0x08269A81
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} だ\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼった らしいね\pぼくも きみに まけないように\nがんばらなきゃな"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText4) > 0x3a
	.error "MatchCall_BattlePyramidText4 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText4) < 0x3a
	.space 0x3a - (. - MatchCall_BattlePyramidText4)
	.endif

	@ data/text/match_call.inc:586 MatchCall_BattlePyramidText5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePyramidText5
MatchCall_BattlePyramidText5: @ 0x08269ABB
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} だよ\pきいたよ {STR_VAR_2} で\n{STR_VAR_3}だんも のぼったんだって?\pぼくも がんばらなきゃ\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText5) != 0x3f
	.error "MatchCall_BattlePyramidText5 must retain its original byte length"
	.endif
	.globl gText_Rom_269AF6
	.set gText_Rom_269AF6, MatchCall_BattlePyramidText5 + 0x3b

	@ data/text/match_call.inc:589 MatchCall_BattlePyramidText6
	.globl MatchCall_BattlePyramidText6
MatchCall_BattlePyramidText6: @ 0x08269AFA
	.string "{PLAYER}{KUN} かい?\nこんにちは {STR_VAR_1} だ\pそういえば きみ\n{STR_VAR_2}で {STR_VAR_3}だんも\lかちぬいたんだってね\pおれも まけないように\nポケモンを そだてなきゃな"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText6) > 0x4c
	.error "MatchCall_BattlePyramidText6 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText6) < 0x4c
	.space 0x4c - (. - MatchCall_BattlePyramidText6)
	.endif

	@ data/text/match_call.inc:592 MatchCall_BattlePyramidText7
	.globl MatchCall_BattlePyramidText7
MatchCall_BattlePyramidText7: @ 0x08269B46
	.string "{PLAYER}{KUN}?\nああ {STR_VAR_1} だけど\p{STR_VAR_2}で {STR_VAR_3}だんも\nのぼったんだって?\pへー…… そこに\nめずらしい ポケモン いなかった?\pそうかー いないかー\nじゃあ また"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText7) > 0x51
	.error "MatchCall_BattlePyramidText7 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText7) < 0x51
	.space 0x51 - (. - MatchCall_BattlePyramidText7)
	.endif

	@ data/text/match_call.inc:595 MatchCall_BattlePyramidText8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePyramidText8
MatchCall_BattlePyramidText8: @ 0x08269B97
	.string "こんにちは {PLAYER}{KUN}\n{STR_VAR_1} です\pげんき ですか?\n{STR_VAR_2}で {STR_VAR_3}だんも\lかちぬいたんですって?\pすごいですね!\nわたしも がんばって\pポケモン そだてないと!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText8) != 0x58
	.error "MatchCall_BattlePyramidText8 must retain its original byte length"
	.endif
	.globl gText_Rom_269BEB
	.set gText_Rom_269BEB, MatchCall_BattlePyramidText8 + 0x54

	@ data/text/match_call.inc:598 MatchCall_BattlePyramidText9
	.globl MatchCall_BattlePyramidText9
MatchCall_BattlePyramidText9: @ 0x08269BEF
	.string "あら {PLAYER}{KUN}!\nこんにちは {STR_VAR_1}です!\p{STR_VAR_2}で {STR_VAR_3}だんも\nかちぬいたんだって?\pすっごいねー\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText9) > 0x3f
	.error "MatchCall_BattlePyramidText9 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText9) < 0x3f
	.space 0x3f - (. - MatchCall_BattlePyramidText9)
	.endif

	@ data/text/match_call.inc:601 MatchCall_BattlePyramidText10
	.globl MatchCall_BattlePyramidText10
MatchCall_BattlePyramidText10: @ 0x08269C2E
	.string "{PLAYER}{KUN} こんにちは\n{STR_VAR_1} です\p{STR_VAR_2}で\n{STR_VAR_3}だんも のぼったんですって?\pすごいわねえ\nわたしも がんばらなくちゃ"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText10) > 0x3b
	.error "MatchCall_BattlePyramidText10 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText10) < 0x3b
	.space 0x3b - (. - MatchCall_BattlePyramidText10)
	.endif

	@ data/text/match_call.inc:604 MatchCall_BattlePyramidText11
	.globl MatchCall_BattlePyramidText11
MatchCall_BattlePyramidText11: @ 0x08269C69
	.string "やあやあ {PLAYER}{KUN}\n{STR_VAR_1}だ\p{STR_VAR_2}で\nだいかつやく らしいなあ\l{STR_VAR_3}だんも のぼったんだって?\pすげえなあ おれでも\nゆうしょう できるのかな\p・・・ できない?\nじゃあ またな"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText11) > 0x59
	.error "MatchCall_BattlePyramidText11 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText11) < 0x59
	.space 0x59 - (. - MatchCall_BattlePyramidText11)
	.endif

	@ data/text/match_call.inc:607 MatchCall_BattlePyramidText12
	.globl MatchCall_BattlePyramidText12
MatchCall_BattlePyramidText12: @ 0x08269CC2
	.string "やあ {PLAYER}{KUN}\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2} とかいう ところで\n{STR_VAR_3}だんも かちぬいたとな?\pすごい はなし だのう\nでは またの"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText12) > 0x45
	.error "MatchCall_BattlePyramidText12 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText12) < 0x45
	.space 0x45 - (. - MatchCall_BattlePyramidText12)
	.endif

	@ data/text/match_call.inc:610 MatchCall_BattlePyramidText13
	.globl MatchCall_BattlePyramidText13
MatchCall_BattlePyramidText13: @ 0x08269D07
	.string "{PLAYER}{KUN} かい?\n{STR_VAR_1} じゃが げんきかの?\p{STR_VAR_2}で\n{STR_VAR_3}だんも のぼったとな?\pげんきで いいことじゃ\nでは またのう"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText13) > 0x3d
	.error "MatchCall_BattlePyramidText13 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_BattlePyramidText13) < 0x3d
	.space 0x3d - (. - MatchCall_BattlePyramidText13)
	.endif

	@ data/text/match_call.inc:613 MatchCall_BattlePyramidText14
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MatchCall_BattlePyramidText14
MatchCall_BattlePyramidText14: @ 0x08269D44
	.string "あら {PLAYER}{KUN} こんにちは\n{STR_VAR_1} よ\pきいたわよ!\n{STR_VAR_2}で\p{STR_VAR_3}だんも\nかちぬいたんですって?\pすごいわねえ かんしん しちゃうわ!\nじゃあ またね"
	.byte EOS
	.if (. - MatchCall_BattlePyramidText14) != 0x4b
	.error "MatchCall_BattlePyramidText14 must retain its original byte length"
	.endif
	.globl gText_Rom_269D8B
	.set gText_Rom_269D8B, MatchCall_BattlePyramidText14 + 0x47

	@ data/text/match_call.inc:616 MatchCall_Text_Mom1
	.globl MatchCall_Text_Mom1
MatchCall_Text_Mom1: @ 0x08269D8F
	.string "ママ『パパも あなたも\nみんな ポケモンに むちゅう なのね\pポケモンの みりょく って\nなんなの かしら……\pわたし?\nわたしは いえの ようじを おてつだい\lしてくれる ポケモンが すきだわ"
	.byte EOS
	.if (. - MatchCall_Text_Mom1) > 0x62
	.error "MatchCall_Text_Mom1 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Mom1) < 0x62
	.space 0x62 - (. - MatchCall_Text_Mom1)
	.endif

	@ data/text/match_call.inc:619 MatchCall_Text_Mom2
	.globl MatchCall_Text_Mom2
MatchCall_Text_Mom2: @ 0x08269DF1
	.string "ママ『あら {PLAYER}\nパパなら まいにち トウカシティの\lジムに こもってるわよ!\pときどき うちに かえってきては\nたくさん ごはんを たべて\lまた でかけて いくの!\pあなたに まけたのが\nよっぽど くやしかった みたいね!"
	.byte EOS
	.if (. - MatchCall_Text_Mom2) > 0x71
	.error "MatchCall_Text_Mom2 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Mom2) < 0x71
	.space 0x71 - (. - MatchCall_Text_Mom2)
	.endif

	@ data/text/match_call.inc:622 MatchCall_Text_Mom3
	.globl MatchCall_Text_Mom3
MatchCall_Text_Mom3: @ 0x08269E62
	.string "ママ『{PLAYER}……\pおうちの ことなら きにしなくて いいから\nママが あげた ランニングシューズ\lボロボロに なるまで はいてちょうだいね!"
	.byte EOS
	.if (. - MatchCall_Text_Mom3) > 0x46
	.error "MatchCall_Text_Mom3 may not grow beyond its original slot"
	.endif
	.if (. - MatchCall_Text_Mom3) < 0x46
	.space 0x46 - (. - MatchCall_Text_Mom3)
	.endif


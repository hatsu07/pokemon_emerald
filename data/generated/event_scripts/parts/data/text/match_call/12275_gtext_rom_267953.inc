	@ data/text/match_call.inc:313 MatchCall_PersonalizedText34
	.globl gText_Rom_267953
gText_Rom_267953: @ 0x08267953
	.string "やあ! {STR_VAR_1} だけど\nどう のんびり やっている かい?\pボクはさ むかしから\nあせったり いそいだり するのが\lにがて なんだよね\lそれでも なぜか いまは\lトライアスリートを やっている……\pじんせい なにが おこるか\nわからないって ヤツだな! はは\pキミも いまは トレーナーだけど\nしょうらいは せんせい とか えかき とか\lよそうも つかない ことを\lやって いるの かもな!\pまー のんびり やれよ!\nじゃあなー$"
	.if (. - gText_Rom_267953) > 0xd6
	.error "gText_Rom_267953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_267953) < 0xd6
	.space 0xd6 - (. - gText_Rom_267953)
	.endif

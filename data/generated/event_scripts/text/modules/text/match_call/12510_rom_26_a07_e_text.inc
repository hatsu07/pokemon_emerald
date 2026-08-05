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

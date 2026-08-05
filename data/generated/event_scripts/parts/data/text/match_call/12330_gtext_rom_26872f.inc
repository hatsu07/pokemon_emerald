	@ data/text/match_call.inc:394 MatchCall_PersonalizedText61
	.globl gText_Rom_26872F
gText_Rom_26872F: @ 0x0826872F
	.string "{STR_VAR_1}です!\nさっき ボクたち めずらしく\lかいパンの おにいさんに かったんだ!\lでも かっこいい ひとだった から……\pせっかく かよわい ところを\nみせようと したのに!\pって ねえちゃんに おこられた……\pどーせ かっても まけても\nおこられるんだ ボクは!\l{PLAYER}{KUN}も こんど\lなんとか いって やって!\pじゃ またねー!$"
	.if (. - gText_Rom_26872F) > 0xa6
	.error "gText_Rom_26872F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26872F) < 0xa6
	.space 0xa6 - (. - gText_Rom_26872F)
	.endif

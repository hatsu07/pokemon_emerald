	@ data/text/match_call.inc:376 MatchCall_PersonalizedText55
	.globl gText_Rom_268324
gText_Rom_268324: @ 0x08268324
	.string "{STR_VAR_1}だよ {STR_VAR_1}だよー!\p{STR_VAR_2} って\nひとどおりが はげしいから\lまいにち いろんな ひとに\lしょうぶを もうしこまれるの!\pきょうはねえ 5にんに かって\n3にんに まけたわ!\lあなたのほうは どうだった?\lこんど きかせてねっ! じゃあね$"
	.if (. - gText_Rom_268324) > 0x79
	.error "gText_Rom_268324 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268324) < 0x79
	.space 0x79 - (. - gText_Rom_268324)
	.endif

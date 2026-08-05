	@ data/text/match_call.inc:400 MatchCall_PersonalizedText63
	.globl gText_Rom_268899
gText_Rom_268899: @ 0x08268899
	.string "やあー きみーっ!\n{STR_VAR_1}だー!\lわたしは いまー\l108ばんすいどうに きているーっ!\pつまり いつもと おなじ ところだー!\pきょうは めの まえを\nビキニのおねえさんが とおったからーっ\lおおごえで おどかして みたーっ!\pそしたら いやな かおを されたー!\pいじょう 108ばんすいどう から\n{STR_VAR_1}が おつたえ したー!$"
	.if (. - gText_Rom_268899) > 0xa5
	.error "gText_Rom_268899 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_268899) < 0xa5
	.space 0xa5 - (. - gText_Rom_268899)
	.endif

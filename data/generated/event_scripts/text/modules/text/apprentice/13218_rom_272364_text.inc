	@ data/text/apprentice.inc:745 gText_ApprenticeWhichMove12
	.globl gText_Rom_272364
gText_Rom_272364: @ 0x08272364
	.string "イエァ {PLAYER}さんじゃないのー?\nどうする オレ? また はなしかける!?\lってもう はなしかけてる!?\lって {PLAYER}さん あきれてる!?\lしかたねー そうだん してみる!?\pきょうも そうだんに のってェ!\nって きいてる!? きいてる!!\pおれの {STR_VAR_1}の わざ\nどうしたら いいかな? きめてエェ!\l{STR_VAR_2}!? {STR_VAR_3}!?$"
	.if (. - gText_Rom_272364) > 0xa0
	.error "gText_Rom_272364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272364) < 0xa0
	.space 0xa0 - (. - gText_Rom_272364)
	.endif

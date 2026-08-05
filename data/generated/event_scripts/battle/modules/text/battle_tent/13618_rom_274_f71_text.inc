	@ data/text/battle_tent.inc:134 VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent
	.globl gText_Rom_274F71
gText_Rom_274F71: @ 0x08274F71
	.string "バトルテント シダケかいじょうでの\nたたかいには まもらなければ ならない\lひとつの おきてが ある\pここでは ポケモンは\nいれかえ しか できない!\pそれいがいの めいれいは\nいっさい きんし して おるのだ!\pポケモンには おのれの せいかくの ままに\nかんがえ こうどう して もらう!\pおぬしは じぶんの\nポケモンたちを しんじて\lたたかいを みまもって やれ\pみごと 3にんの トレーナーを\nうちやぶることが できれば\lしょうひんを さしあげよう\pまた とちゅうで ちょうせんを\nちゅうだん したい ときは\lきちんと レポートを かかないと\lつづけて ちょうせん できん からな\lきを つけてくれ……$"
	.if (. - gText_Rom_274F71) > 0x132
	.error "gText_Rom_274F71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F71) < 0x132
	.space 0x132 - (. - gText_Rom_274F71)
	.endif

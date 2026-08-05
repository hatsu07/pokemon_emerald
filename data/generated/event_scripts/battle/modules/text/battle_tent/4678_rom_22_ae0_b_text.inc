	@ data/text/battle_tent.inc:419 VerdanturfTown_BattleTentLobby_Text_ExplainUnderpoweredRules
	.globl gText_Rom_22AE0B
gText_Rom_22AE0B: @ 0x0822AE0B
	.string "トレーナーの めいれいを うけて いない\nポケモンは うまく わざを\lだせない ことが あります\pポケモンは きらいな わざを\nつかうのは とくいでは ありません\pせいかくに あわない わざ ばかりを\nおぼえさせて いると たたかいで\lポケモンが じぶんの ちからを はっき\lできない ことが おおく なります$"
	.if (. - gText_Rom_22AE0B) > 0x9c
	.error "gText_Rom_22AE0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AE0B) < 0x9c
	.space 0x9c - (. - gText_Rom_22AE0B)
	.endif

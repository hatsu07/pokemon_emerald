	@ data/text/battle_tent.inc:419 VerdanturfTown_BattleTentLobby_Text_ExplainUnderpoweredRules
	.globl gText_Rom_275AB3
gText_Rom_275AB3: @ 0x08275AB3
	.string "トレーナーの めいれいを うけて いない\nポケモンは うまく わざを\lだせない ことが あります\pポケモンは きらいな わざを\nつかうのは とくいでは ありません\pせいかくに あわない わざ ばかりを\nおぼえさせて いると たたかいで\lポケモンが じぶんの ちからを はっき\lできない ことが おおく なります$"
	.if (. - gText_Rom_275AB3) > 0x9c
	.error "gText_Rom_275AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275AB3) < 0x9c
	.space 0x9c - (. - gText_Rom_275AB3)
	.endif

	@ data/text/battle_tent.inc:348 SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules
	.globl gText_Rom_2757A8
gText_Rom_2757A8: @ 0x082757A8
	.string "いちど たたかいに かつ たびに\n1かい 1ひき だけ ポケモンを\lトレード することが できます\p1かいの ちょうせんで\nトレードが できるのは\l2にんめの トレーナーまで です{EOS}"
	.if (. - gText_Rom_2757A8) > 0x5b
	.error "gText_Rom_2757A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2757A8) < 0x5b
	.space 0x5b - (. - gText_Rom_2757A8)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:536 BattleFrontier_BattleArenaLobby_Text_ExplainMindRules
	.globl gText_Rom_22FE72
gText_Rom_22FE72: @ 0x0822FE72
	.string "1つめの はんてい ポイントである\n「こころ」は\lせめる きもちを みられます\pどれだけ トレーナーが こうげきする わざを\nめいれい したかに よって\lひょうかが かわります"
	.byte EOS
	.if (. - gText_Rom_22FE72) > 0x59
	.error "gText_Rom_22FE72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FE72) < 0x59
	.space 0x59 - (. - gText_Rom_22FE72)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:524 BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22FDB0
gText_Rom_22FDB0: @ 0x0822FDB0
	.string "かちぬきチームバトルは ふつうの たたかいと\nちがい とくべつな ルールが あります\pまず 1かいの たたかいは\n3ターンで しゅうりょうと なります\p3ターンで しょうぶが つかないときは\nしんぱんに よる はんていに なります\pはんていは ポケモンの たたかいかたを\nみて しょうはいを けってい します\pまた しょうぶの けっちゃくが つくまで\nポケモンの こうたいは できません"
	.byte EOS
	.if (. - gText_Rom_22FDB0) != 0xc2
	.error "gText_Rom_22FDB0 must retain its original byte length"
	.endif
	.globl gText_Rom_22FE6E
	.set gText_Rom_22FE6E, gText_Rom_22FDB0 + 0xbe
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

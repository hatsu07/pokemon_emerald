	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:524 BattleFrontier_BattleArenaLobby_Text_ExplainBattleRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22FDB0
gText_Rom_22FDB0: @ 0x0822FDB0
	.string "かちぬきチームバトルは ふつうの たたかいと\nちがい とくべつな ルールが あります\pまず 1かいの たたかいは\n3ターンで しゅうりょうと なります\p3ターンで しょうぶが つかないときは\nしんぱんに よる はんていに なります\pはんていは ポケモンの たたかいかたを\nみて しょうはいを けってい します\pまた しょうぶの けっちゃくが つくまで\nポケモンの こうたいは できません"
	.byte EOS
	.if (. - gText_Rom_22FDB0) != 0xc2
	.error "gText_Rom_22FDB0 must retain its original byte length"
	.endif

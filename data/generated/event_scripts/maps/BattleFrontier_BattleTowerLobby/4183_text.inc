	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1087 BattleFrontier_BattleTowerLobby_Text_PleaseSelectTwoMons (+1 aliases)
	.globl gText_Rom_22169F
gText_Rom_22169F: @ 0x0822169F
	.string "では さんかする ポケモンを\n2ひき おえらび ください!"
	.byte EOS
	.if (. - gText_Rom_22169F) > 0x1e
	.error "gText_Rom_22169F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22169F) < 0x1e
	.space 0x1e - (. - gText_Rom_22169F)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1103 BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend
BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend: @ 0x082216BD
	.string "ともだちと\nおなじ ポケモンを えらんでいます!\pともだちの ポケモンと\nちがう しゅるいの ポケモンを\l2ひき えらび\lさんかする レベルを あわせて\lとうろくを やりなおして ください!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend) != 0x60
	.error "BattleFrontier_BattleTowerLobby_Text_ChoseSameMonAsFriend must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1106 BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers
	.globl BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers
BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers: @ 0x0822171D
	.string "つうしんマルチ バトルルームは\n{STR_VAR_1}にん では ちょうせん できません!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers) > 0x25
	.error "BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers) < 0x25
	.space 0x25 - (. - BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers)
	.endif

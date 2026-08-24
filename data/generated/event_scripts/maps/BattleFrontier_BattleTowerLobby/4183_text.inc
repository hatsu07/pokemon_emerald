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
	.globl gText_Rom_2216BD
gText_Rom_2216BD: @ 0x082216BD
	.string "ともだちと\nおなじ ポケモンを えらんでいます!\pともだちの ポケモンと\nちがう しゅるいの ポケモンを\l2ひき えらび\lさんかする レベルを あわせて\lとうろくを やりなおして ください!"
	.byte EOS
	.if (. - gText_Rom_2216BD) != 0x60
	.error "gText_Rom_2216BD must retain its original byte length"
	.endif
	.globl gText_Rom_2216D6
	.set gText_Rom_2216D6, gText_Rom_2216BD + 0x19
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1106 BattleFrontier_BattleTowerLobby_Text_LinkMultiOnlyForTwoPlayers
	.globl gText_Rom_22171D
gText_Rom_22171D: @ 0x0822171D
	.string "つうしんマルチ バトルルームは\n{STR_VAR_1}にん では ちょうせん できません!"
	.byte EOS
	.if (. - gText_Rom_22171D) > 0x25
	.error "gText_Rom_22171D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22171D) < 0x25
	.space 0x25 - (. - gText_Rom_22171D)
	.endif

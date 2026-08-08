	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1003 BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22095D
gText_Rom_22095D: @ 0x0822095D
	.string "バトルタワー マルチバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください"
	.byte EOS
	.if (. - gText_Rom_22095D) != 0x43
	.error "gText_Rom_22095D must retain its original byte length"
	.endif

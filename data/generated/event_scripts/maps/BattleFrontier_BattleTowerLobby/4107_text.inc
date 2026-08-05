	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:999 BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22091A
gText_Rom_22091A: @ 0x0822091A
	.string "バトルタワー ダブルバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください"
	.byte EOS
	.if (. - gText_Rom_22091A) != 0x43
	.error "gText_Rom_22091A must retain its original byte length"
	.endif

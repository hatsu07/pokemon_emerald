	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:992 BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded
	.globl BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded
BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded: @ 0x08220896
	.string "かちぬいた トレーナーの にんずうは\nきろく されて いるのよ!\pはずかしく ない たたかいを\nしなきゃ……!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded) > 0x38
	.error "BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded) < 0x38
	.space 0x38 - (. - BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:995 BattleFrontier_BattleTowerLobby_Text_CanLeaveUntilLossOrSevenWins
	.globl gText_Rom_2208CE
gText_Rom_2208CE: @ 0x082208CE
	.string "いちど バトルタワーに はいれば\nとちゅうで まけちゃうか\l7にん かちぬくまでは\lでられなく なっちゃうんだ!\pかくごして チャレンジ しないとね!"
	.byte EOS
	.if (. - gText_Rom_2208CE) > 0x4c
	.error "gText_Rom_2208CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2208CE) < 0x4c
	.space 0x4c - (. - gText_Rom_2208CE)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:999 BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction
BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction: @ 0x0822091A
	.string "バトルタワー ダブルバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction) != 0x43
	.error "BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction must retain its original byte length"
	.endif
	.globl gText_Rom_220950
	.set gText_Rom_220950, BattleFrontier_BattleTowerLobby_Text_DoubleBattleRoomConstruction + 0x36
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1003 BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction
BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction: @ 0x0822095D
	.string "バトルタワー マルチバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction) != 0x43
	.error "BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction must retain its original byte length"
	.endif
	.globl gText_Rom_220993
	.set gText_Rom_220993, BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction + 0x36
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1006 BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge
	.globl BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge
BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge: @ 0x082209A0
	.string "またの ちょうせんを\nおまちして おります!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge) > 0x17
	.error "BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge)
	.endif

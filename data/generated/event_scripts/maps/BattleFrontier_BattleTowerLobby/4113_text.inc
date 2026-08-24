	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:992 BattleFrontier_BattleTowerLobby_Text_WinsInRowRecorded
	.globl gText_Rom_220896
gText_Rom_220896: @ 0x08220896
	.string "かちぬいた トレーナーの にんずうは\nきろく されて いるのよ!\pはずかしく ない たたかいを\nしなきゃ……!"
	.byte EOS
	.if (. - gText_Rom_220896) > 0x38
	.error "gText_Rom_220896 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220896) < 0x38
	.space 0x38 - (. - gText_Rom_220896)
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
	.globl gText_Rom_22091A
gText_Rom_22091A: @ 0x0822091A
	.string "バトルタワー ダブルバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください"
	.byte EOS
	.if (. - gText_Rom_22091A) != 0x43
	.error "gText_Rom_22091A must retain its original byte length"
	.endif
	.globl gText_Rom_220950
	.set gText_Rom_220950, gText_Rom_22091A + 0x36
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1003 BattleFrontier_BattleTowerLobby_Text_MultiBattleRoomConstruction
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22095D
gText_Rom_22095D: @ 0x0822095D
	.string "バトルタワー マルチバトルコーナーへ\nようこそ!\pげんざい バトルルームは こうじちゅうです\nかんせいまで しばらく おまちください"
	.byte EOS
	.if (. - gText_Rom_22095D) != 0x43
	.error "gText_Rom_22095D must retain its original byte length"
	.endif
	.globl gText_Rom_220993
	.set gText_Rom_220993, gText_Rom_22095D + 0x36
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:1006 BattleFrontier_BattleTowerLobby_Text_LookForwardToAnotherChallenge
	.globl gText_Rom_2209A0
gText_Rom_2209A0: @ 0x082209A0
	.string "またの ちょうせんを\nおまちして おります!"
	.byte EOS
	.if (. - gText_Rom_2209A0) > 0x17
	.error "gText_Rom_2209A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2209A0) < 0x17
	.space 0x17 - (. - gText_Rom_2209A0)
	.endif

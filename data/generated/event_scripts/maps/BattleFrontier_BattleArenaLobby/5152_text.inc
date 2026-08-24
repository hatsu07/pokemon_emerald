	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:437 BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown (+1 aliases)
	.globl gText_Rom_22FAC1
gText_Rom_22FAC1: @ 0x0822FAC1
	.string "おきゃくじん!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが その ばあい\nちょうせんは むこうと なりますぞ!\pまた はじめから\nちょうせん してくだされ!!"
	.byte EOS
	.if (. - gText_Rom_22FAC1) > 0x62
	.error "gText_Rom_22FAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FAC1) < 0x62
	.space 0x62 - (. - gText_Rom_22FAC1)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:447 BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins
	.globl BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins
BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins: @ 0x0822FB23
	.string "7にんぬき たっせい\nおみごとで ございました!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins) > 0x19
	.error "BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleArenaLobby_Text_CongratsOnSevenWins)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:451 BattleFrontier_BattleArenaLobby_Text_RecordAchievement (+1 aliases)
	.globl gText_Rom_22FB3C
gText_Rom_22FB3C: @ 0x0822FB3C
	.string "せいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FB3C) > 0x1c
	.error "gText_Rom_22FB3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB3C) < 0x1c
	.space 0x1c - (. - gText_Rom_22FB3C)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:456 BattleFrontier_BattleArenaLobby_Text_PresentYouWithPrize
	.globl gText_Rom_22FB58
gText_Rom_22FB58: @ 0x0822FB58
	.string "7にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!"
	.byte EOS
	.if (. - gText_Rom_22FB58) > 0x2a
	.error "gText_Rom_22FB58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB58) < 0x2a
	.space 0x2a - (. - gText_Rom_22FB58)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22FB82
gText_Rom_22FB82: @ 0x0822FB82
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - gText_Rom_22FB82) > 0xe
	.error "gText_Rom_22FB82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB82) < 0xe
	.space 0xe - (. - gText_Rom_22FB82)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl gText_Rom_22FB90
gText_Rom_22FB90: @ 0x0822FB90
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!"
	.byte EOS
	.if (. - gText_Rom_22FB90) > 0x32
	.error "gText_Rom_22FB90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FB90) < 0x32
	.space 0x32 - (. - gText_Rom_22FB90)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:472 BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave
BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave: @ 0x0822FBC2
	.string "おつかれさまでした!\pせいせきを レポートに かきますので\nおまちくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave) != 0x27
	.error "BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave must retain its original byte length"
	.endif
	.globl gText_Rom_22FBCD
	.set gText_Rom_22FBCD, BattleFrontier_BattleArenaLobby_Text_ThankYouWaitWhileSave + 0xb
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22FBE9
gText_Rom_22FBE9: @ 0x0822FBE9
	.string "またの ちょうせんを\nおまちして おりますぞ!"
	.byte EOS
	.if (. - gText_Rom_22FBE9) > 0x18
	.error "gText_Rom_22FBE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22FBE9) < 0x18
	.space 0x18 - (. - gText_Rom_22FBE9)
	.endif

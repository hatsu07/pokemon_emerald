	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:930 BattleFrontier_BattleTowerLobby_Text_DirectYouToBattleRoom
	.globl gText_Rom_22059B
gText_Rom_22059B: @ 0x0822059B
	.string "それでは バトルルームへ\nごあんない します!"
	.byte EOS
	.if (. - gText_Rom_22059B) > 0x18
	.error "gText_Rom_22059B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22059B) < 0x18
	.space 0x18 - (. - gText_Rom_22059B)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:510 BattleFrontier_BattleDomeLobby_Text_DidntSaveBeforeQuitting (+1 aliases)
	.globl gText_Rom_2205B3
gText_Rom_2205B3: @ 0x082205B3
	.string "おきゃくさま!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね?\pもうしわけ ありませんが そのばあい\nちょうせんは むこうと なります"
	.byte EOS
	.if (. - gText_Rom_2205B3) > 0x51
	.error "gText_Rom_2205B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2205B3) < 0x51
	.space 0x51 - (. - gText_Rom_2205B3)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:936 BattleFrontier_BattleTowerLobby_Text_CongratsBeatenSeven
	.globl gText_Rom_220604
gText_Rom_220604: @ 0x08220604
	.string "おめでとう ございます!\nみごと 7にんぬき されましたね!\p"
	.byte EOS
	.if (. - gText_Rom_220604) > 0x20
	.error "gText_Rom_220604 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220604) < 0x20
	.space 0x20 - (. - gText_Rom_220604)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:940 BattleFrontier_BattleTowerLobby_Text_EarnedFabulousPrize
	.globl gText_Rom_220624
gText_Rom_220624: @ 0x08220624
	.string "7にんぬきを たっせい されましたので\nこの しょうひんを さしあげます!\p"
	.byte EOS
	.if (. - gText_Rom_220624) > 0x27
	.error "gText_Rom_220624 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220624) < 0x27
	.space 0x27 - (. - gText_Rom_220624)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22064B
gText_Rom_22064B: @ 0x0822064B
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!"
	.byte EOS
	.if (. - gText_Rom_22064B) > 0xe
	.error "gText_Rom_22064B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22064B) < 0xe
	.space 0xe - (. - gText_Rom_22064B)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:947 BattleFrontier_BattleTowerLobby_Text_BagFullMakeRoom
	.globl gText_Rom_220659
gText_Rom_220659: @ 0x08220659
	.string "…あら どうぐが いっぱいですね\pどうぐを せいりしてから\nまたおこしください"
	.byte EOS
	.if (. - gText_Rom_220659) > 0x28
	.error "gText_Rom_220659 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_220659) < 0x28
	.space 0x28 - (. - gText_Rom_220659)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:950 BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
	.globl BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying
BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying: @ 0x08220681
	.string "おつかれさまでした!\p"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying) > 0xc
	.error "BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying) < 0xc
	.space 0xc - (. - BattleFrontier_BattleTowerLobby_Text_ThankYouForPlaying)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:540 BattleFrontier_BattleDomeLobby_Text_RecordWillBeSaved (+1 aliases)
	.globl gText_Rom_22068D
gText_Rom_22068D: @ 0x0822068D
	.string "せいせきを レポートに かきますので\nおまちください"
	.byte EOS
	.if (. - gText_Rom_22068D) > 0x1b
	.error "gText_Rom_22068D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22068D) < 0x1b
	.space 0x1b - (. - gText_Rom_22068D)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:956 BattleFrontier_BattleTowerLobby_Text_WeveBeenWaitingForYou
	.globl gText_Rom_2206A8
gText_Rom_2206A8: @ 0x082206A8
	.string "おまちしておりました!\p"
	.byte EOS
	.if (. - gText_Rom_2206A8) > 0xd
	.error "gText_Rom_2206A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206A8) < 0xd
	.space 0xd - (. - gText_Rom_2206A8)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:959 BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
	.globl BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved
BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved: @ 0x082206B5
	.string "バトルルームに ごあんないする まえに\nレポートを かきますので おまちください"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved) > 0x29
	.error "BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleTowerLobby_Text_ProgressWillBeSaved)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:962 BattleFrontier_BattleTowerLobby_Text_AboutToFace50thTrainer
	.globl gText_Rom_2206DE
gText_Rom_2206DE: @ 0x082206DE
	.string "いよいよ つぎは 50にんめの\nトレーナー ですね!\pこれからは 7にんを かちぬく たびに\nあなたの ポケモンに きねんリボンが\lおくられますので がんばって くださいね!"
	.byte EOS
	.if (. - gText_Rom_2206DE) > 0x58
	.error "gText_Rom_2206DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2206DE) < 0x58
	.space 0x58 - (. - gText_Rom_2206DE)
	.endif
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:965 BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons
BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons: @ 0x08220736
	.string "つよい トレーナー 7にんを\nかちぬいた きねんの リボンを どうぞ!\p{PLAYER}は リボンを もらった!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons) != 0x33
	.error "BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons must retain its original byte length"
	.endif
	.globl gText_Rom_22075A
	.set gText_Rom_22075A, BattleFrontier_BattleTowerLobby_Text_HereAreSomeRibbons + 0x24
	@ data/maps/BattleFrontier_BattleTowerLobby/scripts.inc:968 BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons
	.globl BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons
BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons: @ 0x08220769
	.string "{PLAYER}は ポケモンに\nリボンを つけて あげた!"
	.byte EOS
	.if (. - BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons) > 0x18
	.error "BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleTowerLobby_Text_PutRibbonOnMons)
	.endif

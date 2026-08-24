	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:697 Route110_TrickHouseEntrance_Text_YoureBeingWatched
	.globl Route110_TrickHouseEntrance_Text_YoureBeingWatched
Route110_TrickHouseEntrance_Text_YoureBeingWatched: @ 0x0823D245
	.string "だれかの しせんを かんじる…"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_YoureBeingWatched) > 0x10
	.error "Route110_TrickHouseEntrance_Text_YoureBeingWatched may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_YoureBeingWatched) < 0x10
	.space 0x10 - (. - Route110_TrickHouseEntrance_Text_YoureBeingWatched)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:700 Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk
	.globl Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk
Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk: @ 0x0823D255
	.string "む むむ…!\pなぜ わがはいが つくえの したに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk) > 0x2e
	.error "Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk) < 0x2e
	.space 0x2e - (. - Route110_TrickHouseEntrance_Text_ConcealedBeneathDesk)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:703 Route110_TrickHouseEntrance_Text_ConcealedBehindTree
	.globl Route110_TrickHouseEntrance_Text_ConcealedBehindTree
Route110_TrickHouseEntrance_Text_ConcealedBehindTree: @ 0x0823D283
	.string "む むむ…!\pなぜ わがはいが きの うしろに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBehindTree) > 0x2d
	.error "Route110_TrickHouseEntrance_Text_ConcealedBehindTree may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBehindTree) < 0x2d
	.space 0x2d - (. - Route110_TrickHouseEntrance_Text_ConcealedBehindTree)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:706 Route110_TrickHouseEntrance_Text_ConcealedInDresser
	.globl Route110_TrickHouseEntrance_Text_ConcealedInDresser
Route110_TrickHouseEntrance_Text_ConcealedInDresser: @ 0x0823D2B0
	.string "む むむ…!\pなぜ わがはいが タンスの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedInDresser) > 0x2e
	.error "Route110_TrickHouseEntrance_Text_ConcealedInDresser may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedInDresser) < 0x2e
	.space 0x2e - (. - Route110_TrickHouseEntrance_Text_ConcealedInDresser)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:709 Route110_TrickHouseEntrance_Text_ConealedBeyondWindow
	.globl Route110_TrickHouseEntrance_Text_ConealedBeyondWindow
Route110_TrickHouseEntrance_Text_ConealedBeyondWindow: @ 0x0823D2DE
	.string "む むむ…!\pなぜ わがはいが まどの むこうに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConealedBeyondWindow) > 0x2e
	.error "Route110_TrickHouseEntrance_Text_ConealedBeyondWindow may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConealedBeyondWindow) < 0x2e
	.space 0x2e - (. - Route110_TrickHouseEntrance_Text_ConealedBeyondWindow)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:712 Route110_TrickHouseEntrance_Text_ConcealedInPlanter
	.globl Route110_TrickHouseEntrance_Text_ConcealedInPlanter
Route110_TrickHouseEntrance_Text_ConcealedInPlanter: @ 0x0823D30C
	.string "む むむ…!\pなぜ わがはいが うえきばちの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedInPlanter) > 0x30
	.error "Route110_TrickHouseEntrance_Text_ConcealedInPlanter may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedInPlanter) < 0x30
	.space 0x30 - (. - Route110_TrickHouseEntrance_Text_ConcealedInPlanter)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:715 Route110_TrickHouseEntrance_Text_ConcealedInCupboard
	.globl Route110_TrickHouseEntrance_Text_ConcealedInCupboard
Route110_TrickHouseEntrance_Text_ConcealedInCupboard: @ 0x0823D33C
	.string "む むむ…!\pなぜ わがはいが とだなの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedInCupboard) > 0x2e
	.error "Route110_TrickHouseEntrance_Text_ConcealedInCupboard may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedInCupboard) < 0x2e
	.space 0x2e - (. - Route110_TrickHouseEntrance_Text_ConcealedInCupboard)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:718 Route110_TrickHouseEntrance_Text_ConcealedBehindWindow
	.globl Route110_TrickHouseEntrance_Text_ConcealedBehindWindow
Route110_TrickHouseEntrance_Text_ConcealedBehindWindow: @ 0x0823D36A
	.string "む むむ…!\pなぜ わがはいが まどの うらに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBehindWindow) > 0x2d
	.error "Route110_TrickHouseEntrance_Text_ConcealedBehindWindow may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBehindWindow) < 0x2d
	.space 0x2d - (. - Route110_TrickHouseEntrance_Text_ConcealedBehindWindow)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:721 Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion
	.globl Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion
Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion: @ 0x0823D397
	.string "む むむ…!\pなぜ わがはいが ざぶとんの したに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion) > 0x2f
	.error "Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion) < 0x2f
	.space 0x2f - (. - Route110_TrickHouseEntrance_Text_ConcealedBeneathCushion)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:724 Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster
	.globl Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster
Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster: @ 0x0823D3C6
	.string "わがはい こそ!\pホウエンちほう さいだいの\nなぞの じんぶつ\lひと よんで……\pカラクリだいおう!\nわははは! はじめまして!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster) > 0x41
	.error "Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster) < 0x41
	.space 0x41 - (. - Route110_TrickHouseEntrance_Text_TheyCallMeTrickMaster)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:727 Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse
	.globl Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse
Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse: @ 0x0823D407
	.string "あんた わがはいの カラクリやしきに\nちょうせんしに きたって\lわけだろう そうだろう!\lよしっ ちょうせんを みとめよう!\pそこの かけじくから はいって\nちょうせん するがいい!\lわがはいは おくの へやで まってるぞ!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse) > 0x71
	.error "Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse) < 0x71
	.space 0x71 - (. - Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:730 Route110_TrickHouseEntrance_Text_ItsAScroll
	.globl Route110_TrickHouseEntrance_Text_ItsAScroll
Route110_TrickHouseEntrance_Text_ItsAScroll: @ 0x0823D478
	.string "かけじくだ!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ItsAScroll) > 0x7
	.error "Route110_TrickHouseEntrance_Text_ItsAScroll may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ItsAScroll) < 0x7
	.space 0x7 - (. - Route110_TrickHouseEntrance_Text_ItsAScroll)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:733 Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll
	.globl Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll
Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll: @ 0x0823D47F
	.string "かけじくの うらを のぞくと\nおおきい あなが あった!\pおくに すすんで みますか?"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll) > 0x2c
	.error "Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll) < 0x2c
	.space 0x2c - (. - Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:736 Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote
	.globl Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote
Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote: @ 0x0823D4AB
	.string "かけじくの うえに メモが はってある\p「たびに でます…… さがさないでね\nカラクリだいおう」"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote) > 0x31
	.error "Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote) < 0x31
	.space 0x31 - (. - Route110_TrickHouseEntrance_Text_LeavingOnJourneyNote)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:739 Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick
Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick: @ 0x0823D4DC
	.string "さて こんどの しかけは\nあんなことや こんなことを……\pうふふ われながら\nむずかしいぞ… むふふ"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick) != 0x33
	.error "Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick must retain its original byte length"
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:742 Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges
	.globl Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges
Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges: @ 0x0823D50F
	.string "わっ なんだ! あんたか!\pいま まだ つぎの しかけを\nかんがえちゅう なんだよ!\pもっと わがはいに\nかんがえる じかんを\lあたえて くれたって いいだろ!\lもうちょっと したら また きてくれ!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges) > 0x65
	.error "Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges) < 0x65
	.space 0x65 - (. - Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges)
	.endif

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
	.globl gText_Rom_23D255
gText_Rom_23D255: @ 0x0823D255
	.string "む むむ…!\pなぜ わがはいが つくえの したに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D255) > 0x2e
	.error "gText_Rom_23D255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D255) < 0x2e
	.space 0x2e - (. - gText_Rom_23D255)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:703 Route110_TrickHouseEntrance_Text_ConcealedBehindTree
	.globl gText_Rom_23D283
gText_Rom_23D283: @ 0x0823D283
	.string "む むむ…!\pなぜ わがはいが きの うしろに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D283) > 0x2d
	.error "gText_Rom_23D283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D283) < 0x2d
	.space 0x2d - (. - gText_Rom_23D283)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:706 Route110_TrickHouseEntrance_Text_ConcealedInDresser
	.globl gText_Rom_23D2B0
gText_Rom_23D2B0: @ 0x0823D2B0
	.string "む むむ…!\pなぜ わがはいが タンスの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D2B0) > 0x2e
	.error "gText_Rom_23D2B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D2B0) < 0x2e
	.space 0x2e - (. - gText_Rom_23D2B0)
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
	.globl gText_Rom_23D30C
gText_Rom_23D30C: @ 0x0823D30C
	.string "む むむ…!\pなぜ わがはいが うえきばちの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D30C) > 0x30
	.error "gText_Rom_23D30C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D30C) < 0x30
	.space 0x30 - (. - gText_Rom_23D30C)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:715 Route110_TrickHouseEntrance_Text_ConcealedInCupboard
	.globl gText_Rom_23D33C
gText_Rom_23D33C: @ 0x0823D33C
	.string "む むむ…!\pなぜ わがはいが とだなの なかに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D33C) > 0x2e
	.error "gText_Rom_23D33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D33C) < 0x2e
	.space 0x2e - (. - gText_Rom_23D33C)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:718 Route110_TrickHouseEntrance_Text_ConcealedBehindWindow
	.globl gText_Rom_23D36A
gText_Rom_23D36A: @ 0x0823D36A
	.string "む むむ…!\pなぜ わがはいが まどの うらに\nかくれていると わかった? ……できる!"
	.byte EOS
	.if (. - gText_Rom_23D36A) > 0x2d
	.error "gText_Rom_23D36A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D36A) < 0x2d
	.space 0x2d - (. - gText_Rom_23D36A)
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
	.globl gText_Rom_23D3C6
gText_Rom_23D3C6: @ 0x0823D3C6
	.string "わがはい こそ!\pホウエンちほう さいだいの\nなぞの じんぶつ\lひと よんで……\pカラクリだいおう!\nわははは! はじめまして!"
	.byte EOS
	.if (. - gText_Rom_23D3C6) > 0x41
	.error "gText_Rom_23D3C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D3C6) < 0x41
	.space 0x41 - (. - gText_Rom_23D3C6)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:727 Route110_TrickHouseEntrance_Text_ComeToChallengeTrickHouse
	.globl gText_Rom_23D407
gText_Rom_23D407: @ 0x0823D407
	.string "あんた わがはいの カラクリやしきに\nちょうせんしに きたって\lわけだろう そうだろう!\lよしっ ちょうせんを みとめよう!\pそこの かけじくから はいって\nちょうせん するがいい!\lわがはいは おくの へやで まってるぞ!"
	.byte EOS
	.if (. - gText_Rom_23D407) > 0x71
	.error "gText_Rom_23D407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D407) < 0x71
	.space 0x71 - (. - gText_Rom_23D407)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:730 Route110_TrickHouseEntrance_Text_ItsAScroll
	.globl gText_Rom_23D478
gText_Rom_23D478: @ 0x0823D478
	.string "かけじくだ!"
	.byte EOS
	.if (. - gText_Rom_23D478) > 0x7
	.error "gText_Rom_23D478 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D478) < 0x7
	.space 0x7 - (. - gText_Rom_23D478)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:733 Route110_TrickHouseEntrance_Text_GoInHoleBehindScroll
	.globl gText_Rom_23D47F
gText_Rom_23D47F: @ 0x0823D47F
	.string "かけじくの うらを のぞくと\nおおきい あなが あった!\pおくに すすんで みますか?"
	.byte EOS
	.if (. - gText_Rom_23D47F) > 0x2c
	.error "gText_Rom_23D47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D47F) < 0x2c
	.space 0x2c - (. - gText_Rom_23D47F)
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
	.globl gText_Rom_23D50B
	.set gText_Rom_23D50B, Route110_TrickHouseEntrance_Text_NextTimeUseThisTrick + 0x2f
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:742 Route110_TrickHouseEntrance_Text_InMidstOfDevisingNewChallenges
	.globl gText_Rom_23D50F
gText_Rom_23D50F: @ 0x0823D50F
	.string "わっ なんだ! あんたか!\pいま まだ つぎの しかけを\nかんがえちゅう なんだよ!\pもっと わがはいに\nかんがえる じかんを\lあたえて くれたって いいだろ!\lもうちょっと したら また きてくれ!"
	.byte EOS
	.if (. - gText_Rom_23D50F) > 0x65
	.error "gText_Rom_23D50F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23D50F) < 0x65
	.space 0x65 - (. - gText_Rom_23D50F)
	.endif

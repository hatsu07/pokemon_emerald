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
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:745 Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward
	.globl Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward
Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward: @ 0x0823D574
	.string "おお あんた! さては このあいだの\nほうびを とりに きたんだろう そうだろう!\lよしっ いま やろう!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward) > 0x36
	.error "Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward) < 0x36
	.space 0x36 - (. - Route110_TrickHouseEntrance_Text_YoureHereToAcceptReward)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:748 Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward
	.globl Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward
Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward: @ 0x0823D5AA
	.string "あれ? とりに きたんじゃ ないのか?"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward) > 0x14
	.error "Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward) < 0x14
	.space 0x14 - (. - Route110_TrickHouseEntrance_Text_DidYouNotComeToClaimReward)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:751 Route110_TrickHouseEntrance_Text_MechadollWhichTent
	.globl Route110_TrickHouseEntrance_Text_MechadollWhichTent
Route110_TrickHouseEntrance_Text_MechadollWhichTent: @ 0x0823D5BE
	.string "ワガハイ ハ からくりニンギョウ 5ゴウ!\nぷれぜんとヲ ウケトッテ クレナイト\lダイオウノ アトヲ オッテ イケナイヨ!\p「アカイてんと」ト「アオイてんと」\nフタツノ ウチ ドチラガ ホシイ?"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_MechadollWhichTent) > 0x62
	.error "Route110_TrickHouseEntrance_Text_MechadollWhichTent may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_MechadollWhichTent) < 0x62
	.space 0x62 - (. - Route110_TrickHouseEntrance_Text_MechadollWhichTent)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:754 Route110_TrickHouseEntrance_Text_ThenFarewell
	.globl Route110_TrickHouseEntrance_Text_ThenFarewell
Route110_TrickHouseEntrance_Text_ThenFarewell: @ 0x0823D620
	.string "ソレデハ さらば!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_ThenFarewell) > 0xa
	.error "Route110_TrickHouseEntrance_Text_ThenFarewell may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_ThenFarewell) < 0xa
	.space 0xa - (. - Route110_TrickHouseEntrance_Text_ThenFarewell)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:757 Route110_TrickHouseEntrance_Text_PCFullAgain
	.globl Route110_TrickHouseEntrance_Text_PCFullAgain
Route110_TrickHouseEntrance_Text_PCFullAgain: @ 0x0823D62A
	.string "エッ! マタ ぱそこんガ\nイッパイ ダッテ……? アンマリダ!"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_PCFullAgain) > 0x20
	.error "Route110_TrickHouseEntrance_Text_PCFullAgain may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_PCFullAgain) < 0x20
	.space 0x20 - (. - Route110_TrickHouseEntrance_Text_PCFullAgain)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:760 Route110_TrickHousePuzzle_Text_FoundAScroll
	.globl Route110_TrickHousePuzzle_Text_FoundAScroll
Route110_TrickHousePuzzle_Text_FoundAScroll: @ 0x0823D64A
	.string "{PLAYER}は まきものを みつけた!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle_Text_FoundAScroll) > 0x10
	.error "Route110_TrickHousePuzzle_Text_FoundAScroll may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle_Text_FoundAScroll) < 0x10
	.space 0x10 - (. - Route110_TrickHousePuzzle_Text_FoundAScroll)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:763 Route110_TrickHousePuzzle_Text_MemorizedSecretCode
	.globl Route110_TrickHousePuzzle_Text_MemorizedSecretCode
Route110_TrickHousePuzzle_Text_MemorizedSecretCode: @ 0x0823D65A
	.string "{PLAYER}は まきものに かいてある\nあいことばを おぼえた!"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle_Text_MemorizedSecretCode) > 0x1d
	.error "Route110_TrickHousePuzzle_Text_MemorizedSecretCode may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle_Text_MemorizedSecretCode) < 0x1d
	.space 0x1d - (. - Route110_TrickHousePuzzle_Text_MemorizedSecretCode)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:766 Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt
	.globl Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt
Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt: @ 0x0823D677
	.string "あいことばが かいてある"
	.byte EOS
	.if (. - Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt) > 0xd
	.error "Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt) < 0xd
	.space 0xd - (. - Route110_TrickHousePuzzle_Text_SecretCodeWrittenOnIt)
	.endif
	@ data/maps/Route110_TrickHouseEntrance/scripts.inc:769 Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere
	.globl Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere
Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere: @ 0x0823D684
	.string "とびらには カギが かかっている!\p……よくみると とびらに もじが かいてある\n「ここに あいことばを かきつけよ」"
	.byte EOS
	.if (. - Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere) > 0x3c
	.error "Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere may not grow beyond its original slot"
	.endif
	.if (. - Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere) < 0x3c
	.space 0x3c - (. - Route110_TrickHouseEntrance_Text_DoorLockedWriteSecretCodeHere)
	.endif
	@ Embedded ROM bytes: file offset 0x23D6C0, size 0x3DE
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x05, 0xD5, 0xD6, 0x23, 0x08, 0x03, 0xE1, 0xD6, 0x23, 0x08, 0x02, 0x06, 0xD7, 0x23, 0x08, 0x04
	.byte 0xEF, 0xD6, 0x23, 0x08, 0x00, 0x21, 0x01, 0x40, 0x01, 0x00, 0x07, 0x01, 0x1E, 0xD7, 0x23, 0x08
	.byte 0x02, 0x16, 0x01, 0x40, 0x00, 0x00, 0x16, 0x02, 0x40, 0x00, 0x00, 0x25, 0x05, 0x01, 0x02, 0x02
	.byte 0x40, 0x00, 0x00, 0xF9, 0xD6, 0x23, 0x08, 0x00, 0x00, 0x55, 0x01, 0x00, 0x58, 0x01, 0x00, 0x1D
	.byte 0x01, 0x5B, 0x01, 0x00, 0x04, 0x02, 0x01, 0x40, 0x00, 0x00, 0x10, 0xD7, 0x23, 0x08, 0x00, 0x00
	.byte 0x16, 0x01, 0x40, 0x01, 0x00, 0x04, 0x1E, 0xD7, 0x23, 0x08, 0x25, 0x8E, 0x00, 0x02, 0xA2, 0x0A
	.byte 0x00, 0x01, 0x00, 0x1B, 0x02, 0x01, 0x00, 0x03, 0x6A, 0x5A, 0x0F, 0x00, 0x9E, 0xDA, 0x23, 0x08
	.byte 0x09, 0x04, 0x16, 0x02, 0x40, 0x01, 0x00, 0x19, 0x00, 0x80, 0x44, 0x40, 0x21, 0x00, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0x95, 0xD7, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xD1, 0xD7
	.byte 0x23, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x0D, 0xD8, 0x23, 0x08, 0x21, 0x00, 0x80
	.byte 0x03, 0x00, 0x06, 0x01, 0x49, 0xD8, 0x23, 0x08, 0x21, 0x00, 0x80, 0x04, 0x00, 0x06, 0x01, 0x85
	.byte 0xD8, 0x23, 0x08, 0x21, 0x00, 0x80, 0x05, 0x00, 0x06, 0x01, 0xC1, 0xD8, 0x23, 0x08, 0x21, 0x00
	.byte 0x80, 0x06, 0x00, 0x06, 0x01, 0xFD, 0xD8, 0x23, 0x08, 0x21, 0x00, 0x80, 0x07, 0x00, 0x06, 0x01
	.byte 0x39, 0xD9, 0x23, 0x08, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightToPlantTrees @ ROM pointer 0x0823DABE
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0x44, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightToMakeMaze @ ROM pointer 0x0823DAF5
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0x0A, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightToPreparePanels @ ROM pointer 0x0823DB2B
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0xCC, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightToShoveBoulders @ ROM pointer 0x0823DB5E
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0xC2, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightToMakeMechadolls @ ROM pointer 0x0823DB8D
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0x2C, 0x01, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightToInstallDoors @ ROM pointer 0x0823DBC8
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0xD0, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightSettingUpArrows @ ROM pointer 0x0823DBEF
	.byte 0x09, 0x04, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_YouHaveEarnedThisReward @ ROM pointer 0x0823DDE3
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x1A, 0x00, 0x80, 0x47, 0x00, 0x1A, 0x01, 0x80, 0x01
	.byte 0x00, 0x09, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x00, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_MakeNewTricksToStumpYou @ ROM pointer 0x0823DE39
	.byte 0x09, 0x04, 0x68, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x6C, 0x02, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_AllNightPolishingFloors @ ROM pointer 0x0823DC16
	.byte 0x09, 0x04, 0x68, 0x21, 0x0C, 0x80, 0x01, 0x00, 0x07, 0x01, 0x26, 0xDA, 0x23, 0x08, 0x21, 0x0C
	.byte 0x80, 0x02, 0x00, 0x07, 0x01, 0x31, 0xDA, 0x23, 0x08, 0x21, 0x0C, 0x80, 0x03, 0x00, 0x07, 0x01
	.byte 0x3C, 0xDA, 0x23, 0x08, 0x21, 0x0C, 0x80, 0x04, 0x00, 0x07, 0x01, 0x47, 0xDA, 0x23, 0x08, 0x28
	.byte 0x1E, 0x00, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_FountainOfIdeasRunDry @ ROM pointer 0x0823DC3B
	.byte 0x09, 0x04, 0x68, 0x4F, 0x01, 0x00, 0x21, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x1E, 0x00
	.byte 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_DefeatedMePreferWhichTent
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x00, 0x00, 0x04, 0xB6, 0xD9
	.byte 0x23, 0x08, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x07, 0x01, 0x13, 0xDA, 0x23, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_LeavingOnJourney
	.byte 0x09, 0x04, 0x04, 0xE0, 0xD9, 0x23, 0x08, 0x25, 0x04, 0x01, 0x6C, 0x02, 0x6F
	.byte 0x00, 0x00, 0x58, 0x01, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01
	.byte 0xD0, 0xD9, 0x23, 0x08, 0x05, 0xD8, 0xD9, 0x23, 0x08, 0x1A, 0x00, 0x80, 0x1F, 0x00, 0x09, 0x07
	.byte 0x03, 0x1A, 0x00, 0x80, 0x20, 0x00, 0x09, 0x07, 0x03, 0x4F, 0x01, 0x00, 0x07, 0xCC, 0x23, 0x08
	.byte 0x51, 0x00, 0x00, 0x2F, 0xB2, 0x00, 0x4F, 0x01, 0x00, 0x10, 0xCC, 0x23, 0x08, 0x51, 0x00, 0x00
	.byte 0x53, 0x01, 0x00, 0x17, 0x44, 0x40, 0x01, 0x00, 0x03, 0x04, 0xEA, 0x30, 0x24, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_NoRoomForThis @ ROM pointer 0x0823DDF6
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x01, 0x00, 0x03, 0x04, 0xFD, 0x30, 0x24, 0x08, 0x0F, 0x00
	.4byte Route110_TrickHouseEnd_Text_NoRoomInPC
	.byte 0x09, 0x04, 0x16, 0xC1, 0x40, 0x01, 0x00, 0x03, 0x4F, 0x01, 0x00, 0x2D, 0x36
	.byte 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x01, 0x00, 0x29, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00
	.byte 0x03, 0x4F, 0x01, 0x00, 0x27, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x01, 0x00, 0x2B
	.byte 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x03, 0x69, 0x5B, 0x01, 0x00, 0x03, 0x2F, 0x15, 0x00, 0x4F
	.byte 0x01, 0x00, 0x1B, 0x36, 0x24, 0x08, 0x51, 0x00, 0x00, 0x28, 0x14, 0x00, 0x4F, 0x01, 0x00, 0x9C
	.byte 0xDA, 0x23, 0x08, 0x51, 0x00, 0x00, 0x2F, 0xB2, 0x00, 0x4F, 0xFF, 0x00, 0x2D, 0x36, 0x24, 0x08
	.byte 0x51, 0x00, 0x00, 0x0F, 0x00, 0xA4, 0xDE, 0x23, 0x08, 0x09, 0x04, 0x68, 0x4F, 0xFF, 0x00, 0x9A
	.byte 0xDA, 0x23, 0x08, 0x51, 0x00, 0x00, 0x28, 0x04, 0x00, 0x5B, 0x01, 0x00, 0x04, 0x6B, 0x02, 0x08
	.byte 0xFE, 0x48, 0xFE

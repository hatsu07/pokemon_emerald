	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:529 BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid
	.globl BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid
BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid: @ 0x0822C4F8
	.string "トレーナーの ゆうきを ためす ばしょ!\nバトルピラミッドへ ようこそ!\pこちらでは バトルアドベンチャーの\nごあんないを しておりますぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid) > 0x47
	.error "BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid) < 0x47
	.space 0x47 - (. - BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:532 BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
	.globl BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge: @ 0x0822C53F
	.string "バトルアドベンチャーに\nちょうせん されますかな?{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge) > 0x1a
	.error "BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22C559
gText_Rom_22C559: @ 0x0822C559
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_22C559) > 0x18
	.error "gText_Rom_22C559 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C559) < 0x18
	.space 0x18 - (. - gText_Rom_22C559)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:538 BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid
	.globl BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid
BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid: @ 0x0822C571
	.string "バトルアドベンチャーは\nピラミッドの なかへ はいり\lちょうじょう せいはを めざす\lぼうけん イベント ですぞ!\pピラミッドの なかは\n7だんの めいろで わかれていて\lうでに おぼえの ある トレーナーと\lやせい ポケモンが まって いますぞ!\pどうぐを もたせて いない\n3ひきの ポケモンと\lおわたしする バトルバッグを もって\lちょうじょうを めざして いただきますぞ!\pこの バトルバッグに いれた どうぐは\nぼうけんに しっぱいすると\lなくなって しまいますので\lおきをつけ くだされ!\pまた ぼうけんを ちゅうだん するときは\n「やすむ」を えらんで おわらせないと\lぼうけんは ちゅうしと なってしまいます!\lじゅうぶん おきをつけ くだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid) > 0x14c
	.error "BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid) < 0x14c
	.space 0x14c - (. - BattleFrontier_BattlePyramidLobby_Text_ExplainBattlePyramid)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:541 BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
	.globl BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode: @ 0x0822C6BD
	.string "ピラミッドには\nレベル50と オープンレベルと ありますが\lどちらに はいられますかな?{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode) > 0x2d
	.error "BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode) < 0x2d
	.space 0x2d - (. - BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:544 BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons
	.globl BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons
BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons: @ 0x0822C6EA
	.string "では つれていく ポケモンを\n3ひき おえらび くだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons) > 0x1e
	.error "BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons)
	.endif
	@ field-script:0x22C066 FieldScriptText_22C708
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22C708
gText_Rom_22C708: @ 0x0822C708
	.string "ぼうけんしゃよ！！\pつれていける　ポケモンが\n3ひき　いないようですぞ！\pまた　ポケモンに　もたせている　どうぐは\nすべて　はずしてくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませんぞ！\pじゅんびが　できましたら\nまた　おこし　くだされ！{EOS}"
	.if (. - gText_Rom_22C708) != 0x7e
	.error "gText_Rom_22C708 must retain its original byte length"
	.endif
	@ field-script:0x22C059 FieldScriptText_22C786
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22C786
gText_Rom_22C786: @ 0x0822C786
	.string "ぼうけんしゃよ！！\pつれていける　ポケモンが\n3ひき　いないようですぞ！\pつれていく　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　ポケモンに　もたせている　どうぐは\nすべて　はずしてくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませんぞ！\pじゅんびが　できましたら\nまた　おこし　くだされ！{EOS}"
	.if (. - gText_Rom_22C786) != 0xb8
	.error "gText_Rom_22C786 must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:556 BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge
	.globl BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge
BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge: @ 0x0822C83E
	.string "バトルピラミッドへ はいる まえに\nレポートを かきますが よろしいですかな?{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge) > 0x28
	.error "BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge) < 0x28
	.space 0x28 - (. - BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:559 BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid
	.globl BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid
BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid: @ 0x0822C866
	.string "では バトルピラミッドの なかへ\nおつれいたしますぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid) > 0x1c
	.error "BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:562 BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping
	.globl BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping
BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping: @ 0x0822C882
	.string "{PLAYER}さんの もっている バッグは\nこちらで あずからせて いただきますぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping) > 0x26
	.error "BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping) < 0x26
	.space 0x26 - (. - BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:565 BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag
	.globl BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag
BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag: @ 0x0822C8A8
	.string "かわりに ぜんかい おつかいになった\nこの バトルバッグを おもちくだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag) > 0x27
	.error "BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag) < 0x27
	.space 0x27 - (. - BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:568 BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag
	.globl BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag
BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag: @ 0x0822C8CF
	.string "かわりに こちらの\nバトルバッグを おもちくだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag) > 0x1b
	.error "BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag) < 0x1b
	.space 0x1b - (. - BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:571 BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
	.globl BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag: @ 0x0822C8EA
	.string "{PLAYER}は バッグを あずけて\nバトルバッグを うけとった!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag) > 0x1d
	.error "BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:574 BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel
	.globl BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel
BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel: @ 0x0822C907
	.string "こちらにある ゆかを ふんで いただくと\nピラミッドの うえの だんへと\lすすむことが できますぞ!\pぶじ ぼうけんが すすむことを\nいのって おりますぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel) > 0x4f
	.error "BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel) < 0x4f
	.space 0x4f - (. - BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:577 BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
	.globl BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag: @ 0x0822C956
	.string "ぼうけんしゃよ!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが この ばあい\nちょうせんは むこうと なりますぞ!\pおあずかり していた\nバッグは おかえし いたしますぞ!\p{PLAYER}は\nバッグを うけとった!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag) > 0x78
	.error "BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag) < 0x78
	.space 0x78 - (. - BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:580 BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid
	.globl BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid
BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid: @ 0x0822C9CE
	.string "おかえりなさいませ!\pみごとに バトルピラミッドを\nせいは されましたな!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid) > 0x26
	.error "BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid) < 0x26
	.space 0x26 - (. - BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:583 BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake
	.globl BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake
BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake: @ 0x0822C9F4
	.string "おおっ!\pポケモンに\nどうぐを もたせていますな……\pもうしわけ ありませんが\nピラミッドで てにいれた どうぐは\lもっていくことが できませんぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake) > 0x4b
	.error "BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake) < 0x4b
	.space 0x4b - (. - BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:586 BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag
	.globl BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag
BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag: @ 0x0822CA3F
	.string "もたせている どうぐは\nすべて {PLAYER}さんの バトルバッグに\lいれておきますぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag) > 0x28
	.error "BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag) < 0x28
	.space 0x28 - (. - BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:589 BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
	.globl BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep: @ 0x0822CA67
	.string "バトルバッグには\nすべて はいらない ようなので\lバトルバッグと もたせたどうぐを\lせいりして くだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep) > 0x36
	.error "BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep) < 0x36
	.space 0x36 - (. - BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:592 BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem
	.globl BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem
BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem: @ 0x0822CA9D
	.string "ポケモンに\nまだ どうぐを もたせていますぞ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem) > 0x18
	.error "BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem) < 0x18
	.space 0x18 - (. - BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:595 BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
	.globl BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep: @ 0x0822CAB5
	.string "バトルバッグと もたせたどうぐを\nせいりして くだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep) > 0x1d
	.error "BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:599 BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld
	.globl BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld
BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld: @ 0x0822CAD2
	.string "{PLAYER}は ポケモンに もたせている\nどうぐを かえした!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld) > 0x1c
	.error "BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:602 BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
	.globl BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept: @ 0x0822CAEE
	.string "おつかいになられた バトルバッグは\nじかいの ちょうせんまで\lおあずかり いたしますぞ!\p{PLAYER}は バトルバッグを あずけて\nバッグを うけとった!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept) > 0x4a
	.error "BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept) < 0x4a
	.space 0x4a - (. - BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:451 BattleFrontier_BattleArenaLobby_Text_RecordAchievement (+1 aliases)
	.globl gText_Rom_22CB38
gText_Rom_22CB38: @ 0x0822CB38
	.string "せいせきを レポートに かきますので\nおまちくだされ!{EOS}"
	.if (. - gText_Rom_22CB38) > 0x1c
	.error "gText_Rom_22CB38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB38) < 0x1c
	.space 0x1c - (. - gText_Rom_22CB38)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:609 BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis
	.globl BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis
BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis: @ 0x0822CB54
	.string "バトルピラミッド せいはの きねんとして\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis) > 0x2b
	.error "BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis) < 0x2b
	.space 0x2b - (. - BattleFrontier_BattlePyramidLobby_Text_ForConqueringPyramidTakeThis)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22CB7F
gText_Rom_22CB7F: @ 0x0822CB7F
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_22CB7F) > 0xe
	.error "gText_Rom_22CB7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB7F) < 0xe
	.space 0xe - (. - gText_Rom_22CB7F)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:617 BattleFrontier_BattlePyramidLobby_Text_BagIsFull
	.globl BattleFrontier_BattlePyramidLobby_Text_BagIsFull
BattleFrontier_BattlePyramidLobby_Text_BagIsFull: @ 0x0822CB8D
	.string "……ほう!\nどうぐが いっぱいの ようですな\pどうぐを せいりしてから\nまた おこしくだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_BagIsFull) > 0x30
	.error "BattleFrontier_BattlePyramidLobby_Text_BagIsFull may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_BagIsFull) < 0x30
	.space 0x30 - (. - BattleFrontier_BattlePyramidLobby_Text_BagIsFull)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:620 BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
	.globl BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag: @ 0x0822CBBD
	.string "ざんねんでしたな……\pおあずかりしていた\nバッグは おかえし いたしますぞ!\p{PLAYER}は\nバッグを うけとった!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag) > 0x37
	.error "BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag) < 0x37
	.space 0x37 - (. - BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_22CBF4
gText_Rom_22CBF4: @ 0x0822CBF4
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_22CBF4) > 0x18
	.error "gText_Rom_22CBF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CBF4) < 0x18
	.space 0x18 - (. - gText_Rom_22CBF4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:627 BattleFrontier_BattlePyramidLobby_Text_HereIsPrize
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePyramidLobby_Text_HereIsPrize
BattleFrontier_BattlePyramidLobby_Text_HereIsPrize: @ 0x0822CC0C
	.string "おまちしておりましたぞ!\pバトルピラミッド せいはの きねんとして\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HereIsPrize) != 0x38
	.error "BattleFrontier_BattlePyramidLobby_Text_HereIsPrize must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:630 BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait
	.globl BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait
BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait: @ 0x0822CC44
	.string "ようこそ……\pピラミッドで おこる わざわいを\nうらなって さしあげましょう……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait) > 0x29
	.error "BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait) < 0x29
	.space 0x29 - (. - BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:633 BattleFrontier_BattlePyramidLobby_Text_Aah
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_BattlePyramidLobby_Text_Aah
BattleFrontier_BattlePyramidLobby_Text_Aah: @ 0x0822CC6D
	.string "………………………………………………………\n………………………………………………………\p……っああっ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_Aah) != 0x34
	.error "BattleFrontier_BattlePyramidLobby_Text_Aah must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:636 BattleFrontier_BattlePyramidLobby_Text_HintParalysis
	.globl BattleFrontier_BattlePyramidLobby_Text_HintParalysis
BattleFrontier_BattlePyramidLobby_Text_HintParalysis: @ 0x0822CCA1
	.string "でんきが とびちっています……\p……そして\nまひにより おもうように うごけない\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintParalysis) > 0x3b
	.error "BattleFrontier_BattlePyramidLobby_Text_HintParalysis may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintParalysis) < 0x3b
	.space 0x3b - (. - BattleFrontier_BattlePyramidLobby_Text_HintParalysis)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:639 BattleFrontier_BattlePyramidLobby_Text_HintPoison
	.globl BattleFrontier_BattlePyramidLobby_Text_HintPoison
BattleFrontier_BattlePyramidLobby_Text_HintPoison: @ 0x0822CCDC
	.string "どくが みえます……\p……そして\nどくに おかされ くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintPoison) > 0x31
	.error "BattleFrontier_BattlePyramidLobby_Text_HintPoison may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintPoison) < 0x31
	.space 0x31 - (. - BattleFrontier_BattlePyramidLobby_Text_HintPoison)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:642 BattleFrontier_BattlePyramidLobby_Text_HintBurn
	.globl BattleFrontier_BattlePyramidLobby_Text_HintBurn
BattleFrontier_BattlePyramidLobby_Text_HintBurn: @ 0x0822CD0D
	.string "まっかな ほのおが みえます……\p……そして\nやけどを おって くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintBurn) > 0x37
	.error "BattleFrontier_BattlePyramidLobby_Text_HintBurn may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintBurn) < 0x37
	.space 0x37 - (. - BattleFrontier_BattlePyramidLobby_Text_HintBurn)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:645 BattleFrontier_BattlePyramidLobby_Text_HintPPWaste
	.globl BattleFrontier_BattlePyramidLobby_Text_HintPPWaste
BattleFrontier_BattlePyramidLobby_Text_HintPPWaste: @ 0x0822CD44
	.string "すさまじい プレッシャーと おんねん……\nうらみの ちからが みえます……\pそして……\nパワーポイントが なくなり\lわるあがきを する\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintPPWaste) > 0x56
	.error "BattleFrontier_BattlePyramidLobby_Text_HintPPWaste may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintPPWaste) < 0x56
	.space 0x56 - (. - BattleFrontier_BattlePyramidLobby_Text_HintPPWaste)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:648 BattleFrontier_BattlePyramidLobby_Text_HintLevitate
	.globl BattleFrontier_BattlePyramidLobby_Text_HintLevitate
BattleFrontier_BattlePyramidLobby_Text_HintLevitate: @ 0x0822CD9A
	.string "ゆるやかに ふゆうする\nポケモンたちが みえます……\p……そして\nじめんの わざを つかえずに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintLevitate) > 0x47
	.error "BattleFrontier_BattlePyramidLobby_Text_HintLevitate may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintLevitate) < 0x47
	.space 0x47 - (. - BattleFrontier_BattlePyramidLobby_Text_HintLevitate)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:651 BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility
	.globl BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility
BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility: @ 0x0822CDE1
	.string "あしもとから わきおこる\nつよい ちからが みえます……\p……そして\nにげようとしても にげられない\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility) > 0x45
	.error "BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility) < 0x45
	.space 0x45 - (. - BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:654 BattleFrontier_BattlePyramidLobby_Text_HintIce
	.globl BattleFrontier_BattlePyramidLobby_Text_HintIce
BattleFrontier_BattlePyramidLobby_Text_HintIce: @ 0x0822CE26
	.string "こおりタイプの\nポケモンたちが みえます……\p……そして\nこおりの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintIce) > 0x3d
	.error "BattleFrontier_BattlePyramidLobby_Text_HintIce may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintIce) < 0x3d
	.space 0x3d - (. - BattleFrontier_BattlePyramidLobby_Text_HintIce)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:657 BattleFrontier_BattlePyramidLobby_Text_HintExplosion
	.globl BattleFrontier_BattlePyramidLobby_Text_HintExplosion
BattleFrontier_BattlePyramidLobby_Text_HintExplosion: @ 0x0822CE63
	.string "いのちを かけて\nくりだされる わざが みえます……\p……そして\nわざを うけて たおれていく\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintExplosion) > 0x42
	.error "BattleFrontier_BattlePyramidLobby_Text_HintExplosion may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintExplosion) < 0x42
	.space 0x42 - (. - BattleFrontier_BattlePyramidLobby_Text_HintExplosion)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:660 BattleFrontier_BattlePyramidLobby_Text_HintPsychic
	.globl BattleFrontier_BattlePyramidLobby_Text_HintPsychic
BattleFrontier_BattlePyramidLobby_Text_HintPsychic: @ 0x0822CEA5
	.string "エスパータイプの\nポケモンたちが みえます……\p……そして\nエスパーの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintPsychic) > 0x3f
	.error "BattleFrontier_BattlePyramidLobby_Text_HintPsychic may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintPsychic) < 0x3f
	.space 0x3f - (. - BattleFrontier_BattlePyramidLobby_Text_HintPsychic)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:663 BattleFrontier_BattlePyramidLobby_Text_HintRock
	.globl BattleFrontier_BattlePyramidLobby_Text_HintRock
BattleFrontier_BattlePyramidLobby_Text_HintRock: @ 0x0822CEE4
	.string "いわタイプの\nポケモンたちが みえます……\p……そして\nいわの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintRock) > 0x3b
	.error "BattleFrontier_BattlePyramidLobby_Text_HintRock may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintRock) < 0x3b
	.space 0x3b - (. - BattleFrontier_BattlePyramidLobby_Text_HintRock)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:666 BattleFrontier_BattlePyramidLobby_Text_HintFighting
	.globl BattleFrontier_BattlePyramidLobby_Text_HintFighting
BattleFrontier_BattlePyramidLobby_Text_HintFighting: @ 0x0822CF1F
	.string "かくとうタイプの\nポケモンたちが みえます……\p……そして\nかくとうの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintFighting) > 0x3f
	.error "BattleFrontier_BattlePyramidLobby_Text_HintFighting may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintFighting) < 0x3f
	.space 0x3f - (. - BattleFrontier_BattlePyramidLobby_Text_HintFighting)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:669 BattleFrontier_BattlePyramidLobby_Text_HintWeather
	.globl BattleFrontier_BattlePyramidLobby_Text_HintWeather
BattleFrontier_BattlePyramidLobby_Text_HintWeather: @ 0x0822CF5E
	.string "あまごい…… にほんばれ……\nすなあらし…… あられ……\pてんこうの へんかで つよくなる\nポケモンたちが みえます\p……そして\nさまざまな タイプに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintWeather) > 0x63
	.error "BattleFrontier_BattlePyramidLobby_Text_HintWeather may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintWeather) < 0x63
	.space 0x63 - (. - BattleFrontier_BattlePyramidLobby_Text_HintWeather)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:672 BattleFrontier_BattlePyramidLobby_Text_HintBug
	.globl BattleFrontier_BattlePyramidLobby_Text_HintBug
BattleFrontier_BattlePyramidLobby_Text_HintBug: @ 0x0822CFC1
	.string "むしタイプの\nポケモンたちが みえます……\p……そして\nさまざまな こうげきで くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintBug) > 0x3f
	.error "BattleFrontier_BattlePyramidLobby_Text_HintBug may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintBug) < 0x3f
	.space 0x3f - (. - BattleFrontier_BattlePyramidLobby_Text_HintBug)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:675 BattleFrontier_BattlePyramidLobby_Text_HintDark
	.globl BattleFrontier_BattlePyramidLobby_Text_HintDark
BattleFrontier_BattlePyramidLobby_Text_HintDark: @ 0x0822D000
	.string "あく タイプの\nポケモンたちが みえます……\p……そして\nあくの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintDark) > 0x3c
	.error "BattleFrontier_BattlePyramidLobby_Text_HintDark may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintDark) < 0x3c
	.space 0x3c - (. - BattleFrontier_BattlePyramidLobby_Text_HintDark)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:678 BattleFrontier_BattlePyramidLobby_Text_HintWater
	.globl BattleFrontier_BattlePyramidLobby_Text_HintWater
BattleFrontier_BattlePyramidLobby_Text_HintWater: @ 0x0822D03C
	.string "みずタイプの\nポケモンたちが みえます……\p……そして\nみずの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintWater) > 0x3b
	.error "BattleFrontier_BattlePyramidLobby_Text_HintWater may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintWater) < 0x3b
	.space 0x3b - (. - BattleFrontier_BattlePyramidLobby_Text_HintWater)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:681 BattleFrontier_BattlePyramidLobby_Text_HintGhost
	.globl BattleFrontier_BattlePyramidLobby_Text_HintGhost
BattleFrontier_BattlePyramidLobby_Text_HintGhost: @ 0x0822D077
	.string "ゴーストタイプの\nポケモンたちが みえます……\p……そして\nゴーストの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintGhost) > 0x3f
	.error "BattleFrontier_BattlePyramidLobby_Text_HintGhost may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintGhost) < 0x3f
	.space 0x3f - (. - BattleFrontier_BattlePyramidLobby_Text_HintGhost)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:684 BattleFrontier_BattlePyramidLobby_Text_HintSteel
	.globl BattleFrontier_BattlePyramidLobby_Text_HintSteel
BattleFrontier_BattlePyramidLobby_Text_HintSteel: @ 0x0822D0B6
	.string "はがねタイプの\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintSteel) > 0x3f
	.error "BattleFrontier_BattlePyramidLobby_Text_HintSteel may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintSteel) < 0x3f
	.space 0x3f - (. - BattleFrontier_BattlePyramidLobby_Text_HintSteel)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:687 BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon
	.globl BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon
BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon: @ 0x0822D0F5
	.string "そらをとぶ\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon) > 0x3d
	.error "BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon) < 0x3d
	.space 0x3d - (. - BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:690 BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve
	.globl BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve
BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve: @ 0x0822D132
	.string "いしの ちからにより\nしんかした ものたちが みえます……\p……そして\nほのお…… みず…… でんき……\p3つの ちからに くるしむ\nあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve) > 0x55
	.error "BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve) < 0x55
	.space 0x55 - (. - BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:693 BattleFrontier_BattlePyramidLobby_Text_HintNormal
	.globl BattleFrontier_BattlePyramidLobby_Text_HintNormal
BattleFrontier_BattlePyramidLobby_Text_HintNormal: @ 0x0822D187
	.string "ノーマルタイプの\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintNormal) > 0x40
	.error "BattleFrontier_BattlePyramidLobby_Text_HintNormal may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_HintNormal) < 0x40
	.space 0x40 - (. - BattleFrontier_BattlePyramidLobby_Text_HintNormal)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:696 BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot
	.globl BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot
BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot: @ 0x0822D1C7
	.string "うらないを しんじるも しんじないも\nあなた しだい……\pみらいは いつでも かえられます……\nどうぞ ごぶじで……{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot) > 0x3b
	.error "BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot) < 0x3b
	.space 0x3b - (. - BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:699 BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning
	.globl BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning
BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning: @ 0x0822D202
	.string "あなた しってた?\pはやく はしると\nトレーナーが あしおとに きづいて\lしょうぶを しかけて くるの!\pだから トレーナーと\nめを あわせたくない ときは\lトレーナーの ようすを みながら\lゆっくり あるいた ほうが いいのよ!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning) > 0x74
	.error "BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning) < 0x74
	.space 0x74 - (. - BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:702 BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems
	.globl BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems
BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems: @ 0x0822D276
	.string "うおおおおーーーーーーん!\pどうぐを いっぱい もってたのに\nまけたら ぜんぶ なくなっちゃった……\pうおおおおーーーーーーん!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems) > 0x41
	.error "BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems) < 0x41
	.space 0x41 - (. - BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:705 BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing
	.globl BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing
BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing: @ 0x0822D2B7
	.string "おかえりなさいませ!\pピラミッドキングを たおし\nみごと バトルピラミッドを\lせいは されましたな!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing) > 0x33
	.error "BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing) < 0x33
	.space 0x33 - (. - BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:708 BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints
	.globl BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints
BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints: @ 0x0822D2EA
	.string "ぼうけんしゃよ!\nあなたの あつい ゆうきを たたえ\lバトルポイントを おおくり しましょう!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints) > 0x30
	.error "BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints) < 0x30
	.space 0x30 - (. - BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:711 BattleFrontier_BattlePyramidLobby_Text_RulesAreListed
	.globl BattleFrontier_BattlePyramidLobby_Text_RulesAreListed
BattleFrontier_BattlePyramidLobby_Text_RulesAreListed: @ 0x0822D31A
	.string "バトルアドベンチャーの\nルールが かかれている!{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_RulesAreListed) > 0x19
	.error "BattleFrontier_BattlePyramidLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_RulesAreListed) < 0x19
	.space 0x19 - (. - BattleFrontier_BattlePyramidLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_22D333
gText_Rom_22D333: @ 0x0822D333
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - gText_Rom_22D333) > 0x10
	.error "gText_Rom_22D333 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D333) < 0x10
	.space 0x10 - (. - gText_Rom_22D333)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:717 BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules
	.globl BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules
BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules: @ 0x0822D343
	.string "ピラミッドの なかで でてくる\nやせい ポケモンは\lピラミッドを せいはすると かわります\pどんな ポケモンが でてくるのかは\nじっさいに ぼうけんして おぼえましょう{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules) > 0x55
	.error "BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules) < 0x55
	.space 0x55 - (. - BattleFrontier_BattlePyramidLobby_Text_ExplainMonRules)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:720 BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules
	.globl BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules
BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules: @ 0x0822D398
	.string "ピラミッドの なかには\nトレーナーが まちかまえて います\p1つの だんには さいこうで\n8にんの トレーナーが います\pまた トレーナーに かつと\nちょっと ぼうけんに やくだつ\lヒントが もらえます{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules) > 0x66
	.error "BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules) < 0x66
	.space 0x66 - (. - BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:723 BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules
	.globl BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules
BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules: @ 0x0822D3FE
	.string "ピラミッドの めいろは\nはいる たびに かわります\pなかは とても くらく なっているので\nしんちょうに すすみましょう\pまた やせいポケモンや トレーナーとの\nたたかいに かつと\lちょっとだけ まわりが あかるくなります{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules) > 0x70
	.error "BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules) < 0x70
	.space 0x70 - (. - BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:726 BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules
	.globl BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules
BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules: @ 0x0822D46E
	.string "バトルバッグは ピラミッドに いる あいだ\nつかうことが できます\pレベル50と オープンレベルの\nバッグが それぞれ ようい されていて\l10しゅるいの どうぐを\l99こ まで いれることが できます\pまた バッグの なかみは ぼうけんに\nしっぱい すると なくなって しまいます{EOS}"
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules) > 0x8e
	.error "BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules) < 0x8e
	.space 0x8e - (. - BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules)
	.endif
	@ analyzed canonical ROM range 0x0822D4FC-0x0822D6B0
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattlePyramidFloor_OnResume_OnFrame_OnTransition: @ 0x0822D4FC
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_0822D56B
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePyramidFloor_OnFrame
	.byte 0x03
	.4byte EventScript_JP_0822D693
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattlePyramidFloor_OnFrame: @ 0x0822D50C
	@ conditional map script table
	.2byte 0x400D, 0x0001
	.4byte EventScript_JP_0822D526
	.2byte 0x400E, 0x0000
	.4byte EventScript_JP_0822D561
	.2byte 0x400F, 0x0001
	.4byte EventScript_JP_0822D558
	.2byte 0
EventScript_JP_0822D526: @ 0x0822D526
	lockall
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0004
	setvar 0x8006, 0x0001
	setvar 0x8007, 0x0037
	setvar 0x800D, 0x0000
EventScript_JP_0822D540: @ 0x0822D540
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special CallBattlePyramidFunction
	delay 0x0002
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x05, EventScript_JP_0822D540
	setvar 0x400D, 0x0000
	releaseall
	end
EventScript_JP_0822D558: @ 0x0822D558
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special ShowMapNamePopup
	setvar 0x400F, 0x0000
	end
EventScript_JP_0822D561: @ 0x0822D561
	playbgm 0x01CD, 0x00
	setvar 0x400E, 0x0001
	end
EventScript_JP_0822D56B: @ 0x0822D56B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000F
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x4000
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822D656
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822D62F
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822D656
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0005
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822D602
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x01, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	compare_var_to_value 0x800D, 0x0009
	goto_if 0x01, BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
	setvar 0x8004, 0x000E
	setvar 0x8005, 0x0008
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x400D, 0x0001
EventScript_JP_0822D602: @ 0x0822D602
	setvar 0x8004, 0x0011
	@ event command: special
	special CallBattlePyramidFunction
	end
	.globl BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost
BattleFrontier_BattlePyramid_EventScript_WarpToLobbyLost: @ 0x0822D60B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	setvar 0x8006, 0x00FF
	@ event command: special
	special CallBattlePyramidFunction
EventScript_JP_0822D62F: @ 0x0822D62F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x000E
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special HealPlayerParty
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY, 0xFF, 0x0007, 0x000D
	.byte 0x27, 0x02
EventScript_JP_0822D656: @ 0x0822D656
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattlePyramidFunction
	@ event command: special
	special SavePlayerParty
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x8004, 0x0009
	@ event command: special
	special CallBattlePyramidFunction
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	setvar 0x400F, 0x0001
	end
EventScript_JP_0822D693: @ 0x0822D693
	call EventScript_JP_0822D69E
	setvar 0x400F, 0x0001
	end
EventScript_JP_0822D69E: @ 0x0822D69E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000D
	setvar 0x8005, 0x0020
	setvar 0x8006, 0x0000
	@ event command: special
	special CallBattlePyramidFunction
	return

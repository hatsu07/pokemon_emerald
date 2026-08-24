	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:529 BattleFrontier_BattlePyramidLobby_Text_WelcomeToBattlePyramid
	.globl gText_Rom_22C4F8
gText_Rom_22C4F8: @ 0x0822C4F8
	.string "トレーナーの ゆうきを ためす ばしょ!\nバトルピラミッドへ ようこそ!\pこちらでは バトルアドベンチャーの\nごあんないを しておりますぞ!{EOS}"
	.if (. - gText_Rom_22C4F8) > 0x47
	.error "gText_Rom_22C4F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C4F8) < 0x47
	.space 0x47 - (. - gText_Rom_22C4F8)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:532 BattleFrontier_BattlePyramidLobby_Text_EmbarkOnChallenge
	.globl gText_Rom_22C53F
gText_Rom_22C53F: @ 0x0822C53F
	.string "バトルアドベンチャーに\nちょうせん されますかな?{EOS}"
	.if (. - gText_Rom_22C53F) > 0x1a
	.error "gText_Rom_22C53F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C53F) < 0x1a
	.space 0x1a - (. - gText_Rom_22C53F)
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
	.globl gText_Rom_22C571
gText_Rom_22C571: @ 0x0822C571
	.string "バトルアドベンチャーは\nピラミッドの なかへ はいり\lちょうじょう せいはを めざす\lぼうけん イベント ですぞ!\pピラミッドの なかは\n7だんの めいろで わかれていて\lうでに おぼえの ある トレーナーと\lやせい ポケモンが まって いますぞ!\pどうぐを もたせて いない\n3ひきの ポケモンと\lおわたしする バトルバッグを もって\lちょうじょうを めざして いただきますぞ!\pこの バトルバッグに いれた どうぐは\nぼうけんに しっぱいすると\lなくなって しまいますので\lおきをつけ くだされ!\pまた ぼうけんを ちゅうだん するときは\n「やすむ」を えらんで おわらせないと\lぼうけんは ちゅうしと なってしまいます!\lじゅうぶん おきをつけ くだされ!{EOS}"
	.if (. - gText_Rom_22C571) > 0x14c
	.error "gText_Rom_22C571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C571) < 0x14c
	.space 0x14c - (. - gText_Rom_22C571)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:541 BattleFrontier_BattlePyramidLobby_Text_WhichLevelMode
	.globl gText_Rom_22C6BD
gText_Rom_22C6BD: @ 0x0822C6BD
	.string "ピラミッドには\nレベル50と オープンレベルと ありますが\lどちらに はいられますかな?{EOS}"
	.if (. - gText_Rom_22C6BD) > 0x2d
	.error "gText_Rom_22C6BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C6BD) < 0x2d
	.space 0x2d - (. - gText_Rom_22C6BD)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:544 BattleFrontier_BattlePyramidLobby_Text_SelectThreeMons
	.globl gText_Rom_22C6EA
gText_Rom_22C6EA: @ 0x0822C6EA
	.string "では つれていく ポケモンを\n3ひき おえらび くだされ!{EOS}"
	.if (. - gText_Rom_22C6EA) > 0x1e
	.error "gText_Rom_22C6EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C6EA) < 0x1e
	.space 0x1e - (. - gText_Rom_22C6EA)
	.endif
	@ field-script:0x22C066 FieldScriptText_22C708
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22C708
gText_Rom_22C708: @ 0x0822C708
	.string "ぼうけんしゃよ！！\pつれていける　ポケモンが\n3ひき　いないようですぞ！\pまた　ポケモンに　もたせている　どうぐは\nすべて　はずしてくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませんぞ！\pじゅんびが　できましたら\nまた　おこし　くだされ！{EOS}"
	.if (. - gText_Rom_22C708) != 0x7e
	.error "gText_Rom_22C708 must retain its original byte length"
	.endif
	.globl gText_Rom_22C76C
	.set gText_Rom_22C76C, gText_Rom_22C708 + 0x64
	@ field-script:0x22C059 FieldScriptText_22C786
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22C786
gText_Rom_22C786: @ 0x0822C786
	.string "ぼうけんしゃよ！！\pつれていける　ポケモンが\n3ひき　いないようですぞ！\pつれていく　ためには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\l3ひき　よういして　くだされ！\pまた　ポケモンに　もたせている　どうぐは\nすべて　はずしてくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませんぞ！\pじゅんびが　できましたら\nまた　おこし　くだされ！{EOS}"
	.if (. - gText_Rom_22C786) != 0xb8
	.error "gText_Rom_22C786 must retain its original byte length"
	.endif
	.globl gText_Rom_22C824
	.set gText_Rom_22C824, gText_Rom_22C786 + 0x9e
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:556 BattleFrontier_BattlePyramidLobby_Text_OkayToSaveBeforeChallenge
	.globl gText_Rom_22C83E
gText_Rom_22C83E: @ 0x0822C83E
	.string "バトルピラミッドへ はいる まえに\nレポートを かきますが よろしいですかな?{EOS}"
	.if (. - gText_Rom_22C83E) > 0x28
	.error "gText_Rom_22C83E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C83E) < 0x28
	.space 0x28 - (. - gText_Rom_22C83E)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:559 BattleFrontier_BattlePyramidLobby_Text_ShowYouIntoPyramid
	.globl gText_Rom_22C866
gText_Rom_22C866: @ 0x0822C866
	.string "では バトルピラミッドの なかへ\nおつれいたしますぞ!{EOS}"
	.if (. - gText_Rom_22C866) > 0x1c
	.error "gText_Rom_22C866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C866) < 0x1c
	.space 0x1c - (. - gText_Rom_22C866)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:562 BattleFrontier_BattlePyramidLobby_Text_WeWillHoldBagForSafekeeping
	.globl gText_Rom_22C882
gText_Rom_22C882: @ 0x0822C882
	.string "{PLAYER}さんの もっている バッグは\nこちらで あずからせて いただきますぞ!{EOS}"
	.if (. - gText_Rom_22C882) > 0x26
	.error "gText_Rom_22C882 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C882) < 0x26
	.space 0x26 - (. - gText_Rom_22C882)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:565 BattleFrontier_BattlePyramidLobby_Text_PleaseTakePreviousBattleBag
	.globl gText_Rom_22C8A8
gText_Rom_22C8A8: @ 0x0822C8A8
	.string "かわりに ぜんかい おつかいになった\nこの バトルバッグを おもちくだされ!{EOS}"
	.if (. - gText_Rom_22C8A8) > 0x27
	.error "gText_Rom_22C8A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C8A8) < 0x27
	.space 0x27 - (. - gText_Rom_22C8A8)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:568 BattleFrontier_BattlePyramidLobby_Text_PleaseTakeThisBattleBag
	.globl gText_Rom_22C8CF
gText_Rom_22C8CF: @ 0x0822C8CF
	.string "かわりに こちらの\nバトルバッグを おもちくだされ!{EOS}"
	.if (. - gText_Rom_22C8CF) > 0x1b
	.error "gText_Rom_22C8CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C8CF) < 0x1b
	.space 0x1b - (. - gText_Rom_22C8CF)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:571 BattleFrontier_BattlePyramidLobby_Text_ExchangedBagForBattleBag
	.globl gText_Rom_22C8EA
gText_Rom_22C8EA: @ 0x0822C8EA
	.string "{PLAYER}は バッグを あずけて\nバトルバッグを うけとった!{EOS}"
	.if (. - gText_Rom_22C8EA) > 0x1d
	.error "gText_Rom_22C8EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C8EA) < 0x1d
	.space 0x1d - (. - gText_Rom_22C8EA)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:574 BattleFrontier_BattlePyramidLobby_Text_StepOnFloorPanel
	.globl gText_Rom_22C907
gText_Rom_22C907: @ 0x0822C907
	.string "こちらにある ゆかを ふんで いただくと\nピラミッドの うえの だんへと\lすすむことが できますぞ!\pぶじ ぼうけんが すすむことを\nいのって おりますぞ!{EOS}"
	.if (. - gText_Rom_22C907) > 0x4f
	.error "gText_Rom_22C907 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C907) < 0x4f
	.space 0x4f - (. - gText_Rom_22C907)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:577 BattleFrontier_BattlePyramidLobby_Text_DidntSaveBeforeQuittingTakeBag
	.globl gText_Rom_22C956
gText_Rom_22C956: @ 0x0822C956
	.string "ぼうけんしゃよ!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが この ばあい\nちょうせんは むこうと なりますぞ!\pおあずかり していた\nバッグは おかえし いたしますぞ!\p{PLAYER}は\nバッグを うけとった!{EOS}"
	.if (. - gText_Rom_22C956) > 0x78
	.error "gText_Rom_22C956 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C956) < 0x78
	.space 0x78 - (. - gText_Rom_22C956)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:580 BattleFrontier_BattlePyramidLobby_Text_YouveConqueredPyramid
	.globl gText_Rom_22C9CE
gText_Rom_22C9CE: @ 0x0822C9CE
	.string "おかえりなさいませ!\pみごとに バトルピラミッドを\nせいは されましたな!{EOS}"
	.if (. - gText_Rom_22C9CE) > 0x26
	.error "gText_Rom_22C9CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C9CE) < 0x26
	.space 0x26 - (. - gText_Rom_22C9CE)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:583 BattleFrontier_BattlePyramidLobby_Text_MonHoldingItemCannotTake
	.globl gText_Rom_22C9F4
gText_Rom_22C9F4: @ 0x0822C9F4
	.string "おおっ!\pポケモンに\nどうぐを もたせていますな……\pもうしわけ ありませんが\nピラミッドで てにいれた どうぐは\lもっていくことが できませんぞ!{EOS}"
	.if (. - gText_Rom_22C9F4) > 0x4b
	.error "gText_Rom_22C9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22C9F4) < 0x4b
	.space 0x4b - (. - gText_Rom_22C9F4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:586 BattleFrontier_BattlePyramidLobby_Text_HeldItemsMovedToBag
	.globl gText_Rom_22CA3F
gText_Rom_22CA3F: @ 0x0822CA3F
	.string "もたせている どうぐは\nすべて {PLAYER}さんの バトルバッグに\lいれておきますぞ!{EOS}"
	.if (. - gText_Rom_22CA3F) > 0x28
	.error "gText_Rom_22CA3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CA3F) < 0x28
	.space 0x28 - (. - gText_Rom_22CA3F)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:589 BattleFrontier_BattlePyramidLobby_Text_BagCannotHoldPickItemsToKeep
	.globl gText_Rom_22CA67
gText_Rom_22CA67: @ 0x0822CA67
	.string "バトルバッグには\nすべて はいらない ようなので\lバトルバッグと もたせたどうぐを\lせいりして くだされ!{EOS}"
	.if (. - gText_Rom_22CA67) > 0x36
	.error "gText_Rom_22CA67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CA67) < 0x36
	.space 0x36 - (. - gText_Rom_22CA67)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:592 BattleFrontier_BattlePyramidLobby_Text_LeastOneMonHoldingItem
	.globl gText_Rom_22CA9D
gText_Rom_22CA9D: @ 0x0822CA9D
	.string "ポケモンに\nまだ どうぐを もたせていますぞ!{EOS}"
	.if (. - gText_Rom_22CA9D) > 0x18
	.error "gText_Rom_22CA9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CA9D) < 0x18
	.space 0x18 - (. - gText_Rom_22CA9D)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:595 BattleFrontier_BattlePyramidLobby_Text_PickItemsToKeep
	.globl gText_Rom_22CAB5
gText_Rom_22CAB5: @ 0x0822CAB5
	.string "バトルバッグと もたせたどうぐを\nせいりして くだされ!{EOS}"
	.if (. - gText_Rom_22CAB5) > 0x1d
	.error "gText_Rom_22CAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CAB5) < 0x1d
	.space 0x1d - (. - gText_Rom_22CAB5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:599 BattleFrontier_BattlePyramidLobby_Text_ReturnedEverythingMonsHeld
	.globl gText_Rom_22CAD2
gText_Rom_22CAD2: @ 0x0822CAD2
	.string "{PLAYER}は ポケモンに もたせている\nどうぐを かえした!{EOS}"
	.if (. - gText_Rom_22CAD2) > 0x1c
	.error "gText_Rom_22CAD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CAD2) < 0x1c
	.space 0x1c - (. - gText_Rom_22CAD2)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:602 BattleFrontier_BattlePyramidLobby_Text_UsedBattleBagWillBeKept
	.globl gText_Rom_22CAEE
gText_Rom_22CAEE: @ 0x0822CAEE
	.string "おつかいになられた バトルバッグは\nじかいの ちょうせんまで\lおあずかり いたしますぞ!\p{PLAYER}は バトルバッグを あずけて\nバッグを うけとった!{EOS}"
	.if (. - gText_Rom_22CAEE) > 0x4a
	.error "gText_Rom_22CAEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CAEE) < 0x4a
	.space 0x4a - (. - gText_Rom_22CAEE)
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
	.globl gText_Rom_22CB54
gText_Rom_22CB54: @ 0x0822CB54
	.string "バトルピラミッド せいはの きねんとして\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - gText_Rom_22CB54) > 0x2b
	.error "gText_Rom_22CB54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB54) < 0x2b
	.space 0x2b - (. - gText_Rom_22CB54)
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
	.globl gText_Rom_22CB8D
gText_Rom_22CB8D: @ 0x0822CB8D
	.string "……ほう!\nどうぐが いっぱいの ようですな\pどうぐを せいりしてから\nまた おこしくだされ!{EOS}"
	.if (. - gText_Rom_22CB8D) > 0x30
	.error "gText_Rom_22CB8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CB8D) < 0x30
	.space 0x30 - (. - gText_Rom_22CB8D)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:620 BattleFrontier_BattlePyramidLobby_Text_DisappointingHereIsBag
	.globl gText_Rom_22CBBD
gText_Rom_22CBBD: @ 0x0822CBBD
	.string "ざんねんでしたな……\pおあずかりしていた\nバッグは おかえし いたしますぞ!\p{PLAYER}は\nバッグを うけとった!{EOS}"
	.if (. - gText_Rom_22CBBD) > 0x37
	.error "gText_Rom_22CBBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CBBD) < 0x37
	.space 0x37 - (. - gText_Rom_22CBBD)
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
	.globl gText_Rom_22CC0C
gText_Rom_22CC0C: @ 0x0822CC0C
	.string "おまちしておりましたぞ!\pバトルピラミッド せいはの きねんとして\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - gText_Rom_22CC0C) != 0x38
	.error "gText_Rom_22CC0C must retain its original byte length"
	.endif
	.globl gText_Rom_22CC19
	.set gText_Rom_22CC19, gText_Rom_22CC0C + 0xd
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:630 BattleFrontier_BattlePyramidLobby_Text_TellYouWhatMisfortunesAwait
	.globl gText_Rom_22CC44
gText_Rom_22CC44: @ 0x0822CC44
	.string "ようこそ……\pピラミッドで おこる わざわいを\nうらなって さしあげましょう……{EOS}"
	.if (. - gText_Rom_22CC44) > 0x29
	.error "gText_Rom_22CC44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CC44) < 0x29
	.space 0x29 - (. - gText_Rom_22CC44)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:633 BattleFrontier_BattlePyramidLobby_Text_Aah
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_22CC6D
gText_Rom_22CC6D: @ 0x0822CC6D
	.string "………………………………………………………\n………………………………………………………\p……っああっ!{EOS}"
	.if (. - gText_Rom_22CC6D) != 0x34
	.error "gText_Rom_22CC6D must retain its original byte length"
	.endif
	.globl gText_Rom_22CC9C
	.set gText_Rom_22CC9C, gText_Rom_22CC6D + 0x2f
	.globl gText_Rom_22CC9D
	.set gText_Rom_22CC9D, gText_Rom_22CC6D + 0x30
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:636 BattleFrontier_BattlePyramidLobby_Text_HintParalysis
	.globl gText_Rom_22CCA1
gText_Rom_22CCA1: @ 0x0822CCA1
	.string "でんきが とびちっています……\p……そして\nまひにより おもうように うごけない\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CCA1) > 0x3b
	.error "gText_Rom_22CCA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CCA1) < 0x3b
	.space 0x3b - (. - gText_Rom_22CCA1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:639 BattleFrontier_BattlePyramidLobby_Text_HintPoison
	.globl gText_Rom_22CCDC
gText_Rom_22CCDC: @ 0x0822CCDC
	.string "どくが みえます……\p……そして\nどくに おかされ くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CCDC) > 0x31
	.error "gText_Rom_22CCDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CCDC) < 0x31
	.space 0x31 - (. - gText_Rom_22CCDC)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:642 BattleFrontier_BattlePyramidLobby_Text_HintBurn
	.globl gText_Rom_22CD0D
gText_Rom_22CD0D: @ 0x0822CD0D
	.string "まっかな ほのおが みえます……\p……そして\nやけどを おって くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CD0D) > 0x37
	.error "gText_Rom_22CD0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CD0D) < 0x37
	.space 0x37 - (. - gText_Rom_22CD0D)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:645 BattleFrontier_BattlePyramidLobby_Text_HintPPWaste
	.globl gText_Rom_22CD44
gText_Rom_22CD44: @ 0x0822CD44
	.string "すさまじい プレッシャーと おんねん……\nうらみの ちからが みえます……\pそして……\nパワーポイントが なくなり\lわるあがきを する\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CD44) > 0x56
	.error "gText_Rom_22CD44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CD44) < 0x56
	.space 0x56 - (. - gText_Rom_22CD44)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:648 BattleFrontier_BattlePyramidLobby_Text_HintLevitate
	.globl gText_Rom_22CD9A
gText_Rom_22CD9A: @ 0x0822CD9A
	.string "ゆるやかに ふゆうする\nポケモンたちが みえます……\p……そして\nじめんの わざを つかえずに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CD9A) > 0x47
	.error "gText_Rom_22CD9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CD9A) < 0x47
	.space 0x47 - (. - gText_Rom_22CD9A)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:651 BattleFrontier_BattlePyramidLobby_Text_HintTrapAbility
	.globl gText_Rom_22CDE1
gText_Rom_22CDE1: @ 0x0822CDE1
	.string "あしもとから わきおこる\nつよい ちからが みえます……\p……そして\nにげようとしても にげられない\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CDE1) > 0x45
	.error "gText_Rom_22CDE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CDE1) < 0x45
	.space 0x45 - (. - gText_Rom_22CDE1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:654 BattleFrontier_BattlePyramidLobby_Text_HintIce
	.globl gText_Rom_22CE26
gText_Rom_22CE26: @ 0x0822CE26
	.string "こおりタイプの\nポケモンたちが みえます……\p……そして\nこおりの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CE26) > 0x3d
	.error "gText_Rom_22CE26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CE26) < 0x3d
	.space 0x3d - (. - gText_Rom_22CE26)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:657 BattleFrontier_BattlePyramidLobby_Text_HintExplosion
	.globl gText_Rom_22CE63
gText_Rom_22CE63: @ 0x0822CE63
	.string "いのちを かけて\nくりだされる わざが みえます……\p……そして\nわざを うけて たおれていく\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CE63) > 0x42
	.error "gText_Rom_22CE63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CE63) < 0x42
	.space 0x42 - (. - gText_Rom_22CE63)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:660 BattleFrontier_BattlePyramidLobby_Text_HintPsychic
	.globl gText_Rom_22CEA5
gText_Rom_22CEA5: @ 0x0822CEA5
	.string "エスパータイプの\nポケモンたちが みえます……\p……そして\nエスパーの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CEA5) > 0x3f
	.error "gText_Rom_22CEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CEA5) < 0x3f
	.space 0x3f - (. - gText_Rom_22CEA5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:663 BattleFrontier_BattlePyramidLobby_Text_HintRock
	.globl gText_Rom_22CEE4
gText_Rom_22CEE4: @ 0x0822CEE4
	.string "いわタイプの\nポケモンたちが みえます……\p……そして\nいわの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CEE4) > 0x3b
	.error "gText_Rom_22CEE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CEE4) < 0x3b
	.space 0x3b - (. - gText_Rom_22CEE4)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:666 BattleFrontier_BattlePyramidLobby_Text_HintFighting
	.globl gText_Rom_22CF1F
gText_Rom_22CF1F: @ 0x0822CF1F
	.string "かくとうタイプの\nポケモンたちが みえます……\p……そして\nかくとうの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CF1F) > 0x3f
	.error "gText_Rom_22CF1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CF1F) < 0x3f
	.space 0x3f - (. - gText_Rom_22CF1F)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:669 BattleFrontier_BattlePyramidLobby_Text_HintWeather
	.globl gText_Rom_22CF5E
gText_Rom_22CF5E: @ 0x0822CF5E
	.string "あまごい…… にほんばれ……\nすなあらし…… あられ……\pてんこうの へんかで つよくなる\nポケモンたちが みえます\p……そして\nさまざまな タイプに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CF5E) > 0x63
	.error "gText_Rom_22CF5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CF5E) < 0x63
	.space 0x63 - (. - gText_Rom_22CF5E)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:672 BattleFrontier_BattlePyramidLobby_Text_HintBug
	.globl gText_Rom_22CFC1
gText_Rom_22CFC1: @ 0x0822CFC1
	.string "むしタイプの\nポケモンたちが みえます……\p……そして\nさまざまな こうげきで くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22CFC1) > 0x3f
	.error "gText_Rom_22CFC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22CFC1) < 0x3f
	.space 0x3f - (. - gText_Rom_22CFC1)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:675 BattleFrontier_BattlePyramidLobby_Text_HintDark
	.globl gText_Rom_22D000
gText_Rom_22D000: @ 0x0822D000
	.string "あく タイプの\nポケモンたちが みえます……\p……そして\nあくの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D000) > 0x3c
	.error "gText_Rom_22D000 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D000) < 0x3c
	.space 0x3c - (. - gText_Rom_22D000)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:678 BattleFrontier_BattlePyramidLobby_Text_HintWater
	.globl gText_Rom_22D03C
gText_Rom_22D03C: @ 0x0822D03C
	.string "みずタイプの\nポケモンたちが みえます……\p……そして\nみずの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D03C) > 0x3b
	.error "gText_Rom_22D03C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D03C) < 0x3b
	.space 0x3b - (. - gText_Rom_22D03C)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:681 BattleFrontier_BattlePyramidLobby_Text_HintGhost
	.globl gText_Rom_22D077
gText_Rom_22D077: @ 0x0822D077
	.string "ゴーストタイプの\nポケモンたちが みえます……\p……そして\nゴーストの わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D077) > 0x3f
	.error "gText_Rom_22D077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D077) < 0x3f
	.space 0x3f - (. - gText_Rom_22D077)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:684 BattleFrontier_BattlePyramidLobby_Text_HintSteel
	.globl gText_Rom_22D0B6
gText_Rom_22D0B6: @ 0x0822D0B6
	.string "はがねタイプの\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D0B6) > 0x3f
	.error "gText_Rom_22D0B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D0B6) < 0x3f
	.space 0x3f - (. - gText_Rom_22D0B6)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:687 BattleFrontier_BattlePyramidLobby_Text_HintFlyingDragon
	.globl gText_Rom_22D0F5
gText_Rom_22D0F5: @ 0x0822D0F5
	.string "そらをとぶ\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D0F5) > 0x3d
	.error "gText_Rom_22D0F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D0F5) < 0x3d
	.space 0x3d - (. - gText_Rom_22D0F5)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:690 BattleFrontier_BattlePyramidLobby_Text_HintStoneEvolve
	.globl gText_Rom_22D132
gText_Rom_22D132: @ 0x0822D132
	.string "いしの ちからにより\nしんかした ものたちが みえます……\p……そして\nほのお…… みず…… でんき……\p3つの ちからに くるしむ\nあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D132) > 0x55
	.error "gText_Rom_22D132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D132) < 0x55
	.space 0x55 - (. - gText_Rom_22D132)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:693 BattleFrontier_BattlePyramidLobby_Text_HintNormal
	.globl gText_Rom_22D187
gText_Rom_22D187: @ 0x0822D187
	.string "ノーマルタイプの\nポケモンたちが みえます……\p……そして\nきょうだいな わざに くるしむ\lあなたの ポケモンの すがたも……{EOS}"
	.if (. - gText_Rom_22D187) > 0x40
	.error "gText_Rom_22D187 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D187) < 0x40
	.space 0x40 - (. - gText_Rom_22D187)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:696 BattleFrontier_BattlePyramidLobby_Text_BelieveMyFortunesOrNot
	.globl gText_Rom_22D1C7
gText_Rom_22D1C7: @ 0x0822D1C7
	.string "うらないを しんじるも しんじないも\nあなた しだい……\pみらいは いつでも かえられます……\nどうぞ ごぶじで……{EOS}"
	.if (. - gText_Rom_22D1C7) > 0x3b
	.error "gText_Rom_22D1C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D1C7) < 0x3b
	.space 0x3b - (. - gText_Rom_22D1C7)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:699 BattleFrontier_BattlePyramidLobby_Text_TrainersNoticeRunning
	.globl gText_Rom_22D202
gText_Rom_22D202: @ 0x0822D202
	.string "あなた しってた?\pはやく はしると\nトレーナーが あしおとに きづいて\lしょうぶを しかけて くるの!\pだから トレーナーと\nめを あわせたくない ときは\lトレーナーの ようすを みながら\lゆっくり あるいた ほうが いいのよ!{EOS}"
	.if (. - gText_Rom_22D202) > 0x74
	.error "gText_Rom_22D202 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D202) < 0x74
	.space 0x74 - (. - gText_Rom_22D202)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:702 BattleFrontier_BattlePyramidLobby_Text_LostLotOfItems
	.globl gText_Rom_22D276
gText_Rom_22D276: @ 0x0822D276
	.string "うおおおおーーーーーーん!\pどうぐを いっぱい もってたのに\nまけたら ぜんぶ なくなっちゃった……\pうおおおおーーーーーーん!{EOS}"
	.if (. - gText_Rom_22D276) > 0x41
	.error "gText_Rom_22D276 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D276) < 0x41
	.space 0x41 - (. - gText_Rom_22D276)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:705 BattleFrontier_BattlePyramidLobby_Text_YouveDefeatedPyramidKing
	.globl gText_Rom_22D2B7
gText_Rom_22D2B7: @ 0x0822D2B7
	.string "おかえりなさいませ!\pピラミッドキングを たおし\nみごと バトルピラミッドを\lせいは されましたな!{EOS}"
	.if (. - gText_Rom_22D2B7) > 0x33
	.error "gText_Rom_22D2B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D2B7) < 0x33
	.space 0x33 - (. - gText_Rom_22D2B7)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:708 BattleFrontier_BattlePyramidLobby_Text_GiveYouTheseBattlePoints
	.globl gText_Rom_22D2EA
gText_Rom_22D2EA: @ 0x0822D2EA
	.string "ぼうけんしゃよ!\nあなたの あつい ゆうきを たたえ\lバトルポイントを おおくり しましょう!{EOS}"
	.if (. - gText_Rom_22D2EA) > 0x30
	.error "gText_Rom_22D2EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D2EA) < 0x30
	.space 0x30 - (. - gText_Rom_22D2EA)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:711 BattleFrontier_BattlePyramidLobby_Text_RulesAreListed
	.globl gText_Rom_22D31A
gText_Rom_22D31A: @ 0x0822D31A
	.string "バトルアドベンチャーの\nルールが かかれている!{EOS}"
	.if (. - gText_Rom_22D31A) > 0x19
	.error "gText_Rom_22D31A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D31A) < 0x19
	.space 0x19 - (. - gText_Rom_22D31A)
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
	.globl gText_Rom_22D343
gText_Rom_22D343: @ 0x0822D343
	.string "ピラミッドの なかで でてくる\nやせい ポケモンは\lピラミッドを せいはすると かわります\pどんな ポケモンが でてくるのかは\nじっさいに ぼうけんして おぼえましょう{EOS}"
	.if (. - gText_Rom_22D343) > 0x55
	.error "gText_Rom_22D343 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D343) < 0x55
	.space 0x55 - (. - gText_Rom_22D343)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:720 BattleFrontier_BattlePyramidLobby_Text_ExplainTrainerRules
	.globl gText_Rom_22D398
gText_Rom_22D398: @ 0x0822D398
	.string "ピラミッドの なかには\nトレーナーが まちかまえて います\p1つの だんには さいこうで\n8にんの トレーナーが います\pまた トレーナーに かつと\nちょっと ぼうけんに やくだつ\lヒントが もらえます{EOS}"
	.if (. - gText_Rom_22D398) > 0x66
	.error "gText_Rom_22D398 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D398) < 0x66
	.space 0x66 - (. - gText_Rom_22D398)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:723 BattleFrontier_BattlePyramidLobby_Text_ExplainMazeRules
	.globl gText_Rom_22D3FE
gText_Rom_22D3FE: @ 0x0822D3FE
	.string "ピラミッドの めいろは\nはいる たびに かわります\pなかは とても くらく なっているので\nしんちょうに すすみましょう\pまた やせいポケモンや トレーナーとの\nたたかいに かつと\lちょっとだけ まわりが あかるくなります{EOS}"
	.if (. - gText_Rom_22D3FE) > 0x70
	.error "gText_Rom_22D3FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D3FE) < 0x70
	.space 0x70 - (. - gText_Rom_22D3FE)
	.endif
	@ data/maps/BattleFrontier_BattlePyramidLobby/scripts.inc:726 BattleFrontier_BattlePyramidLobby_Text_ExplainBagRules
	.globl gText_Rom_22D46E
gText_Rom_22D46E: @ 0x0822D46E
	.string "バトルバッグは ピラミッドに いる あいだ\nつかうことが できます\pレベル50と オープンレベルの\nバッグが それぞれ ようい されていて\l10しゅるいの どうぐを\l99こ まで いれることが できます\pまた バッグの なかみは ぼうけんに\nしっぱい すると なくなって しまいます{EOS}"
	.if (. - gText_Rom_22D46E) > 0x8e
	.error "gText_Rom_22D46E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22D46E) < 0x8e
	.space 0x8e - (. - gText_Rom_22D46E)
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

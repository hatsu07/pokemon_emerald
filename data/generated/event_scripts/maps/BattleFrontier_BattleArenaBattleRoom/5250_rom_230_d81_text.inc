	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:486 BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward
	.globl BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward
BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward: @ 0x082308E8
	.string "しんぱん『トレーナー {PLAYER}!\nまえへーーー!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward) > 0x17
	.error "BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleArenaBattleRoom_Text_PlayerStepForward)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:490 BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward
	.globl BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward
BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward: @ 0x082308FF
	.string "しんぱん『トレーナー {STR_VAR_1}!\nまえへーーー!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward) > 0x17
	.error "BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleArenaBattleRoom_Text_OpponentStepForward)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:494 BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin
	.globl BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin
BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin: @ 0x08230916
	.string "しんぱん『かちぬきチームバトル!\nはじめーーー!!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin) > 0x1a
	.error "BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleArenaBattleRoom_Text_SetKOTourneyBegin)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:498 BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer
	.globl BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer: @ 0x08230930
	.string "しんぱん『しょうしゃーーー!\n{PLAYER}!!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer) > 0x14
	.error "BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer) < 0x14
	.space 0x14 - (. - BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsPlayer)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:501 BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent
	.globl BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent
BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent: @ 0x08230944
	.string "しんぱん『しょうしゃーーー!\n{STR_VAR_1}!!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent) > 0x14
	.error "BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent) < 0x14
	.space 0x14 - (. - BattleFrontier_BattleArenaBattleRoom_Text_WinnerIsOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:504 BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored
	.globl BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored
BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored: @ 0x08230958
	.string "ポケモンの たいりょくを\nかいふく いたしますぞ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored) > 0x1a
	.error "BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleArenaBattleRoom_Text_MonsWillBeRestored)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:508 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
	.globl BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent: @ 0x08230972
	.string "つぎは 2にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent) > 0x23
	.error "BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor2ndOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:512 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
	.globl BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent: @ 0x08230995
	.string "つぎは 3にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent) > 0x23
	.error "BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor3rdOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:516 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent
	.globl BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent: @ 0x082309B8
	.string "つぎは 4にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent) > 0x23
	.error "BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor4thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:520 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor5thOpponent
	.globl gText_Rom_2309DB
gText_Rom_2309DB: @ 0x082309DB
	.string "つぎは 5にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_2309DB) > 0x23
	.error "gText_Rom_2309DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2309DB) < 0x23
	.space 0x23 - (. - gText_Rom_2309DB)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:524 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor6thOpponent
	.globl gText_Rom_2309FE
gText_Rom_2309FE: @ 0x082309FE
	.string "つぎは 6にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_2309FE) > 0x23
	.error "gText_Rom_2309FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2309FE) < 0x23
	.space 0x23 - (. - gText_Rom_2309FE)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:528 BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent
	.globl BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent
BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent: @ 0x08230A21
	.string "つぎは 7にんめの あいてですぞ!\nじゅんびは よろしい ですかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent) > 0x23
	.error "BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleArenaBattleRoom_Text_ReadyFor7thOpponent)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:532 BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown
	.globl BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown
BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown: @ 0x08230A44
	.string "レポートを かいて\nしゅうりょう なされますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown) > 0x1a
	.error "BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleArenaBattleRoom_Text_SaveAndShutDown)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:536 BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
	.globl BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge
BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge: @ 0x08230A5E
	.string "かちぬきチームバトルの ちょうせんを\nちゅうし なされますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge) > 0x21
	.error "BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge) < 0x21
	.space 0x21 - (. - BattleFrontier_BattleArenaBattleRoom_Text_RetireFromChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:540 BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
	.globl BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait
BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait: @ 0x08230A7F
	.string "レポートを かいております!\nしばし おまちくだされ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait) > 0x1c
	.error "BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattleArenaBattleRoom_Text_SavingPleaseWait)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:544 BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle
	.globl BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle
BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle: @ 0x08230A9B
	.string "さきほどの たたかいを\nフロンティアパスに きろく されますかな?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle) > 0x22
	.error "BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle) < 0x22
	.space 0x22 - (. - BattleFrontier_BattleArenaBattleRoom_Text_RecordLastBattle)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:548 BattleFrontier_BattleArenaBattleRoom_Text_NowFaceTycoon
	.globl gText_Rom_230ABD
gText_Rom_230ABD: @ 0x08230ABD
	.string "おきゃくじん!\pあなたの じつりょくは\nじつに すさまじいで ございますな!\pそこで ここらで ひとつ\nわれらが たいしょう アリーナキャプテンと\lおてあわせ いただき ましょう!"
	.byte EOS
	.if (. - gText_Rom_230ABD) > 0x5b
	.error "gText_Rom_230ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230ABD) < 0x5b
	.space 0x5b - (. - gText_Rom_230ABD)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:554 BattleFrontier_BattleArenaBattleRoom_Text_PreparedForTycoon
	.globl gText_Rom_230B18
gText_Rom_230B18: @ 0x08230B18
	.string "アリーナキャプテンとの しょうぶ!\nかくごの ほうは よろしい ですかな?"
	.byte EOS
	.if (. - gText_Rom_230B18) > 0x26
	.error "gText_Rom_230B18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B18) < 0x26
	.space 0x26 - (. - gText_Rom_230B18)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:558 BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta
	.globl BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta
BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta: @ 0x08230B3E
	.string "しんぱん『アリーナキャプテン! コゴミさま!\nごにゅうじょうーーー!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta) > 0x23
	.error "BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleArenaBattleRoom_Text_MakeWayForGreta)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:562 BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger
	.globl BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger: @ 0x08230B61
	.string "コゴミ『ウィーッス! よろしくー!!\p…… って あなたが ちょうせんしゃ?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger) > 0x27
	.error "BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger) < 0x27
	.space 0x27 - (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureChallenger)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:567 BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight
	.globl BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight
BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight: @ 0x08230B88
	.string "ふーん…… へーえ…… へえぇぇ……"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight) > 0x13
	.error "BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight) < 0x13
	.space 0x13 - (. - BattleFrontier_BattleArenaBattleRoom_Text_IsThatRight)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:571 BattleFrontier_BattleArenaBattleRoom_Text_YouLookWeakTakeThingsEasy
	.globl gText_Rom_230B9B
gText_Rom_230B9B: @ 0x08230B9B
	.string "なんて いうかー しょうじき いって\nかなり よわっちい かんじ なんだけどー\lアタシと たたかっても\lだいじょうぶ なのかなー?\pぅうーん……\pまあ いいかっ!\nまずは かるーく おてなみ はいけんねっ!"
	.byte EOS
	.if (. - gText_Rom_230B9B) > 0x68
	.error "gText_Rom_230B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230B9B) < 0x68
	.space 0x68 - (. - gText_Rom_230B9B)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:579 BattleFrontier_BattleArenaBattleRoom_Text_IgniteMyPassionForBattle
	.globl gText_Rom_230C03
gText_Rom_230C03: @ 0x08230C03
	.string "さあっ!\nアタシの とうしに ひを つけてねっ!"
	.byte EOS
	.if (. - gText_Rom_230C03) > 0x19
	.error "gText_Rom_230C03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230C03) < 0x19
	.space 0x19 - (. - gText_Rom_230C03)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:583 BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll
	.globl BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll
BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll: @ 0x08230C1C
	.string "コゴミ『やだ ちょっとー!\nあなた ぜんぜん つよい じゃんー!\lきにいった! フロンティアパス かしてっ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll) > 0x37
	.error "BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll) < 0x37
	.space 0x37 - (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaYoureToughAfterAll)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:589 BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol
	.globl BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol
BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol: @ 0x08230C53
	.string "フロンティアパスに\nガッツシンボルが きざまれた!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol) > 0x1a
	.error "BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleArenaBattleRoom_Text_ReceivedGutsSymbol)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:593 BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime
	.globl BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime
BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime: @ 0x08230C6D
	.string "ぅうーん!\pつぎに あえるときが\nたのしみに なって きたなー!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime) > 0x21
	.error "BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime) < 0x21
	.space 0x21 - (. - BattleFrontier_BattleArenaBattleRoom_Text_GoingToBeFunNextTime)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:598 BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain
	.globl BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain
BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain: @ 0x08230C8E
	.string "コゴミ『ウィーッス! ごぶさたー!\nやーっと ここまで かちぬいて きたね!\pおそいから しんぱい しちゃったよーっ!\nあなたと あえるの もの すっごーくっ!\lたのしみに してたん だからねーっ!!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain) > 0x65
	.error "BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain) < 0x65
	.space 0x65 - (. - BattleFrontier_BattleArenaBattleRoom_Text_GretaLookingForwardToSeeingAgain)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:605 BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady
	.globl BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady
BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady: @ 0x08230CF3
	.string "…… …… …… …… だから いーい?"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady) > 0x15
	.error "BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady) < 0x15
	.space 0x15 - (. - BattleFrontier_BattleArenaBattleRoom_Text_SoAreYouReady)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:609 BattleFrontier_BattleArenaBattleRoom_Text_WontAllowHalfheartedEffort
	.globl gText_Rom_230D08
gText_Rom_230D08: @ 0x08230D08
	.string "はんぱな たたかいじゃ ゆるさないっ!!\nかくご しといてねっ!!"
	.byte EOS
	.if (. - gText_Rom_230D08) > 0x22
	.error "gText_Rom_230D08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D08) < 0x22
	.space 0x22 - (. - gText_Rom_230D08)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:613 BattleFrontier_BattleArenaBattleRoom_Text_LetsGetThisStarted
	.globl gText_Rom_230D2A
gText_Rom_230D2A: @ 0x08230D2A
	.string "ほらっ しんぱん!\nさっさと はじめなさいっ!!"
	.byte EOS
	.if (. - gText_Rom_230D2A) > 0x19
	.error "gText_Rom_230D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D2A) < 0x19
	.space 0x19 - (. - gText_Rom_230D2A)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:617 BattleFrontier_BattleArenaBattleRoom_Text_GretaBlownAway
	.globl gText_Rom_230D43
gText_Rom_230D43: @ 0x08230D43
	.string "コゴミ『あーーーっ! もーーーっ!!\nさっさと フロンティアパス かしてよっ!"
	.byte EOS
	.if (. - gText_Rom_230D43) > 0x28
	.error "gText_Rom_230D43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_230D43) < 0x28
	.space 0x28 - (. - gText_Rom_230D43)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:621 BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine
	.globl BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine
BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine: @ 0x08230D6B
	.string "ガッツシンボルが\nきんいろに かがやいた!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine) > 0x16
	.error "BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine) < 0x16
	.space 0x16 - (. - BattleFrontier_BattleArenaBattleRoom_Text_GutsSymbolTookGoldenShine)
	.endif
	@ data/maps/BattleFrontier_BattleArenaBattleRoom/scripts.inc:625 BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose
	.globl BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose
BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose: @ 0x08230D81
	.string "むきーっ!! くやしーーーっ!!\pこんど たたかう ことが あったら\nぜーったい まけない からっ! バイバイっ!"
	.byte EOS
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose) > 0x3a
	.error "BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose) < 0x3a
	.space 0x3a - (. - BattleFrontier_BattleArenaBattleRoom_Text_IfWeBattleAgainWontLose)
	.endif
	@ Embedded ROM bytes: file offset 0x230DBB, size 0x506
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x02, 0xDA, 0x0D, 0x23, 0x08, 0x04, 0xC6, 0x0D, 0x23, 0x08, 0x00, 0x01, 0x40, 0x00, 0x00, 0xD0
	.byte 0x0D, 0x23, 0x08, 0x00, 0x00, 0x16, 0x01, 0x40, 0x01, 0x00, 0x5B, 0xFF, 0x00, 0x02, 0x02, 0x00
	.byte 0x40, 0x00, 0x00, 0x04, 0x0E, 0x23, 0x08, 0x00, 0x40, 0x01, 0x00, 0x0D, 0x0E, 0x23, 0x08, 0x00
	.byte 0x40, 0x02, 0x00, 0x65, 0x0F, 0x23, 0x08, 0x00, 0x40, 0x03, 0x00, 0x6E, 0x0E, 0x23, 0x08, 0x00
	.byte 0x40, 0x04, 0x00, 0xD9, 0x0E, 0x23, 0x08, 0x00, 0x00, 0x16, 0x04, 0x80, 0x00, 0x00, 0x25, 0xE7
	.byte 0x00, 0x02, 0x69, 0x0F, 0x00, 0xED, 0x15, 0x23, 0x08, 0x09, 0x04, 0x68, 0x16, 0x04, 0x80, 0x08
	.byte 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x03, 0x00, 0x16, 0x06
	.byte 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00
	.byte 0x16, 0x06, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80
	.byte 0x02, 0x00, 0x16, 0x06, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16
	.byte 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x00, 0x00, 0x25, 0xE7, 0x00, 0x16, 0x00, 0x40, 0xFF
	.byte 0x00, 0x6B, 0x02, 0x69, 0x16, 0x04, 0x80, 0x0A, 0x00, 0x25, 0xE7, 0x00, 0x21, 0x0D, 0x80, 0x01
	.byte 0x00, 0x06, 0x01, 0x90, 0x0E, 0x23, 0x08, 0x0F, 0x00, 0x54, 0x15, 0x23, 0x08, 0x09, 0x04, 0x66
	.byte 0x05, 0x99, 0x0E, 0x23, 0x08, 0x0F, 0x00, 0xEA, 0x17, 0x23, 0x08, 0x09, 0x04, 0x66, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_AwardBattlePoints @ ROM pointer 0x0823181A
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0x0B, 0x00, 0x25, 0xE7, 0x00, 0x0F, 0x00
	.4byte BattleFrontier_Text_ObtainedXBattlePoints @ ROM pointer 0x0822189E
	.byte 0x09, 0x09, 0x67, 0x40, 0x18, 0x23, 0x08, 0x66, 0x16, 0x04, 0x80, 0x08, 0x00, 0x25, 0xE7, 0x00
	.byte 0x25, 0x28, 0x00, 0x16, 0x04, 0x80, 0x03, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00
	.byte 0x2F, 0x37, 0x00, 0x30, 0x05, 0x0E, 0x0F, 0x23, 0x08, 0x02, 0x69, 0x67
	.4byte BattleFrontier_BattleFactoryLobby_Text_ReturnMonsSaveResults @ ROM pointer 0x082314DC
	.byte 0x66, 0x16, 0x04, 0x80, 0x08, 0x00, 0x25, 0xE7, 0x00, 0x25, 0x28, 0x00, 0x16, 0x04, 0x80, 0x02
	.byte 0x00, 0x16, 0x05, 0x80, 0x02, 0x00, 0x16, 0x06, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04
	.byte 0x80, 0x03, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x2F, 0x37, 0x00, 0x30, 0x04
	.byte 0x21, 0xF9, 0x21, 0x08, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0x55, 0x0F, 0x23, 0x08, 0x67
	.4byte BattleFrontier_BattleFactoryLobby_Text_RecordLastMatch @ ROM pointer 0x0823188A
	.byte 0x66, 0x70, 0x14, 0x08, 0x5E, 0x01, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x01
	.byte 0x00, 0x06, 0x01, 0x55, 0x0F, 0x23, 0x08, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x50, 0x0F
	.byte 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x55, 0x0F, 0x23, 0x08, 0x04, 0xF5, 0xF8
	.byte 0x21, 0x08, 0x0F, 0x00
	.4byte gText_Rom_231454 @ ROM pointer 0x08231454
	.byte 0x09, 0x04, 0x68, 0x16, 0x00, 0x40, 0xFF, 0x00, 0x6B, 0x02, 0x69, 0x67
	.4byte BattleFrontier_BattleFactoryLobby_Text_WaitingForYouToResume @ ROM pointer 0x082315C2
	.byte 0x66, 0x16, 0x04, 0x80, 0x03, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x25, 0xEE, 0x00, 0x2F, 0x37
	.byte 0x00, 0x30, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x03, 0x00, 0x16, 0x06, 0x80, 0x00
	.byte 0x00, 0x25, 0xE7, 0x00, 0x16, 0x00, 0x40, 0xFF, 0x00, 0x16, 0x06, 0x80, 0x02, 0x00, 0x05, 0xED
	.byte 0x10, 0x23, 0x08, 0x6A, 0x5A, 0x16, 0xCF, 0x40, 0x04, 0x00, 0x16, 0xCE, 0x40, 0x00, 0x00, 0x05
	.byte 0xC0, 0x0F, 0x23, 0x08, 0x02, 0x16, 0xCF, 0x40, 0x04, 0x00, 0x16, 0xCE, 0x40, 0x01, 0x00, 0x05
	.byte 0xC0, 0x0F, 0x23, 0x08, 0x02, 0x25, 0x27, 0x00, 0x21, 0xCE, 0x40, 0x00, 0x00, 0x07, 0x01, 0x84
	.byte 0x11, 0x23, 0x08, 0x21, 0xCE, 0x40, 0x01, 0x00, 0x07, 0x01, 0x8D, 0x11, 0x23, 0x08, 0x21, 0xCE
	.byte 0x40, 0x00, 0x00, 0x07, 0x01, 0x96, 0x11, 0x23, 0x08, 0x21, 0xCE, 0x40, 0x01, 0x00, 0x07, 0x01
	.byte 0x9C, 0x11, 0x23, 0x08, 0x66, 0x6F, 0x11, 0x06, 0x17, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21
	.byte 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x26, 0x10, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06
	.byte 0x01, 0x3B, 0x11, 0x23, 0x08, 0x21, 0x00, 0x80, 0x02, 0x00, 0x06, 0x01, 0x70, 0x11, 0x23, 0x08
	.byte 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x70, 0x11, 0x23, 0x08, 0x67
	.4byte BattleFrontier_BattleFactoryLobby_Text_WhichLevelMode @ ROM pointer 0x08231469
	.byte 0x66, 0x6F, 0x11, 0x06, 0x18, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x02, 0x00
	.byte 0x06, 0x01, 0x70, 0x11, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x70, 0x11, 0x23
	.byte 0x08, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x19, 0x06, 0x80, 0x0D, 0x80
	.byte 0x25, 0xE7, 0x00, 0x0F, 0x00, 0x8F, 0x14, 0x23, 0x08, 0x09, 0x05, 0x19, 0x00, 0x80, 0x0D, 0x80
	.byte 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x6D, 0x11, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00
	.byte 0x06, 0x01, 0x8C, 0x10, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06, 0x01, 0x6D, 0x11, 0x23
	.byte 0x08, 0x16, 0x00, 0x40, 0x00, 0x00, 0x16, 0x04, 0x80, 0x00, 0x00, 0x25, 0xEE, 0x00, 0x16, 0x04
	.byte 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x01, 0x00, 0x25, 0xE7, 0x00
	.byte 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x02, 0x00, 0x16, 0x06, 0x80, 0x01, 0x00, 0x25
	.byte 0xEE, 0x00, 0x16, 0x04, 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x03, 0x00, 0x16, 0x06, 0x80, 0x00
	.byte 0x00, 0x25, 0xE7, 0x00, 0x68, 0x28, 0x02, 0x00, 0x04, 0xE9, 0x23, 0x24, 0x08, 0x16, 0x00, 0x40
	.byte 0xFF, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x56, 0x11, 0x23, 0x08, 0x16, 0x06, 0x80
	.byte 0x00, 0x00, 0x25, 0x27, 0x00, 0x0F, 0x00, 0xCD, 0x14, 0x23, 0x08, 0x09, 0x04, 0x68, 0x21, 0xCE
	.byte 0x40, 0x00, 0x00, 0x07, 0x01, 0x2F, 0x11, 0x23, 0x08, 0x21, 0xCE, 0x40, 0x01, 0x00, 0x07, 0x01
	.byte 0x35, 0x11, 0x23, 0x08, 0x4F, 0x0F, 0x80, 0x7A, 0x11, 0x23, 0x08, 0x4F, 0xFF, 0x00, 0x7F, 0x11
	.byte 0x23, 0x08, 0x51, 0x00, 0x00, 0x39, 0x1A, 0x20, 0xFF, 0x08, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x40
	.byte 0x00, 0x00, 0x27, 0x02, 0x16, 0x0F, 0x80, 0x01, 0x00, 0x03, 0x16, 0x0F, 0x80, 0x06, 0x00, 0x03
	.byte 0x21, 0xCE, 0x40, 0x00, 0x00, 0x07, 0x01, 0xA2, 0x11, 0x23, 0x08, 0x21, 0xCE, 0x40, 0x01, 0x00
	.byte 0x07, 0x01, 0xAB, 0x11, 0x23, 0x08, 0x05, 0xD9, 0x0F, 0x23, 0x08, 0x16, 0x04, 0x80, 0x02, 0x00
	.byte 0x16, 0x05, 0x80, 0x00, 0x00, 0x16, 0x06, 0x80, 0x00, 0x00, 0x25, 0xE7, 0x00, 0x05, 0x70, 0x11
	.byte 0x23, 0x08, 0x25, 0x28, 0x00, 0x0F, 0x00, 0x54, 0x14, 0x23, 0x08, 0x09, 0x04, 0x6C, 0x02, 0x09
	.byte 0x09, 0x09, 0x54, 0xFE, 0x09, 0x09, 0x09, 0x09, 0xFE, 0x0F, 0x00, 0xC1, 0x12, 0x23, 0x08, 0x09
	.byte 0x04, 0x03, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_WelcomeForDoubleBattle @ ROM pointer 0x0823165C
	.byte 0x09, 0x04, 0x03, 0x67
	.4byte BattleFrontier_BattleFactoryLobby_Text_TakeSinglesChallenge @ ROM pointer 0x08231305
	.byte 0x03, 0x67, 0x9E, 0x16, 0x23, 0x08, 0x03, 0x0F, 0x00, 0x1F, 0x13, 0x23, 0x08, 0x09, 0x04, 0x03
	.byte 0x0F, 0x00, 0xB7, 0x16, 0x23, 0x08, 0x09, 0x04, 0x03, 0x69, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16
	.byte 0x05, 0x80, 0x04, 0x00, 0x16, 0x06, 0x80, 0x00, 0x00, 0x25, 0xE7, 0x00, 0x6D, 0x25, 0x09, 0x02
	.byte 0x6B, 0x02, 0x69, 0x16, 0x04, 0x80, 0x07, 0x00, 0x16, 0x05, 0x80, 0x04, 0x00, 0x16, 0x06, 0x80
	.byte 0x01, 0x00, 0x25, 0xE7, 0x00, 0x6D, 0x25, 0x09, 0x02, 0x6B, 0x02, 0x0F, 0x00, 0xBC, 0x18, 0x23
	.byte 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x2E, 0x19, 0x23, 0x08, 0x09, 0x02, 0x02, 0x6A, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_NeedToCheckOpponentsMons @ ROM pointer 0x08231957
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x8B, 0x19, 0x23, 0x08, 0x09, 0x02, 0x02, 0x69, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_RulesAreListed @ ROM pointer 0x08231A91
	.byte 0x09, 0x04, 0x05, 0x1B, 0x12, 0x23, 0x08, 0x02, 0x67, 0xA7, 0x1A, 0x23, 0x08, 0x66, 0x6F, 0x11
	.byte 0x00, 0x63, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00, 0x00, 0x06, 0x01, 0x79
	.byte 0x12, 0x23, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0x87, 0x12, 0x23, 0x08, 0x21, 0x00
	.byte 0x80, 0x02, 0x00, 0x06, 0x01, 0x95, 0x12, 0x23, 0x08, 0x21, 0x00, 0x80, 0x03, 0x00, 0x06, 0x01
	.byte 0xA3, 0x12, 0x23, 0x08, 0x21, 0x00, 0x80, 0x04, 0x00, 0x06, 0x01, 0xB1, 0x12, 0x23, 0x08, 0x21
	.byte 0x00, 0x80, 0x05, 0x00, 0x06, 0x01, 0xBF, 0x12, 0x23, 0x08, 0x21, 0x00, 0x80, 0x7F, 0x00, 0x06
	.byte 0x01, 0xBF, 0x12, 0x23, 0x08, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_ExplainBasicRules @ ROM pointer 0x08231AB7
	.byte 0x09, 0x04, 0x05, 0x1B, 0x12, 0x23, 0x08, 0x02, 0x0F, 0x00, 0x1D, 0x1B, 0x23, 0x08, 0x09, 0x04
	.byte 0x05, 0x1B, 0x12, 0x23, 0x08, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNumberRules @ ROM pointer 0x08231B6E
	.byte 0x09, 0x04, 0x05, 0x1B, 0x12, 0x23, 0x08, 0x02, 0x0F, 0x00, 0xC9, 0x1B, 0x23, 0x08, 0x09, 0x04
	.byte 0x05, 0x1B, 0x12, 0x23, 0x08, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_BattleFactoryLobby_Text_ExplainOpenLvRules @ ROM pointer 0x08231C62
	.byte 0x09, 0x04, 0x05, 0x1B, 0x12, 0x23, 0x08, 0x02, 0x6B, 0x02

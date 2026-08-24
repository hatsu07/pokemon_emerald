	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:272 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1: @ 0x08228427
	.string "まもなく 1かいせんが はじまります\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1) > 0x25
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1) < 0x25
	.space 0x25 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound1)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:276 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2: @ 0x0822844C
	.string "まもなく 2かいせんが はじまります\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2) > 0x25
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2) < 0x25
	.space 0x25 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForRound2)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:280 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals: @ 0x08228471
	.string "まもなく じゅんけっしょうが はじまります\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals) > 0x28
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals) < 0x28
	.space 0x28 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForSemifinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:284 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals: @ 0x08228499
	.string "まもなく けっしょうせんが はじまります\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals) > 0x27
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals) < 0x27
	.space 0x27 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForFinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:288 BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons
BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons: @ 0x082284C0
	.string "それでは しあいに だす\nポケモンを 2ひき えらんでください{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons) > 0x20
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons) < 0x20
	.space 0x20 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ChooseTwoMons)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:292 BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay
BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay: @ 0x082284E0
	.string "では こちらから どうぞ!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay) > 0xe
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay) < 0xe
	.space 0xe - (. - BattleFrontier_BattleDomePreBattleRoom_Text_RightThisWay)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:295 BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth
BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth: @ 0x082284EE
	.string "おつかれさまでした!\pポケモンの たいりょくを\nかいふく いたします!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth) > 0x24
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth) < 0x24
	.space 0x24 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_RestoreMonsToFullHealth)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:300 BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete
BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete: @ 0x08228512
	.string "これで 1かいせんが\nすべて しゅうりょう しました!\pかちあがりを ごらん ください!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete) > 0x2d
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete) < 0x2d
	.space 0x2d - (. - BattleFrontier_BattleDomePreBattleRoom_Text_Round1Complete)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:305 BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete
BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete: @ 0x0822853F
	.string "これで 2かいせんが\nすべて しゅうりょう しました!\pかちあがりを ごらん ください!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete) > 0x2d
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete) < 0x2d
	.space 0x2d - (. - BattleFrontier_BattleDomePreBattleRoom_Text_Round2Complete)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:310 BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete
BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete: @ 0x0822856C
	.string "これで じゅんけっしょうが\nすべて しゅうりょう しました!\pかちあがりを ごらん ください!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete) > 0x30
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete) < 0x30
	.space 0x30 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_SemifinalsComplete)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:316 BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2: @ 0x0822859C
	.string "1かいせん とっぱ\nおめでとう ございます!\pつぎは 2かいせん です\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2) > 0x36
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2) < 0x36
	.space 0x36 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForRound2)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:323 BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals: @ 0x082285D2
	.string "じゅんけっしょう しんしゅつ\nおめでとう ございます\pさあ ベスト4の げきとつです\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals) > 0x3d
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals) < 0x3d
	.space 0x3d - (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForSemifinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:330 BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals
BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals: @ 0x0822860F
	.string "けっしょう しんしゅつ\nおめでとう ございます\pゆうしょうまで あと 1しょう ですね\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals) > 0x3e
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals) < 0x3e
	.space 0x3e - (. - BattleFrontier_BattleDomePreBattleRoom_Text_CongratsReadyForFinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:336 BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer
BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer: @ 0x0822864D
	.string "{PLAYER}さんの\nつぎの あいては このかた です{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer) > 0x17
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_PlayersNextOpponentIsTrainer)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:340 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1: @ 0x08228664
	.string "げんざい トーナメントは\n1かいせん です!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1) > 0x17
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound1)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:343 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2: @ 0x0822867B
	.string "げんざい トーナメントは\n2かいせん です!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2) > 0x17
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInRound2)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:346 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals: @ 0x08228692
	.string "げんざい トーナメントは\nじゅんけっしょう です!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals) > 0x1a
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInSemifinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:349 BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals
BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals: @ 0x082286AC
	.string "げんざい トーナメントは\nけっしょうせん です!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals) > 0x19
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals) < 0x19
	.space 0x19 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_TourneyInFinals)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:352 BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame (+1 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame
BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame: @ 0x082286C5
	.string "レポートを かいて しゅうりょう しますか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame) > 0x17
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:356 BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge
BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge: @ 0x082286DC
	.string "バトルトーナメントの ちょうせんを\nちゅうし しますか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge) > 0x1d
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleDomePreBattleRoom_Text_RetireYourChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:360 BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait
BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait: @ 0x082286F9
	.string "レポートを かいています\nしばらく おまちくださいませ!{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait) > 0x1d
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleDomePreBattleRoom_Text_SavingDataPleaseWait)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:364 BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch (+2 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716
BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716: @ 0x08228716
	.string "さきほどの たたかいを\nフロンティアパスに きろく しますか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716) > 0x20
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716) < 0x20
	.space 0x20 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_RecordLastMatch_Copy_Rom_228716)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:368 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver (+1 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736: @ 0x08228736
	.string "けっしょう しんしゅつ\nおめでとう ございます\pつぎは ドームスーパースター ヒースさまに\nいどむ けっしょうせん です!\pじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736) > 0x50
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736) < 0x50
	.space 0x50 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228736)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:368 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver (+1 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786: @ 0x08228786
	.string "けっしょう しんしゅつ\nおめでとう ございます\pつぎは ドームスーパースター ヒースさまに\nいどむ けっしょうせん です!\pじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786) > 0x50
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786) < 0x50
	.space 0x50 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilver_Copy_Rom_228786)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:383 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort (+1 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6: @ 0x082287D6
	.string "さあ ヒースさまとの けっしょうせん です!\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6) > 0x29
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287D6)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:383 BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort (+1 aliases)
	.globl BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF
BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF: @ 0x082287FF
	.string "さあ ヒースさまとの けっしょうせん です!\nじゅんびの ほうは いかがですか?{EOS}"
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF) > 0x29
	.error "BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF) < 0x29
	.space 0x29 - (. - BattleFrontier_BattleDomePreBattleRoom_Text_ReadyForTuckerSilverShort_Copy_Rom_2287FF)
	.endif
	@ analyzed canonical ROM range 0x08228828-0x082294FB
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattleDomeBattleRoom_OnTransition_OnFrame_OnWarpIntoMap_OnResume: @ 0x08228828
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822883D
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomeBattleRoom_OnFrame
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleDomeBattleRoom_OnWarpIntoMap
	.byte 0x05
	.4byte EventScript_JP_0822907C
	.byte 0
EventScript_JP_0822883D: @ 0x0822883D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000A
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x400F, 0x800D
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082294A5
	call EventScript_JP_08228868
	end
EventScript_JP_08228868: @ 0x08228868
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228880
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08228886
	return
EventScript_JP_08228880: @ 0x08228880
	setvar 0x4011, 0x0064
	return
EventScript_JP_08228886: @ 0x08228886
	setvar 0x4011, 0x0069
	return
gMapScriptConditionTable_BattleFrontier_BattleDomeBattleRoom_OnFrame: @ 0x0822888C
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08228896
	.2byte 0
EventScript_JP_08228896: @ 0x08228896
	lockall
	call EventScript_JP_08228D49
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_082294C4
	@ event command: applymovement
	applymovement 0x0001, Movement_08243637
	@ event command: waitmovement
	waitmovement 0x0000
	call EventScript_JP_08228B61
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_PlayerHasEnteredDome
	callstd 0x04
	closemessage
	@ event command: showobjectat
	showobjectat 0x000D, MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
	compare_var_to_value 0x400F, 0x0003
	goto_if 0x05, EventScript_JP_082288DA
	compare_var_to_value 0x400E, 0x0000
	goto_if 0x05, EventScript_JP_082288E6
EventScript_JP_082288DA: @ 0x082288DA
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000D, BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_Delay16_WalkUpX3_WalkRightX2_1
	goto EventScript_JP_082288ED
EventScript_JP_082288E6: @ 0x082288E6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000D, BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_Delay16_WalkUpX3_WalkRightX2_2
EventScript_JP_082288ED: @ 0x082288ED
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	playse 0x00DF
	call EventScript_JP_082293BA
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x400F, 0x0003
	goto_if 0x05, EventScript_JP_0822890E
	compare_var_to_value 0x400E, 0x0000
	goto_if 0x05, EventScript_JP_08228D57
EventScript_JP_0822890E: @ 0x0822890E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0004
	@ event command: special
	special CallBattleDomeFunction
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTrainer
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000D, BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_Delay16_WalkUpX3_WalkRightX2_1 + 0x6
	@ event command: applymovement
	applymovement 0x000F, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeft_1
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattleTowerFunc
	loadword 0x00, 0x02021C7C
	callstd 0x04
	closemessage
	setvar 0x8004, 0x0005
	@ event command: special
	special CallBattleDomeFunction
	call EventScript_JP_08228FCC
	setvar 0x4002, 0x0000
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228A6C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_082289DB
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_082289DB
	setvar 0x4002, 0x0001
EventScript_JP_08228983: @ 0x08228983
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_RefereeDecisionPleaseWait
	callstd 0x04
	closemessage
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
	@ event command: applymovement
	applymovement 0x0009, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRightX4
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x00B4
	@ event command: applymovement
	applymovement 0x0009, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeftX4
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x4002, 0x0002
	goto_if 0x01, EventScript_JP_082289DB
	setvar 0x8004, 0x0013
	@ event command: special
	special CallBattleDomeFunction
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228A6C
EventScript_JP_082289DB: @ 0x082289DB
	@ event command: applymovement
	applymovement 0x0001, Movement_08243637
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0004
	@ event command: special
	special CallBattleDomeFunction
	compare_var_to_value 0x4002, 0x0000
	call_if 0x01, EventScript_JP_08228A3D
	compare_var_to_value 0x4002, 0x0001
	call_if 0x01, EventScript_JP_08228A51
	compare_var_to_value 0x4002, 0x0002
	call_if 0x01, EventScript_JP_08228A65
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
EventScript_JP_08228A19: @ 0x08228A19
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0002
	@ event command: special
	special CallBattleDomeFunction
EventScript_JP_08228A26: @ 0x08228A26
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_08229481
EventScript_JP_08228A3D: @ 0x08228A3D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0014
	setvar 0x8005, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	message BattleFrontier_BattleDomeBattleRoom_Text_TrainerIsWinner
	waitmessage
	return
EventScript_JP_08228A51: @ 0x08228A51
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0014
	setvar 0x8005, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTrainer
	waitmessage
	return
EventScript_JP_08228A65: @ 0x08228A65
	message BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
	waitmessage
	return
EventScript_JP_08228A6C: @ 0x08228A6C
	@ event command: applymovement
	applymovement 0x0001, Movement_08243637
	@ event command: waitmovement
	waitmovement 0x0000
	compare_var_to_value 0x4002, 0x0000
	call_if 0x01, EventScript_JP_08228B4F
	compare_var_to_value 0x4002, 0x0001
	call_if 0x01, EventScript_JP_08228B58
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228AEE
	setvar 0x8006, 0x0001
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM, 0xFF, 0x0005, 0x0003
	.byte 0x27
EventScript_JP_08228AEE: @ 0x08228AEE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x000D, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228B22
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLv50Champ
	callstd 0x04
	goto EventScript_JP_08228B2A
EventScript_JP_08228B22: @ 0x08228B22
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsLvOpenChamp
	callstd 0x04
EventScript_JP_08228B2A: @ 0x08228B2A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special DoDomeConfetti
	playse 0x00DF
	call EventScript_JP_082293BA
	delay 0x003C
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	special CallFrontierUtilFunc
	goto EventScript_JP_08229481
EventScript_JP_08228B4F: @ 0x08228B4F
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_PlayerIsWinner
	callstd 0x04
	return
EventScript_JP_08228B58: @ 0x08228B58
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerPlayer
	callstd 0x04
	return
EventScript_JP_08228B61: @ 0x08228B61
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0006
	@ event command: special
	special CallBattleDomeFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228BAF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	special CallBattleDomeFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228C02
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattleDomeFunction
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08228CF6
	goto EventScript_JP_08228C55
	.byte 0x03
EventScript_JP_08228BAF: @ 0x08228BAF
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228BE6
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228BED
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228BF4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228BFB
	return
EventScript_JP_08228BE6: @ 0x08228BE6
	message BattleFrontier_BattleDomeBattleRoom_Text_BrightNewHope_Copy_Rom_229694
	waitmessage
	return
EventScript_JP_08228BED: @ 0x08228BED
	message BattleFrontier_BattleDomeBattleRoom_Text_RisingStar
	waitmessage
	return
EventScript_JP_08228BF4: @ 0x08228BF4
	message BattleFrontier_BattleDomeBattleRoom_Text_WillTheyRaceToChampionship
	waitmessage
	return
EventScript_JP_08228BFB: @ 0x08228BFB
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAchieveChampionFirstTry
	waitmessage
	return
EventScript_JP_08228C02: @ 0x08228C02
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228C39
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228C40
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228C47
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228C4E
	return
EventScript_JP_08228C39: @ 0x08228C39
	message BattleFrontier_BattleDomeBattleRoom_Text_CanLossBeAvenged
	waitmessage
	return
EventScript_JP_08228C40: @ 0x08228C40
	message BattleFrontier_BattleDomeBattleRoom_Text_OnFireForChampionship
	waitmessage
	return
EventScript_JP_08228C47: @ 0x08228C47
	message BattleFrontier_BattleDomeBattleRoom_Text_WinHereAdvancesToFinal
	waitmessage
	return
EventScript_JP_08228C4E: @ 0x08228C4E
	message BattleFrontier_BattleDomeBattleRoom_Text_WillLongHeldDreamComeTrue
	waitmessage
	return
EventScript_JP_08228C55: @ 0x08228C55
	compare_var_to_value 0x400F, 0x0003
	goto_if 0x05, EventScript_JP_08228C91
	copyvar 0x8000, 0x400E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228CE4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228CED
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228CE4
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228CED
EventScript_JP_08228C91: @ 0x08228C91
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228CC8
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228CCF
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228CD6
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228CDD
	return
EventScript_JP_08228CC8: @ 0x08228CC8
	message BattleFrontier_BattleDomeBattleRoom_Text_TheInvincibleChampion
	waitmessage
	return
EventScript_JP_08228CCF: @ 0x08228CCF
	message BattleFrontier_BattleDomeBattleRoom_Text_CanAnyoneHopeToBeatTrainer
	waitmessage
	return
EventScript_JP_08228CD6: @ 0x08228CD6
	message BattleFrontier_BattleDomeBattleRoom_Text_DoBattlesExistSolelyForTrainer
	waitmessage
	return
EventScript_JP_08228CDD: @ 0x08228CDD
	message BattleFrontier_BattleDomeBattleRoom_Text_CurrentChampAimingToRetainTitle
	waitmessage
	return
EventScript_JP_08228CE4: @ 0x08228CE4
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_FeelGlowOfTrueMaster
	callstd 0x04
	return
EventScript_JP_08228CED: @ 0x08228CED
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_CanWinStreakBeStretched
	callstd 0x04
	return
EventScript_JP_08228CF6: @ 0x08228CF6
	call EventScript_JP_08228D49
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_08228D2D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228D34
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228D3B
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228D42
	return
EventScript_JP_08228D2D: @ 0x08228D2D
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerChampHasReturned
	waitmessage
	return
EventScript_JP_08228D34: @ 0x08228D34
	message BattleFrontier_BattleDomeBattleRoom_Text_FormerToughnessReturned
	waitmessage
	return
EventScript_JP_08228D3B: @ 0x08228D3B
	message BattleFrontier_BattleDomeBattleRoom_Text_WillDoExpectedAdvanceToFinals
	waitmessage
	return
EventScript_JP_08228D42: @ 0x08228D42
	message BattleFrontier_BattleDomeBattleRoom_Text_WillFormerChampRegainGlory
	waitmessage
	return
EventScript_JP_08228D49: @ 0x08228D49
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	return
EventScript_JP_08228D57: @ 0x08228D57
	copyvar 0x8000, 0x400E
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_08228D88
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228D95
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228D88
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228D95
EventScript_JP_08228D88: @ 0x08228D88
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_MakeWayForDomeAceTucker
	callstd 0x04
	goto EventScript_JP_08228D9D
EventScript_JP_08228D95: @ 0x08228D95
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_LegendHasReturnedDomeAceTucker
	callstd 0x04
EventScript_JP_08228D9D: @ 0x08228D9D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	closemessage
	@ event command: applymovement
	applymovement 0x0002, BattleFrontier_BattleDomePreBattleRoom_Movement_Delay16X12_Delay8_DisableJumpLandingGroundEffect_JumpInPlaceDown_Delay4_JumpInPlaceDown_EnableJumpLandingGroundEffect
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattleDomePreBattleRoom_Movement_Delay16X2_WalkLeftX2_WalkInPlaceFastestRight_Delay16X39_WalkRightX2_WalkInPlaceFastestDown
	@ event command: applymovement
	applymovement 0x000F, BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_WalkUpX3_FaceLeft_Delay8_Then106Actions_FaceLeft_Delay4_WalkLeftX2
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	@ event command: waitmovement
	waitmovement 0x0000
	message BattleFrontier_BattleDomeBattleRoom_Text_SpectatorTuckerChant
	waitmessage
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	copyvar 0x8000, 0x400E
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228ED2
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228E45
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_08228EFF
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08228E45
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_TuckerSilverIntro
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
EventScript_JP_08228E45: @ 0x08228E45
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_LetsSeeYourStrategy
	callstd 0x04
	call EventScript_JP_08228F8C
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228FC2
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer
	callstd 0x04
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x000C
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08228AEE
	closemessage
	@ event command: applymovement
	applymovement 0x000F, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_SeeYourFrontierPass
	callstd 0x04
	playfanfare 0x01D2
	message BattleFrontier_BattleDomeBattleRoom_Text_ReceivedTacticsSymbol
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_WontUnderestimateYouNextTime
	callstd 0x04
	goto EventScript_JP_08228AEE
EventScript_JP_08228ED2: @ 0x08228ED2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_08228EFF
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_TuckerGoldIntro
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	special CallFrontierUtilFunc
EventScript_JP_08228EFF: @ 0x08228EFF
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_UnleashAllPowerIPossess
	callstd 0x04
	call EventScript_JP_08228F8C
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0009
	goto_if 0x01, EventScript_JP_08228FAC
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_08228FC2
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_IncredibleVictorIsPlayer
	callstd 0x04
	setvar 0x8004, 0x000C
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattleDomeFunction
	setvar 0x8004, 0x000C
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_08228AEE
	closemessage
	@ event command: applymovement
	applymovement 0x000F, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeftX2
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_NeverLostWhenPowerUnleashed
	callstd 0x04
	playfanfare 0x01D2
	message BattleFrontier_BattleDomeBattleRoom_Text_TacticsSymbolTookGoldenShine
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	special CallFrontierUtilFunc
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_LookForwardToNextEncounter
	callstd 0x04
	goto EventScript_JP_08228AEE
EventScript_JP_08228F8C: @ 0x08228F8C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_PlayerVersusTucker
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x000D, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRight
	@ event command: applymovement
	applymovement 0x000F, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeft_2
	@ event command: waitmovement
	waitmovement 0x0000
	call EventScript_JP_08228FCC
	return
EventScript_JP_08228FAC: @ 0x08228FAC
	loadword 0x00, BattleFrontier_BattleDomeBattleRoom_Text_WinnerIsTucker
	callstd 0x04
	playse 0x00DF
	call EventScript_JP_082293BA
	waitse
	goto EventScript_JP_08228A19
EventScript_JP_08228FC2: @ 0x08228FC2
	setvar 0x4002, 0x0002
	goto EventScript_JP_08228983
EventScript_JP_08228FCC: @ 0x08228FCC
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0000
	@ event command: special
	special CallFrontierUtilFunc
	@ event command: special
	special HealPlayerParty
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0000
	setvar 0x4009, 0x0001
	@ event command: special
	special DoSpecialTrainerBattle
	waitstate
	setvar 0x4009, 0x0000
	setvar 0x8004, 0x0011
	@ event command: special
	special CallBattleDomeFunction
	@ event command: special
	special HealPlayerParty
	setvar 0x8004, 0x0010
	@ event command: special
	special CallBattleDomeFunction
	return
gMapScriptConditionTable_BattleFrontier_BattleDomeBattleRoom_OnWarpIntoMap: @ 0x0822900D
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08229017
	.2byte 0
EventScript_JP_08229017: @ 0x08229017
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: hideobjectat
	hideobjectat 0x000D, MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM
	call EventScript_JP_0822908E
	call EventScript_JP_08228868
	setvar 0x4001, 0x0001
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleDomePreBattleRoom_Movement_SetInvisible
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0003
	goto_if 0x05, EventScript_JP_0822907B
	setvar 0x8004, 0x0009
	@ event command: special
	special CallFrontierUtilFunc
	copyvar 0x400E, 0x800D
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822907B
	call 0x08222264
	setobjectxyperm 0x000F, 0x000D, 0x0009
	@ event command: removeobject
	removeobject 0x000F
	@ event command: addobject
	addobject 0x000F
	@ event command: applymovement
	applymovement 0x000F, BattleFrontier_BattleDomePreBattleRoom_Movement_FaceUp_SetInvisible
EventScript_JP_0822907B: @ 0x0822907B
	end
EventScript_JP_0822907C: @ 0x0822907C
	compare_var_to_value 0x4009, 0x0001
	call_if 0x01, EventScript_JP_08229088
	end
EventScript_JP_08229088: @ 0x08229088
	call EventScript_JP_0822908E
	return
EventScript_JP_0822908E: @ 0x0822908E
	compare_var_to_value 0x400F, 0x0000
	call_if 0x01, EventScript_JP_082290BB
	compare_var_to_value 0x400F, 0x0001
	call_if 0x01, EventScript_JP_082290BC
	compare_var_to_value 0x400F, 0x0002
	call_if 0x01, EventScript_JP_08229120
	compare_var_to_value 0x400F, 0x0003
	call_if 0x01, EventScript_JP_082291DE
	return
EventScript_JP_082290BB: @ 0x082290BB
	return
EventScript_JP_082290BC: @ 0x082290BC
	createvobject 0x2E, 0x01, 0x0003, 0x0000, 0x03, 0x01
	createvobject 0x16, 0x04, 0x0006, 0x0000, 0x03, 0x01
	createvobject 0x05, 0x06, 0x0008, 0x0000, 0x03, 0x01
	createvobject 0x0C, 0x09, 0x000B, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x0B, 0x000D, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x0D, 0x000F, 0x0000, 0x03, 0x01
	createvobject 0x2D, 0x13, 0x0007, 0x0001, 0x03, 0x01
	createvobject 0x22, 0x16, 0x000B, 0x0001, 0x03, 0x01
	createvobject 0x0B, 0x19, 0x000F, 0x0001, 0x03, 0x01
	createvobject 0x23, 0x1A, 0x0002, 0x0002, 0x03, 0x01
	createvobject 0x26, 0x1D, 0x0005, 0x0001, 0x03, 0x01
	return
EventScript_JP_08229120: @ 0x08229120
	createvobject 0x2E, 0x01, 0x0003, 0x0000, 0x03, 0x01
	createvobject 0x16, 0x04, 0x0006, 0x0000, 0x03, 0x01
	createvobject 0x05, 0x06, 0x0008, 0x0000, 0x03, 0x01
	createvobject 0x14, 0x07, 0x0009, 0x0000, 0x03, 0x01
	createvobject 0x0C, 0x09, 0x000B, 0x0000, 0x03, 0x01
	createvobject 0x2F, 0x0A, 0x000C, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x0B, 0x000D, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x0D, 0x000F, 0x0000, 0x03, 0x01
	createvobject 0x30, 0x0F, 0x0002, 0x0001, 0x03, 0x01
	createvobject 0x05, 0x10, 0x0003, 0x0001, 0x03, 0x01
	createvobject 0x14, 0x11, 0x0004, 0x0001, 0x03, 0x01
	createvobject 0x2D, 0x13, 0x0007, 0x0001, 0x03, 0x01
	createvobject 0x16, 0x14, 0x0009, 0x0001, 0x03, 0x01
	createvobject 0x22, 0x16, 0x000B, 0x0001, 0x03, 0x01
	createvobject 0x2E, 0x17, 0x000D, 0x0001, 0x03, 0x01
	createvobject 0x0B, 0x19, 0x000F, 0x0001, 0x03, 0x01
	createvobject 0x23, 0x1A, 0x0002, 0x0002, 0x03, 0x01
	createvobject 0x28, 0x1C, 0x0005, 0x0002, 0x03, 0x01
	createvobject 0x26, 0x1D, 0x0005, 0x0001, 0x03, 0x01
	createvobject 0x53, 0x1E, 0x0006, 0x0002, 0x03, 0x01
	createvobject 0x22, 0x1F, 0x0008, 0x0002, 0x03, 0x01
	return
EventScript_JP_082291DE: @ 0x082291DE
	createvobject 0x05, 0x00, 0x0002, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x01, 0x0003, 0x0000, 0x03, 0x01
	createvobject 0x2D, 0x02, 0x000F, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x03, 0x0005, 0x0000, 0x03, 0x01
	createvobject 0x16, 0x04, 0x0006, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x05, 0x0007, 0x0000, 0x03, 0x01
	createvobject 0x05, 0x06, 0x0008, 0x0000, 0x03, 0x01
	createvobject 0x14, 0x07, 0x0009, 0x0000, 0x03, 0x01
	createvobject 0x18, 0x08, 0x000A, 0x0000, 0x03, 0x01
	createvobject 0x0C, 0x09, 0x000B, 0x0000, 0x03, 0x01
	createvobject 0x2F, 0x0A, 0x000C, 0x0000, 0x03, 0x01
	createvobject 0x2E, 0x0B, 0x000D, 0x0000, 0x03, 0x01
	createvobject 0x2D, 0x0C, 0x000E, 0x0000, 0x03, 0x01
	createvobject 0x42, 0x0D, 0x000F, 0x0002, 0x03, 0x01
	createvobject 0x37, 0x0E, 0x000C, 0x0002, 0x03, 0x01
	createvobject 0x30, 0x0F, 0x0002, 0x0001, 0x03, 0x01
	createvobject 0x05, 0x10, 0x0003, 0x0001, 0x03, 0x01
	createvobject 0x14, 0x11, 0x0004, 0x0001, 0x03, 0x01
	createvobject 0x18, 0x12, 0x0006, 0x0001, 0x03, 0x01
	createvobject 0x2D, 0x13, 0x0007, 0x0001, 0x03, 0x01
	createvobject 0x16, 0x14, 0x0009, 0x0001, 0x03, 0x01
	createvobject 0x17, 0x15, 0x000A, 0x0001, 0x03, 0x01
	createvobject 0x22, 0x16, 0x000B, 0x0001, 0x03, 0x01
	createvobject 0x2E, 0x17, 0x000D, 0x0001, 0x03, 0x01
	createvobject 0x30, 0x18, 0x000E, 0x0001, 0x03, 0x01
	createvobject 0x0B, 0x19, 0x000F, 0x0001, 0x03, 0x01
	createvobject 0x23, 0x1A, 0x0002, 0x0002, 0x03, 0x01
	createvobject 0x11, 0x1B, 0x0003, 0x0002, 0x03, 0x01
	createvobject 0x28, 0x1C, 0x0005, 0x0002, 0x03, 0x01
	createvobject 0x26, 0x1D, 0x0005, 0x0001, 0x03, 0x01
	createvobject 0x53, 0x1E, 0x0006, 0x0002, 0x03, 0x01
	createvobject 0x22, 0x1F, 0x0008, 0x0002, 0x03, 0x01
	return
BattleFrontier_BattleDomePreBattleRoom_Movement_SetInvisible: @ 0x082292FF
	@ object movement sequence
	set_invisible
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_Delay16_WalkUpX3_WalkRightX2_1: @ 0x08229301
	@ object movement sequence
	set_visible
	delay_16
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkUp: @ 0x08229309
	@ object movement sequence
	walk_up
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_Delay16_WalkUpX3_WalkRightX2_2: @ 0x0822930B
	@ object movement sequence
	set_visible
	delay_16
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRight: @ 0x08229313
	@ object movement sequence
	walk_right
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeft_1: @ 0x08229315
	@ object movement sequence
	walk_left
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_FaceUp_SetInvisible: @ 0x08229317
	@ object movement sequence
	face_up
	set_invisible
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_SetVisible_WalkUpX3_FaceLeft_Delay8_Then106Actions_FaceLeft_Delay4_WalkLeftX2: @ 0x0822931A
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	face_left
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_left
	delay_16
	walk_fast_up
	walk_fast_up
	face_left
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_left
	jump_2_left
	unlock_facing_direction
	face_up
	lock_facing_direction
	jump_2_left
	jump_2_left
	unlock_facing_direction
	face_right
	lock_facing_direction
	jump_2_left
	unlock_facing_direction
	face_down
	delay_2
	face_left
	delay_8
	delay_4
	face_up
	delay_8
	delay_4
	face_right
	delay_8
	delay_4
	face_down
	delay_8
	delay_4
	face_left
	delay_4
	face_up
	delay_4
	face_right
	delay_4
	face_down
	delay_4
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	lock_facing_direction
	walk_right
	walk_slow_right
	walk_right
	walk_slow_right
	unlock_facing_direction
	face_up
	delay_16
	jump_in_place_up
	jump_in_place_up
	delay_16
	walk_right
	walk_right
	walk_right
	jump_in_place_up
	delay_16
	walk_right
	walk_down
	walk_down
	face_left
	delay_2
	face_up
	delay_2
	face_right
	delay_2
	face_down
	delay_2
	face_left
	delay_4
	walk_left
	walk_left
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_Delay16X2_WalkLeftX2_WalkInPlaceFastestRight_Delay16X39_WalkRightX2_WalkInPlaceFastestDown: @ 0x08229385
	@ object movement sequence
	delay_16
	delay_16
	walk_left
	walk_left
	walk_in_place_fastest_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeft_2: @ 0x082293B5
	@ object movement sequence
	walk_left
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeftX2: @ 0x082293B7
	@ object movement sequence
	walk_left
	walk_left
	step_end
EventScript_JP_082293BA: @ 0x082293BA
	turnvobject 0x00, 0x04
	turnvobject 0x02, 0x04
	turnvobject 0x04, 0x04
	turnvobject 0x06, 0x04
	turnvobject 0x08, 0x04
	turnvobject 0x0A, 0x03
	turnvobject 0x0C, 0x03
	turnvobject 0x0E, 0x03
	turnvobject 0x10, 0x03
	turnvobject 0x12, 0x03
	turnvobject 0x14, 0x04
	turnvobject 0x16, 0x04
	turnvobject 0x18, 0x04
	turnvobject 0x1A, 0x04
	turnvobject 0x1C, 0x04
	turnvobject 0x1E, 0x04
	delay 0x0014
	turnvobject 0x00, 0x01
	turnvobject 0x02, 0x01
	turnvobject 0x04, 0x01
	turnvobject 0x06, 0x01
	turnvobject 0x08, 0x01
	turnvobject 0x0A, 0x01
	turnvobject 0x0C, 0x01
	turnvobject 0x0E, 0x01
	turnvobject 0x10, 0x01
	turnvobject 0x12, 0x01
	turnvobject 0x14, 0x01
	turnvobject 0x16, 0x01
	turnvobject 0x18, 0x01
	turnvobject 0x1A, 0x01
	turnvobject 0x1C, 0x01
	turnvobject 0x1E, 0x01
	delay 0x0014
	turnvobject 0x01, 0x04
	turnvobject 0x03, 0x04
	turnvobject 0x05, 0x04
	turnvobject 0x07, 0x04
	turnvobject 0x09, 0x04
	turnvobject 0x0B, 0x03
	turnvobject 0x0D, 0x03
	turnvobject 0x0F, 0x03
	turnvobject 0x11, 0x03
	turnvobject 0x13, 0x03
	turnvobject 0x15, 0x04
	turnvobject 0x17, 0x04
	turnvobject 0x19, 0x04
	turnvobject 0x1B, 0x03
	turnvobject 0x1F, 0x03
	delay 0x0014
	turnvobject 0x01, 0x01
	turnvobject 0x03, 0x01
	turnvobject 0x05, 0x01
	turnvobject 0x07, 0x01
	turnvobject 0x09, 0x01
	turnvobject 0x0B, 0x01
	turnvobject 0x0D, 0x01
	turnvobject 0x0F, 0x01
	turnvobject 0x11, 0x01
	turnvobject 0x13, 0x01
	turnvobject 0x15, 0x01
	turnvobject 0x17, 0x01
	turnvobject 0x19, 0x01
	turnvobject 0x1B, 0x01
	turnvobject 0x1F, 0x01
	delay 0x0014
	return
EventScript_JP_08229481: @ 0x08229481
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x800D, 0x40CE
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822949B
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 0xFF, 0x0005, 0x000B
	.byte 0x27, 0x02
EventScript_JP_0822949B: @ 0x0822949B
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_DOME_LOBBY, 0xFF, 0x0011, 0x000B
	.byte 0x27, 0x02
EventScript_JP_082294A5: @ 0x082294A5
	random 0x0002
	copyvar 0x400D, 0x800D
	compare_var_to_value 0x400D, 0x0000
	goto_if 0x01, 0x08244178
	setobjectxyperm 0x0006, 0x0002, 0x0000
	setobjectmovementtype 0x0006, 0x0A
	return
EventScript_JP_082294C4: @ 0x082294C4
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	compare_var_to_value 0x400D, 0x0000
	goto_if 0x01, 0x08244178
	@ event command: applymovement
	applymovement 0x0006, BattleFrontier_BattleDomePreBattleRoom_Movement_WalkDownX2_WalkRightX2_WalkInPlaceFastestDown
	return
BattleFrontier_BattleDomePreBattleRoom_Movement_Delay16X12_Delay8_DisableJumpLandingGroundEffect_JumpInPlaceDown_Delay4_JumpInPlaceDown_EnableJumpLandingGroundEffect: @ 0x082294D7
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_8
	disable_jump_landing_ground_effect
	jump_in_place_down
	delay_4
	jump_in_place_down
	enable_jump_landing_ground_effect
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkDownX2_WalkRightX2_WalkInPlaceFastestDown: @ 0x082294EA
	@ object movement sequence
	walk_down
	walk_down
	walk_right
	walk_right
	walk_in_place_fastest_down
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkRightX4: @ 0x082294F0
	@ object movement sequence
	walk_right
	walk_right
	walk_right
	walk_right
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkInPlaceFastestLeft: @ 0x082294F5
	@ object movement sequence
	walk_in_place_fastest_left
	step_end
BattleFrontier_BattleDomePreBattleRoom_Movement_WalkLeftX4: @ 0x082294F7
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

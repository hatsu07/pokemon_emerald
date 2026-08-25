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

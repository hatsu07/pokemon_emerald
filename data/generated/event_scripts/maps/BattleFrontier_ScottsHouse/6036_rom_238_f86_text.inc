	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:212 BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier
	.globl BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier
BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier: @ 0x082389B5
	.string "エニシダ『ああ いらっしゃい\nへへ…… せまい ところで ごめんよ\pでは あらためて {PLAYER}{KUN}\nようこそ バトルフロンティアへ!\pここは わたしの ゆめの けっしょう!\nなんねんも かかって やっと\lかたちに することが できたんだ!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier) > 0x76
	.error "BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier) < 0x76
	.space 0x76 - (. - BattleFrontier_ScottsHouse_Text_WelcomeToBattleFrontier)
	.endif
	@ field-script:0x2388F3 FieldScriptText_238A2B
	.globl gText_Rom_238A2B
gText_Rom_238A2B: @ 0x08238A2B
	.string "おもえば　ながい　みちのりだった……\nつよい　トレーナーを　もとめて\lただひとり　たびだち……\lここまで　くるのに　どれだけの\lどりょくと　じかんが　ひつようだったか……"
	.byte EOS
	.if (. - gText_Rom_238A2B) > 0x56
	.error "gText_Rom_238A2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238A2B) < 0x56
	.space 0x56 - (. - gText_Rom_238A2B)
	.endif
	@ field-script:0x238905 FieldScriptText_238A81
	.globl gText_Rom_238A81
gText_Rom_238A81: @ 0x08238A81
	.string "いや　こんな　むかしばなしを\nしていても　はじまらないな！\pとにかく　こころ　ゆくまで\nポケモンしょうぶを　たのしんで　くれ！\pこれは　わたしと　{0xFD}{0x01}{0xFD}{0x05}が\nなんども　たびさきで　であった\lきねんだよ！"
	.byte EOS
	.if (. - gText_Rom_238A81) > 0x66
	.error "gText_Rom_238A81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238A81) < 0x66
	.space 0x66 - (. - gText_Rom_238A81)
	.endif
	@ field-script:0x238973 FieldScriptText_238AE7
	.globl gText_Rom_238AE7
gText_Rom_238AE7: @ 0x08238AE7
	.string "{0xFD}{0x01}は　バトルポイントを\n{0xFD}{0x02}　BP　もらった！"
	.byte EOS
	.if (. - gText_Rom_238AE7) > 0x19
	.error "gText_Rom_238AE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238AE7) < 0x19
	.space 0x19 - (. - gText_Rom_238AE7)
	.endif
	@ field-script:0x23897B FieldScriptText_238B00
	.globl gText_Rom_238B00
gText_Rom_238B00: @ 0x08238B00
	.string "エニシダ『バトルポイントは\nフロンティアパスで　みられるからね！\lポイントは　この　フロンティアで\lかつやく　すれば　するほど\lたまっていく　ものなんだ！\pほしい　ものと　ひきかえたり\nすきなように　かつようして　くれ！"
	.byte EOS
	.if (. - gText_Rom_238B00) > 0x6f
	.error "gText_Rom_238B00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238B00) < 0x6f
	.space 0x6f - (. - gText_Rom_238B00)
	.endif
	@ field-script:0x2388B1 FieldScriptText_238B6F
	.globl gText_Rom_238B6F
gText_Rom_238B6F: @ 0x08238B6F
	.string "きみの　かつやく\nおおいに　きたい　しているからね！"
	.byte EOS
	.if (. - gText_Rom_238B6F) > 0x1b
	.error "gText_Rom_238B6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238B6F) < 0x1b
	.space 0x1b - (. - gText_Rom_238B6F)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:248 BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers
	.globl BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers
BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers: @ 0x08238B8A
	.string "エニシダ『どの トレーナーにも\nそれぞれの じんせいが あるだろ?\pでも たたかう ときは\nそんなこと ぜんぜん かんけいない\lみんな いっしょ なんだよね!\pわたしは そういう\nたたかいの じゅんすいさ ってのが\lとても すきなんだよ\pだから いろんな ところに でかけて\nしんけんに たたかってる トレーナーを\lいっぱい しょうたい してくるのさ!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers) > 0xb1
	.error "BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers) < 0xb1
	.space 0xb1 - (. - BattleFrontier_ScottsHouse_Text_WhyIGoSeekingTrainers)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:251 BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain
	.globl BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain
BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain: @ 0x08238C3B
	.string "エニシダ『わが ブレーンたち から\nフロンティアパスの シンボルは\lもう もらったかな?\pわたしが みいだした\nさいきょうの フロンティアブレーンも\lきみの つよさを みたら\lおそらく おどろく だろうね!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain) > 0x68
	.error "BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain) < 0x68
	.space 0x68 - (. - BattleFrontier_ScottsHouse_Text_HaveYouMetFrontierBrain)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:254 BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier
	.globl BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier
BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier: @ 0x08238CA3
	.string "エニシダ『きみは たしか\nしょうぶ だけでは なくて\lポケモンずかんも つくって いたね!\pもしかしたら バトルフロンティア にも\nポケモンと であえる ばしょが\lあるかも しれないよ? うふふ……"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier) > 0x64
	.error "BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier) < 0x64
	.space 0x64 - (. - BattleFrontier_ScottsHouse_Text_MayFindWildMonsInFrontier)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:257 BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols
	.globl BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols
BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols: @ 0x08238D07
	.string "エニシダ『バトルフロンティアを\nたのしんで くれて いるかな?\p……って おおっっ!\pきみの フロンティアパスっ!\nぎんのシンボルが すべて\lそろって いるじゃ ないか!\pすごいなあ きみは おもったとおり\nつよい トレーナー だったんだなあ!\pふつうは こんな ことは しないんだが\nぜひ きねんに これを もらってくれ!\lきみなら つかいこなせる はずだよ……!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols) > 0xb8
	.error "BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols) < 0xb8
	.space 0xb8 - (. - BattleFrontier_ScottsHouse_Text_YouveCollectedAllSilverSymbols)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:260 BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols
	.globl BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols
BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols: @ 0x08238DBF
	.string "エニシダ『バトルフロンティアは\nまんきつ してるかな?\p……って うひょおおっっ!\pきみの フロンティアパスーっ!\nきんのシンボルが すべて\lそろって いるじゃ ないか!\pこれはすごいっ!\nやっぱり きみは おもったとおり\lすごい トレーナー だったんだなあ!\p…… …… ……\p{PLAYER}{KUN}! ぜひ きみに\nこれを プレゼント させて くれ!\pきみならば これの かちを\nわかって くれると おもうんだ!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols) > 0xca
	.error "BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols) < 0xca
	.space 0xca - (. - BattleFrontier_ScottsHouse_Text_YouveCollectedAllGoldSymbols)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:263 BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere
	.globl BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere
BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere: @ 0x08238E89
	.string "いやー われながら\nトレーナーを みるめが さえてるなー\lきみを つれてきて ほんと よかった!\lほく ほく"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere) > 0x37
	.error "BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere) < 0x37
	.space 0x37 - (. - BattleFrontier_ScottsHouse_Text_SoGladIBroughtYouHere)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:266 BattleFrontier_ScottsHouse_Text_BerryPocketStuffed
	.globl BattleFrontier_ScottsHouse_Text_BerryPocketStuffed
BattleFrontier_ScottsHouse_Text_BerryPocketStuffed: @ 0x08238EC0
	.string "きのみポケットが いっぱい みたいね"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_BerryPocketStuffed) > 0x13
	.error "BattleFrontier_ScottsHouse_Text_BerryPocketStuffed may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_BerryPocketStuffed) < 0x13
	.space 0x13 - (. - BattleFrontier_ScottsHouse_Text_BerryPocketStuffed)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:269 BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow
	.globl BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow
BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow: @ 0x08238ED3
	.string "エニシダ『おっ きいたよ!\nバトルタワーでの かつやく!\l50にん いじょう かちぬいたって?\pすごいなあ きねんに\nこれを うけとって くれよ!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow) > 0x4a
	.error "BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow) < 0x4a
	.space 0x4a - (. - BattleFrontier_ScottsHouse_Text_Beat50TrainersInARow)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:272 BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow
	.globl BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow
BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow: @ 0x08238F1D
	.string "エニシダ『おおうっ きいたよ!\nバトルタワーでの だいかつやく!\l100にん いじょう かちぬいたって?\pすごすぎるなー!\nぜひ これを きねんに うけとってくれ!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow) > 0x53
	.error "BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow) < 0x53
	.space 0x53 - (. - BattleFrontier_ScottsHouse_Text_Beat100TrainersInARow)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:275 BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings
	.globl BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings
BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings: @ 0x08238F70
	.string "これからも ますます\nきたい しているよ!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings) > 0x16
	.error "BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings) < 0x16
	.space 0x16 - (. - BattleFrontier_ScottsHouse_Text_ExpectingToHearEvenGreaterThings)
	.endif
	@ data/maps/BattleFrontier_ScottsHouse/scripts.inc:278 BattleFrontier_ScottsHouse_Text_ComeBackForThisLater
	.globl BattleFrontier_ScottsHouse_Text_ComeBackForThisLater
BattleFrontier_ScottsHouse_Text_ComeBackForThisLater: @ 0x08238F86
	.string "……って にもつが いっぱいなら\nとって おくから またおいで!"
	.byte EOS
	.if (. - BattleFrontier_ScottsHouse_Text_ComeBackForThisLater) > 0x21
	.error "BattleFrontier_ScottsHouse_Text_ComeBackForThisLater may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_ScottsHouse_Text_ComeBackForThisLater) < 0x21
	.space 0x21 - (. - BattleFrontier_ScottsHouse_Text_ComeBackForThisLater)
	.endif
	@ Embedded ROM bytes: file offset 0x238FA7, size 0x6D
	.byte 0x00, 0x6A, 0x5A, 0x0F, 0x00, 0x14, 0x90, 0x23, 0x08, 0x09, 0x05, 0x21, 0x0D, 0x80, 0x00, 0x00
	.byte 0x06, 0x01, 0xEF, 0x8F, 0x23, 0x08, 0x25, 0x9F, 0x00, 0x27, 0x6A, 0x5A, 0x21, 0x04, 0x80, 0xFF
	.byte 0x00, 0x06, 0x01, 0xEF, 0x8F, 0x23, 0x08, 0x26, 0x0D, 0x80, 0x46, 0x01, 0x21, 0x0D, 0x80, 0x9C
	.byte 0x01, 0x06, 0x01, 0xE5, 0x8F, 0x23, 0x08, 0x25, 0xC3, 0x01, 0x66, 0x6D, 0x6C, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge5_Text_NatureGirlEgg
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge5_Text_NatureGirlNoneShown
	.byte 0x09, 0x04
	.byte 0x6C, 0x02, 0x0F, 0x00
	.4byte BattleFrontier_Lounge5_Text_LadyClaimsSheUnderstandsPokemon
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0x6A, 0x95, 0x23
	.byte 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0x92, 0x95, 0x23, 0x08, 0x09, 0x02, 0x02

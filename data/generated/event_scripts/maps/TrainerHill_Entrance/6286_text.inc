	@ data/maps/TrainerHill_Entrance/scripts.inc:296 TrainerHill_Entrance_Text_WelcomeToTrainerHill
	.globl TrainerHill_Entrance_Text_WelcomeToTrainerHill
TrainerHill_Entrance_Text_WelcomeToTrainerHill: @ 0x0823BA7C
	.string "ようこそ いらっしゃいました!\pここは さまざまな トレーナーさんとの\nタッグバトルが たのしめる\lトレーナーヒルです!"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_WelcomeToTrainerHill) > 0x3d
	.error "TrainerHill_Entrance_Text_WelcomeToTrainerHill may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_WelcomeToTrainerHill) < 0x3d
	.space 0x3d - (. - TrainerHill_Entrance_Text_WelcomeToTrainerHill)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:299 TrainerHill_Entrance_Text_SaveGameBeforeEnter
	.globl gText_Rom_23BAB9
gText_Rom_23BAB9: @ 0x0823BAB9
	.string "はじめて ごりようになる\nトレーナーさん ですね\pごりように なるまえに レポートを\nおかきくださいませ"
	.byte EOS
	.if (. - gText_Rom_23BAB9) > 0x35
	.error "gText_Rom_23BAB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BAB9) < 0x35
	.space 0x35 - (. - gText_Rom_23BAB9)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:302 TrainerHill_Entrance_Text_TrainersUpToFloorX
	.globl TrainerHill_Entrance_Text_TrainersUpToFloorX
TrainerHill_Entrance_Text_TrainersUpToFloorX: @ 0x0823BAEE
	.string "ただいま あつまっている\nトレーナーさんは ……\p{STR_VAR_1}かい までの ようですね"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_TrainersUpToFloorX) > 0x28
	.error "TrainerHill_Entrance_Text_TrainersUpToFloorX may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_TrainersUpToFloorX) < 0x28
	.space 0x28 - (. - TrainerHill_Entrance_Text_TrainersUpToFloorX)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:305 TrainerHill_Entrance_Text_TrainersInEveryRoom
	.globl gText_Rom_23BB16
gText_Rom_23BB16: @ 0x0823BB16
	.string "ただいま あつまっている\nトレーナーさんは ……\pすべての へやに トレーナーさんが\nあつまっている みたいですね!"
	.byte EOS
	.if (. - gText_Rom_23BB16) > 0x3b
	.error "gText_Rom_23BB16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BB16) < 0x3b
	.space 0x3b - (. - gText_Rom_23BB16)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:308 TrainerHill_Entrance_Text_LikeToChallengeTrainers
	.globl TrainerHill_Entrance_Text_LikeToChallengeTrainers
TrainerHill_Entrance_Text_LikeToChallengeTrainers: @ 0x0823BB51
	.string "トレーナーさんたちと\nしょうぶ しますか?"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_LikeToChallengeTrainers) > 0x16
	.error "TrainerHill_Entrance_Text_LikeToChallengeTrainers may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_LikeToChallengeTrainers) < 0x16
	.space 0x16 - (. - TrainerHill_Entrance_Text_LikeToChallengeTrainers)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:311 TrainerHill_Entrance_Text_TimeProgessGetSetGo
	.globl gText_Rom_23BB67
gText_Rom_23BB67: @ 0x0823BB67
	.string "それでは じかんを はかりますので\nがんばってくださいね!\pいちについて…………………\pようい……\pドン!!"
	.byte EOS
	.if (. - gText_Rom_23BB67) > 0x37
	.error "gText_Rom_23BB67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BB67) < 0x37
	.space 0x37 - (. - gText_Rom_23BB67)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:314 TrainerHill_Entrance_Text_PleaseVisitUsAgain
	.globl TrainerHill_Entrance_Text_PleaseVisitUsAgain
TrainerHill_Entrance_Text_PleaseVisitUsAgain: @ 0x0823BB9E
	.string "また おこしくださいね!"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_PleaseVisitUsAgain) > 0xd
	.error "TrainerHill_Entrance_Text_PleaseVisitUsAgain may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_PleaseVisitUsAgain) < 0xd
	.space 0xd - (. - TrainerHill_Entrance_Text_PleaseVisitUsAgain)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:317 TrainerHill_Entrance_Text_TooBadTremendousEffort
	.globl TrainerHill_Entrance_Text_TooBadTremendousEffort
TrainerHill_Entrance_Text_TooBadTremendousEffort: @ 0x0823BBAB
	.string "ざんねん でしたね!\pとっても いい しょうぶ\nだったと おもいます\pまた きてくださいね!"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_TooBadTremendousEffort) > 0x2f
	.error "TrainerHill_Entrance_Text_TooBadTremendousEffort may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_TooBadTremendousEffort) < 0x2f
	.space 0x2f - (. - TrainerHill_Entrance_Text_TooBadTremendousEffort)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:320 TrainerHill_Entrance_Text_HopeYouGiveItYourBest
	.globl TrainerHill_Entrance_Text_HopeYouGiveItYourBest
TrainerHill_Entrance_Text_HopeYouGiveItYourBest: @ 0x0823BBDA
	.string "がんばってくださいね!"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_HopeYouGiveItYourBest) > 0xc
	.error "TrainerHill_Entrance_Text_HopeYouGiveItYourBest may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_HopeYouGiveItYourBest) < 0xc
	.space 0xc - (. - TrainerHill_Entrance_Text_HopeYouGiveItYourBest)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:323 TrainerHill_Entrance_Text_MovedReceptionHereForSwitch
	.globl TrainerHill_Entrance_Text_MovedReceptionHereForSwitch
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch: @ 0x0823BBE6
	.string "トレーナーさんたちが いれかわって\nあぶないので\pこちらに いどう させて\nいただきました!\pごめんなさい!"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_MovedReceptionHereForSwitch) > 0x37
	.error "TrainerHill_Entrance_Text_MovedReceptionHereForSwitch may not grow beyond its original slot"
	.endif
	.if (. - TrainerHill_Entrance_Text_MovedReceptionHereForSwitch) < 0x37
	.space 0x37 - (. - TrainerHill_Entrance_Text_MovedReceptionHereForSwitch)
	.endif
	@ data/maps/BattleFrontier_BattleDomeLobby/scripts.inc:537 BattleFrontier_BattleDomeLobby_Text_ThankYouForPlaying (+1 aliases)
	.globl gText_Rom_23BC1D
gText_Rom_23BC1D: @ 0x0823BC1D
	.string "おつかれさまでした!"
	.byte EOS
	.if (. - gText_Rom_23BC1D) > 0xb
	.error "gText_Rom_23BC1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BC1D) < 0xb
	.space 0xb - (. - gText_Rom_23BC1D)
	.endif
	@ data/maps/TrainerHill_Entrance/scripts.inc:329 TrainerHill_Entrance_Text_ExplainTrainerHill
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl TrainerHill_Entrance_Text_ExplainTrainerHill
TrainerHill_Entrance_Text_ExplainTrainerHill: @ 0x0823BC28
	.string "ここ トレーナーヒルでは\nタイムアタックという きょうぎが\lおこなわれます\pはやい じかんは タイムボードに\nのりますので ともだちと じかんを\lくらべて みてください\pうけつけから おくじょうにいる\nオーナーに はなしかけるまでの\lじかんが はかられます\pまた トレーナーとの しょうぶで\nかっても けいけんちや おかねの\lやりとりは おこなわれません"
	.byte EOS
	.if (. - TrainerHill_Entrance_Text_ExplainTrainerHill) != 0xb2
	.error "TrainerHill_Entrance_Text_ExplainTrainerHill must retain its original byte length"
	.endif
	.globl gText_Rom_23BCD6
	.set gText_Rom_23BCD6, TrainerHill_Entrance_Text_ExplainTrainerHill + 0xae
	@ data/maps/TrainerHill_Entrance/scripts.inc:333 TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon
	.globl gText_Rom_23BCDA
gText_Rom_23BCDA: @ 0x0823BCDA
	.string "おや?\nてもちが 1ぴきしか いないようですね\pてもちを 2ひき いじょうに してから\nまたおこし くださいませ"
	.byte EOS
	.if (. - gText_Rom_23BCDA) > 0x39
	.error "gText_Rom_23BCDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23BCDA) < 0x39
	.space 0x39 - (. - gText_Rom_23BCDA)
	.endif

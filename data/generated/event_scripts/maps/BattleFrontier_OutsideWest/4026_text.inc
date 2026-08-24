	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:330 BattleFrontier_OutsideWest_Text_LilycoveItIs (+1 aliases)
	.globl BattleFrontier_OutsideWest_Text_LilycoveItIs
BattleFrontier_OutsideWest_Text_LilycoveItIs: @ 0x0821EFDD
	.string "ミナモシティ ですね!"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_LilycoveItIs) > 0xc
	.error "BattleFrontier_OutsideWest_Text_LilycoveItIs may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_LilycoveItIs) < 0xc
	.space 0xc - (. - BattleFrontier_OutsideWest_Text_LilycoveItIs)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl gText_Rom_21EFE9
gText_Rom_21EFE9: @ 0x0821EFE9
	.string "また ごりよう ください!"
	.byte EOS
	.if (. - gText_Rom_21EFE9) > 0xe
	.error "gText_Rom_21EFE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFE9) < 0xe
	.space 0xe - (. - gText_Rom_21EFE9)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:336 BattleFrontier_OutsideWest_Text_PleaseBoardFerry (+1 aliases)
	.globl gText_Rom_21EFF7
gText_Rom_21EFF7: @ 0x0821EFF7
	.string "れんらくせんに のって おまちください"
	.byte EOS
	.if (. - gText_Rom_21EFF7) > 0x14
	.error "gText_Rom_21EFF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFF7) < 0x14
	.space 0x14 - (. - gText_Rom_21EFF7)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:339 BattleFrontier_OutsideWest_Text_ThenWhereWouldYouLikeToGo (+1 aliases)
	.globl gText_Rom_21F00B
gText_Rom_21F00B: @ 0x0821F00B
	.string "いきさきは どちら でしょう?"
	.byte EOS
	.if (. - gText_Rom_21F00B) > 0x10
	.error "gText_Rom_21F00B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F00B) < 0x10
	.space 0x10 - (. - gText_Rom_21F00B)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:342 BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends
	.globl BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends
BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends: @ 0x0821F01B
	.string "ぼく ともだちの なかでは\nいちばん つよいのに\lここに きてみたら てんで ダメ!"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends) > 0x2b
	.error "BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends) < 0x2b
	.space 0x2b - (. - BattleFrontier_OutsideWest_Text_BestOutOfAllMyFriends)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:345 BattleFrontier_OutsideWest_Text_CantFindBattleTower
	.globl BattleFrontier_OutsideWest_Text_CantFindBattleTower
BattleFrontier_OutsideWest_Text_CantFindBattleTower: @ 0x0821F046
	.string "バトルタワーに いきたいのに\nフロンティアパスの マップを みても\lなにが なんだか…… ひろすぎる……"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_CantFindBattleTower) > 0x35
	.error "BattleFrontier_OutsideWest_Text_CantFindBattleTower may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_CantFindBattleTower) < 0x35
	.space 0x35 - (. - BattleFrontier_OutsideWest_Text_CantFindBattleTower)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:348 BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
	.globl BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere: @ 0x0821F07B
	.string "すぐに チャレンジ したいのに\nくる とちゅうで ふなよい して しまった\pうっぷ……"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere) > 0x2c
	.error "BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere) < 0x2c
	.space 0x2c - (. - BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:351 BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere
	.globl BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere
BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere: @ 0x0821F0A7
	.string "ここには だれでも\nこられるって わけじゃ ないんだぜ\pつよさを みとめられた トレーナーが\nつれてきて もらえる ところなんだ!\pだから…… バトルフロンティアの ことを\nしらない トレーナーも おおいんだ"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere) > 0x69
	.error "BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere) < 0x69
	.space 0x69 - (. - BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:354 BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons
	.globl BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons
BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons: @ 0x0821F110
	.string "なぁなぁ にいちゃん……\pほんとに じぶんの ポケモン いなくても\nちょうせん できるの? だいじょうぶ?"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons) > 0x36
	.error "BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons) < 0x36
	.space 0x36 - (. - BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:357 BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons
	.globl BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons
BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons: @ 0x0821F146
	.string "だ だいじょうぶ だよ!\pきっと……\pなんだか おっかない おっさん だったけど\n「ポケモン かして やるぜ!」 って\lいってた じゃん か……"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons) > 0x49
	.error "BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons) < 0x49
	.space 0x49 - (. - BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:360 BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons
	.globl BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons
BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons: @ 0x0821F18F
	.string "あそこに あるのが バトルファクトリー\nつよいポケモンを レンタル できるんだ!\pでもさ レンタル ポケモンって\nいったい だれが そだてて いるんだろう?"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons) > 0x4f
	.error "BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons) < 0x4f
	.space 0x4f - (. - BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:363 BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper: @ 0x0821F1DE
	.string "ハブネークが こわくて\nバトルチューブに はいれないの……\pで でも せっかく きたんだから\nがんばって せいは するわ……! ブルブル"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper) != 0x45
	.error "BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:366 BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors
	.globl BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors
BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors: @ 0x0821F223
	.string "ね! わたしと ジャンケンしよ!\nじゃーん けーん ぽん!\p…… …… ……"
	.byte EOS
	.if (. - BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors) > 0x27
	.error "BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors) < 0x27
	.space 0x27 - (. - BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors)
	.endif

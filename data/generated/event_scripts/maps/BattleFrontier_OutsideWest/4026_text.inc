	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:330 BattleFrontier_OutsideWest_Text_LilycoveItIs (+1 aliases)
	.globl gText_Rom_21EFDD
gText_Rom_21EFDD: @ 0x0821EFDD
	.string "ミナモシティ ですね!"
	.byte EOS
	.if (. - gText_Rom_21EFDD) > 0xc
	.error "gText_Rom_21EFDD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21EFDD) < 0xc
	.space 0xc - (. - gText_Rom_21EFDD)
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
	.globl gText_Rom_21F01B
gText_Rom_21F01B: @ 0x0821F01B
	.string "ぼく ともだちの なかでは\nいちばん つよいのに\lここに きてみたら てんで ダメ!"
	.byte EOS
	.if (. - gText_Rom_21F01B) > 0x2b
	.error "gText_Rom_21F01B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F01B) < 0x2b
	.space 0x2b - (. - gText_Rom_21F01B)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:345 BattleFrontier_OutsideWest_Text_CantFindBattleTower
	.globl gText_Rom_21F046
gText_Rom_21F046: @ 0x0821F046
	.string "バトルタワーに いきたいのに\nフロンティアパスの マップを みても\lなにが なんだか…… ひろすぎる……"
	.byte EOS
	.if (. - gText_Rom_21F046) > 0x35
	.error "gText_Rom_21F046 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F046) < 0x35
	.space 0x35 - (. - gText_Rom_21F046)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:348 BattleFrontier_OutsideWest_Text_GotSeasickOnWayHere
	.globl gText_Rom_21F07B
gText_Rom_21F07B: @ 0x0821F07B
	.string "すぐに チャレンジ したいのに\nくる とちゅうで ふなよい して しまった\pうっぷ……"
	.byte EOS
	.if (. - gText_Rom_21F07B) > 0x2c
	.error "gText_Rom_21F07B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F07B) < 0x2c
	.space 0x2c - (. - gText_Rom_21F07B)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:351 BattleFrontier_OutsideWest_Text_OnlyToughTrainersBroughtHere
	.globl gText_Rom_21F0A7
gText_Rom_21F0A7: @ 0x0821F0A7
	.string "ここには だれでも\nこられるって わけじゃ ないんだぜ\pつよさを みとめられた トレーナーが\nつれてきて もらえる ところなんだ!\pだから…… バトルフロンティアの ことを\nしらない トレーナーも おおいんだ"
	.byte EOS
	.if (. - gText_Rom_21F0A7) > 0x69
	.error "gText_Rom_21F0A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F0A7) < 0x69
	.space 0x69 - (. - gText_Rom_21F0A7)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:354 BattleFrontier_OutsideWest_Text_SureWeCanChallengeWithNoMons
	.globl gText_Rom_21F110
gText_Rom_21F110: @ 0x0821F110
	.string "なぁなぁ にいちゃん……\pほんとに じぶんの ポケモン いなくても\nちょうせん できるの? だいじょうぶ?"
	.byte EOS
	.if (. - gText_Rom_21F110) > 0x36
	.error "gText_Rom_21F110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F110) < 0x36
	.space 0x36 - (. - gText_Rom_21F110)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:357 BattleFrontier_OutsideWest_Text_BigGuySaidIllLendYouMons
	.globl gText_Rom_21F146
gText_Rom_21F146: @ 0x0821F146
	.string "だ だいじょうぶ だよ!\pきっと……\pなんだか おっかない おっさん だったけど\n「ポケモン かして やるぜ!」 って\lいってた じゃん か……"
	.byte EOS
	.if (. - gText_Rom_21F146) > 0x49
	.error "gText_Rom_21F146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F146) < 0x49
	.space 0x49 - (. - gText_Rom_21F146)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:360 BattleFrontier_OutsideWest_Text_WhosRaisingThoseRentalMons
	.globl gText_Rom_21F18F
gText_Rom_21F18F: @ 0x0821F18F
	.string "あそこに あるのが バトルファクトリー\nつよいポケモンを レンタル できるんだ!\pでもさ レンタル ポケモンって\nいったい だれが そだてて いるんだろう?"
	.byte EOS
	.if (. - gText_Rom_21F18F) > 0x4f
	.error "gText_Rom_21F18F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F18F) < 0x4f
	.space 0x4f - (. - gText_Rom_21F18F)
	.endif
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:363 BattleFrontier_OutsideWest_Text_ScaredOfPikeBecauseSeviper
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_21F1DE
gText_Rom_21F1DE: @ 0x0821F1DE
	.string "ハブネークが こわくて\nバトルチューブに はいれないの……\pで でも せっかく きたんだから\nがんばって せいは するわ……! ブルブル"
	.byte EOS
	.if (. - gText_Rom_21F1DE) != 0x45
	.error "gText_Rom_21F1DE must retain its original byte length"
	.endif
	.globl gText_Rom_21F21E
	.set gText_Rom_21F21E, gText_Rom_21F1DE + 0x40
	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:366 BattleFrontier_OutsideWest_Text_LetsPlayRockPaperScissors
	.globl gText_Rom_21F223
gText_Rom_21F223: @ 0x0821F223
	.string "ね! わたしと ジャンケンしよ!\nじゃーん けーん ぽん!\p…… …… ……"
	.byte EOS
	.if (. - gText_Rom_21F223) > 0x27
	.error "gText_Rom_21F223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21F223) < 0x27
	.space 0x27 - (. - gText_Rom_21F223)
	.endif

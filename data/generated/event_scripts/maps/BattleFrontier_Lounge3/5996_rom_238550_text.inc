	@ data/maps/BattleFrontier_Lounge3/scripts.inc:200 BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere
	.globl BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere
BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere: @ 0x08237972
	.string "…… なんだぁ?\pおれたちゃ いま いそがしいの!\nまた こんどに してくれや!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere) > 0x29
	.error "BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere) < 0x29
	.space 0x29 - (. - BattleFrontier_Lounge3_Text_CantYouSeeWereBusyHere)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:203 BattleFrontier_Lounge3_Text_YouLookToughExplainGambling
	.globl BattleFrontier_Lounge3_Text_YouLookToughExplainGambling
BattleFrontier_Lounge3_Text_YouLookToughExplainGambling: @ 0x0823799B
	.string "…… ん?\nあんた つよそうだねぇ……\pへっへ…… ……\nちょっと ィイはなしが\lあるから きいてけよ!\pじつは おれたち グループはな\nバトルフロンティアの なかで\lちょっとした ゲームを してんのよ……\pルールは かんたん だぜー\nまずは まいかい どこかの しせつを\lひとつ えらぶ!\pつぎに そこに ちょうせん してる\nトレーナーの だれか ひとりを えらんで\lじぶんの バトルポイントを かけるのよ!\pんで いちばん いい せいせきを\nだした トレーナーに かけてた やつが\lバトルポイントを ひとりじめ すんの!\pなあっ? かんたん だろ?\nんで……"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_YouLookToughExplainGambling) > 0x11a
	.error "BattleFrontier_Lounge3_Text_YouLookToughExplainGambling may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_YouLookToughExplainGambling) < 0x11a
	.space 0x11a - (. - BattleFrontier_Lounge3_Text_YouLookToughExplainGambling)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237AB5
gText_Rom_237AB5: @ 0x08237AB5
	.string "ちょうど　いまは　よぉ\nバトルタワーの　シングル　バトルルームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237AB5) > 0x58
	.error "gText_Rom_237AB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237AB5) < 0x58
	.space 0x58 - (. - gText_Rom_237AB5)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237B0D
gText_Rom_237B0D: @ 0x08237B0D
	.string "ちょうど　いまは　よぉ\nバトルタワーの　ダブル　バトルルームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237B0D) > 0x57
	.error "gText_Rom_237B0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237B0D) < 0x57
	.space 0x57 - (. - gText_Rom_237B0D)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237B64
gText_Rom_237B64: @ 0x08237B64
	.string "ちょうど　いまは　よぉ\nバトルタワーの　マルチ　バトルルームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237B64) > 0x57
	.error "gText_Rom_237B64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237B64) < 0x57
	.space 0x57 - (. - gText_Rom_237B64)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237BBB
gText_Rom_237BBB: @ 0x08237BBB
	.string "ちょうど　いまは　よぉ\nバトルドームで　やってる\lシングル　バトルトーナメントに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237BBB) > 0x60
	.error "gText_Rom_237BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237BBB) < 0x60
	.space 0x60 - (. - gText_Rom_237BBB)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237C1B
gText_Rom_237C1B: @ 0x08237C1B
	.string "ちょうど　いまは　よぉ\nバトルドームで　やってる\lダブル　バトルトーナメントに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237C1B) > 0x5f
	.error "gText_Rom_237C1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237C1B) < 0x5f
	.space 0x5f - (. - gText_Rom_237C1B)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237C7A
gText_Rom_237C7A: @ 0x08237C7A
	.string "ちょうど　いまは　よぉ\nバトルファクトリーで　やってる\lバトルトレード　シングルに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237C7A) > 0x61
	.error "gText_Rom_237C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237C7A) < 0x61
	.space 0x61 - (. - gText_Rom_237C7A)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237CDB
gText_Rom_237CDB: @ 0x08237CDB
	.string "ちょうど　いまは　よぉ\nバトルファクトリーで　やってる\lバトルトレード　ダブルに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237CDB) > 0x60
	.error "gText_Rom_237CDB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237CDB) < 0x60
	.space 0x60 - (. - gText_Rom_237CDB)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237D3B
gText_Rom_237D3B: @ 0x08237D3B
	.string "ちょうど　いまは　よぉ\nバトルパレスの\lシングル　バトルホールに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237D3B) > 0x58
	.error "gText_Rom_237D3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237D3B) < 0x58
	.space 0x58 - (. - gText_Rom_237D3B)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237D93
gText_Rom_237D93: @ 0x08237D93
	.string "ちょうど　いまは　よぉ\nバトルパレスの\lダブル　バトルホールに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237D93) > 0x57
	.error "gText_Rom_237D93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237D93) < 0x57
	.space 0x57 - (. - gText_Rom_237D93)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237DEA
gText_Rom_237DEA: @ 0x08237DEA
	.string "ちょうど　いまは　よぉ\nバトルアリーナで　やってる\lかちぬきチームバトルに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237DEA) > 0x5d
	.error "gText_Rom_237DEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237DEA) < 0x5d
	.space 0x5d - (. - gText_Rom_237DEA)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237E47
gText_Rom_237E47: @ 0x08237E47
	.string "ちょうど　いまは　よぉ\nバトルチューブで　やってる\lバトルゲームに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237E47) > 0x59
	.error "gText_Rom_237E47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237E47) < 0x59
	.space 0x59 - (. - gText_Rom_237E47)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237EA0
gText_Rom_237EA0: @ 0x08237EA0
	.string "ちょうど　いまは　よぉ\nバトルピラミッドで　やってる\lバトルアドベンチャーに\lちょうせんする　トレーナーを\lさがしてん　だけどよ……\pピンとくる　トレーナーが　いなくてなぁ……\nなぁ……"
	.byte EOS
	.if (. - gText_Rom_237EA0) > 0x5e
	.error "gText_Rom_237EA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237EA0) < 0x5e
	.space 0x5e - (. - gText_Rom_237EA0)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:242 BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe
	.globl BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe
BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe: @ 0x08237EFE
	.string "あんたにも もうけさせて やるからよぅー\nサクっと ちょうせん してきて くんねぇ?"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe) > 0x2b
	.error "BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe) < 0x2b
	.space 0x2b - (. - BattleFrontier_Lounge3_Text_HowAboutEnteringEventForMe)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:245 BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints
	.globl BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints
BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints: @ 0x08237F29
	.string "じゃあよ…… あんたの\nバトルポイント ちょーっとで いいから\lおれに あずけて くんねぇ?\pちゃーんと おれいは するからよ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints) > 0x41
	.error "BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints) < 0x41
	.space 0x41 - (. - BattleFrontier_Lounge3_Text_SpotMeSomeBattlePoints)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:248 BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
	.globl BattleFrontier_Lounge3_Text_HowMuchCanYouSpot
BattleFrontier_Lounge3_Text_HowMuchCanYouSpot: @ 0x08237F6A
	.string "ィイね! ィイね!\nで? で? で? いくら かして くれます?"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_HowMuchCanYouSpot) > 0x21
	.error "BattleFrontier_Lounge3_Text_HowMuchCanYouSpot may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_HowMuchCanYouSpot) < 0x21
	.space 0x21 - (. - BattleFrontier_Lounge3_Text_HowMuchCanYouSpot)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:251 BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints
	.globl BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints
BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints: @ 0x08237F8B
	.string "いやいやいやー!!\pバトルポイントが たらない じゃない!\nつまんない じょうだん やめましょうや!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints) > 0x33
	.error "BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints) < 0x33
	.space 0x33 - (. - BattleFrontier_Lounge3_Text_YouDontHaveEnoughPoints)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:254 BattleFrontier_Lounge3_Text_ThanksOffYouGo
	.globl BattleFrontier_Lounge3_Text_ThanksOffYouGo
BattleFrontier_Lounge3_Text_ThanksOffYouGo: @ 0x08237FBE
	.string "へっへっへっ…… あんがとよ!\nそんじゃー"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_ThanksOffYouGo) > 0x16
	.error "BattleFrontier_Lounge3_Text_ThanksOffYouGo may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_ThanksOffYouGo) < 0x16
	.space 0x16 - (. - BattleFrontier_Lounge3_Text_ThanksOffYouGo)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_237FD4
gText_Rom_237FD4: @ 0x08237FD4
	.string "サクサクッと\nバトルタワーの　シングル　バトルルームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_237FD4) > 0x56
	.error "gText_Rom_237FD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_237FD4) < 0x56
	.space 0x56 - (. - gText_Rom_237FD4)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23802A
gText_Rom_23802A: @ 0x0823802A
	.string "サクサクッと\nバトルタワーの　ダブル　バトルルームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23802A) > 0x55
	.error "gText_Rom_23802A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23802A) < 0x55
	.space 0x55 - (. - gText_Rom_23802A)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23807F
gText_Rom_23807F: @ 0x0823807F
	.string "サクサクッと\nバトルタワーの　マルチ　バトルルームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23807F) > 0x55
	.error "gText_Rom_23807F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23807F) < 0x55
	.space 0x55 - (. - gText_Rom_23807F)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_2380D4
gText_Rom_2380D4: @ 0x082380D4
	.string "サクサクッと　バトルドームの\nシングル　バトルトーナメントに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_2380D4) > 0x59
	.error "gText_Rom_2380D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2380D4) < 0x59
	.space 0x59 - (. - gText_Rom_2380D4)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23812D
gText_Rom_23812D: @ 0x0823812D
	.string "サクサクッと　バトルドームの\nダブル　バトルトーナメントに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23812D) > 0x58
	.error "gText_Rom_23812D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23812D) < 0x58
	.space 0x58 - (. - gText_Rom_23812D)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_238185
gText_Rom_238185: @ 0x08238185
	.string "サクサクッと　バトルファクトリーの\nバトルトレード　シングルに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_238185) > 0x5a
	.error "gText_Rom_238185 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238185) < 0x5a
	.space 0x5a - (. - gText_Rom_238185)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_2381DF
gText_Rom_2381DF: @ 0x082381DF
	.string "サクサクッと　バトルファクトリーの\nバトルトレード　ダブルに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_2381DF) > 0x59
	.error "gText_Rom_2381DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2381DF) < 0x59
	.space 0x59 - (. - gText_Rom_2381DF)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_238238
gText_Rom_238238: @ 0x08238238
	.string "サクサクッと　バトルパレスの\nシングル　バトルホールに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_238238) > 0x56
	.error "gText_Rom_238238 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238238) < 0x56
	.space 0x56 - (. - gText_Rom_238238)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23828E
gText_Rom_23828E: @ 0x0823828E
	.string "サクサクッと　バトルパレスの\nダブル　バトルホールに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23828E) > 0x55
	.error "gText_Rom_23828E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23828E) < 0x55
	.space 0x55 - (. - gText_Rom_23828E)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_2382E3
gText_Rom_2382E3: @ 0x082382E3
	.string "サクサクッと　バトルアリーナの\nかちぬきチームバトルに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_2382E3) > 0x56
	.error "gText_Rom_2382E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2382E3) < 0x56
	.space 0x56 - (. - gText_Rom_2382E3)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_238339
gText_Rom_238339: @ 0x08238339
	.string "サクサクッと　バトルチューブの\nバトルゲームに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_238339) > 0x52
	.error "gText_Rom_238339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238339) < 0x52
	.space 0x52 - (. - gText_Rom_238339)
	.endif
	@ asm/field_specials.s:5669 sub_0813A828 (+1 aliases)
	.globl gText_Rom_23838B
gText_Rom_23838B: @ 0x0823838B
	.string "サクサクッと　バトルピラミッドの\nバトルアドベンチャーに\lいってきて　ちょーだいっ！\pがんばれ　よぉー！\nまちがえんな　よぉー！\lおれと　あんたの　みらいの　ためだかんな！"
	.byte EOS
	.if (. - gText_Rom_23838B) > 0x57
	.error "gText_Rom_23838B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23838B) < 0x57
	.space 0x57 - (. - gText_Rom_23838B)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:293 BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints
	.globl BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints
BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints: @ 0x082383E2
	.string "あぁ あんた…… ごくろう さん……\pわりーけど バトルポイントは\nかえせねぇよ……\p…… まぁ おたがい つぎの きかいに\nがんばり ましょうや……"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints) > 0x4c
	.error "BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints) < 0x4c
	.space 0x4c - (. - BattleFrontier_Lounge3_Text_NiceTryCantReturnPoints)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:296 BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints
	.globl BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints
BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints: @ 0x0823842E
	.string "ぃよおっ!! せんせい!!\pさすが! さすが ですねぇー!!\nわたくし おおもうけで ございますよぉ!\pバトルポイント おかえし しますよっ!\nしっかり のしつけて さしあげますよぉ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints) > 0x5d
	.error "BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints) < 0x5d
	.space 0x5d - (. - BattleFrontier_Lounge3_Text_HelloChampHeresYourPoints)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:299 BattleFrontier_Lounge3_Text_ObtainedBattlePoints
	.globl BattleFrontier_Lounge3_Text_ObtainedBattlePoints
BattleFrontier_Lounge3_Text_ObtainedBattlePoints: @ 0x0823848B
	.string "{PLAYER}は バトルポイントを\n{STR_VAR_1}BP てにいれた!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_ObtainedBattlePoints) > 0x19
	.error "BattleFrontier_Lounge3_Text_ObtainedBattlePoints may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_ObtainedBattlePoints) < 0x19
	.space 0x19 - (. - BattleFrontier_Lounge3_Text_ObtainedBattlePoints)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:302 BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge
	.globl BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge
BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge: @ 0x082384A4
	.string "また なんか あったら\nよろしく たのみますよっ!!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge) > 0x1b
	.error "BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge) < 0x1b
	.space 0x1b - (. - BattleFrontier_Lounge3_Text_ThinkOfMeForAnotherChallenge)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:305 BattleFrontier_Lounge3_Text_NotInterested
	.globl BattleFrontier_Lounge3_Text_NotInterested
BattleFrontier_Lounge3_Text_NotInterested: @ 0x082384BF
	.string "そりゃ ないぜー!\nせちがれぇ おこさま だなぁ!!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_NotInterested) > 0x1b
	.error "BattleFrontier_Lounge3_Text_NotInterested may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_NotInterested) < 0x1b
	.space 0x1b - (. - BattleFrontier_Lounge3_Text_NotInterested)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:308 BattleFrontier_Lounge3_Text_Oh
	.globl BattleFrontier_Lounge3_Text_Oh
BattleFrontier_Lounge3_Text_Oh: @ 0x082384DA
	.string "おっ……"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_Oh) > 0x5
	.error "BattleFrontier_Lounge3_Text_Oh may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_Oh) < 0x5
	.space 0x5 - (. - BattleFrontier_Lounge3_Text_Oh)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:311 BattleFrontier_Lounge3_Text_BackedWrongTrainer
	.globl BattleFrontier_Lounge3_Text_BackedWrongTrainer
BattleFrontier_Lounge3_Text_BackedWrongTrainer: @ 0x082384DF
	.string "まーたー はーずーれー?\pあたし ふつうに\nたたかった ほうが いいの かなぁー"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_BackedWrongTrainer) > 0x29
	.error "BattleFrontier_Lounge3_Text_BackedWrongTrainer may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_BackedWrongTrainer) < 0x29
	.space 0x29 - (. - BattleFrontier_Lounge3_Text_BackedWrongTrainer)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:314 BattleFrontier_Lounge3_Text_TrainerGoodButRattled
	.globl BattleFrontier_Lounge3_Text_TrainerGoodButRattled
BattleFrontier_Lounge3_Text_TrainerGoodButRattled: @ 0x08238508
	.string "あの トレーナー…… つよいけど\nバトルドームだと すごく きんちょう\lしちゃうん だよなぁ……"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_TrainerGoodButRattled) > 0x31
	.error "BattleFrontier_Lounge3_Text_TrainerGoodButRattled may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_TrainerGoodButRattled) < 0x31
	.space 0x31 - (. - BattleFrontier_Lounge3_Text_TrainerGoodButRattled)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:317 BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne
	.globl BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne
BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne: @ 0x08238539
	.string "うふふっ!\nボロもうけ! ボロもうけなのよ!"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne) > 0x17
	.error "BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne) < 0x17
	.space 0x17 - (. - BattleFrontier_Lounge3_Text_KnowWinnerWhenISeeOne)
	.endif
	@ data/maps/BattleFrontier_Lounge3/scripts.inc:320 BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges
	.globl BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges
BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges: @ 0x08238550
	.string "あいつら トレーナーの くせに\nちょうせんも しないで\lなに してるん だろうな?"
	.byte EOS
	.if (. - BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges) > 0x2a
	.error "BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges) < 0x2a
	.space 0x2a - (. - BattleFrontier_Lounge3_Text_ShouldBeTakingChallenges)
	.endif
	@ Embedded ROM bytes: file offset 0x23857A, size 0x1C
	.byte 0x00, 0x0F, 0x00, 0x96, 0x85, 0x23, 0x08, 0x09, 0x02, 0x02, 0x0F, 0x00, 0xB8, 0x85, 0x23, 0x08
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00, 0xD7, 0x85, 0x23, 0x08, 0x09, 0x02, 0x02

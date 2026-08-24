	@ field-script:0x2229E2 FieldScriptText_222BAD
	.globl gText_Rom_222BAD
gText_Rom_222BAD: @ 0x08222BAD
	.string "ここは　バトルタワー！\nかちぬけ！　さいきょう　トレーナー！{EOS}"
	.if (. - gText_Rom_222BAD) > 0x1f
	.error "gText_Rom_222BAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222BAD) < 0x1f
	.space 0x1f - (. - gText_Rom_222BAD)
	.endif
	@ field-script:0x2229EB FieldScriptText_222BCC
	.globl gText_Rom_222BCC
gText_Rom_222BCC: @ 0x08222BCC
	.string "ここは　バトルパレス！\nみまもれ！　ポケモンバトル！{EOS}"
	.if (. - gText_Rom_222BCC) > 0x1b
	.error "gText_Rom_222BCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222BCC) < 0x1b
	.space 0x1b - (. - gText_Rom_222BCC)
	.endif
	@ field-script:0x2229F4 FieldScriptText_222BE7
	.globl gText_Rom_222BE7
gText_Rom_222BE7: @ 0x08222BE7
	.string "ここは　バトルアリーナ！\nつどえ！　さいきょう　チーム！{EOS}"
	.if (. - gText_Rom_222BE7) > 0x1d
	.error "gText_Rom_222BE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222BE7) < 0x1d
	.space 0x1d - (. - gText_Rom_222BE7)
	.endif
	@ field-script:0x2229FD FieldScriptText_222C04
	.globl gText_Rom_222C04
gText_Rom_222C04: @ 0x08222C04
	.string "ここは　バトルピラミッド！\nすすめ！　バトルアドベンチャー！{EOS}"
	.if (. - gText_Rom_222C04) > 0x1f
	.error "gText_Rom_222C04 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C04) < 0x1f
	.space 0x1f - (. - gText_Rom_222C04)
	.endif
	@ field-script:0x222B6C FieldScriptText_222C23
	.globl gText_Rom_222C23
gText_Rom_222C23: @ 0x08222C23
	.string "バトルフロンティア　ランキングホール\nきざめ！　さいこうの　きろく！{EOS}"
	.if (. - gText_Rom_222C23) > 0x23
	.error "gText_Rom_222C23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C23) < 0x23
	.space 0x23 - (. - gText_Rom_222C23)
	.endif
	@ field-script:0x222B75 FieldScriptText_222C46
	.globl gText_Rom_222C46
gText_Rom_222C46: @ 0x08222C46
	.string "バトルポイント　ひきかえサービス　コーナー\nひきかえろ！　キミの　バトルポイント！{EOS}"
	.if (. - gText_Rom_222C46) > 0x2a
	.error "gText_Rom_222C46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C46) < 0x2a
	.space 0x2a - (. - gText_Rom_222C46)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:258 BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial
	.globl gText_Rom_222C70
gText_Rom_222C70: @ 0x08222C70
	.string "うっひゃー でかい!\pやはり バトルタワーは\nとくべつ って かんじが するな{EOS}"
	.if (. - gText_Rom_222C70) > 0x28
	.error "gText_Rom_222C70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C70) < 0x28
	.space 0x28 - (. - gText_Rom_222C70)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:261 BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier
	.globl gText_Rom_222C98
gText_Rom_222C98: @ 0x08222C98
	.string "わたしの やぼうは\nバトルフロンティア そして ポケモンリーグ\lすべての ちょうてんに たつ ことだ!\pそして もし それが かなったら!\pとっ となりの いえの ミミちゃんに\nおともだちに なって くださいって いうぞ!{EOS}"
	.if (. - gText_Rom_222C98) > 0x70
	.error "gText_Rom_222C98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222C98) < 0x70
	.space 0x70 - (. - gText_Rom_222C98)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:264 BattleFrontier_OutsideEast_Text_PyramidTooHarsh
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_222D08
gText_Rom_222D08: @ 0x08222D08
	.string "バトルピラミッドは むずかし すぎて\nどうしても ちょうじょうに まで いけん!\pしかたが ないから いっそのこと\nそとがわを のぼって やろうかしら{EOS}"
	.if (. - gText_Rom_222D08) != 0x4c
	.error "gText_Rom_222D08 must retain its original byte length"
	.endif
	.globl gText_Rom_222D50
	.set gText_Rom_222D50, gText_Rom_222D08 + 0x48
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:267 BattleFrontier_OutsideEast_Text_ThriveInDarkness
	.globl gText_Rom_222D54
gText_Rom_222D54: @ 0x08222D54
	.string "くらやみが だいすきな わたし……\nそう…… わたしに ふさわしい のは……\lやはり この バトルピラミッド……\pネ…… あなたも くらやみの なかを\nひっしに さまよって みない……?{EOS}"
	.if (. - gText_Rom_222D54) > 0x5e
	.error "gText_Rom_222D54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222D54) < 0x5e
	.space 0x5e - (. - gText_Rom_222D54)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:270 BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam
	.globl gText_Rom_222DB2
gText_Rom_222DB2: @ 0x08222DB2
	.string "いっしゅうかん ねないで かんがえた\nオレの さいきょう チーム……\lまけるきが しねえぜ!\pぃよーし アリーナに なぐりこみだー!{EOS}"
	.if (. - gText_Rom_222DB2) > 0x43
	.error "gText_Rom_222DB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222DB2) < 0x43
	.space 0x43 - (. - gText_Rom_222DB2)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:273 BattleFrontier_OutsideEast_Text_DidScottBringYouHere
	.globl gText_Rom_222DF5
gText_Rom_222DF5: @ 0x08222DF5
	.string "あんたも エニシダさんに\nつれて こられたの?\lあのひと なんなんだろうね\pつよい トレーナーを みぬく めは\nたしからしい けど……\lほんにんが たたかって いる ところは\lいちども みたことが ないんだよなあ{EOS}"
	.if (. - gText_Rom_222DF5) > 0x6b
	.error "gText_Rom_222DF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222DF5) < 0x6b
	.space 0x6b - (. - gText_Rom_222DF5)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:276 BattleFrontier_OutsideEast_Text_BelieveInYouBuddy
	.globl gText_Rom_222E60
gText_Rom_222E60: @ 0x08222E60
	.string "ジグちゃん! しんじてるからね!\pかったら ジグちゃんの すきな おやつ\nなーんでも つくって あげるからね!{EOS}"
	.if (. - gText_Rom_222E60) > 0x38
	.error "gText_Rom_222E60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222E60) < 0x38
	.space 0x38 - (. - gText_Rom_222E60)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:279 BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant
	.globl gText_Rom_222E98
gText_Rom_222E98: @ 0x08222E98
	.string "ジグザグマは ぼんやり してる……{EOS}"
	.if (. - gText_Rom_222E98) > 0x12
	.error "gText_Rom_222E98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222E98) < 0x12
	.space 0x12 - (. - gText_Rom_222E98)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:282 BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody
	.globl gText_Rom_222EAA
gText_Rom_222EAA: @ 0x08222EAA
	.string "お おれは でしゃばり だ!\nオイあんた! ぼうしが ずれてるぜ!\lおっと じめんに ゴミが おちてる!\lああっと! もうすぐ ごはんだぜ!\p…… ……バトルパレスで\nしょうぶを ただ みまもる だけなんて\lおれに できるだろーか……?{EOS}"
	.if (. - gText_Rom_222EAA) > 0x77
	.error "gText_Rom_222EAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222EAA) < 0x77
	.space 0x77 - (. - gText_Rom_222EAA)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:285 BattleFrontier_OutsideEast_Text_OnceBeatGymLeader
	.globl gText_Rom_222F21
gText_Rom_222F21: @ 0x08222F21
	.string "こう みえても むかしは\nジムリーダーに かった ことも あるのよ\pもう ひとはな さかせて みようかしらねぇ{EOS}"
	.if (. - gText_Rom_222F21) > 0x38
	.error "gText_Rom_222F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222F21) < 0x38
	.space 0x38 - (. - gText_Rom_222F21)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:288 BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_222F59
gText_Rom_222F59: @ 0x08222F59
	.string "じてんしゃも はやいけど\nポケモン だって じしんあるわ!\lめにも とまらぬ はやさで かっちゃうわよ!{EOS}"
	.if (. - gText_Rom_222F59) != 0x35
	.error "gText_Rom_222F59 must retain its original byte length"
	.endif
	.globl gText_Rom_222F8A
	.set gText_Rom_222F8A, gText_Rom_222F59 + 0x31
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:291 BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon
	.globl gText_Rom_222F8E
gText_Rom_222F8E: @ 0x08222F8E
	.string "わたしのほうがねえー パパより\nポケモン つよいんだよ!{EOS}"
	.if (. - gText_Rom_222F8E) > 0x1d
	.error "gText_Rom_222F8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222F8E) < 0x1d
	.space 0x1d - (. - gText_Rom_222F8E)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:294 BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy
	.globl gText_Rom_222FAB
gText_Rom_222FAB: @ 0x08222FAB
	.string "むすめよ!\nがんばって かちぬいて こい!\lおまえは ママ そっくり だから つよいぞ!{EOS}"
	.if (. - gText_Rom_222FAB) > 0x2d
	.error "gText_Rom_222FAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222FAB) < 0x2d
	.space 0x2d - (. - gText_Rom_222FAB)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:297 BattleFrontier_OutsideEast_Text_HeardPrettyGirlAtBattleArena
	.globl gText_Rom_222FD8
gText_Rom_222FD8: @ 0x08222FD8
	.string "バトルアリーナに めちゃくちゃ\nぷりてぃーな こが いるって きいたから\lここまで がんばって きたのにーっ!\pあせくさーくて あつくるしーい\nかくとうか ばっかり だったよ!{EOS}"
	.if (. - gText_Rom_222FD8) > 0x59
	.error "gText_Rom_222FD8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222FD8) < 0x59
	.space 0x59 - (. - gText_Rom_222FD8)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:300 BattleFrontier_OutsideEast_Text_SometimesImportantOldManInThere
	.globl gText_Rom_223031
gText_Rom_223031: @ 0x08223031
	.string "ときどきねー ここの たてものに\nすっごく つよそーな ポケモン つれて\lすっごく えらそー だけど\lけっこー やさしそーな\lじーちゃんが はいってくのよ!{EOS}"
	.if (. - gText_Rom_223031) > 0x4f
	.error "gText_Rom_223031 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223031) < 0x4f
	.space 0x4f - (. - gText_Rom_223031)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:303 BattleFrontier_OutsideEast_Text_LegendOfBattlePyramid
	.globl gText_Rom_223080
gText_Rom_223080: @ 0x08223080
	.string "きみは しって いるか!?\nバトルピラミッドの でんせつを!!\pみなぎる ゆうきを もつ トレーナー\nきんじとうの いただきを めざすとき\lおとこの なかの おとこ あらわれる\p……どうだ? しらないだろー!\nだって これ さっき おれが\lかんがえたんだ もんな!\pなに? どういう いみ かって?\nチッチッ!! それは おしえられないな!{EOS}"
	.if (. - gText_Rom_223080) > 0xab
	.error "gText_Rom_223080 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223080) < 0xab
	.space 0xab - (. - gText_Rom_223080)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:306 BattleFrontier_OutsideEast_Text_GotWipedOut
	.globl gText_Rom_22312B
gText_Rom_22312B: @ 0x0822312B
	.string "くそーっ!\pいままで だれにも いちども\nまけたこと なかった この ぼくが\lても あしも でない うえに\lさいのうが ない だと!?\pくそーっ! くそーっ! くそーっ!{EOS}"
	.if (. - gText_Rom_22312B) > 0x56
	.error "gText_Rom_22312B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22312B) < 0x56
	.space 0x56 - (. - gText_Rom_22312B)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:309 BattleFrontier_OutsideEast_Text_ToughTrainerInBattleTower
	.globl gText_Rom_223181
gText_Rom_223181: @ 0x08223181
	.string "このひと バトルタワーに\nちょうせん している ときに\lおそろしく つよい トレーナーと\lたたかった みたい なの……\pあなたも バトルタワーに\nちょうせんする ときは ちゅういして……{EOS}"
	.if (. - gText_Rom_223181) > 0x5e
	.error "gText_Rom_223181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223181) < 0x5e
	.space 0x5e - (. - gText_Rom_223181)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:312 BattleFrontier_OutsideEast_Text_EnoughBattlePointsForDoll
	.globl gText_Rom_2231DF
gText_Rom_2231DF: @ 0x082231DF
	.string "さて! バトルポイントも たまったし!\nまた おおきな ぬいぐるみ でも\lもらいに いこーっと!{EOS}"
	.if (. - gText_Rom_2231DF) > 0x31
	.error "gText_Rom_2231DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2231DF) < 0x31
	.space 0x31 - (. - gText_Rom_2231DF)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:315 BattleFrontier_OutsideEast_Text_LikeToHaveNameRecordedHere
	.globl gText_Rom_223210
gText_Rom_223210: @ 0x08223210
	.string "おほほほーいっ!\nここが ランキングホール っスねー!\pわしも ここに なを のこす ような\nえいこうの スーパー チャンプに\lはやく なりたい っスよ!{EOS}"
	.if (. - gText_Rom_223210) > 0x4e
	.error "gText_Rom_223210 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223210) < 0x4e
	.space 0x4e - (. - gText_Rom_223210)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:318 BattleFrontier_OutsideEast_Text_CanDoAnythingWithYou
	.globl gText_Rom_22325E
gText_Rom_22325E: @ 0x0822325E
	.string "もし きみが そばに いてくれたら\nぼくは なんだって できるのさ……{EOS}"
	.if (. - gText_Rom_22325E) > 0x24
	.error "gText_Rom_22325E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22325E) < 0x24
	.space 0x24 - (. - gText_Rom_22325E)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:321 BattleFrontier_OutsideEast_Text_PowerOfOurLoveWillOvercome
	.globl gText_Rom_223282
gText_Rom_223282: @ 0x08223282
	.string "ぁあん やっぱ ダーリンは ス テ キ!\p…… ……あー!\nもー! わたし たまんないっ!!\pいますぐ ふたりで マルチ バトルルームに\nとつげき しましょうよーっ!!\pバトルサロンで いっしょに なったら\nふたりの ラブパワーで\lどいつも こいつも ギタギタよ!\lねぇー ダーリン!!{EOS}"
	.if (. - gText_Rom_223282) > 0x90
	.error "gText_Rom_223282 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223282) < 0x90
	.space 0x90 - (. - gText_Rom_223282)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:324 BattleFrontier_OutsideEast_Text_FrontierNotExclusivelyForToughTrainers
	.globl gText_Rom_223312
gText_Rom_223312: @ 0x08223312
	.string "バトルフロンティアには\nつよい トレーナーだけでは なく\lかわった ちからを もった ひとたちも\lまねかれて いるな……\p……エニシダと いう おとこ……\pじつは なにか おおきな もくてきが\nあって ここを つくったのかも しれないぞ{EOS}"
	.if (. - gText_Rom_223312) > 0x77
	.error "gText_Rom_223312 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223312) < 0x77
	.space 0x77 - (. - gText_Rom_223312)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:327 BattleFrontier_OutsideEast_Text_OddTreeHereSeemsToWiggle
	.globl gText_Rom_223389
gText_Rom_223389: @ 0x08223389
	.string "もしもし あんたさんは\nめは いいほう ですかい?\pあたしには このさきの きが ときどき\nぷるぷる してる ように みえるんですわ…{EOS}"
	.if (. - gText_Rom_223389) > 0x44
	.error "gText_Rom_223389 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223389) < 0x44
	.space 0x44 - (. - gText_Rom_223389)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:330 BattleFrontier_OutsideEast_Text_OnceAnOddTreePastHere
	.globl gText_Rom_2233CD
gText_Rom_2233CD: @ 0x082233CD
	.string "もしもし あんたさんは\nものおぼえは いいほう ですかい?\pあたしには このさきに へんな きが\nあった ような きが するんですわ…{EOS}"
	.if (. - gText_Rom_2233CD) > 0x44
	.error "gText_Rom_2233CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2233CD) < 0x44
	.space 0x44 - (. - gText_Rom_2233CD)
	.endif
	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:333 BattleFrontier_OutsideEast_Text_StickyMonWithLongTail
	.globl gText_Rom_223411
gText_Rom_223411: @ 0x08223411
	.string "ぼぼぼ ぼく みちゃったんだっ!!\pこのさきの いわ から しっぽが ながくって\nなんか ベタベタした ポケモンが\lぼくの こと じーっと のぞいてたんだっ!\pきっと こわい ポケモン だよーっ!!{EOS}"
	.if (. - gText_Rom_223411) > 0x64
	.error "gText_Rom_223411 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223411) < 0x64
	.space 0x64 - (. - gText_Rom_223411)
	.endif
	@ analyzed canonical ROM range 0x08223475-0x08223738
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattleTowerMultiPartnerRoom_OnResume_OnTransition_OnWarpIntoMap_OnFrame: @ 0x08223475
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_0822348A
	.byte 0x03
	.4byte EventScript_JP_08223493
	.byte 0x04
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame
	.byte 0
EventScript_JP_0822348A: @ 0x0822348A
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0011
	@ event command: special
	special CallBattlePyramidFunction
	end
EventScript_JP_08223493: @ 0x08223493
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0152
	goto_if 0x01, EventScript_JP_082234BD
	clearflag 0x02C7
	clearflag 0x02C8
	clearflag 0x02C9
	clearflag 0x02CA
	clearflag 0x02CB
	clearflag 0x02CC
	setflag 0x0360
	setflag 0x0361
	setvar 0x8004, 0x000A
	@ event command: special
	special CallBattleTowerFunc
	end
EventScript_JP_082234BD: @ 0x082234BD
	setvar 0x4010, 0x0007
	setvar 0x4011, 0x0007
	setvar 0x4012, 0x0007
	setvar 0x4013, 0x0007
	setvar 0x4014, 0x0007
	setvar 0x4015, 0x0007
	setvar 0x4016, 0x0007
	setvar 0x4017, 0x0007
	setvar 0x4001, 0x0001
	setvar 0x4003, 0x0001
	setobjectxyperm 0x0001, 0x000A, 0x0002
	end
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnWarpIntoMap: @ 0x082234F7
	@ conditional map script table
	.2byte 0x4003, 0x0001
	.4byte EventScript_JP_08223501
	.2byte 0
EventScript_JP_08223501: @ 0x08223501
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_BattleFrontier_BattleTowerMultiPartnerRoom_OnFrame: @ 0x08223506
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08223524
	.2byte 0x4003, 0x0001
	.4byte EventScript_JP_08223518
	.2byte 0
EventScript_JP_08223518: @ 0x08223518
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x4003, 0x0000
	goto EventScript_JP_08223598
	.byte 0x02
EventScript_JP_08223524: @ 0x08223524
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_OutsideEast_Movement_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_OutsideEast_Movement_WalkLeft_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	moveobjectoffscreen 0x0001
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_223739
	callstd 0x04
	@ event command: special
	special HealPlayerParty
	setvar 0x4001, 0x0001
	releaseall
	end
BattleFrontier_OutsideEast_Movement_WalkDown: @ 0x08223558
	@ object movement sequence
	walk_down
	step_end
BattleFrontier_OutsideEast_Movement_WalkLeft_WalkInPlaceFastestDown: @ 0x0822355A
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_0822355D
EventScript_JP_0822355D: @ 0x0822355D
	lock
	faceplayer
	message gText_Rom_22375E
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08223580
	loadword 0x00, gText_Rom_223797
	callstd 0x04
	release
	end
EventScript_JP_08223580: @ 0x08223580
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	goto 0x08221CFC
	.byte 0x02
EventScript_JP_08223598: @ 0x08223598
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_2237C1
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x000A, 0x0001
	waitdooranim
	call EventScript_JP_082235C7
	closedoor 0x000A, 0x0001
	waitdooranim
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR, 0xFF, 0x0001, 0x0006
	.byte 0x27, 0x6B, 0x02
EventScript_JP_082235C7: @ 0x082235C7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_OutsideEast_Movement_WalkUp_SetInvisible
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_OutsideEast_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	return
	.byte 0x4F, 0x01, 0x00, 0x09, 0x36, 0x22, 0x08, 0x4F, 0xFF, 0x00, 0x01, 0x36, 0x22, 0x08, 0x51, 0x00
	.byte 0x00, 0x03, 0x4F, 0x01, 0x00, 0x09, 0x36, 0x22, 0x08, 0x4F, 0xFF, 0x00, 0x05, 0x36, 0x22, 0x08
	.byte 0x51, 0x00, 0x00, 0x03
BattleFrontier_OutsideEast_Movement_WalkUpX2_SetInvisible: @ 0x082235FD
	@ ANALYSIS: SEMANTIC_NUMERIC_MOVEMENT
	@ Object-movement command bytecode/sequence; numeric bytes are movement commands and terminators.
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end
	.globl BattleFrontier_OutsideEast_Movement_WalkRight_WalkUp_SetInvisible
BattleFrontier_OutsideEast_Movement_WalkRight_WalkUp_SetInvisible: @ 0x08223601
	.byte 0x0B, 0x09, 0x54, 0xFE
	.globl BattleFrontier_OutsideEast_Movement_WalkLeft_WalkUp_SetInvisible
BattleFrontier_OutsideEast_Movement_WalkLeft_WalkUp_SetInvisible: @ 0x08223605
	.byte 0x0A, 0x09, 0x54, 0xFE
BattleFrontier_OutsideEast_Movement_WalkUp_SetInvisible: @ 0x08223609
	@ object movement sequence
	walk_up
	set_invisible
	step_end
.globl EventScript_JP_0822360C
EventScript_JP_0822360C: @ 0x0822360C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x4002, 0x0000
	goto EventScript_JP_08223619
	.byte 0x02
EventScript_JP_08223619: @ 0x08223619
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0152
	goto_if 0x01, EventScript_JP_082236A6
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0000
	@ event command: special
	special CallBattleTowerFunc
	waitmessage
	waitbuttonpress
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0001
	@ event command: special
	special CallBattleTowerFunc
	waitmessage
	waitbuttonpress
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0002
	@ event command: special
	special CallBattleTowerFunc
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_082236A6
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_082236A6
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0003
	@ event command: special
	special CallBattleTowerFunc
	waitmessage
	waitbuttonpress
	closemessage
	compare_var_to_value 0x800C, 0x0001
	call_if 0x05, EventScript_JP_082236B7
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_082236C2
	@ event command: removeobject
	removeobject 0x800F
	setflag 0x0152
	@ event command: warpsilent
	warpsilent MAP_ID_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM, 0xFF, 0x000A, 0x0003
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082236A6: @ 0x082236A6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x000B
	setvar 0x8005, 0x0004
	@ event command: special
	special CallBattleTowerFunc
	waitmessage
	waitbuttonpress
	release
	end
EventScript_JP_082236B7: @ 0x082236B7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, BattleFrontier_OutsideEast_Movement_WalkFastUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082236C2: @ 0x082236C2
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x800F, BattleFrontier_OutsideEast_Movement_WalkFastLeft_WalkFastUpX7
	@ event command: waitmovement
	waitmovement 0x0000
	return
BattleFrontier_OutsideEast_Movement_WalkFastUpX7: @ 0x082236CD
	@ object movement sequence
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
BattleFrontier_OutsideEast_Movement_WalkFastLeft_WalkFastUpX7: @ 0x082236D5
	@ object movement sequence
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end
.globl EventScript_JP_082236DE
EventScript_JP_082236DE: @ 0x082236DE
	lock
	faceplayer
	setvar 0x4002, 0x0001
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_082236EB
EventScript_JP_082236EB: @ 0x082236EB
	lock
	faceplayer
	setvar 0x4002, 0x0002
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_082236F8
EventScript_JP_082236F8: @ 0x082236F8
	lock
	faceplayer
	setvar 0x4002, 0x0003
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_08223705
EventScript_JP_08223705: @ 0x08223705
	lock
	faceplayer
	setvar 0x4002, 0x0004
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_08223712
EventScript_JP_08223712: @ 0x08223712
	lock
	faceplayer
	setvar 0x4002, 0x0005
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_0822371F
EventScript_JP_0822371F: @ 0x0822371F
	lock
	faceplayer
	setvar 0x4002, 0x0006
	goto EventScript_JP_08223619
	.byte 0x02
.globl EventScript_JP_0822372C
EventScript_JP_0822372C: @ 0x0822372C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	setvar 0x4002, 0x0007
	goto EventScript_JP_08223619
	.byte 0x02

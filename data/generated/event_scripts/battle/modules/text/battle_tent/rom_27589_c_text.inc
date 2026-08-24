	@ data/text/battle_tent.inc:1 FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent
FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent: @ 0x08274A30
	.string "バトルテント ハジツゲかいじょうへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent) > 0x41
	.error "FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent) < 0x41
	.space 0x41 - (. - FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent)
	.endif
	@ data/text/battle_tent.inc:7 FallarborTown_BattleTentLobby_Text_TakeChallenge
	.globl FallarborTown_BattleTentLobby_Text_TakeChallenge
FallarborTown_BattleTentLobby_Text_TakeChallenge: @ 0x08274A71
	.string "かちぬきチームバトルに\nちょうせん されますかな?{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_TakeChallenge) > 0x1a
	.error "FallarborTown_BattleTentLobby_Text_TakeChallenge may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_TakeChallenge) < 0x1a
	.space 0x1a - (. - FallarborTown_BattleTentLobby_Text_TakeChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_274A8B
gText_Rom_274A8B: @ 0x08274A8B
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_274A8B) > 0x18
	.error "gText_Rom_274A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A8B) < 0x18
	.space 0x18 - (. - gText_Rom_274A8B)
	.endif
	@ data/text/battle_tent.inc:15 FallarborTown_BattleTentLobby_Text_ExplainFallarborTent
	.globl FallarborTown_BattleTentLobby_Text_ExplainFallarborTent
FallarborTown_BattleTentLobby_Text_ExplainFallarborTent: @ 0x08274AA3
	.string "バトルテント ハジツゲかいじょうでは\nかちぬきチームバトルを\lおこなって おりますぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたいさせる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 3にんぬきを なされた あかつきには\nすてきな しょうひんを\lおおくり いたしますぞ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_ExplainFallarborTent) > 0x171
	.error "FallarborTown_BattleTentLobby_Text_ExplainFallarborTent may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_ExplainFallarborTent) < 0x171
	.space 0x171 - (. - FallarborTown_BattleTentLobby_Text_ExplainFallarborTent)
	.endif
	@ data/text/battle_tent.inc:40 FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge
FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge: @ 0x08274C14
	.string "バトルテントへ おつれする まえに\nレポートを かきますが よろしいですかな?{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge) > 0x28
	.error "FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge) < 0x28
	.space 0x28 - (. - FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge)
	.endif
	@ data/text/battle_tent.inc:45 FallarborTown_BattleTentLobby_Text_WhichLevelMode
	.globl FallarborTown_BattleTentLobby_Text_WhichLevelMode
FallarborTown_BattleTentLobby_Text_WhichLevelMode: @ 0x08274C3C
	.string "レベル50と レベル100の へやが\nありますが どちらに まいられますかな?{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_WhichLevelMode) > 0x28
	.error "FallarborTown_BattleTentLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_WhichLevelMode) < 0x28
	.space 0x28 - (. - FallarborTown_BattleTentLobby_Text_WhichLevelMode)
	.endif
	@ data/text/battle_tent.inc:49 FallarborTown_BattleTentLobby_Text_SelectThreeMons
	.globl FallarborTown_BattleTentLobby_Text_SelectThreeMons
FallarborTown_BattleTentLobby_Text_SelectThreeMons: @ 0x08274C64
	.string "では ちょうせんする ポケモンを\n3ひき おえらび くだされ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_SelectThreeMons) > 0x20
	.error "FallarborTown_BattleTentLobby_Text_SelectThreeMons may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_SelectThreeMons) < 0x20
	.space 0x20 - (. - FallarborTown_BattleTentLobby_Text_SelectThreeMons)
	.endif
	@ field-script:0x1F54B2 FieldScriptText_274C84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_274C84
FieldScriptText_274C84: @ 0x08274C84
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませんぬ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！{EOS}"
	.if (. - FieldScriptText_274C84) != 0x79
	.error "FieldScriptText_274C84 must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:63 FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen: @ 0x08274CFD
	.string "おきゃくじん!!\pさんかできる ポケモンが\n3ひき おりませぬ!\pさんかする ためには\nすべて ちがう しゅるいの ポケモンを\l3ひき よういして くだされ\pまた もたせる どうぐも\nすべて ちがう どうぐに してくだされ!\pなお タマゴ{STR_VAR_1}さんか させる ことは できませぬ!\pじゅんびが できましたら\nまた おこし くだされ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen) != 0xa6
	.error "FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:76 FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent
	.globl FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent
FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent: @ 0x08274DA3
	.string "では バトルテントへ\nおつれいたしますぞ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent) > 0x16
	.error "FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent) < 0x16
	.space 0x16 - (. - FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:437 BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown (+1 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_Copy_Battle
BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_Copy_Battle: @ 0x08274DB9
	.string "おきゃくじん!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが その ばあい\nちょうせんは むこうと なりますぞ!\pまた はじめから\nちょうせん してくだされ!!{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_Copy_Battle) > 0x62
	.error "BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_Copy_Battle) < 0x62
	.space 0x62 - (. - BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:89 FallarborTown_BattleTentLobby_Text_BeatThreeTrainers
	.globl FallarborTown_BattleTentLobby_Text_BeatThreeTrainers
FallarborTown_BattleTentLobby_Text_BeatThreeTrainers: @ 0x08274E1B
	.string "3にんぬき たっせい\nおみごとで ございました!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_BeatThreeTrainers) > 0x19
	.error "FallarborTown_BattleTentLobby_Text_BeatThreeTrainers may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_BeatThreeTrainers) < 0x19
	.space 0x19 - (. - FallarborTown_BattleTentLobby_Text_BeatThreeTrainers)
	.endif
	@ data/text/battle_tent.inc:93 FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
	.globl FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame: @ 0x08274E34
	.string "レポートを かきますので\nおまちくだされ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame) > 0x16
	.error "FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame) < 0x16
	.space 0x16 - (. - FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame)
	.endif
	@ data/text/battle_tent.inc:97 FallarborTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl FallarborTown_BattleTentLobby_Text_PresentYouWithPrize
FallarborTown_BattleTentLobby_Text_PresentYouWithPrize: @ 0x08274E4A
	.string "3にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_PresentYouWithPrize) > 0x2a
	.error "FallarborTown_BattleTentLobby_Text_PresentYouWithPrize may not grow beyond its original slot"
	.endif
	.if (. - FallarborTown_BattleTentLobby_Text_PresentYouWithPrize) < 0x2a
	.space 0x2a - (. - FallarborTown_BattleTentLobby_Text_PresentYouWithPrize)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_274E74
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_274E74: @ 0x08274E74
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_274E74) > 0xe
	.error "BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_274E74 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_274E74) < 0xe
	.space 0xe - (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_274E74)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_Copy_Battle
BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_Copy_Battle: @ 0x08274E82
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_Copy_Battle) > 0x32
	.error "BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_Copy_Battle) < 0x32
	.space 0x32 - (. - BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:111 FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving: @ 0x08274EB4
	.string "おつかれさまでした!\pレポートを かきますので\nおまちくだされ!{EOS}"
	.if (. - FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving) != 0x21
	.error "FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_274ED5
gText_Rom_274ED5: @ 0x08274ED5
	.string "またの ちょうせんを\nおまちして おりますぞ!{EOS}"
	.if (. - gText_Rom_274ED5) > 0x18
	.error "gText_Rom_274ED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274ED5) < 0x18
	.space 0x18 - (. - gText_Rom_274ED5)
	.endif
	@ field-script:0x1F52EE FieldScriptText_274EED
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_274EED
FieldScriptText_274EED: @ 0x08274EED
	.string "おまちしておりました！\pバトルテントに　おつれする　まえに\nレポートを　かきますので　おまちくだされ！{EOS}"
	.if (. - FieldScriptText_274EED) != 0x34
	.error "FieldScriptText_274EED must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:124 VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent
VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent: @ 0x08274F21
	.string "バトルテント\nシダケかいじょうへ ようこそ\pここでは トレーナーの\nしんらいの こころを ためしておる{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent) > 0x34
	.error "VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent) < 0x34
	.space 0x34 - (. - VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent)
	.endif
	@ data/text/battle_tent.inc:130 VerdanturfTown_BattleTentLobby_Text_TakeChallenge
	.globl VerdanturfTown_BattleTentLobby_Text_TakeChallenge
VerdanturfTown_BattleTentLobby_Text_TakeChallenge: @ 0x08274F55
	.string "バトルテント シダケかいじょうに\nちょうせん するか?{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_TakeChallenge) > 0x1c
	.error "VerdanturfTown_BattleTentLobby_Text_TakeChallenge may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_TakeChallenge) < 0x1c
	.space 0x1c - (. - VerdanturfTown_BattleTentLobby_Text_TakeChallenge)
	.endif
	@ data/text/battle_tent.inc:134 VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent
	.globl VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent
VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent: @ 0x08274F71
	.string "バトルテント シダケかいじょうでの\nたたかいには まもらなければ ならない\lひとつの おきてが ある\pここでは ポケモンは\nいれかえ しか できない!\pそれいがいの めいれいは\nいっさい きんし して おるのだ!\pポケモンには おのれの せいかくの ままに\nかんがえ こうどう して もらう!\pおぬしは じぶんの\nポケモンたちを しんじて\lたたかいを みまもって やれ\pみごと 3にんの トレーナーを\nうちやぶることが できれば\lしょうひんを さしあげよう\pまた とちゅうで ちょうせんを\nちゅうだん したい ときは\lきちんと レポートを かかないと\lつづけて ちょうせん できん からな\lきを つけてくれ……{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent) > 0x132
	.error "VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent) < 0x132
	.space 0x132 - (. - VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent)
	.endif
	@ data/text/battle_tent.inc:156 VerdanturfTown_BattleTentLobby_Text_ReturnFortified
	.globl gText_Rom_2750A3
gText_Rom_2750A3: @ 0x082750A3
	.string "おのれの こころと ポケモンを きたえたら\nまた くるがよい……{EOS}"
	.if (. - gText_Rom_2750A3) > 0x21
	.error "gText_Rom_2750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2750A3) < 0x21
	.space 0x21 - (. - gText_Rom_2750A3)
	.endif
	@ data/text/battle_tent.inc:161 VerdanturfTown_BattleTentLobby_Text_WhichLevelMode
	.globl VerdanturfTown_BattleTentLobby_Text_WhichLevelMode
VerdanturfTown_BattleTentLobby_Text_WhichLevelMode: @ 0x082750C4
	.string "レベル50の へやと レベル100の へやが\nあるが どちらに ちょうせん するのだ?{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_WhichLevelMode) > 0x2c
	.error "VerdanturfTown_BattleTentLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_WhichLevelMode) < 0x2c
	.space 0x2c - (. - VerdanturfTown_BattleTentLobby_Text_WhichLevelMode)
	.endif
	@ data/text/battle_tent.inc:165 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50
VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50: @ 0x082750F0
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\l3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pなお タマゴ{STR_VAR_1}ちょうせん させる ことは できん!\pじゅんびを ととのえてから また きなさい{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50) != 0x9f
	.error "VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50 must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:177 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen: @ 0x0827518F
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\p3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pそして タマゴ{STR_VAR_1}ちょうせん\nさせる ことは できん!\pじゅんびを ととえてから また きなさい{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen) != 0x9f
	.error "VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:190 VerdanturfTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_27522E
gText_Rom_27522E: @ 0x0827522E
	.string "では ちょうせんする ポケモンを\n3ひき えらんでくれ{EOS}"
	.if (. - gText_Rom_27522E) > 0x1c
	.error "gText_Rom_27522E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27522E) < 0x1c
	.space 0x1c - (. - gText_Rom_27522E)
	.endif
	@ data/text/battle_tent.inc:194 VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge
VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge: @ 0x0827524A
	.string "バトルテントへ むかうまえに\nレポートを かくが よろしいか?{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge) > 0x20
	.error "VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge) < 0x20
	.space 0x20 - (. - VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge)
	.endif
	@ data/text/battle_tent.inc:198 VerdanturfTown_BattleTentLobby_Text_NowFollowMe
	.globl gText_Rom_27526A
gText_Rom_27526A: @ 0x0827526A
	.string "それでは\nわしに ついてこい……{EOS}"
	.if (. - gText_Rom_27526A) > 0x11
	.error "gText_Rom_27526A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27526A) < 0x11
	.space 0x11 - (. - gText_Rom_27526A)
	.endif
	@ field-script:0x1F6494 FieldScriptText_27527B
	.globl FieldScriptText_27527B
FieldScriptText_27527B: @ 0x0827527B
	.string "よいものを　みせて　もらった\pそれでは　レポートを　かこう……\nしばし　またれよ……{EOS}"
	.if (. - FieldScriptText_27527B) > 0x2b
	.error "FieldScriptText_27527B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_27527B) < 0x2b
	.space 0x2b - (. - FieldScriptText_27527B)
	.endif
	@ data/text/battle_tent.inc:207 VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak
	.globl VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak
VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak: @ 0x082752A6
	.string "3にんぬき たっせい とは……\pおぬしと ポケモンの こころの きずなは\nまことの ようじゃな……{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak) > 0x32
	.error "VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak) < 0x32
	.space 0x32 - (. - VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak)
	.endif
	@ data/text/battle_tent.inc:212 VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
	.globl VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded: @ 0x082752D8
	.string "レポートに かくぞ\nしばし またれよ……{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded) > 0x15
	.error "VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded) < 0x15
	.space 0x15 - (. - VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded)
	.endif
	@ data/text/battle_tent.inc:216 VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize
VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize: @ 0x082752ED
	.string "3にんぬきの あかしに\nこちらを さしあげよう……{EOS}"
	.if (. - VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize) > 0x1a
	.error "VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize may not grow beyond its original slot"
	.endif
	.if (. - VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize) < 0x1a
	.space 0x1a - (. - VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize)
	.endif
	@ data/text/battle_tent.inc:220 SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent
	.globl SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent
SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent: @ 0x08275307
	.string "バトルテント カイナかいじょうへ\nようこそ!\pバトルトレードの\nごあんないは こちらです!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent) > 0x2e
	.error "SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent) < 0x2e
	.space 0x2e - (. - SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent)
	.endif
	@ data/text/battle_tent.inc:226 SlateportCity_BattleTentLobby_Text_TakeChallenge
	.globl SlateportCity_BattleTentLobby_Text_TakeChallenge
SlateportCity_BattleTentLobby_Text_TakeChallenge: @ 0x08275335
	.string "バトルトレードに\nちょうせん しますか?{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_TakeChallenge) > 0x15
	.error "SlateportCity_BattleTentLobby_Text_TakeChallenge may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_TakeChallenge) < 0x15
	.space 0x15 - (. - SlateportCity_BattleTentLobby_Text_TakeChallenge)
	.endif
	@ data/text/battle_tent.inc:230 SlateportCity_BattleTentLobby_Text_ExplainSlateportTent
	.globl SlateportCity_BattleTentLobby_Text_ExplainSlateportTent
SlateportCity_BattleTentLobby_Text_ExplainSlateportTent: @ 0x0827534A
	.string "バトルテント カイナかいじょうでは\nレンタルポケモンを つかった\lバトルトレード という イベントを\lおこなっています!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの 3ひきの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pみごと たたかいに しょうりすると\nたたかった トレーナーと ポケモンを\lトレード することが できます!\pトレードと たたかいを くりかえし\nみごと 3れんしょう したら\lすてきな しょうひんを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainSlateportTent) > 0x153
	.error "SlateportCity_BattleTentLobby_Text_ExplainSlateportTent may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainSlateportTent) < 0x153
	.space 0x153 - (. - SlateportCity_BattleTentLobby_Text_ExplainSlateportTent)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:354 BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit_Copy_Battle: @ 0x0827549D
	.string "またの ごりようを おまちしていますよ!{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit_Copy_Battle) > 0x15
	.error "BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit_Copy_Battle) < 0x15
	.space 0x15 - (. - BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:256 SlateportCity_BattleTentLobby_Text_WhichLevelMode
	.globl SlateportCity_BattleTentLobby_Text_WhichLevelMode
SlateportCity_BattleTentLobby_Text_WhichLevelMode: @ 0x082754B2
	.string "レベル50と レベル100の イベント\nどちらに ちょうせん しますか?{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_WhichLevelMode) > 0x25
	.error "SlateportCity_BattleTentLobby_Text_WhichLevelMode may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_WhichLevelMode) < 0x25
	.space 0x25 - (. - SlateportCity_BattleTentLobby_Text_WhichLevelMode)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:361 BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge_Copy_Battle: @ 0x082754D7
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge_Copy_Battle) > 0x28
	.error "BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge_Copy_Battle) < 0x28
	.space 0x28 - (. - BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge_Copy_Battle)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping_Copy_Battle: @ 0x082754FF
	.string "それでは ポケモンを\nおあずかり します!{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping_Copy_Battle) > 0x16
	.error "BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping_Copy_Battle) < 0x16
	.space 0x16 - (. - BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping_Copy_Battle)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_StepThisWay_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_StepThisWay_Copy_Battle: @ 0x08275515
	.string "さあさあ こちらに どうぞ!{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_StepThisWay_Copy_Battle) > 0xf
	.error "BattleFrontier_BattleFactoryLobby_Text_StepThisWay_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_StepThisWay_Copy_Battle) < 0xf
	.space 0xf - (. - BattleFrontier_BattleFactoryLobby_Text_StepThisWay_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:272 SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
	.globl SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults: @ 0x08275524
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults) > 0x4d
	.error "SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults) < 0x4d
	.space 0x4d - (. - SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:381 BattleFrontier_BattleFactoryLobby_Text_ReturnMons (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_ReturnMons_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_ReturnMons_Copy_Battle: @ 0x08275571
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMons_Copy_Battle) > 0x25
	.error "BattleFrontier_BattleFactoryLobby_Text_ReturnMons_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMons_Copy_Battle) < 0x25
	.space 0x25 - (. - BattleFrontier_BattleFactoryLobby_Text_ReturnMons_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:286 SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
	.globl SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons: @ 0x08275596
	.string "3れんしょう おめでとう ございます!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons) > 0x56
	.error "SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons) < 0x56
	.space 0x56 - (. - SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons)
	.endif
	@ field-script:0x1FB0EE FieldScriptText_2755EC
	.globl FieldScriptText_2755EC
FieldScriptText_2755EC: @ 0x082755EC
	.string "3れんしょうを　きねんして\nこちらを　さしあげます！{EOS}"
	.if (. - FieldScriptText_2755EC) > 0x1b
	.error "FieldScriptText_2755EC may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2755EC) < 0x1b
	.space 0x1b - (. - FieldScriptText_2755EC)
	.endif
	@ data/text/battle_tent.inc:298 SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom
	.globl SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom
SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom: @ 0x08275607
	.string "おやや?\nどうぐが いっぱい ですねー\pどうぐを せいり してから\nまた きてください!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom) > 0x2d
	.error "SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom) < 0x2d
	.space 0x2d - (. - SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom)
	.endif
	@ field-script:0x1FB176 FieldScriptText_275634
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_275634
FieldScriptText_275634: @ 0x08275634
	.string "おまちして　おりましたよ！\pちょうせんを　さいかいする　まえに\nレポートを　かきます！{EOS}"
	.if (. - FieldScriptText_275634) != 0x2c
	.error "FieldScriptText_275634 must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:308 SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting
	.globl SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting
SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting: @ 0x08275660
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね!\pざんねんですが\nちょうせんは むこうと なります!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting) > 0x49
	.error "SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting) < 0x49
	.space 0x49 - (. - SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_WellReturnMons_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_WellReturnMons_Copy_Battle: @ 0x082756A9
	.string "おきゃくさまの ポケモンを\nおかえしします!{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WellReturnMons_Copy_Battle) > 0x17
	.error "BattleFrontier_BattleFactoryLobby_Text_WellReturnMons_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_WellReturnMons_Copy_Battle) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleFactoryLobby_Text_WellReturnMons_Copy_Battle)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_2756C0
BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_2756C0: @ 0x082756C0
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_2756C0) > 0xe
	.error "BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_2756C0 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_2756C0) < 0xe
	.space 0xe - (. - BattleFrontier_BattleArenaLobby_Text_ReceivedPrize_Copy_Battle_2756C0)
	.endif
	@ data/text/battle_tent.inc:326 SlateportCity_BattleTentLobby_Text_RulesAreListed
	.globl SlateportCity_BattleTentLobby_Text_RulesAreListed
SlateportCity_BattleTentLobby_Text_RulesAreListed: @ 0x082756CE
	.string "バトルトレードの ルールが かかれてる!{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_RulesAreListed) > 0x15
	.error "SlateportCity_BattleTentLobby_Text_RulesAreListed may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_RulesAreListed) < 0x15
	.space 0x15 - (. - SlateportCity_BattleTentLobby_Text_RulesAreListed)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Battle_2756E3
BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Battle_2756E3: @ 0x082756E3
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Battle_2756E3) > 0x10
	.error "BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Battle_2756E3 may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Battle_2756E3) < 0x10
	.space 0x10 - (. - BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading_Copy_Battle_2756E3)
	.endif
	@ data/text/battle_tent.inc:333 SlateportCity_BattleTentLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SlateportCity_BattleTentLobby_Text_ExplainBasicRules
SlateportCity_BattleTentLobby_Text_ExplainBasicRules: @ 0x082756F3
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの ときも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainBasicRules) != 0x64
	.error "SlateportCity_BattleTentLobby_Text_ExplainBasicRules must retain its original byte length"
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules_Copy_Battle: @ 0x08275757
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules_Copy_Battle) > 0x51
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules_Copy_Battle) < 0x51
	.space 0x51 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:348 SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules
	.globl SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules
SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules: @ 0x082757A8
	.string "いちど たたかいに かつ たびに\n1かい 1ひき だけ ポケモンを\lトレード することが できます\p1かいの ちょうせんで\nトレードが できるのは\l2にんめの トレーナーまで です{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules) > 0x5b
	.error "SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules) < 0x5b
	.space 0x5b - (. - SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:536 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules (+1 aliases)
	.globl BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules_Copy_Battle
BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules_Copy_Battle: @ 0x08275803
	.string "トレードを おこなう ときには\n2つ ちゅういする ことが あります\pその1 トレードを おこなう ときは\nあいてから うけとる ポケモンの\lつよさは かくにん できません\pその2 ちょうせんを はじめた ときに\nかりた レンタルポケモンの じゅんばんが\lトレードの あとの たたかいにも\lひきつがれます{EOS}"
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules_Copy_Battle) > 0x99
	.error "BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules_Copy_Battle may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules_Copy_Battle) < 0x99
	.space 0x99 - (. - BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules_Copy_Battle)
	.endif
	@ data/text/battle_tent.inc:367 SlateportCity_BattleTentLobby_Text_ExplainMonRules
	.globl SlateportCity_BattleTentLobby_Text_ExplainMonRules
SlateportCity_BattleTentLobby_Text_ExplainMonRules: @ 0x0827589C
	.string "バトルテント カイナの ポケモンは\nすべて レンタルポケモン です\pレンタルポケモンの レベルは\nすべて 30に なります{EOS}"
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainMonRules) > 0x3e
	.error "SlateportCity_BattleTentLobby_Text_ExplainMonRules may not grow beyond its original slot"
	.endif
	.if (. - SlateportCity_BattleTentLobby_Text_ExplainMonRules) < 0x3e
	.space 0x3e - (. - SlateportCity_BattleTentLobby_Text_ExplainMonRules)
	.endif
	@ analyzed canonical ROM range 0x082758DA-0x082758F7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082758DA: @ 0x082758DA
	.string "バトルテント　シダケ　かいじょうの\nルールが　かかれてる!{EOS}"

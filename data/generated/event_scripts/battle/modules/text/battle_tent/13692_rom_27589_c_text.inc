	@ data/text/battle_tent.inc:1 FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_274A30
gText_Rom_274A30: @ 0x08274A30
	.string "バトルテント ハジツゲかいじょうへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!{EOS}"
	.if (. - gText_Rom_274A30) > 0x41
	.error "gText_Rom_274A30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A30) < 0x41
	.space 0x41 - (. - gText_Rom_274A30)
	.endif
	@ data/text/battle_tent.inc:7 FallarborTown_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_274A71
gText_Rom_274A71: @ 0x08274A71
	.string "かちぬきチームバトルに\nちょうせん されますかな?{EOS}"
	.if (. - gText_Rom_274A71) > 0x1a
	.error "gText_Rom_274A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A71) < 0x1a
	.space 0x1a - (. - gText_Rom_274A71)
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
	.globl gText_Rom_274AA3
gText_Rom_274AA3: @ 0x08274AA3
	.string "バトルテント ハジツゲかいじょうでは\nかちぬきチームバトルを\lおこなって おりますぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたいさせる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 3にんぬきを なされた あかつきには\nすてきな しょうひんを\lおおくり いたしますぞ!{EOS}"
	.if (. - gText_Rom_274AA3) > 0x171
	.error "gText_Rom_274AA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274AA3) < 0x171
	.space 0x171 - (. - gText_Rom_274AA3)
	.endif
	@ data/text/battle_tent.inc:40 FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_274C14
gText_Rom_274C14: @ 0x08274C14
	.string "バトルテントへ おつれする まえに\nレポートを かきますが よろしいですかな?{EOS}"
	.if (. - gText_Rom_274C14) > 0x28
	.error "gText_Rom_274C14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C14) < 0x28
	.space 0x28 - (. - gText_Rom_274C14)
	.endif
	@ data/text/battle_tent.inc:45 FallarborTown_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_274C3C
gText_Rom_274C3C: @ 0x08274C3C
	.string "レベル50と レベル100の へやが\nありますが どちらに まいられますかな?{EOS}"
	.if (. - gText_Rom_274C3C) > 0x28
	.error "gText_Rom_274C3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C3C) < 0x28
	.space 0x28 - (. - gText_Rom_274C3C)
	.endif
	@ data/text/battle_tent.inc:49 FallarborTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_274C64
gText_Rom_274C64: @ 0x08274C64
	.string "では ちょうせんする ポケモンを\n3ひき おえらび くだされ!{EOS}"
	.if (. - gText_Rom_274C64) > 0x20
	.error "gText_Rom_274C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C64) < 0x20
	.space 0x20 - (. - gText_Rom_274C64)
	.endif
	@ field-script:0x1F54B2 FieldScriptText_274C84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274C84
gText_Rom_274C84: @ 0x08274C84
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませんぬ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！{EOS}"
	.if (. - gText_Rom_274C84) != 0x79
	.error "gText_Rom_274C84 must retain its original byte length"
	.endif
	.globl gText_Rom_274CE3
	.set gText_Rom_274CE3, gText_Rom_274C84 + 0x5f
	@ data/text/battle_tent.inc:63 FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274CFD
gText_Rom_274CFD: @ 0x08274CFD
	.string "おきゃくじん!!\pさんかできる ポケモンが\n3ひき おりませぬ!\pさんかする ためには\nすべて ちがう しゅるいの ポケモンを\l3ひき よういして くだされ\pまた もたせる どうぐも\nすべて ちがう どうぐに してくだされ!\pなお タマゴ{STR_VAR_1}さんか させる ことは できませぬ!\pじゅんびが できましたら\nまた おこし くだされ!{EOS}"
	.if (. - gText_Rom_274CFD) != 0xa6
	.error "gText_Rom_274CFD must retain its original byte length"
	.endif
	.globl gText_Rom_274D89
	.set gText_Rom_274D89, gText_Rom_274CFD + 0x8c
	@ data/text/battle_tent.inc:76 FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent
	.globl gText_Rom_274DA3
gText_Rom_274DA3: @ 0x08274DA3
	.string "では バトルテントへ\nおつれいたしますぞ!{EOS}"
	.if (. - gText_Rom_274DA3) > 0x16
	.error "gText_Rom_274DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274DA3) < 0x16
	.space 0x16 - (. - gText_Rom_274DA3)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:437 BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown (+1 aliases)
	.globl gText_Rom_274DB9
gText_Rom_274DB9: @ 0x08274DB9
	.string "おきゃくじん!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが その ばあい\nちょうせんは むこうと なりますぞ!\pまた はじめから\nちょうせん してくだされ!!{EOS}"
	.if (. - gText_Rom_274DB9) > 0x62
	.error "gText_Rom_274DB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274DB9) < 0x62
	.space 0x62 - (. - gText_Rom_274DB9)
	.endif
	@ data/text/battle_tent.inc:89 FallarborTown_BattleTentLobby_Text_BeatThreeTrainers
	.globl gText_Rom_274E1B
gText_Rom_274E1B: @ 0x08274E1B
	.string "3にんぬき たっせい\nおみごとで ございました!{EOS}"
	.if (. - gText_Rom_274E1B) > 0x19
	.error "gText_Rom_274E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E1B) < 0x19
	.space 0x19 - (. - gText_Rom_274E1B)
	.endif
	@ data/text/battle_tent.inc:93 FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
	.globl gText_Rom_274E34
gText_Rom_274E34: @ 0x08274E34
	.string "レポートを かきますので\nおまちくだされ!{EOS}"
	.if (. - gText_Rom_274E34) > 0x16
	.error "gText_Rom_274E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E34) < 0x16
	.space 0x16 - (. - gText_Rom_274E34)
	.endif
	@ data/text/battle_tent.inc:97 FallarborTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl gText_Rom_274E4A
gText_Rom_274E4A: @ 0x08274E4A
	.string "3にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!{EOS}"
	.if (. - gText_Rom_274E4A) > 0x2a
	.error "gText_Rom_274E4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E4A) < 0x2a
	.space 0x2a - (. - gText_Rom_274E4A)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_274E74
gText_Rom_274E74: @ 0x08274E74
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_274E74) > 0xe
	.error "gText_Rom_274E74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E74) < 0xe
	.space 0xe - (. - gText_Rom_274E74)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl gText_Rom_274E82
gText_Rom_274E82: @ 0x08274E82
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!{EOS}"
	.if (. - gText_Rom_274E82) > 0x32
	.error "gText_Rom_274E82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E82) < 0x32
	.space 0x32 - (. - gText_Rom_274E82)
	.endif
	@ data/text/battle_tent.inc:111 FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274EB4
gText_Rom_274EB4: @ 0x08274EB4
	.string "おつかれさまでした!\pレポートを かきますので\nおまちくだされ!{EOS}"
	.if (. - gText_Rom_274EB4) != 0x21
	.error "gText_Rom_274EB4 must retain its original byte length"
	.endif
	.globl gText_Rom_274EBF
	.set gText_Rom_274EBF, gText_Rom_274EB4 + 0xb
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
	.globl gText_Rom_274EED
gText_Rom_274EED: @ 0x08274EED
	.string "おまちしておりました！\pバトルテントに　おつれする　まえに\nレポートを　かきますので　おまちくだされ！{EOS}"
	.if (. - gText_Rom_274EED) != 0x34
	.error "gText_Rom_274EED must retain its original byte length"
	.endif
	.globl gText_Rom_274EF9
	.set gText_Rom_274EF9, gText_Rom_274EED + 0xc
	@ data/text/battle_tent.inc:124 VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_274F21
gText_Rom_274F21: @ 0x08274F21
	.string "バトルテント\nシダケかいじょうへ ようこそ\pここでは トレーナーの\nしんらいの こころを ためしておる{EOS}"
	.if (. - gText_Rom_274F21) > 0x34
	.error "gText_Rom_274F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F21) < 0x34
	.space 0x34 - (. - gText_Rom_274F21)
	.endif
	@ data/text/battle_tent.inc:130 VerdanturfTown_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_274F55
gText_Rom_274F55: @ 0x08274F55
	.string "バトルテント シダケかいじょうに\nちょうせん するか?{EOS}"
	.if (. - gText_Rom_274F55) > 0x1c
	.error "gText_Rom_274F55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F55) < 0x1c
	.space 0x1c - (. - gText_Rom_274F55)
	.endif
	@ data/text/battle_tent.inc:134 VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent
	.globl gText_Rom_274F71
gText_Rom_274F71: @ 0x08274F71
	.string "バトルテント シダケかいじょうでの\nたたかいには まもらなければ ならない\lひとつの おきてが ある\pここでは ポケモンは\nいれかえ しか できない!\pそれいがいの めいれいは\nいっさい きんし して おるのだ!\pポケモンには おのれの せいかくの ままに\nかんがえ こうどう して もらう!\pおぬしは じぶんの\nポケモンたちを しんじて\lたたかいを みまもって やれ\pみごと 3にんの トレーナーを\nうちやぶることが できれば\lしょうひんを さしあげよう\pまた とちゅうで ちょうせんを\nちゅうだん したい ときは\lきちんと レポートを かかないと\lつづけて ちょうせん できん からな\lきを つけてくれ……{EOS}"
	.if (. - gText_Rom_274F71) > 0x132
	.error "gText_Rom_274F71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F71) < 0x132
	.space 0x132 - (. - gText_Rom_274F71)
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
	.globl gText_Rom_2750C4
gText_Rom_2750C4: @ 0x082750C4
	.string "レベル50の へやと レベル100の へやが\nあるが どちらに ちょうせん するのだ?{EOS}"
	.if (. - gText_Rom_2750C4) > 0x2c
	.error "gText_Rom_2750C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2750C4) < 0x2c
	.space 0x2c - (. - gText_Rom_2750C4)
	.endif
	@ data/text/battle_tent.inc:165 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2750F0
gText_Rom_2750F0: @ 0x082750F0
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\l3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pなお タマゴ{STR_VAR_1}ちょうせん させる ことは できん!\pじゅんびを ととのえてから また きなさい{EOS}"
	.if (. - gText_Rom_2750F0) != 0x9f
	.error "gText_Rom_2750F0 must retain its original byte length"
	.endif
	.globl gText_Rom_27518B
	.set gText_Rom_27518B, gText_Rom_2750F0 + 0x9b
	@ data/text/battle_tent.inc:177 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_27518F
gText_Rom_27518F: @ 0x0827518F
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\p3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pそして タマゴ{STR_VAR_1}ちょうせん\nさせる ことは できん!\pじゅんびを ととえてから また きなさい{EOS}"
	.if (. - gText_Rom_27518F) != 0x9f
	.error "gText_Rom_27518F must retain its original byte length"
	.endif
	.globl gText_Rom_27522A
	.set gText_Rom_27522A, gText_Rom_27518F + 0x9b
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
	.globl gText_Rom_27524A
gText_Rom_27524A: @ 0x0827524A
	.string "バトルテントへ むかうまえに\nレポートを かくが よろしいか?{EOS}"
	.if (. - gText_Rom_27524A) > 0x20
	.error "gText_Rom_27524A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27524A) < 0x20
	.space 0x20 - (. - gText_Rom_27524A)
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
	.globl gText_Rom_27527B
gText_Rom_27527B: @ 0x0827527B
	.string "よいものを　みせて　もらった\pそれでは　レポートを　かこう……\nしばし　またれよ……{EOS}"
	.if (. - gText_Rom_27527B) > 0x2b
	.error "gText_Rom_27527B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27527B) < 0x2b
	.space 0x2b - (. - gText_Rom_27527B)
	.endif
	@ data/text/battle_tent.inc:207 VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak
	.globl gText_Rom_2752A6
gText_Rom_2752A6: @ 0x082752A6
	.string "3にんぬき たっせい とは……\pおぬしと ポケモンの こころの きずなは\nまことの ようじゃな……{EOS}"
	.if (. - gText_Rom_2752A6) > 0x32
	.error "gText_Rom_2752A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752A6) < 0x32
	.space 0x32 - (. - gText_Rom_2752A6)
	.endif
	@ data/text/battle_tent.inc:212 VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
	.globl gText_Rom_2752D8
gText_Rom_2752D8: @ 0x082752D8
	.string "レポートに かくぞ\nしばし またれよ……{EOS}"
	.if (. - gText_Rom_2752D8) > 0x15
	.error "gText_Rom_2752D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752D8) < 0x15
	.space 0x15 - (. - gText_Rom_2752D8)
	.endif
	@ data/text/battle_tent.inc:216 VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl gText_Rom_2752ED
gText_Rom_2752ED: @ 0x082752ED
	.string "3にんぬきの あかしに\nこちらを さしあげよう……{EOS}"
	.if (. - gText_Rom_2752ED) > 0x1a
	.error "gText_Rom_2752ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752ED) < 0x1a
	.space 0x1a - (. - gText_Rom_2752ED)
	.endif
	@ data/text/battle_tent.inc:220 SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_275307
gText_Rom_275307: @ 0x08275307
	.string "バトルテント カイナかいじょうへ\nようこそ!\pバトルトレードの\nごあんないは こちらです!{EOS}"
	.if (. - gText_Rom_275307) > 0x2e
	.error "gText_Rom_275307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275307) < 0x2e
	.space 0x2e - (. - gText_Rom_275307)
	.endif
	@ data/text/battle_tent.inc:226 SlateportCity_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_275335
gText_Rom_275335: @ 0x08275335
	.string "バトルトレードに\nちょうせん しますか?{EOS}"
	.if (. - gText_Rom_275335) > 0x15
	.error "gText_Rom_275335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275335) < 0x15
	.space 0x15 - (. - gText_Rom_275335)
	.endif
	@ data/text/battle_tent.inc:230 SlateportCity_BattleTentLobby_Text_ExplainSlateportTent
	.globl gText_Rom_27534A
gText_Rom_27534A: @ 0x0827534A
	.string "バトルテント カイナかいじょうでは\nレンタルポケモンを つかった\lバトルトレード という イベントを\lおこなっています!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの 3ひきの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pみごと たたかいに しょうりすると\nたたかった トレーナーと ポケモンを\lトレード することが できます!\pトレードと たたかいを くりかえし\nみごと 3れんしょう したら\lすてきな しょうひんを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!{EOS}"
	.if (. - gText_Rom_27534A) > 0x153
	.error "gText_Rom_27534A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27534A) < 0x153
	.space 0x153 - (. - gText_Rom_27534A)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:354 BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit (+1 aliases)
	.globl gText_Rom_27549D
gText_Rom_27549D: @ 0x0827549D
	.string "またの ごりようを おまちしていますよ!{EOS}"
	.if (. - gText_Rom_27549D) > 0x15
	.error "gText_Rom_27549D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27549D) < 0x15
	.space 0x15 - (. - gText_Rom_27549D)
	.endif
	@ data/text/battle_tent.inc:256 SlateportCity_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_2754B2
gText_Rom_2754B2: @ 0x082754B2
	.string "レベル50と レベル100の イベント\nどちらに ちょうせん しますか?{EOS}"
	.if (. - gText_Rom_2754B2) > 0x25
	.error "gText_Rom_2754B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754B2) < 0x25
	.space 0x25 - (. - gText_Rom_2754B2)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:361 BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	.globl gText_Rom_2754D7
gText_Rom_2754D7: @ 0x082754D7
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?{EOS}"
	.if (. - gText_Rom_2754D7) > 0x28
	.error "gText_Rom_2754D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754D7) < 0x28
	.space 0x28 - (. - gText_Rom_2754D7)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl gText_Rom_2754FF
gText_Rom_2754FF: @ 0x082754FF
	.string "それでは ポケモンを\nおあずかり します!{EOS}"
	.if (. - gText_Rom_2754FF) > 0x16
	.error "gText_Rom_2754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754FF) < 0x16
	.space 0x16 - (. - gText_Rom_2754FF)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_275515
gText_Rom_275515: @ 0x08275515
	.string "さあさあ こちらに どうぞ!{EOS}"
	.if (. - gText_Rom_275515) > 0xf
	.error "gText_Rom_275515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275515) < 0xf
	.space 0xf - (. - gText_Rom_275515)
	.endif
	@ data/text/battle_tent.inc:272 SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
	.globl gText_Rom_275524
gText_Rom_275524: @ 0x08275524
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!{EOS}"
	.if (. - gText_Rom_275524) > 0x4d
	.error "gText_Rom_275524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275524) < 0x4d
	.space 0x4d - (. - gText_Rom_275524)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:381 BattleFrontier_BattleFactoryLobby_Text_ReturnMons (+1 aliases)
	.globl gText_Rom_275571
gText_Rom_275571: @ 0x08275571
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!{EOS}"
	.if (. - gText_Rom_275571) > 0x25
	.error "gText_Rom_275571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275571) < 0x25
	.space 0x25 - (. - gText_Rom_275571)
	.endif
	@ data/text/battle_tent.inc:286 SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
	.globl gText_Rom_275596
gText_Rom_275596: @ 0x08275596
	.string "3れんしょう おめでとう ございます!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!{EOS}"
	.if (. - gText_Rom_275596) > 0x56
	.error "gText_Rom_275596 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275596) < 0x56
	.space 0x56 - (. - gText_Rom_275596)
	.endif
	@ field-script:0x1FB0EE FieldScriptText_2755EC
	.globl gText_Rom_2755EC
gText_Rom_2755EC: @ 0x082755EC
	.string "3れんしょうを　きねんして\nこちらを　さしあげます！{EOS}"
	.if (. - gText_Rom_2755EC) > 0x1b
	.error "gText_Rom_2755EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2755EC) < 0x1b
	.space 0x1b - (. - gText_Rom_2755EC)
	.endif
	@ data/text/battle_tent.inc:298 SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom
	.globl gText_Rom_275607
gText_Rom_275607: @ 0x08275607
	.string "おやや?\nどうぐが いっぱい ですねー\pどうぐを せいり してから\nまた きてください!{EOS}"
	.if (. - gText_Rom_275607) > 0x2d
	.error "gText_Rom_275607 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275607) < 0x2d
	.space 0x2d - (. - gText_Rom_275607)
	.endif
	@ field-script:0x1FB176 FieldScriptText_275634
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_275634
gText_Rom_275634: @ 0x08275634
	.string "おまちして　おりましたよ！\pちょうせんを　さいかいする　まえに\nレポートを　かきます！{EOS}"
	.if (. - gText_Rom_275634) != 0x2c
	.error "gText_Rom_275634 must retain its original byte length"
	.endif
	.globl gText_Rom_275642
	.set gText_Rom_275642, gText_Rom_275634 + 0xe
	@ data/text/battle_tent.inc:308 SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting
	.globl gText_Rom_275660
gText_Rom_275660: @ 0x08275660
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね!\pざんねんですが\nちょうせんは むこうと なります!{EOS}"
	.if (. - gText_Rom_275660) > 0x49
	.error "gText_Rom_275660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275660) < 0x49
	.space 0x49 - (. - gText_Rom_275660)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl gText_Rom_2756A9
gText_Rom_2756A9: @ 0x082756A9
	.string "おきゃくさまの ポケモンを\nおかえしします!{EOS}"
	.if (. - gText_Rom_2756A9) > 0x17
	.error "gText_Rom_2756A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756A9) < 0x17
	.space 0x17 - (. - gText_Rom_2756A9)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_2756C0
gText_Rom_2756C0: @ 0x082756C0
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_2756C0) > 0xe
	.error "gText_Rom_2756C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756C0) < 0xe
	.space 0xe - (. - gText_Rom_2756C0)
	.endif
	@ data/text/battle_tent.inc:326 SlateportCity_BattleTentLobby_Text_RulesAreListed
	.globl gText_Rom_2756CE
gText_Rom_2756CE: @ 0x082756CE
	.string "バトルトレードの ルールが かかれてる!{EOS}"
	.if (. - gText_Rom_2756CE) > 0x15
	.error "gText_Rom_2756CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756CE) < 0x15
	.space 0x15 - (. - gText_Rom_2756CE)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2756E3
gText_Rom_2756E3: @ 0x082756E3
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - gText_Rom_2756E3) > 0x10
	.error "gText_Rom_2756E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756E3) < 0x10
	.space 0x10 - (. - gText_Rom_2756E3)
	.endif
	@ data/text/battle_tent.inc:333 SlateportCity_BattleTentLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2756F3
gText_Rom_2756F3: @ 0x082756F3
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの ときも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません{EOS}"
	.if (. - gText_Rom_2756F3) != 0x64
	.error "gText_Rom_2756F3 must retain its original byte length"
	.endif
	.globl gText_Rom_275753
	.set gText_Rom_275753, gText_Rom_2756F3 + 0x60
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl gText_Rom_275757
gText_Rom_275757: @ 0x08275757
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです{EOS}"
	.if (. - gText_Rom_275757) > 0x51
	.error "gText_Rom_275757 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275757) < 0x51
	.space 0x51 - (. - gText_Rom_275757)
	.endif
	@ data/text/battle_tent.inc:348 SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules
	.globl gText_Rom_2757A8
gText_Rom_2757A8: @ 0x082757A8
	.string "いちど たたかいに かつ たびに\n1かい 1ひき だけ ポケモンを\lトレード することが できます\p1かいの ちょうせんで\nトレードが できるのは\l2にんめの トレーナーまで です{EOS}"
	.if (. - gText_Rom_2757A8) > 0x5b
	.error "gText_Rom_2757A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2757A8) < 0x5b
	.space 0x5b - (. - gText_Rom_2757A8)
	.endif
	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:536 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules (+1 aliases)
	.globl gText_Rom_275803
gText_Rom_275803: @ 0x08275803
	.string "トレードを おこなう ときには\n2つ ちゅういする ことが あります\pその1 トレードを おこなう ときは\nあいてから うけとる ポケモンの\lつよさは かくにん できません\pその2 ちょうせんを はじめた ときに\nかりた レンタルポケモンの じゅんばんが\lトレードの あとの たたかいにも\lひきつがれます{EOS}"
	.if (. - gText_Rom_275803) > 0x99
	.error "gText_Rom_275803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275803) < 0x99
	.space 0x99 - (. - gText_Rom_275803)
	.endif
	@ data/text/battle_tent.inc:367 SlateportCity_BattleTentLobby_Text_ExplainMonRules
	.globl gText_Rom_27589C
gText_Rom_27589C: @ 0x0827589C
	.string "バトルテント カイナの ポケモンは\nすべて レンタルポケモン です\pレンタルポケモンの レベルは\nすべて 30に なります{EOS}"
	.if (. - gText_Rom_27589C) > 0x3e
	.error "gText_Rom_27589C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27589C) < 0x3e
	.space 0x3e - (. - gText_Rom_27589C)
	.endif
	@ analyzed canonical ROM range 0x082758DA-0x082758F7
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_082758DA: @ 0x082758DA
	.string "バトルテント　シダケ　かいじょうの\nルールが　かかれてる!{EOS}"

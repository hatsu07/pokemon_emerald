	@ field-script:0x22A178 FieldScriptText_22A333
	.globl FieldScriptText_22A333
FieldScriptText_22A333: @ 0x0822A333
	.string "トレーナーの　こころを　ためす　ばしょ\nバトルパレスへ　ようこそ\pここでは　シングル　バトルホールへの\nちょうせんを　うけつけて　おる……{EOS}"
	.if (. - FieldScriptText_22A333) > 0x46
	.error "FieldScriptText_22A333 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A333) < 0x46
	.space 0x46 - (. - FieldScriptText_22A333)
	.endif
	@ field-script:0x22A189 FieldScriptText_22A379
	.globl FieldScriptText_22A379
FieldScriptText_22A379: @ 0x0822A379
	.string "シングル　バトルホールに\nちょうせん　するか？{EOS}"
	.if (. - FieldScriptText_22A379) > 0x18
	.error "FieldScriptText_22A379 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A379) < 0x18
	.space 0x18 - (. - FieldScriptText_22A379)
	.endif
	@ field-script:0x22A105 FieldScriptText_22A391
	.globl FieldScriptText_22A391
FieldScriptText_22A391: @ 0x0822A391
	.string "ここには　シングル　バトルホールと\nよばれる　シングルバトルの　ための\lひろまを　いくつか　ようい　しておる\pここでの　たたかいには\nまもらなければ　ならない\lひとつの　おきてが　ある\pここでは　ポケモンは\nいれかえ　しか　できない！\pそれいがいの　めいれいは\nいっさい　きんし　して　おるのだ！\pポケモンには　せいかくの　ままに\nかんがえ　こうどう　して　もらう！\pおぬしは　じぶんの\nポケモンたちを　しんじて\lたたかいを　みまもって　やれ\pみごと　7にんの　トレーナーを\nうちやぶることが　できれば\lバトルポイントを　さしあげよう\pまた　とちゅうで　ちょうせんを\nちゅうだん　したい　ときは\lきちんと　レポートを　かかないと\lつづけて　ちょうせん　できんからな\lきを　つけてくれ……{EOS}"
	.if (. - FieldScriptText_22A391) > 0x158
	.error "FieldScriptText_22A391 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A391) < 0x158
	.space 0x158 - (. - FieldScriptText_22A391)
	.endif
	@ data/text/battle_tent.inc:156 VerdanturfTown_BattleTentLobby_Text_ReturnFortified
	.globl gText_Rom_22A4E9
gText_Rom_22A4E9: @ 0x0822A4E9
	.string "おのれの こころと ポケモンを きたえたら\nまた くるがよい……{EOS}"
	.if (. - gText_Rom_22A4E9) > 0x21
	.error "gText_Rom_22A4E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A4E9) < 0x21
	.space 0x21 - (. - gText_Rom_22A4E9)
	.endif
	@ field-script:0x229FBF FieldScriptText_22A50A
	.globl FieldScriptText_22A50A
FieldScriptText_22A50A: @ 0x0822A50A
	.string "レベル50のへや　オープンレベルのへやが\nあるが　どちらに　ちょうせん　するのだ？{EOS}"
	.if (. - FieldScriptText_22A50A) > 0x2a
	.error "FieldScriptText_22A50A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A50A) < 0x2a
	.space 0x2a - (. - FieldScriptText_22A50A)
	.endif
	@ field-script:0x22A13A FieldScriptText_22A534
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22A534
FieldScriptText_22A534: @ 0x0822A534
	.string "おぬし……\pちょうせん　できる　ポケモンが\n3ひき　おらんぞ！\pちょうせん　するには　レベルが　50いかで\nすべて　ちがう　しゅるいの　ポケモンを\p3ひき　ようい　してくれ\pまた　もたせる　どうぐも\nすべて　ちがう　もので　なければ　いかん\pそして　タマゴ{0xFD}{0x02}ちょうせん　させる　ことは　できん！\pじゅんびを　ととのえてから　また　きなさい{EOS}"
	.if (. - FieldScriptText_22A534) != 0xab
	.error "FieldScriptText_22A534 must retain its original byte length"
	.endif
	@ field-script:0x22A147 FieldScriptText_22A5DF
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22A5DF
FieldScriptText_22A5DF: @ 0x0822A5DF
	.string "おぬし……\pちょうせん　できる　ポケモンが\n3ひき　おらんぞ！\pちょうせん　するには\nすべて　ちがう　しゅるいの　ポケモンを\p3ひき　ようい　してくれ\pまた　もたせる　どうぐも\nすべて　ちがう　もので　なければ　いかん\pそして　タマゴ{0xFD}{0x02}ちょうせん　させる　ことは　できん！\pじゅんびを　ととのえてから　また　きなさい{EOS}"
	.if (. - FieldScriptText_22A5DF) != 0xa0
	.error "FieldScriptText_22A5DF must retain its original byte length"
	.endif
	@ data/text/battle_tent.inc:190 VerdanturfTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_22A67F
gText_Rom_22A67F: @ 0x0822A67F
	.string "では ちょうせんする ポケモンを\n3ひき えらんでくれ{EOS}"
	.if (. - gText_Rom_22A67F) > 0x1c
	.error "gText_Rom_22A67F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A67F) < 0x1c
	.space 0x1c - (. - gText_Rom_22A67F)
	.endif
	@ field-script:0x22A033 FieldScriptText_22A69B
	.globl FieldScriptText_22A69B
FieldScriptText_22A69B: @ 0x0822A69B
	.string "バトルホールへ　むかうまえに\nレポートを　かくが　よろしいか？{EOS}"
	.if (. - FieldScriptText_22A69B) > 0x20
	.error "FieldScriptText_22A69B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A69B) < 0x20
	.space 0x20 - (. - FieldScriptText_22A69B)
	.endif
	@ data/text/battle_tent.inc:198 VerdanturfTown_BattleTentLobby_Text_NowFollowMe
	.globl gText_Rom_22A6BB
gText_Rom_22A6BB: @ 0x0822A6BB
	.string "それでは\nわしに ついてこい……{EOS}"
	.if (. - gText_Rom_22A6BB) > 0x11
	.error "gText_Rom_22A6BB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A6BB) < 0x11
	.space 0x11 - (. - gText_Rom_22A6BB)
	.endif
	@ field-script:0x229E4D FieldScriptText_22A6CC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22A6CC
FieldScriptText_22A6CC: @ 0x0822A6CC
	.string "よいものを　みせて　もらった\pそれでは　せいせきを　レポートに　かくぞ\nしばし　またれよ……{EOS}"
	.if (. - FieldScriptText_22A6CC) != 0x2f
	.error "FieldScriptText_22A6CC must retain its original byte length"
	.endif
	@ field-script:0x229E05 FieldScriptText_22A6FB
	.globl FieldScriptText_22A6FB
FieldScriptText_22A6FB: @ 0x0822A6FB
	.string "7にんぬき　たっせい　とは……\pおぬしと　ポケモンの　こころの　きずなは\nまことの　ようじゃな……{EOS}"
	.if (. - FieldScriptText_22A6FB) > 0x32
	.error "FieldScriptText_22A6FB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A6FB) < 0x32
	.space 0x32 - (. - FieldScriptText_22A6FB)
	.endif
	@ field-script:0x229E31 FieldScriptText_22A72D
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_22A72D
FieldScriptText_22A72D: @ 0x0822A72D
	.string "せいせきを　レポートに　かくぞ\nしばし　またれよ……{EOS}"
	.if (. - FieldScriptText_22A72D) != 0x1b
	.error "FieldScriptText_22A72D must retain its original byte length"
	.endif
	@ ANALYSIS: SOURCE_RANGE offset=0x22A748, size=0x1E
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0822A748: @ 0x0822A748
	.string "7にんぬきの　あかしに\nバトルポイントを　さしあげよう……{EOS}"
	@ field-script:0x1F6474 FieldScriptText_22A766
	.globl FieldScriptText_22A766
FieldScriptText_22A766: @ 0x0822A766
	.string "どうぐが　いっぱいの　ようだな……\pどうぐを　せいりしてから\nまた　くるがよい……{EOS}"
	.if (. - FieldScriptText_22A766) > 0x2a
	.error "FieldScriptText_22A766 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A766) < 0x2a
	.space 0x2a - (. - FieldScriptText_22A766)
	.endif
	@ field-script:0x1F64CF FieldScriptText_22A790
	.globl FieldScriptText_22A790
FieldScriptText_22A790: @ 0x0822A790
	.string "まっておったぞ……{EOS}"
	.if (. - FieldScriptText_22A790) > 0xa
	.error "FieldScriptText_22A790 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A790) < 0xa
	.space 0xa - (. - FieldScriptText_22A790)
	.endif
	@ field-script:0x1F64D6 FieldScriptText_22A79A
	.globl FieldScriptText_22A79A
FieldScriptText_22A79A: @ 0x0822A79A
	.string "バトルホールへ　むかうまえに\nレポートを　かくぞ……{EOS}"
	.if (. - FieldScriptText_22A79A) > 0x1b
	.error "FieldScriptText_22A79A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A79A) < 0x1b
	.space 0x1b - (. - FieldScriptText_22A79A)
	.endif
	@ field-script:0x1F63BA FieldScriptText_22A7B5
	.globl FieldScriptText_22A7B5
FieldScriptText_22A7B5: @ 0x0822A7B5
	.string "おぬし……\pぜんかい　ちゃんと　レポートを　かいて\nしゅうりょう　しなかったな？\pざんねんだが　そのばあい\nちょうせんは　むこうと　なる……{EOS}"
	.if (. - FieldScriptText_22A7B5) > 0x47
	.error "FieldScriptText_22A7B5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A7B5) < 0x47
	.space 0x47 - (. - FieldScriptText_22A7B5)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_22A7FC
gText_Rom_22A7FC: @ 0x0822A7FC
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!{EOS}"
	.if (. - gText_Rom_22A7FC) > 0xe
	.error "gText_Rom_22A7FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A7FC) < 0xe
	.space 0xe - (. - gText_Rom_22A7FC)
	.endif
	@ field-script:0x22A25C FieldScriptText_22A80A
	.globl FieldScriptText_22A80A
FieldScriptText_22A80A: @ 0x0822A80A
	.string "ウス！　ウス！　がんばりやの　わしには\nがんばりやの　ポケモンが　ぴったりっス！\pこうげき　こそ　さいだいの　ぼうぎょ！\nガンガン　せめまくって　さいこうっス！\pところで　きいて　くださいッスよー\pときどき　ここに　とっても\nかわいい　おじょうちゃんが\lあそびに　くるッスけど\lそのこったら　ポケモンの　きもちが\lわかるとか　いうんスよー\pいやー　ほんと　かわいいッスよねー……\p……　ん　なんスか？　そのめは？{EOS}"
	.if (. - FieldScriptText_22A80A) > 0xcf
	.error "FieldScriptText_22A80A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A80A) < 0xcf
	.space 0xcf - (. - FieldScriptText_22A80A)
	.endif
	@ field-script:0x22A265 FieldScriptText_22A8D9
	.globl FieldScriptText_22A8D9
FieldScriptText_22A8D9: @ 0x0822A8D9
	.string "うーん……\pどうやら　ここでは　ポケモンの　せいかくと\nおぼえさせている　わざとの　あいしょうが\lたたかいの　カギを　にぎってる　ようだ\pそう……　もし　きみの　ポケモンが\nじぶんの　ちからが　はっき　できなくて\lこまっている　ようす　だったら\lおぼえさせている　わざから\lかんがえ　なおす　ひつようが　あるかもな{EOS}"
	.if (. - FieldScriptText_22A8D9) > 0x9e
	.error "FieldScriptText_22A8D9 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A8D9) < 0x9e
	.space 0x9e - (. - FieldScriptText_22A8D9)
	.endif
	@ field-script:0x22A26E FieldScriptText_22A977
	.globl FieldScriptText_22A977
FieldScriptText_22A977: @ 0x0822A977
	.string "あたしの　ポケモン\nふだんは　とーっても　おとなしいのよ\pだけど　バトルホールで　たたかってると\nときどき　めつきが\lガラッと　かわっちゃうの！\pすっごい　はくりょくで　びっくりしちゃう！{EOS}"
	.if (. - FieldScriptText_22A977) > 0x5f
	.error "FieldScriptText_22A977 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A977) < 0x5f
	.space 0x5f - (. - FieldScriptText_22A977)
	.endif
	@ field-script:0x22A277 FieldScriptText_22A9D6
	.globl FieldScriptText_22A9D6
FieldScriptText_22A9D6: @ 0x0822A9D6
	.string "あいてを　よわらせたり……\nじわじわ　せめて　くれるのは\lどんな　せいかくかな……\p……　いがいに　のうてんき　とか？\p……　まさかねぇ……{EOS}"
	.if (. - FieldScriptText_22A9D6) > 0x47
	.error "FieldScriptText_22A9D6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22A9D6) < 0x47
	.space 0x47 - (. - FieldScriptText_22A9D6)
	.endif
	@ field-script:0x22A181 FieldScriptText_22AA1D
	.globl FieldScriptText_22AA1D
FieldScriptText_22AA1D: @ 0x0822AA1D
	.string "トレーナーの　こころを　ためす　ばしょ\nバトルパレスへ　ようこそ\pここでは　ダブル　バトルホールへの\nちょうせんを　うけつけておる……{EOS}"
	.if (. - FieldScriptText_22AA1D) > 0x44
	.error "FieldScriptText_22AA1D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AA1D) < 0x44
	.space 0x44 - (. - FieldScriptText_22AA1D)
	.endif
	@ field-script:0x22A18F FieldScriptText_22AA61
	.globl FieldScriptText_22AA61
FieldScriptText_22AA61: @ 0x0822AA61
	.string "ダブル　バトルホールに\nちょうせん　するか？{EOS}"
	.if (. - FieldScriptText_22AA61) > 0x17
	.error "FieldScriptText_22AA61 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AA61) < 0x17
	.space 0x17 - (. - FieldScriptText_22AA61)
	.endif
	@ field-script:0x22A112 FieldScriptText_22AA78
	.globl FieldScriptText_22AA78
FieldScriptText_22AA78: @ 0x0822AA78
	.string "ここには　ダブル　バトルホールと\nよばれる　ダブルバトルの　ための\lひろまを　いくつか　ようい　しておる\pここでの　たたかいには\nまもらなければ　ならない\lひとつの　おきてが　ある\pここでは　ポケモンは\nいれかえ　しか　できない！\pそれいがいの　めいれいは\nいっさい　きんし　して　おるのだ！\pポケモンには　せいかくの　ままに\nかんがえ　こうどう　して　もらう！\pおぬしは　じぶんの\nポケモンたちを　しんじて\lたたかいを　みまもって　やれ\pみごと　7にんの　トレーナーを\nうちやぶることが　できれば\lバトルポイントを　さしあげよう\pまた　とちゅうで　ちょうせんを\nちゅうだん　したい　ときは\lきちんと　レポートを　かかないと\lつづけて　ちょうせん　できんからな\lきを　つけてくれ……{EOS}"
	.if (. - FieldScriptText_22AA78) > 0x156
	.error "FieldScriptText_22AA78 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AA78) < 0x156
	.space 0x156 - (. - FieldScriptText_22AA78)
	.endif
	@ field-script:0x229E12 FieldScriptText_22ABCE
	.globl FieldScriptText_22ABCE
FieldScriptText_22ABCE: @ 0x0822ABCE
	.string "パレスガーディアンを　たおし\n7にんぬきを　たっせいするとは……{EOS}"
	.if (. - FieldScriptText_22ABCE) > 0x21
	.error "FieldScriptText_22ABCE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22ABCE) < 0x21
	.space 0x21 - (. - FieldScriptText_22ABCE)
	.endif
	@ field-script:0x229E1A FieldScriptText_22ABEF
	.globl FieldScriptText_22ABEF
FieldScriptText_22ABEF: @ 0x0822ABEF
	.string "おぬしと　ポケモンの　きずなを　たたえ\nバトルポイントを　おくろう……{EOS}"
	.if (. - FieldScriptText_22ABEF) > 0x24
	.error "FieldScriptText_22ABEF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22ABEF) < 0x24
	.space 0x24 - (. - FieldScriptText_22ABEF)
	.endif
	@ field-script:0x229EA9 FieldScriptText_22AC13
	.globl FieldScriptText_22AC13
FieldScriptText_22AC13: @ 0x0822AC13
	.string "バトルパレスで\nさいごに　おこなった　たたかいを\lフロンティアパスに　きろく　するか？{EOS}"
	.if (. - FieldScriptText_22AC13) > 0x2c
	.error "FieldScriptText_22AC13 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AC13) < 0x2c
	.space 0x2c - (. - FieldScriptText_22AC13)
	.endif
	@ field-script:0x22A281 FieldScriptText_22AC3F
	.globl FieldScriptText_22AC3F
FieldScriptText_22AC3F: @ 0x0822AC3F
	.string "バトルホールの　ルールが　かかれている！{EOS}"
	.if (. - FieldScriptText_22AC3F) > 0x15
	.error "FieldScriptText_22AC3F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AC3F) < 0x15
	.space 0x15 - (. - FieldScriptText_22AC3F)
	.endif
	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_22AC54
gText_Rom_22AC54: @ 0x0822AC54
	.string "どの せつめいを よみますか?{EOS}"
	.if (. - gText_Rom_22AC54) > 0x10
	.error "gText_Rom_22AC54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AC54) < 0x10
	.space 0x10 - (. - gText_Rom_22AC54)
	.endif
	@ field-script:0x1F6823 FieldScriptText_22AC64
	.globl FieldScriptText_22AC64
FieldScriptText_22AC64: @ 0x0822AC64
	.string "ここでは　ポケモンたちが\nじぶんで　かんがえ　たたかいます\pじゅんすいな　やせいの　ときとは　ちがって\nひとと　くらしている　ポケモンは\lせいかくに　よって　どんな　こうどうを\lするかが　かわるのです{EOS}"
	.if (. - FieldScriptText_22AC64) > 0x65
	.error "FieldScriptText_22AC64 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AC64) < 0x65
	.space 0x65 - (. - FieldScriptText_22AC64)
	.endif
	@ field-script:0x1F6831 FieldScriptText_22ACC9
	.globl FieldScriptText_22ACC9
FieldScriptText_22ACC9: @ 0x0822ACC9
	.string "とにかく　こうげきが\nすきな　せいかく\pじぶんの　からだを　まもる　ことが\nすきな　せいかく\pあいてを　こまらせたり　かわった　ことを\nするのが　すきな　せいかく\pポケモンは　せいかくに　よって\nすきで　とくいな　わざと\lきらいで　にがてな　わざが　ちがいます{EOS}"
	.if (. - FieldScriptText_22ACC9) > 0x83
	.error "FieldScriptText_22ACC9 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22ACC9) < 0x83
	.space 0x83 - (. - FieldScriptText_22ACC9)
	.endif
	@ field-script:0x1F683F FieldScriptText_22AD4C
	.globl FieldScriptText_22AD4C
FieldScriptText_22AD4C: @ 0x0822AD4C
	.string "あいてに　むかって　じぶんから\nちょくせつ　ダメージを　あたえる\lこうげきの　わざ\pたたかいの　じゅんびや　キズついた　からだの\nかいふくを　する　ぼうぎょの　わざ\pあいての　のうりょくを　さげたり\nどくや　まひに　したり　などの\lすこし　かわった　ことを　する　わざ\pポケモンは　すべての　わざを\nおおきく　3つの　しゅるいに　わけて\lどんな　わざを　だすか　かんがえて　います{EOS}"
	.if (. - FieldScriptText_22AD4C) > 0xbf
	.error "FieldScriptText_22AD4C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_22AD4C) < 0xbf
	.space 0xbf - (. - FieldScriptText_22AD4C)
	.endif
	@ data/text/battle_tent.inc:419 VerdanturfTown_BattleTentLobby_Text_ExplainUnderpoweredRules
	.globl gText_Rom_22AE0B
gText_Rom_22AE0B: @ 0x0822AE0B
	.string "トレーナーの めいれいを うけて いない\nポケモンは うまく わざを\lだせない ことが あります\pポケモンは きらいな わざを\nつかうのは とくいでは ありません\pせいかくに あわない わざ ばかりを\nおぼえさせて いると たたかいで\lポケモンが じぶんの ちからを はっき\lできない ことが おおく なります{EOS}"
	.if (. - gText_Rom_22AE0B) > 0x9c
	.error "gText_Rom_22AE0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AE0B) < 0x9c
	.space 0x9c - (. - gText_Rom_22AE0B)
	.endif
	@ data/text/battle_tent.inc:431 VerdanturfTown_BattleTentLobby_Text_ExplainWhenInDangerRules
	.globl gText_Rom_22AEA7
gText_Rom_22AEA7: @ 0x0822AEA7
	.string "ポケモンの せいかくの なかには\nピンチに なることで もともとの\lせいかくとは ちがう タイプの\lわざを つかう ように\lなるものが あります\pピンチに なって すこし かわった\nこうどうを はじめた ポケモンには\lじゅうぶん ちゅうい しましょう{EOS}"
	.if (. - gText_Rom_22AEA7) > 0x7e
	.error "gText_Rom_22AEA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AEA7) < 0x7e
	.space 0x7e - (. - gText_Rom_22AEA7)
	.endif
	@ analyzed canonical ROM range 0x0822AF25-0x0822B05E
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_BattleFrontier_BattlePalaceCorridor_OnFrame: @ 0x0822AF25
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_BattleFrontier_BattlePalaceCorridor_OnFrame
	.byte 0
gMapScriptConditionTable_BattleFrontier_BattlePalaceCorridor_OnFrame: @ 0x0822AF2B
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_0822AF35
	.2byte 0
EventScript_JP_0822AF35: @ 0x0822AF35
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x0010
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX4_1
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX4_1
	@ event command: waitmovement
	waitmovement 0x0000
	lockall
	setvar 0x8004, 0x0003
	@ event command: special
	special CallBattlePalaceFunction
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0822B00D
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0822B016
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_0822B01F
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_0822B028
	compare_var_to_value 0x800D, 0x0004
	call_if 0x01, EventScript_JP_0822B031
	closemessage
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0001
	@ event command: special
	special CallFrontierUtilFunc
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822AFD5
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_WalkLeftX2_WalkUpX2
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX3_WalkLeftX2_WalkUp
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x0006, 0x0003
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_SetInvisible + 0x1
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x0006, 0x0003
	waitdooranim
	goto EventScript_JP_0822B003
EventScript_JP_0822AFD5: @ 0x0822AFD5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_WalkUp_WalkRightX2_WalkUpX3
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_WalkRightX2_WalkUpX2
	@ event command: waitmovement
	waitmovement 0x0000
	opendoor 0x000A, 0x0003
	waitdooranim
	@ event command: applymovement
	applymovement 0x0001, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_SetInvisible + 0x1
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_SetInvisible
	@ event command: waitmovement
	waitmovement 0x0000
	closedoor 0x000A, 0x0003
	waitdooranim
EventScript_JP_0822B003: @ 0x0822B003
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: warp
	warp MAP_ID_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM, 0xFF, 0x0007, 0x0004
	.byte 0x27, 0x02
EventScript_JP_0822B00D: @ 0x0822B00D
	loadword 0x00, BattleFrontier_BattlePalaceCorridor_Text_PeopleAndMonAreSame
	callstd 0x04
	return
EventScript_JP_0822B016: @ 0x0822B016
	loadword 0x00, BattleFrontier_BattlePalaceCorridor_Text_LetMonDoWhatItLikes
	callstd 0x04
	return
EventScript_JP_0822B01F: @ 0x0822B01F
	loadword 0x00, BattleFrontier_BattlePalaceCorridor_Text_MonDifferentWhenCornered
	callstd 0x04
	return
EventScript_JP_0822B028: @ 0x0822B028
	loadword 0x00, BattleFrontier_BattlePalaceCorridor_Text_BeginningToUnderstandNature
	callstd 0x04
	return
EventScript_JP_0822B031: @ 0x0822B031
	loadword 0x00, BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons
	callstd 0x04
	return
BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX4_1: @ 0x0822B03A
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_WalkLeftX2_WalkUpX2: @ 0x0822B03F
	@ object movement sequence
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX3_WalkLeftX2_WalkUp: @ 0x0822B046
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkUp_WalkRightX2_WalkUpX3: @ 0x0822B04D
	@ object movement sequence
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_WalkRightX2_WalkUpX2: @ 0x0822B054
	@ object movement sequence
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	step_end
BattleFrontier_BattlePalaceCorridor_Movement_WalkUpX2_SetInvisible: @ 0x0822B05B
	@ object movement sequence
	walk_up
	walk_up
	set_invisible
	step_end

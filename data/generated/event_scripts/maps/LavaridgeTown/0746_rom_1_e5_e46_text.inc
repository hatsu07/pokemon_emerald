	@ data/maps/LavaridgeTown/scripts.inc:276 LavaridgeTown_Text_MayNiceBadgesTakeThis
	.globl LavaridgeTown_Text_MayNiceBadgesTakeThis
LavaridgeTown_Text_MayNiceBadgesTakeThis: @ 0x081E594F
	.string "ハルカ『{PLAYER}{KUN}! ひさしぶり!\pあら? あたしが おんせんに\nはいったり してる あいだに\lフエンの ジムバッジ てに いれたんだ!\pかなり ポケモン あつめてる っていうか\nそだてて いるんだね!\pじゃあ これを あげても\nだいじょうぶ だよね{EOS}"
	.if (. - LavaridgeTown_Text_MayNiceBadgesTakeThis) > 0x7d
	.error "LavaridgeTown_Text_MayNiceBadgesTakeThis may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_MayNiceBadgesTakeThis) < 0x7d
	.space 0x7d - (. - LavaridgeTown_Text_MayNiceBadgesTakeThis)
	.endif
	@ field-script:0x1E575D FieldScriptText_1E59CC
	.globl gText_Rom_1E59CC
gText_Rom_1E59CC: @ 0x081E59CC
	.string "ハルカ『その　ゴーゴーゴーグルが　あると\n111ばん　どうろの　さばくにも\lはいれるように　なるんだよ！\pそれにしても　{0xFD}{0x01}{0xFD}{0x05}\nポケモンジムに　ちょうせん　だなんて……\pあたしに　まけたくない　からって\nがんばって　いるのね！\pじゃあ　あたし　トウカで　{0xFD}{0x01}{0xFD}{0x05}の\nおとうさんに　ちょうせん　しようかな？\p{0xFD}{0x01}{0xFD}{0x05}　じゃあ　またね！{EOS}"
	.if (. - gText_Rom_1E59CC) > 0xa8
	.error "gText_Rom_1E59CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E59CC) < 0xa8
	.space 0xa8 - (. - gText_Rom_1E59CC)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:298 LavaridgeTown_Text_BrendanNiceBadgesTakeThis
	.globl LavaridgeTown_Text_BrendanNiceBadgesTakeThis
LavaridgeTown_Text_BrendanNiceBadgesTakeThis: @ 0x081E5A74
	.string "ユウキ『{PLAYER} ひさしぶり だな\nちょうしは どう?\pふうん……\nバッジは けっこう あつめてるんだな\pじゃ\nこいつを やろうかな?{EOS}"
	.if (. - LavaridgeTown_Text_BrendanNiceBadgesTakeThis) > 0x42
	.error "LavaridgeTown_Text_BrendanNiceBadgesTakeThis may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_BrendanNiceBadgesTakeThis) < 0x42
	.space 0x42 - (. - LavaridgeTown_Text_BrendanNiceBadgesTakeThis)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:306 LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad
	.globl LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad
LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad: @ 0x081E5AB6
	.string "ユウキ『それを もっていれば\n111ばん どうろの さばくに はいれるよ\pさばくにしか いない\nポケモンも いるはず だから\lよかったら いけば……?\pオレは……\nトウカの ジムリーダー センリさんに\lちょうせん してみようかな……\p{PLAYER}の とうさん\n{PLAYER}と ちがって つよそうだからな\pじゃな!{EOS}"
	.if (. - LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad) > 0x95
	.error "LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad) < 0x95
	.space 0x95 - (. - LavaridgeTown_Text_BrendanExplainGoGogglesChallengeDad)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:320 LavaridgeTown_Text_HaveEggWillYouTakeIt
	.globl LavaridgeTown_Text_HaveEggWillYouTakeIt
LavaridgeTown_Text_HaveEggWillYouTakeIt: @ 0x081E5B4B
	.string "タマゴを かえそうと おもって\nすなぶろに いれて あたためていたが\lそれだけ じゃあ だめらしいの……\pなんでも げんきな ポケモンと いっしょに\nつれてあるいた ほうが いいそうな……\pおまえさん トレーナー じゃろ?\nしかも げんきな ポケモンを つれておる\pどうかね?\nタマゴを かえして みるかね?{EOS}"
	.if (. - LavaridgeTown_Text_HaveEggWillYouTakeIt) > 0x9b
	.error "LavaridgeTown_Text_HaveEggWillYouTakeIt may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_HaveEggWillYouTakeIt) < 0x9b
	.space 0x9b - (. - LavaridgeTown_Text_HaveEggWillYouTakeIt)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:333 LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg
	.globl LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg
LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg: @ 0x081E5BE6
	.string "タマゴと いっしょに\nたーっぷり あるいて おくれ!{EOS}"
	.if (. - LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg) > 0x1b
	.error "LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg) < 0x1b
	.space 0x1b - (. - LavaridgeTown_Text_HopeYoullWalkPlentyWithEgg)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:337 LavaridgeTown_Text_ReceivedTheEgg
	.globl LavaridgeTown_Text_ReceivedTheEgg
LavaridgeTown_Text_ReceivedTheEgg: @ 0x081E5C01
	.string "{PLAYER}は\nタマゴを もらった!{EOS}"
	.if (. - LavaridgeTown_Text_ReceivedTheEgg) > 0xf
	.error "LavaridgeTown_Text_ReceivedTheEgg may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_ReceivedTheEgg) < 0xf
	.space 0xf - (. - LavaridgeTown_Text_ReceivedTheEgg)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:340 LavaridgeTown_Text_NoRoomForThisEgg
	.globl LavaridgeTown_Text_NoRoomForThisEgg
LavaridgeTown_Text_NoRoomForThisEgg: @ 0x081E5C10
	.string "あれ? ポケモン いっぱいで\nタマゴを つれて あるけないよ……{EOS}"
	.if (. - LavaridgeTown_Text_NoRoomForThisEgg) > 0x21
	.error "LavaridgeTown_Text_NoRoomForThisEgg may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_NoRoomForThisEgg) < 0x21
	.space 0x21 - (. - LavaridgeTown_Text_NoRoomForThisEgg)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:344 LavaridgeTown_Text_AsYouWishThen
	.globl LavaridgeTown_Text_AsYouWishThen
LavaridgeTown_Text_AsYouWishThen: @ 0x081E5C31
	.string "そうかね……\pまあ タマゴを かえしたく なったら\nまた はなしかけて おくれよ{EOS}"
	.if (. - LavaridgeTown_Text_AsYouWishThen) > 0x29
	.error "LavaridgeTown_Text_AsYouWishThen may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_AsYouWishThen) < 0x29
	.space 0x29 - (. - LavaridgeTown_Text_AsYouWishThen)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:349 LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare
	.globl LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare
LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare: @ 0x081E5C5A
	.string "ポケモンの タマゴは\nときどき そだてやさんで みつかる……\pそんな うわさを きいたよ{EOS}"
	.if (. - LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare) > 0x2d
	.error "LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare) < 0x2d
	.space 0x2d - (. - LavaridgeTown_Text_EverySoOftenEggFoundAtDayCare)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:354 LavaridgeTown_Text_HotSpringsNeverRunDry
	.globl LavaridgeTown_Text_HotSpringsNeverRunDry
LavaridgeTown_Text_HotSpringsNeverRunDry: @ 0x081E5C87
	.string "くめども くめども おゆが でる\nポットでも ないのに おゆが でる\p……ふしぎ じゃろ?\pかざんが ちかくに あるところ では\nちかすいが ようがんの ねつで\lあたためられて いるのじゃよ!{EOS}"
	.if (. - LavaridgeTown_Text_HotSpringsNeverRunDry) > 0x61
	.error "LavaridgeTown_Text_HotSpringsNeverRunDry may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_HotSpringsNeverRunDry) < 0x61
	.space 0x61 - (. - LavaridgeTown_Text_HotSpringsNeverRunDry)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:363 LavaridgeTown_Text_PokemonNippedBackside
	.globl LavaridgeTown_Text_PokemonNippedBackside
LavaridgeTown_Text_PokemonNippedBackside: @ 0x081E5CE8
	.string "こうして すなに うまっていると\nはあぁ……\pあたたかくって イイキモチ……\p……ん? イテテッ!\pしりを ポケモンに かまれた!{EOS}"
	.if (. - LavaridgeTown_Text_PokemonNippedBackside) > 0x42
	.error "LavaridgeTown_Text_PokemonNippedBackside may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_PokemonNippedBackside) < 0x42
	.space 0x42 - (. - LavaridgeTown_Text_PokemonNippedBackside)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:370 LavaridgeTown_Text_OhYouLikeHotSprings
	.globl LavaridgeTown_Text_OhYouLikeHotSprings
LavaridgeTown_Text_OhYouLikeHotSprings: @ 0x081E5D2A
	.string "おや あんた\nおんせんが すき なのかい?\pまだ わかいのに めずらしいねえ……{EOS}"
	.if (. - LavaridgeTown_Text_OhYouLikeHotSprings) > 0x29
	.error "LavaridgeTown_Text_OhYouLikeHotSprings may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_OhYouLikeHotSprings) < 0x29
	.space 0x29 - (. - LavaridgeTown_Text_OhYouLikeHotSprings)
	.endif
	@ field-script:0x1E58B1 FieldScriptText_1E5D53
	.globl gText_Rom_1E5D53
gText_Rom_1E5D53: @ 0x081E5D53
	.string "あたし　アスナさん　みたいに\nすてきで　つよい　ジムリーダーに　なるため\lまいにち　おんせんに　はいってるの！{EOS}"
	.if (. - gText_Rom_1E5D53) > 0x38
	.error "gText_Rom_1E5D53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E5D53) < 0x38
	.space 0x38 - (. - gText_Rom_1E5D53)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:380 LavaridgeTown_Text_IfPokemonInHotSprings
	.globl LavaridgeTown_Text_IfPokemonInHotSprings
LavaridgeTown_Text_IfPokemonInHotSprings: @ 0x081E5D8B
	.string "おんせんに ポケモン いれると\nでんきぶろや あわぶろ はたまた\lようがんぶろに なって すごそうだわ{EOS}"
	.if (. - LavaridgeTown_Text_IfPokemonInHotSprings) > 0x34
	.error "LavaridgeTown_Text_IfPokemonInHotSprings may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_IfPokemonInHotSprings) < 0x34
	.space 0x34 - (. - LavaridgeTown_Text_IfPokemonInHotSprings)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:386 LavaridgeTown_Text_HotSpringsClaims
	.globl LavaridgeTown_Text_HotSpringsClaims
LavaridgeTown_Text_HotSpringsClaims: @ 0x081E5DBF
	.string "この おんせんは……\pしんけいつう きんにくつう それから\nれんあいのなやみ おかねもうけ などに\lこうかてき なんだとさ……{EOS}"
	.if (. - LavaridgeTown_Text_HotSpringsClaims) > 0x40
	.error "LavaridgeTown_Text_HotSpringsClaims may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_HotSpringsClaims) < 0x40
	.space 0x40 - (. - LavaridgeTown_Text_HotSpringsClaims)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:393 LavaridgeTown_Text_TownSign
	.globl LavaridgeTown_Text_TownSign
LavaridgeTown_Text_TownSign: @ 0x081E5DFF
	.string "ここは フエン タウン\nポケセン おんせん よいところ{EOS}"
	.if (. - LavaridgeTown_Text_TownSign) > 0x1c
	.error "LavaridgeTown_Text_TownSign may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_TownSign) < 0x1c
	.space 0x1c - (. - LavaridgeTown_Text_TownSign)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:398 LavaridgeTown_Text_GymSign
	.globl LavaridgeTown_Text_GymSign
LavaridgeTown_Text_GymSign: @ 0x081E5E1B
	.string "フエン タウン ポケモンジム\nリーダー アスナ\lやけど しそうな じょうねつの ひと{EOS}"
	.if (. - LavaridgeTown_Text_GymSign) > 0x2b
	.error "LavaridgeTown_Text_GymSign may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_GymSign) < 0x2b
	.space 0x2b - (. - LavaridgeTown_Text_GymSign)
	.endif
	@ data/maps/LavaridgeTown/scripts.inc:403 LavaridgeTown_Text_HerbShopSign
	.globl LavaridgeTown_Text_HerbShopSign
LavaridgeTown_Text_HerbShopSign: @ 0x081E5E46
	.string "「ポケモン かんぽうやく」\nりょうやく くちに にがし!{EOS}"
	.if (. - LavaridgeTown_Text_HerbShopSign) > 0x1d
	.error "LavaridgeTown_Text_HerbShopSign may not grow beyond its original slot"
	.endif
	.if (. - LavaridgeTown_Text_HerbShopSign) < 0x1d
	.space 0x1d - (. - LavaridgeTown_Text_HerbShopSign)
	.endif
	@ Embedded ROM bytes: file offset 0x1E5E63, size 0x71
	.byte 0x03, 0x69, 0x5E, 0x1E, 0x08, 0x00, 0x29, 0x73, 0x08, 0x16, 0x86, 0x40, 0x00, 0x00, 0x2A, 0x0E
	.byte 0x01, 0x02, 0x6A, 0x5A, 0x2B, 0x8B, 0x00, 0x06, 0x01, 0x8A, 0x5E, 0x1E, 0x08, 0x0F, 0x00
	.4byte FallarborTown_Text_ShadyCharactersCozmosHome
	.byte 0x09, 0x04, 0x6C, 0x02, 0x0F, 0x00, 0x09, 0x5F, 0x1E, 0x08, 0x09, 0x04, 0x6C
	.byte 0x02, 0x0F, 0x00
	.4byte FallarborTown_Text_MyPreciousAzurill
	.byte 0x09, 0x02, 0x02, 0x0F, 0x00
	.4byte FallarborTown_Text_HaveYouChallengedFlannery
	.byte 0x09, 0x02, 0x02, 0x6A, 0x5A, 0x30, 0xA1, 0x5E, 0x01, 0x00, 0x00, 0x0F, 0x00, 0x7A, 0x5F, 0x1E
	.byte 0x08, 0x09, 0x04, 0xC5, 0x6C, 0x02, 0x0F, 0x00
	.4byte FallarborTown_Text_BattleTentSign
	.byte 0x09, 0x03, 0x02, 0x0F
	.byte 0x00, 0x1B, 0x60, 0x1E, 0x08, 0x09, 0x03, 0x02, 0x0F, 0x00, 0x3A, 0x60, 0x1E, 0x08, 0x09, 0x03
	.byte 0x02

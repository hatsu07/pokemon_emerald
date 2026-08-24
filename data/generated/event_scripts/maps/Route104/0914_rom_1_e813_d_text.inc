	@ data/maps/Route104/scripts.inc:997 Route104_Text_BrineyLivesInSeasideCottage
	.globl Route104_Text_BrineyLivesInSeasideCottage
Route104_Text_BrineyLivesInSeasideCottage: @ 0x081E7AE8
	.string "その はまべの こやには\nハギろうじん という ひとが すんでるの!\pむかしは どんな あらなみも おそれない\nすごうでの ふなのり だった らしいわ!{EOS}"
	.if (. - Route104_Text_BrineyLivesInSeasideCottage) > 0x4d
	.error "Route104_Text_BrineyLivesInSeasideCottage may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrineyLivesInSeasideCottage) < 0x4d
	.space 0x4d - (. - Route104_Text_BrineyLivesInSeasideCottage)
	.endif
	@ data/maps/Route104/scripts.inc:1003 Route104_Text_WhatsItLikeAtBottomOfSea
	.globl Route104_Text_WhatsItLikeAtBottomOfSea
Route104_Text_WhatsItLikeAtBottomOfSea: @ 0x081E7B35
	.string "うみ かぁ……\pうみのそこ って いったい\nどんな ふうに なってるのかな?{EOS}"
	.if (. - Route104_Text_WhatsItLikeAtBottomOfSea) > 0x27
	.error "Route104_Text_WhatsItLikeAtBottomOfSea may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WhatsItLikeAtBottomOfSea) < 0x27
	.space 0x27 - (. - Route104_Text_WhatsItLikeAtBottomOfSea)
	.endif
	@ data/maps/Route104/scripts.inc:1008 Route104_Text_ThrowBallAtWeakenedPokemon
	.globl Route104_Text_ThrowBallAtWeakenedPokemon
Route104_Text_ThrowBallAtWeakenedPokemon: @ 0x081E7B5C
	.string "モンスターボールを なげるときは\nポケモンの わざで\lどくや やけどに したり\lねむらせると つかまえ やすいよ!{EOS}"
	.if (. - Route104_Text_ThrowBallAtWeakenedPokemon) > 0x3a
	.error "Route104_Text_ThrowBallAtWeakenedPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_ThrowBallAtWeakenedPokemon) < 0x3a
	.space 0x3a - (. - Route104_Text_ThrowBallAtWeakenedPokemon)
	.endif
	@ data/maps/Route104/scripts.inc:1014 Route104_Text_OnlyThrowBallAtWildPokemon
	.globl Route104_Text_OnlyThrowBallAtWildPokemon
Route104_Text_OnlyThrowBallAtWildPokemon: @ 0x081E7B96
	.string "ひとの ポケモンを とったら どろぼうよ\pモンスターボールは\nやせいの ポケモンにだけ なげましょうね!{EOS}"
	.if (. - Route104_Text_OnlyThrowBallAtWildPokemon) > 0x35
	.error "Route104_Text_OnlyThrowBallAtWildPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_OnlyThrowBallAtWildPokemon) < 0x35
	.space 0x35 - (. - Route104_Text_OnlyThrowBallAtWildPokemon)
	.endif
	@ data/maps/Route104/scripts.inc:1019 Route104_Text_ImNotATrainer
	.globl Route104_Text_ImNotATrainer
Route104_Text_ImNotATrainer: @ 0x081E7BCB
	.string "わたし トレーナーじゃ ないわよ\pでも トレーナーどうし しせんが あうのは\nしょうぶしようって サイン なのよね!\pもし たたかいたく なかったら\nしせんを あわさなければ いいのよね!{EOS}"
	.if (. - Route104_Text_ImNotATrainer) > 0x5f
	.error "Route104_Text_ImNotATrainer may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_ImNotATrainer) < 0x5f
	.space 0x5f - (. - Route104_Text_ImNotATrainer)
	.endif
	@ data/maps/Route104/scripts.inc:1026 Route104_Text_LikeFillingMouthWithSeedsTakeThis
	.globl Route104_Text_LikeFillingMouthWithSeedsTakeThis
Route104_Text_LikeFillingMouthWithSeedsTakeThis: @ 0x081E7C2A
	.string "くちのなかに タネを いっぱい いれて\nそれを プププッ! とふきだすのが すき!\pおまえも これを やるから つかえよ!\pポケモンに つかうとさ\nタネを とばす わざを おぼえるから!{EOS}"
	.if (. - Route104_Text_LikeFillingMouthWithSeedsTakeThis) > 0x5e
	.error "Route104_Text_LikeFillingMouthWithSeedsTakeThis may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_LikeFillingMouthWithSeedsTakeThis) < 0x5e
	.space 0x5e - (. - Route104_Text_LikeFillingMouthWithSeedsTakeThis)
	.endif
	@ data/maps/Route104/scripts.inc:1033 Route104_Text_TMsAreOneTimeUse
	.globl Route104_Text_TMsAreOneTimeUse
Route104_Text_TMsAreOneTimeUse: @ 0x081E7C88
	.string "ひとこと アドバイスな!\pわざマシンは つかいすて!\nつかうと なくなるから\lよく かんがえてから つかえよな!{EOS}"
	.if (. - Route104_Text_TMsAreOneTimeUse) > 0x39
	.error "Route104_Text_TMsAreOneTimeUse may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_TMsAreOneTimeUse) < 0x39
	.space 0x39 - (. - Route104_Text_TMsAreOneTimeUse)
	.endif
	@ data/maps/Route104/scripts.inc:1039 Route104_Text_DontNeedThisTakeIt
	.globl Route104_Text_DontNeedThisTakeIt
Route104_Text_DontNeedThisTakeIt: @ 0x081E7CC1
	.string "この フラワーショップ ちかごろ\nうえきも うって くれるのよ!\pうれしくて たくさん かっちゃったから\nあたしの しろいハーブは もう いらないわ\lあなた もらってよ!{EOS}"
	.if (. - Route104_Text_DontNeedThisTakeIt) > 0x56
	.error "Route104_Text_DontNeedThisTakeIt may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DontNeedThisTakeIt) < 0x56
	.space 0x56 - (. - Route104_Text_DontNeedThisTakeIt)
	.endif
	@ data/maps/Route104/scripts.inc:1046 Route104_Text_FlowerShopSellingSaplings
	.globl Route104_Text_FlowerShopSellingSaplings
Route104_Text_FlowerShopSellingSaplings: @ 0x081E7D17
	.string "この フラワーショップ ちかごろ\nうえきも うって くれるのよ!\pうれしくて たくさん かっちゃった!\nどこに かざろうかしら?{EOS}"
	.if (. - Route104_Text_FlowerShopSellingSaplings) > 0x41
	.error "Route104_Text_FlowerShopSellingSaplings may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_FlowerShopSellingSaplings) < 0x41
	.space 0x41 - (. - Route104_Text_FlowerShopSellingSaplings)
	.endif
	@ data/maps/Route104/scripts.inc:1052 Route104_Text_MrBrineysCottage
	.globl Route104_Text_MrBrineysCottage
Route104_Text_MrBrineysCottage: @ 0x081E7D58
	.string "「ハギろうじんの　こや」{EOS}"
	.if (. - Route104_Text_MrBrineysCottage) > 0xd
	.error "Route104_Text_MrBrineysCottage may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MrBrineysCottage) < 0xd
	.space 0xd - (. - Route104_Text_MrBrineysCottage)
	.endif
	@ field-script:0x1E751F FieldScriptText_1E7D65
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E7D65
gText_Rom_1E7D65: @ 0x081E7D65
	.string "ここは　104ばん　どうろ\n{ESCAPE}{0x03}　トウカシティ{EOS}"
	.if (. - gText_Rom_1E7D65) != 0x19
	.error "gText_Rom_1E7D65 must retain its original byte length"
	.endif
	.globl gText_Rom_1E7D77
	.set gText_Rom_1E7D77, gText_Rom_1E7D65 + 0x12
	.globl gText_Rom_1E7D7A
	.set gText_Rom_1E7D7A, gText_Rom_1E7D65 + 0x15
	@ field-script:0x1E7528 FieldScriptText_1E7D7E
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E7D7E
gText_Rom_1E7D7E: @ 0x081E7D7E
	.string "ここは　104ばん　どうろ\n{ESCAPE}{0x00}　カナズミシティ{EOS}"
	.if (. - gText_Rom_1E7D7E) != 0x1a
	.error "gText_Rom_1E7D7E must retain its original byte length"
	.endif
	.globl gText_Rom_1E7D90
	.set gText_Rom_1E7D90, gText_Rom_1E7D7E + 0x12
	.globl gText_Rom_1E7D94
	.set gText_Rom_1E7D94, gText_Rom_1E7D7E + 0x16
	@ data/maps/Route104/scripts.inc:1063 Route104_Text_PrettyPetalFlowShop
	.globl Route104_Text_PrettyPetalFlowShop
Route104_Text_PrettyPetalFlowShop: @ 0x081E7D98
	.string "「フラワーショップ　サン・トウカ」{EOS}"
	.if (. - Route104_Text_PrettyPetalFlowShop) > 0x12
	.error "Route104_Text_PrettyPetalFlowShop may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_PrettyPetalFlowShop) < 0x12
	.space 0x12 - (. - Route104_Text_PrettyPetalFlowShop)
	.endif
	@ data/maps/Route104/scripts.inc:1066 Route104_Text_TrainerTipsDoubleBattles
	.globl Route104_Text_TrainerTipsDoubleBattles
Route104_Text_TrainerTipsDoubleBattles: @ 0x081E7DAA
	.string "おとくな けいじばん!!\pホウエンちほう には\nダブルバトルと いって 2たい2の\lポケモンしょうぶを いどんでくる\lトレーナーが います!\pダブルバトルでは ポケモンの リストの\nひだりと いちばん うえにいる\lポケモンが とびだして たたかうので\lリストの ならびには ようちゅうい!{EOS}"
	.if (. - Route104_Text_TrainerTipsDoubleBattles) > 0x91
	.error "Route104_Text_TrainerTipsDoubleBattles may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_TrainerTipsDoubleBattles) < 0x91
	.space 0x91 - (. - Route104_Text_TrainerTipsDoubleBattles)
	.endif
	@ data/maps/Route104/scripts.inc:1077 Route104_Text_MayWeShouldRegister
	.globl Route104_Text_MayWeShouldRegister
Route104_Text_MayWeShouldRegister: @ 0x081E7E3B
	.string "ハルカ『あっ {PLAYER}{KUN}!\pデボンコーポレーションで ポケナビに\nエントリーコールを つけて もらったのね!\pじゃあ あたしたちも\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!{EOS}"
	.if (. - Route104_Text_MayWeShouldRegister) > 0x63
	.error "Route104_Text_MayWeShouldRegister may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayWeShouldRegister) < 0x63
	.space 0x63 - (. - Route104_Text_MayWeShouldRegister)
	.endif
	@ data/maps/Route104/scripts.inc:1085 Route104_Text_RegisteredMay
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_RegisteredMay
Route104_Text_RegisteredMay: @ 0x081E7E9E
	.string "{PLAYER}は ハルカを\nポケナビに とうろく した!{EOS}"
	.if (. - Route104_Text_RegisteredMay) != 0x18
	.error "Route104_Text_RegisteredMay must retain its original byte length"
	.endif
	.globl gText_Rom_1E7EA2
	.set gText_Rom_1E7EA2, Route104_Text_RegisteredMay + 0x4
	@ data/maps/Route104/scripts.inc:1089 Route104_Text_MayHowsYourPokedex
	.globl Route104_Text_MayHowsYourPokedex
Route104_Text_MayHowsYourPokedex: @ 0x081E7EB6
	.string "ハルカ『ところで {PLAYER}{KUN}の\nポケモンずかんの ちょうしは どう?{EOS}"
	.if (. - Route104_Text_MayHowsYourPokedex) > 0x22
	.error "Route104_Text_MayHowsYourPokedex may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayHowsYourPokedex) < 0x22
	.space 0x22 - (. - Route104_Text_MayHowsYourPokedex)
	.endif
	@ data/maps/Route104/scripts.inc:1093 Route104_Text_MayMinesDecentLetsBattle
	.globl Route104_Text_MayMinesDecentLetsBattle
Route104_Text_MayMinesDecentLetsBattle: @ 0x081E7ED8
	.string "あたしは かなり いい かんじ!\nどう? ちょっと しょうぶ してみる?{EOS}"
	.if (. - Route104_Text_MayMinesDecentLetsBattle) > 0x25
	.error "Route104_Text_MayMinesDecentLetsBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayMinesDecentLetsBattle) < 0x25
	.space 0x25 - (. - Route104_Text_MayMinesDecentLetsBattle)
	.endif
	@ data/maps/Route104/scripts.inc:1097 Route104_Text_MayHaventRaisedPokemon (+1 aliases)
	.globl gText_Rom_1E7EFD
gText_Rom_1E7EFD: @ 0x081E7EFD
	.string "ハルカ『えー なんでよー\nあんまり ポケモン つかまえたり\lそだてたり してないのかな?\pそれじゃあ トレーナーとして\nまだまだ ね!{EOS}"
	.if (. - gText_Rom_1E7EFD) > 0x44
	.error "gText_Rom_1E7EFD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7EFD) < 0x44
	.space 0x44 - (. - gText_Rom_1E7EFD)
	.endif
	@ data/maps/Route104/scripts.inc:1104 Route104_Text_MayLetsBattle (+1 aliases)
	.globl gText_Rom_1E7F41
gText_Rom_1E7F41: @ 0x081E7F41
	.string "ハルカ『どう? あたしと ここで\nちょっと しょうぶ してみる?{EOS}"
	.if (. - gText_Rom_1E7F41) > 0x21
	.error "gText_Rom_1E7F41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F41) < 0x21
	.space 0x21 - (. - gText_Rom_1E7F41)
	.endif
	@ data/maps/Route104/scripts.inc:1108 Route104_Text_MayIntro (+1 aliases)
	.globl gText_Rom_1E7F62
gText_Rom_1E7F62: @ 0x081E7F62
	.string "ハルカ『トレーナーに なった ばかりの\n{PLAYER}{KUN}には まけないよ!{EOS}"
	.if (. - gText_Rom_1E7F62) > 0x22
	.error "gText_Rom_1E7F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F62) < 0x22
	.space 0x22 - (. - gText_Rom_1E7F62)
	.endif
	@ data/maps/Route104/scripts.inc:1112 Route104_Text_MayDefeat (+2 aliases)
	.globl gText_Rom_1E7F84
gText_Rom_1E7F84: @ 0x081E7F84
	.string "うわあ……\nもう こんなに つよいなんて……{EOS}"
	.if (. - gText_Rom_1E7F84) > 0x17
	.error "gText_Rom_1E7F84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7F84) < 0x17
	.space 0x17 - (. - gText_Rom_1E7F84)
	.endif
	@ data/maps/Route104/scripts.inc:1116 Route104_Text_MayPostBattle
	.globl Route104_Text_MayPostBattle
Route104_Text_MayPostBattle: @ 0x081E7F9B
	.string "ハルカ『けっこう ポケモンの あつかい\nうまく なってきた みたいね!\pでも たたかわせる だけじゃなくて\nそこの ハギろうじん みたいに\lポケモンと なかよくする っていうのも\lだいじなこと なのよ!{EOS}"
	.if (. - Route104_Text_MayPostBattle) > 0x66
	.error "Route104_Text_MayPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MayPostBattle) < 0x66
	.space 0x66 - (. - Route104_Text_MayPostBattle)
	.endif
	@ data/maps/Route104/scripts.inc:1124 Route104_Text_BrendanWeShouldRegister
	.globl Route104_Text_BrendanWeShouldRegister
Route104_Text_BrendanWeShouldRegister: @ 0x081E8001
	.string "ユウキ『おっ {PLAYER}!\pデボンコーポレーションで ポケナビに\nエントリーコールを つけて もらったな!\pじゃあ オレたち\nおたがいに よびだせる ように\lなまえを とうろく しておこうよ!{EOS}"
	.if (. - Route104_Text_BrendanWeShouldRegister) > 0x5e
	.error "Route104_Text_BrendanWeShouldRegister may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanWeShouldRegister) < 0x5e
	.space 0x5e - (. - Route104_Text_BrendanWeShouldRegister)
	.endif
	@ data/maps/Route104/scripts.inc:1132 Route104_Text_RegisteredBrendan
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_RegisteredBrendan
Route104_Text_RegisteredBrendan: @ 0x081E805F
	.string "{PLAYER}は ユウキを\nポケナビに とうろく した!{EOS}"
	.if (. - Route104_Text_RegisteredBrendan) != 0x18
	.error "Route104_Text_RegisteredBrendan must retain its original byte length"
	.endif
	.globl gText_Rom_1E8063
	.set gText_Rom_1E8063, Route104_Text_RegisteredBrendan + 0x4
	@ data/maps/Route104/scripts.inc:1136 Route104_Text_BrendanHowsYourPokedex
	.globl Route104_Text_BrendanHowsYourPokedex
Route104_Text_BrendanHowsYourPokedex: @ 0x081E8077
	.string "ユウキ『ところで {PLAYER}の\nポケモンずかんは どう?\lちょっとは ページ うまったか?{EOS}"
	.if (. - Route104_Text_BrendanHowsYourPokedex) > 0x2b
	.error "Route104_Text_BrendanHowsYourPokedex may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanHowsYourPokedex) < 0x2b
	.space 0x2b - (. - Route104_Text_BrendanHowsYourPokedex)
	.endif
	@ data/maps/Route104/scripts.inc:1141 Route104_Text_BrendanDoingGreatLetsBattle
	.globl Route104_Text_BrendanDoingGreatLetsBattle
Route104_Text_BrendanDoingGreatLetsBattle: @ 0x081E80A2
	.string "オレは すごいよ!\nどうだ ポケモン しょうぶで\lそのせいかを ためして やろうか?{EOS}"
	.if (. - Route104_Text_BrendanDoingGreatLetsBattle) > 0x2b
	.error "Route104_Text_BrendanDoingGreatLetsBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanDoingGreatLetsBattle) < 0x2b
	.space 0x2b - (. - Route104_Text_BrendanDoingGreatLetsBattle)
	.endif
	@ data/maps/Route104/scripts.inc:1146 Route104_Text_BrendanNoConfidence (+1 aliases)
	.globl gText_Rom_1E80CD
gText_Rom_1E80CD: @ 0x081E80CD
	.string "ユウキ『なんだよ\nもってる ポケモンに じしんが ないのか?{EOS}"
	.if (. - gText_Rom_1E80CD) > 0x1f
	.error "gText_Rom_1E80CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E80CD) < 0x1f
	.space 0x1f - (. - gText_Rom_1E80CD)
	.endif
	@ data/maps/Route104/scripts.inc:1150 Route104_Text_BrendanLetsBattle (+1 aliases)
	.globl gText_Rom_1E80EC
gText_Rom_1E80EC: @ 0x081E80EC
	.string "ユウキ『どうだい オレと ここで\nしょうぶ してみるか?{EOS}"
	.if (. - gText_Rom_1E80EC) > 0x1d
	.error "gText_Rom_1E80EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E80EC) < 0x1d
	.space 0x1d - (. - gText_Rom_1E80EC)
	.endif
	@ data/maps/Route104/scripts.inc:1154 Route104_Text_BrendanIntro (+1 aliases)
	.globl gText_Rom_1E8109
gText_Rom_1E8109: @ 0x081E8109
	.string "ユウキ『トレーナーに なりたて だって\nてかげんは しないからな!{EOS}"
	.if (. - gText_Rom_1E8109) > 0x22
	.error "gText_Rom_1E8109 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8109) < 0x22
	.space 0x22 - (. - gText_Rom_1E8109)
	.endif
	@ data/maps/Route104/scripts.inc:1158 Route104_Text_BrendanDefeat (+2 aliases)
	.globl gText_Rom_1E812B
gText_Rom_1E812B: @ 0x081E812B
	.string "へえ……\nなかなか やるじゃないか{EOS}"
	.if (. - gText_Rom_1E812B) > 0x12
	.error "gText_Rom_1E812B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E812B) < 0x12
	.space 0x12 - (. - gText_Rom_1E812B)
	.endif
	@ data/maps/Route104/scripts.inc:1162 Route104_Text_BrendanPostBattle
	.globl Route104_Text_BrendanPostBattle
Route104_Text_BrendanPostBattle: @ 0x081E813D
	.string "ユウキ『けっこう ポケモンの あつかい\nうまく なってきたな!\pでも たたかわせる だけじゃなくて\nそこの ハギろうじん みたいに\lポケモンと なかよくする ってのも\lだいじなこと なんだぜ!{EOS}"
	.if (. - Route104_Text_BrendanPostBattle) > 0x61
	.error "Route104_Text_BrendanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BrendanPostBattle) < 0x61
	.space 0x61 - (. - Route104_Text_BrendanPostBattle)
	.endif
	@ Embedded ROM bytes: file offset 0x1E819E, size 0x15B
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x01, 0xAE, 0x81, 0x1E, 0x08, 0x03, 0xE1, 0x81, 0x1E, 0x08, 0x02, 0x03, 0x82, 0x1E, 0x08, 0x00
	.byte 0x2B, 0xE4, 0x00, 0x07, 0x00, 0xCE, 0x81, 0x1E, 0x08, 0x21, 0x37, 0x40, 0x09, 0x00, 0x07, 0x01
	.byte 0xD5, 0x43, 0x24, 0x08, 0x21, 0x37, 0x40, 0x0A, 0x00, 0x07, 0x01, 0x42, 0x44, 0x24, 0x08, 0x02
	.byte 0xA2, 0x09, 0x00, 0x13, 0x00, 0x7C, 0x00, 0x01, 0x00, 0xA2, 0x09, 0x00, 0x14, 0x00, 0x91, 0x00
	.byte 0x01, 0x00, 0x03, 0x21, 0x39, 0x40, 0x01, 0x00, 0x07, 0x01, 0x3D, 0x47, 0x24, 0x08, 0x21, 0x37
	.byte 0x40, 0x09, 0x00, 0x07, 0x01, 0x41, 0x47, 0x24, 0x08, 0x21, 0x37, 0x40, 0x0A, 0x00, 0x07, 0x01
	.byte 0x41, 0x47, 0x24, 0x08, 0x02, 0x39, 0x40, 0x01, 0x00
	.4byte EventScriptData_JP_08244749 @ ROM pointer 0x08244749
	.byte 0x00, 0x00, 0x5C, 0x00, 0x2E, 0x00, 0x00, 0x00
	.4byte Route105_Text_FosterIntro @ ROM pointer 0x0825A2BA
	.4byte Route105_Text_FosterDefeated @ ROM pointer 0x0825A2DD
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x0F, 0x00
	.4byte Route105_Text_FosterPostBattle @ ROM pointer 0x0825A2FF
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0x97, 0x00, 0x00, 0x00
	.4byte Route105_Text_LuisIntro
	.byte 0x55, 0xA3, 0x25
	.byte 0x08, 0x0F, 0x00, 0x5C, 0xA3, 0x25, 0x08, 0x09, 0x06, 0x02, 0x5C, 0x00, 0x98, 0x00, 0x00, 0x00
	.4byte Route105_Text_DominikIntro @ ROM pointer 0x0825A380
	.4byte Route105_Text_DominikDefeated @ ROM pointer 0x0825A39E
	.byte 0x0F, 0x00
	.4byte Route105_Text_DominikPostBattle @ ROM pointer 0x0825A3AF
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xB9, 0x01, 0x00, 0x00
	.4byte Route105_Text_BeverlyIntro @ ROM pointer 0x0825A3DF
	.4byte Route105_Text_BeverlyDefeated @ ROM pointer 0x0825A407
	.byte 0x0F, 0x00
	.4byte Route105_Text_PostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xBA, 0x01, 0x00, 0x00
	.4byte Route105_Text_ImaniIntro @ ROM pointer 0x0825A454
	.4byte Route105_Text_ImaniDefeated @ ROM pointer 0x0825A470
	.byte 0x0F, 0x00
	.4byte Route105_Text_ImaniPostBattle
	.byte 0x09, 0x06, 0x02, 0x5C, 0x00, 0xE2, 0x02, 0x00, 0x00, 0x85
	.byte 0xA5, 0x25, 0x08
	.4byte Route105_Text_JosueDefeated
	.byte 0x0F, 0x00, 0xBC, 0xA5, 0x25, 0x08, 0x09, 0x06, 0x02
	.byte 0x5C, 0x02, 0xE1, 0x02, 0x00, 0x00
	.4byte Route105_Text_AndresIntro
	.4byte Route105_Text_AndresDefeated
	.byte 0xC3, 0x82
	.byte 0x1E, 0x08, 0x26, 0x0D, 0x80, 0x39, 0x00, 0x21, 0x0D, 0x80, 0x01, 0x00, 0x06, 0x01, 0xE2, 0x82
	.byte 0x1E, 0x08, 0x0F, 0x00
	.4byte Route105_Text_AndresPostBattle @ ROM pointer 0x0825A4D2
	.byte 0x09, 0x04, 0x6C, 0x02, 0x25, 0x04, 0x02, 0x51, 0x00, 0x00, 0x0F, 0x00
	.4byte Route105_Text_AndresRegister @ ROM pointer 0x0825A4FD
	@ semanticized-mass: resolved embedded ROM pointers
	.byte 0x09, 0x04, 0x16, 0x04, 0x80, 0xE1, 0x02, 0x25, 0xE6, 0x01, 0x1A, 0x00, 0x80, 0xE1, 0x02, 0x09
	.byte 0x08, 0x6C, 0x02, 0x5C, 0x05, 0xE1, 0x02, 0x00, 0x00
	.4byte Route105_Text_AndresRematchIntro @ ROM pointer 0x0825A520
	.4byte Route105_Text_AndresRematchDefeated @ ROM pointer 0x0825A543
	.byte 0x0F, 0x00
	.4byte Route105_Text_AndresRematchPostBattle
	.byte 0x09, 0x06, 0x02

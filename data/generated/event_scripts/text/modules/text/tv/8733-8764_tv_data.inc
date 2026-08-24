	@ data/text/tv.inc:1168 GabbyAndTy_Text_KeepingAnEyeOutForYou
	.globl GabbyAndTy_Text_KeepingAnEyeOutForYou
GabbyAndTy_Text_KeepingAnEyeOutForYou: @ 0x08253218
	.string "マリ『あなたの こと\nちゅうもく してるわ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_KeepingAnEyeOutForYou) > 0x17
	.error "GabbyAndTy_Text_KeepingAnEyeOutForYou may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_KeepingAnEyeOutForYou) < 0x17
	.space 0x17 - (. - GabbyAndTy_Text_KeepingAnEyeOutForYou)
	.endif

	@ data/text/tv.inc:1147 GabbyAndTy_Text_GabbyNotEnoughMons (+1 aliases)
	.globl GabbyAndTy_Text_GabbyNotEnoughMons
GabbyAndTy_Text_GabbyNotEnoughMons: @ 0x0825322F
	.string "マリ『ポケモンを いっぱい つれてる\nつよい トレーナーって いない かしら?"
	.byte EOS
	.if (. - GabbyAndTy_Text_GabbyNotEnoughMons) > 0x28
	.error "GabbyAndTy_Text_GabbyNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_GabbyNotEnoughMons) < 0x28
	.space 0x28 - (. - GabbyAndTy_Text_GabbyNotEnoughMons)
	.endif

	@ data/text/tv.inc:1183 GabbyAndTy_Text_GiveUsAnInterviewThisTime
	.globl GabbyAndTy_Text_GiveUsAnInterviewThisTime
GabbyAndTy_Text_GiveUsAnInterviewThisTime: @ 0x08253257
	.string "マリ『うーん さすがね!\pまえに たたかった ときより\nずっと つよく なってる!\pやっぱり わたしたちが みつけた\nトレーナー よね!\pところで どう?\nこんどこそ インタビューを\lうけて もらえないかな?"
	.byte EOS
	.if (. - GabbyAndTy_Text_GiveUsAnInterviewThisTime) > 0x69
	.error "GabbyAndTy_Text_GiveUsAnInterviewThisTime may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_GiveUsAnInterviewThisTime) < 0x69
	.space 0x69 - (. - GabbyAndTy_Text_GiveUsAnInterviewThisTime)
	.endif

	@ data/text/tv.inc:1165 GabbyAndTy_Text_GabbyDefeat (+1 aliases)
	.globl GabbyAndTy_Text_GabbyDefeat
GabbyAndTy_Text_GabbyDefeat: @ 0x082532C0
	.string "マリ『すごい たたかいだったわ!\nほら ちゃんと カメラにとった!?"
	.byte EOS
	.if (. - GabbyAndTy_Text_GabbyDefeat) > 0x23
	.error "GabbyAndTy_Text_GabbyDefeat may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_GabbyDefeat) < 0x23
	.space 0x23 - (. - GabbyAndTy_Text_GabbyDefeat)
	.endif

	@ data/text/tv.inc:1150 GabbyAndTy_Text_TyPreFirstBattle (+1 aliases)
	.globl GabbyAndTy_Text_TyPreFirstBattle
GabbyAndTy_Text_TyPreFirstBattle: @ 0x082532E3
	.string "ダイ『おっ こんなところに\nつよそうな トレーナー はっけん!\lさっそく ろくが かいしだ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_TyPreFirstBattle) > 0x2f
	.error "GabbyAndTy_Text_TyPreFirstBattle may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_TyPreFirstBattle) < 0x2f
	.space 0x2f - (. - GabbyAndTy_Text_TyPreFirstBattle)
	.endif

	@ data/text/tv.inc:1171 GabbyAndTy_Text_TyIntro (+1 aliases)
	.globl GabbyAndTy_Text_TyIntro
GabbyAndTy_Text_TyIntro: @ 0x08253312
	.string "ダイ『きみは このあいだの!\pよーし この たたかいを\nすべて カメラに おさめてやる"
	.byte EOS
	.if (. - GabbyAndTy_Text_TyIntro) > 0x2c
	.error "GabbyAndTy_Text_TyIntro may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_TyIntro) < 0x2c
	.space 0x2c - (. - GabbyAndTy_Text_TyIntro)
	.endif

	@ data/text/tv.inc:1159 GabbyAndTy_Text_TyPostBattle
	.globl GabbyAndTy_Text_TyPostBattle
GabbyAndTy_Text_TyPostBattle: @ 0x0825333E
	.string "ダイ『さすがだな!\nいい えいぞうを とることが できたよ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_TyPostBattle) > 0x1f
	.error "GabbyAndTy_Text_TyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_TyPostBattle) < 0x1f
	.space 0x1f - (. - GabbyAndTy_Text_TyPostBattle)
	.endif

	@ data/text/tv.inc:1156 GabbyAndTy_Text_TyNotEnoughMons (+1 aliases)
	.globl GabbyAndTy_Text_TyNotEnoughMons
GabbyAndTy_Text_TyNotEnoughMons: @ 0x0825335D
	.string "ダイ『きみは 1ぴきしか ポケモンを\nもって ないのかい?\pポケモンが いっぱい いたほうが\nいい えいぞうに なるんだが……"
	.byte EOS
	.if (. - GabbyAndTy_Text_TyNotEnoughMons) > 0x40
	.error "GabbyAndTy_Text_TyNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_TyNotEnoughMons) < 0x40
	.space 0x40 - (. - GabbyAndTy_Text_TyNotEnoughMons)
	.endif

	@ data/text/tv.inc:1153 GabbyAndTy_Text_TyDefeatFirstTime (+1 aliases)
	.globl GabbyAndTy_Text_TyDefeatFirstTime
GabbyAndTy_Text_TyDefeatFirstTime: @ 0x0825339D
	.string "ダイ『すごい トレーナーの はっけんだ\nこれは だいスクープだぞ!"
	.byte EOS
	.if (. - GabbyAndTy_Text_TyDefeatFirstTime) > 0x22
	.error "GabbyAndTy_Text_TyDefeatFirstTime may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_TyDefeatFirstTime) < 0x22
	.space 0x22 - (. - GabbyAndTy_Text_TyDefeatFirstTime)
	.endif

	@ data/text/tv.inc:1174 GabbyAndTy_Text_TyDefeat (+1 aliases)
	.globl GabbyAndTy_Text_TyDefeat
GabbyAndTy_Text_TyDefeat: @ 0x082533BF
	.string "ダイ『いまの たたかいの すべてが\nこの カメラのなかに!"
	.byte EOS
	.if (. - GabbyAndTy_Text_TyDefeat) > 0x1e
	.error "GabbyAndTy_Text_TyDefeat may not grow beyond its original slot"
	.endif
	.if (. - GabbyAndTy_Text_TyDefeat) < 0x1e
	.space 0x1e - (. - GabbyAndTy_Text_TyDefeat)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gTVTextPointerTable_Entry327
gTVTextPointerTable_Entry327: @ 0x082533DD
	.string "『トレーナーを　もとめて』\pマリ『はーい　わたしは　いま\n{0xFD}{0x02}に　きています！\pきょうは　ここで　あたらしい　さいのうを\nはっくつ　しようと　おもいます！\pきょう　わたしが　ちゅうもく　した\nトレーナーは　{0xFD}{0x01}さん！\pわたしは　この　トレーナーに\nなにかを　かんじます！"
	.byte EOS
	.if (. - gTVTextPointerTable_Entry327) > 0x88
	.error "gTVTextPointerTable_Entry327 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry327) < 0x88
	.space 0x88 - (. - gTVTextPointerTable_Entry327)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gTVTextPointerTable_Entry328
gTVTextPointerTable_Entry328: @ 0x08253465
	.string "{0xFD}{0x01}さんとは　まえに\nたたかった　ことが　あるのですが\pかくじつに　まえより\nつよく　なっている　かんじが　します！\pさっすが　わたしの\nちゅうもく　した　トレーナー！"
	.byte EOS
	.if (. - gTVTextPointerTable_Entry328) > 0x55
	.error "gTVTextPointerTable_Entry328 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry328) < 0x55
	.space 0x55 - (. - gTVTextPointerTable_Entry328)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gTVTextPointerTable_Entry329
gTVTextPointerTable_Entry329: @ 0x082534BA
	.string "さて　トレーナーの　じつりょくを\nみるには…\pたたかって　みるのが　いちばん　はやい！\nさっそく　ちょうさを　かいし　します！\p……\pと　いうわけで\nたたかって　みたの　ですが\pみごとに　ボコボコに　されました！\n{0xFD}{0x01}さん　やたら　つよいですね……\pで　たたかった　かんそうを\nいわせて　もらいますと"
	.byte EOS
	.if (. - gTVTextPointerTable_Entry329) > 0x97
	.error "gTVTextPointerTable_Entry329 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry329) < 0x97
	.space 0x97 - (. - gTVTextPointerTable_Entry329)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gTVTextPointerTable_Entry330
gTVTextPointerTable_Entry330: @ 0x08253551
	.string "{0xFD}{0x02}と　{0xFD}{0x04}の\nコンビが　さいこう　でしたね！\p{0xFD}{0x02}と　{0xFD}{0x04}が　おたがい\nたすけあって　たたかう　すがた……\pあぁ　なんて\nすばらしいんでしょう！\pわたしたちとの　しょうぶで\nさいごに　つかった　「{0xFD}{0x03}」も\p{0xFD}{0x02}と　{0xFD}{0x04}の　ゆうじょうの\n「{0xFD}{0x03}」なんですね！"
	.byte EOS
	.if (. - gTVTextPointerTable_Entry330) > 0x82
	.error "gTVTextPointerTable_Entry330 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry330) < 0x82
	.space 0x82 - (. - gTVTextPointerTable_Entry330)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gTVTextPointerTable_Entry331
gTVTextPointerTable_Entry331: @ 0x082535D3
	.string "……わたくし　じしんを\nなくして　しまいました\pいっかいも　こうげきする　ひまもなく\nすぐに　まけて　しまいました\lああ　グスン……\pでも　{0xFD}{0x01}さんの　たたかいは\nいっけんのかち　あり　です！\pじしんの　ある　トレーナーは　いちど\nたたかって　みることを　おすすめ　しますよ！"
	.byte EOS
	.if (. - gTVTextPointerTable_Entry331) > 0x8b
	.error "gTVTextPointerTable_Entry331 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry331) < 0x8b
	.space 0x8b - (. - gTVTextPointerTable_Entry331)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+32 aliases)
	.globl gTVTextPointerTable_Entry332
gTVTextPointerTable_Entry332: @ 0x0825365E
	.string "トレーナーと　たたかって　いるときは\nモンスターボールを　なげるな！\lという　ことです\p{0xFD}{0x01}さん　しょうぶは　つよいのに\nきほんが　なって　ませんよ！\pもう　テレビを　みてる　みんな！\p{0xFD}{0x01}さんに　あったら\nちゅういして　やってね！"
	.byte EOS
	.if (. - gTVTextPointerTable_Entry332) > 0x75
	.error "gTVTextPointerTable_Entry332 may not grow beyond its original slot"
	.endif
	.if (. - gTVTextPointerTable_Entry332) < 0x75
	.space 0x75 - (. - gTVTextPointerTable_Entry332)
	.endif


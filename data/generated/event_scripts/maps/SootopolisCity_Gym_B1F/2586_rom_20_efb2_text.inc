	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:54 SootopolisCity_Gym_B1F_Text_AndreaIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_AndreaIntro
SootopolisCity_Gym_B1F_Text_AndreaIntro: @ 0x0820EBAD
	.string "ジムリーダー アダンさまに おしえてもらった\nかれいな テクニックを みせたげる!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_AndreaIntro) > 0x2a
	.error "SootopolisCity_Gym_B1F_Text_AndreaIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_AndreaIntro) < 0x2a
	.space 0x2a - (. - SootopolisCity_Gym_B1F_Text_AndreaIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:57 SootopolisCity_Gym_B1F_Text_AndreaDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_AndreaDefeat
SootopolisCity_Gym_B1F_Text_AndreaDefeat: @ 0x0820EBD7
	.string "アダンさま ごめんね……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_AndreaDefeat) > 0xd
	.error "SootopolisCity_Gym_B1F_Text_AndreaDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_AndreaDefeat) < 0xd
	.space 0xd - (. - SootopolisCity_Gym_B1F_Text_AndreaDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:60 SootopolisCity_Gym_B1F_Text_AndreaPostBattle
	.globl SootopolisCity_Gym_B1F_Text_AndreaPostBattle
SootopolisCity_Gym_B1F_Text_AndreaPostBattle: @ 0x0820EBE4
	.string "すべての ゆかに ヒビを いれると\nなにかが おこるわよ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_AndreaPostBattle) > 0x1d
	.error "SootopolisCity_Gym_B1F_Text_AndreaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_AndreaPostBattle) < 0x1d
	.space 0x1d - (. - SootopolisCity_Gym_B1F_Text_AndreaPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:63 SootopolisCity_Gym_B1F_Text_CrissyIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_CrissyIntro
SootopolisCity_Gym_B1F_Text_CrissyIntro: @ 0x0820EC01
	.string "せっかく ここまで これたのに\nあたしに まけるから\lアダンさまに あえないわね!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_CrissyIntro) > 0x2a
	.error "SootopolisCity_Gym_B1F_Text_CrissyIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_CrissyIntro) < 0x2a
	.space 0x2a - (. - SootopolisCity_Gym_B1F_Text_CrissyIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:66 SootopolisCity_Gym_B1F_Text_CrissyDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_CrissyDefeat
SootopolisCity_Gym_B1F_Text_CrissyDefeat: @ 0x0820EC2B
	.string "つよい じゃない!!\nかわいい みために だまされたわ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_CrissyDefeat) > 0x1c
	.error "SootopolisCity_Gym_B1F_Text_CrissyDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_CrissyDefeat) < 0x1c
	.space 0x1c - (. - SootopolisCity_Gym_B1F_Text_CrissyDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:69 SootopolisCity_Gym_B1F_Text_CrissyPostBattle
	.globl SootopolisCity_Gym_B1F_Text_CrissyPostBattle
SootopolisCity_Gym_B1F_Text_CrissyPostBattle: @ 0x0820EC47
	.string "あなたなら アダンさまと たたかっても\nいちげきで やられなくて すむかもね{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_CrissyPostBattle) > 0x27
	.error "SootopolisCity_Gym_B1F_Text_CrissyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_CrissyPostBattle) < 0x27
	.space 0x27 - (. - SootopolisCity_Gym_B1F_Text_CrissyPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:72 SootopolisCity_Gym_B1F_Text_DaphneIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_DaphneIntro
SootopolisCity_Gym_B1F_Text_DaphneIntro: @ 0x0820EC6E
	.string "アダンさまの たたかう すがた……\pその うつくしさに こころ うばわれ\nわたくしも ポケモンを はじめましてよ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_DaphneIntro) > 0x39
	.error "SootopolisCity_Gym_B1F_Text_DaphneIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_DaphneIntro) < 0x39
	.space 0x39 - (. - SootopolisCity_Gym_B1F_Text_DaphneIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:75 SootopolisCity_Gym_B1F_Text_DaphneDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_DaphneDefeat
SootopolisCity_Gym_B1F_Text_DaphneDefeat: @ 0x0820ECA7
	.string "たたかう すがたの\nうつくしさで まけましたわ……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_DaphneDefeat) > 0x1a
	.error "SootopolisCity_Gym_B1F_Text_DaphneDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_DaphneDefeat) < 0x1a
	.space 0x1a - (. - SootopolisCity_Gym_B1F_Text_DaphneDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:78 SootopolisCity_Gym_B1F_Text_DaphnePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SootopolisCity_Gym_B1F_Text_DaphnePostBattle
SootopolisCity_Gym_B1F_Text_DaphnePostBattle: @ 0x0820ECC1
	.string "あなたさまの たたかう すがたも\nすばらしくってよ\pああっ……!\nポケモンに であえて よかったですわ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_DaphnePostBattle) != 0x34
	.error "SootopolisCity_Gym_B1F_Text_DaphnePostBattle must retain its original byte length"
	.endif
	.globl gText_Rom_20ECF1
	.set gText_Rom_20ECF1, SootopolisCity_Gym_B1F_Text_DaphnePostBattle + 0x30
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:81 SootopolisCity_Gym_B1F_Text_ConnieIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_ConnieIntro
SootopolisCity_Gym_B1F_Text_ConnieIntro: @ 0x0820ECF5
	.string "おねえさんが しょうぶの きびしさ\nいろいろと おしえて あげちゃおっかな{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_ConnieIntro) > 0x26
	.error "SootopolisCity_Gym_B1F_Text_ConnieIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_ConnieIntro) < 0x26
	.space 0x26 - (. - SootopolisCity_Gym_B1F_Text_ConnieIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:84 SootopolisCity_Gym_B1F_Text_ConnieDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_ConnieDefeat
SootopolisCity_Gym_B1F_Text_ConnieDefeat: @ 0x0820ED1B
	.string "なんだ\nつよいんだ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_ConnieDefeat) > 0xa
	.error "SootopolisCity_Gym_B1F_Text_ConnieDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_ConnieDefeat) < 0xa
	.space 0xa - (. - SootopolisCity_Gym_B1F_Text_ConnieDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:87 SootopolisCity_Gym_B1F_Text_ConniePostBattle
	.globl SootopolisCity_Gym_B1F_Text_ConniePostBattle
SootopolisCity_Gym_B1F_Text_ConniePostBattle: @ 0x0820ED25
	.string "いいこと おしえて あげるね\pアダンさまに あいたいのなら\nすべての ゆかを 1かいずつ\lあるいて いけば いいの{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_ConniePostBattle) > 0x3a
	.error "SootopolisCity_Gym_B1F_Text_ConniePostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_ConniePostBattle) < 0x3a
	.space 0x3a - (. - SootopolisCity_Gym_B1F_Text_ConniePostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:90 SootopolisCity_Gym_B1F_Text_BridgetIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_BridgetIntro
SootopolisCity_Gym_B1F_Text_BridgetIntro: @ 0x0820ED5F
	.string "ホウエンちほうで いちばん\nレベルの たかい ポケモンジム……\pそれが ここ ルネジムよ!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BridgetIntro) > 0x2e
	.error "SootopolisCity_Gym_B1F_Text_BridgetIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BridgetIntro) < 0x2e
	.space 0x2e - (. - SootopolisCity_Gym_B1F_Text_BridgetIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:93 SootopolisCity_Gym_B1F_Text_BridgetDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_BridgetDefeat
SootopolisCity_Gym_B1F_Text_BridgetDefeat: @ 0x0820ED8D
	.string "なんて レベルの たかい……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BridgetDefeat) > 0xf
	.error "SootopolisCity_Gym_B1F_Text_BridgetDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BridgetDefeat) < 0xf
	.space 0xf - (. - SootopolisCity_Gym_B1F_Text_BridgetDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:96 SootopolisCity_Gym_B1F_Text_BridgetPostBattle
	.globl SootopolisCity_Gym_B1F_Text_BridgetPostBattle
SootopolisCity_Gym_B1F_Text_BridgetPostBattle: @ 0x0820ED9C
	.string "レベルの たかい ジムに いることに\nまんぞく しないで\lほかにも しゅぎょうに いくほうが\lつよくなれそうだし なにより たのしそうね{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BridgetPostBattle) > 0x45
	.error "SootopolisCity_Gym_B1F_Text_BridgetPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BridgetPostBattle) < 0x45
	.space 0x45 - (. - SootopolisCity_Gym_B1F_Text_BridgetPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:99 SootopolisCity_Gym_B1F_Text_OliviaIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_OliviaIntro
SootopolisCity_Gym_B1F_Text_OliviaIntro: @ 0x0820EDE1
	.string "アダンさまと いっしょに\nポケモンを きたえて いるの\pかんたんに たおせると おもわないでね{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_OliviaIntro) > 0x30
	.error "SootopolisCity_Gym_B1F_Text_OliviaIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_OliviaIntro) < 0x30
	.space 0x30 - (. - SootopolisCity_Gym_B1F_Text_OliviaIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:102 SootopolisCity_Gym_B1F_Text_OliviaDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_OliviaDefeat
SootopolisCity_Gym_B1F_Text_OliviaDefeat: @ 0x0820EE11
	.string "たおされちゃった……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_OliviaDefeat) > 0xb
	.error "SootopolisCity_Gym_B1F_Text_OliviaDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_OliviaDefeat) < 0xb
	.space 0xb - (. - SootopolisCity_Gym_B1F_Text_OliviaDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:105 SootopolisCity_Gym_B1F_Text_OliviaPostBattle
	.globl SootopolisCity_Gym_B1F_Text_OliviaPostBattle
SootopolisCity_Gym_B1F_Text_OliviaPostBattle: @ 0x0820EE1C
	.string "あなた みどころ あると おもうの\nいっしょに ここで ポケモン きたえない?{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_OliviaPostBattle) > 0x28
	.error "SootopolisCity_Gym_B1F_Text_OliviaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_OliviaPostBattle) < 0x28
	.space 0x28 - (. - SootopolisCity_Gym_B1F_Text_OliviaPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:108 SootopolisCity_Gym_B1F_Text_TiffanyIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_TiffanyIntro
SootopolisCity_Gym_B1F_Text_TiffanyIntro: @ 0x0820EE44
	.string "こおりの うえでの ひとふでがき\pそれが できる トレーナーは\nエレガントに うつくしいのよ!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_TiffanyIntro) > 0x30
	.error "SootopolisCity_Gym_B1F_Text_TiffanyIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_TiffanyIntro) < 0x30
	.space 0x30 - (. - SootopolisCity_Gym_B1F_Text_TiffanyIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:111 SootopolisCity_Gym_B1F_Text_TiffanyDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_TiffanyDefeat
SootopolisCity_Gym_B1F_Text_TiffanyDefeat: @ 0x0820EE74
	.string "ちょっとー!?{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_TiffanyDefeat) > 0x8
	.error "SootopolisCity_Gym_B1F_Text_TiffanyDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_TiffanyDefeat) < 0x8
	.space 0x8 - (. - SootopolisCity_Gym_B1F_Text_TiffanyDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:114 SootopolisCity_Gym_B1F_Text_TiffanyPostBattle
	.globl SootopolisCity_Gym_B1F_Text_TiffanyPostBattle
SootopolisCity_Gym_B1F_Text_TiffanyPostBattle: @ 0x0820EE7C
	.string "あたりまえ だけど\nポケモンの つよさに\lおとなも こどもも かんけい ないよ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_TiffanyPostBattle) > 0x28
	.error "SootopolisCity_Gym_B1F_Text_TiffanyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_TiffanyPostBattle) < 0x28
	.space 0x28 - (. - SootopolisCity_Gym_B1F_Text_TiffanyPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:117 SootopolisCity_Gym_B1F_Text_BethanyIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_BethanyIntro
SootopolisCity_Gym_B1F_Text_BethanyIntro: @ 0x0820EEA4
	.string "ポケモンと いっしょに いると\nじかんが あっ というまに すぎるのよ!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BethanyIntro) > 0x25
	.error "SootopolisCity_Gym_B1F_Text_BethanyIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BethanyIntro) < 0x25
	.space 0x25 - (. - SootopolisCity_Gym_B1F_Text_BethanyIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:120 SootopolisCity_Gym_B1F_Text_BethanyDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_BethanyDefeat
SootopolisCity_Gym_B1F_Text_BethanyDefeat: @ 0x0820EEC9
	.string "あっ!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BethanyDefeat) > 0x4
	.error "SootopolisCity_Gym_B1F_Text_BethanyDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BethanyDefeat) < 0x4
	.space 0x4 - (. - SootopolisCity_Gym_B1F_Text_BethanyDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:123 SootopolisCity_Gym_B1F_Text_BethanyPostBattle
	.globl SootopolisCity_Gym_B1F_Text_BethanyPostBattle
SootopolisCity_Gym_B1F_Text_BethanyPostBattle: @ 0x0820EECD
	.string "まけた しょうぶも\nあっ というまに わすれたい……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BethanyPostBattle) > 0x1b
	.error "SootopolisCity_Gym_B1F_Text_BethanyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BethanyPostBattle) < 0x1b
	.space 0x1b - (. - SootopolisCity_Gym_B1F_Text_BethanyPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:126 SootopolisCity_Gym_B1F_Text_AnnikaIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_AnnikaIntro
SootopolisCity_Gym_B1F_Text_AnnikaIntro: @ 0x0820EEE8
	.string "すっごく めずらしい ポケモンちゃんで\nたたかって あげても いいわよー!{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_AnnikaIntro) > 0x26
	.error "SootopolisCity_Gym_B1F_Text_AnnikaIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_AnnikaIntro) < 0x26
	.space 0x26 - (. - SootopolisCity_Gym_B1F_Text_AnnikaIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:129 SootopolisCity_Gym_B1F_Text_AnnikaDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_AnnikaDefeat
SootopolisCity_Gym_B1F_Text_AnnikaDefeat: @ 0x0820EF0E
	.string "ちょっと!\nポケモンちゃんも ちゃんと みてくれた?{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_AnnikaDefeat) > 0x1b
	.error "SootopolisCity_Gym_B1F_Text_AnnikaDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_AnnikaDefeat) < 0x1b
	.space 0x1b - (. - SootopolisCity_Gym_B1F_Text_AnnikaDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:132 SootopolisCity_Gym_B1F_Text_AnnikaPostBattle
	.globl SootopolisCity_Gym_B1F_Text_AnnikaPostBattle
SootopolisCity_Gym_B1F_Text_AnnikaPostBattle: @ 0x0820EF29
	.string "わたしが このジムに いるのは\nアダンさんが わたしの ポケモンちゃんを\lほめて くれたから なのよぉ\pあーあ ダンナに であうまえに\nアダンさんに であっていれば いまごろは…{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_AnnikaPostBattle) > 0x5a
	.error "SootopolisCity_Gym_B1F_Text_AnnikaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_AnnikaPostBattle) < 0x5a
	.space 0x5a - (. - SootopolisCity_Gym_B1F_Text_AnnikaPostBattle)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:135 SootopolisCity_Gym_B1F_Text_BriannaIntro (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_BriannaIntro
SootopolisCity_Gym_B1F_Text_BriannaIntro: @ 0x0820EF83
	.string "うふふ……\nその ひっしな おかおが ステキよ{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BriannaIntro) > 0x18
	.error "SootopolisCity_Gym_B1F_Text_BriannaIntro may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BriannaIntro) < 0x18
	.space 0x18 - (. - SootopolisCity_Gym_B1F_Text_BriannaIntro)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:138 SootopolisCity_Gym_B1F_Text_BriannaDefeat (+1 aliases)
	.globl SootopolisCity_Gym_B1F_Text_BriannaDefeat
SootopolisCity_Gym_B1F_Text_BriannaDefeat: @ 0x0820EF9B
	.string "あら\nてかげん しすぎて しまいましたわ……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BriannaDefeat) > 0x17
	.error "SootopolisCity_Gym_B1F_Text_BriannaDefeat may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BriannaDefeat) < 0x17
	.space 0x17 - (. - SootopolisCity_Gym_B1F_Text_BriannaDefeat)
	.endif
	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:141 SootopolisCity_Gym_B1F_Text_BriannaPostBattle
	.globl SootopolisCity_Gym_B1F_Text_BriannaPostBattle
SootopolisCity_Gym_B1F_Text_BriannaPostBattle: @ 0x0820EFB2
	.string "あなたでは アダンさまには\nきっと はが たちませんわよ うふふ……{EOS}"
	.if (. - SootopolisCity_Gym_B1F_Text_BriannaPostBattle) > 0x23
	.error "SootopolisCity_Gym_B1F_Text_BriannaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - SootopolisCity_Gym_B1F_Text_BriannaPostBattle) < 0x23
	.space 0x23 - (. - SootopolisCity_Gym_B1F_Text_BriannaPostBattle)
	.endif
	@ analyzed canonical ROM range 0x0820EFD5-0x0820F045
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_SootopolisCity_PokemonCenter_1F_OnTransition_OnResume: @ 0x0820EFD5
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820EFE0
	.byte 0x05
	.4byte SharedMapScript_0824790F
	.byte 0
EventScript_JP_0820EFE0: @ 0x0820EFE0
	setrespawn 0x000A
	end
.globl EventScript_JP_0820EFE4
EventScript_JP_0820EFE4: @ 0x0820EFE4
	setvar 0x800B, 0x0001
	call 0x082429B8
	waitmessage
	waitbuttonpress
	release
	end
.globl EventScript_JP_0820EFF2
EventScript_JP_0820EFF2: @ 0x0820EFF2
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F012
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F012
	loadword 0x00, SootopolisCity_PokemonCenter_1F_Text_EveryoneTakenRefuge
	callstd 0x04
	release
	end
EventScript_JP_0820F012: @ 0x0820F012
	loadword 0x00, SootopolisCity_PokemonCenter_1F_Text_WallaceToughestInHoenn
	callstd 0x04
	release
	end
.globl EventScript_JP_0820F01C
EventScript_JP_0820F01C: @ 0x0820F01C
	lock
	faceplayer
	compare_var_to_value 0x40CA, 0x0002
	goto_if 0x04, EventScript_JP_0820F03C
	checkflag 0x0081
	goto_if 0x00, EventScript_JP_0820F03C
	loadword 0x00, SootopolisCity_PokemonCenter_1F_Text_ArentPokemonOurFriends
	callstd 0x04
	release
	end
EventScript_JP_0820F03C: @ 0x0820F03C
	loadword 0x00, SootopolisCity_PokemonCenter_1F_Text_AlwaysBeFriendsWithPokemon
	callstd 0x04
	release
	end

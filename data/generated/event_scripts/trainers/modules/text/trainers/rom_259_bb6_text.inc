	@ data/text/trainers.inc:1 Route102_Text_CalvinIntro (+1 aliases)
	.globl Route102_Text_CalvinIntro
Route102_Text_CalvinIntro: @ 0x08259517
	.string "ポケモン つれていれば\nキミも りっぱな ポケモントレーナー!\lボクの ちょうせん うけるよね!"
	.byte EOS
	.if (. - Route102_Text_CalvinIntro) > 0x31
	.error "Route102_Text_CalvinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinIntro) < 0x31
	.space 0x31 - (. - Route102_Text_CalvinIntro)
	.endif
	@ data/text/trainers.inc:4 Route102_Text_CalvinDefeated (+1 aliases)
	.globl Route102_Text_CalvinDefeated
Route102_Text_CalvinDefeated: @ 0x08259548
	.string "ああ まけた……\nもっと そだてておけば よかったよ"
	.byte EOS
	.if (. - Route102_Text_CalvinDefeated) > 0x1b
	.error "Route102_Text_CalvinDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinDefeated) < 0x1b
	.space 0x1b - (. - Route102_Text_CalvinDefeated)
	.endif
	@ data/text/trainers.inc:7 Route102_Text_CalvinPostBattle
	.globl Route102_Text_CalvinPostBattle
Route102_Text_CalvinPostBattle: @ 0x08259563
	.string "キミ つよいなら つよいって\nさいしょから いって くれよな!"
	.byte EOS
	.if (. - Route102_Text_CalvinPostBattle) > 0x20
	.error "Route102_Text_CalvinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinPostBattle) < 0x20
	.space 0x20 - (. - Route102_Text_CalvinPostBattle)
	.endif
	@ data/text/trainers.inc:10 Route102_Text_CalvinRegister
	.globl Route102_Text_CalvinRegister
Route102_Text_CalvinRegister: @ 0x08259583
	.string "ボク あれから がんばってるよ!\nこんど たたかいたい から\lポケナビ とうろく してよ!"
	.byte EOS
	.if (. - Route102_Text_CalvinRegister) > 0x2e
	.error "Route102_Text_CalvinRegister may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinRegister) < 0x2e
	.space 0x2e - (. - Route102_Text_CalvinRegister)
	.endif
	@ data/text/trainers.inc:13 Route102_Text_CalvinRegisterShort
	.globl Route102_Text_CalvinRegisterShort
Route102_Text_CalvinRegisterShort: @ 0x082595B1
	.string "こんど また たたかいたい から\nポケナビ とうろく してよ!"
	.byte EOS
	.if (. - Route102_Text_CalvinRegisterShort) > 0x20
	.error "Route102_Text_CalvinRegisterShort may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinRegisterShort) < 0x20
	.space 0x20 - (. - Route102_Text_CalvinRegisterShort)
	.endif
	@ data/text/trainers.inc:16 Route102_Text_CalvinRematchIntro (+1 aliases)
	.globl Route102_Text_CalvinRematchIntro
Route102_Text_CalvinRematchIntro: @ 0x082595D1
	.string "キミに まけてから ひっしに\nポケモン そだてたんだ! もちろん\lボクの ちょうせん うけるよね!"
	.byte EOS
	.if (. - Route102_Text_CalvinRematchIntro) > 0x32
	.error "Route102_Text_CalvinRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinRematchIntro) < 0x32
	.space 0x32 - (. - Route102_Text_CalvinRematchIntro)
	.endif
	@ data/text/trainers.inc:19 Route102_Text_CalvinRematchDefeated (+1 aliases)
	.globl Route102_Text_CalvinRematchDefeated
Route102_Text_CalvinRematchDefeated: @ 0x08259603
	.string "ああ まけた……\nそだてかた わるいのかな"
	.byte EOS
	.if (. - Route102_Text_CalvinRematchDefeated) > 0x16
	.error "Route102_Text_CalvinRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinRematchDefeated) < 0x16
	.space 0x16 - (. - Route102_Text_CalvinRematchDefeated)
	.endif
	@ data/text/trainers.inc:22 Route102_Text_CalvinRematchPostBattle
	.globl Route102_Text_CalvinRematchPostBattle
Route102_Text_CalvinRematchPostBattle: @ 0x08259619
	.string "キミが つよくなるなら\nボクも もっと つよくなって みせるよ!"
	.byte EOS
	.if (. - Route102_Text_CalvinRematchPostBattle) > 0x21
	.error "Route102_Text_CalvinRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_CalvinRematchPostBattle) < 0x21
	.space 0x21 - (. - Route102_Text_CalvinRematchPostBattle)
	.endif
	@ data/text/trainers.inc:25 Route102_Text_AllenIntro (+1 aliases)
	.globl Route102_Text_AllenIntro
Route102_Text_AllenIntro: @ 0x0825963A
	.string "きみ トレーナーに なったばかり?\nおたがい しょしんしゃ だね!"
	.byte EOS
	.if (. - Route102_Text_AllenIntro) > 0x22
	.error "Route102_Text_AllenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_AllenIntro) < 0x22
	.space 0x22 - (. - Route102_Text_AllenIntro)
	.endif
	@ data/text/trainers.inc:28 Route102_Text_AllenDefeated (+1 aliases)
	.globl Route102_Text_AllenDefeated
Route102_Text_AllenDefeated: @ 0x0825965C
	.string "かてると おもったから\nこえを かけたのに!"
	.byte EOS
	.if (. - Route102_Text_AllenDefeated) > 0x17
	.error "Route102_Text_AllenDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_AllenDefeated) < 0x17
	.space 0x17 - (. - Route102_Text_AllenDefeated)
	.endif
	@ data/text/trainers.inc:31 Route102_Text_AllenPostBattle
	.globl Route102_Text_AllenPostBattle
Route102_Text_AllenPostBattle: @ 0x08259673
	.string "まだ 1かいも かってない……\nはやく かちたいなあ……"
	.byte EOS
	.if (. - Route102_Text_AllenPostBattle) > 0x1d
	.error "Route102_Text_AllenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_AllenPostBattle) < 0x1d
	.space 0x1d - (. - Route102_Text_AllenPostBattle)
	.endif
	@ data/text/trainers.inc:34 Route102_Text_RickIntro (+1 aliases)
	.globl Route102_Text_RickIntro
Route102_Text_RickIntro: @ 0x08259690
	.string "おっと! めが あったな!\nむしポケモンで あいてを するぜ!"
	.byte EOS
	.if (. - Route102_Text_RickIntro) > 0x20
	.error "Route102_Text_RickIntro may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_RickIntro) < 0x20
	.space 0x20 - (. - Route102_Text_RickIntro)
	.endif
	@ data/text/trainers.inc:37 Route102_Text_RickDefeated (+1 aliases)
	.globl Route102_Text_RickDefeated
Route102_Text_RickDefeated: @ 0x082596B0
	.string "まけてしまった!"
	.byte EOS
	.if (. - Route102_Text_RickDefeated) > 0x9
	.error "Route102_Text_RickDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_RickDefeated) < 0x9
	.space 0x9 - (. - Route102_Text_RickDefeated)
	.endif
	@ data/text/trainers.inc:40 Route102_Text_RickPostBattle
	.globl Route102_Text_RickPostBattle
Route102_Text_RickPostBattle: @ 0x082596B9
	.string "めが あった トレーナーには\nしょうぶを いどむのが きまりさ!"
	.byte EOS
	.if (. - Route102_Text_RickPostBattle) > 0x21
	.error "Route102_Text_RickPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_RickPostBattle) < 0x21
	.space 0x21 - (. - Route102_Text_RickPostBattle)
	.endif
	@ data/text/trainers.inc:43 Route102_Text_TianaIntro (+1 aliases)
	.globl Route102_Text_TianaIntro
Route102_Text_TianaIntro: @ 0x082596DA
	.string "わたしは どんどん かちぬいて\nさいきょうの トレーナーを めざすのよ!\pあなたも きょうりょく してね!"
	.byte EOS
	.if (. - Route102_Text_TianaIntro) > 0x36
	.error "Route102_Text_TianaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_TianaIntro) < 0x36
	.space 0x36 - (. - Route102_Text_TianaIntro)
	.endif
	@ data/text/trainers.inc:46 Route102_Text_TianaDefeated (+1 aliases)
	.globl Route102_Text_TianaDefeated
Route102_Text_TianaDefeated: @ 0x08259710
	.string "わたしが あなたに\nきょうりょく しちゃった みたいね……"
	.byte EOS
	.if (. - Route102_Text_TianaDefeated) > 0x1e
	.error "Route102_Text_TianaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_TianaDefeated) < 0x1e
	.space 0x1e - (. - Route102_Text_TianaDefeated)
	.endif
	@ data/text/trainers.inc:49 Route102_Text_TianaPostBattle
	.globl Route102_Text_TianaPostBattle
Route102_Text_TianaPostBattle: @ 0x0825972E
	.string "どんどん かちぬくには\nもっと たくさん ポケモンを\lつかまえないと いけない みたいね!"
	.byte EOS
	.if (. - Route102_Text_TianaPostBattle) > 0x2e
	.error "Route102_Text_TianaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route102_Text_TianaPostBattle) < 0x2e
	.space 0x2e - (. - Route102_Text_TianaPostBattle)
	.endif
	@ data/text/trainers.inc:52 Route103_Text_DaisyIntro (+1 aliases)
	.globl Route103_Text_DaisyIntro
Route103_Text_DaisyIntro: @ 0x0825975C
	.string "こころ やすらぐ かおりに\nあなたも さそわれたのですね……"
	.byte EOS
	.if (. - Route103_Text_DaisyIntro) > 0x1f
	.error "Route103_Text_DaisyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_DaisyIntro) < 0x1f
	.space 0x1f - (. - Route103_Text_DaisyIntro)
	.endif
	@ data/text/trainers.inc:55 Route103_Text_DaisyDefeated (+1 aliases)
	.globl Route103_Text_DaisyDefeated
Route103_Text_DaisyDefeated: @ 0x0825977B
	.string "わたくしの かおりに\nまどわされませんでしたね……"
	.byte EOS
	.if (. - Route103_Text_DaisyDefeated) > 0x1a
	.error "Route103_Text_DaisyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_DaisyDefeated) < 0x1a
	.space 0x1a - (. - Route103_Text_DaisyDefeated)
	.endif
	@ data/text/trainers.inc:58 Route103_Text_DaisyPostBattle
	.globl Route103_Text_DaisyPostBattle
Route103_Text_DaisyPostBattle: @ 0x08259795
	.string "アロマとは かおりのこと……\nかおりは こころと からだを いやすのです"
	.byte EOS
	.if (. - Route103_Text_DaisyPostBattle) > 0x25
	.error "Route103_Text_DaisyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_DaisyPostBattle) < 0x25
	.space 0x25 - (. - Route103_Text_DaisyPostBattle)
	.endif
	@ data/text/trainers.inc:61 Route103_Text_AmyIntro (+2 aliases)
	.globl Route103_Text_AmyIntro_Copy_Rom_2597BA
Route103_Text_AmyIntro_Copy_Rom_2597BA: @ 0x082597BA
	.string "クミ『あたしは クミ!\nこっちは いもうとの ルミ!\lふたりで いっしょに たたかうのよ!"
	.byte EOS
	.if (. - Route103_Text_AmyIntro_Copy_Rom_2597BA) > 0x2e
	.error "Route103_Text_AmyIntro_Copy_Rom_2597BA may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyIntro_Copy_Rom_2597BA) < 0x2e
	.space 0x2e - (. - Route103_Text_AmyIntro_Copy_Rom_2597BA)
	.endif
	@ data/text/trainers.inc:64 Route103_Text_AmyDefeated (+1 aliases)
	.globl Route103_Text_AmyDefeated
Route103_Text_AmyDefeated: @ 0x082597E8
	.string "クミ『まけっちゃったよぉ……"
	.byte EOS
	.if (. - Route103_Text_AmyDefeated) > 0xf
	.error "Route103_Text_AmyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyDefeated) < 0xf
	.space 0xf - (. - Route103_Text_AmyDefeated)
	.endif
	@ data/text/trainers.inc:67 Route103_Text_AmyPostBattle (+1 aliases)
	.globl Route103_Text_AmyPostBattle_Copy_Rom_2597F7
Route103_Text_AmyPostBattle_Copy_Rom_2597F7: @ 0x082597F7
	.string "クミ『ふたりを あいてに するのって\nいろんな ことを かんがえるよね!"
	.byte EOS
	.if (. - Route103_Text_AmyPostBattle_Copy_Rom_2597F7) > 0x25
	.error "Route103_Text_AmyPostBattle_Copy_Rom_2597F7 may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyPostBattle_Copy_Rom_2597F7) < 0x25
	.space 0x25 - (. - Route103_Text_AmyPostBattle_Copy_Rom_2597F7)
	.endif
	@ data/text/trainers.inc:70 Route103_Text_AmyNotEnoughPokemon (+2 aliases)
	.globl Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25981C
Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25981C: @ 0x0825981C
	.string "クミ『あら?\nポケモン 1ひきしか つれてないんだね!\lそれじゃあ あたしたちと たたかえないわ!"
	.byte EOS
	.if (. - Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25981C) > 0x32
	.error "Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25981C may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25981C) < 0x32
	.space 0x32 - (. - Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25981C)
	.endif
	@ data/text/trainers.inc:73 Route103_Text_LivIntro (+1 aliases)
	.globl Route103_Text_LivIntro
Route103_Text_LivIntro: @ 0x0825984E
	.string "ルミ『あたしたちは ふたりで ひとり\nいっしょに たたかうんだよ!"
	.byte EOS
	.if (. - Route103_Text_LivIntro) > 0x22
	.error "Route103_Text_LivIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivIntro) < 0x22
	.space 0x22 - (. - Route103_Text_LivIntro)
	.endif
	@ data/text/trainers.inc:76 Route103_Text_LivDefeated (+1 aliases)
	.globl Route103_Text_LivDefeated
Route103_Text_LivDefeated: @ 0x08259870
	.string "ルミ『まけちゃったよぉ おねえちゃぁん……"
	.byte EOS
	.if (. - Route103_Text_LivDefeated) > 0x16
	.error "Route103_Text_LivDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivDefeated) < 0x16
	.space 0x16 - (. - Route103_Text_LivDefeated)
	.endif
	@ data/text/trainers.inc:79 Route103_Text_LivPostBattle
	.globl Route103_Text_LivPostBattle
Route103_Text_LivPostBattle: @ 0x08259886
	.string "ルミ『おねえちゃんと あたしは\nいきが ぴったり あってるのに……\pまけちゃったよぉ……"
	.byte EOS
	.if (. - Route103_Text_LivPostBattle) > 0x2d
	.error "Route103_Text_LivPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivPostBattle) < 0x2d
	.space 0x2d - (. - Route103_Text_LivPostBattle)
	.endif
	@ data/text/trainers.inc:82 Route103_Text_AmyLivRegister
	.globl Route103_Text_AmyLivRegister
Route103_Text_AmyLivRegister: @ 0x082598B3
	.string "ルミ『あたしたち ほんとは\nもっと つよいんだもん……\lほんとうだから! こんど みせるから!"
	.byte EOS
	.if (. - Route103_Text_AmyLivRegister) > 0x30
	.error "Route103_Text_AmyLivRegister may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyLivRegister) < 0x30
	.space 0x30 - (. - Route103_Text_AmyLivRegister)
	.endif
	@ data/text/trainers.inc:85 Route103_Text_LivNotEnoughPokemon (+2 aliases)
	.globl Route103_Text_LivNotEnoughPokemon_Copy_Rom_2598E3
Route103_Text_LivNotEnoughPokemon_Copy_Rom_2598E3: @ 0x082598E3
	.string "ルミ『あたしたちと たたかいたいなら\nポケモンを 2ひき つれてないと ダメよ!\lじゃないと しょうぶに ならないんだから!"
	.byte EOS
	.if (. - Route103_Text_LivNotEnoughPokemon_Copy_Rom_2598E3) > 0x3f
	.error "Route103_Text_LivNotEnoughPokemon_Copy_Rom_2598E3 may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivNotEnoughPokemon_Copy_Rom_2598E3) < 0x3f
	.space 0x3f - (. - Route103_Text_LivNotEnoughPokemon_Copy_Rom_2598E3)
	.endif
	@ data/text/trainers.inc:61 Route103_Text_AmyIntro (+2 aliases)
	.globl Route103_Text_AmyIntro_Copy_Rom_259922
Route103_Text_AmyIntro_Copy_Rom_259922: @ 0x08259922
	.string "クミ『あたしは クミ!\nこっちは いもうとの ルミ!\lふたりで いっしょに たたかうのよ!"
	.byte EOS
	.if (. - Route103_Text_AmyIntro_Copy_Rom_259922) > 0x2e
	.error "Route103_Text_AmyIntro_Copy_Rom_259922 may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyIntro_Copy_Rom_259922) < 0x2e
	.space 0x2e - (. - Route103_Text_AmyIntro_Copy_Rom_259922)
	.endif
	@ data/text/trainers.inc:91 Route103_Text_AmyRematchDefeated (+1 aliases)
	.globl Route103_Text_AmyRematchDefeated
Route103_Text_AmyRematchDefeated: @ 0x08259950
	.string "クミ『くやしい……\nまた かてなかったよぉ……"
	.byte EOS
	.if (. - Route103_Text_AmyRematchDefeated) > 0x18
	.error "Route103_Text_AmyRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyRematchDefeated) < 0x18
	.space 0x18 - (. - Route103_Text_AmyRematchDefeated)
	.endif
	@ data/text/trainers.inc:67 Route103_Text_AmyPostBattle (+1 aliases)
	.globl Route103_Text_AmyPostBattle_Copy_Rom_259968
Route103_Text_AmyPostBattle_Copy_Rom_259968: @ 0x08259968
	.string "クミ『ふたりを あいてに するのって\nいろんな ことを かんがえるよね!"
	.byte EOS
	.if (. - Route103_Text_AmyPostBattle_Copy_Rom_259968) > 0x25
	.error "Route103_Text_AmyPostBattle_Copy_Rom_259968 may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyPostBattle_Copy_Rom_259968) < 0x25
	.space 0x25 - (. - Route103_Text_AmyPostBattle_Copy_Rom_259968)
	.endif
	@ data/text/trainers.inc:70 Route103_Text_AmyNotEnoughPokemon (+2 aliases)
	.globl Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25998D
Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25998D: @ 0x0825998D
	.string "クミ『あら?\nポケモン 1ひきしか つれてないんだね!\lそれじゃあ あたしたちと たたかえないわ!"
	.byte EOS
	.if (. - Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25998D) > 0x32
	.error "Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25998D may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25998D) < 0x32
	.space 0x32 - (. - Route103_Text_AmyNotEnoughPokemon_Copy_Rom_25998D)
	.endif
	@ data/text/trainers.inc:100 Route103_Text_LivRematchIntro (+1 aliases)
	.globl Route103_Text_LivRematchIntro
Route103_Text_LivRematchIntro: @ 0x082599BF
	.string "ルミ『あたしたちは ふたりで ひとり\nいつも いっしょに たたかうんだよ!"
	.byte EOS
	.if (. - Route103_Text_LivRematchIntro) > 0x26
	.error "Route103_Text_LivRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivRematchIntro) < 0x26
	.space 0x26 - (. - Route103_Text_LivRematchIntro)
	.endif
	@ data/text/trainers.inc:103 Route103_Text_LivRematchDefeated (+1 aliases)
	.globl Route103_Text_LivRematchDefeated
Route103_Text_LivRematchDefeated: @ 0x082599E5
	.string "ルミ『また まけちゃったよぉ\nおねえちゃぁん……"
	.byte EOS
	.if (. - Route103_Text_LivRematchDefeated) > 0x19
	.error "Route103_Text_LivRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivRematchDefeated) < 0x19
	.space 0x19 - (. - Route103_Text_LivRematchDefeated)
	.endif
	@ data/text/trainers.inc:106 Route103_Text_LivRematchPostBattle
	.globl Route103_Text_LivRematchPostBattle
Route103_Text_LivRematchPostBattle: @ 0x082599FE
	.string "ルミ『おねえちゃんと あたしは\nいきが ぴったり あってるのに……\pどうして また まけちゃったの?"
	.byte EOS
	.if (. - Route103_Text_LivRematchPostBattle) > 0x33
	.error "Route103_Text_LivRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivRematchPostBattle) < 0x33
	.space 0x33 - (. - Route103_Text_LivRematchPostBattle)
	.endif
	@ data/text/trainers.inc:85 Route103_Text_LivNotEnoughPokemon (+2 aliases)
	.globl Route103_Text_LivNotEnoughPokemon_Copy_Rom_259A31
Route103_Text_LivNotEnoughPokemon_Copy_Rom_259A31: @ 0x08259A31
	.string "ルミ『あたしたちと たたかいたいなら\nポケモンを 2ひき つれてないと ダメよ!\lじゃないと しょうぶに ならないんだから!"
	.byte EOS
	.if (. - Route103_Text_LivNotEnoughPokemon_Copy_Rom_259A31) > 0x3f
	.error "Route103_Text_LivNotEnoughPokemon_Copy_Rom_259A31 may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_LivNotEnoughPokemon_Copy_Rom_259A31) < 0x3f
	.space 0x3f - (. - Route103_Text_LivNotEnoughPokemon_Copy_Rom_259A31)
	.endif
	@ data/text/trainers.inc:112 Route103_Text_AndrewIntro (+1 aliases)
	.globl Route103_Text_AndrewIntro
Route103_Text_AndrewIntro: @ 0x08259A70
	.string "つりいとが からまって イライラするーっ!\nええいっ しょうぶだっ!"
	.byte EOS
	.if (. - Route103_Text_AndrewIntro) > 0x23
	.error "Route103_Text_AndrewIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AndrewIntro) < 0x23
	.space 0x23 - (. - Route103_Text_AndrewIntro)
	.endif
	@ data/text/trainers.inc:115 Route103_Text_AndrewDefeated (+1 aliases)
	.globl Route103_Text_AndrewDefeated
Route103_Text_AndrewDefeated: @ 0x08259A93
	.string "まけたっ!\nよけいに イライラするぞーっ!"
	.byte EOS
	.if (. - Route103_Text_AndrewDefeated) > 0x16
	.error "Route103_Text_AndrewDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AndrewDefeated) < 0x16
	.space 0x16 - (. - Route103_Text_AndrewDefeated)
	.endif
	@ data/text/trainers.inc:118 Route103_Text_AndrewPostBattle
	.globl Route103_Text_AndrewPostBattle
Route103_Text_AndrewPostBattle: @ 0x08259AA9
	.string "ええい はらだたしい……!\nイライライライラ……"
	.byte EOS
	.if (. - Route103_Text_AndrewPostBattle) > 0x19
	.error "Route103_Text_AndrewPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_AndrewPostBattle) < 0x19
	.space 0x19 - (. - Route103_Text_AndrewPostBattle)
	.endif
	@ data/text/trainers.inc:121 Route103_Text_MiguelIntro (+1 aliases)
	.globl Route103_Text_MiguelIntro
Route103_Text_MiguelIntro: @ 0x08259AC2
	.string "わたしの ポケモンちゃん\nすごく かわいいから みていきたまえ!"
	.byte EOS
	.if (. - Route103_Text_MiguelIntro) > 0x21
	.error "Route103_Text_MiguelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelIntro) < 0x21
	.space 0x21 - (. - Route103_Text_MiguelIntro)
	.endif
	@ data/text/trainers.inc:124 Route103_Text_MiguelDefeated (+1 aliases)
	.globl Route103_Text_MiguelDefeated
Route103_Text_MiguelDefeated: @ 0x08259AE3
	.string "あわわ……\nわたしの ポケモンちゃん!"
	.byte EOS
	.if (. - Route103_Text_MiguelDefeated) > 0x14
	.error "Route103_Text_MiguelDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelDefeated) < 0x14
	.space 0x14 - (. - Route103_Text_MiguelDefeated)
	.endif
	@ data/text/trainers.inc:127 Route103_Text_MiguelPostBattle
	.globl Route103_Text_MiguelPostBattle
Route103_Text_MiguelPostBattle: @ 0x08259AF7
	.string "かわいい ポケモンちゃんは\nやられた すがたも かわいいな……"
	.byte EOS
	.if (. - Route103_Text_MiguelPostBattle) > 0x20
	.error "Route103_Text_MiguelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelPostBattle) < 0x20
	.space 0x20 - (. - Route103_Text_MiguelPostBattle)
	.endif
	@ data/text/trainers.inc:130 Route103_Text_MiguelRegister
	.globl Route103_Text_MiguelRegister
Route103_Text_MiguelRegister: @ 0x08259B17
	.string "なんどでも かわいい ポケモンちゃんを\nみにきて もらうんだからね!"
	.byte EOS
	.if (. - Route103_Text_MiguelRegister) > 0x23
	.error "Route103_Text_MiguelRegister may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelRegister) < 0x23
	.space 0x23 - (. - Route103_Text_MiguelRegister)
	.endif
	@ data/text/trainers.inc:133 Route103_Text_MiguelRematchIntro (+1 aliases)
	.globl Route103_Text_MiguelRematchIntro
Route103_Text_MiguelRematchIntro: @ 0x08259B3A
	.string "きみ! わたしの ポケモンちゃん\nさらに かわいく なったのだ!"
	.byte EOS
	.if (. - Route103_Text_MiguelRematchIntro) > 0x21
	.error "Route103_Text_MiguelRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelRematchIntro) < 0x21
	.space 0x21 - (. - Route103_Text_MiguelRematchIntro)
	.endif
	@ data/text/trainers.inc:136 Route103_Text_MiguelRematchDefeated (+1 aliases)
	.globl Route103_Text_MiguelRematchDefeated
Route103_Text_MiguelRematchDefeated: @ 0x08259B5B
	.string "ああ!\nわたしの ポケモンちゃん!"
	.byte EOS
	.if (. - Route103_Text_MiguelRematchDefeated) > 0x12
	.error "Route103_Text_MiguelRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelRematchDefeated) < 0x12
	.space 0x12 - (. - Route103_Text_MiguelRematchDefeated)
	.endif
	@ data/text/trainers.inc:139 Route103_Text_MiguelRematchPostBattle
	.globl Route103_Text_MiguelRematchPostBattle
Route103_Text_MiguelRematchPostBattle: @ 0x08259B6D
	.string "いっしょに いれば いるほど\nポケモンが かわいくなって たまらん!"
	.byte EOS
	.if (. - Route103_Text_MiguelRematchPostBattle) > 0x23
	.error "Route103_Text_MiguelRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MiguelRematchPostBattle) < 0x23
	.space 0x23 - (. - Route103_Text_MiguelRematchPostBattle)
	.endif
	@ data/text/trainers.inc:142 Route103_Text_PeteIntro (+1 aliases)
	.globl Route103_Text_PeteIntro
Route103_Text_PeteIntro: @ 0x08259B90
	.string "この くらいの きょり\nおよいで わたれば いーのにさ!"
	.byte EOS
	.if (. - Route103_Text_PeteIntro) > 0x1d
	.error "Route103_Text_PeteIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_PeteIntro) < 0x1d
	.space 0x1d - (. - Route103_Text_PeteIntro)
	.endif
	@ data/text/trainers.inc:145 Route103_Text_PeteDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route103_Text_PeteDefeated
Route103_Text_PeteDefeated: @ 0x08259BAD
	.string "おお やるじゃん"
	.byte EOS
	.if (. - Route103_Text_PeteDefeated) != 0x9
	.error "Route103_Text_PeteDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:148 Route103_Text_PetePostBattle
	.globl Route103_Text_PetePostBattle
Route103_Text_PetePostBattle: @ 0x08259BB6
	.string "なーるほど\pそれ ほど たよれる ポケモンなら\nおもわず なみのり したくなる ってもんだ"
	.byte EOS
	.if (. - Route103_Text_PetePostBattle) > 0x2e
	.error "Route103_Text_PetePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_PetePostBattle) < 0x2e
	.space 0x2e - (. - Route103_Text_PetePostBattle)
	.endif

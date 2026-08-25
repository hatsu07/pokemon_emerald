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
	@ data/text/trainers.inc:151 Route103_Text_IsabelleIntro (+1 aliases)
	.globl Route103_Text_IsabelleIntro
Route103_Text_IsabelleIntro: @ 0x08259BE4
	.string "きゃあ ぶつかるわ!\nあぶないっ!"
	.byte EOS
	.if (. - Route103_Text_IsabelleIntro) > 0x12
	.error "Route103_Text_IsabelleIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_IsabelleIntro) < 0x12
	.space 0x12 - (. - Route103_Text_IsabelleIntro)
	.endif
	@ data/text/trainers.inc:154 Route103_Text_IsabelleDefeated (+1 aliases)
	.globl Route103_Text_IsabelleDefeated
Route103_Text_IsabelleDefeated: @ 0x08259BF6
	.string "んん……"
	.byte EOS
	.if (. - Route103_Text_IsabelleDefeated) > 0x5
	.error "Route103_Text_IsabelleDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_IsabelleDefeated) < 0x5
	.space 0x5 - (. - Route103_Text_IsabelleDefeated)
	.endif
	@ data/text/trainers.inc:157 Route103_Text_IsabellePostBattle
	.globl Route103_Text_IsabellePostBattle
Route103_Text_IsabellePostBattle: @ 0x08259BFB
	.string "わたし およぎが へたで\nれんしゅう してたのよ……\lぶつかりそうに なって ゴメンね"
	.byte EOS
	.if (. - Route103_Text_IsabellePostBattle) > 0x2c
	.error "Route103_Text_IsabellePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_IsabellePostBattle) < 0x2c
	.space 0x2c - (. - Route103_Text_IsabellePostBattle)
	.endif
	@ data/text/trainers.inc:160 Route103_Text_RhettIntro (+1 aliases)
	.globl Route103_Text_RhettIntro
Route103_Text_RhettIntro: @ 0x08259C27
	.string "うぉっ!\nなぜ こんな せまいところに!?"
	.byte EOS
	.if (. - Route103_Text_RhettIntro) > 0x16
	.error "Route103_Text_RhettIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_RhettIntro) < 0x16
	.space 0x16 - (. - Route103_Text_RhettIntro)
	.endif
	@ data/text/trainers.inc:163 Route103_Text_RhettDefeated (+1 aliases)
	.globl Route103_Text_RhettDefeated
Route103_Text_RhettDefeated: @ 0x08259C3D
	.string "うぉっ できる!"
	.byte EOS
	.if (. - Route103_Text_RhettDefeated) > 0x9
	.error "Route103_Text_RhettDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_RhettDefeated) < 0x9
	.space 0x9 - (. - Route103_Text_RhettDefeated)
	.endif
	@ data/text/trainers.inc:166 Route103_Text_RhettPostBattle
	.globl Route103_Text_RhettPostBattle
Route103_Text_RhettPostBattle: @ 0x08259C46
	.string "せまい ところが\nすき なのかい きみは?"
	.byte EOS
	.if (. - Route103_Text_RhettPostBattle) > 0x16
	.error "Route103_Text_RhettPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_RhettPostBattle) < 0x16
	.space 0x16 - (. - Route103_Text_RhettPostBattle)
	.endif
	@ data/text/trainers.inc:169 Route103_Text_MarcosIntro (+1 aliases)
	.globl Route103_Text_MarcosIntro
Route103_Text_MarcosIntro: @ 0x08259C5C
	.string "おれっちの ギターに さそわれて\nやって きたのかーい?"
	.byte EOS
	.if (. - Route103_Text_MarcosIntro) > 0x1d
	.error "Route103_Text_MarcosIntro may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MarcosIntro) < 0x1d
	.space 0x1d - (. - Route103_Text_MarcosIntro)
	.endif
	@ data/text/trainers.inc:172 Route103_Text_MarcosDefeated (+1 aliases)
	.globl Route103_Text_MarcosDefeated
Route103_Text_MarcosDefeated: @ 0x08259C79
	.string "おれっちの ひとりショーが だいなしだよ"
	.byte EOS
	.if (. - Route103_Text_MarcosDefeated) > 0x15
	.error "Route103_Text_MarcosDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MarcosDefeated) < 0x15
	.space 0x15 - (. - Route103_Text_MarcosDefeated)
	.endif
	@ data/text/trainers.inc:175 Route103_Text_MarcosPostBattle
	.globl Route103_Text_MarcosPostBattle
Route103_Text_MarcosPostBattle: @ 0x08259C8E
	.string "ひとの すくない ところで\nギターを ひいていたのに\lこんなにも あつまって きたぜ!\pぷ プロを めざして みるか!"
	.byte EOS
	.if (. - Route103_Text_MarcosPostBattle) > 0x3c
	.error "Route103_Text_MarcosPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route103_Text_MarcosPostBattle) < 0x3c
	.space 0x3c - (. - Route103_Text_MarcosPostBattle)
	.endif
	@ data/text/trainers.inc:178 Route104_Text_GinaIntro (+1 aliases)
	.globl Route104_Text_GinaIntro
Route104_Text_GinaIntro: @ 0x08259CCA
	.string "ナオ『よーし!\nあたしたちの ポケモンと たたかうです!"
	.byte EOS
	.if (. - Route104_Text_GinaIntro) > 0x1d
	.error "Route104_Text_GinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaIntro) < 0x1d
	.space 0x1d - (. - Route104_Text_GinaIntro)
	.endif
	@ data/text/trainers.inc:181 Route104_Text_GinaDefeat (+1 aliases)
	.globl Route104_Text_GinaDefeat
Route104_Text_GinaDefeat: @ 0x08259CE7
	.string "ナオ『まけて すごく くやしいです"
	.byte EOS
	.if (. - Route104_Text_GinaDefeat) > 0x12
	.error "Route104_Text_GinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaDefeat) < 0x12
	.space 0x12 - (. - Route104_Text_GinaDefeat)
	.endif
	@ data/text/trainers.inc:184 Route104_Text_GinaPostBattle
	.globl Route104_Text_GinaPostBattle
Route104_Text_GinaPostBattle: @ 0x08259CF9
	.string "ナオ『うわー {STR_VAR_1} つよいです!\nあたしたち もっと しゅぎょう するです"
	.byte EOS
	.if (. - Route104_Text_GinaPostBattle) > 0x26
	.error "Route104_Text_GinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaPostBattle) < 0x26
	.space 0x26 - (. - Route104_Text_GinaPostBattle)
	.endif
	@ data/text/trainers.inc:187 Route104_Text_GinaNotEnoughMons (+1 aliases)
	.globl Route104_Text_GinaNotEnoughMons
Route104_Text_GinaNotEnoughMons: @ 0x08259D1F
	.string "ナオ『あら? ポケモン 1ひき だけですか!\nじゃあ あたしたち たたかわない です!\pだって ポケモン 1ひき だけだと\nポケモンが さびしそうで かわいそう です!"
	.byte EOS
	.if (. - Route104_Text_GinaNotEnoughMons) > 0x55
	.error "Route104_Text_GinaNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_GinaNotEnoughMons) < 0x55
	.space 0x55 - (. - Route104_Text_GinaNotEnoughMons)
	.endif
	@ data/text/trainers.inc:190 Route104_Text_MiaIntro (+1 aliases)
	.globl Route104_Text_MiaIntro
Route104_Text_MiaIntro: @ 0x08259D74
	.string "ミオ『あたしたち ふたご だから\nポケモンしょうぶも いっしょに するです!"
	.byte EOS
	.if (. - Route104_Text_MiaIntro) > 0x27
	.error "Route104_Text_MiaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaIntro) < 0x27
	.space 0x27 - (. - Route104_Text_MiaIntro)
	.endif
	@ data/text/trainers.inc:193 Route104_Text_MiaDefeat (+1 aliases)
	.globl Route104_Text_MiaDefeat
Route104_Text_MiaDefeat: @ 0x08259D9B
	.string "ミオ『ふたりで しょうぶ したのに\nまけちゃったです……"
	.byte EOS
	.if (. - Route104_Text_MiaDefeat) > 0x1d
	.error "Route104_Text_MiaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaDefeat) < 0x1d
	.space 0x1d - (. - Route104_Text_MiaDefeat)
	.endif
	@ data/text/trainers.inc:196 Route104_Text_MiaPostBattle
	.globl Route104_Text_MiaPostBattle
Route104_Text_MiaPostBattle: @ 0x08259DB8
	.string "ミオ『もっと ポケモン そだてて\n{STR_VAR_1} みたいに つよく なるです!"
	.byte EOS
	.if (. - Route104_Text_MiaPostBattle) > 0x23
	.error "Route104_Text_MiaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaPostBattle) < 0x23
	.space 0x23 - (. - Route104_Text_MiaPostBattle)
	.endif
	@ data/text/trainers.inc:199 Route104_Text_MiaNotEnoughMons (+1 aliases)
	.globl Route104_Text_MiaNotEnoughMons
Route104_Text_MiaNotEnoughMons: @ 0x08259DDB
	.string "ミオ『あたしたちと たたかうですか?\pじゃあ ポケモンを\n2ひき つれてないと ダメですよ!\lだって あたしたち つよいもん!"
	.byte EOS
	.if (. - Route104_Text_MiaNotEnoughMons) > 0x40
	.error "Route104_Text_MiaNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_MiaNotEnoughMons) < 0x40
	.space 0x40 - (. - Route104_Text_MiaNotEnoughMons)
	.endif
	@ data/text/trainers.inc:202 Route104_Text_IvanIntro (+1 aliases)
	.globl Route104_Text_IvanIntro
Route104_Text_IvanIntro: @ 0x08259E1B
	.string "みずポケモンの エキスパートとは\nなにを かくそう オレのこと!\p……え?\nしらないの?"
	.byte EOS
	.if (. - Route104_Text_IvanIntro) > 0x2d
	.error "Route104_Text_IvanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_IvanIntro) < 0x2d
	.space 0x2d - (. - Route104_Text_IvanIntro)
	.endif
	@ data/text/trainers.inc:205 Route104_Text_IvanDefeat (+1 aliases)
	.globl Route104_Text_IvanDefeat
Route104_Text_IvanDefeat: @ 0x08259E48
	.string "けっこう つよいと おもってたんだけどな\nじぶんのこと…… がっかり……"
	.byte EOS
	.if (. - Route104_Text_IvanDefeat) > 0x25
	.error "Route104_Text_IvanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_IvanDefeat) < 0x25
	.space 0x25 - (. - Route104_Text_IvanDefeat)
	.endif
	@ data/text/trainers.inc:208 Route104_Text_IvanPostBattle
	.globl Route104_Text_IvanPostBattle
Route104_Text_IvanPostBattle: @ 0x08259E6D
	.string "つりに むちゅうに なってて\nポケモン そだてるのを わすれてたよ……"
	.byte EOS
	.if (. - Route104_Text_IvanPostBattle) > 0x24
	.error "Route104_Text_IvanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_IvanPostBattle) < 0x24
	.space 0x24 - (. - Route104_Text_IvanPostBattle)
	.endif
	@ data/text/trainers.inc:211 Route104_Text_BillyIntro (+1 aliases)
	.globl Route104_Text_BillyIntro
Route104_Text_BillyIntro: @ 0x08259E91
	.string "すなはまに あしあと つけるのって\nたのしーよねー!"
	.byte EOS
	.if (. - Route104_Text_BillyIntro) > 0x1b
	.error "Route104_Text_BillyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BillyIntro) < 0x1b
	.space 0x1b - (. - Route104_Text_BillyIntro)
	.endif
	@ data/text/trainers.inc:214 Route104_Text_BillyDefeat (+1 aliases)
	.globl Route104_Text_BillyDefeat
Route104_Text_BillyDefeat: @ 0x08259EAC
	.string "うへーっ!\nクツに すなが はいって ジャリジャリする!"
	.byte EOS
	.if (. - Route104_Text_BillyDefeat) > 0x1d
	.error "Route104_Text_BillyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BillyDefeat) < 0x1d
	.space 0x1d - (. - Route104_Text_BillyDefeat)
	.endif
	@ data/text/trainers.inc:218 Route104_Text_BillyPostBattle
	.globl Route104_Text_BillyPostBattle
Route104_Text_BillyPostBattle: @ 0x08259EC9
	.string "すなはまを ボクの あしあとで\nいっぱいに したいんだけど\lすぐに きえちゃうんだよなぁ"
	.byte EOS
	.if (. - Route104_Text_BillyPostBattle) > 0x2d
	.error "Route104_Text_BillyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_BillyPostBattle) < 0x2d
	.space 0x2d - (. - Route104_Text_BillyPostBattle)
	.endif
	@ data/text/trainers.inc:221 Route104_Text_HaleyIntro (+1 aliases)
	.globl Route104_Text_HaleyIntro
Route104_Text_HaleyIntro: @ 0x08259EF6
	.string "しょうぶ しようかな……\nやめとこうかな……\pえーい! たたかっちゃえ!"
	.byte EOS
	.if (. - Route104_Text_HaleyIntro) > 0x25
	.error "Route104_Text_HaleyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyIntro) < 0x25
	.space 0x25 - (. - Route104_Text_HaleyIntro)
	.endif
	@ data/text/trainers.inc:224 Route104_Text_HaleyDefeat (+1 aliases)
	.globl Route104_Text_HaleyDefeat
Route104_Text_HaleyDefeat: @ 0x08259F1B
	.string "たたかわなければ よかったかな……"
	.byte EOS
	.if (. - Route104_Text_HaleyDefeat) > 0x12
	.error "Route104_Text_HaleyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyDefeat) < 0x12
	.space 0x12 - (. - Route104_Text_HaleyDefeat)
	.endif
	@ data/text/trainers.inc:227 Route104_Text_HaleyPostBattle
	.globl Route104_Text_HaleyPostBattle
Route104_Text_HaleyPostBattle: @ 0x08259F2D
	.string "どっちに しようか まよってる とき\nじぶんで きめないで たにんに まかせると\lどっちに なっても こうかいするね……"
	.byte EOS
	.if (. - Route104_Text_HaleyPostBattle) > 0x3d
	.error "Route104_Text_HaleyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyPostBattle) < 0x3d
	.space 0x3d - (. - Route104_Text_HaleyPostBattle)
	.endif
	@ data/text/trainers.inc:230 Route104_Text_HaleyRegister1 (+1 aliases)
	.globl Route104_Text_HaleyRegister1_Copy_Rom_259F6A
Route104_Text_HaleyRegister1_Copy_Rom_259F6A: @ 0x08259F6A
	.string "あなた つよいけど\nポケナビに とうろく しようかな……\lやめとこうかな……\pえーい! とうろくしちゃえ!"
	.byte EOS
	.if (. - Route104_Text_HaleyRegister1_Copy_Rom_259F6A) > 0x36
	.error "Route104_Text_HaleyRegister1_Copy_Rom_259F6A may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyRegister1_Copy_Rom_259F6A) < 0x36
	.space 0x36 - (. - Route104_Text_HaleyRegister1_Copy_Rom_259F6A)
	.endif
	@ data/text/trainers.inc:230 Route104_Text_HaleyRegister1 (+1 aliases)
	.globl Route104_Text_HaleyRegister1_Copy_Rom_259FA0
Route104_Text_HaleyRegister1_Copy_Rom_259FA0: @ 0x08259FA0
	.string "あなた つよいけど\nポケナビに とうろく しようかな……\lやめとこうかな……\pえーい! とうろくしちゃえ!"
	.byte EOS
	.if (. - Route104_Text_HaleyRegister1_Copy_Rom_259FA0) > 0x36
	.error "Route104_Text_HaleyRegister1_Copy_Rom_259FA0 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyRegister1_Copy_Rom_259FA0) < 0x36
	.space 0x36 - (. - Route104_Text_HaleyRegister1_Copy_Rom_259FA0)
	.endif
	@ data/text/trainers.inc:236 Route104_Text_HaleyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_HaleyRematchIntro
Route104_Text_HaleyRematchIntro: @ 0x08259FD6
	.string "あたしと しょうぶ してもらうわよ!"
	.byte EOS
	.if (. - Route104_Text_HaleyRematchIntro) != 0x13
	.error "Route104_Text_HaleyRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:239 Route104_Text_HaleyRematchDefeat (+1 aliases)
	.globl Route104_Text_HaleyRematchDefeat
Route104_Text_HaleyRematchDefeat: @ 0x08259FE9
	.string "うーん……\nかてると おもったのにな"
	.byte EOS
	.if (. - Route104_Text_HaleyRematchDefeat) > 0x13
	.error "Route104_Text_HaleyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyRematchDefeat) < 0x13
	.space 0x13 - (. - Route104_Text_HaleyRematchDefeat)
	.endif

	@ data/text/trainers.inc:242 Route104_Text_HaleyPostRematch
	.globl Route104_Text_HaleyPostRematch
Route104_Text_HaleyPostRematch: @ 0x08259FFC
	.string "たたかうって じぶんで きめたから\nまけても すっきり してるわ!\p……もちろん まけて くやしいけどね{EOS}"
	.if (. - Route104_Text_HaleyPostRematch) > 0x35
	.error "Route104_Text_HaleyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_HaleyPostRematch) < 0x35
	.space 0x35 - (. - Route104_Text_HaleyPostRematch)
	.endif
	@ data/text/trainers.inc:245 Route104_Text_WinstonIntro (+1 aliases)
	.globl Route104_Text_WinstonIntro
Route104_Text_WinstonIntro: @ 0x0825A031
	.string "ボクが あいてして あげるよ\nこの おかねもちの ボクがね{EOS}"
	.if (. - Route104_Text_WinstonIntro) > 0x1e
	.error "Route104_Text_WinstonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonIntro) < 0x1e
	.space 0x1e - (. - Route104_Text_WinstonIntro)
	.endif
	@ data/text/trainers.inc:248 Route104_Text_WinstonDefeat (+1 aliases)
	.globl Route104_Text_WinstonDefeat
Route104_Text_WinstonDefeat: @ 0x0825A04F
	.string "どうして かてないんだ……!?{EOS}"
	.if (. - Route104_Text_WinstonDefeat) > 0x10
	.error "Route104_Text_WinstonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonDefeat) < 0x10
	.space 0x10 - (. - Route104_Text_WinstonDefeat)
	.endif
	@ data/text/trainers.inc:251 Route104_Text_WinstonPostBattle
	.globl Route104_Text_WinstonPostBattle
Route104_Text_WinstonPostBattle: @ 0x0825A05F
	.string "おかねじゃ かてない ものが ある……\nそれが ポケモンなんだね……{EOS}"
	.if (. - Route104_Text_WinstonPostBattle) > 0x23
	.error "Route104_Text_WinstonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonPostBattle) < 0x23
	.space 0x23 - (. - Route104_Text_WinstonPostBattle)
	.endif
	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl Route104_Text_WinstonRegister1_Copy_Rom_25A082
Route104_Text_WinstonRegister1_Copy_Rom_25A082: @ 0x0825A082
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね{EOS}"
	.if (. - Route104_Text_WinstonRegister1_Copy_Rom_25A082) > 0x33
	.error "Route104_Text_WinstonRegister1_Copy_Rom_25A082 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonRegister1_Copy_Rom_25A082) < 0x33
	.space 0x33 - (. - Route104_Text_WinstonRegister1_Copy_Rom_25A082)
	.endif
	@ data/text/trainers.inc:254 Route104_Text_WinstonRegister1 (+1 aliases)
	.globl Route104_Text_WinstonRegister1_Copy_Rom_25A0B5
Route104_Text_WinstonRegister1_Copy_Rom_25A0B5: @ 0x0825A0B5
	.string "ん? きみ ポケナビを てにいれたね!\pボクが とうろくして あげよう\nこの おかねもちの ボクがね{EOS}"
	.if (. - Route104_Text_WinstonRegister1_Copy_Rom_25A0B5) > 0x33
	.error "Route104_Text_WinstonRegister1_Copy_Rom_25A0B5 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonRegister1_Copy_Rom_25A0B5) < 0x33
	.space 0x33 - (. - Route104_Text_WinstonRegister1_Copy_Rom_25A0B5)
	.endif
	@ data/text/trainers.inc:260 Route104_Text_WinstonRematchIntro (+1 aliases)
	.globl Route104_Text_WinstonRematchIntro
Route104_Text_WinstonRematchIntro: @ 0x0825A0E8
	.string "きみに まけてから いろいろ\nポケモンのこと べんきょう したんだ!{EOS}"
	.if (. - Route104_Text_WinstonRematchIntro) > 0x23
	.error "Route104_Text_WinstonRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonRematchIntro) < 0x23
	.space 0x23 - (. - Route104_Text_WinstonRematchIntro)
	.endif
	@ data/text/trainers.inc:263 Route104_Text_WinstonRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_WinstonRematchDefeat
Route104_Text_WinstonRematchDefeat: @ 0x0825A10B
	.string "また まけた……\nどうして かてないんだ……!?{EOS}"
	.if (. - Route104_Text_WinstonRematchDefeat) != 0x19
	.error "Route104_Text_WinstonRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:266 Route104_Text_WinstonPostRematch
	.globl Route104_Text_WinstonPostRematch
Route104_Text_WinstonPostRematch: @ 0x0825A124
	.string "おかねもちの ボク なのに\nなかなか ポケモンに かてない……\pなんて おくが ふかいんだろう\nポケモンって……{EOS}"
	.if (. - Route104_Text_WinstonPostRematch) > 0x39
	.error "Route104_Text_WinstonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_WinstonPostRematch) < 0x39
	.space 0x39 - (. - Route104_Text_WinstonPostRematch)
	.endif
	@ data/text/trainers.inc:269 Route104_Text_CindyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_CindyIntro
Route104_Text_CindyIntro: @ 0x0825A15D
	.string "あなたと であったのも なにかの ごえん\nおてあわせを おねがい できるかしら{EOS}"
	.if (. - Route104_Text_CindyIntro) != 0x28
	.error "Route104_Text_CindyIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:272 Route104_Text_CindyDefeat (+1 aliases)
	.globl Route104_Text_CindyDefeat
Route104_Text_CindyDefeat: @ 0x0825A185
	.string "まあ!{EOS}"
	.if (. - Route104_Text_CindyDefeat) > 0x4
	.error "Route104_Text_CindyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyDefeat) < 0x4
	.space 0x4 - (. - Route104_Text_CindyDefeat)
	.endif
	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl Route104_Text_CindyPostBattle_Copy_Rom_25A189
Route104_Text_CindyPostBattle_Copy_Rom_25A189: @ 0x0825A189
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう{EOS}"
	.if (. - Route104_Text_CindyPostBattle_Copy_Rom_25A189) > 0x22
	.error "Route104_Text_CindyPostBattle_Copy_Rom_25A189 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyPostBattle_Copy_Rom_25A189) < 0x22
	.space 0x22 - (. - Route104_Text_CindyPostBattle_Copy_Rom_25A189)
	.endif
	@ data/text/trainers.inc:278 Route104_Text_CindyRegister1
	.globl Route104_Text_CindyRegister1
Route104_Text_CindyRegister1: @ 0x0825A1AB
	.string "あら…… また おあい しましたわね\pこんなに ごえんが あるんですもの\nポケナビに とうろく して くださいませ{EOS}"
	.if (. - Route104_Text_CindyRegister1) > 0x3a
	.error "Route104_Text_CindyRegister1 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyRegister1) < 0x3a
	.space 0x3a - (. - Route104_Text_CindyRegister1)
	.endif
	@ data/text/trainers.inc:281 Route104_Text_CindyRegister2
	.globl Route104_Text_CindyRegister2
Route104_Text_CindyRegister2: @ 0x0825A1E5
	.string "この ごえんを きねんして\nポケナビに とうろく して くださいませ{EOS}"
	.if (. - Route104_Text_CindyRegister2) > 0x23
	.error "Route104_Text_CindyRegister2 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyRegister2) < 0x23
	.space 0x23 - (. - Route104_Text_CindyRegister2)
	.endif
	@ data/text/trainers.inc:284 Route104_Text_CindyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route104_Text_CindyRematchIntro
Route104_Text_CindyRematchIntro: @ 0x0825A208
	.string "また おあい しましたわね\nおてあわせ おねがい できるかしら{EOS}"
	.if (. - Route104_Text_CindyRematchIntro) != 0x20
	.error "Route104_Text_CindyRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:287 Route104_Text_CindyRematchDefeat (+1 aliases)
	.globl Route104_Text_CindyRematchDefeat
Route104_Text_CindyRematchDefeat: @ 0x0825A228
	.string "あら……\nわたくし ベストを つくしましたのに……{EOS}"
	.if (. - Route104_Text_CindyRematchDefeat) > 0x1a
	.error "Route104_Text_CindyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyRematchDefeat) < 0x1a
	.space 0x1a - (. - Route104_Text_CindyRematchDefeat)
	.endif
	@ data/text/trainers.inc:275 Route104_Text_CindyPostBattle (+1 aliases)
	.globl Route104_Text_CindyPostBattle_Copy_Rom_25A242
Route104_Text_CindyPostBattle_Copy_Rom_25A242: @ 0x0825A242
	.string "であいは わかれの はじまり……\nまた どこかで おあいしましょう{EOS}"
	.if (. - Route104_Text_CindyPostBattle_Copy_Rom_25A242) > 0x22
	.error "Route104_Text_CindyPostBattle_Copy_Rom_25A242 may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_CindyPostBattle_Copy_Rom_25A242) < 0x22
	.space 0x22 - (. - Route104_Text_CindyPostBattle_Copy_Rom_25A242)
	.endif
	@ data/text/trainers.inc:293 Route104_Text_DarianIntro (+1 aliases)
	.globl Route104_Text_DarianIntro
Route104_Text_DarianIntro: @ 0x0825A264
	.string "つよそうな ポケモンが つれたっ!\nさかなの おうさま って かんじだ!\lこれは つよそうだぞっ!{EOS}"
	.if (. - Route104_Text_DarianIntro) > 0x32
	.error "Route104_Text_DarianIntro may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DarianIntro) < 0x32
	.space 0x32 - (. - Route104_Text_DarianIntro)
	.endif
	@ data/text/trainers.inc:296 Route104_Text_DarianDefeat (+1 aliases)
	.globl Route104_Text_DarianDefeat
Route104_Text_DarianDefeat: @ 0x0825A296
	.string "なっにい{EOS}"
	.if (. - Route104_Text_DarianDefeat) > 0x5
	.error "Route104_Text_DarianDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DarianDefeat) < 0x5
	.space 0x5 - (. - Route104_Text_DarianDefeat)
	.endif
	@ data/text/trainers.inc:299 Route104_Text_DarianPostBattle
	.globl Route104_Text_DarianPostBattle
Route104_Text_DarianPostBattle: @ 0x0825A29B
	.string "おい なまえ まけ してるじゃないか\nおれの コイキングよ!{EOS}"
	.if (. - Route104_Text_DarianPostBattle) > 0x1f
	.error "Route104_Text_DarianPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route104_Text_DarianPostBattle) < 0x1f
	.space 0x1f - (. - Route104_Text_DarianPostBattle)
	.endif
	@ data/text/trainers.inc:302 Route105_Text_FosterIntro (+1 aliases)
	.globl Route105_Text_FosterIntro
Route105_Text_FosterIntro: @ 0x0825A2BA
	.string "この あたりに\nふしぎな いわが あるらしいが\lきみ しらないかい?{EOS}"
	.if (. - Route105_Text_FosterIntro) > 0x23
	.error "Route105_Text_FosterIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_FosterIntro) < 0x23
	.space 0x23 - (. - Route105_Text_FosterIntro)
	.endif
	@ data/text/trainers.inc:305 Route105_Text_FosterDefeated (+1 aliases)
	.globl Route105_Text_FosterDefeated
Route105_Text_FosterDefeated: @ 0x0825A2DD
	.string "いわのこと ばかり かんがえて\nポケモン よわいまま だったか……{EOS}"
	.if (. - Route105_Text_FosterDefeated) > 0x22
	.error "Route105_Text_FosterDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_FosterDefeated) < 0x22
	.space 0x22 - (. - Route105_Text_FosterDefeated)
	.endif
	@ data/text/trainers.inc:308 Route105_Text_FosterPostBattle
	.globl Route105_Text_FosterPostBattle
Route105_Text_FosterPostBattle: @ 0x0825A2FF
	.string "すてきな いわ だったら\nなんじかん みていても あきないよ……{EOS}"
	.if (. - Route105_Text_FosterPostBattle) > 0x21
	.error "Route105_Text_FosterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_FosterPostBattle) < 0x21
	.space 0x21 - (. - Route105_Text_FosterPostBattle)
	.endif
	@ data/text/trainers.inc:311 Route105_Text_LuisIntro (+1 aliases)
	.globl Route105_Text_LuisIntro
Route105_Text_LuisIntro: @ 0x0825A320
	.string "よかった! こどもが\nおぼれているのかと しんぱい したよ!\pだいじょうぶ そうだから しょうぶ だな!{EOS}"
	.if (. - Route105_Text_LuisIntro) > 0x35
	.error "Route105_Text_LuisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_LuisIntro) < 0x35
	.space 0x35 - (. - Route105_Text_LuisIntro)
	.endif
	@ data/text/trainers.inc:314 Route105_Text_LuisDefeated (+1 aliases)
	.globl Route105_Text_LuisDefeated
Route105_Text_LuisDefeated: @ 0x0825A355
	.string "ゴボゴボ……{EOS}"
	.if (. - Route105_Text_LuisDefeated) > 0x7
	.error "Route105_Text_LuisDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_LuisDefeated) < 0x7
	.space 0x7 - (. - Route105_Text_LuisDefeated)
	.endif
	@ data/text/trainers.inc:317 Route105_Text_LuisPostBattle
	.globl Route105_Text_LuisPostBattle
Route105_Text_LuisPostBattle: @ 0x0825A35C
	.string "すなはまに むかって かたてを ふるのが\nおぼれたときの サインだぜ!{EOS}"
	.if (. - Route105_Text_LuisPostBattle) > 0x24
	.error "Route105_Text_LuisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_LuisPostBattle) < 0x24
	.space 0x24 - (. - Route105_Text_LuisPostBattle)
	.endif
	@ data/text/trainers.inc:320 Route105_Text_DominikIntro (+1 aliases)
	.globl Route105_Text_DominikIntro
Route105_Text_DominikIntro: @ 0x0825A380
	.string "あおい うみで およいでいると\nさいこうの きぶん だな!{EOS}"
	.if (. - Route105_Text_DominikIntro) > 0x1e
	.error "Route105_Text_DominikIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_DominikIntro) < 0x1e
	.space 0x1e - (. - Route105_Text_DominikIntro)
	.endif
	@ data/text/trainers.inc:323 Route105_Text_DominikDefeated (+1 aliases)
	.globl Route105_Text_DominikDefeated
Route105_Text_DominikDefeated: @ 0x0825A39E
	.string "まけた……\nブルーな きぶん……{EOS}"
	.if (. - Route105_Text_DominikDefeated) > 0x11
	.error "Route105_Text_DominikDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_DominikDefeated) < 0x11
	.space 0x11 - (. - Route105_Text_DominikDefeated)
	.endif
	@ data/text/trainers.inc:326 Route105_Text_DominikPostBattle
	.globl Route105_Text_DominikPostBattle
Route105_Text_DominikPostBattle: @ 0x0825A3AF
	.string "うみが あおい りゆう!?\pカイナの はくぶつかんで きいたけど\nそんなの わすれちまったよ!{EOS}"
	.if (. - Route105_Text_DominikPostBattle) > 0x30
	.error "Route105_Text_DominikPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_DominikPostBattle) < 0x30
	.space 0x30 - (. - Route105_Text_DominikPostBattle)
	.endif
	@ data/text/trainers.inc:329 Route105_Text_BeverlyIntro (+1 aliases)
	.globl Route105_Text_BeverlyIntro
Route105_Text_BeverlyIntro: @ 0x0825A3DF
	.string "みずに はいると からだが かるくなるわね\nなんだか スリムに なったみたい!{EOS}"
	.if (. - Route105_Text_BeverlyIntro) > 0x28
	.error "Route105_Text_BeverlyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_BeverlyIntro) < 0x28
	.space 0x28 - (. - Route105_Text_BeverlyIntro)
	.endif
	@ data/text/trainers.inc:332 Route105_Text_BeverlyDefeated (+1 aliases)
	.globl Route105_Text_BeverlyDefeated
Route105_Text_BeverlyDefeated: @ 0x0825A407
	.string "ぷかぷか……{EOS}"
	.if (. - Route105_Text_BeverlyDefeated) > 0x7
	.error "Route105_Text_BeverlyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_BeverlyDefeated) < 0x7
	.space 0x7 - (. - Route105_Text_BeverlyDefeated)
	.endif
	@ data/text/trainers.inc:335 Route105_Text_PostBattle
	.globl Route105_Text_PostBattle
Route105_Text_PostBattle: @ 0x0825A40E
	.string "みずの なかでは たいじゅうが\n10ぶんの1 くらいに なるのよ\pと すると いま わたしは……\nいけない! たいじゅうが バレちゃうわ!{EOS}"
	.if (. - Route105_Text_PostBattle) > 0x46
	.error "Route105_Text_PostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_PostBattle) < 0x46
	.space 0x46 - (. - Route105_Text_PostBattle)
	.endif
	@ data/text/trainers.inc:338 Route105_Text_ImaniIntro (+1 aliases)
	.globl Route105_Text_ImaniIntro
Route105_Text_ImaniIntro: @ 0x0825A454
	.string "あおい そら……\nひろい うみ……\lのどか よねー……{EOS}"
	.if (. - Route105_Text_ImaniIntro) > 0x1c
	.error "Route105_Text_ImaniIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_ImaniIntro) < 0x1c
	.space 0x1c - (. - Route105_Text_ImaniIntro)
	.endif
	@ data/text/trainers.inc:341 Route105_Text_ImaniDefeated (+1 aliases)
	.globl Route105_Text_ImaniDefeated
Route105_Text_ImaniDefeated: @ 0x0825A470
	.string "なごんでいる うちに\nまけちゃったわーっ!{EOS}"
	.if (. - Route105_Text_ImaniDefeated) > 0x16
	.error "Route105_Text_ImaniDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_ImaniDefeated) < 0x16
	.space 0x16 - (. - Route105_Text_ImaniDefeated)
	.endif
	@ data/text/trainers.inc:344 Route105_Text_ImaniPostBattle
	.globl Route105_Text_ImaniPostBattle
Route105_Text_ImaniPostBattle: @ 0x0825A486
	.string "あたしと いると なごむって いわれたいの\nうふふふふ!{EOS}"
	.if (. - Route105_Text_ImaniPostBattle) > 0x1d
	.error "Route105_Text_ImaniPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_ImaniPostBattle) < 0x1d
	.space 0x1d - (. - Route105_Text_ImaniPostBattle)
	.endif
	@ data/text/trainers.inc:347 Route105_Text_AndresIntro (+1 aliases)
	.globl Route105_Text_AndresIntro
Route105_Text_AndresIntro: @ 0x0825A4A3
	.string "うみに こそ なにかが あると\nかくしんが ある!{EOS}"
	.if (. - Route105_Text_AndresIntro) > 0x1a
	.error "Route105_Text_AndresIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresIntro) < 0x1a
	.space 0x1a - (. - Route105_Text_AndresIntro)
	.endif
	@ data/text/trainers.inc:350 Route105_Text_AndresDefeated (+1 aliases)
	.globl Route105_Text_AndresDefeated
Route105_Text_AndresDefeated: @ 0x0825A4BD
	.string "うん…… わし\nしょうぶは よわいんだよ{EOS}"
	.if (. - Route105_Text_AndresDefeated) > 0x15
	.error "Route105_Text_AndresDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresDefeated) < 0x15
	.space 0x15 - (. - Route105_Text_AndresDefeated)
	.endif
	@ data/text/trainers.inc:353 Route105_Text_AndresPostBattle
	.globl Route105_Text_AndresPostBattle
Route105_Text_AndresPostBattle: @ 0x0825A4D2
	.string "せかいじゅうの うみには\nまだまだ ひみつが あるはずだ!\lぜんぶ さがしまくるぞ!{EOS}"
	.if (. - Route105_Text_AndresPostBattle) > 0x2b
	.error "Route105_Text_AndresPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresPostBattle) < 0x2b
	.space 0x2b - (. - Route105_Text_AndresPostBattle)
	.endif
	@ data/text/trainers.inc:356 Route105_Text_AndresRegister
	.globl Route105_Text_AndresRegister
Route105_Text_AndresRegister: @ 0x0825A4FD
	.string "ん? こんな よわい わしでも\nポケナビ とうろくして くれるのか?{EOS}"
	.if (. - Route105_Text_AndresRegister) > 0x23
	.error "Route105_Text_AndresRegister may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRegister) < 0x23
	.space 0x23 - (. - Route105_Text_AndresRegister)
	.endif
	@ data/text/trainers.inc:359 Route105_Text_AndresRematchIntro (+1 aliases)
	.globl Route105_Text_AndresRematchIntro
Route105_Text_AndresRematchIntro: @ 0x0825A520
	.string "しょうぶは よわいと いっているのに……\nわし なんかで いいのか?{EOS}"
	.if (. - Route105_Text_AndresRematchIntro) > 0x23
	.error "Route105_Text_AndresRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRematchIntro) < 0x23
	.space 0x23 - (. - Route105_Text_AndresRematchIntro)
	.endif
	@ data/text/trainers.inc:362 Route105_Text_AndresRematchDefeated (+1 aliases)
	.globl Route105_Text_AndresRematchDefeated
Route105_Text_AndresRematchDefeated: @ 0x0825A543
	.string "うん…… やっぱり かてないな{EOS}"
	.if (. - Route105_Text_AndresRematchDefeated) > 0x10
	.error "Route105_Text_AndresRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRematchDefeated) < 0x10
	.space 0x10 - (. - Route105_Text_AndresRematchDefeated)
	.endif
	@ data/text/trainers.inc:365 Route105_Text_AndresRematchPostBattle
	.globl Route105_Text_AndresRematchPostBattle
Route105_Text_AndresRematchPostBattle: @ 0x0825A553
	.string "しょうぶは よわいが\nたんきゅうしんは きみにも まけん!\lせかいじゅうの うみを たび するぞ!{EOS}"
	.if (. - Route105_Text_AndresRematchPostBattle) > 0x32
	.error "Route105_Text_AndresRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_AndresRematchPostBattle) < 0x32
	.space 0x32 - (. - Route105_Text_AndresRematchPostBattle)
	.endif
	@ data/text/trainers.inc:368 Route105_Text_JosueIntro (+1 aliases)
	.globl Route105_Text_JosueIntro
Route105_Text_JosueIntro: @ 0x0825A585
	.string "なれない およぎで つかれたー\nきばらしに ポケモンしょうぶ じゃい!{EOS}"
	.if (. - Route105_Text_JosueIntro) > 0x24
	.error "Route105_Text_JosueIntro may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_JosueIntro) < 0x24
	.space 0x24 - (. - Route105_Text_JosueIntro)
	.endif
	@ data/text/trainers.inc:371 Route105_Text_JosueDefeated (+1 aliases)
	.globl Route105_Text_JosueDefeated
Route105_Text_JosueDefeated: @ 0x0825A5A9
	.string "うみで たたかった から まけたんだ{EOS}"
	.if (. - Route105_Text_JosueDefeated) > 0x13
	.error "Route105_Text_JosueDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_JosueDefeated) < 0x13
	.space 0x13 - (. - Route105_Text_JosueDefeated)
	.endif
	@ data/text/trainers.inc:374 Route105_Text_JosuePostBattle
	.globl Route105_Text_JosuePostBattle
Route105_Text_JosuePostBattle: @ 0x0825A5BC
	.string "やっぱりさ おれには\nうみより そらが にあってるんだよ{EOS}"
	.if (. - Route105_Text_JosuePostBattle) > 0x1d
	.error "Route105_Text_JosuePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route105_Text_JosuePostBattle) < 0x1d
	.space 0x1d - (. - Route105_Text_JosuePostBattle)
	.endif
	@ data/text/trainers.inc:377 Route106_Text_ElliotIntro (+1 aliases)
	.globl Route106_Text_ElliotIntro
Route106_Text_ElliotIntro: @ 0x0825A5D9
	.string "うみづりと かわづり\nキミは どっちが すき?{EOS}"
	.if (. - Route106_Text_ElliotIntro) > 0x18
	.error "Route106_Text_ElliotIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotIntro) < 0x18
	.space 0x18 - (. - Route106_Text_ElliotIntro)
	.endif
	@ data/text/trainers.inc:380 Route106_Text_ElliotDefeated (+1 aliases)
	.globl Route106_Text_ElliotDefeated
Route106_Text_ElliotDefeated: @ 0x0825A5F1
	.string "まるで うみづりの ように\nごうかいに まけたぞーっ!{EOS}"
	.if (. - Route106_Text_ElliotDefeated) > 0x1c
	.error "Route106_Text_ElliotDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotDefeated) < 0x1c
	.space 0x1c - (. - Route106_Text_ElliotDefeated)
	.endif
	@ data/text/trainers.inc:383 Route106_Text_ElliotPostBattle
	.globl Route106_Text_ElliotPostBattle
Route106_Text_ElliotPostBattle: @ 0x0825A60D
	.string "うみでも かわでも つりは サイコーだ!\nキミも そう おもうだろ!?{EOS}"
	.if (. - Route106_Text_ElliotPostBattle) > 0x24
	.error "Route106_Text_ElliotPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotPostBattle) < 0x24
	.space 0x24 - (. - Route106_Text_ElliotPostBattle)
	.endif
	@ data/text/trainers.inc:386 Route106_Text_ElliotRegister
	.globl Route106_Text_ElliotRegister
Route106_Text_ElliotRegister: @ 0x0825A631
	.string "つりも いいけど しょうぶも いいな!\nキミ よかったら また たのむよ!{EOS}"
	.if (. - Route106_Text_ElliotRegister) > 0x26
	.error "Route106_Text_ElliotRegister may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRegister) < 0x26
	.space 0x26 - (. - Route106_Text_ElliotRegister)
	.endif
	@ data/text/trainers.inc:389 Route106_Text_ElliotRematchIntro (+1 aliases)
	.globl Route106_Text_ElliotRematchIntro
Route106_Text_ElliotRematchIntro: @ 0x0825A657
	.string "ポケモン つりまくったからね\nすごい しょうぶを してみせるぞー!{EOS}"
	.if (. - Route106_Text_ElliotRematchIntro) > 0x22
	.error "Route106_Text_ElliotRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRematchIntro) < 0x22
	.space 0x22 - (. - Route106_Text_ElliotRematchIntro)
	.endif
	@ data/text/trainers.inc:392 Route106_Text_ElliotRematchDefeated (+1 aliases)
	.globl Route106_Text_ElliotRematchDefeated
Route106_Text_ElliotRematchDefeated: @ 0x0825A679
	.string "また ごうかいに まけたぞーっ!{EOS}"
	.if (. - Route106_Text_ElliotRematchDefeated) > 0x11
	.error "Route106_Text_ElliotRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRematchDefeated) < 0x11
	.space 0x11 - (. - Route106_Text_ElliotRematchDefeated)
	.endif
	@ data/text/trainers.inc:395 Route106_Text_ElliotRematchPostBattle
	.globl Route106_Text_ElliotRematchPostBattle
Route106_Text_ElliotRematchPostBattle: @ 0x0825A68A
	.string "かっても まけても ポケモンは サイコーだ!\nキミも そう おもうだろ!?{EOS}"
	.if (. - Route106_Text_ElliotRematchPostBattle) > 0x26
	.error "Route106_Text_ElliotRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_ElliotRematchPostBattle) < 0x26
	.space 0x26 - (. - Route106_Text_ElliotRematchPostBattle)
	.endif
	@ data/text/trainers.inc:398 Route106_Text_NedIntro (+1 aliases)
	.globl Route106_Text_NedIntro
Route106_Text_NedIntro: @ 0x0825A6B0
	.string "トイレに いきたくなったとき\nみんなは どうしてるんだろう……?\pトイレに いっている あいだに\nもし おおものが かかったらと おもうと……{EOS}"
	.if (. - Route106_Text_NedIntro) > 0x48
	.error "Route106_Text_NedIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_NedIntro) < 0x48
	.space 0x48 - (. - Route106_Text_NedIntro)
	.endif
	@ data/text/trainers.inc:401 Route106_Text_NedDefeated (+1 aliases)
	.globl Route106_Text_NedDefeated
Route106_Text_NedDefeated: @ 0x0825A6F8
	.string "トイレを がまん してたから\nまけたんだよ きっと……{EOS}"
	.if (. - Route106_Text_NedDefeated) > 0x1c
	.error "Route106_Text_NedDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_NedDefeated) < 0x1c
	.space 0x1c - (. - Route106_Text_NedDefeated)
	.endif
	@ data/text/trainers.inc:404 Route106_Text_NedPostBattle
	.globl Route106_Text_NedPostBattle
Route106_Text_NedPostBattle: @ 0x0825A714
	.string "ああっ!\nおおものが つれそうな よかん……!{EOS}"
	.if (. - Route106_Text_NedPostBattle) > 0x18
	.error "Route106_Text_NedPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_NedPostBattle) < 0x18
	.space 0x18 - (. - Route106_Text_NedPostBattle)
	.endif
	@ data/text/trainers.inc:407 Route106_Text_DouglasIntro (+1 aliases)
	.globl Route106_Text_DouglasIntro
Route106_Text_DouglasIntro: @ 0x0825A72C
	.string "はっはっはっ!\nりくでは はやく はしれないが\lみずの なかなら まけないぞ!{EOS}"
	.if (. - Route106_Text_DouglasIntro) > 0x28
	.error "Route106_Text_DouglasIntro may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_DouglasIntro) < 0x28
	.space 0x28 - (. - Route106_Text_DouglasIntro)
	.endif
	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl Route106_Text_DouglasDefeated_Copy_Rom_25A754
Route106_Text_DouglasDefeated_Copy_Rom_25A754: @ 0x0825A754
	.string "まいりましたーっ!{EOS}"
	.if (. - Route106_Text_DouglasDefeated_Copy_Rom_25A754) > 0xa
	.error "Route106_Text_DouglasDefeated_Copy_Rom_25A754 may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_DouglasDefeated_Copy_Rom_25A754) < 0xa
	.space 0xa - (. - Route106_Text_DouglasDefeated_Copy_Rom_25A754)
	.endif
	@ data/text/trainers.inc:413 Route106_Text_DouglasPostBattle
	.globl Route106_Text_DouglasPostBattle
Route106_Text_DouglasPostBattle: @ 0x0825A75E
	.string "すいえいの きょうそうなら まけないのに……{EOS}"
	.if (. - Route106_Text_DouglasPostBattle) > 0x17
	.error "Route106_Text_DouglasPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_DouglasPostBattle) < 0x17
	.space 0x17 - (. - Route106_Text_DouglasPostBattle)
	.endif
	@ data/text/trainers.inc:416 Route106_Text_KylaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route106_Text_KylaIntro
Route106_Text_KylaIntro: @ 0x0825A775
	.string "うみは わたしの にわ\nこども だからって てかげん しないわよ!{EOS}"
	.if (. - Route106_Text_KylaIntro) != 0x22
	.error "Route106_Text_KylaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:419 Route106_Text_KylaDefeated (+1 aliases)
	.globl Route106_Text_KylaDefeated
Route106_Text_KylaDefeated: @ 0x0825A797
	.string "ひょっとして\nてかげん してないよね?{EOS}"
	.if (. - Route106_Text_KylaDefeated) > 0x14
	.error "Route106_Text_KylaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_KylaDefeated) < 0x14
	.space 0x14 - (. - Route106_Text_KylaDefeated)
	.endif
	@ data/text/trainers.inc:422 Route106_Text_KylaPostBattle
	.globl Route106_Text_KylaPostBattle
Route106_Text_KylaPostBattle: @ 0x0825A7AB
	.string "なみに ゆられて ただようのが だいすき\nあなたも やってみない?{EOS}"
	.if (. - Route106_Text_KylaPostBattle) > 0x22
	.error "Route106_Text_KylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_KylaPostBattle) < 0x22
	.space 0x22 - (. - Route106_Text_KylaPostBattle)
	.endif
	@ data/text/trainers.inc:425 Route107_Text_DarrinIntro (+1 aliases)
	.globl Route107_Text_DarrinIntro
Route107_Text_DarrinIntro: @ 0x0825A7CD
	.string "むにゃむにゃ……\pなみに ゆられてたら きもちよくなって\nうっかり ねてしまった!{EOS}"
	.if (. - Route107_Text_DarrinIntro) > 0x2a
	.error "Route107_Text_DarrinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DarrinIntro) < 0x2a
	.space 0x2a - (. - Route107_Text_DarrinIntro)
	.endif
	@ data/text/trainers.inc:428 Route107_Text_DarrinDefeated (+1 aliases)
	.globl Route107_Text_DarrinDefeated
Route107_Text_DarrinDefeated: @ 0x0825A7F7
	.string "あはは まけた……\nまた ねますか……{EOS}"
	.if (. - Route107_Text_DarrinDefeated) > 0x14
	.error "Route107_Text_DarrinDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DarrinDefeated) < 0x14
	.space 0x14 - (. - Route107_Text_DarrinDefeated)
	.endif
	@ data/text/trainers.inc:431 Route107_Text_DarrinPostBattle
	.globl Route107_Text_DarrinPostBattle
Route107_Text_DarrinPostBattle: @ 0x0825A80B
	.string "うみに うかんで なみに ゆられてると\nふかふかの ベッドで ねてる みたいだよ!{EOS}"
	.if (. - Route107_Text_DarrinPostBattle) > 0x2a
	.error "Route107_Text_DarrinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DarrinPostBattle) < 0x2a
	.space 0x2a - (. - Route107_Text_DarrinPostBattle)
	.endif
	@ data/text/trainers.inc:434 Route107_Text_TonyIntro (+1 aliases)
	.globl Route107_Text_TonyIntro
Route107_Text_TonyIntro: @ 0x0825A835
	.string "うみは オレの にわ みたいな もの!\nしょうぶ しようぜ!{EOS}"
	.if (. - Route107_Text_TonyIntro) > 0x1f
	.error "Route107_Text_TonyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyIntro) < 0x1f
	.space 0x1f - (. - Route107_Text_TonyIntro)
	.endif
	@ data/text/trainers.inc:437 Route107_Text_TonyDefeated (+1 aliases)
	.globl Route107_Text_TonyDefeated
Route107_Text_TonyDefeated: @ 0x0825A854
	.string "ホームグラウンドで まけた……\nショック!{EOS}"
	.if (. - Route107_Text_TonyDefeated) > 0x16
	.error "Route107_Text_TonyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyDefeated) < 0x16
	.space 0x16 - (. - Route107_Text_TonyDefeated)
	.endif
	@ data/text/trainers.inc:440 Route107_Text_TonyPostBattle
	.globl Route107_Text_TonyPostBattle
Route107_Text_TonyPostBattle: @ 0x0825A86A
	.string "おおきな ユメを いっぱい つめてー\nでっかい うみを ひとおよぎー\pさぁて まだまだ およぐぞー!{EOS}"
	.if (. - Route107_Text_TonyPostBattle) > 0x33
	.error "Route107_Text_TonyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyPostBattle) < 0x33
	.space 0x33 - (. - Route107_Text_TonyPostBattle)
	.endif
	@ data/text/trainers.inc:443 Route107_Text_TonyRegister
	.globl Route107_Text_TonyRegister
Route107_Text_TonyRegister: @ 0x0825A89D
	.string "ショックを うけたオレを\nきみが わすれない ために……!{EOS}"
	.if (. - Route107_Text_TonyRegister) > 0x1e
	.error "Route107_Text_TonyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRegister) < 0x1e
	.space 0x1e - (. - Route107_Text_TonyRegister)
	.endif
	@ data/text/trainers.inc:446 Route107_Text_TonyRematchIntro (+1 aliases)
	.globl Route107_Text_TonyRematchIntro
Route107_Text_TonyRematchIntro: @ 0x0825A8BB
	.string "でっかい うみを およいでいたら\nポケモンが すっごく つよくなったぞー!{EOS}"
	.if (. - Route107_Text_TonyRematchIntro) > 0x26
	.error "Route107_Text_TonyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRematchIntro) < 0x26
	.space 0x26 - (. - Route107_Text_TonyRematchIntro)
	.endif
	@ data/text/trainers.inc:449 Route107_Text_TonyRematchDefeated (+1 aliases)
	.globl Route107_Text_TonyRematchDefeated
Route107_Text_TonyRematchDefeated: @ 0x0825A8E1
	.string "ショック!!\pポケモンは つよくなったが\nトレーナーの おれが よわいまま!?{EOS}"
	.if (. - Route107_Text_TonyRematchDefeated) > 0x28
	.error "Route107_Text_TonyRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRematchDefeated) < 0x28
	.space 0x28 - (. - Route107_Text_TonyRematchDefeated)
	.endif
	@ data/text/trainers.inc:452 Route107_Text_TonyRematchPostBattle
	.globl Route107_Text_TonyRematchPostBattle
Route107_Text_TonyRematchPostBattle: @ 0x0825A909
	.string "たたかいの なかで おぼえたことが\nトレーナーとしての つよさに つながる!\lでっかい うみが そう いっていたぞー!{EOS}"
	.if (. - Route107_Text_TonyRematchPostBattle) > 0x3c
	.error "Route107_Text_TonyRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_TonyRematchPostBattle) < 0x3c
	.space 0x3c - (. - Route107_Text_TonyRematchPostBattle)
	.endif
	@ data/text/trainers.inc:455 Route107_Text_DeniseIntro (+1 aliases)
	.globl Route107_Text_DeniseIntro
Route107_Text_DeniseIntro: @ 0x0825A945
	.string "ムロタウン っていう\nちいさな まちを しってる?{EOS}"
	.if (. - Route107_Text_DeniseIntro) > 0x1a
	.error "Route107_Text_DeniseIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DeniseIntro) < 0x1a
	.space 0x1a - (. - Route107_Text_DeniseIntro)
	.endif
	@ data/text/trainers.inc:458 Route107_Text_DeniseDefeated (+1 aliases)
	.globl Route107_Text_DeniseDefeated
Route107_Text_DeniseDefeated: @ 0x0825A95F
	.string "ヤダ もーっ!{EOS}"
	.if (. - Route107_Text_DeniseDefeated) > 0x8
	.error "Route107_Text_DeniseDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DeniseDefeated) < 0x8
	.space 0x8 - (. - Route107_Text_DeniseDefeated)
	.endif
	@ data/text/trainers.inc:461 Route107_Text_DenisePostBattle
	.globl Route107_Text_DenisePostBattle
Route107_Text_DenisePostBattle: @ 0x0825A967
	.string "ムロタウンの しゅうかいじょで\nふしぎな ことばが はやって いるのよ!{EOS}"
	.if (. - Route107_Text_DenisePostBattle) > 0x25
	.error "Route107_Text_DenisePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_DenisePostBattle) < 0x25
	.space 0x25 - (. - Route107_Text_DenisePostBattle)
	.endif
	@ data/text/trainers.inc:464 Route107_Text_BethIntro (+1 aliases)
	.globl Route107_Text_BethIntro
Route107_Text_BethIntro: @ 0x0825A98C
	.string "わたしと しょうぶが したいの?\nいいわ! あいてに なって あげる!{EOS}"
	.if (. - Route107_Text_BethIntro) > 0x24
	.error "Route107_Text_BethIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_BethIntro) < 0x24
	.space 0x24 - (. - Route107_Text_BethIntro)
	.endif
	@ data/text/trainers.inc:467 Route107_Text_BethDefeated (+1 aliases)
	.globl Route107_Text_BethDefeated
Route107_Text_BethDefeated: @ 0x0825A9B0
	.string "わたしじゃ あいてに ならなかったわ!{EOS}"
	.if (. - Route107_Text_BethDefeated) > 0x14
	.error "Route107_Text_BethDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_BethDefeated) < 0x14
	.space 0x14 - (. - Route107_Text_BethDefeated)
	.endif
	@ data/text/trainers.inc:470 Route107_Text_BethPostBattle
	.globl Route107_Text_BethPostBattle
Route107_Text_BethPostBattle: @ 0x0825A9C4
	.string "あなた まだまだ つよく なりそうね\nわたしも がんばろうっと!{EOS}"
	.if (. - Route107_Text_BethPostBattle) > 0x21
	.error "Route107_Text_BethPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_BethPostBattle) < 0x21
	.space 0x21 - (. - Route107_Text_BethPostBattle)
	.endif
	@ data/text/trainers.inc:473 Route107_Text_LisaIntro (+1 aliases)
	.globl Route107_Text_LisaIntro
Route107_Text_LisaIntro: @ 0x0825A9E5
	.string "ユミ『あたしたち きょうだい ふたりで\nしょうぶを させてもらうわ!{EOS}"
	.if (. - Route107_Text_LisaIntro) > 0x23
	.error "Route107_Text_LisaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaIntro) < 0x23
	.space 0x23 - (. - Route107_Text_LisaIntro)
	.endif
	@ data/text/trainers.inc:476 Route107_Text_LisaDefeated (+1 aliases)
	.globl Route107_Text_LisaDefeated
Route107_Text_LisaDefeated: @ 0x0825AA08
	.string "ユミ『すごいわ\nつよさの レベルが ちがうのね{EOS}"
	.if (. - Route107_Text_LisaDefeated) > 0x18
	.error "Route107_Text_LisaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaDefeated) < 0x18
	.space 0x18 - (. - Route107_Text_LisaDefeated)
	.endif
	@ data/text/trainers.inc:479 Route107_Text_LisaPostBattle
	.globl Route107_Text_LisaPostBattle
Route107_Text_LisaPostBattle: @ 0x0825AA20
	.string "ユミ『あなたは いっしょに\nうみに あそびに いくような\lおともだち いるのかしら?{EOS}"
	.if (. - Route107_Text_LisaPostBattle) > 0x2b
	.error "Route107_Text_LisaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaPostBattle) < 0x2b
	.space 0x2b - (. - Route107_Text_LisaPostBattle)
	.endif
	@ data/text/trainers.inc:482 Route107_Text_LisaNotEnoughPokemon (+1 aliases)
	.globl Route107_Text_LisaNotEnoughPokemon
Route107_Text_LisaNotEnoughPokemon: @ 0x0825AA4B
	.string "ユミ『アタシたちと たたかうなら\nポケモン もっと つれてきなさいな{EOS}"
	.if (. - Route107_Text_LisaNotEnoughPokemon) > 0x23
	.error "Route107_Text_LisaNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_LisaNotEnoughPokemon) < 0x23
	.space 0x23 - (. - Route107_Text_LisaNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:485 Route107_Text_RayIntro (+1 aliases)
	.globl Route107_Text_RayIntro
Route107_Text_RayIntro: @ 0x0825AA6E
	.string "シン『いつも きょうだいで\nポケモンしょうぶ してるんだ!\p……いっつも おれが まけるけど\n2たい2なら きみに かてるよ!{EOS}"
	.if (. - Route107_Text_RayIntro) > 0x40
	.error "Route107_Text_RayIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayIntro) < 0x40
	.space 0x40 - (. - Route107_Text_RayIntro)
	.endif
	@ data/text/trainers.inc:488 Route107_Text_RayDefeated (+1 aliases)
	.globl Route107_Text_RayDefeated
Route107_Text_RayDefeated: @ 0x0825AAAE
	.string "シン『ひゃー\nつよさの レベルが ちがいすぎるや{EOS}"
	.if (. - Route107_Text_RayDefeated) > 0x19
	.error "Route107_Text_RayDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayDefeated) < 0x19
	.space 0x19 - (. - Route107_Text_RayDefeated)
	.endif
	@ data/text/trainers.inc:491 Route107_Text_RayPostBattle
	.globl Route107_Text_RayPostBattle
Route107_Text_RayPostBattle: @ 0x0825AAC7
	.string "シン『おれの ポケモン\nねえちゃんから もらって そだてた\lだいじな あいぼう なんだぜ!{EOS}"
	.if (. - Route107_Text_RayPostBattle) > 0x2e
	.error "Route107_Text_RayPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayPostBattle) < 0x2e
	.space 0x2e - (. - Route107_Text_RayPostBattle)
	.endif
	@ data/text/trainers.inc:494 Route107_Text_RayNotEnoughPokemon (+1 aliases)
	.globl Route107_Text_RayNotEnoughPokemon
Route107_Text_RayNotEnoughPokemon: @ 0x0825AAF5
	.string "シン『オレらと たたかうなら\nもっと ポケモン つれてきてよ!{EOS}"
	.if (. - Route107_Text_RayNotEnoughPokemon) > 0x20
	.error "Route107_Text_RayNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_RayNotEnoughPokemon) < 0x20
	.space 0x20 - (. - Route107_Text_RayNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:497 Route107_Text_CamronIntro (+1 aliases)
	.globl Route107_Text_CamronIntro
Route107_Text_CamronIntro: @ 0x0825AB15
	.string "トライアスロンの とちゅう だが\nぜんぜん つかれて いないぜ!{EOS}"
	.if (. - Route107_Text_CamronIntro) > 0x21
	.error "Route107_Text_CamronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_CamronIntro) < 0x21
	.space 0x21 - (. - Route107_Text_CamronIntro)
	.endif
	@ data/text/trainers.inc:500 Route107_Text_CamronDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route107_Text_CamronDefeated
Route107_Text_CamronDefeated: @ 0x0825AB36
	.string "いまので つかれて しまった{EOS}"
	.if (. - Route107_Text_CamronDefeated) != 0xf
	.error "Route107_Text_CamronDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:503 Route107_Text_CamronPostBattle
	.globl Route107_Text_CamronPostBattle
Route107_Text_CamronPostBattle: @ 0x0825AB45
	.string "こ このあと まだ\nすいえい ランニングが のこっているぜ\lだいじょうぶか おれ……?{EOS}"
	.if (. - Route107_Text_CamronPostBattle) > 0x2c
	.error "Route107_Text_CamronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route107_Text_CamronPostBattle) < 0x2c
	.space 0x2c - (. - Route107_Text_CamronPostBattle)
	.endif
	@ data/text/trainers.inc:506 Route108_Text_JeromeIntro (+1 aliases)
	.globl Route108_Text_JeromeIntro
Route108_Text_JeromeIntro: @ 0x0825AB71
	.string "オレの ユメは せかいに ある\n7つのうみ すべてで およぐこと!{EOS}"
	.if (. - Route108_Text_JeromeIntro) > 0x22
	.error "Route108_Text_JeromeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_JeromeIntro) < 0x22
	.space 0x22 - (. - Route108_Text_JeromeIntro)
	.endif
	@ data/text/trainers.inc:509 Route108_Text_JeromeDefeated (+1 aliases)
	.globl Route108_Text_JeromeDefeated
Route108_Text_JeromeDefeated: @ 0x0825AB93
	.string "これじゃ\n7つのうみ すべてで およげない……{EOS}"
	.if (. - Route108_Text_JeromeDefeated) > 0x18
	.error "Route108_Text_JeromeDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_JeromeDefeated) < 0x18
	.space 0x18 - (. - Route108_Text_JeromeDefeated)
	.endif
	@ data/text/trainers.inc:512 Route108_Text_JeromePostBattle
	.globl Route108_Text_JeromePostBattle
Route108_Text_JeromePostBattle: @ 0x0825ABAB
	.string "うみの ポケモンと あそぶことも\nおよいでいる ときの たのしみだね!{EOS}"
	.if (. - Route108_Text_JeromePostBattle) > 0x24
	.error "Route108_Text_JeromePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_JeromePostBattle) < 0x24
	.space 0x24 - (. - Route108_Text_JeromePostBattle)
	.endif
	@ data/text/trainers.inc:515 Route108_Text_MatthewIntro (+1 aliases)
	.globl Route108_Text_MatthewIntro
Route108_Text_MatthewIntro: @ 0x0825ABCF
	.string "なあ キミ!\nキミも すてられた ふねに いくのかい?{EOS}"
	.if (. - Route108_Text_MatthewIntro) > 0x1c
	.error "Route108_Text_MatthewIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MatthewIntro) < 0x1c
	.space 0x1c - (. - Route108_Text_MatthewIntro)
	.endif
	@ data/text/trainers.inc:518 Route108_Text_MatthewDefeated (+1 aliases)
	.globl Route108_Text_MatthewDefeated
Route108_Text_MatthewDefeated: @ 0x0825ABEB
	.string "ああ ぼくが しずむ……\nぶくぶく……{EOS}"
	.if (. - Route108_Text_MatthewDefeated) > 0x14
	.error "Route108_Text_MatthewDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MatthewDefeated) < 0x14
	.space 0x14 - (. - Route108_Text_MatthewDefeated)
	.endif
	@ data/text/trainers.inc:521 Route108_Text_MatthewPostBattle
	.globl Route108_Text_MatthewPostBattle
Route108_Text_MatthewPostBattle: @ 0x0825ABFF
	.string "すてられぶねの なかに\nはいっていく やつらが いるんだよ!{EOS}"
	.if (. - Route108_Text_MatthewPostBattle) > 0x1f
	.error "Route108_Text_MatthewPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MatthewPostBattle) < 0x1f
	.space 0x1f - (. - Route108_Text_MatthewPostBattle)
	.endif
	@ data/text/trainers.inc:524 Route108_Text_TaraIntro (+1 aliases)
	.globl Route108_Text_TaraIntro
Route108_Text_TaraIntro: @ 0x0825AC1E
	.string "ウソつきな カレに いわれたのよ\nビキニが にあってて カワイイって……{EOS}"
	.if (. - Route108_Text_TaraIntro) > 0x25
	.error "Route108_Text_TaraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_TaraIntro) < 0x25
	.space 0x25 - (. - Route108_Text_TaraIntro)
	.endif
	@ data/text/trainers.inc:527 Route108_Text_TaraDefeated (+1 aliases)
	.globl Route108_Text_TaraDefeated
Route108_Text_TaraDefeated: @ 0x0825AC43
	.string "いやん まけたわーっ!{EOS}"
	.if (. - Route108_Text_TaraDefeated) > 0xc
	.error "Route108_Text_TaraDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_TaraDefeated) < 0xc
	.space 0xc - (. - Route108_Text_TaraDefeated)
	.endif
	@ data/text/trainers.inc:530 Route108_Text_TaraPostBattle
	.globl Route108_Text_TaraPostBattle
Route108_Text_TaraPostBattle: @ 0x0825AC4F
	.string "ウソでも いいから カワイイって いわれたい\nふくざつな おんなごころ……{EOS}"
	.if (. - Route108_Text_TaraPostBattle) > 0x26
	.error "Route108_Text_TaraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_TaraPostBattle) < 0x26
	.space 0x26 - (. - Route108_Text_TaraPostBattle)
	.endif
	@ data/text/trainers.inc:533 Route108_Text_MissyIntro (+1 aliases)
	.globl Route108_Text_MissyIntro
Route108_Text_MissyIntro: @ 0x0825AC75
	.string "うみって だいすき!\nおよいでいれば イヤなことも わすれるわ!{EOS}"
	.if (. - Route108_Text_MissyIntro) > 0x21
	.error "Route108_Text_MissyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MissyIntro) < 0x21
	.space 0x21 - (. - Route108_Text_MissyIntro)
	.endif
	@ data/text/trainers.inc:536 Route108_Text_MissyDefeated (+1 aliases)
	.globl Route108_Text_MissyDefeated
Route108_Text_MissyDefeated: @ 0x0825AC96
	.string "しょうぶに まけると\nストレスが たまるーっ!{EOS}"
	.if (. - Route108_Text_MissyDefeated) > 0x18
	.error "Route108_Text_MissyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MissyDefeated) < 0x18
	.space 0x18 - (. - Route108_Text_MissyDefeated)
	.endif
	@ data/text/trainers.inc:539 Route108_Text_MissyPostBattle
	.globl Route108_Text_MissyPostBattle
Route108_Text_MissyPostBattle: @ 0x0825ACAE
	.string "ストレスは およいで はっさん!\nけんこうてき よねー!{EOS}"
	.if (. - Route108_Text_MissyPostBattle) > 0x1d
	.error "Route108_Text_MissyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_MissyPostBattle) < 0x1d
	.space 0x1d - (. - Route108_Text_MissyPostBattle)
	.endif
	@ data/text/trainers.inc:542 Route108_Text_CoryIntro (+1 aliases)
	.globl Route108_Text_CoryIntro
Route108_Text_CoryIntro: @ 0x0825ACCB
	.string "みずポケモンが だいすきだー!\nほかの ポケモンも だいすきだー!{EOS}"
	.if (. - Route108_Text_CoryIntro) > 0x22
	.error "Route108_Text_CoryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryIntro) < 0x22
	.space 0x22 - (. - Route108_Text_CoryIntro)
	.endif
	@ data/text/trainers.inc:545 Route108_Text_CoryDefeated (+1 aliases)
	.globl Route108_Text_CoryDefeated
Route108_Text_CoryDefeated: @ 0x0825ACED
	.string "わー まけたー!\nわーわー!{EOS}"
	.if (. - Route108_Text_CoryDefeated) > 0xf
	.error "Route108_Text_CoryDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryDefeated) < 0xf
	.space 0xf - (. - Route108_Text_CoryDefeated)
	.endif
	@ data/text/trainers.inc:548 Route108_Text_CoryPostBattle
	.globl Route108_Text_CoryPostBattle
Route108_Text_CoryPostBattle: @ 0x0825ACFC
	.string "おおごえで さけべば\nスッキリ するなあーっ!{EOS}"
	.if (. - Route108_Text_CoryPostBattle) > 0x18
	.error "Route108_Text_CoryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryPostBattle) < 0x18
	.space 0x18 - (. - Route108_Text_CoryPostBattle)
	.endif
	@ data/text/trainers.inc:551 Route108_Text_CoryRegister
	.globl Route108_Text_CoryRegister
Route108_Text_CoryRegister: @ 0x0825AD14
	.string "つよい トレーナーも だいすきだー!\nポケナビの とうろくを してくれー!{EOS}"
	.if (. - Route108_Text_CoryRegister) > 0x26
	.error "Route108_Text_CoryRegister may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRegister) < 0x26
	.space 0x26 - (. - Route108_Text_CoryRegister)
	.endif
	@ data/text/trainers.inc:554 Route108_Text_CoryRematchIntro (+1 aliases)
	.globl Route108_Text_CoryRematchIntro
Route108_Text_CoryRematchIntro: @ 0x0825AD3A
	.string "かっても まけても\nうみ での しょうぶが だいすきだー!{EOS}"
	.if (. - Route108_Text_CoryRematchIntro) > 0x1e
	.error "Route108_Text_CoryRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRematchIntro) < 0x1e
	.space 0x1e - (. - Route108_Text_CoryRematchIntro)
	.endif
	@ data/text/trainers.inc:557 Route108_Text_CoryRematchDefeated (+1 aliases)
	.globl Route108_Text_CoryRematchDefeated
Route108_Text_CoryRematchDefeated: @ 0x0825AD58
	.string "わーっ また まけた!\nわー わー!{EOS}"
	.if (. - Route108_Text_CoryRematchDefeated) > 0x13
	.error "Route108_Text_CoryRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRematchDefeated) < 0x13
	.space 0x13 - (. - Route108_Text_CoryRematchDefeated)
	.endif
	@ data/text/trainers.inc:560 Route108_Text_CoryRematchPostBattle
	.globl Route108_Text_CoryRematchPostBattle
Route108_Text_CoryRematchPostBattle: @ 0x0825AD6B
	.string "きみも いきづまった ときは\nなにかを うみに むかって さけべーっ!{EOS}"
	.if (. - Route108_Text_CoryRematchPostBattle) > 0x24
	.error "Route108_Text_CoryRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CoryRematchPostBattle) < 0x24
	.space 0x24 - (. - Route108_Text_CoryRematchPostBattle)
	.endif
	@ data/text/trainers.inc:563 Route108_Text_CarolinaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route108_Text_CarolinaIntro
Route108_Text_CarolinaIntro: @ 0x0825AD8F
	.string "じまんの ポケモンたちで\nスピーディに たたかうわよ!{EOS}"
	.if (. - Route108_Text_CarolinaIntro) != 0x1c
	.error "Route108_Text_CarolinaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:566 Route108_Text_CarolinaDefeated (+1 aliases)
	.globl Route108_Text_CarolinaDefeated
Route108_Text_CarolinaDefeated: @ 0x0825ADAB
	.string "あら かわいくないわね!{EOS}"
	.if (. - Route108_Text_CarolinaDefeated) > 0xd
	.error "Route108_Text_CarolinaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CarolinaDefeated) < 0xd
	.space 0xd - (. - Route108_Text_CarolinaDefeated)
	.endif
	@ data/text/trainers.inc:569 Route108_Text_CarolinaPostBattle
	.globl Route108_Text_CarolinaPostBattle
Route108_Text_CarolinaPostBattle: @ 0x0825ADB8
	.string "せっかくの うみ だし\nピンクの フリフリの ビキニも\lちょっと きてみたい……{EOS}"
	.if (. - Route108_Text_CarolinaPostBattle) > 0x29
	.error "Route108_Text_CarolinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route108_Text_CarolinaPostBattle) < 0x29
	.space 0x29 - (. - Route108_Text_CarolinaPostBattle)
	.endif
	@ data/text/trainers.inc:572 Route109_Text_DavidIntro (+1 aliases)
	.globl Route109_Text_DavidIntro
Route109_Text_DavidIntro: @ 0x0825ADE1
	.string "うりゃーっ!!\nみごとに われた ふっきんを みろーっ!!{EOS}"
	.if (. - Route109_Text_DavidIntro) > 0x1e
	.error "Route109_Text_DavidIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_DavidIntro) < 0x1e
	.space 0x1e - (. - Route109_Text_DavidIntro)
	.endif
	@ data/text/trainers.inc:575 Route109_Text_DavidDefeated (+1 aliases)
	.globl Route109_Text_DavidDefeated
Route109_Text_DavidDefeated: @ 0x0825ADFF
	.string "うりゃーっ!!\nまけたーっ!!{EOS}"
	.if (. - Route109_Text_DavidDefeated) > 0x10
	.error "Route109_Text_DavidDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_DavidDefeated) < 0x10
	.space 0x10 - (. - Route109_Text_DavidDefeated)
	.endif
	@ data/text/trainers.inc:578 Route109_Text_DavidPostBattle
	.globl Route109_Text_DavidPostBattle
Route109_Text_DavidPostBattle: @ 0x0825AE0F
	.string "うりゃーっ!!\pふっきんと ポケモンの しょうぶは\nかんけい ないぞーっ!!{EOS}"
	.if (. - Route109_Text_DavidPostBattle) > 0x27
	.error "Route109_Text_DavidPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_DavidPostBattle) < 0x27
	.space 0x27 - (. - Route109_Text_DavidPostBattle)
	.endif
	@ data/text/trainers.inc:581 Route109_Text_AliceIntro (+1 aliases)
	.globl Route109_Text_AliceIntro
Route109_Text_AliceIntro: @ 0x0825AE36
	.string "ひやけ たいさく\nあなたは してる?{EOS}"
	.if (. - Route109_Text_AliceIntro) > 0x13
	.error "Route109_Text_AliceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AliceIntro) < 0x13
	.space 0x13 - (. - Route109_Text_AliceIntro)
	.endif
	@ data/text/trainers.inc:584 Route109_Text_AliceDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route109_Text_AliceDefeated
Route109_Text_AliceDefeated: @ 0x0825AE49
	.string "あちちちちっ!{EOS}"
	.if (. - Route109_Text_AliceDefeated) != 0x8
	.error "Route109_Text_AliceDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:587 Route109_Text_AlicePostBattle
	.globl Route109_Text_AlicePostBattle
Route109_Text_AlicePostBattle: @ 0x0825AE51
	.string "ほっぺの あたりが いちばん\nひやけ しやすい ばしょ なのよ!{EOS}"
	.if (. - Route109_Text_AlicePostBattle) > 0x21
	.error "Route109_Text_AlicePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AlicePostBattle) < 0x21
	.space 0x21 - (. - Route109_Text_AlicePostBattle)
	.endif
	@ data/text/trainers.inc:590 Route109_Text_HueyIntro (+1 aliases)
	.globl Route109_Text_HueyIntro
Route109_Text_HueyIntro: @ 0x0825AE72
	.string "せかいじゅうの みなとを おとずれたが\nカイナは さいこーの みなとまち だぜ!{EOS}"
	.if (. - Route109_Text_HueyIntro) > 0x29
	.error "Route109_Text_HueyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HueyIntro) < 0x29
	.space 0x29 - (. - Route109_Text_HueyIntro)
	.endif
	@ data/text/trainers.inc:593 Route109_Text_HueyDefeated (+1 aliases)
	.globl Route109_Text_HueyDefeated
Route109_Text_HueyDefeated: @ 0x0825AE9B
	.string "あんた さいこー だぜ……{EOS}"
	.if (. - Route109_Text_HueyDefeated) > 0xe
	.error "Route109_Text_HueyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HueyDefeated) < 0xe
	.space 0xe - (. - Route109_Text_HueyDefeated)
	.endif
	@ data/text/trainers.inc:596 Route109_Text_HueyPostBattle
	.globl Route109_Text_HueyPostBattle
Route109_Text_HueyPostBattle: @ 0x0825AEA9
	.string "さいこーの みなとまちには\nさいこーの トレーナーが いたぜ……{EOS}"
	.if (. - Route109_Text_HueyPostBattle) > 0x21
	.error "Route109_Text_HueyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HueyPostBattle) < 0x21
	.space 0x21 - (. - Route109_Text_HueyPostBattle)
	.endif
	@ data/text/trainers.inc:599 Route109_Text_EdmondIntro (+1 aliases)
	.globl Route109_Text_EdmondIntro
Route109_Text_EdmondIntro: @ 0x0825AECA
	.string "ううう……\nしょうぶ するの? オレと?{EOS}"
	.if (. - Route109_Text_EdmondIntro) > 0x15
	.error "Route109_Text_EdmondIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_EdmondIntro) < 0x15
	.space 0x15 - (. - Route109_Text_EdmondIntro)
	.endif
	@ data/text/trainers.inc:602 Route109_Text_EdmondDefeated (+1 aliases)
	.globl Route109_Text_EdmondDefeated
Route109_Text_EdmondDefeated: @ 0x0825AEDF
	.string "げろげろ……{EOS}"
	.if (. - Route109_Text_EdmondDefeated) > 0x7
	.error "Route109_Text_EdmondDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_EdmondDefeated) < 0x7
	.space 0x7 - (. - Route109_Text_EdmondDefeated)
	.endif
	@ data/text/trainers.inc:605 Route109_Text_EdmondPostBattle
	.globl Route109_Text_EdmondPostBattle
Route109_Text_EdmondPostBattle: @ 0x0825AEE6
	.string "いつもは もっと つよいんだぞ!\nふなよいで ちょうしが わるいだけだ!\pふなのり だけど……{EOS}"
	.if (. - Route109_Text_EdmondPostBattle) > 0x30
	.error "Route109_Text_EdmondPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_EdmondPostBattle) < 0x30
	.space 0x30 - (. - Route109_Text_EdmondPostBattle)
	.endif
	@ data/text/trainers.inc:608 Route109_Text_RickyIntro (+1 aliases)
	.globl Route109_Text_RickyIntro
Route109_Text_RickyIntro: @ 0x0825AF16
	.string "のどが かわいたよ……\nうみのいえで サイコソーダ のみたいな……{EOS}"
	.if (. - Route109_Text_RickyIntro) > 0x22
	.error "Route109_Text_RickyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyIntro) < 0x22
	.space 0x22 - (. - Route109_Text_RickyIntro)
	.endif
	@ data/text/trainers.inc:611 Route109_Text_RickyDefeated (+1 aliases)
	.globl Route109_Text_RickyDefeated
Route109_Text_RickyDefeated: @ 0x0825AF38
	.string "うーん……{EOS}"
	.if (. - Route109_Text_RickyDefeated) > 0x6
	.error "Route109_Text_RickyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyDefeated) < 0x6
	.space 0x6 - (. - Route109_Text_RickyDefeated)
	.endif
	@ data/text/trainers.inc:614 Route109_Text_RickyPostBattle
	.globl Route109_Text_RickyPostBattle
Route109_Text_RickyPostBattle: @ 0x0825AF3E
	.string "おなかも へってきた……\nうきわが おっきな ドーナッツに みえるよ{EOS}"
	.if (. - Route109_Text_RickyPostBattle) > 0x23
	.error "Route109_Text_RickyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyPostBattle) < 0x23
	.space 0x23 - (. - Route109_Text_RickyPostBattle)
	.endif
	@ data/text/trainers.inc:617 Route109_Text_RickyRegister
	.globl Route109_Text_RickyRegister
Route109_Text_RickyRegister: @ 0x0825AF61
	.string "こんど のどが かわいて ないときに\nもういっかい しょうぶ してくれる?{EOS}"
	.if (. - Route109_Text_RickyRegister) > 0x26
	.error "Route109_Text_RickyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyRegister) < 0x26
	.space 0x26 - (. - Route109_Text_RickyRegister)
	.endif
	@ data/text/trainers.inc:620 Route109_Text_RickyRematchIntro (+1 aliases)
	.globl Route109_Text_RickyRematchIntro
Route109_Text_RickyRematchIntro: @ 0x0825AF87
	.string "おなか へってるけど\nしょうぶ するなら げんき だよ!{EOS}"
	.if (. - Route109_Text_RickyRematchIntro) > 0x1d
	.error "Route109_Text_RickyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyRematchIntro) < 0x1d
	.space 0x1d - (. - Route109_Text_RickyRematchIntro)
	.endif
	@ data/text/trainers.inc:623 Route109_Text_RickyRematchDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route109_Text_RickyRematchDefeated
Route109_Text_RickyRematchDefeated: @ 0x0825AFA4
	.string "まけた……\nおなかが へってるからだ{EOS}"
	.if (. - Route109_Text_RickyRematchDefeated) != 0x13
	.error "Route109_Text_RickyRematchDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:626 Route109_Text_RickyRematchPostBattle
	.globl Route109_Text_RickyRematchPostBattle
Route109_Text_RickyRematchPostBattle: @ 0x0825AFB7
	.string "すなはまで たべると\nなんでも おいしく おもえるよね{EOS}"
	.if (. - Route109_Text_RickyRematchPostBattle) > 0x1c
	.error "Route109_Text_RickyRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_RickyRematchPostBattle) < 0x1c
	.space 0x1c - (. - Route109_Text_RickyRematchPostBattle)
	.endif
	@ data/text/trainers.inc:629 Route109_Text_LolaIntro (+1 aliases)
	.globl Route109_Text_LolaIntro
Route109_Text_LolaIntro: @ 0x0825AFD3
	.string "ビーチパラソルって\nおおきな おはな みたいよねー!{EOS}"
	.if (. - Route109_Text_LolaIntro) > 0x1b
	.error "Route109_Text_LolaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaIntro) < 0x1b
	.space 0x1b - (. - Route109_Text_LolaIntro)
	.endif
	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl Route109_Text_LolaDefeated_Copy_Rom_25AFEE
Route109_Text_LolaDefeated_Copy_Rom_25AFEE: @ 0x0825AFEE
	.string "ママーっ!{EOS}"
	.if (. - Route109_Text_LolaDefeated_Copy_Rom_25AFEE) > 0x6
	.error "Route109_Text_LolaDefeated_Copy_Rom_25AFEE may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaDefeated_Copy_Rom_25AFEE) < 0x6
	.space 0x6 - (. - Route109_Text_LolaDefeated_Copy_Rom_25AFEE)
	.endif
	@ data/text/trainers.inc:635 Route109_Text_LolaPostBattle
	.globl Route109_Text_LolaPostBattle
Route109_Text_LolaPostBattle: @ 0x0825AFF4
	.string "おそらの うえから すなはまを みたら\nおはなばたけ みたいに みえるのよ!{EOS}"
	.if (. - Route109_Text_LolaPostBattle) > 0x27
	.error "Route109_Text_LolaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaPostBattle) < 0x27
	.space 0x27 - (. - Route109_Text_LolaPostBattle)
	.endif
	@ data/text/trainers.inc:638 Route109_Text_LolaRegister
	.globl Route109_Text_LolaRegister
Route109_Text_LolaRegister: @ 0x0825B01B
	.string "わたし だったら\nまいにち ここに きているよ!{EOS}"
	.if (. - Route109_Text_LolaRegister) > 0x19
	.error "Route109_Text_LolaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaRegister) < 0x19
	.space 0x19 - (. - Route109_Text_LolaRegister)
	.endif
	@ data/text/trainers.inc:641 Route109_Text_LolaRematchIntro (+1 aliases)
	.globl Route109_Text_LolaRematchIntro
Route109_Text_LolaRematchIntro: @ 0x0825B034
	.string "もう あなたには まけません!\nそのために うきわ してるんだから!{EOS}"
	.if (. - Route109_Text_LolaRematchIntro) > 0x23
	.error "Route109_Text_LolaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaRematchIntro) < 0x23
	.space 0x23 - (. - Route109_Text_LolaRematchIntro)
	.endif
	@ data/text/trainers.inc:632 Route109_Text_LolaDefeated (+2 aliases)
	.globl Route109_Text_LolaDefeated_Copy_Rom_25B057
Route109_Text_LolaDefeated_Copy_Rom_25B057: @ 0x0825B057
	.string "ママーっ!{EOS}"
	.if (. - Route109_Text_LolaDefeated_Copy_Rom_25B057) > 0x6
	.error "Route109_Text_LolaDefeated_Copy_Rom_25B057 may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaDefeated_Copy_Rom_25B057) < 0x6
	.space 0x6 - (. - Route109_Text_LolaDefeated_Copy_Rom_25B057)
	.endif
	@ data/text/trainers.inc:647 Route109_Text_LolaRematchPostBattle
	.globl Route109_Text_LolaRematchPostBattle
Route109_Text_LolaRematchPostBattle: @ 0x0825B05D
	.string "うきわ もってると あたしと ポケモンの\nかわいさが ぐぐーんと アップするの!{EOS}"
	.if (. - Route109_Text_LolaRematchPostBattle) > 0x29
	.error "Route109_Text_LolaRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_LolaRematchPostBattle) < 0x29
	.space 0x29 - (. - Route109_Text_LolaRematchPostBattle)
	.endif
	@ data/text/trainers.inc:650 Route109_Text_AustinaIntro (+1 aliases)
	.globl Route109_Text_AustinaIntro
Route109_Text_AustinaIntro: @ 0x0825B086
	.string "うきわが ないと およげないけど\nポケモンなら だれにも まけないよ!{EOS}"
	.if (. - Route109_Text_AustinaIntro) > 0x24
	.error "Route109_Text_AustinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AustinaIntro) < 0x24
	.space 0x24 - (. - Route109_Text_AustinaIntro)
	.endif
	@ data/text/trainers.inc:653 Route109_Text_AustinaDefeated (+1 aliases)
	.globl Route109_Text_AustinaDefeated
Route109_Text_AustinaDefeated: @ 0x0825B0AA
	.string "うきわが あるから まけちゃったのかな?{EOS}"
	.if (. - Route109_Text_AustinaDefeated) > 0x15
	.error "Route109_Text_AustinaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AustinaDefeated) < 0x15
	.space 0x15 - (. - Route109_Text_AustinaDefeated)
	.endif
	@ data/text/trainers.inc:656 Route109_Text_AustinaPostBattle
	.globl Route109_Text_AustinaPostBattle
Route109_Text_AustinaPostBattle: @ 0x0825B0BF
	.string "あたしの うきわ\nオシャレだから てばなせないの{EOS}"
	.if (. - Route109_Text_AustinaPostBattle) > 0x19
	.error "Route109_Text_AustinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_AustinaPostBattle) < 0x19
	.space 0x19 - (. - Route109_Text_AustinaPostBattle)
	.endif
	@ data/text/trainers.inc:659 Route109_Text_GwenIntro (+1 aliases)
	.globl Route109_Text_GwenIntro
Route109_Text_GwenIntro: @ 0x0825B0D8
	.string "そこの トレーナーさん\nあたしと たたかう でちゅ!{EOS}"
	.if (. - Route109_Text_GwenIntro) > 0x1b
	.error "Route109_Text_GwenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_GwenIntro) < 0x1b
	.space 0x1b - (. - Route109_Text_GwenIntro)
	.endif
	@ data/text/trainers.inc:662 Route109_Text_GwenDefeated (+1 aliases)
	.globl Route109_Text_GwenDefeated
Route109_Text_GwenDefeated: @ 0x0825B0F3
	.string "つよいでちゅね……{EOS}"
	.if (. - Route109_Text_GwenDefeated) > 0xa
	.error "Route109_Text_GwenDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_GwenDefeated) < 0xa
	.space 0xa - (. - Route109_Text_GwenDefeated)
	.endif
	@ data/text/trainers.inc:665 Route109_Text_GwenPostBattle
	.globl Route109_Text_GwenPostBattle
Route109_Text_GwenPostBattle: @ 0x0825B0FD
	.string "どうしたら そんなに\nつよくなれる でちゅか……?{EOS}"
	.if (. - Route109_Text_GwenPostBattle) > 0x1a
	.error "Route109_Text_GwenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_GwenPostBattle) < 0x1a
	.space 0x1a - (. - Route109_Text_GwenPostBattle)
	.endif
	@ data/text/trainers.inc:668 Route109_Text_CarterIntro (+1 aliases)
	.globl Route109_Text_CarterIntro
Route109_Text_CarterIntro: @ 0x0825B117
	.string "わはは!\nおじさん おおもの つっちゃうぞ!{EOS}"
	.if (. - Route109_Text_CarterIntro) > 0x17
	.error "Route109_Text_CarterIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_CarterIntro) < 0x17
	.space 0x17 - (. - Route109_Text_CarterIntro)
	.endif
	@ data/text/trainers.inc:671 Route109_Text_CarterDefeated (+1 aliases)
	.globl Route109_Text_CarterDefeated
Route109_Text_CarterDefeated: @ 0x0825B12E
	.string "おじさん まけちゃったな……{EOS}"
	.if (. - Route109_Text_CarterDefeated) > 0xf
	.error "Route109_Text_CarterDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_CarterDefeated) < 0xf
	.space 0xf - (. - Route109_Text_CarterDefeated)
	.endif
	@ data/text/trainers.inc:674 Route109_Text_CarterPostBattle
	.globl Route109_Text_CarterPostBattle
Route109_Text_CarterPostBattle: @ 0x0825B13D
	.string "たしかに きみは おおもの だな!\nいや きっと おおものに なるぞ!{EOS}"
	.if (. - Route109_Text_CarterPostBattle) > 0x24
	.error "Route109_Text_CarterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_CarterPostBattle) < 0x24
	.space 0x24 - (. - Route109_Text_CarterPostBattle)
	.endif
	@ data/text/trainers.inc:677 Route109_Text_PaulIntro (+1 aliases)
	.globl Route109_Text_PaulIntro
Route109_Text_PaulIntro: @ 0x0825B161
	.string "リキ『やあ こまったなあ\pふたりっきりの じかん\nじゃま して ほしくないなあ{EOS}"
	.if (. - Route109_Text_PaulIntro) > 0x28
	.error "Route109_Text_PaulIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulIntro) < 0x28
	.space 0x28 - (. - Route109_Text_PaulIntro)
	.endif
	@ data/text/trainers.inc:680 Route109_Text_PaulDefeated (+1 aliases)
	.globl Route109_Text_PaulDefeated
Route109_Text_PaulDefeated: @ 0x0825B189
	.string "リキ『やあ まいったな……{EOS}"
	.if (. - Route109_Text_PaulDefeated) > 0xe
	.error "Route109_Text_PaulDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulDefeated) < 0xe
	.space 0xe - (. - Route109_Text_PaulDefeated)
	.endif
	@ data/text/trainers.inc:683 Route109_Text_PaulPostBattle
	.globl Route109_Text_PaulPostBattle
Route109_Text_PaulPostBattle: @ 0x0825B197
	.string "リキ『やあ ぼくたちが ここに いること\nだれにも いわないで くれよ!\lふたりっきりの せかい なんだからさ!{EOS}"
	.if (. - Route109_Text_PaulPostBattle) > 0x39
	.error "Route109_Text_PaulPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulPostBattle) < 0x39
	.space 0x39 - (. - Route109_Text_PaulPostBattle)
	.endif
	@ data/text/trainers.inc:686 Route109_Text_PaulNotEnoughPokemon (+1 aliases)
	.globl Route109_Text_PaulNotEnoughPokemon
Route109_Text_PaulNotEnoughPokemon: @ 0x0825B1D0
	.string "リキ『ぼくたち ラブラブ だからね\nぼくたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!{EOS}"
	.if (. - Route109_Text_PaulNotEnoughPokemon) > 0x32
	.error "Route109_Text_PaulNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_PaulNotEnoughPokemon) < 0x32
	.space 0x32 - (. - Route109_Text_PaulNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:689 Route109_Text_MelIntro (+1 aliases)
	.globl Route109_Text_MelIntro
Route109_Text_MelIntro: @ 0x0825B202
	.string "シキ『あたしたちが ラブラブだから\nホウエンは あっついのよお!{EOS}"
	.if (. - Route109_Text_MelIntro) > 0x21
	.error "Route109_Text_MelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelIntro) < 0x21
	.space 0x21 - (. - Route109_Text_MelIntro)
	.endif
	@ data/text/trainers.inc:692 Route109_Text_MelDefeated (+1 aliases)
	.globl Route109_Text_MelDefeated
Route109_Text_MelDefeated: @ 0x0825B223
	.string "シキ『あたしの せいで まけたんだわ……\nこんなんじゃ リキに きらわれちゃう!{EOS}"
	.if (. - Route109_Text_MelDefeated) > 0x29
	.error "Route109_Text_MelDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelDefeated) < 0x29
	.space 0x29 - (. - Route109_Text_MelDefeated)
	.endif
	@ data/text/trainers.inc:695 Route109_Text_MelPostBattle
	.globl Route109_Text_MelPostBattle
Route109_Text_MelPostBattle: @ 0x0825B24C
	.string "シキ『ねえ リキ\nあたしのこと おこってない?\lおこっちゃ いやよ{EOS}"
	.if (. - Route109_Text_MelPostBattle) > 0x22
	.error "Route109_Text_MelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelPostBattle) < 0x22
	.space 0x22 - (. - Route109_Text_MelPostBattle)
	.endif
	@ data/text/trainers.inc:698 Route109_Text_MelNotEnoughPokemon (+1 aliases)
	.globl Route109_Text_MelNotEnoughPokemon
Route109_Text_MelNotEnoughPokemon: @ 0x0825B26E
	.string "シキ『あたしたち ラブラブ だからね\nあたしたちの ポケモンも\l2ひき いっしょに たたかわせるんだ!{EOS}"
	.if (. - Route109_Text_MelNotEnoughPokemon) > 0x34
	.error "Route109_Text_MelNotEnoughPokemon may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_MelNotEnoughPokemon) < 0x34
	.space 0x34 - (. - Route109_Text_MelNotEnoughPokemon)
	.endif
	@ data/text/trainers.inc:701 Route109_Text_ChandlerIntro (+1 aliases)
	.globl Route109_Text_ChandlerIntro
Route109_Text_ChandlerIntro: @ 0x0825B2A2
	.string "じゃーん!\nボクの うきわ まるいでしょーっ!{EOS}"
	.if (. - Route109_Text_ChandlerIntro) > 0x18
	.error "Route109_Text_ChandlerIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ChandlerIntro) < 0x18
	.space 0x18 - (. - Route109_Text_ChandlerIntro)
	.endif
	@ data/text/trainers.inc:704 Route109_Text_ChandlerDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route109_Text_ChandlerDefeated
Route109_Text_ChandlerDefeated: @ 0x0825B2BA
	.string "あーあ! ざんねん{EOS}"
	.if (. - Route109_Text_ChandlerDefeated) != 0xa
	.error "Route109_Text_ChandlerDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:707 Route109_Text_ChandlerPostBattle
	.globl Route109_Text_ChandlerPostBattle
Route109_Text_ChandlerPostBattle: @ 0x0825B2C4
	.string "せっかく まるい うきわを\nみせて あげたのにさ{EOS}"
	.if (. - Route109_Text_ChandlerPostBattle) > 0x19
	.error "Route109_Text_ChandlerPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ChandlerPostBattle) < 0x19
	.space 0x19 - (. - Route109_Text_ChandlerPostBattle)
	.endif
	@ data/text/trainers.inc:710 Route109_Text_HaileyIntro (+1 aliases)
	.globl Route109_Text_HaileyIntro
Route109_Text_HaileyIntro: @ 0x0825B2DD
	.string "およげない から\nおよぐ ふりを してるの!{EOS}"
	.if (. - Route109_Text_HaileyIntro) > 0x17
	.error "Route109_Text_HaileyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HaileyIntro) < 0x17
	.space 0x17 - (. - Route109_Text_HaileyIntro)
	.endif
	@ data/text/trainers.inc:713 Route109_Text_HaileyDefeated (+1 aliases)
	.globl Route109_Text_HaileyDefeated
Route109_Text_HaileyDefeated: @ 0x0825B2F4
	.string "やっぱね!\nかてないって おもってたんだ{EOS}"
	.if (. - Route109_Text_HaileyDefeated) > 0x15
	.error "Route109_Text_HaileyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HaileyDefeated) < 0x15
	.space 0x15 - (. - Route109_Text_HaileyDefeated)
	.endif
	@ data/text/trainers.inc:716 Route109_Text_HaileyPostBattle
	.globl Route109_Text_HaileyPostBattle
Route109_Text_HaileyPostBattle: @ 0x0825B309
	.string "およげるように なったら\nポケモンも つよく なると おもう!{EOS}"
	.if (. - Route109_Text_HaileyPostBattle) > 0x20
	.error "Route109_Text_HaileyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_HaileyPostBattle) < 0x20
	.space 0x20 - (. - Route109_Text_HaileyPostBattle)
	.endif
	@ data/text/trainers.inc:719 Route109_Text_ElijahIntro (+1 aliases)
	.globl Route109_Text_ElijahIntro
Route109_Text_ElijahIntro: @ 0x0825B329
	.string "こうはの おれさまには\nこんな ポケモンが おにあいだぜ!{EOS}"
	.if (. - Route109_Text_ElijahIntro) > 0x1e
	.error "Route109_Text_ElijahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ElijahIntro) < 0x1e
	.space 0x1e - (. - Route109_Text_ElijahIntro)
	.endif
	@ data/text/trainers.inc:722 Route109_Text_ElijahDefeated (+1 aliases)
	.globl Route109_Text_ElijahDefeated
Route109_Text_ElijahDefeated: @ 0x0825B347
	.string "まけても カッコ いいだろ?{EOS}"
	.if (. - Route109_Text_ElijahDefeated) > 0xf
	.error "Route109_Text_ElijahDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ElijahDefeated) < 0xf
	.space 0xf - (. - Route109_Text_ElijahDefeated)
	.endif
	@ data/text/trainers.inc:725 Route109_Text_ElijahPostBattle
	.globl Route109_Text_ElijahPostBattle
Route109_Text_ElijahPostBattle: @ 0x0825B356
	.string "こうはの おれさまには\nみなとまちが おにあいだぜ!\lカイナシティに いってくるか{EOS}"
	.if (. - Route109_Text_ElijahPostBattle) > 0x2a
	.error "Route109_Text_ElijahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route109_Text_ElijahPostBattle) < 0x2a
	.space 0x2a - (. - Route109_Text_ElijahPostBattle)
	.endif
	@ data/text/trainers.inc:728 Route110_Text_JacobIntro (+1 aliases)
	.globl Route110_Text_JacobIntro
Route110_Text_JacobIntro: @ 0x0825B380
	.string "おっと あぶない!\nバイク レースに なれてない ようだな!{EOS}"
	.if (. - Route110_Text_JacobIntro) > 0x1f
	.error "Route110_Text_JacobIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JacobIntro) < 0x1f
	.space 0x1f - (. - Route110_Text_JacobIntro)
	.endif
	@ data/text/trainers.inc:731 Route110_Text_JacobDefeated (+1 aliases)
	.globl Route110_Text_JacobDefeated
Route110_Text_JacobDefeated: @ 0x0825B39F
	.string "キキーッ!\nブレーキが こしょうした!{EOS}"
	.if (. - Route110_Text_JacobDefeated) > 0x14
	.error "Route110_Text_JacobDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JacobDefeated) < 0x14
	.space 0x14 - (. - Route110_Text_JacobDefeated)
	.endif
	@ data/text/trainers.inc:734 Route110_Text_JacobPostBattle
	.globl Route110_Text_JacobPostBattle
Route110_Text_JacobPostBattle: @ 0x0825B3B3
	.string "タイヤの パンクや\nブレーキの こしょうは ケガのもと\lちゃんと てんけん しないとな{EOS}"
	.if (. - Route110_Text_JacobPostBattle) > 0x2c
	.error "Route110_Text_JacobPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JacobPostBattle) < 0x2c
	.space 0x2c - (. - Route110_Text_JacobPostBattle)
	.endif
	@ data/text/trainers.inc:737 Route110_Text_AnthonyIntro (+1 aliases)
	.globl Route110_Text_AnthonyIntro
Route110_Text_AnthonyIntro: @ 0x0825B3DF
	.string "ヘイ ユー!\nワタシの スピードに ついてこれるかな!?{EOS}"
	.if (. - Route110_Text_AnthonyIntro) > 0x1d
	.error "Route110_Text_AnthonyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AnthonyIntro) < 0x1d
	.space 0x1d - (. - Route110_Text_AnthonyIntro)
	.endif
	@ data/text/trainers.inc:740 Route110_Text_AnthonyDefeated (+1 aliases)
	.globl Route110_Text_AnthonyDefeated
Route110_Text_AnthonyDefeated: @ 0x0825B3FC
	.string "オー マイ ガッ!{EOS}"
	.if (. - Route110_Text_AnthonyDefeated) > 0xa
	.error "Route110_Text_AnthonyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AnthonyDefeated) < 0xa
	.space 0xa - (. - Route110_Text_AnthonyDefeated)
	.endif
	@ data/text/trainers.inc:743 Route110_Text_AnthonyPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_AnthonyPostBattle
Route110_Text_AnthonyPostBattle: @ 0x0825B406
	.string "スピードだけじゃ ポケモンしょうぶ\nかてませーん! ハンセイしまーす!{EOS}"
	.if (. - Route110_Text_AnthonyPostBattle) != 0x24
	.error "Route110_Text_AnthonyPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:746 Route110_Text_BenjaminIntro (+1 aliases)
	.globl Route110_Text_BenjaminIntro
Route110_Text_BenjaminIntro: @ 0x0825B42A
	.string "じてんしゃの スピード でても\nあせっちゃ いけないよ!{EOS}"
	.if (. - Route110_Text_BenjaminIntro) > 0x1d
	.error "Route110_Text_BenjaminIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminIntro) < 0x1d
	.space 0x1d - (. - Route110_Text_BenjaminIntro)
	.endif
	@ data/text/trainers.inc:749 Route110_Text_BenjaminDefeated (+1 aliases)
	.globl Route110_Text_BenjaminDefeated
Route110_Text_BenjaminDefeated: @ 0x0825B447
	.string "ポケモンしょうぶも\nあせっちゃ いけないな……{EOS}"
	.if (. - Route110_Text_BenjaminDefeated) > 0x18
	.error "Route110_Text_BenjaminDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminDefeated) < 0x18
	.space 0x18 - (. - Route110_Text_BenjaminDefeated)
	.endif
	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl Route110_Text_BenjaminPostBattle_Copy_Rom_25B45F
Route110_Text_BenjaminPostBattle_Copy_Rom_25B45F: @ 0x0825B45F
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!{EOS}"
	.if (. - Route110_Text_BenjaminPostBattle_Copy_Rom_25B45F) > 0x20
	.error "Route110_Text_BenjaminPostBattle_Copy_Rom_25B45F may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminPostBattle_Copy_Rom_25B45F) < 0x20
	.space 0x20 - (. - Route110_Text_BenjaminPostBattle_Copy_Rom_25B45F)
	.endif
	@ data/text/trainers.inc:755 Route110_Text_BenjaminRegister
	.globl Route110_Text_BenjaminRegister
Route110_Text_BenjaminRegister: @ 0x0825B47F
	.string "あせらずに また がんばるか!\nよかったらさ れんらく くれよな{EOS}"
	.if (. - Route110_Text_BenjaminRegister) > 0x21
	.error "Route110_Text_BenjaminRegister may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminRegister) < 0x21
	.space 0x21 - (. - Route110_Text_BenjaminRegister)
	.endif
	@ data/text/trainers.inc:758 Route110_Text_BenjaminRematchIntro (+1 aliases)
	.globl Route110_Text_BenjaminRematchIntro
Route110_Text_BenjaminRematchIntro: @ 0x0825B4A0
	.string "おっ! スピード だしすぎ じゃない?\nちょっと のんびり しょうぶ しようよ!{EOS}"
	.if (. - Route110_Text_BenjaminRematchIntro) > 0x29
	.error "Route110_Text_BenjaminRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminRematchIntro) < 0x29
	.space 0x29 - (. - Route110_Text_BenjaminRematchIntro)
	.endif
	@ data/text/trainers.inc:761 Route110_Text_BenjaminRematchDefeated (+1 aliases)
	.globl Route110_Text_BenjaminRematchDefeated
Route110_Text_BenjaminRematchDefeated: @ 0x0825B4C9
	.string "べつに あせってないけど\nなぜだか まけて しまうな……{EOS}"
	.if (. - Route110_Text_BenjaminRematchDefeated) > 0x1d
	.error "Route110_Text_BenjaminRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminRematchDefeated) < 0x1d
	.space 0x1d - (. - Route110_Text_BenjaminRematchDefeated)
	.endif
	@ data/text/trainers.inc:752 Route110_Text_BenjaminPostBattle (+1 aliases)
	.globl Route110_Text_BenjaminPostBattle_Copy_Rom_25B4E6
Route110_Text_BenjaminPostBattle_Copy_Rom_25B4E6: @ 0x0825B4E6
	.string "あせらず のんびり いこうよ\nじかんは たっぷり あるからね!{EOS}"
	.if (. - Route110_Text_BenjaminPostBattle_Copy_Rom_25B4E6) > 0x20
	.error "Route110_Text_BenjaminPostBattle_Copy_Rom_25B4E6 may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_BenjaminPostBattle_Copy_Rom_25B4E6) < 0x20
	.space 0x20 - (. - Route110_Text_BenjaminPostBattle_Copy_Rom_25B4E6)
	.endif
	@ data/text/trainers.inc:767 Route110_Text_AbigailIntro (+1 aliases)
	.globl Route110_Text_AbigailIntro
Route110_Text_AbigailIntro: @ 0x0825B506
	.string "トライアスロンは ハードな スポーツ\nすいえい じてんしゃ マラソンの\l3しゅもくを こなすのよ!{EOS}"
	.if (. - Route110_Text_AbigailIntro) > 0x32
	.error "Route110_Text_AbigailIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailIntro) < 0x32
	.space 0x32 - (. - Route110_Text_AbigailIntro)
	.endif
	@ data/text/trainers.inc:770 Route110_Text_AbigailDefeated (+1 aliases)
	.globl Route110_Text_AbigailDefeated
Route110_Text_AbigailDefeated: @ 0x0825B538
	.string "ポケモン しょうぶも ハードだわ!{EOS}"
	.if (. - Route110_Text_AbigailDefeated) > 0x12
	.error "Route110_Text_AbigailDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailDefeated) < 0x12
	.space 0x12 - (. - Route110_Text_AbigailDefeated)
	.endif
	@ data/text/trainers.inc:773 Route110_Text_AbigailPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_AbigailPostBattle
Route110_Text_AbigailPostBattle: @ 0x0825B54A
	.string "つかれたから ひとやすみ\nきゅうけいは たいせつ なのよ{EOS}"
	.if (. - Route110_Text_AbigailPostBattle) != 0x1d
	.error "Route110_Text_AbigailPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:776 Route110_Text_AbigailRegister
	.globl Route110_Text_AbigailRegister
Route110_Text_AbigailRegister: @ 0x0825B567
	.string "あなた きにいったわ!\nまた サイクリングロードで たたかいましょ{EOS}"
	.if (. - Route110_Text_AbigailRegister) > 0x22
	.error "Route110_Text_AbigailRegister may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRegister) < 0x22
	.space 0x22 - (. - Route110_Text_AbigailRegister)
	.endif
	@ data/text/trainers.inc:779 Route110_Text_AbigailRematchIntro (+1 aliases)
	.globl Route110_Text_AbigailRematchIntro
Route110_Text_AbigailRematchIntro: @ 0x0825B589
	.string "じてんしゃに のりながら\nポケモンしょうぶ ってのも いいものよね!{EOS}"
	.if (. - Route110_Text_AbigailRematchIntro) > 0x23
	.error "Route110_Text_AbigailRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRematchIntro) < 0x23
	.space 0x23 - (. - Route110_Text_AbigailRematchIntro)
	.endif
	@ data/text/trainers.inc:782 Route110_Text_AbigailRematchDefeated (+1 aliases)
	.globl Route110_Text_AbigailRematchDefeated
Route110_Text_AbigailRematchDefeated: @ 0x0825B5AC
	.string "うわー\nどうして そんなに つよいの?{EOS}"
	.if (. - Route110_Text_AbigailRematchDefeated) > 0x14
	.error "Route110_Text_AbigailRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRematchDefeated) < 0x14
	.space 0x14 - (. - Route110_Text_AbigailRematchDefeated)
	.endif
	@ data/text/trainers.inc:785 Route110_Text_AbigailRematchPostBattle
	.globl Route110_Text_AbigailRematchPostBattle
Route110_Text_AbigailRematchPostBattle: @ 0x0825B5C0
	.string "ひょっとして きろくに\nちょうせん していたのかしら?\pだったら ジャマして ゴメンねー{EOS}"
	.if (. - Route110_Text_AbigailRematchPostBattle) > 0x2d
	.error "Route110_Text_AbigailRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AbigailRematchPostBattle) < 0x2d
	.space 0x2d - (. - Route110_Text_AbigailRematchPostBattle)
	.endif
	@ data/text/trainers.inc:788 Route110_Text_JasmineIntro (+1 aliases)
	.globl Route110_Text_JasmineIntro
Route110_Text_JasmineIntro: @ 0x0825B5ED
	.string "じてんしゃを こぎつづけて\nふとももが パンパンに なっちゃった{EOS}"
	.if (. - Route110_Text_JasmineIntro) > 0x21
	.error "Route110_Text_JasmineIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JasmineIntro) < 0x21
	.space 0x21 - (. - Route110_Text_JasmineIntro)
	.endif
	@ data/text/trainers.inc:791 Route110_Text_JasmineDefeated (+1 aliases)
	.globl Route110_Text_JasmineDefeated
Route110_Text_JasmineDefeated: @ 0x0825B60E
	.string "きんにくつうが しんぱいだわ……{EOS}"
	.if (. - Route110_Text_JasmineDefeated) > 0x11
	.error "Route110_Text_JasmineDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JasmineDefeated) < 0x11
	.space 0x11 - (. - Route110_Text_JasmineDefeated)
	.endif
	@ data/text/trainers.inc:794 Route110_Text_JasminePostBattle
	.globl Route110_Text_JasminePostBattle
Route110_Text_JasminePostBattle: @ 0x0825B61F
	.string "ジムの バッチを もってるの?\nどうりで つよい はずだわ!{EOS}"
	.if (. - Route110_Text_JasminePostBattle) > 0x1f
	.error "Route110_Text_JasminePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JasminePostBattle) < 0x1f
	.space 0x1f - (. - Route110_Text_JasminePostBattle)
	.endif
	@ data/text/trainers.inc:797 Route110_Text_EdwardIntro (+1 aliases)
	.globl Route110_Text_EdwardIntro
Route110_Text_EdwardIntro: @ 0x0825B63E
	.string "おまえの さくせんは すべて みえた!\nわたしが まけるはず ない!{EOS}"
	.if (. - Route110_Text_EdwardIntro) > 0x23
	.error "Route110_Text_EdwardIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwardIntro) < 0x23
	.space 0x23 - (. - Route110_Text_EdwardIntro)
	.endif
	@ data/text/trainers.inc:800 Route110_Text_EdwardDefeated (+1 aliases)
	.globl Route110_Text_EdwardDefeated
Route110_Text_EdwardDefeated: @ 0x0825B661
	.string "じぶんの はいぼくは みえなかった……!{EOS}"
	.if (. - Route110_Text_EdwardDefeated) > 0x15
	.error "Route110_Text_EdwardDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwardDefeated) < 0x15
	.space 0x15 - (. - Route110_Text_EdwardDefeated)
	.endif
	@ data/text/trainers.inc:803 Route110_Text_EdwardPostBattle
	.globl Route110_Text_EdwardPostBattle
Route110_Text_EdwardPostBattle: @ 0x0825B676
	.string "おまえの みらいが みえる……\pふうむ……\nあかるい ひかりが みえるぞ……!{EOS}"
	.if (. - Route110_Text_EdwardPostBattle) > 0x28
	.error "Route110_Text_EdwardPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwardPostBattle) < 0x28
	.space 0x28 - (. - Route110_Text_EdwardPostBattle)
	.endif
	@ data/text/trainers.inc:806 Route110_Text_JaclynIntro (+1 aliases)
	.globl Route110_Text_JaclynIntro
Route110_Text_JaclynIntro: @ 0x0825B69E
	.string "おほほほほっ!\nわたくしの ミラクルを みせてあげるわ!{EOS}"
	.if (. - Route110_Text_JaclynIntro) > 0x1d
	.error "Route110_Text_JaclynIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JaclynIntro) < 0x1d
	.space 0x1d - (. - Route110_Text_JaclynIntro)
	.endif
	@ data/text/trainers.inc:809 Route110_Text_JaclynDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_JaclynDefeated
Route110_Text_JaclynDefeated: @ 0x0825B6BB
	.string "ミラクルに まけたーっ!{EOS}"
	.if (. - Route110_Text_JaclynDefeated) != 0xd
	.error "Route110_Text_JaclynDefeated must retain its original byte length"
	.endif
	@ data/text/trainers.inc:812 Route110_Text_JaclynPostBattle
	.globl Route110_Text_JaclynPostBattle
Route110_Text_JaclynPostBattle: @ 0x0825B6C8
	.string "わたくしに かったことが ミラクル……\nそう きせき なのよ!\lいつでも かてるなんて おもわないことね!{EOS}"
	.if (. - Route110_Text_JaclynPostBattle) > 0x36
	.error "Route110_Text_JaclynPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JaclynPostBattle) < 0x36
	.space 0x36 - (. - Route110_Text_JaclynPostBattle)
	.endif
	@ data/text/trainers.inc:815 Route110_Text_EdwinIntro (+1 aliases)
	.globl Route110_Text_EdwinIntro
Route110_Text_EdwinIntro: @ 0x0825B6FE
	.string "キミの ポケモン みせてくれない?\nひとめで いいから おねがい!{EOS}"
	.if (. - Route110_Text_EdwinIntro) > 0x22
	.error "Route110_Text_EdwinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinIntro) < 0x22
	.space 0x22 - (. - Route110_Text_EdwinIntro)
	.endif
	@ data/text/trainers.inc:818 Route110_Text_EdwinDefeated (+1 aliases)
	.globl Route110_Text_EdwinDefeated
Route110_Text_EdwinDefeated: @ 0x0825B720
	.string "コンプリート したかった……!{EOS}"
	.if (. - Route110_Text_EdwinDefeated) > 0x10
	.error "Route110_Text_EdwinDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinDefeated) < 0x10
	.space 0x10 - (. - Route110_Text_EdwinDefeated)
	.endif
	@ data/text/trainers.inc:821 Route110_Text_EdwinPostBattle
	.globl Route110_Text_EdwinPostBattle
Route110_Text_EdwinPostBattle: @ 0x0825B730
	.string "みたことのない ポケモンに であうと\nボクの コレクターだましいが もえるなぁ!{EOS}"
	.if (. - Route110_Text_EdwinPostBattle) > 0x29
	.error "Route110_Text_EdwinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinPostBattle) < 0x29
	.space 0x29 - (. - Route110_Text_EdwinPostBattle)
	.endif
	@ data/text/trainers.inc:824 Route110_Text_EdwinRegister
	.globl Route110_Text_EdwinRegister
Route110_Text_EdwinRegister: @ 0x0825B759
	.string "ぼく エントリーコールも\nたくさん あつめたいんだよねぇ{EOS}"
	.if (. - Route110_Text_EdwinRegister) > 0x1d
	.error "Route110_Text_EdwinRegister may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRegister) < 0x1d
	.space 0x1d - (. - Route110_Text_EdwinRegister)
	.endif
	@ data/text/trainers.inc:827 Route110_Text_EdwinRematchIntro (+1 aliases)
	.globl Route110_Text_EdwinRematchIntro
Route110_Text_EdwinRematchIntro: @ 0x0825B776
	.string "ねえ キミ\nあたらしい ポケモン つかまえた?\pよかったら ポケモン みせてくれない?\nひとめで いいから おねがい!{EOS}"
	.if (. - Route110_Text_EdwinRematchIntro) > 0x3c
	.error "Route110_Text_EdwinRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRematchIntro) < 0x3c
	.space 0x3c - (. - Route110_Text_EdwinRematchIntro)
	.endif
	@ data/text/trainers.inc:830 Route110_Text_EdwinRematchDefeated (+1 aliases)
	.globl Route110_Text_EdwinRematchDefeated
Route110_Text_EdwinRematchDefeated: @ 0x0825B7B2
	.string "キミの ポケモン\nうらやましいな……{EOS}"
	.if (. - Route110_Text_EdwinRematchDefeated) > 0x13
	.error "Route110_Text_EdwinRematchDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRematchDefeated) < 0x13
	.space 0x13 - (. - Route110_Text_EdwinRematchDefeated)
	.endif
	@ data/text/trainers.inc:833 Route110_Text_EdwinRematchPostBattle
	.globl Route110_Text_EdwinRematchPostBattle
Route110_Text_EdwinRematchPostBattle: @ 0x0825B7C5
	.string "ああ! とにかく めずらしい ポケモン\nぜんぶ ボクの ものに したいよー!{EOS}"
	.if (. - Route110_Text_EdwinRematchPostBattle) > 0x27
	.error "Route110_Text_EdwinRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_EdwinRematchPostBattle) < 0x27
	.space 0x27 - (. - Route110_Text_EdwinRematchPostBattle)
	.endif
	@ data/text/trainers.inc:836 Route110_Text_DaleIntro (+1 aliases)
	.globl Route110_Text_DaleIntro
Route110_Text_DaleIntro: @ 0x0825B7EC
	.string "ええーい!\nうしろから はなしかけるなー!{EOS}"
	.if (. - Route110_Text_DaleIntro) > 0x16
	.error "Route110_Text_DaleIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_DaleIntro) < 0x16
	.space 0x16 - (. - Route110_Text_DaleIntro)
	.endif
	@ data/text/trainers.inc:839 Route110_Text_DaleDefeated (+1 aliases)
	.globl Route110_Text_DaleDefeated
Route110_Text_DaleDefeated: @ 0x0825B802
	.string "まけたっ!\nくやしいっ!!{EOS}"
	.if (. - Route110_Text_DaleDefeated) > 0xe
	.error "Route110_Text_DaleDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_DaleDefeated) < 0xe
	.space 0xe - (. - Route110_Text_DaleDefeated)
	.endif
	@ data/text/trainers.inc:842 Route110_Text_DalePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_DalePostBattle
Route110_Text_DalePostBattle: @ 0x0825B810
	.string "すいめんに うかぶ うきを じっと みる……\nしゅうちゅうりょくが たいせつ なんだ{EOS}"
	.if (. - Route110_Text_DalePostBattle) != 0x2b
	.error "Route110_Text_DalePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:845 Route110_Text_IsabelIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_IsabelIntro
Route110_Text_IsabelIntro: @ 0x0825B83B
	.string "おほほ! だいじな ポケモンを\nじまん するためなら どこにでも いきますわ{EOS}"
	.if (. - Route110_Text_IsabelIntro) != 0x27
	.error "Route110_Text_IsabelIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_IsabelDefeated_Copy_Rom_25B862
Route110_Text_IsabelDefeated_Copy_Rom_25B862: @ 0x0825B862
	.string "あら まあ イヤですわ{EOS}"
	.if (. - Route110_Text_IsabelDefeated_Copy_Rom_25B862) != 0xc
	.error "Route110_Text_IsabelDefeated_Copy_Rom_25B862 must retain its original byte length"
	.endif
	@ data/text/trainers.inc:851 Route110_Text_IsabelPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_IsabelPostBattle
Route110_Text_IsabelPostBattle: @ 0x0825B86E
	.string "しょうぶ させるよりも\nだいすきクラブで じまんして こようかしら{EOS}"
	.if (. - Route110_Text_IsabelPostBattle) != 0x22
	.error "Route110_Text_IsabelPostBattle must retain its original byte length"
	.endif
	@ field-script:0x1E91B6 FieldScriptText_25B890
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_25B890
FieldScriptText_25B890: @ 0x0825B890
	.string "わたしの　じまんは　こんなんじゃ\nおわりませんわ！\lなんかいも　つきあって　もらいますわよ！{EOS}"
	.if (. - FieldScriptText_25B890) != 0x2f
	.error "FieldScriptText_25B890 must retain its original byte length"
	.endif
	@ data/text/trainers.inc:857 Route110_Text_IsabelRematchIntro (+1 aliases)
	.globl Route110_Text_IsabelRematchIntro
Route110_Text_IsabelRematchIntro: @ 0x0825B8BF
	.string "おほほ! だいじな ポケモンなら\nなんどだって じまん しますわ!{EOS}"
	.if (. - Route110_Text_IsabelRematchIntro) > 0x22
	.error "Route110_Text_IsabelRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_IsabelRematchIntro) < 0x22
	.space 0x22 - (. - Route110_Text_IsabelRematchIntro)
	.endif
	@ data/text/trainers.inc:848 Route110_Text_IsabelDefeated (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route110_Text_IsabelDefeated_Copy_Rom_25B8E1
Route110_Text_IsabelDefeated_Copy_Rom_25B8E1: @ 0x0825B8E1
	.string "あら まあ イヤですわ{EOS}"
	.if (. - Route110_Text_IsabelDefeated_Copy_Rom_25B8E1) != 0xc
	.error "Route110_Text_IsabelDefeated_Copy_Rom_25B8E1 must retain its original byte length"
	.endif
	@ data/text/trainers.inc:863 Route110_Text_IsabelRematchPostBattle
	.globl Route110_Text_IsabelRematchPostBattle
Route110_Text_IsabelRematchPostBattle: @ 0x0825B8ED
	.string "ポケモンじまんも やめられないけど\nしょうぶ するのも すきなのよ!{EOS}"
	.if (. - Route110_Text_IsabelRematchPostBattle) > 0x23
	.error "Route110_Text_IsabelRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_IsabelRematchPostBattle) < 0x23
	.space 0x23 - (. - Route110_Text_IsabelRematchPostBattle)
	.endif
	@ data/text/trainers.inc:866 Route110_Text_TimmyIntro (+1 aliases)
	.globl Route110_Text_TimmyIntro
Route110_Text_TimmyIntro: @ 0x0825B910
	.string "この あたりの くさむらで\nかっこいい ポケモン みつけたんだぜ!{EOS}"
	.if (. - Route110_Text_TimmyIntro) > 0x22
	.error "Route110_Text_TimmyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_TimmyIntro) < 0x22
	.space 0x22 - (. - Route110_Text_TimmyIntro)
	.endif
	@ data/text/trainers.inc:869 Route110_Text_TimmyDefeated (+1 aliases)
	.globl Route110_Text_TimmyDefeated
Route110_Text_TimmyDefeated: @ 0x0825B932
	.string "かっこいい だけじゃ だめかぁ……{EOS}"
	.if (. - Route110_Text_TimmyDefeated) > 0x12
	.error "Route110_Text_TimmyDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_TimmyDefeated) < 0x12
	.space 0x12 - (. - Route110_Text_TimmyDefeated)
	.endif
	@ data/text/trainers.inc:872 Route110_Text_TimmyPostBattle
	.globl Route110_Text_TimmyPostBattle
Route110_Text_TimmyPostBattle: @ 0x0825B944
	.string "つかまえた ばかりの ポケモンじゃ\nうまく たたかえないや!{EOS}"
	.if (. - Route110_Text_TimmyPostBattle) > 0x1f
	.error "Route110_Text_TimmyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_TimmyPostBattle) < 0x1f
	.space 0x1f - (. - Route110_Text_TimmyPostBattle)
	.endif
	@ data/text/trainers.inc:875 Route110_Text_AlyssaIntro (+1 aliases)
	.globl Route110_Text_AlyssaIntro
Route110_Text_AlyssaIntro: @ 0x0825B963
	.string "サイクリングロード から おちちゃった!\nはずかしい…… しょうぶで まぎらわすわ!{EOS}"
	.if (. - Route110_Text_AlyssaIntro) > 0x2b
	.error "Route110_Text_AlyssaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AlyssaIntro) < 0x2b
	.space 0x2b - (. - Route110_Text_AlyssaIntro)
	.endif
	@ data/text/trainers.inc:878 Route110_Text_AlyssaDefeated (+1 aliases)
	.globl Route110_Text_AlyssaDefeated
Route110_Text_AlyssaDefeated: @ 0x0825B98E
	.string "ひぇ まけて しまったわ!{EOS}"
	.if (. - Route110_Text_AlyssaDefeated) > 0xe
	.error "Route110_Text_AlyssaDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AlyssaDefeated) < 0xe
	.space 0xe - (. - Route110_Text_AlyssaDefeated)
	.endif
	@ data/text/trainers.inc:881 Route110_Text_AlyssaPostBattle
	.globl Route110_Text_AlyssaPostBattle
Route110_Text_AlyssaPostBattle: @ 0x0825B99C
	.string "おっこちるは まけるはで\nはずかし すぎます! わたし!{EOS}"
	.if (. - Route110_Text_AlyssaPostBattle) > 0x1d
	.error "Route110_Text_AlyssaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_AlyssaPostBattle) < 0x1d
	.space 0x1d - (. - Route110_Text_AlyssaPostBattle)
	.endif
	@ data/text/trainers.inc:884 Route110_Text_JosephIntro (+1 aliases)
	.globl Route110_Text_JosephIntro
Route110_Text_JosephIntro: @ 0x0825B9B9
	.string "よぉぉし とばして いくぜえェ!\nノリの わるいやつは おいてくぜェ!{EOS}"
	.if (. - Route110_Text_JosephIntro) > 0x24
	.error "Route110_Text_JosephIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JosephIntro) < 0x24
	.space 0x24 - (. - Route110_Text_JosephIntro)
	.endif
	@ data/text/trainers.inc:887 Route110_Text_JosephDefeated (+1 aliases)
	.globl Route110_Text_JosephDefeated
Route110_Text_JosephDefeated: @ 0x0825B9DD
	.string "ノリが いいね あんた……{EOS}"
	.if (. - Route110_Text_JosephDefeated) > 0xe
	.error "Route110_Text_JosephDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JosephDefeated) < 0xe
	.space 0xe - (. - Route110_Text_JosephDefeated)
	.endif
	@ data/text/trainers.inc:890 Route110_Text_JosephPostBattle
	.globl Route110_Text_JosephPostBattle
Route110_Text_JosephPostBattle: @ 0x0825B9EB
	.string "こんなこと では へこたれないぜェ!\nおれは まけて またひとつ\lいいオトコに なったぜェ!{EOS}"
	.if (. - Route110_Text_JosephPostBattle) > 0x2f
	.error "Route110_Text_JosephPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_JosephPostBattle) < 0x2f
	.space 0x2f - (. - Route110_Text_JosephPostBattle)
	.endif
	@ data/text/trainers.inc:893 Route110_Text_KalebIntro (+1 aliases)
	.globl Route110_Text_KalebIntro
Route110_Text_KalebIntro: @ 0x0825BA1A
	.string "かわいい ポケモンたちが\nたすけあう ところは かわいいぞーーっ!{EOS}"
	.if (. - Route110_Text_KalebIntro) > 0x22
	.error "Route110_Text_KalebIntro may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_KalebIntro) < 0x22
	.space 0x22 - (. - Route110_Text_KalebIntro)
	.endif
	@ data/text/trainers.inc:896 Route110_Text_KalebDefeated (+1 aliases)
	.globl Route110_Text_KalebDefeated
Route110_Text_KalebDefeated: @ 0x0825BA3C
	.string "きみは ちも なみだも ないんだな{EOS}"
	.if (. - Route110_Text_KalebDefeated) > 0x12
	.error "Route110_Text_KalebDefeated may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_KalebDefeated) < 0x12
	.space 0x12 - (. - Route110_Text_KalebDefeated)
	.endif
	@ data/text/trainers.inc:899 Route110_Text_KalebPostBattle
	.globl Route110_Text_KalebPostBattle
Route110_Text_KalebPostBattle: @ 0x0825BA4E
	.string "おう よしよし\nよくやったよ かわいい おまえたち{EOS}"
	.if (. - Route110_Text_KalebPostBattle) > 0x1a
	.error "Route110_Text_KalebPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route110_Text_KalebPostBattle) < 0x1a
	.space 0x1a - (. - Route110_Text_KalebPostBattle)
	.endif
	@ data/text/trainers.inc:902 Route111_Text_DrewIntro (+1 aliases)
	.globl Route111_Text_DrewIntro
Route111_Text_DrewIntro: @ 0x0825BA68
	.string "おっ! ゴーゴーゴーグル にあってるね!\nでも ぼくの ほうが にあってるだろ?\lどっちが にあうか しょうぶだよ!{EOS}"
	.if (. - Route111_Text_DrewIntro) > 0x3b
	.error "Route111_Text_DrewIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DrewIntro) < 0x3b
	.space 0x3b - (. - Route111_Text_DrewIntro)
	.endif
	@ data/text/trainers.inc:905 Route111_Text_DrewDefeat (+1 aliases)
	.globl Route111_Text_DrewDefeat
Route111_Text_DrewDefeat: @ 0x0825BAA3
	.string "ゴーゴーゴーグルで まわりが\nよく わからなかったよ{EOS}"
	.if (. - Route111_Text_DrewDefeat) > 0x1b
	.error "Route111_Text_DrewDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DrewDefeat) < 0x1b
	.space 0x1b - (. - Route111_Text_DrewDefeat)
	.endif
	@ data/text/trainers.inc:908 Route111_Text_DrewPostBattle
	.globl Route111_Text_DrewPostBattle
Route111_Text_DrewPostBattle: @ 0x0825BABE
	.string "ゴーゴーゴーグルが あると\nさばくの すなあらしも へいき だから\lそれだけで うれしくなるよ!{EOS}"
	.if (. - Route111_Text_DrewPostBattle) > 0x31
	.error "Route111_Text_DrewPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DrewPostBattle) < 0x31
	.space 0x31 - (. - Route111_Text_DrewPostBattle)
	.endif
	@ data/text/trainers.inc:911 Route111_Text_HeidiIntro (+1 aliases)
	.globl Route111_Text_HeidiIntro
Route111_Text_HeidiIntro: @ 0x0825BAEF
	.string "さばくの なかでも ピクニック!\pどんな ところでも トレーナー いるから\nしょうぶも できるもんね!{EOS}"
	.if (. - Route111_Text_HeidiIntro) > 0x34
	.error "Route111_Text_HeidiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HeidiIntro) < 0x34
	.space 0x34 - (. - Route111_Text_HeidiIntro)
	.endif
	@ data/text/trainers.inc:914 Route111_Text_HeidiDefeat (+1 aliases)
	.globl Route111_Text_HeidiDefeat
Route111_Text_HeidiDefeat: @ 0x0825BB23
	.string "いやーん いじわるー!{EOS}"
	.if (. - Route111_Text_HeidiDefeat) > 0xc
	.error "Route111_Text_HeidiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HeidiDefeat) < 0xc
	.space 0xc - (. - Route111_Text_HeidiDefeat)
	.endif
	@ data/text/trainers.inc:917 Route111_Text_HeidiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_HeidiPostBattle
Route111_Text_HeidiPostBattle: @ 0x0825BB2F
	.string "すなあらしの なかで たたかうなら\nポケモンの たいりょくに きを つけないと\lすぐに きぜつ しちゃうわよ!{EOS}"
	.if (. - Route111_Text_HeidiPostBattle) != 0x38
	.error "Route111_Text_HeidiPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:920 Route111_Text_BeauIntro (+1 aliases)
	.globl Route111_Text_BeauIntro
Route111_Text_BeauIntro: @ 0x0825BB67
	.string "ゴーゴーゴーグルを つけてると\nなんとなく ヒーローきぶん!\lいまの ぼくなら だれにだって かてるさ!{EOS}"
	.if (. - Route111_Text_BeauIntro) > 0x35
	.error "Route111_Text_BeauIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeauIntro) < 0x35
	.space 0x35 - (. - Route111_Text_BeauIntro)
	.endif
	@ data/text/trainers.inc:923 Route111_Text_BeauDefeat (+1 aliases)
	.globl Route111_Text_BeauDefeat
Route111_Text_BeauDefeat: @ 0x0825BB9C
	.string "きぶん だけじゃ かてないか……{EOS}"
	.if (. - Route111_Text_BeauDefeat) > 0x11
	.error "Route111_Text_BeauDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeauDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_BeauDefeat)
	.endif
	@ data/text/trainers.inc:926 Route111_Text_BeauPostBattle
	.globl Route111_Text_BeauPostBattle
Route111_Text_BeauPostBattle: @ 0x0825BBAD
	.string "いつかは ほんものの ヒーローに なる!\nそのために もっと がんばって\lポケモンと じぶんを きたえてみせるよ{EOS}"
	.if (. - Route111_Text_BeauPostBattle) > 0x39
	.error "Route111_Text_BeauPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeauPostBattle) < 0x39
	.space 0x39 - (. - Route111_Text_BeauPostBattle)
	.endif
	@ data/text/trainers.inc:929 Route111_Text_BeckyIntro (+1 aliases)
	.globl Route111_Text_BeckyIntro
Route111_Text_BeckyIntro: @ 0x0825BBE6
	.string "さばくで カセキが みつかるって きいたけど\nどこに あるのかなあ?{EOS}"
	.if (. - Route111_Text_BeckyIntro) > 0x23
	.error "Route111_Text_BeckyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeckyIntro) < 0x23
	.space 0x23 - (. - Route111_Text_BeckyIntro)
	.endif
	@ data/text/trainers.inc:932 Route111_Text_BeckyDefeat (+1 aliases)
	.globl Route111_Text_BeckyDefeat
Route111_Text_BeckyDefeat: @ 0x0825BC09
	.string "いまいち だわ……{EOS}"
	.if (. - Route111_Text_BeckyDefeat) > 0xa
	.error "Route111_Text_BeckyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeckyDefeat) < 0xa
	.space 0xa - (. - Route111_Text_BeckyDefeat)
	.endif
	@ data/text/trainers.inc:935 Route111_Text_BeckyPostBattle
	.globl Route111_Text_BeckyPostBattle
Route111_Text_BeckyPostBattle: @ 0x0825BC13
	.string "さばくで カセキが みつかると いうことは\nむかし ここは うみ だったのね!{EOS}"
	.if (. - Route111_Text_BeckyPostBattle) > 0x28
	.error "Route111_Text_BeckyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BeckyPostBattle) < 0x28
	.space 0x28 - (. - Route111_Text_BeckyPostBattle)
	.endif
	@ data/text/trainers.inc:938 Route111_Text_DustyIntro (+1 aliases)
	.globl Route111_Text_DustyIntro
Route111_Text_DustyIntro: @ 0x0825BC3B
	.string "いせきを さがして 30ねん!\nそんな わたしと たたかうのかね?{EOS}"
	.if (. - Route111_Text_DustyIntro) > 0x22
	.error "Route111_Text_DustyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyIntro) < 0x22
	.space 0x22 - (. - Route111_Text_DustyIntro)
	.endif
	@ data/text/trainers.inc:941 Route111_Text_DustyDefeat (+1 aliases)
	.globl Route111_Text_DustyDefeat
Route111_Text_DustyDefeat: @ 0x0825BC5D
	.string "いせきを さがしてるけど\nつよい ポケモンは さがしてないんだ{EOS}"
	.if (. - Route111_Text_DustyDefeat) > 0x20
	.error "Route111_Text_DustyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyDefeat) < 0x20
	.space 0x20 - (. - Route111_Text_DustyDefeat)
	.endif
	@ data/text/trainers.inc:944 Route111_Text_DustyPostBattle
	.globl Route111_Text_DustyPostBattle
Route111_Text_DustyPostBattle: @ 0x0825BC7D
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\nあれ どうだったかな?{EOS}"
	.if (. - Route111_Text_DustyPostBattle) > 0x30
	.error "Route111_Text_DustyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyPostBattle) < 0x30
	.space 0x30 - (. - Route111_Text_DustyPostBattle)
	.endif
	@ data/text/trainers.inc:947 Route111_Text_DustyRegister
	.globl Route111_Text_DustyRegister
Route111_Text_DustyRegister: @ 0x0825BCAD
	.string "つよい ポケモンは さがしてないけど\nなぜだか ポケナビは おきにいり なんだ!{EOS}"
	.if (. - Route111_Text_DustyRegister) > 0x29
	.error "Route111_Text_DustyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyRegister) < 0x29
	.space 0x29 - (. - Route111_Text_DustyRegister)
	.endif
	@ data/text/trainers.inc:950 Route111_Text_DustyRematchIntro (+1 aliases)
	.globl Route111_Text_DustyRematchIntro
Route111_Text_DustyRematchIntro: @ 0x0825BCD6
	.string "いせきを さがして 30ねん!\pいや いせきを さがして 40ねん!\nそんな わたしと たたかうのかね?{EOS}"
	.if (. - Route111_Text_DustyRematchIntro) > 0x35
	.error "Route111_Text_DustyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyRematchIntro) < 0x35
	.space 0x35 - (. - Route111_Text_DustyRematchIntro)
	.endif
	@ data/text/trainers.inc:953 Route111_Text_DustyRematchDefeat (+1 aliases)
	.globl Route111_Text_DustyRematchDefeat
Route111_Text_DustyRematchDefeat: @ 0x0825BD0B
	.string "いせきは みつからない\nつよい ポケモンも みつからない{EOS}"
	.if (. - Route111_Text_DustyRematchDefeat) > 0x1d
	.error "Route111_Text_DustyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyRematchDefeat) < 0x1d
	.space 0x1d - (. - Route111_Text_DustyRematchDefeat)
	.endif
	@ data/text/trainers.inc:956 Route111_Text_DustyPostRematch
	.globl Route111_Text_DustyPostRematch
Route111_Text_DustyPostRematch: @ 0x0825BD28
	.string "いせきを さがして 30ねん!\pいや もう 40ねん さがしているか?\pうーん 50ねん だった きもする……\nあれ どうだったかな?{EOS}"
	.if (. - Route111_Text_DustyPostRematch) > 0x44
	.error "Route111_Text_DustyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DustyPostRematch) < 0x44
	.space 0x44 - (. - Route111_Text_DustyPostRematch)
	.endif
	@ data/text/trainers.inc:959 Route111_Text_TravisIntro (+1 aliases)
	.globl Route111_Text_TravisIntro
Route111_Text_TravisIntro: @ 0x0825BD6C
	.string "ぼくも げんき いっぱい!\nポケモンも げんき いっぱい だよ!{EOS}"
	.if (. - Route111_Text_TravisIntro) > 0x21
	.error "Route111_Text_TravisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TravisIntro) < 0x21
	.space 0x21 - (. - Route111_Text_TravisIntro)
	.endif
	@ data/text/trainers.inc:962 Route111_Text_TravisDefeat (+1 aliases)
	.globl Route111_Text_TravisDefeat
Route111_Text_TravisDefeat: @ 0x0825BD8D
	.string "ポケモンの げんき なくなったよ{EOS}"
	.if (. - Route111_Text_TravisDefeat) > 0x11
	.error "Route111_Text_TravisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TravisDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_TravisDefeat)
	.endif
	@ data/text/trainers.inc:965 Route111_Text_TravisPostBattle
	.globl Route111_Text_TravisPostBattle
Route111_Text_TravisPostBattle: @ 0x0825BD9E
	.string "げんき いっぱいに はしりまわる\nトレーナーが いると\lつい そっちを みちゃうよね!{EOS}"
	.if (. - Route111_Text_TravisPostBattle) > 0x2c
	.error "Route111_Text_TravisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TravisPostBattle) < 0x2c
	.space 0x2c - (. - Route111_Text_TravisPostBattle)
	.endif
	@ data/text/trainers.inc:968 Route111_Text_IreneIntro (+1 aliases)
	.globl Route111_Text_IreneIntro
Route111_Text_IreneIntro: @ 0x0825BDCA
	.string "どこに いくのか しらないけど\nちょっと しょうぶ してみない?{EOS}"
	.if (. - Route111_Text_IreneIntro) > 0x21
	.error "Route111_Text_IreneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_IreneIntro) < 0x21
	.space 0x21 - (. - Route111_Text_IreneIntro)
	.endif
	@ data/text/trainers.inc:971 Route111_Text_IreneDefeat (+1 aliases)
	.globl Route111_Text_IreneDefeat
Route111_Text_IreneDefeat: @ 0x0825BDEB
	.string "にくらしいほど つよいのね!{EOS}"
	.if (. - Route111_Text_IreneDefeat) > 0xf
	.error "Route111_Text_IreneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_IreneDefeat) < 0xf
	.space 0xf - (. - Route111_Text_IreneDefeat)
	.endif
	@ data/text/trainers.inc:974 Route111_Text_IrenePostBattle
	.globl Route111_Text_IrenePostBattle
Route111_Text_IrenePostBattle: @ 0x0825BDFA
	.string "えんとつやまに いこうかな? って\nおもって いるんだけど\lこのあたりの けしきも いいのよね!{EOS}"
	.if (. - Route111_Text_IrenePostBattle) > 0x31
	.error "Route111_Text_IrenePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_IrenePostBattle) < 0x31
	.space 0x31 - (. - Route111_Text_IrenePostBattle)
	.endif
	@ data/text/trainers.inc:977 Route111_Text_DaisukeIntro (+1 aliases)
	.globl Route111_Text_DaisukeIntro
Route111_Text_DaisukeIntro: @ 0x0825BE2B
	.string "おのれを きたえるため\nであう にんげん すべてに\lしょうぶを もうしこんでるッス!{EOS}"
	.if (. - Route111_Text_DaisukeIntro) > 0x2b
	.error "Route111_Text_DaisukeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DaisukeIntro) < 0x2b
	.space 0x2b - (. - Route111_Text_DaisukeIntro)
	.endif
	@ data/text/trainers.inc:980 Route111_Text_DaisukeDefeat (+1 aliases)
	.globl Route111_Text_DaisukeDefeat
Route111_Text_DaisukeDefeat: @ 0x0825BE56
	.string "まいったッス……!{EOS}"
	.if (. - Route111_Text_DaisukeDefeat) > 0xa
	.error "Route111_Text_DaisukeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DaisukeDefeat) < 0xa
	.space 0xa - (. - Route111_Text_DaisukeDefeat)
	.endif
	@ data/text/trainers.inc:983 Route111_Text_DaisukePostBattle
	.globl Route111_Text_DaisukePostBattle
Route111_Text_DaisukePostBattle: @ 0x0825BE60
	.string "おぬしの ように\nつよい トレーナーに かてるまで\lしゅぎょう あるのみッス!{EOS}"
	.if (. - Route111_Text_DaisukePostBattle) > 0x28
	.error "Route111_Text_DaisukePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_DaisukePostBattle) < 0x28
	.space 0x28 - (. - Route111_Text_DaisukePostBattle)
	.endif
	@ data/text/trainers.inc:986 Route111_Text_WiltonIntro (+1 aliases)
	.globl Route111_Text_WiltonIntro
Route111_Text_WiltonIntro: @ 0x0825BE88
	.string "きみが ポケモンを どこまで\nきたえているか みせて もらおう!{EOS}"
	.if (. - Route111_Text_WiltonIntro) > 0x21
	.error "Route111_Text_WiltonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonIntro) < 0x21
	.space 0x21 - (. - Route111_Text_WiltonIntro)
	.endif
	@ data/text/trainers.inc:989 Route111_Text_WiltonDefeat (+1 aliases)
	.globl Route111_Text_WiltonDefeat
Route111_Text_WiltonDefeat: @ 0x0825BEA9
	.string "なるほど\nかなり きたえてるね!{EOS}"
	.if (. - Route111_Text_WiltonDefeat) > 0x11
	.error "Route111_Text_WiltonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_WiltonDefeat)
	.endif
	@ data/text/trainers.inc:992 Route111_Text_WiltonPostBattle
	.globl Route111_Text_WiltonPostBattle
Route111_Text_WiltonPostBattle: @ 0x0825BEBA
	.string "ポケモンも トレーナーも\nたたかうことで いろんなことを まなぶ!\pだいじ なのは\nまけても あきらめないことさ!{EOS}"
	.if (. - Route111_Text_WiltonPostBattle) > 0x3a
	.error "Route111_Text_WiltonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonPostBattle) < 0x3a
	.space 0x3a - (. - Route111_Text_WiltonPostBattle)
	.endif
	@ data/text/trainers.inc:995 Route111_Text_WiltonRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_WiltonRegister
Route111_Text_WiltonRegister: @ 0x0825BEF4
	.string "きみの きたえかた さんこうに なるな!\nきが むいたら さいど たたかってほしい{EOS}"
	.if (. - Route111_Text_WiltonRegister) != 0x2a
	.error "Route111_Text_WiltonRegister must retain its original byte length"
	.endif
	@ data/text/trainers.inc:998 Route111_Text_WiltonRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_WiltonRematchIntro
Route111_Text_WiltonRematchIntro: @ 0x0825BF1E
	.string "ぼくたちは さらなる たかみを めざして\nここで ポケモンを きたえている\lきみも いっしょに しゅぎょう しよう!{EOS}"
	.if (. - Route111_Text_WiltonRematchIntro) != 0x3b
	.error "Route111_Text_WiltonRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1001 Route111_Text_WiltonRematchDefeat (+1 aliases)
	.globl Route111_Text_WiltonRematchDefeat
Route111_Text_WiltonRematchDefeat: @ 0x0825BF59
	.string "なかなか やるな!{EOS}"
	.if (. - Route111_Text_WiltonRematchDefeat) > 0xa
	.error "Route111_Text_WiltonRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonRematchDefeat) < 0xa
	.space 0xa - (. - Route111_Text_WiltonRematchDefeat)
	.endif
	@ data/text/trainers.inc:1004 Route111_Text_WiltonPostRematch
	.globl Route111_Text_WiltonPostRematch
Route111_Text_WiltonPostRematch: @ 0x0825BF63
	.string "そんなに つよいなら\nポケモンリーグを めざすと いいよ!{EOS}"
	.if (. - Route111_Text_WiltonPostRematch) > 0x1e
	.error "Route111_Text_WiltonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_WiltonPostRematch) < 0x1e
	.space 0x1e - (. - Route111_Text_WiltonPostRematch)
	.endif
	@ data/text/trainers.inc:1007 Route111_Text_BrookeIntro (+1 aliases)
	.globl Route111_Text_BrookeIntro
Route111_Text_BrookeIntro: @ 0x0825BF81
	.string "あら あなたの ポケモン\nかなり つよそうだわ!\lぜひ おてあわせ してくれない?{EOS}"
	.if (. - Route111_Text_BrookeIntro) > 0x2a
	.error "Route111_Text_BrookeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeIntro) < 0x2a
	.space 0x2a - (. - Route111_Text_BrookeIntro)
	.endif
	@ data/text/trainers.inc:1010 Route111_Text_BrookeDefeat (+1 aliases)
	.globl Route111_Text_BrookeDefeat
Route111_Text_BrookeDefeat: @ 0x0825BFAB
	.string "つよそう じゃなくて\nつよいのね!{EOS}"
	.if (. - Route111_Text_BrookeDefeat) > 0x12
	.error "Route111_Text_BrookeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeDefeat) < 0x12
	.space 0x12 - (. - Route111_Text_BrookeDefeat)
	.endif
	@ data/text/trainers.inc:1013 Route111_Text_BrookePostBattle
	.globl Route111_Text_BrookePostBattle
Route111_Text_BrookePostBattle: @ 0x0825BFBD
	.string "あたしも がんばって\nポケモン そだてた つもりだけど\lまだ やること いっぱい あるわね!{EOS}"
	.if (. - Route111_Text_BrookePostBattle) > 0x2f
	.error "Route111_Text_BrookePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookePostBattle) < 0x2f
	.space 0x2f - (. - Route111_Text_BrookePostBattle)
	.endif
	@ data/text/trainers.inc:1016 Route111_Text_BrookeRegister
	.globl Route111_Text_BrookeRegister
Route111_Text_BrookeRegister: @ 0x0825BFEC
	.string "あなた みたいな つよいひとと\nおともだちに なりたいわ!{EOS}"
	.if (. - Route111_Text_BrookeRegister) > 0x1e
	.error "Route111_Text_BrookeRegister may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeRegister) < 0x1e
	.space 0x1e - (. - Route111_Text_BrookeRegister)
	.endif
	@ data/text/trainers.inc:1019 Route111_Text_BrookeRematchIntro (+1 aliases)
	.globl Route111_Text_BrookeRematchIntro
Route111_Text_BrookeRematchIntro: @ 0x0825C00A
	.string "ポケモンは つかう わざによって\nつよくなったり よわくなったりも するわ!\pあなたの ポケモン\nどんな わざを おぼえているの?{EOS}"
	.if (. - Route111_Text_BrookeRematchIntro) > 0x42
	.error "Route111_Text_BrookeRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeRematchIntro) < 0x42
	.space 0x42 - (. - Route111_Text_BrookeRematchIntro)
	.endif
	@ data/text/trainers.inc:1022 Route111_Text_BrookeRematchDefeat (+1 aliases)
	.globl Route111_Text_BrookeRematchDefeat
Route111_Text_BrookeRematchDefeat: @ 0x0825C04C
	.string "いい わざを おぼえているのね!{EOS}"
	.if (. - Route111_Text_BrookeRematchDefeat) > 0x11
	.error "Route111_Text_BrookeRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookeRematchDefeat) < 0x11
	.space 0x11 - (. - Route111_Text_BrookeRematchDefeat)
	.endif
	@ data/text/trainers.inc:1025 Route111_Text_BrookePostRematch
	.globl Route111_Text_BrookePostRematch
Route111_Text_BrookePostRematch: @ 0x0825C05D
	.string "あたしの ポケモン しんか させずに\nさきに わざを おぼえさせてから\lそだてた ほうが よかったかな?{EOS}"
	.if (. - Route111_Text_BrookePostRematch) > 0x35
	.error "Route111_Text_BrookePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrookePostRematch) < 0x35
	.space 0x35 - (. - Route111_Text_BrookePostRematch)
	.endif
	@ data/text/trainers.inc:1028 Route111_Text_CeliaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_CeliaIntro
Route111_Text_CeliaIntro: @ 0x0825C092
	.string "こんな ところで\nピクニックを するんじゃ なかった!{EOS}"
	.if (. - Route111_Text_CeliaIntro) != 0x1c
	.error "Route111_Text_CeliaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1031 Route111_Text_CeliaDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_CeliaDefeat
Route111_Text_CeliaDefeat: @ 0x0825C0AE
	.string "もー\nほんとに くるんじゃ なかった!{EOS}"
	.if (. - Route111_Text_CeliaDefeat) != 0x14
	.error "Route111_Text_CeliaDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1034 Route111_Text_CeliaPostBattle
	.globl Route111_Text_CeliaPostBattle
Route111_Text_CeliaPostBattle: @ 0x0825C0C2
	.string "この すなあらし じゃ\nゴーゴーゴーグルを つけて いても\lおべんとうが ひろげられないんだもん……{EOS}"
	.if (. - Route111_Text_CeliaPostBattle) > 0x33
	.error "Route111_Text_CeliaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CeliaPostBattle) < 0x33
	.space 0x33 - (. - Route111_Text_CeliaPostBattle)
	.endif
	@ data/text/trainers.inc:1037 Route111_Text_BryanIntro (+1 aliases)
	.globl Route111_Text_BryanIntro
Route111_Text_BryanIntro: @ 0x0825C0F5
	.string "きみの つよさは どのくらいか?\nその ナゾを ときあかそう!{EOS}"
	.if (. - Route111_Text_BryanIntro) > 0x20
	.error "Route111_Text_BryanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BryanIntro) < 0x20
	.space 0x20 - (. - Route111_Text_BryanIntro)
	.endif
	@ data/text/trainers.inc:1040 Route111_Text_BryanDefeat (+1 aliases)
	.globl Route111_Text_BryanDefeat
Route111_Text_BryanDefeat: @ 0x0825C115
	.string "おお そのつよさ\nナゾに みちておる!{EOS}"
	.if (. - Route111_Text_BryanDefeat) > 0x14
	.error "Route111_Text_BryanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BryanDefeat) < 0x14
	.space 0x14 - (. - Route111_Text_BryanDefeat)
	.endif
	@ data/text/trainers.inc:1043 Route111_Text_BryanPostBattle
	.globl Route111_Text_BryanPostBattle
Route111_Text_BryanPostBattle: @ 0x0825C129
	.string "この さばくには\nナゾが おおい ですぞーっ!{EOS}"
	.if (. - Route111_Text_BryanPostBattle) > 0x18
	.error "Route111_Text_BryanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BryanPostBattle) < 0x18
	.space 0x18 - (. - Route111_Text_BryanPostBattle)
	.endif
	@ data/text/trainers.inc:1046 Route111_Text_BrandenIntro (+1 aliases)
	.globl Route111_Text_BrandenIntro
Route111_Text_BrandenIntro: @ 0x0825C141
	.string "ぼくに まけて くれたら\nサンドイッチ わけて あげるよ!{EOS}"
	.if (. - Route111_Text_BrandenIntro) > 0x1e
	.error "Route111_Text_BrandenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrandenIntro) < 0x1e
	.space 0x1e - (. - Route111_Text_BrandenIntro)
	.endif
	@ data/text/trainers.inc:1049 Route111_Text_BrandenDefeat (+1 aliases)
	.globl Route111_Text_BrandenDefeat
Route111_Text_BrandenDefeat: @ 0x0825C15F
	.string "ちぇっ!\nサンドイッチに つられると おもったのに{EOS}"
	.if (. - Route111_Text_BrandenDefeat) > 0x1a
	.error "Route111_Text_BrandenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BrandenDefeat) < 0x1a
	.space 0x1a - (. - Route111_Text_BrandenDefeat)
	.endif
	@ data/text/trainers.inc:1052 Route111_Text_BrandenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_BrandenPostBattle
Route111_Text_BrandenPostBattle: @ 0x0825C179
	.string "ぼくの サンドも\nサンドイッチ だいすき なんだ{EOS}"
	.if (. - Route111_Text_BrandenPostBattle) != 0x19
	.error "Route111_Text_BrandenPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1055 Route111_Text_TyronIntro (+1 aliases)
	.globl Route111_Text_TyronIntro
Route111_Text_TyronIntro: @ 0x0825C192
	.string "ぼくは こんな ポケモンが すきなんだ!{EOS}"
	.if (. - Route111_Text_TyronIntro) > 0x15
	.error "Route111_Text_TyronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TyronIntro) < 0x15
	.space 0x15 - (. - Route111_Text_TyronIntro)
	.endif
	@ data/text/trainers.inc:1058 Route111_Text_TyronDefeat (+1 aliases)
	.globl Route111_Text_TyronDefeat
Route111_Text_TyronDefeat: @ 0x0825C1A7
	.string "ちょっと! ぼくの ポケモン\nちゃんと みてくれてた!?{EOS}"
	.if (. - Route111_Text_TyronDefeat) > 0x1d
	.error "Route111_Text_TyronDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TyronDefeat) < 0x1d
	.space 0x1d - (. - Route111_Text_TyronDefeat)
	.endif
	@ data/text/trainers.inc:1061 Route111_Text_TyronPostBattle
	.globl Route111_Text_TyronPostBattle
Route111_Text_TyronPostBattle: @ 0x0825C1C4
	.string "しょうぶを する ときって\nじぶんの ポケモンを みせびらかす\lたのしみが ゼッタイ あるよねー{EOS}"
	.if (. - Route111_Text_TyronPostBattle) > 0x31
	.error "Route111_Text_TyronPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_TyronPostBattle) < 0x31
	.space 0x31 - (. - Route111_Text_TyronPostBattle)
	.endif
	@ data/text/trainers.inc:1064 Route111_Text_CelinaIntro (+1 aliases)
	.globl Route111_Text_CelinaIntro
Route111_Text_CelinaIntro: @ 0x0825C1F5
	.string "うふん……\nわたくしを ドキドキ させてね!{EOS}"
	.if (. - Route111_Text_CelinaIntro) > 0x17
	.error "Route111_Text_CelinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CelinaIntro) < 0x17
	.space 0x17 - (. - Route111_Text_CelinaIntro)
	.endif
	@ data/text/trainers.inc:1067 Route111_Text_CelinaDefeat (+1 aliases)
	.globl Route111_Text_CelinaDefeat
Route111_Text_CelinaDefeat: @ 0x0825C20C
	.string "す ……ごい\nなんて つよいの{EOS}"
	.if (. - Route111_Text_CelinaDefeat) > 0x10
	.error "Route111_Text_CelinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CelinaDefeat) < 0x10
	.space 0x10 - (. - Route111_Text_CelinaDefeat)
	.endif
	@ data/text/trainers.inc:1070 Route111_Text_CelinaPostBattle
	.globl Route111_Text_CelinaPostBattle
Route111_Text_CelinaPostBattle: @ 0x0825C21C
	.string "ま まだ ドキドキ しているわ\nあなたって…… ステキな トレーナーね{EOS}"
	.if (. - Route111_Text_CelinaPostBattle) > 0x24
	.error "Route111_Text_CelinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_CelinaPostBattle) < 0x24
	.space 0x24 - (. - Route111_Text_CelinaPostBattle)
	.endif
	@ data/text/trainers.inc:1073 Route111_Text_HaydenIntro (+1 aliases)
	.globl Route111_Text_HaydenIntro
Route111_Text_HaydenIntro: @ 0x0825C240
	.string "おいらは いま はらが へっている\nだから ようしゃは しないぞ!{EOS}"
	.if (. - Route111_Text_HaydenIntro) > 0x22
	.error "Route111_Text_HaydenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HaydenIntro) < 0x22
	.space 0x22 - (. - Route111_Text_HaydenIntro)
	.endif
	@ data/text/trainers.inc:1076 Route111_Text_HaydenDefeat (+1 aliases)
	.globl Route111_Text_HaydenDefeat
Route111_Text_HaydenDefeat: @ 0x0825C262
	.string "ぐうぅ……{EOS}"
	.if (. - Route111_Text_HaydenDefeat) > 0x6
	.error "Route111_Text_HaydenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HaydenDefeat) < 0x6
	.space 0x6 - (. - Route111_Text_HaydenDefeat)
	.endif
	@ data/text/trainers.inc:1079 Route111_Text_HaydenPostBattle
	.globl Route111_Text_HaydenPostBattle
Route111_Text_HaydenPostBattle: @ 0x0825C268
	.string "はらが なった!\nきのみでも やいて たべようかナ?{EOS}"
	.if (. - Route111_Text_HaydenPostBattle) > 0x1b
	.error "Route111_Text_HaydenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_HaydenPostBattle) < 0x1b
	.space 0x1b - (. - Route111_Text_HaydenPostBattle)
	.endif
	@ data/text/trainers.inc:1082 Route111_Text_BiancaIntro (+1 aliases)
	.globl Route111_Text_BiancaIntro
Route111_Text_BiancaIntro: @ 0x0825C283
	.string "あなたは キンセツの ほうから きたの?\nじゃ たいりょくも バッチリね!{EOS}"
	.if (. - Route111_Text_BiancaIntro) > 0x26
	.error "Route111_Text_BiancaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BiancaIntro) < 0x26
	.space 0x26 - (. - Route111_Text_BiancaIntro)
	.endif
	@ data/text/trainers.inc:1085 Route111_Text_BiancaDefeat (+1 aliases)
	.globl Route111_Text_BiancaDefeat
Route111_Text_BiancaDefeat: @ 0x0825C2A9
	.string "あらら すごいんだー{EOS}"
	.if (. - Route111_Text_BiancaDefeat) > 0xb
	.error "Route111_Text_BiancaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route111_Text_BiancaDefeat) < 0xb
	.space 0xb - (. - Route111_Text_BiancaDefeat)
	.endif
	@ data/text/trainers.inc:1088 Route111_Text_BiancaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route111_Text_BiancaPostBattle
Route111_Text_BiancaPostBattle: @ 0x0825C2B4
	.string "この さきの みちのりは\nけっこう ながいわよ!{EOS}"
	.if (. - Route111_Text_BiancaPostBattle) != 0x19
	.error "Route111_Text_BiancaPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1091 Route112_Text_BriceIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route112_Text_BriceIntro
Route112_Text_BriceIntro: @ 0x0825C2CD
	.string "わっはっはっ!\nどうだ?\lオレと しょうぶ しないか?\lわっはっはっ!{EOS}"
	.if (. - Route112_Text_BriceIntro) != 0x24
	.error "Route112_Text_BriceIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1094 Route112_Text_BriceDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route112_Text_BriceDefeat
Route112_Text_BriceDefeat: @ 0x0825C2F1
	.string "まけた……\nわっはっはっ!{EOS}"
	.if (. - Route112_Text_BriceDefeat) != 0xe
	.error "Route112_Text_BriceDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1097 Route112_Text_BricePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route112_Text_BricePostBattle
Route112_Text_BricePostBattle: @ 0x0825C2FF
	.string "いろあざやかな キノコを たべたら……\nわ わらいが とまらない!\lわっはっはっ!{EOS}"
	.if (. - Route112_Text_BricePostBattle) != 0x2a
	.error "Route112_Text_BricePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1100 Route112_Text_TrentIntro (+1 aliases)
	.globl Route112_Text_TrentIntro
Route112_Text_TrentIntro: @ 0x0825C329
	.string "やまのぼりで きたえた オレの あしこし\nちょっとや そっとじゃ くじけないぜ!{EOS}"
	.if (. - Route112_Text_TrentIntro) > 0x29
	.error "Route112_Text_TrentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentIntro) < 0x29
	.space 0x29 - (. - Route112_Text_TrentIntro)
	.endif
	@ data/text/trainers.inc:1103 Route112_Text_TrentDefeat (+1 aliases)
	.globl Route112_Text_TrentDefeat
Route112_Text_TrentDefeat: @ 0x0825C352
	.string "あ……\nあしが つった……{EOS}"
	.if (. - Route112_Text_TrentDefeat) > 0xe
	.error "Route112_Text_TrentDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentDefeat) < 0xe
	.space 0xe - (. - Route112_Text_TrentDefeat)
	.endif
	@ data/text/trainers.inc:1106 Route112_Text_TrentPostBattle
	.globl Route112_Text_TrentPostBattle
Route112_Text_TrentPostBattle: @ 0x0825C360
	.string "なんじゅっキロも ある にもつを せおって\nやまみちを あるき つづけるんだ\lからだが じょうぶに なるぞ!{EOS}"
	.if (. - Route112_Text_TrentPostBattle) > 0x37
	.error "Route112_Text_TrentPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentPostBattle) < 0x37
	.space 0x37 - (. - Route112_Text_TrentPostBattle)
	.endif
	@ data/text/trainers.inc:1109 Route112_Text_TrentRegister
	.globl Route112_Text_TrentRegister
Route112_Text_TrentRegister: @ 0x0825C397
	.string "つった あしが いたい……\nちょっと オレの リュックから\lほうたいを だしてくれ\pって ちがうよ それは ポケナビだろ!\nもういいよ とうろく するから{EOS}"
	.if (. - Route112_Text_TrentRegister) > 0x4e
	.error "Route112_Text_TrentRegister may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRegister) < 0x4e
	.space 0x4e - (. - Route112_Text_TrentRegister)
	.endif
	@ data/text/trainers.inc:1112 Route112_Text_TrentRematchIntro (+1 aliases)
	.globl Route112_Text_TrentRematchIntro
Route112_Text_TrentRematchIntro: @ 0x0825C3E5
	.string "やまのぼりで きたえてるからな\nかなり パワフルだぞ!{EOS}"
	.if (. - Route112_Text_TrentRematchIntro) > 0x1c
	.error "Route112_Text_TrentRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRematchIntro) < 0x1c
	.space 0x1c - (. - Route112_Text_TrentRematchIntro)
	.endif
	@ data/text/trainers.inc:1115 Route112_Text_TrentRematchDefeat (+1 aliases)
	.globl Route112_Text_TrentRematchDefeat
Route112_Text_TrentRematchDefeat: @ 0x0825C401
	.string "パワーで まけたか?{EOS}"
	.if (. - Route112_Text_TrentRematchDefeat) > 0xb
	.error "Route112_Text_TrentRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRematchDefeat) < 0xb
	.space 0xb - (. - Route112_Text_TrentRematchDefeat)
	.endif
	@ data/text/trainers.inc:1118 Route112_Text_TrentRematchPostBattle
	.globl Route112_Text_TrentRematchPostBattle
Route112_Text_TrentRematchPostBattle: @ 0x0825C40C
	.string "えんとつやまの うえには\nすごい トレーナーが いるらしいぞ!\lこんど しょうぶに いくつもりだ!{EOS}"
	.if (. - Route112_Text_TrentRematchPostBattle) > 0x32
	.error "Route112_Text_TrentRematchPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_TrentRematchPostBattle) < 0x32
	.space 0x32 - (. - Route112_Text_TrentRematchPostBattle)
	.endif
	@ data/text/trainers.inc:1121 Route112_Text_LarryIntro (+1 aliases)
	.globl Route112_Text_LarryIntro
Route112_Text_LarryIntro: @ 0x0825C43E
	.string "ぼくは つよいんだ……\nまけても ないたり しないぞ……!{EOS}"
	.if (. - Route112_Text_LarryIntro) > 0x1e
	.error "Route112_Text_LarryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LarryIntro) < 0x1e
	.space 0x1e - (. - Route112_Text_LarryIntro)
	.endif
	@ data/text/trainers.inc:1124 Route112_Text_LarryDefeat (+1 aliases)
	.globl Route112_Text_LarryDefeat
Route112_Text_LarryDefeat: @ 0x0825C45C
	.string "うわーーーん!{EOS}"
	.if (. - Route112_Text_LarryDefeat) > 0x8
	.error "Route112_Text_LarryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LarryDefeat) < 0x8
	.space 0x8 - (. - Route112_Text_LarryDefeat)
	.endif
	@ data/text/trainers.inc:1127 Route112_Text_LarryPostBattle
	.globl Route112_Text_LarryPostBattle
Route112_Text_LarryPostBattle: @ 0x0825C464
	.string "おかあさんに あえなくて\nさみしいから ないてるんじゃ ないよ!\lぐすん……{EOS}"
	.if (. - Route112_Text_LarryPostBattle) > 0x27
	.error "Route112_Text_LarryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_LarryPostBattle) < 0x27
	.space 0x27 - (. - Route112_Text_LarryPostBattle)
	.endif
	@ data/text/trainers.inc:1130 Route112_Text_CarolIntro (+1 aliases)
	.globl Route112_Text_CarolIntro
Route112_Text_CarolIntro: @ 0x0825C48B
	.string "ピクニックと いえば うた!\nさあ いっしょに うたいましょ!{EOS}"
	.if (. - Route112_Text_CarolIntro) > 0x20
	.error "Route112_Text_CarolIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CarolIntro) < 0x20
	.space 0x20 - (. - Route112_Text_CarolIntro)
	.endif
	@ data/text/trainers.inc:1133 Route112_Text_CarolDefeat (+1 aliases)
	.globl Route112_Text_CarolDefeat
Route112_Text_CarolDefeat: @ 0x0825C4AB
	.string "こんなに つよいなんて……!{EOS}"
	.if (. - Route112_Text_CarolDefeat) > 0xf
	.error "Route112_Text_CarolDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CarolDefeat) < 0xf
	.space 0xf - (. - Route112_Text_CarolDefeat)
	.endif
	@ data/text/trainers.inc:1136 Route112_Text_CarolPostBattle
	.globl Route112_Text_CarolPostBattle
Route112_Text_CarolPostBattle: @ 0x0825C4BA
	.string "うたも ポケモンしょうぶも\nうまい へた なんて かんけい ないよ!\lたのしんだ ほうが かち なのよ!{EOS}"
	.if (. - Route112_Text_CarolPostBattle) > 0x35
	.error "Route112_Text_CarolPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_CarolPostBattle) < 0x35
	.space 0x35 - (. - Route112_Text_CarolPostBattle)
	.endif
	@ data/text/trainers.inc:1139 Route112_Text_BryantIntro (+1 aliases)
	.globl Route112_Text_BryantIntro
Route112_Text_BryantIntro: @ 0x0825C4EF
	.string "ほのおの ぬけみちで つかまえた\nホカホカの ポケモン みせてやろー!{EOS}"
	.if (. - Route112_Text_BryantIntro) > 0x24
	.error "Route112_Text_BryantIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_BryantIntro) < 0x24
	.space 0x24 - (. - Route112_Text_BryantIntro)
	.endif
	@ data/text/trainers.inc:1142 Route112_Text_BryantDefeat (+1 aliases)
	.globl Route112_Text_BryantDefeat
Route112_Text_BryantDefeat: @ 0x0825C513
	.string "おお ボコボコだ{EOS}"
	.if (. - Route112_Text_BryantDefeat) > 0x9
	.error "Route112_Text_BryantDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_BryantDefeat) < 0x9
	.space 0x9 - (. - Route112_Text_BryantDefeat)
	.endif
	@ data/text/trainers.inc:1145 Route112_Text_BryantPostBattle
	.globl Route112_Text_BryantPostBattle
Route112_Text_BryantPostBattle: @ 0x0825C51C
	.string "ナカナカ すてきな\nたたかいかたじゃ ないか きみぃ!{EOS}"
	.if (. - Route112_Text_BryantPostBattle) > 0x1c
	.error "Route112_Text_BryantPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_BryantPostBattle) < 0x1c
	.space 0x1c - (. - Route112_Text_BryantPostBattle)
	.endif
	@ data/text/trainers.inc:1148 Route112_Text_ShaylaIntro (+1 aliases)
	.globl Route112_Text_ShaylaIntro
Route112_Text_ShaylaIntro: @ 0x0825C538
	.string "アラ! すてきな トレーナーさん\nロマンチックな しょうぶを おねがいね!\lマアマア つよいわよ わたし!{EOS}"
	.if (. - Route112_Text_ShaylaIntro) > 0x36
	.error "Route112_Text_ShaylaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_ShaylaIntro) < 0x36
	.space 0x36 - (. - Route112_Text_ShaylaIntro)
	.endif
	@ data/text/trainers.inc:1151 Route112_Text_ShaylaDefeat (+1 aliases)
	.globl Route112_Text_ShaylaDefeat
Route112_Text_ShaylaDefeat: @ 0x0825C56E
	.string "なんて つよいのかしら\nおねえさん おどろいちゃった!{EOS}"
	.if (. - Route112_Text_ShaylaDefeat) > 0x1c
	.error "Route112_Text_ShaylaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_ShaylaDefeat) < 0x1c
	.space 0x1c - (. - Route112_Text_ShaylaDefeat)
	.endif
	@ data/text/trainers.inc:1154 Route112_Text_ShaylaPostBattle
	.globl Route112_Text_ShaylaPostBattle
Route112_Text_ShaylaPostBattle: @ 0x0825C58A
	.string "ねえ いま いそがしいの?\nえっと もし よかったら\lさっそく 2かいせん と おもって……\lん? いそがしいなら いいわ{EOS}"
	.if (. - Route112_Text_ShaylaPostBattle) > 0x3e
	.error "Route112_Text_ShaylaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route112_Text_ShaylaPostBattle) < 0x3e
	.space 0x3e - (. - Route112_Text_ShaylaPostBattle)
	.endif
	@ data/text/trainers.inc:1157 Route113_Text_JaylenIntro (+1 aliases)
	.globl Route113_Text_JaylenIntro
Route113_Text_JaylenIntro: @ 0x0825C5C8
	.string "この あたりが わりと すずしいの\nなんでか しってるかい?{EOS}"
	.if (. - Route113_Text_JaylenIntro) > 0x1f
	.error "Route113_Text_JaylenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_JaylenIntro) < 0x1f
	.space 0x1f - (. - Route113_Text_JaylenIntro)
	.endif
	@ data/text/trainers.inc:1160 Route113_Text_JaylenDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route113_Text_JaylenDefeat
Route113_Text_JaylenDefeat: @ 0x0825C5E7
	.string "ぴゅーっ!\nまけたーっ!{EOS}"
	.if (. - Route113_Text_JaylenDefeat) != 0xd
	.error "Route113_Text_JaylenDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1163 Route113_Text_JaylenPostBattle
	.globl Route113_Text_JaylenPostBattle
Route113_Text_JaylenPostBattle: @ 0x0825C5F4
	.string "かざんばいが たいようの ひかりを\nさえぎってるから ひえるんだね!\lあつがりの オレには たすかるよ!{EOS}"
	.if (. - Route113_Text_JaylenPostBattle) > 0x35
	.error "Route113_Text_JaylenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_JaylenPostBattle) < 0x35
	.space 0x35 - (. - Route113_Text_JaylenPostBattle)
	.endif
	@ data/text/trainers.inc:1166 Route113_Text_DillonIntro (+1 aliases)
	.globl Route113_Text_DillonIntro
Route113_Text_DillonIntro: @ 0x0825C629
	.string "やまの ふんかは\nちきゅうが いきている しょうこ!{EOS}"
	.if (. - Route113_Text_DillonIntro) > 0x1b
	.error "Route113_Text_DillonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_DillonIntro) < 0x1b
	.space 0x1b - (. - Route113_Text_DillonIntro)
	.endif
	@ data/text/trainers.inc:1169 Route113_Text_DillonDefeat (+1 aliases)
	.globl Route113_Text_DillonDefeat
Route113_Text_DillonDefeat: @ 0x0825C644
	.string "つよいな おまえーっ!{EOS}"
	.if (. - Route113_Text_DillonDefeat) > 0xc
	.error "Route113_Text_DillonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_DillonDefeat) < 0xc
	.space 0xc - (. - Route113_Text_DillonDefeat)
	.endif
	@ data/text/trainers.inc:1172 Route113_Text_DillonPostBattle
	.globl Route113_Text_DillonPostBattle
Route113_Text_DillonPostBattle: @ 0x0825C650
	.string "ごほ がへっ!\nはいが はいに はいった……\pうけなかった……\nさむい…… ブルブル……{EOS}"
	.if (. - Route113_Text_DillonPostBattle) > 0x2d
	.error "Route113_Text_DillonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_DillonPostBattle) < 0x2d
	.space 0x2d - (. - Route113_Text_DillonPostBattle)
	.endif
	@ data/text/trainers.inc:1175 Route113_Text_MadelineIntro (+1 aliases)
	.globl Route113_Text_MadelineIntro
Route113_Text_MadelineIntro: @ 0x0825C67D
	.string "あたしの ドンメルちゃんに\nかざんばいが かからないように\lパラソルを さしているの{EOS}"
	.if (. - Route113_Text_MadelineIntro) > 0x2b
	.error "Route113_Text_MadelineIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineIntro) < 0x2b
	.space 0x2b - (. - Route113_Text_MadelineIntro)
	.endif
	@ data/text/trainers.inc:1178 Route113_Text_MadelineDefeat (+1 aliases)
	.globl Route113_Text_MadelineDefeat
Route113_Text_MadelineDefeat: @ 0x0825C6A8
	.string "はあ はあ……\nつかれましたわ……{EOS}"
	.if (. - Route113_Text_MadelineDefeat) > 0x12
	.error "Route113_Text_MadelineDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineDefeat) < 0x12
	.space 0x12 - (. - Route113_Text_MadelineDefeat)
	.endif
	@ data/text/trainers.inc:1181 Route113_Text_MadelinePostBattle
	.globl Route113_Text_MadelinePostBattle
Route113_Text_MadelinePostBattle: @ 0x0825C6BA
	.string "とても おつよいのね\nおねえさん かんしん しちゃったわ{EOS}"
	.if (. - Route113_Text_MadelinePostBattle) > 0x1d
	.error "Route113_Text_MadelinePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelinePostBattle) < 0x1d
	.space 0x1d - (. - Route113_Text_MadelinePostBattle)
	.endif
	@ data/text/trainers.inc:1184 Route113_Text_MadelineRegister
	.globl Route113_Text_MadelineRegister
Route113_Text_MadelineRegister: @ 0x0825C6D7
	.string "ね ちょっと パラソルに はいって\nポケナビを とうろく していって!{EOS}"
	.if (. - Route113_Text_MadelineRegister) > 0x24
	.error "Route113_Text_MadelineRegister may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineRegister) < 0x24
	.space 0x24 - (. - Route113_Text_MadelineRegister)
	.endif
	@ data/text/trainers.inc:1187 Route113_Text_MadelineRematchIntro (+1 aliases)
	.globl Route113_Text_MadelineRematchIntro
Route113_Text_MadelineRematchIntro: @ 0x0825C6FB
	.string "おひさしぶりね\nよろしかったら しょうぶ しません?{EOS}"
	.if (. - Route113_Text_MadelineRematchIntro) > 0x1b
	.error "Route113_Text_MadelineRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelineRematchIntro) < 0x1b
	.space 0x1b - (. - Route113_Text_MadelineRematchIntro)
	.endif
	@ data/text/trainers.inc:1190 Route113_Text_MadelineRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route113_Text_MadelineRematchDefeat
Route113_Text_MadelineRematchDefeat: @ 0x0825C716
	.string "おみごと ですわ{EOS}"
	.if (. - Route113_Text_MadelineRematchDefeat) != 0x9
	.error "Route113_Text_MadelineRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1193 Route113_Text_MadelinePostRematch
	.globl Route113_Text_MadelinePostRematch
Route113_Text_MadelinePostRematch: @ 0x0825C71F
	.string "あいかわらず おつよいのね\nおねえさん かんしん しちゃったわ{EOS}"
	.if (. - Route113_Text_MadelinePostRematch) > 0x20
	.error "Route113_Text_MadelinePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_MadelinePostRematch) < 0x20
	.space 0x20 - (. - Route113_Text_MadelinePostRematch)
	.endif
	@ data/text/trainers.inc:1196 Route113_Text_LaoIntro (+1 aliases)
	.globl Route113_Text_LaoIntro
Route113_Text_LaoIntro: @ 0x0825C73F
	.string "はいの なかから ドロロンッ!!\nしょうぶで ござる!{EOS}"
	.if (. - Route113_Text_LaoIntro) > 0x1c
	.error "Route113_Text_LaoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoIntro) < 0x1c
	.space 0x1c - (. - Route113_Text_LaoIntro)
	.endif
	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl Route113_Text_LaoDefeat_Copy_Rom_25C75B
Route113_Text_LaoDefeat_Copy_Rom_25C75B: @ 0x0825C75B
	.string "まいったで ござる{EOS}"
	.if (. - Route113_Text_LaoDefeat_Copy_Rom_25C75B) > 0xa
	.error "Route113_Text_LaoDefeat_Copy_Rom_25C75B may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoDefeat_Copy_Rom_25C75B) < 0xa
	.space 0xa - (. - Route113_Text_LaoDefeat_Copy_Rom_25C75B)
	.endif
	@ data/text/trainers.inc:1202 Route113_Text_LaoPostBattle
	.globl Route113_Text_LaoPostBattle
Route113_Text_LaoPostBattle: @ 0x0825C765
	.string "もっと かくれかたを けんきゅう しよう\nそれでは しつれいするで ござる{EOS}"
	.if (. - Route113_Text_LaoPostBattle) > 0x26
	.error "Route113_Text_LaoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoPostBattle) < 0x26
	.space 0x26 - (. - Route113_Text_LaoPostBattle)
	.endif
	@ data/text/trainers.inc:1205 Route113_Text_LaoRegister
	.globl Route113_Text_LaoRegister
Route113_Text_LaoRegister: @ 0x0825C78B
	.string "やあ! にんぽう\nポケナビ とうろくのじゅつで ござる!{EOS}"
	.if (. - Route113_Text_LaoRegister) > 0x1d
	.error "Route113_Text_LaoRegister may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoRegister) < 0x1d
	.space 0x1d - (. - Route113_Text_LaoRegister)
	.endif
	@ data/text/trainers.inc:1208 Route113_Text_LaoRematchIntro (+1 aliases)
	.globl Route113_Text_LaoRematchIntro
Route113_Text_LaoRematchIntro: @ 0x0825C7A8
	.string "はいの なかから ドロロロンッ!!\nしょうぶで ござる!{EOS}"
	.if (. - Route113_Text_LaoRematchIntro) > 0x1d
	.error "Route113_Text_LaoRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoRematchIntro) < 0x1d
	.space 0x1d - (. - Route113_Text_LaoRematchIntro)
	.endif
	@ data/text/trainers.inc:1199 Route113_Text_LaoDefeat (+2 aliases)
	.globl Route113_Text_LaoDefeat_Copy_Rom_25C7C5
Route113_Text_LaoDefeat_Copy_Rom_25C7C5: @ 0x0825C7C5
	.string "まいったで ござる{EOS}"
	.if (. - Route113_Text_LaoDefeat_Copy_Rom_25C7C5) > 0xa
	.error "Route113_Text_LaoDefeat_Copy_Rom_25C7C5 may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoDefeat_Copy_Rom_25C7C5) < 0xa
	.space 0xa - (. - Route113_Text_LaoDefeat_Copy_Rom_25C7C5)
	.endif
	@ data/text/trainers.inc:1214 Route113_Text_LaoPostRematch
	.globl Route113_Text_LaoPostRematch
Route113_Text_LaoPostRematch: @ 0x0825C7CF
	.string "かくれかたは よかったが\nしょうぶが いまいち だった……\pそれでは しつれいするで ござる{EOS}"
	.if (. - Route113_Text_LaoPostRematch) > 0x2f
	.error "Route113_Text_LaoPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LaoPostRematch) < 0x2f
	.space 0x2f - (. - Route113_Text_LaoPostRematch)
	.endif
	@ data/text/trainers.inc:1217 Route113_Text_LungIntro (+1 aliases)
	.globl Route113_Text_LungIntro
Route113_Text_LungIntro: @ 0x0825C7FE
	.string "みつけてくれて ありがとう!\nでも しょうぶは べつだよ!{EOS}"
	.if (. - Route113_Text_LungIntro) > 0x1e
	.error "Route113_Text_LungIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LungIntro) < 0x1e
	.space 0x1e - (. - Route113_Text_LungIntro)
	.endif
	@ data/text/trainers.inc:1220 Route113_Text_LungDefeat (+1 aliases)
	.globl Route113_Text_LungDefeat
Route113_Text_LungDefeat: @ 0x0825C81C
	.string "にんぽう かざんばい がくれ!\p…… って もう おわり?{EOS}"
	.if (. - Route113_Text_LungDefeat) > 0x1e
	.error "Route113_Text_LungDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LungDefeat) < 0x1e
	.space 0x1e - (. - Route113_Text_LungDefeat)
	.endif
	@ data/text/trainers.inc:1223 Route113_Text_LungPostBattle
	.globl Route113_Text_LungPostBattle
Route113_Text_LungPostBattle: @ 0x0825C83A
	.string "かくれていて なにが しんぱいって\nだれも とおらないと さびしいんだよね{EOS}"
	.if (. - Route113_Text_LungPostBattle) > 0x26
	.error "Route113_Text_LungPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LungPostBattle) < 0x26
	.space 0x26 - (. - Route113_Text_LungPostBattle)
	.endif
	@ data/text/trainers.inc:1226 Route113_Text_ToriIntro (+1 aliases)
	.globl Route113_Text_ToriIntro
Route113_Text_ToriIntro: @ 0x0825C860
	.string "ナナ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!{EOS}"
	.if (. - Route113_Text_ToriIntro) > 0x29
	.error "Route113_Text_ToriIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriIntro) < 0x29
	.space 0x29 - (. - Route113_Text_ToriIntro)
	.endif
	@ data/text/trainers.inc:1229 Route113_Text_ToriDefeat (+1 aliases)
	.globl Route113_Text_ToriDefeat
Route113_Text_ToriDefeat: @ 0x0825C889
	.string "ナナ『まけちゃった\nつまんないから かざんばい あつめよ!{EOS}"
	.if (. - Route113_Text_ToriDefeat) > 0x1e
	.error "Route113_Text_ToriDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriDefeat) < 0x1e
	.space 0x1e - (. - Route113_Text_ToriDefeat)
	.endif
	@ data/text/trainers.inc:1232 Route113_Text_ToriPostBattle
	.globl Route113_Text_ToriPostBattle
Route113_Text_ToriPostBattle: @ 0x0825C8A7
	.string "ナナ『かざんばい どれくらい たまったかな?\nしろいビードロ つくれると いいのにね!{EOS}"
	.if (. - Route113_Text_ToriPostBattle) > 0x2c
	.error "Route113_Text_ToriPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriPostBattle) < 0x2c
	.space 0x2c - (. - Route113_Text_ToriPostBattle)
	.endif
	@ data/text/trainers.inc:1235 Route113_Text_ToriNotEnoughMons (+1 aliases)
	.globl Route113_Text_ToriNotEnoughMons
Route113_Text_ToriNotEnoughMons: @ 0x0825C8D3
	.string "ナナ『あたしたち 2たい2で たたかいたいの\nそうしないと まけちゃうもん!{EOS}"
	.if (. - Route113_Text_ToriNotEnoughMons) > 0x27
	.error "Route113_Text_ToriNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_ToriNotEnoughMons) < 0x27
	.space 0x27 - (. - Route113_Text_ToriNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1238 Route113_Text_TiaIntro (+1 aliases)
	.globl Route113_Text_TiaIntro
Route113_Text_TiaIntro: @ 0x0825C8FA
	.string "ネネ『ふたりで かざんばい あつめてるよ\nでも ポケモンしょうぶも するんだよ!{EOS}"
	.if (. - Route113_Text_TiaIntro) > 0x29
	.error "Route113_Text_TiaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaIntro) < 0x29
	.space 0x29 - (. - Route113_Text_TiaIntro)
	.endif
	@ data/text/trainers.inc:1241 Route113_Text_TiaDefeat (+1 aliases)
	.globl Route113_Text_TiaDefeat
Route113_Text_TiaDefeat: @ 0x0825C923
	.string "ネネ『かてなかった\nつまんないから かざんばい あつめよ!{EOS}"
	.if (. - Route113_Text_TiaDefeat) > 0x1e
	.error "Route113_Text_TiaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaDefeat) < 0x1e
	.space 0x1e - (. - Route113_Text_TiaDefeat)
	.endif
	@ data/text/trainers.inc:1244 Route113_Text_TiaPostBattle
	.globl Route113_Text_TiaPostBattle
Route113_Text_TiaPostBattle: @ 0x0825C941
	.string "ネネ『かざんばい けっこう たまったよ!\nもう しろいビードロ つくれるよ きっと!{EOS}"
	.if (. - Route113_Text_TiaPostBattle) > 0x2b
	.error "Route113_Text_TiaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaPostBattle) < 0x2b
	.space 0x2b - (. - Route113_Text_TiaPostBattle)
	.endif
	@ data/text/trainers.inc:1247 Route113_Text_TiaNotEnoughMons (+1 aliases)
	.globl Route113_Text_TiaNotEnoughMons
Route113_Text_TiaNotEnoughMons: @ 0x0825C96C
	.string "ネネ『あたしたち 2たい2で たたかいたいの\nそうしないと かてないもん!{EOS}"
	.if (. - Route113_Text_TiaNotEnoughMons) > 0x26
	.error "Route113_Text_TiaNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_TiaNotEnoughMons) < 0x26
	.space 0x26 - (. - Route113_Text_TiaNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1250 Route113_Text_CobyIntro (+1 aliases)
	.globl Route113_Text_CobyIntro
Route113_Text_CobyIntro: @ 0x0825C992
	.string "おまえ なんか この つばさで\nふきとばして やるぜっ!{EOS}"
	.if (. - Route113_Text_CobyIntro) > 0x1d
	.error "Route113_Text_CobyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_CobyIntro) < 0x1d
	.space 0x1d - (. - Route113_Text_CobyIntro)
	.endif
	@ data/text/trainers.inc:1253 Route113_Text_CobyDefeat (+1 aliases)
	.globl Route113_Text_CobyDefeat
Route113_Text_CobyDefeat: @ 0x0825C9AF
	.string "え あれ?{EOS}"
	.if (. - Route113_Text_CobyDefeat) > 0x6
	.error "Route113_Text_CobyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_CobyDefeat) < 0x6
	.space 0x6 - (. - Route113_Text_CobyDefeat)
	.endif
	@ data/text/trainers.inc:1256 Route113_Text_CobyPostBattle
	.globl Route113_Text_CobyPostBattle
Route113_Text_CobyPostBattle: @ 0x0825C9B5
	.string "そんなに あっさり かたれると\nなにを いって いいか わからない……{EOS}"
	.if (. - Route113_Text_CobyPostBattle) > 0x24
	.error "Route113_Text_CobyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_CobyPostBattle) < 0x24
	.space 0x24 - (. - Route113_Text_CobyPostBattle)
	.endif
	@ data/text/trainers.inc:1259 Route113_Text_SophieIntro (+1 aliases)
	.globl Route113_Text_SophieIntro
Route113_Text_SophieIntro: @ 0x0825C9D9
	.string "あったかくて ねむく なっちゃう\nねむけ ざましに あいてを してよ!{EOS}"
	.if (. - Route113_Text_SophieIntro) > 0x24
	.error "Route113_Text_SophieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_SophieIntro) < 0x24
	.space 0x24 - (. - Route113_Text_SophieIntro)
	.endif
	@ data/text/trainers.inc:1262 Route113_Text_SophieDefeat (+1 aliases)
	.globl Route113_Text_SophieDefeat
Route113_Text_SophieDefeat: @ 0x0825C9FD
	.string "きっと これは ユメなのよ……{EOS}"
	.if (. - Route113_Text_SophieDefeat) > 0x10
	.error "Route113_Text_SophieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_SophieDefeat) < 0x10
	.space 0x10 - (. - Route113_Text_SophieDefeat)
	.endif
	@ data/text/trainers.inc:1265 Route113_Text_SophiePostBattle
	.globl Route113_Text_SophiePostBattle
Route113_Text_SophiePostBattle: @ 0x0825CA0D
	.string "まけて くやしい から\nもう ここで フテね しちゃうわ!\lぐーぐー{EOS}"
	.if (. - Route113_Text_SophiePostBattle) > 0x23
	.error "Route113_Text_SophiePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_SophiePostBattle) < 0x23
	.space 0x23 - (. - Route113_Text_SophiePostBattle)
	.endif
	@ data/text/trainers.inc:1268 Route113_Text_LawrenceIntro (+1 aliases)
	.globl Route113_Text_LawrenceIntro
Route113_Text_LawrenceIntro: @ 0x0825CA30
	.string "もしかして かざんばい あつめの\nとちゅう だった?{EOS}"
	.if (. - Route113_Text_LawrenceIntro) > 0x1b
	.error "Route113_Text_LawrenceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LawrenceIntro) < 0x1b
	.space 0x1b - (. - Route113_Text_LawrenceIntro)
	.endif
	@ data/text/trainers.inc:1271 Route113_Text_LawrenceDefeat (+1 aliases)
	.globl Route113_Text_LawrenceDefeat
Route113_Text_LawrenceDefeat: @ 0x0825CA4B
	.string "えへへ まけちゃったね{EOS}"
	.if (. - Route113_Text_LawrenceDefeat) > 0xc
	.error "Route113_Text_LawrenceDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_LawrenceDefeat) < 0xc
	.space 0xc - (. - Route113_Text_LawrenceDefeat)
	.endif
	@ data/text/trainers.inc:1274 Route113_Text_LawrencePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route113_Text_LawrencePostBattle
Route113_Text_LawrencePostBattle: @ 0x0825CA57
	.string "ぼくも はいに もぐっちゃおう かしら{EOS}"
	.if (. - Route113_Text_LawrencePostBattle) != 0x14
	.error "Route113_Text_LawrencePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1277 Route113_Text_WyattIntro (+1 aliases)
	.globl Route113_Text_WyattIntro
Route113_Text_WyattIntro: @ 0x0825CA6B
	.string "ぼ ボクと たたかうって いうんですか!\nまだ つかまえた ばかりなのに!{EOS}"
	.if (. - Route113_Text_WyattIntro) > 0x26
	.error "Route113_Text_WyattIntro may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_WyattIntro) < 0x26
	.space 0x26 - (. - Route113_Text_WyattIntro)
	.endif
	@ data/text/trainers.inc:1280 Route113_Text_WyattDefeat (+1 aliases)
	.globl Route113_Text_WyattDefeat
Route113_Text_WyattDefeat: @ 0x0825CA91
	.string "か かって うれしい ですか!\nこんな ボクに かって うれしいですか!{EOS}"
	.if (. - Route113_Text_WyattDefeat) > 0x25
	.error "Route113_Text_WyattDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_WyattDefeat) < 0x25
	.space 0x25 - (. - Route113_Text_WyattDefeat)
	.endif
	@ data/text/trainers.inc:1283 Route113_Text_WyattPostBattle
	.globl Route113_Text_WyattPostBattle
Route113_Text_WyattPostBattle: @ 0x0825CAB6
	.string "はいしゃに こえを かけて くれるって\nいうんですか!\lか カッコいい ですね! ふん!{EOS}"
	.if (. - Route113_Text_WyattPostBattle) > 0x2d
	.error "Route113_Text_WyattPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route113_Text_WyattPostBattle) < 0x2d
	.space 0x2d - (. - Route113_Text_WyattPostBattle)
	.endif
	@ data/text/trainers.inc:1286 Route114_Text_LennyIntro (+1 aliases)
	.globl Route114_Text_LennyIntro
Route114_Text_LennyIntro: @ 0x0825CAE3
	.string "やっほーっ!\p……\pこだまの かわりに\nやっほー! って いってくれよ!{EOS}"
	.if (. - Route114_Text_LennyIntro) > 0x25
	.error "Route114_Text_LennyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LennyIntro) < 0x25
	.space 0x25 - (. - Route114_Text_LennyIntro)
	.endif
	@ data/text/trainers.inc:1289 Route114_Text_LennyDefeat (+1 aliases)
	.globl Route114_Text_LennyDefeat
Route114_Text_LennyDefeat: @ 0x0825CB08
	.string "やっほーっ!{EOS}"
	.if (. - Route114_Text_LennyDefeat) > 0x7
	.error "Route114_Text_LennyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LennyDefeat) < 0x7
	.space 0x7 - (. - Route114_Text_LennyDefeat)
	.endif
	@ data/text/trainers.inc:1292 Route114_Text_LennyPostBattle
	.globl Route114_Text_LennyPostBattle
Route114_Text_LennyPostBattle: @ 0x0825CB0F
	.string "こどものころ こだま って\nむこうの やまにいる モノマネさんが\lやっほー! って いってると おもってた{EOS}"
	.if (. - Route114_Text_LennyPostBattle) > 0x36
	.error "Route114_Text_LennyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LennyPostBattle) < 0x36
	.space 0x36 - (. - Route114_Text_LennyPostBattle)
	.endif
	@ data/text/trainers.inc:1295 Route114_Text_LucasIntro (+1 aliases)
	.globl Route114_Text_LucasIntro
Route114_Text_LucasIntro: @ 0x0825CB45
	.string "じゅんびを おこたる もの\nやまに のぼるべからず!{EOS}"
	.if (. - Route114_Text_LucasIntro) > 0x1b
	.error "Route114_Text_LucasIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LucasIntro) < 0x1b
	.space 0x1b - (. - Route114_Text_LucasIntro)
	.endif
	@ data/text/trainers.inc:1298 Route114_Text_LucasDefeat (+1 aliases)
	.globl Route114_Text_LucasDefeat
Route114_Text_LucasDefeat: @ 0x0825CB60
	.string "やまは こわい ところだ……{EOS}"
	.if (. - Route114_Text_LucasDefeat) > 0xf
	.error "Route114_Text_LucasDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LucasDefeat) < 0xf
	.space 0xf - (. - Route114_Text_LucasDefeat)
	.endif
	@ data/text/trainers.inc:1301 Route114_Text_LucasPostBattle
	.globl Route114_Text_LucasPostBattle
Route114_Text_LucasPostBattle: @ 0x0825CB6F
	.string "ふゆの やまは なだれや ふぶきで\nそうなんする きけんが おおいぞ!{EOS}"
	.if (. - Route114_Text_LucasPostBattle) > 0x24
	.error "Route114_Text_LucasPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_LucasPostBattle) < 0x24
	.space 0x24 - (. - Route114_Text_LucasPostBattle)
	.endif
	@ data/text/trainers.inc:1304 Route114_Text_ShaneIntro (+1 aliases)
	.globl Route114_Text_ShaneIntro
Route114_Text_ShaneIntro: @ 0x0825CB93
	.string "キャンプの たのしみと いえば\nつりに はなびに きもだめし!\pだけど いちばんは\nポケモンしょうぶ だね!{EOS}"
	.if (. - Route114_Text_ShaneIntro) > 0x37
	.error "Route114_Text_ShaneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ShaneIntro) < 0x37
	.space 0x37 - (. - Route114_Text_ShaneIntro)
	.endif
	@ data/text/trainers.inc:1307 Route114_Text_ShaneDefeat (+1 aliases)
	.globl Route114_Text_ShaneDefeat
Route114_Text_ShaneDefeat: @ 0x0825CBCA
	.string "つよすぎるーっ!{EOS}"
	.if (. - Route114_Text_ShaneDefeat) > 0x9
	.error "Route114_Text_ShaneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ShaneDefeat) < 0x9
	.space 0x9 - (. - Route114_Text_ShaneDefeat)
	.endif
	@ data/text/trainers.inc:1310 Route114_Text_ShanePostBattle
	.globl Route114_Text_ShanePostBattle
Route114_Text_ShanePostBattle: @ 0x0825CBD3
	.string "ぼくね ポケモンと いっしょに\nキャンプ できるだけで しあわせ だよ{EOS}"
	.if (. - Route114_Text_ShanePostBattle) > 0x24
	.error "Route114_Text_ShanePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ShanePostBattle) < 0x24
	.space 0x24 - (. - Route114_Text_ShanePostBattle)
	.endif
	@ data/text/trainers.inc:1313 Route114_Text_NancyIntro (+1 aliases)
	.globl Route114_Text_NancyIntro
Route114_Text_NancyIntro: @ 0x0825CBF7
	.string "しょくごの うんどう!\nわたしと しょうぶ しましょうよ!{EOS}"
	.if (. - Route114_Text_NancyIntro) > 0x1e
	.error "Route114_Text_NancyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NancyIntro) < 0x1e
	.space 0x1e - (. - Route114_Text_NancyIntro)
	.endif
	@ data/text/trainers.inc:1316 Route114_Text_NancyDefeat (+1 aliases)
	.globl Route114_Text_NancyDefeat
Route114_Text_NancyDefeat: @ 0x0825CC15
	.string "まけちゃったー!{EOS}"
	.if (. - Route114_Text_NancyDefeat) > 0x9
	.error "Route114_Text_NancyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NancyDefeat) < 0x9
	.space 0x9 - (. - Route114_Text_NancyDefeat)
	.endif
	@ data/text/trainers.inc:1319 Route114_Text_NancyPostBattle
	.globl Route114_Text_NancyPostBattle
Route114_Text_NancyPostBattle: @ 0x0825CC1E
	.string "おいしい ごはんも たべたし\nなんだか ねむくなって きたわ……{EOS}"
	.if (. - Route114_Text_NancyPostBattle) > 0x21
	.error "Route114_Text_NancyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NancyPostBattle) < 0x21
	.space 0x21 - (. - Route114_Text_NancyPostBattle)
	.endif
	@ data/text/trainers.inc:1322 Route114_Text_SteveIntro (+1 aliases)
	.globl Route114_Text_SteveIntro
Route114_Text_SteveIntro: @ 0x0825CC3F
	.string "うふふふふふ……\nボクの ポケモンと しょうぶしない?{EOS}"
	.if (. - Route114_Text_SteveIntro) > 0x1c
	.error "Route114_Text_SteveIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveIntro) < 0x1c
	.space 0x1c - (. - Route114_Text_SteveIntro)
	.endif
	@ data/text/trainers.inc:1325 Route114_Text_SteveDefeat (+1 aliases)
	.globl Route114_Text_SteveDefeat
Route114_Text_SteveDefeat: @ 0x0825CC5B
	.string "ボ ボクの ポケモン……{EOS}"
	.if (. - Route114_Text_SteveDefeat) > 0xd
	.error "Route114_Text_SteveDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveDefeat) < 0xd
	.space 0xd - (. - Route114_Text_SteveDefeat)
	.endif
	@ data/text/trainers.inc:1328 Route114_Text_StevePostBattle
	.globl Route114_Text_StevePostBattle
Route114_Text_StevePostBattle: @ 0x0825CC68
	.string "からだが おおきくて ゴツゴツ かたくて\nおおきな ツノと するどい キバ……\lうふふふふ……\lそんな ポケモンが ほしいなぁ……{EOS}"
	.if (. - Route114_Text_StevePostBattle) > 0x42
	.error "Route114_Text_StevePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_StevePostBattle) < 0x42
	.space 0x42 - (. - Route114_Text_StevePostBattle)
	.endif
	@ data/text/trainers.inc:1331 Route114_Text_SteveRegister
	.globl Route114_Text_SteveRegister
Route114_Text_SteveRegister: @ 0x0825CCAA
	.string "お おぼえてろっ! ……いや\nわすれられない ように こうしてやる!{EOS}"
	.if (. - Route114_Text_SteveRegister) > 0x23
	.error "Route114_Text_SteveRegister may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveRegister) < 0x23
	.space 0x23 - (. - Route114_Text_SteveRegister)
	.endif

	@ data/text/trainers.inc:1334 Route114_Text_SteveRematchIntro (+1 aliases)
	.globl Route114_Text_SteveRematchIntro
Route114_Text_SteveRematchIntro: @ 0x0825CCCD
	.string "うふふふふふ……\nボクの ポケモンと しょうぶ しようよ{EOS}"
	.if (. - Route114_Text_SteveRematchIntro) > 0x1d
	.error "Route114_Text_SteveRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveRematchIntro) < 0x1d
	.space 0x1d - (. - Route114_Text_SteveRematchIntro)
	.endif
	@ data/text/trainers.inc:1337 Route114_Text_SteveRematchDefeat (+1 aliases)
	.globl Route114_Text_SteveRematchDefeat
Route114_Text_SteveRematchDefeat: @ 0x0825CCEA
	.string "ああ ポケモン みることが できて\nしあわせ だ……{EOS}"
	.if (. - Route114_Text_SteveRematchDefeat) > 0x1b
	.error "Route114_Text_SteveRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_SteveRematchDefeat) < 0x1b
	.space 0x1b - (. - Route114_Text_SteveRematchDefeat)
	.endif
	@ data/text/trainers.inc:1340 Route114_Text_StevePostRematch
	.globl Route114_Text_StevePostRematch
Route114_Text_StevePostRematch: @ 0x0825CD05
	.string "うふふふふふ……\pポケモンの たたかっている すがたに\nぞくぞく するんだ ボク{EOS}"
	.if (. - Route114_Text_StevePostRematch) > 0x29
	.error "Route114_Text_StevePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_StevePostRematch) < 0x29
	.space 0x29 - (. - Route114_Text_StevePostRematch)
	.endif
	@ data/text/trainers.inc:1343 Route114_Text_BernieIntro (+1 aliases)
	.globl Route114_Text_BernieIntro
Route114_Text_BernieIntro: @ 0x0825CD2E
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい しておけよ!{EOS}"
	.if (. - Route114_Text_BernieIntro) > 0x28
	.error "Route114_Text_BernieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieIntro) < 0x28
	.space 0x28 - (. - Route114_Text_BernieIntro)
	.endif
	@ data/text/trainers.inc:1346 Route114_Text_BernieDefeat (+1 aliases)
	.globl Route114_Text_BernieDefeat
Route114_Text_BernieDefeat: @ 0x0825CD56
	.string "しょうか かつどう\nありがとう! ってか{EOS}"
	.if (. - Route114_Text_BernieDefeat) > 0x15
	.error "Route114_Text_BernieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieDefeat) < 0x15
	.space 0x15 - (. - Route114_Text_BernieDefeat)
	.endif
	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl Route114_Text_BerniePostBattle_Copy_Rom_25CD6B
Route114_Text_BerniePostBattle_Copy_Rom_25CD6B: @ 0x0825CD6B
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!{EOS}"
	.if (. - Route114_Text_BerniePostBattle_Copy_Rom_25CD6B) > 0x27
	.error "Route114_Text_BerniePostBattle_Copy_Rom_25CD6B may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BerniePostBattle_Copy_Rom_25CD6B) < 0x27
	.space 0x27 - (. - Route114_Text_BerniePostBattle_Copy_Rom_25CD6B)
	.endif
	@ data/text/trainers.inc:1352 Route114_Text_BernieRegister
	.globl Route114_Text_BernieRegister
Route114_Text_BernieRegister: @ 0x0825CD92
	.string "もえあがった きもちの まま\nポケナビに とうろく しあおう!{EOS}"
	.if (. - Route114_Text_BernieRegister) > 0x20
	.error "Route114_Text_BernieRegister may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieRegister) < 0x20
	.space 0x20 - (. - Route114_Text_BernieRegister)
	.endif
	@ data/text/trainers.inc:1355 Route114_Text_BernieRematchIntro (+1 aliases)
	.globl Route114_Text_BernieRematchIntro
Route114_Text_BernieRematchIntro: @ 0x0825CDB2
	.string "キャンプファイヤー するとき\nはなびを するとき\lみずを ようい するように なったか!?{EOS}"
	.if (. - Route114_Text_BernieRematchIntro) > 0x2e
	.error "Route114_Text_BernieRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieRematchIntro) < 0x2e
	.space 0x2e - (. - Route114_Text_BernieRematchIntro)
	.endif
	@ data/text/trainers.inc:1358 Route114_Text_BernieRematchDefeat (+1 aliases)
	.globl Route114_Text_BernieRematchDefeat
Route114_Text_BernieRematchDefeat: @ 0x0825CDE0
	.string "もえあがる まえに\nけされた! ってか{EOS}"
	.if (. - Route114_Text_BernieRematchDefeat) > 0x14
	.error "Route114_Text_BernieRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BernieRematchDefeat) < 0x14
	.space 0x14 - (. - Route114_Text_BernieRematchDefeat)
	.endif
	@ data/text/trainers.inc:1349 Route114_Text_BerniePostBattle (+1 aliases)
	.globl Route114_Text_BerniePostBattle_Copy_Rom_25CDF4
Route114_Text_BerniePostBattle_Copy_Rom_25CDF4: @ 0x0825CDF4
	.string "ほんと ひのようじん だけは おこたるな!\nひを あまく みるんじゃないぜ!{EOS}"
	.if (. - Route114_Text_BerniePostBattle_Copy_Rom_25CDF4) > 0x27
	.error "Route114_Text_BerniePostBattle_Copy_Rom_25CDF4 may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_BerniePostBattle_Copy_Rom_25CDF4) < 0x27
	.space 0x27 - (. - Route114_Text_BerniePostBattle_Copy_Rom_25CDF4)
	.endif
	@ data/text/trainers.inc:1364 Route114_Text_ClaudeIntro (+1 aliases)
	.globl Route114_Text_ClaudeIntro
Route114_Text_ClaudeIntro: @ 0x0825CE1B
	.string "つりで しょうぶ すると\nきみには かちめが ないだろう\lポケモンで かかってきなさい!{EOS}"
	.if (. - Route114_Text_ClaudeIntro) > 0x2d
	.error "Route114_Text_ClaudeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ClaudeIntro) < 0x2d
	.space 0x2d - (. - Route114_Text_ClaudeIntro)
	.endif
	@ data/text/trainers.inc:1367 Route114_Text_ClaudeDefeat (+1 aliases)
	.globl Route114_Text_ClaudeDefeat
Route114_Text_ClaudeDefeat: @ 0x0825CE48
	.string "つりの しょうぶなら かってた……{EOS}"
	.if (. - Route114_Text_ClaudeDefeat) > 0x12
	.error "Route114_Text_ClaudeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_ClaudeDefeat) < 0x12
	.space 0x12 - (. - Route114_Text_ClaudeDefeat)
	.endif
	@ data/text/trainers.inc:1370 Route114_Text_ClaudePostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route114_Text_ClaudePostBattle
Route114_Text_ClaudePostBattle: @ 0x0825CE5A
	.string "りゅうせいのたきで\nおおものでも つると しようかな\lあそこの たきには なにか いそうだからね{EOS}"
	.if (. - Route114_Text_ClaudePostBattle) != 0x31
	.error "Route114_Text_ClaudePostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1373 Route114_Text_NolanIntro (+1 aliases)
	.globl Route114_Text_NolanIntro
Route114_Text_NolanIntro: @ 0x0825CE8B
	.string "つりも すき だが\nしょうぶも すき!\pしょうぶを いどまれたら\nつりの さいちゅうでも ことわらないよ!{EOS}"
	.if (. - Route114_Text_NolanIntro) > 0x36
	.error "Route114_Text_NolanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NolanIntro) < 0x36
	.space 0x36 - (. - Route114_Text_NolanIntro)
	.endif
	@ data/text/trainers.inc:1376 Route114_Text_NolanDefeat (+1 aliases)
	.globl Route114_Text_NolanDefeat
Route114_Text_NolanDefeat: @ 0x0825CEC1
	.string "しょうぶは すき だが\nつよい わけじゃ ないんだ……{EOS}"
	.if (. - Route114_Text_NolanDefeat) > 0x1c
	.error "Route114_Text_NolanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_NolanDefeat) < 0x1c
	.space 0x1c - (. - Route114_Text_NolanDefeat)
	.endif
	@ data/text/trainers.inc:1379 Route114_Text_NolanPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route114_Text_NolanPostBattle
Route114_Text_NolanPostBattle: @ 0x0825CEDD
	.string "こんどこそ!\pと おもっちゃうから\nつりも しょうぶも やめられない{EOS}"
	.if (. - Route114_Text_NolanPostBattle) != 0x23
	.error "Route114_Text_NolanPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1382 Route114_Text_TyraIntro (+1 aliases)
	.globl Route114_Text_TyraIntro
Route114_Text_TyraIntro: @ 0x0825CF00
	.string "カヨ『そうね\nなんとなく そんな きぶん だから\lあなたにも ポケモン おしえたげよっか{EOS}"
	.if (. - Route114_Text_TyraIntro) > 0x2d
	.error "Route114_Text_TyraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraIntro) < 0x2d
	.space 0x2d - (. - Route114_Text_TyraIntro)
	.endif
	@ data/text/trainers.inc:1385 Route114_Text_TyraDefeat (+1 aliases)
	.globl Route114_Text_TyraDefeat
Route114_Text_TyraDefeat: @ 0x0825CF2D
	.string "カヨ『すごい たたかいかた!{EOS}"
	.if (. - Route114_Text_TyraDefeat) > 0xf
	.error "Route114_Text_TyraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraDefeat) < 0xf
	.space 0xf - (. - Route114_Text_TyraDefeat)
	.endif
	@ data/text/trainers.inc:1388 Route114_Text_TyraPostBattle
	.globl Route114_Text_TyraPostBattle
Route114_Text_TyraPostBattle: @ 0x0825CF3C
	.string "カヨ『コウハイの イヨに あたしが\nポケモンを おしえて あげたの!{EOS}"
	.if (. - Route114_Text_TyraPostBattle) > 0x23
	.error "Route114_Text_TyraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraPostBattle) < 0x23
	.space 0x23 - (. - Route114_Text_TyraPostBattle)
	.endif
	@ data/text/trainers.inc:1391 Route114_Text_TyraNotEnoughMons (+1 aliases)
	.globl Route114_Text_TyraNotEnoughMons
Route114_Text_TyraNotEnoughMons: @ 0x0825CF5F
	.string "カヨ『うふふ!\nあたしたちと しょうぶ するなら\lポケモン いっぴきじゃ ダメなのよ!{EOS}"
	.if (. - Route114_Text_TyraNotEnoughMons) > 0x2c
	.error "Route114_Text_TyraNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_TyraNotEnoughMons) < 0x2c
	.space 0x2c - (. - Route114_Text_TyraNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1394 Route114_Text_IvyIntro (+1 aliases)
	.globl Route114_Text_IvyIntro
Route114_Text_IvyIntro: @ 0x0825CF8B
	.string "イヨ『あなた\nだれに ポケモン おそわったの?{EOS}"
	.if (. - Route114_Text_IvyIntro) > 0x18
	.error "Route114_Text_IvyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyIntro) < 0x18
	.space 0x18 - (. - Route114_Text_IvyIntro)
	.endif
	@ data/text/trainers.inc:1397 Route114_Text_IvyDefeat (+1 aliases)
	.globl Route114_Text_IvyDefeat
Route114_Text_IvyDefeat: @ 0x0825CFA3
	.string "イヨ『すごい たたかいかた!{EOS}"
	.if (. - Route114_Text_IvyDefeat) > 0xf
	.error "Route114_Text_IvyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyDefeat) < 0xf
	.space 0xf - (. - Route114_Text_IvyDefeat)
	.endif
	@ data/text/trainers.inc:1400 Route114_Text_IvyPostBattle
	.globl Route114_Text_IvyPostBattle
Route114_Text_IvyPostBattle: @ 0x0825CFB2
	.string "イヨ『あたしが\nポケモン はじめた きっかけは\lセンパイが おしえてくれた からなの!{EOS}"
	.if (. - Route114_Text_IvyPostBattle) > 0x2c
	.error "Route114_Text_IvyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyPostBattle) < 0x2c
	.space 0x2c - (. - Route114_Text_IvyPostBattle)
	.endif
	@ data/text/trainers.inc:1403 Route114_Text_IvyNotEnoughMons (+1 aliases)
	.globl Route114_Text_IvyNotEnoughMons
Route114_Text_IvyNotEnoughMons: @ 0x0825CFDE
	.string "イヨ『ポケモン いっぴき だけなの?\nなんだか さみしい かんじ しちゃうね{EOS}"
	.if (. - Route114_Text_IvyNotEnoughMons) > 0x27
	.error "Route114_Text_IvyNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_IvyNotEnoughMons) < 0x27
	.space 0x27 - (. - Route114_Text_IvyNotEnoughMons)
	.endif
	@ data/text/trainers.inc:1406 Route114_Text_KaiIntro (+1 aliases)
	.globl Route114_Text_KaiIntro
Route114_Text_KaiIntro: @ 0x0825D005
	.string "でっかいの つれたっ でっかいの!{EOS}"
	.if (. - Route114_Text_KaiIntro) > 0x12
	.error "Route114_Text_KaiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_KaiIntro) < 0x12
	.space 0x12 - (. - Route114_Text_KaiIntro)
	.endif
	@ data/text/trainers.inc:1409 Route114_Text_KaiDefeat (+1 aliases)
	.globl Route114_Text_KaiDefeat
Route114_Text_KaiDefeat: @ 0x0825D017
	.string "あれー\nおおきさで まけたんかな{EOS}"
	.if (. - Route114_Text_KaiDefeat) > 0x11
	.error "Route114_Text_KaiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_KaiDefeat) < 0x11
	.space 0x11 - (. - Route114_Text_KaiDefeat)
	.endif
	@ data/text/trainers.inc:1412 Route114_Text_KaiPostBattle
	.globl Route114_Text_KaiPostBattle
Route114_Text_KaiPostBattle: @ 0x0825D028
	.string "よっしゃー!\nもっと おおきいの つるもんね!{EOS}"
	.if (. - Route114_Text_KaiPostBattle) > 0x18
	.error "Route114_Text_KaiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_KaiPostBattle) < 0x18
	.space 0x18 - (. - Route114_Text_KaiPostBattle)
	.endif
	@ data/text/trainers.inc:1415 Route114_Text_CharlotteIntro (+1 aliases)
	.globl Route114_Text_CharlotteIntro
Route114_Text_CharlotteIntro: @ 0x0825D040
	.string "あたし!\nかわいい だけじゃ ないんだから!{EOS}"
	.if (. - Route114_Text_CharlotteIntro) > 0x17
	.error "Route114_Text_CharlotteIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_CharlotteIntro) < 0x17
	.space 0x17 - (. - Route114_Text_CharlotteIntro)
	.endif
	@ data/text/trainers.inc:1418 Route114_Text_CharlotteDefeat (+1 aliases)
	.globl Route114_Text_CharlotteDefeat
Route114_Text_CharlotteDefeat: @ 0x0825D057
	.string "かわいく なーいっ!{EOS}"
	.if (. - Route114_Text_CharlotteDefeat) > 0xb
	.error "Route114_Text_CharlotteDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_CharlotteDefeat) < 0xb
	.space 0xb - (. - Route114_Text_CharlotteDefeat)
	.endif
	@ data/text/trainers.inc:1421 Route114_Text_CharlottePostBattle
	.globl Route114_Text_CharlottePostBattle
Route114_Text_CharlottePostBattle: @ 0x0825D062
	.string "かわいい だけの ポケモンなんて いや!\nかわいくて ひとクセ あるコが すき!{EOS}"
	.if (. - Route114_Text_CharlottePostBattle) > 0x29
	.error "Route114_Text_CharlottePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_CharlottePostBattle) < 0x29
	.space 0x29 - (. - Route114_Text_CharlottePostBattle)
	.endif
	@ data/text/trainers.inc:1424 Route114_Text_AngelinaIntro (+1 aliases)
	.globl Route114_Text_AngelinaIntro
Route114_Text_AngelinaIntro: @ 0x0825D08B
	.string "あなたの ポケモンって\nどの くらい しんか させてる?{EOS}"
	.if (. - Route114_Text_AngelinaIntro) > 0x1d
	.error "Route114_Text_AngelinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_AngelinaIntro) < 0x1d
	.space 0x1d - (. - Route114_Text_AngelinaIntro)
	.endif
	@ data/text/trainers.inc:1427 Route114_Text_AngelinaDefeat (+1 aliases)
	.globl Route114_Text_AngelinaDefeat
Route114_Text_AngelinaDefeat: @ 0x0825D0A8
	.string "ふーん\nなるほどね{EOS}"
	.if (. - Route114_Text_AngelinaDefeat) > 0xa
	.error "Route114_Text_AngelinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_AngelinaDefeat) < 0xa
	.space 0xa - (. - Route114_Text_AngelinaDefeat)
	.endif
	@ data/text/trainers.inc:1430 Route114_Text_AngelinaPostBattle
	.globl Route114_Text_AngelinaPostBattle
Route114_Text_AngelinaPostBattle: @ 0x0825D0B2
	.string "しんか させると\nみためが ものすごく かわって\lビックリする ポケモンが いるよね!{EOS}"
	.if (. - Route114_Text_AngelinaPostBattle) > 0x2c
	.error "Route114_Text_AngelinaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route114_Text_AngelinaPostBattle) < 0x2c
	.space 0x2c - (. - Route114_Text_AngelinaPostBattle)
	.endif
	@ data/text/trainers.inc:1433 Route115_Text_TimothyIntro (+1 aliases)
	.globl Route115_Text_TimothyIntro
Route115_Text_TimothyIntro: @ 0x0825D0DE
	.string "ふむ……\nなかなか できそうだな……\lわたしが あいてを してあげよう!{EOS}"
	.if (. - Route115_Text_TimothyIntro) > 0x25
	.error "Route115_Text_TimothyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyIntro) < 0x25
	.space 0x25 - (. - Route115_Text_TimothyIntro)
	.endif
	@ data/text/trainers.inc:1436 Route115_Text_TimothyDefeat (+1 aliases)
	.globl Route115_Text_TimothyDefeat
Route115_Text_TimothyDefeat: @ 0x0825D103
	.string "そうぞう いじょうの つよさだ……!{EOS}"
	.if (. - Route115_Text_TimothyDefeat) > 0x13
	.error "Route115_Text_TimothyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyDefeat) < 0x13
	.space 0x13 - (. - Route115_Text_TimothyDefeat)
	.endif
	@ data/text/trainers.inc:1439 Route115_Text_TimothyPostBattle
	.globl Route115_Text_TimothyPostBattle
Route115_Text_TimothyPostBattle: @ 0x0825D116
	.string "てんさい など いない\nすべては どりょく!\lわたしは そう しんじている……{EOS}"
	.if (. - Route115_Text_TimothyPostBattle) > 0x28
	.error "Route115_Text_TimothyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyPostBattle) < 0x28
	.space 0x28 - (. - Route115_Text_TimothyPostBattle)
	.endif
	@ data/text/trainers.inc:1442 Route115_Text_TimothyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_TimothyRegister
Route115_Text_TimothyRegister: @ 0x0825D13E
	.string "ふむ……\nこんな まけかたも ひさかたぶりだ\lできれば また あいてを してほしい{EOS}"
	.if (. - Route115_Text_TimothyRegister) != 0x2a
	.error "Route115_Text_TimothyRegister must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1445 Route115_Text_TimothyRematchIntro (+1 aliases)
	.globl Route115_Text_TimothyRematchIntro
Route115_Text_TimothyRematchIntro: @ 0x0825D168
	.string "ふむ……\nあいかわらずの みのこなし\lわたしの あいてを してもらおう!{EOS}"
	.if (. - Route115_Text_TimothyRematchIntro) > 0x25
	.error "Route115_Text_TimothyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyRematchIntro) < 0x25
	.space 0x25 - (. - Route115_Text_TimothyRematchIntro)
	.endif
	@ data/text/trainers.inc:1448 Route115_Text_TimothyRematchDefeat (+1 aliases)
	.globl Route115_Text_TimothyRematchDefeat
Route115_Text_TimothyRematchDefeat: @ 0x0825D18D
	.string "あいかわらずの つよさだ……!{EOS}"
	.if (. - Route115_Text_TimothyRematchDefeat) > 0x10
	.error "Route115_Text_TimothyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyRematchDefeat) < 0x10
	.space 0x10 - (. - Route115_Text_TimothyRematchDefeat)
	.endif
	@ data/text/trainers.inc:1451 Route115_Text_TimothyPostRematch
	.globl Route115_Text_TimothyPostRematch
Route115_Text_TimothyPostRematch: @ 0x0825D19D
	.string "どりょく あるのみ!\pまけたのは まだまだ\nどりょくが たりないからだ!{EOS}"
	.if (. - Route115_Text_TimothyPostRematch) > 0x25
	.error "Route115_Text_TimothyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_TimothyPostRematch) < 0x25
	.space 0x25 - (. - Route115_Text_TimothyPostRematch)
	.endif
	@ data/text/trainers.inc:1454 Route115_Text_KoichiIntro (+1 aliases)
	.globl Route115_Text_KoichiIntro
Route115_Text_KoichiIntro: @ 0x0825D1C2
	.string "おれのッ!\pワンリキーがッ!\pたたかいを のぞんでいるッ!{EOS}"
	.if (. - Route115_Text_KoichiIntro) > 0x1e
	.error "Route115_Text_KoichiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KoichiIntro) < 0x1e
	.space 0x1e - (. - Route115_Text_KoichiIntro)
	.endif
	@ data/text/trainers.inc:1457 Route115_Text_KoichiDefeat (+1 aliases)
	.globl Route115_Text_KoichiDefeat
Route115_Text_KoichiDefeat: @ 0x0825D1E0
	.string "いててててっ!{EOS}"
	.if (. - Route115_Text_KoichiDefeat) > 0x8
	.error "Route115_Text_KoichiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KoichiDefeat) < 0x8
	.space 0x8 - (. - Route115_Text_KoichiDefeat)
	.endif
	@ data/text/trainers.inc:1460 Route115_Text_KoichiPostBattle
	.globl Route115_Text_KoichiPostBattle
Route115_Text_KoichiPostBattle: @ 0x0825D1E8
	.string "おれの ワンリキー たちがッ!\pつよさを のぞむかぎり\pおれたちは どこまでも つよくなるぜッ!{EOS}"
	.if (. - Route115_Text_KoichiPostBattle) > 0x31
	.error "Route115_Text_KoichiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KoichiPostBattle) < 0x31
	.space 0x31 - (. - Route115_Text_KoichiPostBattle)
	.endif
	@ data/text/trainers.inc:1463 Route115_Text_NobIntro (+1 aliases)
	.globl Route115_Text_NobIntro
Route115_Text_NobIntro: @ 0x0825D219
	.string "オレの とくいわざは\nずつきで レンガを くだく ことだ!{EOS}"
	.if (. - Route115_Text_NobIntro) > 0x1e
	.error "Route115_Text_NobIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobIntro) < 0x1e
	.space 0x1e - (. - Route115_Text_NobIntro)
	.endif
	@ data/text/trainers.inc:1466 Route115_Text_NobDefeat (+1 aliases)
	.globl Route115_Text_NobDefeat
Route115_Text_NobDefeat: @ 0x0825D237
	.string "うがーっ!\nあたまが くだけたーっ!{EOS}"
	.if (. - Route115_Text_NobDefeat) > 0x13
	.error "Route115_Text_NobDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobDefeat) < 0x13
	.space 0x13 - (. - Route115_Text_NobDefeat)
	.endif
	@ data/text/trainers.inc:1469 Route115_Text_NobPostBattle
	.globl Route115_Text_NobPostBattle
Route115_Text_NobPostBattle: @ 0x0825D24A
	.string "ポケモンに カラテを おしえてるんだが\nオレより つよく なりそうで\lちょっと たのしみ なんだ!{EOS}"
	.if (. - Route115_Text_NobPostBattle) > 0x32
	.error "Route115_Text_NobPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobPostBattle) < 0x32
	.space 0x32 - (. - Route115_Text_NobPostBattle)
	.endif
	@ data/text/trainers.inc:1472 Route115_Text_NobRegister
	.globl Route115_Text_NobRegister
Route115_Text_NobRegister: @ 0x0825D27C
	.string "きみは すげえな!\nきたえなおして もういちど しょうぶだ!{EOS}"
	.if (. - Route115_Text_NobRegister) > 0x1f
	.error "Route115_Text_NobRegister may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobRegister) < 0x1f
	.space 0x1f - (. - Route115_Text_NobRegister)
	.endif
	@ data/text/trainers.inc:1475 Route115_Text_NobRematchIntro (+1 aliases)
	.globl Route115_Text_NobRematchIntro
Route115_Text_NobRematchIntro: @ 0x0825D29B
	.string "きみに まけてから がんばって\nポケモンと おのれを きたえなおしたぞ!\lさあ もういちど しょうぶ!{EOS}"
	.if (. - Route115_Text_NobRematchIntro) > 0x34
	.error "Route115_Text_NobRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobRematchIntro) < 0x34
	.space 0x34 - (. - Route115_Text_NobRematchIntro)
	.endif
	@ data/text/trainers.inc:1478 Route115_Text_NobRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_NobRematchDefeat
Route115_Text_NobRematchDefeat: @ 0x0825D2CF
	.string "うがーっ!\nまた まけたーっ!{EOS}"
	.if (. - Route115_Text_NobRematchDefeat) != 0x10
	.error "Route115_Text_NobRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1481 Route115_Text_NobPostRematch
	.globl Route115_Text_NobPostRematch
Route115_Text_NobPostRematch: @ 0x0825D2DF
	.string "おれの ポケモンは まだまだ つよくなる!\nがんばって きたえるぞ!{EOS}"
	.if (. - Route115_Text_NobPostRematch) > 0x23
	.error "Route115_Text_NobPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_NobPostRematch) < 0x23
	.space 0x23 - (. - Route115_Text_NobPostRematch)
	.endif
	@ data/text/trainers.inc:1484 Route115_Text_CyndyIntro (+1 aliases)
	.globl Route115_Text_CyndyIntro
Route115_Text_CyndyIntro: @ 0x0825D302
	.string "この すなはまは わたしの\nヒミツの しゅぎょう ばしょ!\lかってに はいって こないでよ!{EOS}"
	.if (. - Route115_Text_CyndyIntro) > 0x2f
	.error "Route115_Text_CyndyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyIntro) < 0x2f
	.space 0x2f - (. - Route115_Text_CyndyIntro)
	.endif
	@ data/text/trainers.inc:1487 Route115_Text_CyndyDefeat (+1 aliases)
	.globl Route115_Text_CyndyDefeat
Route115_Text_CyndyDefeat: @ 0x0825D331
	.string "しゅぎょうが たりないわ……!{EOS}"
	.if (. - Route115_Text_CyndyDefeat) > 0x10
	.error "Route115_Text_CyndyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyDefeat) < 0x10
	.space 0x10 - (. - Route115_Text_CyndyDefeat)
	.endif
	@ data/text/trainers.inc:1490 Route115_Text_CyndyPostBattle
	.globl Route115_Text_CyndyPostBattle
Route115_Text_CyndyPostBattle: @ 0x0825D341
	.string "すなが クッションに なるから\nからだを いためないの\lさいこうの しゅぎょう ばしょね!{EOS}"
	.if (. - Route115_Text_CyndyPostBattle) > 0x2e
	.error "Route115_Text_CyndyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyPostBattle) < 0x2e
	.space 0x2e - (. - Route115_Text_CyndyPostBattle)
	.endif
	@ data/text/trainers.inc:1493 Route115_Text_CyndyRegister
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_CyndyRegister
Route115_Text_CyndyRegister: @ 0x0825D36F
	.string "いいわ あなたが ここに はいるの\nみとめてあげる!\lそのかわり また あいてを たのむわよ!{EOS}"
	.if (. - Route115_Text_CyndyRegister) != 0x30
	.error "Route115_Text_CyndyRegister must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1496 Route115_Text_CyndyRematchIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_CyndyRematchIntro
Route115_Text_CyndyRematchIntro: @ 0x0825D39F
	.string "さあ ポケモンしょうぶ いくわよ!{EOS}"
	.if (. - Route115_Text_CyndyRematchIntro) != 0x12
	.error "Route115_Text_CyndyRematchIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1499 Route115_Text_CyndyRematchDefeat (+1 aliases)
	.globl Route115_Text_CyndyRematchDefeat
Route115_Text_CyndyRematchDefeat: @ 0x0825D3B1
	.string "わたしは たたかえるけど\nポケモンが……{EOS}"
	.if (. - Route115_Text_CyndyRematchDefeat) > 0x15
	.error "Route115_Text_CyndyRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyRematchDefeat) < 0x15
	.space 0x15 - (. - Route115_Text_CyndyRematchDefeat)
	.endif
	@ data/text/trainers.inc:1502 Route115_Text_CyndyPostRematch
	.globl Route115_Text_CyndyPostRematch
Route115_Text_CyndyPostRematch: @ 0x0825D3C6
	.string "まけても ちょっと たのしいのは\nほんとうに ポケモンが すき だからかな?{EOS}"
	.if (. - Route115_Text_CyndyPostRematch) > 0x27
	.error "Route115_Text_CyndyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_CyndyPostRematch) < 0x27
	.space 0x27 - (. - Route115_Text_CyndyPostRematch)
	.endif
	@ data/text/trainers.inc:1505 Route115_Text_HectorIntro (+1 aliases)
	.globl Route115_Text_HectorIntro
Route115_Text_HectorIntro: @ 0x0825D3ED
	.string "ぼく めずらしい ポケモン もってるんだ!\nよかったら みせて あげようか{EOS}"
	.if (. - Route115_Text_HectorIntro) > 0x26
	.error "Route115_Text_HectorIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HectorIntro) < 0x26
	.space 0x26 - (. - Route115_Text_HectorIntro)
	.endif
	@ data/text/trainers.inc:1508 Route115_Text_HectorDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_HectorDefeat
Route115_Text_HectorDefeat: @ 0x0825D413
	.string "きみ……\nぼくの ポケモン ほしいでしょ?{EOS}"
	.if (. - Route115_Text_HectorDefeat) != 0x16
	.error "Route115_Text_HectorDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1511 Route115_Text_HectorPostBattle
	.globl Route115_Text_HectorPostBattle
Route115_Text_HectorPostBattle: @ 0x0825D429
	.string "こんなに めずらしい ポケモン もってるんだ\nそれだけで ぼくは まんぞく なのさ!{EOS}"
	.if (. - Route115_Text_HectorPostBattle) > 0x2b
	.error "Route115_Text_HectorPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HectorPostBattle) < 0x2b
	.space 0x2b - (. - Route115_Text_HectorPostBattle)
	.endif
	@ data/text/trainers.inc:1514 Route115_Text_KyraIntro (+1 aliases)
	.globl Route115_Text_KyraIntro
Route115_Text_KyraIntro: @ 0x0825D454
	.string "はしりながら しょうぶを するわよッ!\nあなたも ついて きなさーい!{EOS}"
	.if (. - Route115_Text_KyraIntro) > 0x24
	.error "Route115_Text_KyraIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KyraIntro) < 0x24
	.space 0x24 - (. - Route115_Text_KyraIntro)
	.endif
	@ data/text/trainers.inc:1517 Route115_Text_KyraDefeat (+1 aliases)
	.globl Route115_Text_KyraDefeat
Route115_Text_KyraDefeat: @ 0x0825D478
	.string "はぁ はぁ……{EOS}"
	.if (. - Route115_Text_KyraDefeat) > 0x8
	.error "Route115_Text_KyraDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KyraDefeat) < 0x8
	.space 0x8 - (. - Route115_Text_KyraDefeat)
	.endif
	@ data/text/trainers.inc:1520 Route115_Text_KyraPostBattle
	.globl Route115_Text_KyraPostBattle
Route115_Text_KyraPostBattle: @ 0x0825D480
	.string "はしりながら たたかおうと したのが\nまちがい だったわよ!\lひとっぱしり して アタマ ひやすかな{EOS}"
	.if (. - Route115_Text_KyraPostBattle) > 0x33
	.error "Route115_Text_KyraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_KyraPostBattle) < 0x33
	.space 0x33 - (. - Route115_Text_KyraPostBattle)
	.endif
	@ data/text/trainers.inc:1523 Route115_Text_JaidenIntro (+1 aliases)
	.globl Route115_Text_JaidenIntro
Route115_Text_JaidenIntro: @ 0x0825D4B3
	.string "くらえーっ\nにんぽう すごポケモンの じゅつ!{EOS}"
	.if (. - Route115_Text_JaidenIntro) > 0x18
	.error "Route115_Text_JaidenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_JaidenIntro) < 0x18
	.space 0x18 - (. - Route115_Text_JaidenIntro)
	.endif
	@ data/text/trainers.inc:1526 Route115_Text_JaidenDefeat (+1 aliases)
	.globl Route115_Text_JaidenDefeat
Route115_Text_JaidenDefeat: @ 0x0825D4CB
	.string "わーん しっぱいだ!{EOS}"
	.if (. - Route115_Text_JaidenDefeat) > 0xb
	.error "Route115_Text_JaidenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_JaidenDefeat) < 0xb
	.space 0xb - (. - Route115_Text_JaidenDefeat)
	.endif
	@ data/text/trainers.inc:1529 Route115_Text_JaidenPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_JaidenPostBattle
Route115_Text_JaidenPostBattle: @ 0x0825D4D6
	.string "でも ぼくの ポケモン\nすごポケモン だった でしょ?{EOS}"
	.if (. - Route115_Text_JaidenPostBattle) != 0x1c
	.error "Route115_Text_JaidenPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1532 Route115_Text_HeleneIntro (+1 aliases)
	.globl Route115_Text_HeleneIntro
Route115_Text_HeleneIntro: @ 0x0825D4F2
	.string "ふふっ あたしの ポケモンたちは\nくろおび クラスの つよさよ!{EOS}"
	.if (. - Route115_Text_HeleneIntro) > 0x21
	.error "Route115_Text_HeleneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HeleneIntro) < 0x21
	.space 0x21 - (. - Route115_Text_HeleneIntro)
	.endif
	@ data/text/trainers.inc:1535 Route115_Text_HeleneDefeat (+1 aliases)
	.globl Route115_Text_HeleneDefeat
Route115_Text_HeleneDefeat: @ 0x0825D513
	.string "くやしすぎるわ!{EOS}"
	.if (. - Route115_Text_HeleneDefeat) > 0x9
	.error "Route115_Text_HeleneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HeleneDefeat) < 0x9
	.space 0x9 - (. - Route115_Text_HeleneDefeat)
	.endif
	@ data/text/trainers.inc:1538 Route115_Text_HelenePostBattle
	.globl Route115_Text_HelenePostBattle
Route115_Text_HelenePostBattle: @ 0x0825D51C
	.string "あたしより つよい ひとなんて\nめったに あわないのに……\pわかった!\nあなた ジムリーダー でしょ!{EOS}"
	.if (. - Route115_Text_HelenePostBattle) > 0x34
	.error "Route115_Text_HelenePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_HelenePostBattle) < 0x34
	.space 0x34 - (. - Route115_Text_HelenePostBattle)
	.endif
	@ data/text/trainers.inc:1541 Route115_Text_AlixIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_AlixIntro
Route115_Text_AlixIntro: @ 0x0825D550
	.string "めが あったからには にがさないわよ!{EOS}"
	.if (. - Route115_Text_AlixIntro) != 0x14
	.error "Route115_Text_AlixIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1544 Route115_Text_AlixDefeat (+1 aliases)
	.globl Route115_Text_AlixDefeat
Route115_Text_AlixDefeat: @ 0x0825D564
	.string "くっ…… なかなか!{EOS}"
	.if (. - Route115_Text_AlixDefeat) > 0xb
	.error "Route115_Text_AlixDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_AlixDefeat) < 0xb
	.space 0xb - (. - Route115_Text_AlixDefeat)
	.endif
	@ data/text/trainers.inc:1547 Route115_Text_AlixPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route115_Text_AlixPostBattle
Route115_Text_AlixPostBattle: @ 0x0825D56F
	.string "あーあ!\nテレポートで おうちに かえろうかしら{EOS}"
	.if (. - Route115_Text_AlixPostBattle) != 0x19
	.error "Route115_Text_AlixPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1550 Route115_Text_MarleneIntro (+1 aliases)
	.globl Route115_Text_MarleneIntro
Route115_Text_MarleneIntro: @ 0x0825D588
	.string "めいそうの じゃまを したわね……\nおしおき させて もらうわ!{EOS}"
	.if (. - Route115_Text_MarleneIntro) > 0x21
	.error "Route115_Text_MarleneIntro may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_MarleneIntro) < 0x21
	.space 0x21 - (. - Route115_Text_MarleneIntro)
	.endif
	@ data/text/trainers.inc:1553 Route115_Text_MarleneDefeat (+1 aliases)
	.globl Route115_Text_MarleneDefeat
Route115_Text_MarleneDefeat: @ 0x0825D5A9
	.string "こころが みだれて しまう!{EOS}"
	.if (. - Route115_Text_MarleneDefeat) > 0xf
	.error "Route115_Text_MarleneDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_MarleneDefeat) < 0xf
	.space 0xf - (. - Route115_Text_MarleneDefeat)
	.endif
	@ data/text/trainers.inc:1556 Route115_Text_MarlenePostBattle
	.globl Route115_Text_MarlenePostBattle
Route115_Text_MarlenePostBattle: @ 0x0825D5B8
	.string "ここで ポケモンたちと\nめいそうを していたの!\lでも あまり おちつかない ところね{EOS}"
	.if (. - Route115_Text_MarlenePostBattle) > 0x2c
	.error "Route115_Text_MarlenePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route115_Text_MarlenePostBattle) < 0x2c
	.space 0x2c - (. - Route115_Text_MarlenePostBattle)
	.endif
	@ data/text/trainers.inc:1559 Route116_Text_ClarkIntro (+1 aliases)
	.globl Route116_Text_ClarkIntro
Route116_Text_ClarkIntro: @ 0x0825D5E4
	.string "トンネルが つうじて いないなら\nやまを こえて いけば いいのだ!{EOS}"
	.if (. - Route116_Text_ClarkIntro) > 0x23
	.error "Route116_Text_ClarkIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_ClarkIntro) < 0x23
	.space 0x23 - (. - Route116_Text_ClarkIntro)
	.endif
	@ data/text/trainers.inc:1562 Route116_Text_ClarkDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route116_Text_ClarkDefeat
Route116_Text_ClarkDefeat: @ 0x0825D607
	.string "ぜえ…… ぜえ……\nまけて つかれて しまった{EOS}"
	.if (. - Route116_Text_ClarkDefeat) != 0x18
	.error "Route116_Text_ClarkDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1565 Route116_Text_ClarkPostBattle
	.globl Route116_Text_ClarkPostBattle
Route116_Text_ClarkPostBattle: @ 0x0825D61F
	.string "トンネルなど なくても かまわん\nやまおとこは やまが みち なのだ!{EOS}"
	.if (. - Route116_Text_ClarkPostBattle) > 0x24
	.error "Route116_Text_ClarkPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_ClarkPostBattle) < 0x24
	.space 0x24 - (. - Route116_Text_ClarkPostBattle)
	.endif
	@ data/text/trainers.inc:1568 Route116_Text_JoeyIntro (+1 aliases)
	.globl Route116_Text_JoeyIntro
Route116_Text_JoeyIntro: @ 0x0825D643
	.string "おれの ポケモン つえーぞ!\nちょっと みてみろよ!{EOS}"
	.if (. - Route116_Text_JoeyIntro) > 0x1b
	.error "Route116_Text_JoeyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoeyIntro) < 0x1b
	.space 0x1b - (. - Route116_Text_JoeyIntro)
	.endif
	@ data/text/trainers.inc:1571 Route116_Text_JoeyDefeat (+1 aliases)
	.globl Route116_Text_JoeyDefeat
Route116_Text_JoeyDefeat: @ 0x0825D65E
	.string "あいたたたたっ! キズが できた!\nバンソーコー はらなきゃ!{EOS}"
	.if (. - Route116_Text_JoeyDefeat) > 0x20
	.error "Route116_Text_JoeyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoeyDefeat) < 0x20
	.space 0x20 - (. - Route116_Text_JoeyDefeat)
	.endif
	@ data/text/trainers.inc:1574 Route116_Text_JoeyPostBattle
	.globl Route116_Text_JoeyPostBattle
Route116_Text_JoeyPostBattle: @ 0x0825D67E
	.string "バンソーコーは おとこの くんしょう!\nまた ひとつ ふえたぜ!{EOS}"
	.if (. - Route116_Text_JoeyPostBattle) > 0x21
	.error "Route116_Text_JoeyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoeyPostBattle) < 0x21
	.space 0x21 - (. - Route116_Text_JoeyPostBattle)
	.endif
	@ data/text/trainers.inc:1577 Route116_Text_JoseIntro (+1 aliases)
	.globl Route116_Text_JoseIntro
Route116_Text_JoseIntro: @ 0x0825D69F
	.string "ぼくの むしポケモンは つよいよ!\nしょうぶ しようよ!{EOS}"
	.if (. - Route116_Text_JoseIntro) > 0x1d
	.error "Route116_Text_JoseIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoseIntro) < 0x1d
	.space 0x1d - (. - Route116_Text_JoseIntro)
	.endif
	@ data/text/trainers.inc:1580 Route116_Text_JoseDefeat (+1 aliases)
	.globl Route116_Text_JoseDefeat
Route116_Text_JoseDefeat: @ 0x0825D6BC
	.string "まけた……!\nかてると おもったのに……!{EOS}"
	.if (. - Route116_Text_JoseDefeat) > 0x16
	.error "Route116_Text_JoseDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JoseDefeat) < 0x16
	.space 0x16 - (. - Route116_Text_JoseDefeat)
	.endif
	@ data/text/trainers.inc:1583 Route116_Text_JosePostBattle
	.globl Route116_Text_JosePostBattle
Route116_Text_JosePostBattle: @ 0x0825D6D2
	.string "むしポケモンは しんかが はやいから\nつよく なるのも はやい!{EOS}"
	.if (. - Route116_Text_JosePostBattle) > 0x21
	.error "Route116_Text_JosePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JosePostBattle) < 0x21
	.space 0x21 - (. - Route116_Text_JosePostBattle)
	.endif
	@ data/text/trainers.inc:1586 Route116_Text_JaniceIntro (+1 aliases)
	.globl Route116_Text_JaniceIntro
Route116_Text_JaniceIntro: @ 0x0825D6F3
	.string "わたしの かわいい ポケモンの つよさ\nじっくりと おしえて あげるわ!{EOS}"
	.if (. - Route116_Text_JaniceIntro) > 0x25
	.error "Route116_Text_JaniceIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JaniceIntro) < 0x25
	.space 0x25 - (. - Route116_Text_JaniceIntro)
	.endif
	@ data/text/trainers.inc:1589 Route116_Text_JaniceDefeat (+1 aliases)
	.globl Route116_Text_JaniceDefeat
Route116_Text_JaniceDefeat: @ 0x0825D718
	.string "キミの ほうが いちまい うわてね……{EOS}"
	.if (. - Route116_Text_JaniceDefeat) > 0x14
	.error "Route116_Text_JaniceDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JaniceDefeat) < 0x14
	.space 0x14 - (. - Route116_Text_JaniceDefeat)
	.endif
	@ data/text/trainers.inc:1592 Route116_Text_JanicePostBattle
	.globl Route116_Text_JanicePostBattle
Route116_Text_JanicePostBattle: @ 0x0825D72C
	.string "かわいさと つよさを かねそなえた ポケモン\nそれが わたしの りそうなの!{EOS}"
	.if (. - Route116_Text_JanicePostBattle) > 0x27
	.error "Route116_Text_JanicePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JanicePostBattle) < 0x27
	.space 0x27 - (. - Route116_Text_JanicePostBattle)
	.endif
	@ data/text/trainers.inc:1595 Route116_Text_JerryIntro (+1 aliases)
	.globl Route116_Text_JerryIntro
Route116_Text_JerryIntro: @ 0x0825D753
	.string "トレーナーズ スクールで\nいろいろ べんきょう したからね\lじっせんで たしかめるよ!{EOS}"
	.if (. - Route116_Text_JerryIntro) > 0x2c
	.error "Route116_Text_JerryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryIntro) < 0x2c
	.space 0x2c - (. - Route116_Text_JerryIntro)
	.endif
	@ data/text/trainers.inc:1598 Route116_Text_JerryDefeat (+1 aliases)
	.globl Route116_Text_JerryDefeat
Route116_Text_JerryDefeat: @ 0x0825D77F
	.string "べんきょう さぼってたから\nまけちゃったよ{EOS}"
	.if (. - Route116_Text_JerryDefeat) > 0x16
	.error "Route116_Text_JerryDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryDefeat) < 0x16
	.space 0x16 - (. - Route116_Text_JerryDefeat)
	.endif
	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl Route116_Text_JerryPostBattle_Copy_Rom_25D795
Route116_Text_JerryPostBattle_Copy_Rom_25D795: @ 0x0825D795
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ{EOS}"
	.if (. - Route116_Text_JerryPostBattle_Copy_Rom_25D795) > 0x31
	.error "Route116_Text_JerryPostBattle_Copy_Rom_25D795 may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryPostBattle_Copy_Rom_25D795) < 0x31
	.space 0x31 - (. - Route116_Text_JerryPostBattle_Copy_Rom_25D795)
	.endif
	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl Route116_Text_JerryRegister1_Copy_Rom_25D7C6
Route116_Text_JerryRegister1_Copy_Rom_25D7C6: @ 0x0825D7C6
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!{EOS}"
	.if (. - Route116_Text_JerryRegister1_Copy_Rom_25D7C6) > 0x44
	.error "Route116_Text_JerryRegister1_Copy_Rom_25D7C6 may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryRegister1_Copy_Rom_25D7C6) < 0x44
	.space 0x44 - (. - Route116_Text_JerryRegister1_Copy_Rom_25D7C6)
	.endif
	@ data/text/trainers.inc:1604 Route116_Text_JerryRegister1 (+1 aliases)
	.globl Route116_Text_JerryRegister1_Copy_Rom_25D80A
Route116_Text_JerryRegister1_Copy_Rom_25D80A: @ 0x0825D80A
	.string "ポケナビには トレーナーが\nとうろく できるん だって\lトレーナーズ スクールで ならったんだ!\pよく わからないから やってみてよ!{EOS}"
	.if (. - Route116_Text_JerryRegister1_Copy_Rom_25D80A) > 0x44
	.error "Route116_Text_JerryRegister1_Copy_Rom_25D80A may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryRegister1_Copy_Rom_25D80A) < 0x44
	.space 0x44 - (. - Route116_Text_JerryRegister1_Copy_Rom_25D80A)
	.endif
	@ data/text/trainers.inc:1610 Route116_Text_JerryRematchIntro (+1 aliases)
	.globl Route116_Text_JerryRematchIntro
Route116_Text_JerryRematchIntro: @ 0x0825D84E
	.string "あれから トレーナーズ スクールで\nまじめに べんきょう したからね\lこのまえ みたいに まけたりしないよ!{EOS}"
	.if (. - Route116_Text_JerryRematchIntro) > 0x37
	.error "Route116_Text_JerryRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryRematchIntro) < 0x37
	.space 0x37 - (. - Route116_Text_JerryRematchIntro)
	.endif
	@ data/text/trainers.inc:1613 Route116_Text_JerryRematchDefeat (+1 aliases)
	.globl Route116_Text_JerryRematchDefeat
Route116_Text_JerryRematchDefeat: @ 0x0825D885
	.string "あれー?\nきちんと べんきょう したのに{EOS}"
	.if (. - Route116_Text_JerryRematchDefeat) > 0x15
	.error "Route116_Text_JerryRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryRematchDefeat) < 0x15
	.space 0x15 - (. - Route116_Text_JerryRematchDefeat)
	.endif
	@ data/text/trainers.inc:1601 Route116_Text_JerryPostBattle (+1 aliases)
	.globl Route116_Text_JerryPostBattle_Copy_Rom_25D89A
Route116_Text_JerryPostBattle_Copy_Rom_25D89A: @ 0x0825D89A
	.string "トレーナーズ スクールで\nもういちど べんきょう しなおさなきゃ\lツツジさんに おこられちゃうよ{EOS}"
	.if (. - Route116_Text_JerryPostBattle_Copy_Rom_25D89A) > 0x31
	.error "Route116_Text_JerryPostBattle_Copy_Rom_25D89A may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JerryPostBattle_Copy_Rom_25D89A) < 0x31
	.space 0x31 - (. - Route116_Text_JerryPostBattle_Copy_Rom_25D89A)
	.endif
	@ data/text/trainers.inc:1619 Route116_Text_KarenIntro (+1 aliases)
	.globl Route116_Text_KarenIntro
Route116_Text_KarenIntro: @ 0x0825D8CB
	.string "スクールでも べんきょう\nかえりみち でも べんきょうよ!{EOS}"
	.if (. - Route116_Text_KarenIntro) > 0x1e
	.error "Route116_Text_KarenIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenIntro) < 0x1e
	.space 0x1e - (. - Route116_Text_KarenIntro)
	.endif
	@ data/text/trainers.inc:1622 Route116_Text_KarenDefeat (+1 aliases)
	.globl Route116_Text_KarenDefeat
Route116_Text_KarenDefeat: @ 0x0825D8E9
	.string "ショック\nまけちゃったよ{EOS}"
	.if (. - Route116_Text_KarenDefeat) > 0xd
	.error "Route116_Text_KarenDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenDefeat) < 0xd
	.space 0xd - (. - Route116_Text_KarenDefeat)
	.endif
	@ data/text/trainers.inc:1625 Route116_Text_KarenPostBattle
	.globl Route116_Text_KarenPostBattle
Route116_Text_KarenPostBattle: @ 0x0825D8F6
	.string "ああん! これじゃ ツツジさまのように\nエレガントな トレーナーに なれないわ!{EOS}"
	.if (. - Route116_Text_KarenPostBattle) > 0x29
	.error "Route116_Text_KarenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenPostBattle) < 0x29
	.space 0x29 - (. - Route116_Text_KarenPostBattle)
	.endif
	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl Route116_Text_KarenRegister1_Copy_Rom_25D91F
Route116_Text_KarenRegister1_Copy_Rom_25D91F: @ 0x0825D91F
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!{EOS}"
	.if (. - Route116_Text_KarenRegister1_Copy_Rom_25D91F) > 0x22
	.error "Route116_Text_KarenRegister1_Copy_Rom_25D91F may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenRegister1_Copy_Rom_25D91F) < 0x22
	.space 0x22 - (. - Route116_Text_KarenRegister1_Copy_Rom_25D91F)
	.endif
	@ data/text/trainers.inc:1628 Route116_Text_KarenRegister1 (+1 aliases)
	.globl Route116_Text_KarenRegister1_Copy_Rom_25D941
Route116_Text_KarenRegister1_Copy_Rom_25D941: @ 0x0825D941
	.string "あーっ それ ポケナビね!\nあたしも もってるから とうろくして!{EOS}"
	.if (. - Route116_Text_KarenRegister1_Copy_Rom_25D941) > 0x22
	.error "Route116_Text_KarenRegister1_Copy_Rom_25D941 may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenRegister1_Copy_Rom_25D941) < 0x22
	.space 0x22 - (. - Route116_Text_KarenRegister1_Copy_Rom_25D941)
	.endif
	@ data/text/trainers.inc:1634 Route116_Text_KarenRematchIntro (+1 aliases)
	.globl Route116_Text_KarenRematchIntro
Route116_Text_KarenRematchIntro: @ 0x0825D963
	.string "あれから ものすっごく べんきょう したの!\nその せいか みてもらうからね!{EOS}"
	.if (. - Route116_Text_KarenRematchIntro) > 0x28
	.error "Route116_Text_KarenRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenRematchIntro) < 0x28
	.space 0x28 - (. - Route116_Text_KarenRematchIntro)
	.endif
	@ data/text/trainers.inc:1637 Route116_Text_KarenRematchDefeat (+1 aliases)
	.globl Route116_Text_KarenRematchDefeat
Route116_Text_KarenRematchDefeat: @ 0x0825D98B
	.string "ショック\nまた まけちゃったよ{EOS}"
	.if (. - Route116_Text_KarenRematchDefeat) > 0x10
	.error "Route116_Text_KarenRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenRematchDefeat) < 0x10
	.space 0x10 - (. - Route116_Text_KarenRematchDefeat)
	.endif
	@ data/text/trainers.inc:1640 Route116_Text_KarenPostRematch
	.globl Route116_Text_KarenPostRematch
Route116_Text_KarenPostRematch: @ 0x0825D99B
	.string "ツツジさまに かったことが あるの?\nそれじゃ いまの あたしには かてないわ{EOS}"
	.if (. - Route116_Text_KarenPostRematch) > 0x28
	.error "Route116_Text_KarenPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_KarenPostRematch) < 0x28
	.space 0x28 - (. - Route116_Text_KarenPostRematch)
	.endif
	@ data/text/trainers.inc:1643 Route116_Text_SarahIntro (+1 aliases)
	.globl Route116_Text_SarahIntro
Route116_Text_SarahIntro: @ 0x0825D9C3
	.string "わたくし いままで\nひとに なにかで まけた ことって\lありませんの!{EOS}"
	.if (. - Route116_Text_SarahIntro) > 0x24
	.error "Route116_Text_SarahIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_SarahIntro) < 0x24
	.space 0x24 - (. - Route116_Text_SarahIntro)
	.endif
	@ data/text/trainers.inc:1646 Route116_Text_SarahDefeat (+1 aliases)
	.globl Route116_Text_SarahDefeat
Route116_Text_SarahDefeat: @ 0x0825D9E7
	.string "まあ\nこんなの はじめてですわ!{EOS}"
	.if (. - Route116_Text_SarahDefeat) > 0x11
	.error "Route116_Text_SarahDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_SarahDefeat) < 0x11
	.space 0x11 - (. - Route116_Text_SarahDefeat)
	.endif
	@ data/text/trainers.inc:1649 Route116_Text_SarahPostBattle
	.globl Route116_Text_SarahPostBattle
Route116_Text_SarahPostBattle: @ 0x0825D9F8
	.string "なにふじゆう ない くらし ですけど\nポケモンの ことだけは\lおもいどおりに なりません のね{EOS}"
	.if (. - Route116_Text_SarahPostBattle) > 0x30
	.error "Route116_Text_SarahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_SarahPostBattle) < 0x30
	.space 0x30 - (. - Route116_Text_SarahPostBattle)
	.endif
	@ data/text/trainers.inc:1652 Route116_Text_DawsonIntro (+1 aliases)
	.globl Route116_Text_DawsonIntro
Route116_Text_DawsonIntro: @ 0x0825DA28
	.string "ぼくの ポケモンの\nうつくしい けなみに みとれて\lキミは なにも できない!{EOS}"
	.if (. - Route116_Text_DawsonIntro) > 0x28
	.error "Route116_Text_DawsonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DawsonIntro) < 0x28
	.space 0x28 - (. - Route116_Text_DawsonIntro)
	.endif
	@ data/text/trainers.inc:1655 Route116_Text_DawsonDefeat (+1 aliases)
	.globl Route116_Text_DawsonDefeat
Route116_Text_DawsonDefeat: @ 0x0825DA50
	.string "そりゃないぜ ベイビー{EOS}"
	.if (. - Route116_Text_DawsonDefeat) > 0xc
	.error "Route116_Text_DawsonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DawsonDefeat) < 0xc
	.space 0xc - (. - Route116_Text_DawsonDefeat)
	.endif
	@ data/text/trainers.inc:1658 Route116_Text_DawsonPostBattle
	.globl Route116_Text_DawsonPostBattle
Route116_Text_DawsonPostBattle: @ 0x0825DA5C
	.string "ああっ\nポケモンの けなみと\lぼくの ヘアーが みだれた!\lびよういん よやく しなきゃ{EOS}"
	.if (. - Route116_Text_DawsonPostBattle) > 0x2d
	.error "Route116_Text_DawsonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DawsonPostBattle) < 0x2d
	.space 0x2d - (. - Route116_Text_DawsonPostBattle)
	.endif
	@ data/text/trainers.inc:1661 Route116_Text_DevanIntro (+1 aliases)
	.globl Route116_Text_DevanIntro
Route116_Text_DevanIntro: @ 0x0825DA89
	.string "ガツンと いってみようかあ!{EOS}"
	.if (. - Route116_Text_DevanIntro) > 0xf
	.error "Route116_Text_DevanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DevanIntro) < 0xf
	.space 0xf - (. - Route116_Text_DevanIntro)
	.endif
	@ data/text/trainers.inc:1664 Route116_Text_DevanDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route116_Text_DevanDefeat
Route116_Text_DevanDefeat: @ 0x0825DA98
	.string "あああ\nしょうぶに ならんな こりゃ{EOS}"
	.if (. - Route116_Text_DevanDefeat) != 0x13
	.error "Route116_Text_DevanDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1667 Route116_Text_DevanPostBattle
	.globl Route116_Text_DevanPostBattle
Route116_Text_DevanPostBattle: @ 0x0825DAAB
	.string "たまには ほかの タイプの\nポケモンも つかって みるかなあ?{EOS}"
	.if (. - Route116_Text_DevanPostBattle) > 0x20
	.error "Route116_Text_DevanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_DevanPostBattle) < 0x20
	.space 0x20 - (. - Route116_Text_DevanPostBattle)
	.endif
	@ data/text/trainers.inc:1670 Route116_Text_JohnsonIntro (+1 aliases)
	.globl Route116_Text_JohnsonIntro
Route116_Text_JohnsonIntro: @ 0x0825DACB
	.string "この さきって いきどまりなんだ\nつまんない から しょうぶ してね{EOS}"
	.if (. - Route116_Text_JohnsonIntro) > 0x23
	.error "Route116_Text_JohnsonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JohnsonIntro) < 0x23
	.space 0x23 - (. - Route116_Text_JohnsonIntro)
	.endif
	@ data/text/trainers.inc:1673 Route116_Text_JohnsonDefeat (+1 aliases)
	.globl Route116_Text_JohnsonDefeat
Route116_Text_JohnsonDefeat: @ 0x0825DAEE
	.string "まけた けど おもしろかったよ!{EOS}"
	.if (. - Route116_Text_JohnsonDefeat) > 0x11
	.error "Route116_Text_JohnsonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JohnsonDefeat) < 0x11
	.space 0x11 - (. - Route116_Text_JohnsonDefeat)
	.endif
	@ data/text/trainers.inc:1676 Route116_Text_JohnsonPostBattle
	.globl Route116_Text_JohnsonPostBattle
Route116_Text_JohnsonPostBattle: @ 0x0825DAFF
	.string "まけちゃった から\nぼくの たんパン かしてあげても いーよ!{EOS}"
	.if (. - Route116_Text_JohnsonPostBattle) > 0x20
	.error "Route116_Text_JohnsonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route116_Text_JohnsonPostBattle) < 0x20
	.space 0x20 - (. - Route116_Text_JohnsonPostBattle)
	.endif
	@ data/text/trainers.inc:1679 Route117_Text_IsaacIntro (+1 aliases)
	.globl Route117_Text_IsaacIntro
Route117_Text_IsaacIntro: @ 0x0825DB1F
	.string "オレが そだてている ポケモンと\nしょうぶ してくれないか?{EOS}"
	.if (. - Route117_Text_IsaacIntro) > 0x1f
	.error "Route117_Text_IsaacIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacIntro) < 0x1f
	.space 0x1f - (. - Route117_Text_IsaacIntro)
	.endif
	@ data/text/trainers.inc:1682 Route117_Text_IsaacDefeat (+1 aliases)
	.globl Route117_Text_IsaacDefeat
Route117_Text_IsaacDefeat: @ 0x0825DB3E
	.string "みごとに そだててるね……{EOS}"
	.if (. - Route117_Text_IsaacDefeat) > 0xe
	.error "Route117_Text_IsaacDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacDefeat) < 0xe
	.space 0xe - (. - Route117_Text_IsaacDefeat)
	.endif
	@ data/text/trainers.inc:1685 Route117_Text_IsaacPostBattle
	.globl Route117_Text_IsaacPostBattle
Route117_Text_IsaacPostBattle: @ 0x0825DB4C
	.string "つよさ だけが ポケモンじゃないよ!\nポケモンの こせいを みがきあげるのも\lたのしみかたの ひとつ だね!{EOS}"
	.if (. - Route117_Text_IsaacPostBattle) > 0x37
	.error "Route117_Text_IsaacPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacPostBattle) < 0x37
	.space 0x37 - (. - Route117_Text_IsaacPostBattle)
	.endif
	@ data/text/trainers.inc:1688 Route117_Text_IsaacRegister
	.globl Route117_Text_IsaacRegister
Route117_Text_IsaacRegister: @ 0x0825DB83
	.string "よーし ますます がんばって そだてるぞ!\nきみ そしたら みにきて くれるだろ?{EOS}"
	.if (. - Route117_Text_IsaacRegister) > 0x2a
	.error "Route117_Text_IsaacRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacRegister) < 0x2a
	.space 0x2a - (. - Route117_Text_IsaacRegister)
	.endif
	@ data/text/trainers.inc:1691 Route117_Text_IsaacRematchIntro (+1 aliases)
	.globl Route117_Text_IsaacRematchIntro
Route117_Text_IsaacRematchIntro: @ 0x0825DBAD
	.string "オレが そだてている ポケモン\nあいかわらず いい かんじ だよ!{EOS}"
	.if (. - Route117_Text_IsaacRematchIntro) > 0x22
	.error "Route117_Text_IsaacRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacRematchIntro) < 0x22
	.space 0x22 - (. - Route117_Text_IsaacRematchIntro)
	.endif
	@ data/text/trainers.inc:1694 Route117_Text_IsaacRematchDefeat (+1 aliases)
	.globl Route117_Text_IsaacRematchDefeat
Route117_Text_IsaacRematchDefeat: @ 0x0825DBCF
	.string "いい そだてかた してるね……\nきみには そだてやの さいのう あるかも{EOS}"
	.if (. - Route117_Text_IsaacRematchDefeat) > 0x25
	.error "Route117_Text_IsaacRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacRematchDefeat) < 0x25
	.space 0x25 - (. - Route117_Text_IsaacRematchDefeat)
	.endif
	@ data/text/trainers.inc:1697 Route117_Text_IsaacPostRematch
	.globl Route117_Text_IsaacPostRematch
Route117_Text_IsaacPostRematch: @ 0x0825DBF4
	.string "いい ぐあいに そだってるね!\nミナモシティの ポケモンコンテストに\lでることを おすすめ するよ!{EOS}"
	.if (. - Route117_Text_IsaacPostRematch) > 0x33
	.error "Route117_Text_IsaacPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_IsaacPostRematch) < 0x33
	.space 0x33 - (. - Route117_Text_IsaacPostRematch)
	.endif
	@ data/text/trainers.inc:1700 Route117_Text_LydiaIntro (+1 aliases)
	.globl Route117_Text_LydiaIntro
Route117_Text_LydiaIntro: @ 0x0825DC27
	.string "ポケモンを ちゃんと そだててるか\nわたしが たしかめて あげますね{EOS}"
	.if (. - Route117_Text_LydiaIntro) > 0x23
	.error "Route117_Text_LydiaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaIntro) < 0x23
	.space 0x23 - (. - Route117_Text_LydiaIntro)
	.endif
	@ data/text/trainers.inc:1703 Route117_Text_LydiaDefeat (+1 aliases)
	.globl Route117_Text_LydiaDefeat
Route117_Text_LydiaDefeat: @ 0x0825DC4A
	.string "ちゃんと そだってますね{EOS}"
	.if (. - Route117_Text_LydiaDefeat) > 0xd
	.error "Route117_Text_LydiaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaDefeat) < 0xd
	.space 0xd - (. - Route117_Text_LydiaDefeat)
	.endif
	@ data/text/trainers.inc:1706 Route117_Text_LydiaPostBattle
	.globl Route117_Text_LydiaPostBattle
Route117_Text_LydiaPostBattle: @ 0x0825DC57
	.string "ポケモンの こせいにも きをくばって\nそだてて みて くださいね{EOS}"
	.if (. - Route117_Text_LydiaPostBattle) > 0x21
	.error "Route117_Text_LydiaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaPostBattle) < 0x21
	.space 0x21 - (. - Route117_Text_LydiaPostBattle)
	.endif
	@ data/text/trainers.inc:1709 Route117_Text_LydiaRegister
	.globl Route117_Text_LydiaRegister
Route117_Text_LydiaRegister: @ 0x0825DC78
	.string "よい トレーナーさんに あえて よかった!\nこれからも よろしく おねがいしますね{EOS}"
	.if (. - Route117_Text_LydiaRegister) > 0x2a
	.error "Route117_Text_LydiaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaRegister) < 0x2a
	.space 0x2a - (. - Route117_Text_LydiaRegister)
	.endif
	@ data/text/trainers.inc:1712 Route117_Text_LydiaRematchIntro (+1 aliases)
	.globl Route117_Text_LydiaRematchIntro
Route117_Text_LydiaRematchIntro: @ 0x0825DCA2
	.string "ポケモンを ちゃんと そだててるか\nまた わたしが たしかめて あげますね{EOS}"
	.if (. - Route117_Text_LydiaRematchIntro) > 0x26
	.error "Route117_Text_LydiaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaRematchIntro) < 0x26
	.space 0x26 - (. - Route117_Text_LydiaRematchIntro)
	.endif
	@ data/text/trainers.inc:1715 Route117_Text_LydiaRematchDefeat (+1 aliases)
	.globl Route117_Text_LydiaRematchDefeat
Route117_Text_LydiaRematchDefeat: @ 0x0825DCC8
	.string "みごとに そだってますね{EOS}"
	.if (. - Route117_Text_LydiaRematchDefeat) > 0xd
	.error "Route117_Text_LydiaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaRematchDefeat) < 0xd
	.space 0xd - (. - Route117_Text_LydiaRematchDefeat)
	.endif
	@ data/text/trainers.inc:1718 Route117_Text_LydiaPostRematch
	.globl Route117_Text_LydiaPostRematch
Route117_Text_LydiaPostRematch: @ 0x0825DCD5
	.string "ポケモンの せいかくに よって\nすきな ポロックが あるみたいなの{EOS}"
	.if (. - Route117_Text_LydiaPostRematch) > 0x22
	.error "Route117_Text_LydiaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_LydiaPostRematch) < 0x22
	.space 0x22 - (. - Route117_Text_LydiaPostRematch)
	.endif
	@ data/text/trainers.inc:1721 Route117_Text_DylanIntro (+1 aliases)
	.globl Route117_Text_DylanIntro
Route117_Text_DylanIntro: @ 0x0825DCF7
	.string "トライアスロンの まっさいちゅう だけど\nさくっと しょうぶ しようじゃ ないか!{EOS}"
	.if (. - Route117_Text_DylanIntro) > 0x2a
	.error "Route117_Text_DylanIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanIntro) < 0x2a
	.space 0x2a - (. - Route117_Text_DylanIntro)
	.endif
	@ data/text/trainers.inc:1724 Route117_Text_DylanDefeat (+1 aliases)
	.globl Route117_Text_DylanDefeat
Route117_Text_DylanDefeat: @ 0x0825DD21
	.string "たいりょく なくなった!{EOS}"
	.if (. - Route117_Text_DylanDefeat) > 0xd
	.error "Route117_Text_DylanDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanDefeat) < 0xd
	.space 0xd - (. - Route117_Text_DylanDefeat)
	.endif
	@ data/text/trainers.inc:1727 Route117_Text_DylanPostBattle
	.globl Route117_Text_DylanPostBattle
Route117_Text_DylanPostBattle: @ 0x0825DD2E
	.string "まいったな……\pいまの しょうぶの あいだに\nビリに なっちゃったかも……?{EOS}"
	.if (. - Route117_Text_DylanPostBattle) > 0x27
	.error "Route117_Text_DylanPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanPostBattle) < 0x27
	.space 0x27 - (. - Route117_Text_DylanPostBattle)
	.endif
	@ data/text/trainers.inc:1730 Route117_Text_DylanRegister
	.globl Route117_Text_DylanRegister
Route117_Text_DylanRegister: @ 0x0825DD55
	.string "ポケモンも つよく なくちゃ ダメか?\nきみさ たまに ぼくを きたえてよ!{EOS}"
	.if (. - Route117_Text_DylanRegister) > 0x27
	.error "Route117_Text_DylanRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanRegister) < 0x27
	.space 0x27 - (. - Route117_Text_DylanRegister)
	.endif
	@ data/text/trainers.inc:1733 Route117_Text_DylanRematchIntro (+1 aliases)
	.globl Route117_Text_DylanRematchIntro
Route117_Text_DylanRematchIntro: @ 0x0825DD7C
	.string "トライアスロンの まっさいちゅう だけど\nぼくには よゆうが あるからね\lさくっと しょうぶ しようじゃ ないか!{EOS}"
	.if (. - Route117_Text_DylanRematchIntro) > 0x3a
	.error "Route117_Text_DylanRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanRematchIntro) < 0x3a
	.space 0x3a - (. - Route117_Text_DylanRematchIntro)
	.endif
	@ data/text/trainers.inc:1736 Route117_Text_DylanRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_DylanRematchDefeat
Route117_Text_DylanRematchDefeat: @ 0x0825DDB6
	.string "また たいりょく なくなった!{EOS}"
	.if (. - Route117_Text_DylanRematchDefeat) != 0x10
	.error "Route117_Text_DylanRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1739 Route117_Text_DylanPostRematch
	.globl Route117_Text_DylanPostRematch
Route117_Text_DylanPostRematch: @ 0x0825DDC6
	.string "およぎと じてんしゃでは トップだったけど\nポケモンは いまいち じしんが ないよ{EOS}"
	.if (. - Route117_Text_DylanPostRematch) > 0x2a
	.error "Route117_Text_DylanPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DylanPostRematch) < 0x2a
	.space 0x2a - (. - Route117_Text_DylanPostRematch)
	.endif
	@ data/text/trainers.inc:1742 Route117_Text_MariaIntro (+1 aliases)
	.globl Route117_Text_MariaIntro
Route117_Text_MariaIntro: @ 0x0825DDF0
	.string "トライアスロンの れんしゅう\nポケモンと いっしょに してるからさ\lスピードに じしん あるよ!{EOS}"
	.if (. - Route117_Text_MariaIntro) > 0x31
	.error "Route117_Text_MariaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaIntro) < 0x31
	.space 0x31 - (. - Route117_Text_MariaIntro)
	.endif
	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl Route117_Text_MariaDefeat_Copy_Rom_25DE21
Route117_Text_MariaDefeat_Copy_Rom_25DE21: @ 0x0825DE21
	.string "れんしゅうが たりなかったかな?{EOS}"
	.if (. - Route117_Text_MariaDefeat_Copy_Rom_25DE21) > 0x11
	.error "Route117_Text_MariaDefeat_Copy_Rom_25DE21 may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaDefeat_Copy_Rom_25DE21) < 0x11
	.space 0x11 - (. - Route117_Text_MariaDefeat_Copy_Rom_25DE21)
	.endif
	@ data/text/trainers.inc:1748 Route117_Text_MariaPostBattle
	.globl Route117_Text_MariaPostBattle
Route117_Text_MariaPostBattle: @ 0x0825DE32
	.string "れんしゅうは つづけてこそ\nいみが あるのよね\pよーし! また れんしゅうよ\nあしたから!{EOS}"
	.if (. - Route117_Text_MariaPostBattle) > 0x2e
	.error "Route117_Text_MariaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaPostBattle) < 0x2e
	.space 0x2e - (. - Route117_Text_MariaPostBattle)
	.endif
	@ data/text/trainers.inc:1751 Route117_Text_MariaRegister
	.globl Route117_Text_MariaRegister
Route117_Text_MariaRegister: @ 0x0825DE60
	.string "あなたは れんしゅう してる?\nよかったら わたしが あいてになるわ!{EOS}"
	.if (. - Route117_Text_MariaRegister) > 0x24
	.error "Route117_Text_MariaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaRegister) < 0x24
	.space 0x24 - (. - Route117_Text_MariaRegister)
	.endif
	@ data/text/trainers.inc:1754 Route117_Text_MariaRematchIntro (+1 aliases)
	.globl Route117_Text_MariaRematchIntro
Route117_Text_MariaRematchIntro: @ 0x0825DE84
	.string "どう れんしゅう つづけてる?\nあたしは もちろん つづけてるわ\lその しょうこ みせちゃうから!{EOS}"
	.if (. - Route117_Text_MariaRematchIntro) > 0x32
	.error "Route117_Text_MariaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaRematchIntro) < 0x32
	.space 0x32 - (. - Route117_Text_MariaRematchIntro)
	.endif
	@ data/text/trainers.inc:1745 Route117_Text_MariaDefeat (+2 aliases)
	.globl Route117_Text_MariaDefeat_Copy_Rom_25DEB6
Route117_Text_MariaDefeat_Copy_Rom_25DEB6: @ 0x0825DEB6
	.string "れんしゅうが たりなかったかな?{EOS}"
	.if (. - Route117_Text_MariaDefeat_Copy_Rom_25DEB6) > 0x11
	.error "Route117_Text_MariaDefeat_Copy_Rom_25DEB6 may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaDefeat_Copy_Rom_25DEB6) < 0x11
	.space 0x11 - (. - Route117_Text_MariaDefeat_Copy_Rom_25DEB6)
	.endif
	@ data/text/trainers.inc:1760 Route117_Text_MariaPostRematch
	.globl Route117_Text_MariaPostRematch
Route117_Text_MariaPostRematch: @ 0x0825DEC7
	.string "あしたから また れんしゅう するから\nよかったら また しょうぶ してね!{EOS}"
	.if (. - Route117_Text_MariaPostRematch) > 0x27
	.error "Route117_Text_MariaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MariaPostRematch) < 0x27
	.space 0x27 - (. - Route117_Text_MariaPostRematch)
	.endif
	@ data/text/trainers.inc:1763 Route117_Text_DerekIntro (+1 aliases)
	.globl Route117_Text_DerekIntro
Route117_Text_DerekIntro: @ 0x0825DEEE
	.string "むかしは むしとりしょうねん!\nいまは こんちゅうマニア!\pでも ポケモンを あいする きもちは\nずっと かわらないぜ!{EOS}"
	.if (. - Route117_Text_DerekIntro) > 0x3d
	.error "Route117_Text_DerekIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DerekIntro) < 0x3d
	.space 0x3d - (. - Route117_Text_DerekIntro)
	.endif
	@ data/text/trainers.inc:1766 Route117_Text_DerekDefeat (+1 aliases)
	.globl Route117_Text_DerekDefeat
Route117_Text_DerekDefeat: @ 0x0825DF2B
	.string "ポケモンの よわさも かわらない……{EOS}"
	.if (. - Route117_Text_DerekDefeat) > 0x13
	.error "Route117_Text_DerekDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DerekDefeat) < 0x13
	.space 0x13 - (. - Route117_Text_DerekDefeat)
	.endif
	@ data/text/trainers.inc:1769 Route117_Text_DerekPostBattle
	.globl Route117_Text_DerekPostBattle
Route117_Text_DerekPostBattle: @ 0x0825DF3E
	.string "すきな ことばかり していたら\nいつのまにか マニアって よばれてるよ!\pまあ むしポケモンに くわしいからね\nマニアと よばれて とうぜん なのさっ!{EOS}"
	.if (. - Route117_Text_DerekPostBattle) > 0x4d
	.error "Route117_Text_DerekPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_DerekPostBattle) < 0x4d
	.space 0x4d - (. - Route117_Text_DerekPostBattle)
	.endif
	@ data/text/trainers.inc:1772 Route117_Text_AnnaIntro (+1 aliases)
	.globl Route117_Text_AnnaIntro
Route117_Text_AnnaIntro: @ 0x0825DF8B
	.string "ミホ『かわいい コウハイの まえ だもん\nいいところ みせちゃうんだから!{EOS}"
	.if (. - Route117_Text_AnnaIntro) > 0x26
	.error "Route117_Text_AnnaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaIntro) < 0x26
	.space 0x26 - (. - Route117_Text_AnnaIntro)
	.endif
	@ data/text/trainers.inc:1775 Route117_Text_AnnaDefeat (+1 aliases)
	.globl Route117_Text_AnnaDefeat
Route117_Text_AnnaDefeat: @ 0x0825DFB1
	.string "ミホ『もう!\nコウハイの まえ だから かたせてよ!{EOS}"
	.if (. - Route117_Text_AnnaDefeat) > 0x1b
	.error "Route117_Text_AnnaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaDefeat) < 0x1b
	.space 0x1b - (. - Route117_Text_AnnaDefeat)
	.endif
	@ data/text/trainers.inc:1778 Route117_Text_AnnaPostBattle
	.globl Route117_Text_AnnaPostBattle
Route117_Text_AnnaPostBattle: @ 0x0825DFCC
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーション してる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?{EOS}"
	.if (. - Route117_Text_AnnaPostBattle) > 0x3e
	.error "Route117_Text_AnnaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaPostBattle) < 0x3e
	.space 0x3e - (. - Route117_Text_AnnaPostBattle)
	.endif
	@ data/text/trainers.inc:1781 Route117_Text_AnnaAndMegRegister
	.globl Route117_Text_AnnaAndMegRegister
Route117_Text_AnnaAndMegRegister: @ 0x0825E00A
	.string "ミホ『まけっぱなしでは\nひきさがれない わたしたち!\lまた きて くれるわよね?{EOS}"
	.if (. - Route117_Text_AnnaAndMegRegister) > 0x29
	.error "Route117_Text_AnnaAndMegRegister may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaAndMegRegister) < 0x29
	.space 0x29 - (. - Route117_Text_AnnaAndMegRegister)
	.endif
	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E033
Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E033: @ 0x0825E033
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!{EOS}"
	.if (. - Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E033) > 0x28
	.error "Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E033 may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E033) < 0x28
	.space 0x28 - (. - Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E033)
	.endif
	@ data/text/trainers.inc:1787 Route117_Text_MegIntro (+1 aliases)
	.globl Route117_Text_MegIntro
Route117_Text_MegIntro: @ 0x0825E05B
	.string "リコ『すてきな センパイとの タッグで\nあなたを まかしちゃうから!{EOS}"
	.if (. - Route117_Text_MegIntro) > 0x23
	.error "Route117_Text_MegIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegIntro) < 0x23
	.space 0x23 - (. - Route117_Text_MegIntro)
	.endif
	@ data/text/trainers.inc:1790 Route117_Text_MegDefeat (+1 aliases)
	.globl Route117_Text_MegDefeat
Route117_Text_MegDefeat: @ 0x0825E07E
	.string "リコ『やーん\nセンパイ ごめんなさい!{EOS}"
	.if (. - Route117_Text_MegDefeat) > 0x14
	.error "Route117_Text_MegDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegDefeat) < 0x14
	.space 0x14 - (. - Route117_Text_MegDefeat)
	.endif
	@ data/text/trainers.inc:1793 Route117_Text_MegPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_MegPostBattle
Route117_Text_MegPostBattle: @ 0x0825E092
	.string "リコ『あたしが センパイの\nあしを ひっぱっちゃったの……\pそうでなきゃ あんた かってないわよ!{EOS}"
	.if (. - Route117_Text_MegPostBattle) != 0x32
	.error "Route117_Text_MegPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl Route117_Text_MegNotEnoughMons_Copy_Rom_25E0C4
Route117_Text_MegNotEnoughMons_Copy_Rom_25E0C4: @ 0x0825E0C4
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!{EOS}"
	.if (. - Route117_Text_MegNotEnoughMons_Copy_Rom_25E0C4) > 0x41
	.error "Route117_Text_MegNotEnoughMons_Copy_Rom_25E0C4 may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegNotEnoughMons_Copy_Rom_25E0C4) < 0x41
	.space 0x41 - (. - Route117_Text_MegNotEnoughMons_Copy_Rom_25E0C4)
	.endif
	@ data/text/trainers.inc:1799 Route117_Text_AnnaRematchIntro (+1 aliases)
	.globl Route117_Text_AnnaRematchIntro
Route117_Text_AnnaRematchIntro: @ 0x0825E105
	.string "ミホ『コウハイの まえで\nなんども まけてられないのよね{EOS}"
	.if (. - Route117_Text_AnnaRematchIntro) > 0x1d
	.error "Route117_Text_AnnaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaRematchIntro) < 0x1d
	.space 0x1d - (. - Route117_Text_AnnaRematchIntro)
	.endif
	@ data/text/trainers.inc:1802 Route117_Text_AnnaRematchDefeat (+1 aliases)
	.globl Route117_Text_AnnaRematchDefeat
Route117_Text_AnnaRematchDefeat: @ 0x0825E122
	.string "ミホ『ちょうしが でなかったのよ{EOS}"
	.if (. - Route117_Text_AnnaRematchDefeat) > 0x11
	.error "Route117_Text_AnnaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaRematchDefeat) < 0x11
	.space 0x11 - (. - Route117_Text_AnnaRematchDefeat)
	.endif
	@ data/text/trainers.inc:1805 Route117_Text_AnnaPostRematch
	.globl Route117_Text_AnnaPostRematch
Route117_Text_AnnaPostRematch: @ 0x0825E133
	.string "ミホ『あなたの ポケモン\nなかなかの コンビネーションしてる!\pそうね あたしたちの\nつぎ ぐらいに すごいんじゃない?{EOS}"
	.if (. - Route117_Text_AnnaPostRematch) > 0x3d
	.error "Route117_Text_AnnaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaPostRematch) < 0x3d
	.space 0x3d - (. - Route117_Text_AnnaPostRematch)
	.endif
	@ data/text/trainers.inc:1784 Route117_Text_AnnaNotEnoughMons (+2 aliases)
	.globl Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E170
Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E170: @ 0x0825E170
	.string "ミホ『あたしたちと しょうぶ したいなら\nポケモンを 2ひきは もってきてね!{EOS}"
	.if (. - Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E170) > 0x28
	.error "Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E170 may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E170) < 0x28
	.space 0x28 - (. - Route117_Text_AnnaNotEnoughMons_Copy_Rom_25E170)
	.endif
	@ data/text/trainers.inc:1811 Route117_Text_MegRematchIntro (+1 aliases)
	.globl Route117_Text_MegRematchIntro
Route117_Text_MegRematchIntro: @ 0x0825E198
	.string "リコ『センパイとの タッグで\nこんどこそ あなたを まかしちゃうから!{EOS}"
	.if (. - Route117_Text_MegRematchIntro) > 0x24
	.error "Route117_Text_MegRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegRematchIntro) < 0x24
	.space 0x24 - (. - Route117_Text_MegRematchIntro)
	.endif
	@ data/text/trainers.inc:1814 Route117_Text_MegRematchDefeat (+1 aliases)
	.globl Route117_Text_MegRematchDefeat
Route117_Text_MegRematchDefeat: @ 0x0825E1BC
	.string "リコ『つよすぎるわ{EOS}"
	.if (. - Route117_Text_MegRematchDefeat) > 0xa
	.error "Route117_Text_MegRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegRematchDefeat) < 0xa
	.space 0xa - (. - Route117_Text_MegRematchDefeat)
	.endif
	@ data/text/trainers.inc:1817 Route117_Text_MegPostRematch
	.globl Route117_Text_MegPostRematch
Route117_Text_MegPostRematch: @ 0x0825E1C6
	.string "リコ『センパイと いっしょに たたかったのに\nまけるだなんて…… おちこんじゃう!{EOS}"
	.if (. - Route117_Text_MegPostRematch) > 0x2a
	.error "Route117_Text_MegPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegPostRematch) < 0x2a
	.space 0x2a - (. - Route117_Text_MegPostRematch)
	.endif
	@ data/text/trainers.inc:1796 Route117_Text_MegNotEnoughMons (+2 aliases)
	.globl Route117_Text_MegNotEnoughMons_Copy_Rom_25E1F0
Route117_Text_MegNotEnoughMons_Copy_Rom_25E1F0: @ 0x0825E1F0
	.string "リコ『ポケモン 1ぴき しか いないの?\nじゃあ しょうぶは できないわね\pあたしたち 2たい2の\nしょうぶを たのしみたいの!{EOS}"
	.if (. - Route117_Text_MegNotEnoughMons_Copy_Rom_25E1F0) > 0x41
	.error "Route117_Text_MegNotEnoughMons_Copy_Rom_25E1F0 may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MegNotEnoughMons_Copy_Rom_25E1F0) < 0x41
	.space 0x41 - (. - Route117_Text_MegNotEnoughMons_Copy_Rom_25E1F0)
	.endif
	@ data/text/trainers.inc:1823 Route117_Text_MelinaIntro (+1 aliases)
	.globl Route117_Text_MelinaIntro
Route117_Text_MelinaIntro: @ 0x0825E231
	.string "すてきな おはなを みながら\nしょうぶする なんて すてきよね!{EOS}"
	.if (. - Route117_Text_MelinaIntro) > 0x21
	.error "Route117_Text_MelinaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MelinaIntro) < 0x21
	.space 0x21 - (. - Route117_Text_MelinaIntro)
	.endif
	@ data/text/trainers.inc:1826 Route117_Text_MelinaDefeat (+1 aliases)
	.globl Route117_Text_MelinaDefeat
Route117_Text_MelinaDefeat: @ 0x0825E252
	.string "へーえ いいカンジね あんた!{EOS}"
	.if (. - Route117_Text_MelinaDefeat) > 0x10
	.error "Route117_Text_MelinaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_MelinaDefeat) < 0x10
	.space 0x10 - (. - Route117_Text_MelinaDefeat)
	.endif
	@ data/text/trainers.inc:1829 Route117_Text_MelinaPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_MelinaPostBattle
Route117_Text_MelinaPostBattle: @ 0x0825E262
	.string "おはなを みながら はしると\nきもちいいわよ!{EOS}"
	.if (. - Route117_Text_MelinaPostBattle) != 0x18
	.error "Route117_Text_MelinaPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1832 Route117_Text_BrandiIntro (+1 aliases)
	.globl Route117_Text_BrandiIntro
Route117_Text_BrandiIntro: @ 0x0825E27A
	.string "エスパーポケモンに\nひめられた ちからを おみせするわ!{EOS}"
	.if (. - Route117_Text_BrandiIntro) > 0x1d
	.error "Route117_Text_BrandiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_BrandiIntro) < 0x1d
	.space 0x1d - (. - Route117_Text_BrandiIntro)
	.endif
	@ data/text/trainers.inc:1835 Route117_Text_BrandiDefeat (+1 aliases)
	.globl Route117_Text_BrandiDefeat
Route117_Text_BrandiDefeat: @ 0x0825E297
	.string "おどろいたわ{EOS}"
	.if (. - Route117_Text_BrandiDefeat) > 0x7
	.error "Route117_Text_BrandiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_BrandiDefeat) < 0x7
	.space 0x7 - (. - Route117_Text_BrandiDefeat)
	.endif
	@ data/text/trainers.inc:1838 Route117_Text_BrandiPostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route117_Text_BrandiPostBattle
Route117_Text_BrandiPostBattle: @ 0x0825E29E
	.string "エスパーポケモンは おくが ふかいの\nあなたも つかまえて ごらんなさい{EOS}"
	.if (. - Route117_Text_BrandiPostBattle) != 0x25
	.error "Route117_Text_BrandiPostBattle must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1841 Route117_Text_AishaIntro (+1 aliases)
	.globl Route117_Text_AishaIntro
Route117_Text_AishaIntro: @ 0x0825E2C3
	.string "かつこと だけを かんがえて たたかうわ!{EOS}"
	.if (. - Route117_Text_AishaIntro) > 0x16
	.error "Route117_Text_AishaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AishaIntro) < 0x16
	.space 0x16 - (. - Route117_Text_AishaIntro)
	.endif
	@ data/text/trainers.inc:1844 Route117_Text_AishaDefeat (+1 aliases)
	.globl Route117_Text_AishaDefeat
Route117_Text_AishaDefeat: @ 0x0825E2D9
	.string "まけても くやしがったり しない!\nそんなひまが あったら とっくんよ{EOS}"
	.if (. - Route117_Text_AishaDefeat) > 0x24
	.error "Route117_Text_AishaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AishaDefeat) < 0x24
	.space 0x24 - (. - Route117_Text_AishaDefeat)
	.endif
	@ data/text/trainers.inc:1847 Route117_Text_AishaPostBattle
	.globl Route117_Text_AishaPostBattle
Route117_Text_AishaPostBattle: @ 0x0825E2FD
	.string "まけるかな?と しんぱい すると\nよけいに まけちゃうと おもうのよね{EOS}"
	.if (. - Route117_Text_AishaPostBattle) > 0x24
	.error "Route117_Text_AishaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route117_Text_AishaPostBattle) < 0x24
	.space 0x24 - (. - Route117_Text_AishaPostBattle)
	.endif
	@ data/text/trainers.inc:1850 Route118_Text_RoseIntro (+1 aliases)
	.globl Route118_Text_RoseIntro
Route118_Text_RoseIntro: @ 0x0825E321
	.string "はなの かおりは ふしぎな ちから\nからだも こころも きれいに なるわ{EOS}"
	.if (. - Route118_Text_RoseIntro) > 0x25
	.error "Route118_Text_RoseIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseIntro) < 0x25
	.space 0x25 - (. - Route118_Text_RoseIntro)
	.endif
	@ data/text/trainers.inc:1853 Route118_Text_RoseDefeat (+1 aliases)
	.globl Route118_Text_RoseDefeat
Route118_Text_RoseDefeat: @ 0x0825E346
	.string "あらら\nまけちゃったわね{EOS}"
	.if (. - Route118_Text_RoseDefeat) > 0xd
	.error "Route118_Text_RoseDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseDefeat) < 0xd
	.space 0xd - (. - Route118_Text_RoseDefeat)
	.endif
	@ data/text/trainers.inc:1856 Route118_Text_RosePostBattle
	.globl Route118_Text_RosePostBattle
Route118_Text_RosePostBattle: @ 0x0825E353
	.string "はなも ポケモンも\nいい かおりの ものが だいすき!\lクサイにおいは…… かんべんね{EOS}"
	.if (. - Route118_Text_RosePostBattle) > 0x2c
	.error "Route118_Text_RosePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RosePostBattle) < 0x2c
	.space 0x2c - (. - Route118_Text_RosePostBattle)
	.endif
	@ data/text/trainers.inc:1859 Route118_Text_RoseRegister
	.globl Route118_Text_RoseRegister
Route118_Text_RoseRegister: @ 0x0825E37F
	.string "あら その においは ポケナビね\nぜひとも とうろく しあいましょう!{EOS}"
	.if (. - Route118_Text_RoseRegister) > 0x24
	.error "Route118_Text_RoseRegister may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseRegister) < 0x24
	.space 0x24 - (. - Route118_Text_RoseRegister)
	.endif
	@ data/text/trainers.inc:1862 Route118_Text_RoseRematchIntro (+1 aliases)
	.globl Route118_Text_RoseRematchIntro
Route118_Text_RoseRematchIntro: @ 0x0825E3A3
	.string "いい かおりに さそわれて\nいらしたのかしら?{EOS}"
	.if (. - Route118_Text_RoseRematchIntro) > 0x18
	.error "Route118_Text_RoseRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseRematchIntro) < 0x18
	.space 0x18 - (. - Route118_Text_RoseRematchIntro)
	.endif
	@ data/text/trainers.inc:1865 Route118_Text_RoseRematchDefeat (+1 aliases)
	.globl Route118_Text_RoseRematchDefeat
Route118_Text_RoseRematchDefeat: @ 0x0825E3BB
	.string "においの こうか……\nあんまり きかなかったわね{EOS}"
	.if (. - Route118_Text_RoseRematchDefeat) > 0x19
	.error "Route118_Text_RoseRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RoseRematchDefeat) < 0x19
	.space 0x19 - (. - Route118_Text_RoseRematchDefeat)
	.endif
	@ data/text/trainers.inc:1868 Route118_Text_RosePostRematch
	.globl Route118_Text_RosePostRematch
Route118_Text_RosePostRematch: @ 0x0825E3D4
	.string "あまいかおりを うまく つかうと\nポケモンが さそわれて やってくるわね{EOS}"
	.if (. - Route118_Text_RosePostRematch) > 0x25
	.error "Route118_Text_RosePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_RosePostRematch) < 0x25
	.space 0x25 - (. - Route118_Text_RosePostRematch)
	.endif
	@ data/text/trainers.inc:1871 Route118_Text_PerryIntro (+1 aliases)
	.globl Route118_Text_PerryIntro
Route118_Text_PerryIntro: @ 0x0825E3F9
	.string "かれいに おおぞらを まう\nとりポケモンが さいこう だぜ!{EOS}"
	.if (. - Route118_Text_PerryIntro) > 0x1f
	.error "Route118_Text_PerryIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_PerryIntro) < 0x1f
	.space 0x1f - (. - Route118_Text_PerryIntro)
	.endif
	@ data/text/trainers.inc:1874 Route118_Text_PerryDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route118_Text_PerryDefeat
Route118_Text_PerryDefeat: @ 0x0825E418
	.string "うう…… まけた……{EOS}"
	.if (. - Route118_Text_PerryDefeat) != 0xb
	.error "Route118_Text_PerryDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1877 Route118_Text_PerryPostBattle
	.globl Route118_Text_PerryPostBattle
Route118_Text_PerryPostBattle: @ 0x0825E423
	.string "きみも いい ポケモンを もってるね!\nぼくも まけずに そだてよっと!{EOS}"
	.if (. - Route118_Text_PerryPostBattle) > 0x25
	.error "Route118_Text_PerryPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_PerryPostBattle) < 0x25
	.space 0x25 - (. - Route118_Text_PerryPostBattle)
	.endif
	@ data/text/trainers.inc:1880 Route118_Text_ChesterIntro (+1 aliases)
	.globl Route118_Text_ChesterIntro
Route118_Text_ChesterIntro: @ 0x0825E448
	.string "はばたけ!\nおいらの とりポケモン!{EOS}"
	.if (. - Route118_Text_ChesterIntro) > 0x13
	.error "Route118_Text_ChesterIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_ChesterIntro) < 0x13
	.space 0x13 - (. - Route118_Text_ChesterIntro)
	.endif
	@ data/text/trainers.inc:1883 Route118_Text_ChesterDefeat (+1 aliases)
	.globl Route118_Text_ChesterDefeat
Route118_Text_ChesterDefeat: @ 0x0825E45B
	.string "はばたいたけど……{EOS}"
	.if (. - Route118_Text_ChesterDefeat) > 0xa
	.error "Route118_Text_ChesterDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_ChesterDefeat) < 0xa
	.space 0xa - (. - Route118_Text_ChesterDefeat)
	.endif
	@ data/text/trainers.inc:1886 Route118_Text_ChesterPostBattle
	.globl Route118_Text_ChesterPostBattle
Route118_Text_ChesterPostBattle: @ 0x0825E465
	.string "もっと つよくなると\nじゆうに とべるように なるのにな!{EOS}"
	.if (. - Route118_Text_ChesterPostBattle) > 0x1e
	.error "Route118_Text_ChesterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_ChesterPostBattle) < 0x1e
	.space 0x1e - (. - Route118_Text_ChesterPostBattle)
	.endif
	@ data/text/trainers.inc:1889 Route118_Text_BarnyIntro (+1 aliases)
	.globl Route118_Text_BarnyIntro
Route118_Text_BarnyIntro: @ 0x0825E483
	.string "あたしゃ つりびとだが トレーナーでもある\nつった ポケモン ちゃんと そだててるよ!{EOS}"
	.if (. - Route118_Text_BarnyIntro) > 0x2c
	.error "Route118_Text_BarnyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_BarnyIntro) < 0x2c
	.space 0x2c - (. - Route118_Text_BarnyIntro)
	.endif
	@ data/text/trainers.inc:1892 Route118_Text_BarnyDefeat (+1 aliases)
	.globl Route118_Text_BarnyDefeat
Route118_Text_BarnyDefeat: @ 0x0825E4AF
	.string "そだてたはず なんだが……?{EOS}"
	.if (. - Route118_Text_BarnyDefeat) > 0xf
	.error "Route118_Text_BarnyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_BarnyDefeat) < 0xf
	.space 0xf - (. - Route118_Text_BarnyDefeat)
	.endif
	@ data/text/trainers.inc:1895 Route118_Text_BarnyPostBattle
	.globl Route118_Text_BarnyPostBattle
Route118_Text_BarnyPostBattle: @ 0x0825E4BE
	.string "つりを しながら\nポケモン そだてても かてなかった……\lどっちも はんぱ だったのか!?{EOS}"
	.if (. - Route118_Text_BarnyPostBattle) > 0x2e
	.error "Route118_Text_BarnyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_BarnyPostBattle) < 0x2e
	.space 0x2e - (. - Route118_Text_BarnyPostBattle)
	.endif
	@ data/text/trainers.inc:1898 Route118_Text_WadeIntro (+1 aliases)
	.globl Route118_Text_WadeIntro
Route118_Text_WadeIntro: @ 0x0825E4EC
	.string "つりびとに だいじ なのは どうぐ!\nトレーナーに だいじ なのは\lもちろん ポケモンと ハートだな!{EOS}"
	.if (. - Route118_Text_WadeIntro) > 0x34
	.error "Route118_Text_WadeIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_WadeIntro) < 0x34
	.space 0x34 - (. - Route118_Text_WadeIntro)
	.endif
	@ data/text/trainers.inc:1901 Route118_Text_WadeDefeat (+1 aliases)
	.globl Route118_Text_WadeDefeat
Route118_Text_WadeDefeat: @ 0x0825E520
	.string "ハートの しょうぶで まけたのか?{EOS}"
	.if (. - Route118_Text_WadeDefeat) > 0x12
	.error "Route118_Text_WadeDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_WadeDefeat) < 0x12
	.space 0x12 - (. - Route118_Text_WadeDefeat)
	.endif
	@ data/text/trainers.inc:1904 Route118_Text_WadePostBattle
	.globl Route118_Text_WadePostBattle
Route118_Text_WadePostBattle: @ 0x0825E532
	.string "つり というのも\nひとと ポケモンとの\lしんけん しょうぶ だな!{EOS}"
	.if (. - Route118_Text_WadePostBattle) > 0x22
	.error "Route118_Text_WadePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_WadePostBattle) < 0x22
	.space 0x22 - (. - Route118_Text_WadePostBattle)
	.endif
	@ data/text/trainers.inc:1907 Route118_Text_DaltonIntro (+1 aliases)
	.globl Route118_Text_DaltonIntro
Route118_Text_DaltonIntro: @ 0x0825E554
	.string "ぼくの メロディ\nあなたの こころに とどけるよ{EOS}"
	.if (. - Route118_Text_DaltonIntro) > 0x19
	.error "Route118_Text_DaltonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonIntro) < 0x19
	.space 0x19 - (. - Route118_Text_DaltonIntro)
	.endif
	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl Route118_Text_DaltonDefeat_Copy_Rom_25E56D
Route118_Text_DaltonDefeat_Copy_Rom_25E56D: @ 0x0825E56D
	.string "ルー ルルルー{EOS}"
	.if (. - Route118_Text_DaltonDefeat_Copy_Rom_25E56D) > 0x8
	.error "Route118_Text_DaltonDefeat_Copy_Rom_25E56D may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonDefeat_Copy_Rom_25E56D) < 0x8
	.space 0x8 - (. - Route118_Text_DaltonDefeat_Copy_Rom_25E56D)
	.endif
	@ data/text/trainers.inc:1913 Route118_Text_DaltonPostBattle
	.globl Route118_Text_DaltonPostBattle
Route118_Text_DaltonPostBattle: @ 0x0825E575
	.string "エレキギターって\nただ うるさい だけじゃ ないんだ……\pこうして こころに しみる\nメロディも かなでられるのさ……{EOS}"
	.if (. - Route118_Text_DaltonPostBattle) > 0x3c
	.error "Route118_Text_DaltonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonPostBattle) < 0x3c
	.space 0x3c - (. - Route118_Text_DaltonPostBattle)
	.endif
	@ data/text/trainers.inc:1916 Route118_Text_DaltonRegister
	.globl Route118_Text_DaltonRegister
Route118_Text_DaltonRegister: @ 0x0825E5B1
	.string "もっと いい メロディが できたら\nききにおいでよ!{EOS}"
	.if (. - Route118_Text_DaltonRegister) > 0x1b
	.error "Route118_Text_DaltonRegister may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonRegister) < 0x1b
	.space 0x1b - (. - Route118_Text_DaltonRegister)
	.endif
	@ data/text/trainers.inc:1919 Route118_Text_DaltonRematchIntro (+1 aliases)
	.globl Route118_Text_DaltonRematchIntro
Route118_Text_DaltonRematchIntro: @ 0x0825E5CC
	.string "ぼくと ポケモンの メロディ\nあなたの こころに とどけるよ{EOS}"
	.if (. - Route118_Text_DaltonRematchIntro) > 0x1f
	.error "Route118_Text_DaltonRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonRematchIntro) < 0x1f
	.space 0x1f - (. - Route118_Text_DaltonRematchIntro)
	.endif
	@ data/text/trainers.inc:1910 Route118_Text_DaltonDefeat (+2 aliases)
	.globl Route118_Text_DaltonDefeat_Copy_Rom_25E5EB
Route118_Text_DaltonDefeat_Copy_Rom_25E5EB: @ 0x0825E5EB
	.string "ルー ルルルー{EOS}"
	.if (. - Route118_Text_DaltonDefeat_Copy_Rom_25E5EB) > 0x8
	.error "Route118_Text_DaltonDefeat_Copy_Rom_25E5EB may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonDefeat_Copy_Rom_25E5EB) < 0x8
	.space 0x8 - (. - Route118_Text_DaltonDefeat_Copy_Rom_25E5EB)
	.endif
	@ data/text/trainers.inc:1925 Route118_Text_DaltonPostRematch
	.globl Route118_Text_DaltonPostRematch
Route118_Text_DaltonPostRematch: @ 0x0825E5F3
	.string "ひいてるときの ぼくの きもちが\nエレキギターを とおして\lあなたに とどく はずなのさ……{EOS}"
	.if (. - Route118_Text_DaltonPostRematch) > 0x2f
	.error "Route118_Text_DaltonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DaltonPostRematch) < 0x2f
	.space 0x2f - (. - Route118_Text_DaltonPostRematch)
	.endif
	@ data/text/trainers.inc:1928 Route118_Text_DeandreIntro (+1 aliases)
	.globl Route118_Text_DeandreIntro
Route118_Text_DeandreIntro: @ 0x0825E622
	.string "いけいけー!\nボクの ポケモン 1ごう 2ごう 3ごう!{EOS}"
	.if (. - Route118_Text_DeandreIntro) > 0x1d
	.error "Route118_Text_DeandreIntro may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DeandreIntro) < 0x1d
	.space 0x1d - (. - Route118_Text_DeandreIntro)
	.endif
	@ data/text/trainers.inc:1931 Route118_Text_DeandreDefeat (+1 aliases)
	.globl Route118_Text_DeandreDefeat
Route118_Text_DeandreDefeat: @ 0x0825E63F
	.string "ああ だいじょうぶか!?\nボクの ポケモン 1ごう 2ごう 3ごう!{EOS}"
	.if (. - Route118_Text_DeandreDefeat) > 0x23
	.error "Route118_Text_DeandreDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DeandreDefeat) < 0x23
	.space 0x23 - (. - Route118_Text_DeandreDefeat)
	.endif
	@ data/text/trainers.inc:1934 Route118_Text_DeandrePostBattle
	.globl Route118_Text_DeandrePostBattle
Route118_Text_DeandrePostBattle: @ 0x0825E662
	.string "ボクの ポケモン せんたい\nカッコいい だろー!\lまね しても いーぜー!{EOS}"
	.if (. - Route118_Text_DeandrePostBattle) > 0x26
	.error "Route118_Text_DeandrePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route118_Text_DeandrePostBattle) < 0x26
	.space 0x26 - (. - Route118_Text_DeandrePostBattle)
	.endif
	@ data/text/trainers.inc:1937 Route119_Text_BrentIntro (+1 aliases)
	.globl Route119_Text_BrentIntro
Route119_Text_BrentIntro: @ 0x0825E688
	.string "ボクらは モノマネサークル!\nキミの うごきを マネするよ!{EOS}"
	.if (. - Route119_Text_BrentIntro) > 0x1f
	.error "Route119_Text_BrentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_BrentIntro) < 0x1f
	.space 0x1f - (. - Route119_Text_BrentIntro)
	.endif
	@ data/text/trainers.inc:1940 Route119_Text_BrentDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route119_Text_BrentDefeat
Route119_Text_BrentDefeat: @ 0x0825E6A7
	.string "うわあ まけたーっ!{EOS}"
	.if (. - Route119_Text_BrentDefeat) != 0xb
	.error "Route119_Text_BrentDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:1943 Route119_Text_BrentPostBattle
	.globl Route119_Text_BrentPostBattle
Route119_Text_BrentPostBattle: @ 0x0825E6B2
	.string "マネを して なにが たのしいか……\pふふふ……\nキミには わからない だろうよ{EOS}"
	.if (. - Route119_Text_BrentPostBattle) > 0x29
	.error "Route119_Text_BrentPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_BrentPostBattle) < 0x29
	.space 0x29 - (. - Route119_Text_BrentPostBattle)
	.endif
	@ data/text/trainers.inc:1946 Route119_Text_DonaldIntro (+1 aliases)
	.globl Route119_Text_DonaldIntro
Route119_Text_DonaldIntro: @ 0x0825E6DB
	.string "ようやく であえたね!\nぼくの むしポケモンが あいて するよ!{EOS}"
	.if (. - Route119_Text_DonaldIntro) > 0x21
	.error "Route119_Text_DonaldIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DonaldIntro) < 0x21
	.space 0x21 - (. - Route119_Text_DonaldIntro)
	.endif
	@ data/text/trainers.inc:1949 Route119_Text_DonaldDefeat (+1 aliases)
	.globl Route119_Text_DonaldDefeat
Route119_Text_DonaldDefeat: @ 0x0825E6FC
	.string "であわなければ よかった……{EOS}"
	.if (. - Route119_Text_DonaldDefeat) > 0xf
	.error "Route119_Text_DonaldDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DonaldDefeat) < 0xf
	.space 0xf - (. - Route119_Text_DonaldDefeat)
	.endif
	@ data/text/trainers.inc:1952 Route119_Text_DonaldPostBattle
	.globl Route119_Text_DonaldPostBattle
Route119_Text_DonaldPostBattle: @ 0x0825E70B
	.string "もっと キミの マネを したい!\nほら はやく うごいてよ!{EOS}"
	.if (. - Route119_Text_DonaldPostBattle) > 0x1f
	.error "Route119_Text_DonaldPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DonaldPostBattle) < 0x1f
	.space 0x1f - (. - Route119_Text_DonaldPostBattle)
	.endif
	@ data/text/trainers.inc:1955 Route119_Text_TaylorIntro (+1 aliases)
	.globl Route119_Text_TaylorIntro
Route119_Text_TaylorIntro: @ 0x0825E72A
	.string "きみが まえに すすんだら\nぼくらも すすむ\pきみが みぎへ まがれば\nぼくらも まがる……{EOS}"
	.if (. - Route119_Text_TaylorIntro) > 0x2f
	.error "Route119_Text_TaylorIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TaylorIntro) < 0x2f
	.space 0x2f - (. - Route119_Text_TaylorIntro)
	.endif
	@ data/text/trainers.inc:1958 Route119_Text_TaylorDefeat (+1 aliases)
	.globl Route119_Text_TaylorDefeat
Route119_Text_TaylorDefeat: @ 0x0825E759
	.string "キミが かっても\nぼくは まける……{EOS}"
	.if (. - Route119_Text_TaylorDefeat) > 0x13
	.error "Route119_Text_TaylorDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TaylorDefeat) < 0x13
	.space 0x13 - (. - Route119_Text_TaylorDefeat)
	.endif
	@ data/text/trainers.inc:1961 Route119_Text_TaylorPostBattle
	.globl Route119_Text_TaylorPostBattle
Route119_Text_TaylorPostBattle: @ 0x0825E76C
	.string "うーん しょうぶの しょうはい だけは\nマネ できないよなあ……\lなんか くやしい……{EOS}"
	.if (. - Route119_Text_TaylorPostBattle) > 0x2c
	.error "Route119_Text_TaylorPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TaylorPostBattle) < 0x2c
	.space 0x2c - (. - Route119_Text_TaylorPostBattle)
	.endif
	@ data/text/trainers.inc:1964 Route119_Text_DougIntro (+1 aliases)
	.globl Route119_Text_DougIntro
Route119_Text_DougIntro: @ 0x0825E798
	.string "やっと ボクを つかまえられたね!\nそれとも にげようと していたのかな?{EOS}"
	.if (. - Route119_Text_DougIntro) > 0x26
	.error "Route119_Text_DougIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DougIntro) < 0x26
	.space 0x26 - (. - Route119_Text_DougIntro)
	.endif
	@ data/text/trainers.inc:1967 Route119_Text_DougDefeat (+1 aliases)
	.globl Route119_Text_DougDefeat
Route119_Text_DougDefeat: @ 0x0825E7BE
	.string "すばらしい たたかい だったな!{EOS}"
	.if (. - Route119_Text_DougDefeat) > 0x11
	.error "Route119_Text_DougDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DougDefeat) < 0x11
	.space 0x11 - (. - Route119_Text_DougDefeat)
	.endif
	@ data/text/trainers.inc:1970 Route119_Text_DougPostBattle
	.globl Route119_Text_DougPostBattle
Route119_Text_DougPostBattle: @ 0x0825E7CF
	.string "ボクらは モノマネサークル!\nたのしんで もらえたかな?{EOS}"
	.if (. - Route119_Text_DougPostBattle) > 0x1d
	.error "Route119_Text_DougPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DougPostBattle) < 0x1d
	.space 0x1d - (. - Route119_Text_DougPostBattle)
	.endif
	@ data/text/trainers.inc:1973 Route119_Text_GregIntro (+1 aliases)
	.globl Route119_Text_GregIntro
Route119_Text_GregIntro: @ 0x0825E7EC
	.string "ボクが だれなのか わからないだろう?\p……まあ ボクも キミのこと しらないから\nこうして たたかうんだけどね!{EOS}"
	.if (. - Route119_Text_GregIntro) > 0x3a
	.error "Route119_Text_GregIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_GregIntro) < 0x3a
	.space 0x3a - (. - Route119_Text_GregIntro)
	.endif
	@ data/text/trainers.inc:1976 Route119_Text_GregDefeat (+1 aliases)
	.globl Route119_Text_GregDefeat
Route119_Text_GregDefeat: @ 0x0825E826
	.string "けっこう つよい じゃんか!{EOS}"
	.if (. - Route119_Text_GregDefeat) > 0xf
	.error "Route119_Text_GregDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_GregDefeat) < 0xf
	.space 0xf - (. - Route119_Text_GregDefeat)
	.endif
	@ data/text/trainers.inc:1979 Route119_Text_GregPostBattle
	.globl Route119_Text_GregPostBattle
Route119_Text_GregPostBattle: @ 0x0825E835
	.string "キミが どこかに いくまで\nボクらは マネを つづけるよ!{EOS}"
	.if (. - Route119_Text_GregPostBattle) > 0x1e
	.error "Route119_Text_GregPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_GregPostBattle) < 0x1e
	.space 0x1e - (. - Route119_Text_GregPostBattle)
	.endif
	@ data/text/trainers.inc:1982 Route119_Text_KentIntro (+1 aliases)
	.globl Route119_Text_KentIntro
Route119_Text_KentIntro: @ 0x0825E853
	.string "モノマネ だいすきな ひとが\nあつまって つくった モノマネサークル!\pであった そのとき\nしょうぶが はじまる!{EOS}"
	.if (. - Route119_Text_KentIntro) > 0x3a
	.error "Route119_Text_KentIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_KentIntro) < 0x3a
	.space 0x3a - (. - Route119_Text_KentIntro)
	.endif
	@ data/text/trainers.inc:410 Route106_Text_DouglasDefeated (+2 aliases)
	.globl Route106_Text_DouglasDefeated_Copy_Rom_25E88D
Route106_Text_DouglasDefeated_Copy_Rom_25E88D: @ 0x0825E88D
	.string "まいりましたーっ!{EOS}"
	.if (. - Route106_Text_DouglasDefeated_Copy_Rom_25E88D) > 0xa
	.error "Route106_Text_DouglasDefeated_Copy_Rom_25E88D may not grow beyond its original slot"
	.endif
	.if (. - Route106_Text_DouglasDefeated_Copy_Rom_25E88D) < 0xa
	.space 0xa - (. - Route106_Text_DouglasDefeated_Copy_Rom_25E88D)
	.endif
	@ data/text/trainers.inc:1988 Route119_Text_KentPostBattle
	.globl Route119_Text_KentPostBattle
Route119_Text_KentPostBattle: @ 0x0825E897
	.string "キミも モノマネサークルに はいらない?{EOS}"
	.if (. - Route119_Text_KentPostBattle) > 0x15
	.error "Route119_Text_KentPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_KentPostBattle) < 0x15
	.space 0x15 - (. - Route119_Text_KentPostBattle)
	.endif
	@ data/text/trainers.inc:1991 Route119_Text_JacksonIntro (+1 aliases)
	.globl Route119_Text_JacksonIntro
Route119_Text_JacksonIntro: @ 0x0825E8AC
	.string "サバイバルに ひつような\nちしきと ぎじゅつを もつ もの!\lそれが ポケモンレンジャーさ!{EOS}"
	.if (. - Route119_Text_JacksonIntro) > 0x2f
	.error "Route119_Text_JacksonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonIntro) < 0x2f
	.space 0x2f - (. - Route119_Text_JacksonIntro)
	.endif
	@ data/text/trainers.inc:1994 Route119_Text_JacksonDefeat (+1 aliases)
	.globl Route119_Text_JacksonDefeat
Route119_Text_JacksonDefeat: @ 0x0825E8DB
	.string "ポケモンの ちしきは たらなかった……{EOS}"
	.if (. - Route119_Text_JacksonDefeat) > 0x14
	.error "Route119_Text_JacksonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonDefeat) < 0x14
	.space 0x14 - (. - Route119_Text_JacksonDefeat)
	.endif
	@ data/text/trainers.inc:1997 Route119_Text_JacksonPostBattle
	.globl Route119_Text_JacksonPostBattle
Route119_Text_JacksonPostBattle: @ 0x0825E8EF
	.string "ぶんめい から はなれて\nにんげんの やせいを めざめさせる!\lそれが オレたちの テーマさ!{EOS}"
	.if (. - Route119_Text_JacksonPostBattle) > 0x30
	.error "Route119_Text_JacksonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonPostBattle) < 0x30
	.space 0x30 - (. - Route119_Text_JacksonPostBattle)
	.endif
	@ data/text/trainers.inc:2000 Route119_Text_JacksonRegister
	.globl Route119_Text_JacksonRegister
Route119_Text_JacksonRegister: @ 0x0825E91F
	.string "ちしきぶそくと わらわずに\nこんど また あいてを してやってくれよな{EOS}"
	.if (. - Route119_Text_JacksonRegister) > 0x24
	.error "Route119_Text_JacksonRegister may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonRegister) < 0x24
	.space 0x24 - (. - Route119_Text_JacksonRegister)
	.endif
	@ data/text/trainers.inc:2003 Route119_Text_JacksonRematchIntro (+1 aliases)
	.globl Route119_Text_JacksonRematchIntro
Route119_Text_JacksonRematchIntro: @ 0x0825E943
	.string "ポケモンと いることで\nやせいを とりもどすのさ!{EOS}"
	.if (. - Route119_Text_JacksonRematchIntro) > 0x1a
	.error "Route119_Text_JacksonRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonRematchIntro) < 0x1a
	.space 0x1a - (. - Route119_Text_JacksonRematchIntro)
	.endif
	@ data/text/trainers.inc:2006 Route119_Text_JacksonRematchDefeat (+1 aliases)
	.globl Route119_Text_JacksonRematchDefeat
Route119_Text_JacksonRematchDefeat: @ 0x0825E95D
	.string "あいかわらず つよいな!{EOS}"
	.if (. - Route119_Text_JacksonRematchDefeat) > 0xd
	.error "Route119_Text_JacksonRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonRematchDefeat) < 0xd
	.space 0xd - (. - Route119_Text_JacksonRematchDefeat)
	.endif
	@ data/text/trainers.inc:2009 Route119_Text_JacksonPostRematch
	.globl Route119_Text_JacksonPostRematch
Route119_Text_JacksonPostRematch: @ 0x0825E96A
	.string "とにかく ポケモンを しんじろ!\nじぶんを しんじろ!\lそうすれば みちは ひらける!{EOS}"
	.if (. - Route119_Text_JacksonPostRematch) > 0x2c
	.error "Route119_Text_JacksonPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_JacksonPostRematch) < 0x2c
	.space 0x2c - (. - Route119_Text_JacksonPostRematch)
	.endif
	@ data/text/trainers.inc:2012 Route119_Text_CatherineIntro (+1 aliases)
	.globl Route119_Text_CatherineIntro
Route119_Text_CatherineIntro: @ 0x0825E996
	.string "あら あなた……\nぼうけんを している わりには\lずいぶん みがるな かっこうね!{EOS}"
	.if (. - Route119_Text_CatherineIntro) > 0x2a
	.error "Route119_Text_CatherineIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineIntro) < 0x2a
	.space 0x2a - (. - Route119_Text_CatherineIntro)
	.endif
	@ data/text/trainers.inc:2015 Route119_Text_CatherineDefeat (+1 aliases)
	.globl Route119_Text_CatherineDefeat
Route119_Text_CatherineDefeat: @ 0x0825E9C0
	.string "じゅんび ぶそくは じこの もと……{EOS}"
	.if (. - Route119_Text_CatherineDefeat) > 0x13
	.error "Route119_Text_CatherineDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineDefeat) < 0x13
	.space 0x13 - (. - Route119_Text_CatherineDefeat)
	.endif
	@ data/text/trainers.inc:2018 Route119_Text_CatherinePostBattle
	.globl Route119_Text_CatherinePostBattle
Route119_Text_CatherinePostBattle: @ 0x0825E9D3
	.string "ずいぶん みがるな かっこう だけど\nひつような どうぐは もってるし\lきりょく たいりょく じゅうぶんね!{EOS}"
	.if (. - Route119_Text_CatherinePostBattle) > 0x37
	.error "Route119_Text_CatherinePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherinePostBattle) < 0x37
	.space 0x37 - (. - Route119_Text_CatherinePostBattle)
	.endif
	@ data/text/trainers.inc:2021 Route119_Text_CatherineRegister
	.globl Route119_Text_CatherineRegister
Route119_Text_CatherineRegister: @ 0x0825EA0A
	.string "トレーナーの ひつじゅひん ポケナビは\nちゃんと もってる?\pあっ もってるわね! とうろくしましょ{EOS}"
	.if (. - Route119_Text_CatherineRegister) > 0x33
	.error "Route119_Text_CatherineRegister may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineRegister) < 0x33
	.space 0x33 - (. - Route119_Text_CatherineRegister)
	.endif
	@ data/text/trainers.inc:2024 Route119_Text_CatherineRematchIntro (+1 aliases)
	.globl Route119_Text_CatherineRematchIntro
Route119_Text_CatherineRematchIntro: @ 0x0825EA3D
	.string "ポケモンと いっしょの ぼうけんは\nうまく いってるかしら?{EOS}"
	.if (. - Route119_Text_CatherineRematchIntro) > 0x1f
	.error "Route119_Text_CatherineRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineRematchIntro) < 0x1f
	.space 0x1f - (. - Route119_Text_CatherineRematchIntro)
	.endif
	@ data/text/trainers.inc:2027 Route119_Text_CatherineRematchDefeat (+1 aliases)
	.globl Route119_Text_CatherineRematchDefeat
Route119_Text_CatherineRematchDefeat: @ 0x0825EA5C
	.string "まだ なにかが\nたりなかったわね……{EOS}"
	.if (. - Route119_Text_CatherineRematchDefeat) > 0x13
	.error "Route119_Text_CatherineRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherineRematchDefeat) < 0x13
	.space 0x13 - (. - Route119_Text_CatherineRematchDefeat)
	.endif
	@ data/text/trainers.inc:2030 Route119_Text_CatherinePostRematch
	.globl Route119_Text_CatherinePostRematch
Route119_Text_CatherinePostRematch: @ 0x0825EA6F
	.string "トレーナーの あなたが\nポケモンを たよって いるように\lポケモンも あなたを たよっているのよ!{EOS}"
	.if (. - Route119_Text_CatherinePostRematch) > 0x32
	.error "Route119_Text_CatherinePostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_CatherinePostRematch) < 0x32
	.space 0x32 - (. - Route119_Text_CatherinePostRematch)
	.endif
	@ data/text/trainers.inc:2033 Route119_Text_HughIntro (+1 aliases)
	.globl Route119_Text_HughIntro
Route119_Text_HughIntro: @ 0x0825EAA1
	.string "おおぞらは おとこの ロマン!\pじゆうに そらを とぶ きもちよさは\nなにごとにも かえがたい!{EOS}"
	.if (. - Route119_Text_HughIntro) > 0x31
	.error "Route119_Text_HughIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HughIntro) < 0x31
	.space 0x31 - (. - Route119_Text_HughIntro)
	.endif
	@ data/text/trainers.inc:2036 Route119_Text_HughDefeat (+1 aliases)
	.globl Route119_Text_HughDefeat
Route119_Text_HughDefeat: @ 0x0825EAD2
	.string "まけたーっ!{EOS}"
	.if (. - Route119_Text_HughDefeat) > 0x7
	.error "Route119_Text_HughDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HughDefeat) < 0x7
	.space 0x7 - (. - Route119_Text_HughDefeat)
	.endif
	@ data/text/trainers.inc:2039 Route119_Text_HughPostBattle
	.globl Route119_Text_HughPostBattle
Route119_Text_HughPostBattle: @ 0x0825EAD9
	.string "そらを とびまわる ユメは\nとりポケモンの おかげで かなえられたよ!{EOS}"
	.if (. - Route119_Text_HughPostBattle) > 0x24
	.error "Route119_Text_HughPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HughPostBattle) < 0x24
	.space 0x24 - (. - Route119_Text_HughPostBattle)
	.endif
	@ data/text/trainers.inc:2042 Route119_Text_PhilIntro (+1 aliases)
	.globl Route119_Text_PhilIntro
Route119_Text_PhilIntro: @ 0x0825EAFD
	.string "ぼくの とりポケモンの じつりょくを\nみせて あげるよ!{EOS}"
	.if (. - Route119_Text_PhilIntro) > 0x1d
	.error "Route119_Text_PhilIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_PhilIntro) < 0x1d
	.space 0x1d - (. - Route119_Text_PhilIntro)
	.endif
	@ data/text/trainers.inc:2045 Route119_Text_PhilDefeat (+1 aliases)
	.globl Route119_Text_PhilDefeat
Route119_Text_PhilDefeat: @ 0x0825EB1A
	.string "じつりょく ぶそく だった……{EOS}"
	.if (. - Route119_Text_PhilDefeat) > 0x10
	.error "Route119_Text_PhilDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_PhilDefeat) < 0x10
	.space 0x10 - (. - Route119_Text_PhilDefeat)
	.endif
	@ data/text/trainers.inc:2048 Route119_Text_PhilPostBattle
	.globl Route119_Text_PhilPostBattle
Route119_Text_PhilPostBattle: @ 0x0825EB2A
	.string "ぼくは ちいさい ころから\nとりポケモンに あこがれて いたんだ!{EOS}"
	.if (. - Route119_Text_PhilPostBattle) > 0x22
	.error "Route119_Text_PhilPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_PhilPostBattle) < 0x22
	.space 0x22 - (. - Route119_Text_PhilPostBattle)
	.endif
	@ data/text/trainers.inc:2051 Route119_Text_YasuIntro (+1 aliases)
	.globl Route119_Text_YasuIntro
Route119_Text_YasuIntro: @ 0x0825EB4C
	.string "かげに ひそみ やみに いきる\nそれが オレの さだめ……!\lいざ ポケモンしょうぶ!{EOS}"
	.if (. - Route119_Text_YasuIntro) > 0x2c
	.error "Route119_Text_YasuIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_YasuIntro) < 0x2c
	.space 0x2c - (. - Route119_Text_YasuIntro)
	.endif
	@ data/text/trainers.inc:2054 Route119_Text_YasuDefeat (+1 aliases)
	.globl Route119_Text_YasuDefeat
Route119_Text_YasuDefeat: @ 0x0825EB78
	.string "まいった……!{EOS}"
	.if (. - Route119_Text_YasuDefeat) > 0x8
	.error "Route119_Text_YasuDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_YasuDefeat) < 0x8
	.space 0x8 - (. - Route119_Text_YasuDefeat)
	.endif
	@ data/text/trainers.inc:2057 Route119_Text_YasuPostBattle
	.globl Route119_Text_YasuPostBattle
Route119_Text_YasuPostBattle: @ 0x0825EB80
	.string "しょうぶに やぶれた ものは\nいさぎよく かげに もどる……\lそれも さだめ……{EOS}"
	.if (. - Route119_Text_YasuPostBattle) > 0x29
	.error "Route119_Text_YasuPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_YasuPostBattle) < 0x29
	.space 0x29 - (. - Route119_Text_YasuPostBattle)
	.endif
	@ data/text/trainers.inc:2060 Route119_Text_TakashiIntro (+1 aliases)
	.globl Route119_Text_TakashiIntro
Route119_Text_TakashiIntro: @ 0x0825EBA9
	.string "ゆだん してると\nいたい めに あうぜ!{EOS}"
	.if (. - Route119_Text_TakashiIntro) > 0x15
	.error "Route119_Text_TakashiIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TakashiIntro) < 0x15
	.space 0x15 - (. - Route119_Text_TakashiIntro)
	.endif
	@ data/text/trainers.inc:2063 Route119_Text_TakashiDefeat (+1 aliases)
	.globl Route119_Text_TakashiDefeat
Route119_Text_TakashiDefeat: @ 0x0825EBBE
	.string "つよいな きみーっ!{EOS}"
	.if (. - Route119_Text_TakashiDefeat) > 0xb
	.error "Route119_Text_TakashiDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TakashiDefeat) < 0xb
	.space 0xb - (. - Route119_Text_TakashiDefeat)
	.endif
	@ data/text/trainers.inc:2066 Route119_Text_TakashiPostBattle
	.globl Route119_Text_TakashiPostBattle
Route119_Text_TakashiPostBattle: @ 0x0825EBC9
	.string "きしゅう さくせんは シッパイだった……{EOS}"
	.if (. - Route119_Text_TakashiPostBattle) > 0x15
	.error "Route119_Text_TakashiPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_TakashiPostBattle) < 0x15
	.space 0x15 - (. - Route119_Text_TakashiPostBattle)
	.endif
	@ data/text/trainers.inc:2069 Route119_Text_HideoIntro (+1 aliases)
	.globl Route119_Text_HideoIntro
Route119_Text_HideoIntro: @ 0x0825EBDE
	.string "きを かくすなら もりのなか!{EOS}"
	.if (. - Route119_Text_HideoIntro) > 0x10
	.error "Route119_Text_HideoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HideoIntro) < 0x10
	.space 0x10 - (. - Route119_Text_HideoIntro)
	.endif
	@ data/text/trainers.inc:2072 Route119_Text_HideoDefeat (+1 aliases)
	.globl Route119_Text_HideoDefeat
Route119_Text_HideoDefeat: @ 0x0825EBEE
	.string "つわもので ござるな{EOS}"
	.if (. - Route119_Text_HideoDefeat) > 0xb
	.error "Route119_Text_HideoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HideoDefeat) < 0xb
	.space 0xb - (. - Route119_Text_HideoDefeat)
	.endif
	@ data/text/trainers.inc:2075 Route119_Text_HideoPostBattle
	.globl Route119_Text_HideoPostBattle
Route119_Text_HideoPostBattle: @ 0x0825EBF9
	.string "きを かくすなら もりのなか!\nポケモンを かくすなら ポケモンのなか!\pとくに いみは ないでござる{EOS}"
	.if (. - Route119_Text_HideoPostBattle) > 0x34
	.error "Route119_Text_HideoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_HideoPostBattle) < 0x34
	.space 0x34 - (. - Route119_Text_HideoPostBattle)
	.endif
	@ data/text/trainers.inc:2078 Route119_Text_ChrisIntro (+1 aliases)
	.globl Route119_Text_ChrisIntro
Route119_Text_ChrisIntro: @ 0x0825EC2D
	.string "わたしに はなしかけた……\nつまり しょうぶを いどむ つもりだな!\pよーし! なみのり しながら\nつりあげた ポケモンで たたかうぞ!{EOS}"
	.if (. - Route119_Text_ChrisIntro) > 0x45
	.error "Route119_Text_ChrisIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_ChrisIntro) < 0x45
	.space 0x45 - (. - Route119_Text_ChrisIntro)
	.endif
	@ data/text/trainers.inc:2081 Route119_Text_ChrisDefeat (+1 aliases)
	.globl Route119_Text_ChrisDefeat
Route119_Text_ChrisDefeat: @ 0x0825EC72
	.string "かつための ポイントが\nちっとも わからん!{EOS}"
	.if (. - Route119_Text_ChrisDefeat) > 0x17
	.error "Route119_Text_ChrisDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_ChrisDefeat) < 0x17
	.space 0x17 - (. - Route119_Text_ChrisDefeat)
	.endif
	@ data/text/trainers.inc:2084 Route119_Text_ChrisPostBattle
	.globl Route119_Text_ChrisPostBattle
Route119_Text_ChrisPostBattle: @ 0x0825EC89
	.string "なみのりを つかう!\pポケモンの せなかに のって\nつりを たのしむ!\pなんて ゆうがな ひととき だろう!{EOS}"
	.if (. - Route119_Text_ChrisPostBattle) > 0x37
	.error "Route119_Text_ChrisPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_ChrisPostBattle) < 0x37
	.space 0x37 - (. - Route119_Text_ChrisPostBattle)
	.endif
	@ data/text/trainers.inc:2087 Route119_Text_FabianIntro (+1 aliases)
	.globl Route119_Text_FabianIntro
Route119_Text_FabianIntro: @ 0x0825ECC0
	.string "デケデケデケデケ\nかつぜーヘ おれたちーヒ かつぜーヘ{EOS}"
	.if (. - Route119_Text_FabianIntro) > 0x1c
	.error "Route119_Text_FabianIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_FabianIntro) < 0x1c
	.space 0x1c - (. - Route119_Text_FabianIntro)
	.endif
	@ data/text/trainers.inc:2090 Route119_Text_FabianDefeat (+1 aliases)
	.globl Route119_Text_FabianDefeat
Route119_Text_FabianDefeat: @ 0x0825ECDC
	.string "まけたぜーヘ あっさりーヒ まけたぜーヘ{EOS}"
	.if (. - Route119_Text_FabianDefeat) > 0x15
	.error "Route119_Text_FabianDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_FabianDefeat) < 0x15
	.space 0x15 - (. - Route119_Text_FabianDefeat)
	.endif
	@ data/text/trainers.inc:2093 Route119_Text_FabianPostBattle
	.globl Route119_Text_FabianPostBattle
Route119_Text_FabianPostBattle: @ 0x0825ECF1
	.string "デケデケデケデケ\nにどとーホ おれにーヒ かまうなよーホ{EOS}"
	.if (. - Route119_Text_FabianPostBattle) > 0x1d
	.error "Route119_Text_FabianPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_FabianPostBattle) < 0x1d
	.space 0x1d - (. - Route119_Text_FabianPostBattle)
	.endif
	@ data/text/trainers.inc:2096 Route119_Text_DaytonIntro (+1 aliases)
	.globl Route119_Text_DaytonIntro
Route119_Text_DaytonIntro: @ 0x0825ED0E
	.string "ホッホッホー!\nこども トレーナーは だいすきだぞ!\lおじちゃんと たたかおうっ!{EOS}"
	.if (. - Route119_Text_DaytonIntro) > 0x2a
	.error "Route119_Text_DaytonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DaytonIntro) < 0x2a
	.space 0x2a - (. - Route119_Text_DaytonIntro)
	.endif
	@ data/text/trainers.inc:2099 Route119_Text_DaytonDefeat (+1 aliases)
	.globl Route119_Text_DaytonDefeat
Route119_Text_DaytonDefeat: @ 0x0825ED38
	.string "やるなー ホッホッホ!{EOS}"
	.if (. - Route119_Text_DaytonDefeat) > 0xc
	.error "Route119_Text_DaytonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DaytonDefeat) < 0xc
	.space 0xc - (. - Route119_Text_DaytonDefeat)
	.endif
	@ data/text/trainers.inc:2102 Route119_Text_DaytonPostBattle
	.globl Route119_Text_DaytonPostBattle
Route119_Text_DaytonPostBattle: @ 0x0825ED44
	.string "ホッホッホー!\nこども トレーナーの げんきを\lみならって おじちゃん がんばるぞ!{EOS}"
	.if (. - Route119_Text_DaytonPostBattle) > 0x2b
	.error "Route119_Text_DaytonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_DaytonPostBattle) < 0x2b
	.space 0x2b - (. - Route119_Text_DaytonPostBattle)
	.endif
	@ data/text/trainers.inc:2105 Route119_Text_RachelIntro (+1 aliases)
	.globl Route119_Text_RachelIntro
Route119_Text_RachelIntro: @ 0x0825ED6F
	.string "いつでも どこでも\nパラソルを てばなさないの!{EOS}"
	.if (. - Route119_Text_RachelIntro) > 0x19
	.error "Route119_Text_RachelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_RachelIntro) < 0x19
	.space 0x19 - (. - Route119_Text_RachelIntro)
	.endif
	@ data/text/trainers.inc:2108 Route119_Text_RachelDefeat (+1 aliases)
	.globl Route119_Text_RachelDefeat
Route119_Text_RachelDefeat: @ 0x0825ED88
	.string "いやん そんなあ{EOS}"
	.if (. - Route119_Text_RachelDefeat) > 0x9
	.error "Route119_Text_RachelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_RachelDefeat) < 0x9
	.space 0x9 - (. - Route119_Text_RachelDefeat)
	.endif
	@ data/text/trainers.inc:2111 Route119_Text_RachelPostBattle
	.globl Route119_Text_RachelPostBattle
Route119_Text_RachelPostBattle: @ 0x0825ED91
	.string "パラソルが おもく ないかって?\nキミの バッグの ほうが\lいっぱい はいってるじゃない{EOS}"
	.if (. - Route119_Text_RachelPostBattle) > 0x2d
	.error "Route119_Text_RachelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route119_Text_RachelPostBattle) < 0x2d
	.space 0x2d - (. - Route119_Text_RachelPostBattle)
	.endif
	@ data/text/trainers.inc:2114 Route120_Text_ColinIntro (+1 aliases)
	.globl Route120_Text_ColinIntro
Route120_Text_ColinIntro: @ 0x0825EDBE
	.string "そらを とんでいる ポケモンに\nダメージを あたえる ワザを もってる?{EOS}"
	.if (. - Route120_Text_ColinIntro) > 0x25
	.error "Route120_Text_ColinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ColinIntro) < 0x25
	.space 0x25 - (. - Route120_Text_ColinIntro)
	.endif
	@ data/text/trainers.inc:2117 Route120_Text_ColinDefeat (+1 aliases)
	.globl Route120_Text_ColinDefeat
Route120_Text_ColinDefeat: @ 0x0825EDE3
	.string "キミの ほうが\nいちまい うわて だった!{EOS}"
	.if (. - Route120_Text_ColinDefeat) > 0x16
	.error "Route120_Text_ColinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ColinDefeat) < 0x16
	.space 0x16 - (. - Route120_Text_ColinDefeat)
	.endif
	@ data/text/trainers.inc:2120 Route120_Text_ColinPostBattle
	.globl Route120_Text_ColinPostBattle
Route120_Text_ColinPostBattle: @ 0x0825EDF9
	.string "そらをとぶ って ワザは べんりだな!\pそらを とんでいる あいだは\nほとんどの ワザが あたらないだろ?{EOS}"
	.if (. - Route120_Text_ColinPostBattle) > 0x36
	.error "Route120_Text_ColinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ColinPostBattle) < 0x36
	.space 0x36 - (. - Route120_Text_ColinPostBattle)
	.endif
	@ data/text/trainers.inc:2123 Route120_Text_RobertIntro (+1 aliases)
	.globl Route120_Text_RobertIntro
Route120_Text_RobertIntro: @ 0x0825EE2F
	.string "ボクの ポケモンは つよいぜ!\nキミの ポケモンは どうかな?{EOS}"
	.if (. - Route120_Text_RobertIntro) > 0x20
	.error "Route120_Text_RobertIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertIntro) < 0x20
	.space 0x20 - (. - Route120_Text_RobertIntro)
	.endif
	@ data/text/trainers.inc:2126 Route120_Text_RobertDefeat (+1 aliases)
	.globl Route120_Text_RobertDefeat
Route120_Text_RobertDefeat: @ 0x0825EE4F
	.string "キミの ポケモンの ほうが\nつよかった……!{EOS}"
	.if (. - Route120_Text_RobertDefeat) > 0x17
	.error "Route120_Text_RobertDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertDefeat) < 0x17
	.space 0x17 - (. - Route120_Text_RobertDefeat)
	.endif
	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+1 aliases)
	.globl Route120_Text_RobertPostBattle_Copy_Rom_25EE66
Route120_Text_RobertPostBattle_Copy_Rom_25EE66: @ 0x0825EE66
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!{EOS}"
	.if (. - Route120_Text_RobertPostBattle_Copy_Rom_25EE66) > 0x21
	.error "Route120_Text_RobertPostBattle_Copy_Rom_25EE66 may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertPostBattle_Copy_Rom_25EE66) < 0x21
	.space 0x21 - (. - Route120_Text_RobertPostBattle_Copy_Rom_25EE66)
	.endif
	@ data/text/trainers.inc:2132 Route120_Text_RobertRegister
	.globl Route120_Text_RobertRegister
Route120_Text_RobertRegister: @ 0x0825EE87
	.string "キミって きたい できそうだなー!\nポケナビに とうろく しておきたい!{EOS}"
	.if (. - Route120_Text_RobertRegister) > 0x25
	.error "Route120_Text_RobertRegister may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertRegister) < 0x25
	.space 0x25 - (. - Route120_Text_RobertRegister)
	.endif
	@ data/text/trainers.inc:2129 Route120_Text_RobertPostBattle (+2 aliases)
	.globl Route120_Text_RobertPostBattle_Copy_Rom_25EEAC
Route120_Text_RobertPostBattle_Copy_Rom_25EEAC: @ 0x0825EEAC
	.string "どんどん つよくなる ポケモンは\nほんと たよりに なるよなー!{EOS}"
	.if (. - Route120_Text_RobertPostBattle_Copy_Rom_25EEAC) > 0x21
	.error "Route120_Text_RobertPostBattle_Copy_Rom_25EEAC may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertPostBattle_Copy_Rom_25EEAC) < 0x21
	.space 0x21 - (. - Route120_Text_RobertPostBattle_Copy_Rom_25EEAC)
	.endif
	@ data/text/trainers.inc:2138 Route120_Text_RobertRematchDefeat (+1 aliases)
	.globl Route120_Text_RobertRematchDefeat
Route120_Text_RobertRematchDefeat: @ 0x0825EECD
	.string "キミの ポケモン\nほんとうに つよいんだな……{EOS}"
	.if (. - Route120_Text_RobertRematchDefeat) > 0x18
	.error "Route120_Text_RobertRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertRematchDefeat) < 0x18
	.space 0x18 - (. - Route120_Text_RobertRematchDefeat)
	.endif
	@ data/text/trainers.inc:2141 Route120_Text_RobertPostRematch
	.globl Route120_Text_RobertPostRematch
Route120_Text_RobertPostRematch: @ 0x0825EEE5
	.string "ポケモンが つよくなるのと いっしょに\nおれも つよくならないとなー!{EOS}"
	.if (. - Route120_Text_RobertPostRematch) > 0x24
	.error "Route120_Text_RobertPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RobertPostRematch) < 0x24
	.space 0x24 - (. - Route120_Text_RobertPostRematch)
	.endif
	@ data/text/trainers.inc:2144 Route120_Text_LorenzoIntro (+1 aliases)
	.globl Route120_Text_LorenzoIntro
Route120_Text_LorenzoIntro: @ 0x0825EF09
	.string "きみの ポケモン\nそうなん しないか みてあげよう!{EOS}"
	.if (. - Route120_Text_LorenzoIntro) > 0x1b
	.error "Route120_Text_LorenzoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LorenzoIntro) < 0x1b
	.space 0x1b - (. - Route120_Text_LorenzoIntro)
	.endif
	@ data/text/trainers.inc:2147 Route120_Text_LorenzoDefeat (+1 aliases)
	.globl Route120_Text_LorenzoDefeat
Route120_Text_LorenzoDefeat: @ 0x0825EF24
	.string "そんなに つよい ポケモンと いっしょなら\nそうなんの おそれは ないな!{EOS}"
	.if (. - Route120_Text_LorenzoDefeat) > 0x26
	.error "Route120_Text_LorenzoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LorenzoDefeat) < 0x26
	.space 0x26 - (. - Route120_Text_LorenzoDefeat)
	.endif
	@ data/text/trainers.inc:2150 Route120_Text_LorenzoPostBattle
	.globl Route120_Text_LorenzoPostBattle
Route120_Text_LorenzoPostBattle: @ 0x0825EF4A
	.string "ポケモンと いっしょに どこまでもいく\nトレーナーの よろこびと いえるだろう!{EOS}"
	.if (. - Route120_Text_LorenzoPostBattle) > 0x29
	.error "Route120_Text_LorenzoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LorenzoPostBattle) < 0x29
	.space 0x29 - (. - Route120_Text_LorenzoPostBattle)
	.endif
	@ data/text/trainers.inc:2153 Route120_Text_JennaIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_JennaIntro
Route120_Text_JennaIntro: @ 0x0825EF73
	.string "あなたの たいりょく どう?\nたいりょく ぶそくだと\lいざと いうとき こまるわよ!{EOS}"
	.if (. - Route120_Text_JennaIntro) != 0x2b
	.error "Route120_Text_JennaIntro must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2156 Route120_Text_JennaDefeat (+1 aliases)
	.globl Route120_Text_JennaDefeat
Route120_Text_JennaDefeat: @ 0x0825EF9E
	.string "たいりょく だけは あったのに……{EOS}"
	.if (. - Route120_Text_JennaDefeat) > 0x12
	.error "Route120_Text_JennaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JennaDefeat) < 0x12
	.space 0x12 - (. - Route120_Text_JennaDefeat)
	.endif
	@ data/text/trainers.inc:2159 Route120_Text_JennaPostBattle
	.globl Route120_Text_JennaPostBattle
Route120_Text_JennaPostBattle: @ 0x0825EFB0
	.string "たいりょく づくりが わたしの にっか\nまいにち ポケモンと ランニングよ!{EOS}"
	.if (. - Route120_Text_JennaPostBattle) > 0x27
	.error "Route120_Text_JennaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JennaPostBattle) < 0x27
	.space 0x27 - (. - Route120_Text_JennaPostBattle)
	.endif
	@ data/text/trainers.inc:2162 Route120_Text_JeffreyIntro (+1 aliases)
	.globl Route120_Text_JeffreyIntro
Route120_Text_JeffreyIntro: @ 0x0825EFD7
	.string "…… …… ……\n…… …… ……\lしょうぶ する……?{EOS}"
	.if (. - Route120_Text_JeffreyIntro) > 0x1d
	.error "Route120_Text_JeffreyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyIntro) < 0x1d
	.space 0x1d - (. - Route120_Text_JeffreyIntro)
	.endif
	@ data/text/trainers.inc:2165 Route120_Text_JeffreyDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_JeffreyDefeat
Route120_Text_JeffreyDefeat: @ 0x0825EFF4
	.string "…… …… ……\nまけた……{EOS}"
	.if (. - Route120_Text_JeffreyDefeat) != 0xf
	.error "Route120_Text_JeffreyDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2168 Route120_Text_JeffreyPostBattle
	.globl Route120_Text_JeffreyPostBattle
Route120_Text_JeffreyPostBattle: @ 0x0825F003
	.string "…… …… ……\n…… …… ……\lがんばろう……{EOS}"
	.if (. - Route120_Text_JeffreyPostBattle) > 0x1a
	.error "Route120_Text_JeffreyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyPostBattle) < 0x1a
	.space 0x1a - (. - Route120_Text_JeffreyPostBattle)
	.endif
	@ data/text/trainers.inc:2171 Route120_Text_JeffreyRegister
	.globl Route120_Text_JeffreyRegister
Route120_Text_JeffreyRegister: @ 0x0825F01D
	.string "…… …… ……\n…… …… ……\lポケナビ もってる……?{EOS}"
	.if (. - Route120_Text_JeffreyRegister) > 0x1f
	.error "Route120_Text_JeffreyRegister may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyRegister) < 0x1f
	.space 0x1f - (. - Route120_Text_JeffreyRegister)
	.endif
	@ data/text/trainers.inc:2174 Route120_Text_JeffreyRematchIntro (+1 aliases)
	.globl Route120_Text_JeffreyRematchIntro
Route120_Text_JeffreyRematchIntro: @ 0x0825F03C
	.string "…… …… ……\n…… …… ……\lまた しょうぶ する……?{EOS}"
	.if (. - Route120_Text_JeffreyRematchIntro) > 0x20
	.error "Route120_Text_JeffreyRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyRematchIntro) < 0x20
	.space 0x20 - (. - Route120_Text_JeffreyRematchIntro)
	.endif
	@ data/text/trainers.inc:2177 Route120_Text_JeffreyRematchDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_JeffreyRematchDefeat
Route120_Text_JeffreyRematchDefeat: @ 0x0825F05C
	.string "…… …… ……\nまた まけた……{EOS}"
	.if (. - Route120_Text_JeffreyRematchDefeat) != 0x12
	.error "Route120_Text_JeffreyRematchDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2180 Route120_Text_JeffreyPostRematch
	.globl Route120_Text_JeffreyPostRematch
Route120_Text_JeffreyPostRematch: @ 0x0825F06E
	.string "…… …… ……\n…… …… ……\lまた がんばろう……\lだいじな むしポケモンの ために……{EOS}"
	.if (. - Route120_Text_JeffreyPostRematch) > 0x30
	.error "Route120_Text_JeffreyPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JeffreyPostRematch) < 0x30
	.space 0x30 - (. - Route120_Text_JeffreyPostRematch)
	.endif
	@ data/text/trainers.inc:2183 Route120_Text_JenniferIntro (+1 aliases)
	.globl Route120_Text_JenniferIntro
Route120_Text_JenniferIntro: @ 0x0825F09E
	.string "ポケモンには いろんな とくせいが ある\nそれを かんがえてこそ\lいちりゅうの トレーナーに なれるのよ!{EOS}"
	.if (. - Route120_Text_JenniferIntro) > 0x36
	.error "Route120_Text_JenniferIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JenniferIntro) < 0x36
	.space 0x36 - (. - Route120_Text_JenniferIntro)
	.endif
	@ data/text/trainers.inc:2186 Route120_Text_JenniferDefeat (+1 aliases)
	.globl Route120_Text_JenniferDefeat
Route120_Text_JenniferDefeat: @ 0x0825F0D4
	.string "なかなか かんがえてるのね{EOS}"
	.if (. - Route120_Text_JenniferDefeat) > 0xe
	.error "Route120_Text_JenniferDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JenniferDefeat) < 0xe
	.space 0xe - (. - Route120_Text_JenniferDefeat)
	.endif
	@ data/text/trainers.inc:2189 Route120_Text_JenniferPostBattle
	.globl Route120_Text_JenniferPostBattle
Route120_Text_JenniferPostBattle: @ 0x0825F0E2
	.string "そう ポケモンの とくせいに よって\nたたかいかたも いろいろ かわってくるわ!{EOS}"
	.if (. - Route120_Text_JenniferPostBattle) > 0x29
	.error "Route120_Text_JenniferPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_JenniferPostBattle) < 0x29
	.space 0x29 - (. - Route120_Text_JenniferPostBattle)
	.endif
	@ data/text/trainers.inc:2192 Route120_Text_ChipIntro (+1 aliases)
	.globl Route120_Text_ChipIntro
Route120_Text_ChipIntro: @ 0x0825F10B
	.string "なんだね きみは?\pもしかして ひょっとすると\nあるかもしれない といわれる\lこだいの いせきを さがしに きたのかね!?{EOS}"
	.if (. - Route120_Text_ChipIntro) > 0x3e
	.error "Route120_Text_ChipIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ChipIntro) < 0x3e
	.space 0x3e - (. - Route120_Text_ChipIntro)
	.endif
	@ data/text/trainers.inc:2195 Route120_Text_ChipDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route120_Text_ChipDefeat
Route120_Text_ChipDefeat: @ 0x0825F149
	.string "まいったね こりゃ{EOS}"
	.if (. - Route120_Text_ChipDefeat) != 0xa
	.error "Route120_Text_ChipDefeat must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2198 Route120_Text_ChipPostBattle
	.globl Route120_Text_ChipPostBattle
Route120_Text_ChipPostBattle: @ 0x0825F153
	.string "あの おおきな いわ\nわたしは いせき だと おもいたいが\lそれにしては いりぐちが ないね……{EOS}"
	.if (. - Route120_Text_ChipPostBattle) > 0x31
	.error "Route120_Text_ChipPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ChipPostBattle) < 0x31
	.space 0x31 - (. - Route120_Text_ChipPostBattle)
	.endif
	@ data/text/trainers.inc:2201 Route120_Text_ClarissaIntro (+1 aliases)
	.globl Route120_Text_ClarissaIntro
Route120_Text_ClarissaIntro: @ 0x0825F184
	.string "あたしが パラソルを もってる りゆう?\pうふふ あたしに かてたら\nおしえて あげても いいかな?{EOS}"
	.if (. - Route120_Text_ClarissaIntro) > 0x33
	.error "Route120_Text_ClarissaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ClarissaIntro) < 0x33
	.space 0x33 - (. - Route120_Text_ClarissaIntro)
	.endif
	@ data/text/trainers.inc:2204 Route120_Text_ClarissaDefeat (+1 aliases)
	.globl Route120_Text_ClarissaDefeat
Route120_Text_ClarissaDefeat: @ 0x0825F1B7
	.string "パラソルで ポケモンの こうげきは\nしのげないのね……{EOS}"
	.if (. - Route120_Text_ClarissaDefeat) > 0x1c
	.error "Route120_Text_ClarissaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ClarissaDefeat) < 0x1c
	.space 0x1c - (. - Route120_Text_ClarissaDefeat)
	.endif
	@ data/text/trainers.inc:2207 Route120_Text_ClarissaPostBattle
	.globl Route120_Text_ClarissaPostBattle
Route120_Text_ClarissaPostBattle: @ 0x0825F1D3
	.string "あたしの ポケモンたちも\nあつい ひざしは にがてだと おもうの\lだから こうして パラソルを もってるのよ{EOS}"
	.if (. - Route120_Text_ClarissaPostBattle) > 0x37
	.error "Route120_Text_ClarissaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_ClarissaPostBattle) < 0x37
	.space 0x37 - (. - Route120_Text_ClarissaPostBattle)
	.endif
	@ data/text/trainers.inc:2210 Route120_Text_AngelicaIntro (+1 aliases)
	.globl Route120_Text_AngelicaIntro
Route120_Text_AngelicaIntro: @ 0x0825F20A
	.string "あたしと ポケモンと パラソル\nどれか ひとつ かけていても\lうつくしさが そこなわれるんだわ{EOS}"
	.if (. - Route120_Text_AngelicaIntro) > 0x30
	.error "Route120_Text_AngelicaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_AngelicaIntro) < 0x30
	.space 0x30 - (. - Route120_Text_AngelicaIntro)
	.endif
	@ data/text/trainers.inc:2213 Route120_Text_AngelicaDefeat (+1 aliases)
	.globl Route120_Text_AngelicaDefeat
Route120_Text_AngelicaDefeat: @ 0x0825F23A
	.string "うつくしさが\nだいなしに なっちゃったわ{EOS}"
	.if (. - Route120_Text_AngelicaDefeat) > 0x15
	.error "Route120_Text_AngelicaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_AngelicaDefeat) < 0x15
	.space 0x15 - (. - Route120_Text_AngelicaDefeat)
	.endif
	@ data/text/trainers.inc:2216 Route120_Text_AngelicaPostBattle
	.globl Route120_Text_AngelicaPostBattle
Route120_Text_AngelicaPostBattle: @ 0x0825F24F
	.string "あなたに パラソルは にあわないわ!\pだって こんなの もっていたら\nすっごく ジャマに なりそう なんだもの{EOS}"
	.if (. - Route120_Text_AngelicaPostBattle) > 0x38
	.error "Route120_Text_AngelicaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_AngelicaPostBattle) < 0x38
	.space 0x38 - (. - Route120_Text_AngelicaPostBattle)
	.endif
	@ data/text/trainers.inc:2219 Route120_Text_KeigoIntro (+1 aliases)
	.globl Route120_Text_KeigoIntro
Route120_Text_KeigoIntro: @ 0x0825F287
	.string "ポケモンの うごきを とりいれて\nあたらしい にんぽうを あみだすんだ!{EOS}"
	.if (. - Route120_Text_KeigoIntro) > 0x25
	.error "Route120_Text_KeigoIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_KeigoIntro) < 0x25
	.space 0x25 - (. - Route120_Text_KeigoIntro)
	.endif
	@ data/text/trainers.inc:2222 Route120_Text_KeigoDefeat (+1 aliases)
	.globl Route120_Text_KeigoDefeat
Route120_Text_KeigoDefeat: @ 0x0825F2AC
	.string "あたらしい にんぽう\nかんせいまで まだまだ かかりそうだ{EOS}"
	.if (. - Route120_Text_KeigoDefeat) > 0x1e
	.error "Route120_Text_KeigoDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_KeigoDefeat) < 0x1e
	.space 0x1e - (. - Route120_Text_KeigoDefeat)
	.endif
	@ data/text/trainers.inc:2225 Route120_Text_KeigoPostBattle
	.globl Route120_Text_KeigoPostBattle
Route120_Text_KeigoPostBattle: @ 0x0825F2CA
	.string "ニンジャの せんせいを さがして\nでしいり しようかな?{EOS}"
	.if (. - Route120_Text_KeigoPostBattle) > 0x1d
	.error "Route120_Text_KeigoPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_KeigoPostBattle) < 0x1d
	.space 0x1d - (. - Route120_Text_KeigoPostBattle)
	.endif
	@ data/text/trainers.inc:2228 Route120_Text_RileyIntro (+1 aliases)
	.globl Route120_Text_RileyIntro
Route120_Text_RileyIntro: @ 0x0825F2E7
	.string "ぼくたち ニンジャごっこの かくれぬの!\nどこに いるのか わからなかっただろ!{EOS}"
	.if (. - Route120_Text_RileyIntro) > 0x29
	.error "Route120_Text_RileyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RileyIntro) < 0x29
	.space 0x29 - (. - Route120_Text_RileyIntro)
	.endif
	@ data/text/trainers.inc:2231 Route120_Text_RileyDefeat (+1 aliases)
	.globl Route120_Text_RileyDefeat
Route120_Text_RileyDefeat: @ 0x0825F310
	.string "まけた!\nかくれぬので かくれるか?{EOS}"
	.if (. - Route120_Text_RileyDefeat) > 0x13
	.error "Route120_Text_RileyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RileyDefeat) < 0x13
	.space 0x13 - (. - Route120_Text_RileyDefeat)
	.endif
	@ data/text/trainers.inc:2234 Route120_Text_RileyPostBattle
	.globl Route120_Text_RileyPostBattle
Route120_Text_RileyPostBattle: @ 0x0825F323
	.string "ぼくたち ニンジャごっこの かくれぬの!\nこれって てづくり なんだぜ!{EOS}"
	.if (. - Route120_Text_RileyPostBattle) > 0x25
	.error "Route120_Text_RileyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_RileyPostBattle) < 0x25
	.space 0x25 - (. - Route120_Text_RileyPostBattle)
	.endif
	@ data/text/trainers.inc:2237 Route120_Text_CallieIntro (+1 aliases)
	.globl Route120_Text_CallieIntro
Route120_Text_CallieIntro: @ 0x0825F348
	.string "よそみ してると ケガするよ!{EOS}"
	.if (. - Route120_Text_CallieIntro) > 0x10
	.error "Route120_Text_CallieIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_CallieIntro) < 0x10
	.space 0x10 - (. - Route120_Text_CallieIntro)
	.endif
	@ data/text/trainers.inc:2240 Route120_Text_CallieDefeat (+1 aliases)
	.globl Route120_Text_CallieDefeat
Route120_Text_CallieDefeat: @ 0x0825F358
	.string "いたいめに あったのは あたしのほうか{EOS}"
	.if (. - Route120_Text_CallieDefeat) > 0x14
	.error "Route120_Text_CallieDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_CallieDefeat) < 0x14
	.space 0x14 - (. - Route120_Text_CallieDefeat)
	.endif
	@ data/text/trainers.inc:2243 Route120_Text_CalliePostBattle
	.globl Route120_Text_CalliePostBattle
Route120_Text_CalliePostBattle: @ 0x0825F36C
	.string "やっぱり しんか させようかな?\nこのままでも かわいい けど{EOS}"
	.if (. - Route120_Text_CalliePostBattle) > 0x20
	.error "Route120_Text_CalliePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_CalliePostBattle) < 0x20
	.space 0x20 - (. - Route120_Text_CalliePostBattle)
	.endif
	@ data/text/trainers.inc:2246 Route120_Text_LeonelIntro (+1 aliases)
	.globl Route120_Text_LeonelIntro
Route120_Text_LeonelIntro: @ 0x0825F38C
	.string "きみの てもち ポケモン\nいろんな タイプが そろって いるか?{EOS}"
	.if (. - Route120_Text_LeonelIntro) > 0x21
	.error "Route120_Text_LeonelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LeonelIntro) < 0x21
	.space 0x21 - (. - Route120_Text_LeonelIntro)
	.endif
	@ data/text/trainers.inc:2249 Route120_Text_LeonelDefeat (+1 aliases)
	.globl Route120_Text_LeonelDefeat
Route120_Text_LeonelDefeat: @ 0x0825F3AD
	.string "きみの こだわり みせてもらったよ!{EOS}"
	.if (. - Route120_Text_LeonelDefeat) > 0x13
	.error "Route120_Text_LeonelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LeonelDefeat) < 0x13
	.space 0x13 - (. - Route120_Text_LeonelDefeat)
	.endif
	@ data/text/trainers.inc:2252 Route120_Text_LeonelPostBattle
	.globl Route120_Text_LeonelPostBattle
Route120_Text_LeonelPostBattle: @ 0x0825F3C0
	.string "すきな ポケモン だけで\nつよいって いうのが さいこうだね{EOS}"
	.if (. - Route120_Text_LeonelPostBattle) > 0x1f
	.error "Route120_Text_LeonelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route120_Text_LeonelPostBattle) < 0x1f
	.space 0x1f - (. - Route120_Text_LeonelPostBattle)
	.endif
	@ data/text/trainers.inc:2255 Route121_Text_VanessaIntro (+1 aliases)
	.globl Route121_Text_VanessaIntro
Route121_Text_VanessaIntro: @ 0x0825F3DF
	.string "あたしの とっても プリティな\nポケモンを かわいがってよ!{EOS}"
	.if (. - Route121_Text_VanessaIntro) > 0x1f
	.error "Route121_Text_VanessaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_VanessaIntro) < 0x1f
	.space 0x1f - (. - Route121_Text_VanessaIntro)
	.endif
	@ data/text/trainers.inc:2258 Route121_Text_VanessaDefeat (+1 aliases)
	.globl Route121_Text_VanessaDefeat
Route121_Text_VanessaDefeat: @ 0x0825F3FE
	.string "かわいがるの いみが ちがうわ!{EOS}"
	.if (. - Route121_Text_VanessaDefeat) > 0x11
	.error "Route121_Text_VanessaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_VanessaDefeat) < 0x11
	.space 0x11 - (. - Route121_Text_VanessaDefeat)
	.endif
	@ data/text/trainers.inc:2261 Route121_Text_VanessaPostBattle
	.globl Route121_Text_VanessaPostBattle
Route121_Text_VanessaPostBattle: @ 0x0825F40F
	.string "ミナモの コンテストに いくのよ\nあたしの ポケモンなら\lマスター ランクでも らくしょうよ!{EOS}"
	.if (. - Route121_Text_VanessaPostBattle) > 0x30
	.error "Route121_Text_VanessaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_VanessaPostBattle) < 0x30
	.space 0x30 - (. - Route121_Text_VanessaPostBattle)
	.endif
	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl Route121_Text_WalterIntro_Copy_Rom_25F43F
Route121_Text_WalterIntro_Copy_Rom_25F43F: @ 0x0825F43F
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!{EOS}"
	.if (. - Route121_Text_WalterIntro_Copy_Rom_25F43F) > 0x32
	.error "Route121_Text_WalterIntro_Copy_Rom_25F43F may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterIntro_Copy_Rom_25F43F) < 0x32
	.space 0x32 - (. - Route121_Text_WalterIntro_Copy_Rom_25F43F)
	.endif
	@ data/text/trainers.inc:2267 Route121_Text_WalterDefeat (+1 aliases)
	.globl Route121_Text_WalterDefeat
Route121_Text_WalterDefeat: @ 0x0825F471
	.string "おみごと ですな{EOS}"
	.if (. - Route121_Text_WalterDefeat) > 0x9
	.error "Route121_Text_WalterDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterDefeat) < 0x9
	.space 0x9 - (. - Route121_Text_WalterDefeat)
	.endif
	@ data/text/trainers.inc:2270 Route121_Text_WalterPostBattle
	.globl Route121_Text_WalterPostBattle
Route121_Text_WalterPostBattle: @ 0x0825F47A
	.string "また ポケモンと いっしょに\nせかいを まわってみたい ものです{EOS}"
	.if (. - Route121_Text_WalterPostBattle) > 0x21
	.error "Route121_Text_WalterPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterPostBattle) < 0x21
	.space 0x21 - (. - Route121_Text_WalterPostBattle)
	.endif
	@ data/text/trainers.inc:2273 Route121_Text_WalterRegister
	.globl Route121_Text_WalterRegister
Route121_Text_WalterRegister: @ 0x0825F49B
	.string "あなたの うでまえは たいしたものだ\nぜひ きねんに とうろくを……{EOS}"
	.if (. - Route121_Text_WalterRegister) > 0x23
	.error "Route121_Text_WalterRegister may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterRegister) < 0x23
	.space 0x23 - (. - Route121_Text_WalterRegister)
	.endif
	@ data/text/trainers.inc:2264 Route121_Text_WalterIntro (+2 aliases)
	.globl Route121_Text_WalterIntro_Copy_Rom_25F4BE
Route121_Text_WalterIntro_Copy_Rom_25F4BE: @ 0x0825F4BE
	.string "せかい かっこくを\nポケモンと いっしょに まわってきた\pすこしは うでに じしんが ありますよ!{EOS}"
	.if (. - Route121_Text_WalterIntro_Copy_Rom_25F4BE) > 0x32
	.error "Route121_Text_WalterIntro_Copy_Rom_25F4BE may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterIntro_Copy_Rom_25F4BE) < 0x32
	.space 0x32 - (. - Route121_Text_WalterIntro_Copy_Rom_25F4BE)
	.endif
	@ data/text/trainers.inc:2279 Route121_Text_WalterRematchDefeat (+1 aliases)
	.globl Route121_Text_WalterRematchDefeat
Route121_Text_WalterRematchDefeat: @ 0x0825F4F0
	.string "おみごと ですな!{EOS}"
	.if (. - Route121_Text_WalterRematchDefeat) > 0xa
	.error "Route121_Text_WalterRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterRematchDefeat) < 0xa
	.space 0xa - (. - Route121_Text_WalterRematchDefeat)
	.endif
	@ data/text/trainers.inc:2282 Route121_Text_WalterPostRematch
	.globl Route121_Text_WalterPostRematch
Route121_Text_WalterPostRematch: @ 0x0825F4FA
	.string "あなたと その ポケモンなら\nがいこくでも つよいと いわれるでしょう!{EOS}"
	.if (. - Route121_Text_WalterPostRematch) > 0x25
	.error "Route121_Text_WalterPostRematch may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_WalterPostRematch) < 0x25
	.space 0x25 - (. - Route121_Text_WalterPostRematch)
	.endif
	@ data/text/trainers.inc:2285 Route121_Text_TammyIntro (+1 aliases)
	.globl Route121_Text_TammyIntro
Route121_Text_TammyIntro: @ 0x0825F51F
	.string "よの なかには ふしぎな ちからが\nいっぱい あるの……{EOS}"
	.if (. - Route121_Text_TammyIntro) > 0x1d
	.error "Route121_Text_TammyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_TammyIntro) < 0x1d
	.space 0x1d - (. - Route121_Text_TammyIntro)
	.endif
	@ data/text/trainers.inc:2288 Route121_Text_TammyDefeat (+1 aliases)
	.globl Route121_Text_TammyDefeat
Route121_Text_TammyDefeat: @ 0x0825F53C
	.string "あたし まけたのね……{EOS}"
	.if (. - Route121_Text_TammyDefeat) > 0xc
	.error "Route121_Text_TammyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_TammyDefeat) < 0xc
	.space 0xc - (. - Route121_Text_TammyDefeat)
	.endif
	@ data/text/trainers.inc:2291 Route121_Text_TammyPostBattle
	.globl Route121_Text_TammyPostBattle
Route121_Text_TammyPostBattle: @ 0x0825F548
	.string "おくりびやま……\nあそこに ふしぎな ちからが あるの……{EOS}"
	.if (. - Route121_Text_TammyPostBattle) > 0x1e
	.error "Route121_Text_TammyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_TammyPostBattle) < 0x1e
	.space 0x1e - (. - Route121_Text_TammyPostBattle)
	.endif
	@ data/text/trainers.inc:2294 Route121_Text_KateIntro (+1 aliases)
	.globl Route121_Text_KateIntro
Route121_Text_KateIntro: @ 0x0825F566
	.string "マナ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!{EOS}"
	.if (. - Route121_Text_KateIntro) > 0x2c
	.error "Route121_Text_KateIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KateIntro) < 0x2c
	.space 0x2c - (. - Route121_Text_KateIntro)
	.endif
	@ data/text/trainers.inc:2297 Route121_Text_KateDefeat (+1 aliases)
	.globl Route121_Text_KateDefeat
Route121_Text_KateDefeat: @ 0x0825F592
	.string "マナ『コウハイの まえで かっこわるいわ……{EOS}"
	.if (. - Route121_Text_KateDefeat) > 0x17
	.error "Route121_Text_KateDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KateDefeat) < 0x17
	.space 0x17 - (. - Route121_Text_KateDefeat)
	.endif
	@ data/text/trainers.inc:2300 Route121_Text_KatePostBattle
	.globl Route121_Text_KatePostBattle
Route121_Text_KatePostBattle: @ 0x0825F5A9
	.string "マナ『あたしって たよられちゃうと\nつい かっこいい ところ\lみせたく なっちゃうのよね……{EOS}"
	.if (. - Route121_Text_KatePostBattle) > 0x2f
	.error "Route121_Text_KatePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KatePostBattle) < 0x2f
	.space 0x2f - (. - Route121_Text_KatePostBattle)
	.endif
	@ data/text/trainers.inc:2303 Route121_Text_KateNotEnoughMons (+1 aliases)
	.globl Route121_Text_KateNotEnoughMons
Route121_Text_KateNotEnoughMons: @ 0x0825F5D8
	.string "マナ『ポケモン 1ぴき しか いないのね\nじゃあ しょうぶは できないわ!\pだって よわいもの いじめに なるもの{EOS}"
	.if (. - Route121_Text_KateNotEnoughMons) > 0x3a
	.error "Route121_Text_KateNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_KateNotEnoughMons) < 0x3a
	.space 0x3a - (. - Route121_Text_KateNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2306 Route121_Text_JoyIntro (+1 aliases)
	.globl Route121_Text_JoyIntro
Route121_Text_JoyIntro: @ 0x0825F612
	.string "ユイ『ふたり そろえば こわいもの なし!\nあたしたちの つよさ みせつけちゃうから!{EOS}"
	.if (. - Route121_Text_JoyIntro) > 0x2c
	.error "Route121_Text_JoyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyIntro) < 0x2c
	.space 0x2c - (. - Route121_Text_JoyIntro)
	.endif
	@ data/text/trainers.inc:2309 Route121_Text_JoyDefeat (+1 aliases)
	.globl Route121_Text_JoyDefeat
Route121_Text_JoyDefeat: @ 0x0825F63E
	.string "ユイ『センパイ ごめんなさーい{EOS}"
	.if (. - Route121_Text_JoyDefeat) > 0x10
	.error "Route121_Text_JoyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyDefeat) < 0x10
	.space 0x10 - (. - Route121_Text_JoyDefeat)
	.endif
	@ data/text/trainers.inc:2312 Route121_Text_JoyPostBattle
	.globl Route121_Text_JoyPostBattle
Route121_Text_JoyPostBattle: @ 0x0825F64E
	.string "ユイ『えへっ!\nまた センパイと いっしょに とっくんね!{EOS}"
	.if (. - Route121_Text_JoyPostBattle) > 0x1e
	.error "Route121_Text_JoyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyPostBattle) < 0x1e
	.space 0x1e - (. - Route121_Text_JoyPostBattle)
	.endif
	@ data/text/trainers.inc:2315 Route121_Text_JoyNotEnoughMons (+1 aliases)
	.globl Route121_Text_JoyNotEnoughMons
Route121_Text_JoyNotEnoughMons: @ 0x0825F66C
	.string "ユイ『あたしたちに しょうぶを いどむなら\nポケモン 2ひきは ひつよう だからね!{EOS}"
	.if (. - Route121_Text_JoyNotEnoughMons) > 0x2b
	.error "Route121_Text_JoyNotEnoughMons may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JoyNotEnoughMons) < 0x2b
	.space 0x2b - (. - Route121_Text_JoyNotEnoughMons)
	.endif
	@ data/text/trainers.inc:2318 Route121_Text_JessicaIntro (+1 aliases)
	.globl Route121_Text_JessicaIntro
Route121_Text_JessicaIntro: @ 0x0825F697
	.string "あたくしの だいじな ポケモン\nちょっと みなさいよ!{EOS}"
	.if (. - Route121_Text_JessicaIntro) > 0x1c
	.error "Route121_Text_JessicaIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaIntro) < 0x1c
	.space 0x1c - (. - Route121_Text_JessicaIntro)
	.endif
	@ data/text/trainers.inc:2321 Route121_Text_JessicaDefeat (+1 aliases)
	.globl Route121_Text_JessicaDefeat
Route121_Text_JessicaDefeat: @ 0x0825F6B3
	.string "ぷんぷん!\nなによ ほんき だしちゃって!{EOS}"
	.if (. - Route121_Text_JessicaDefeat) > 0x16
	.error "Route121_Text_JessicaDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaDefeat) < 0x16
	.space 0x16 - (. - Route121_Text_JessicaDefeat)
	.endif
	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl Route121_Text_JessicaPostBattle_Copy_Rom_25F6C9
Route121_Text_JessicaPostBattle_Copy_Rom_25F6C9: @ 0x0825F6C9
	.string "サファリで あたらしい ポケモン\nつかまえようかな?{EOS}"
	.if (. - Route121_Text_JessicaPostBattle_Copy_Rom_25F6C9) > 0x1b
	.error "Route121_Text_JessicaPostBattle_Copy_Rom_25F6C9 may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaPostBattle_Copy_Rom_25F6C9) < 0x1b
	.space 0x1b - (. - Route121_Text_JessicaPostBattle_Copy_Rom_25F6C9)
	.endif
	@ data/text/trainers.inc:2327 Route121_Text_JessicaRegister
	.globl Route121_Text_JessicaRegister
Route121_Text_JessicaRegister: @ 0x0825F6E4
	.string "きょうは てかげん してあげたのよ\nつぎは こうは いかないからね!{EOS}"
	.if (. - Route121_Text_JessicaRegister) > 0x23
	.error "Route121_Text_JessicaRegister may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaRegister) < 0x23
	.space 0x23 - (. - Route121_Text_JessicaRegister)
	.endif
	@ data/text/trainers.inc:2330 Route121_Text_JessicaRematchIntro (+1 aliases)
	.globl Route121_Text_JessicaRematchIntro
Route121_Text_JessicaRematchIntro: @ 0x0825F707
	.string "だいじな ポケモン そだったのよ!\nちょっと みていきなさいよ!{EOS}"
	.if (. - Route121_Text_JessicaRematchIntro) > 0x21
	.error "Route121_Text_JessicaRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaRematchIntro) < 0x21
	.space 0x21 - (. - Route121_Text_JessicaRematchIntro)
	.endif
	@ data/text/trainers.inc:2333 Route121_Text_JessicaRematchDefeat (+1 aliases)
	.globl Route121_Text_JessicaRematchDefeat
Route121_Text_JessicaRematchDefeat: @ 0x0825F728
	.string "ぷんぷん!\nまた てかげん してくれないのね!{EOS}"
	.if (. - Route121_Text_JessicaRematchDefeat) > 0x18
	.error "Route121_Text_JessicaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaRematchDefeat) < 0x18
	.space 0x18 - (. - Route121_Text_JessicaRematchDefeat)
	.endif
	@ data/text/trainers.inc:2324 Route121_Text_JessicaPostBattle (+1 aliases)
	.globl Route121_Text_JessicaPostBattle_Copy_Rom_25F740
Route121_Text_JessicaPostBattle_Copy_Rom_25F740: @ 0x0825F740
	.string "サファリで あたらしい ポケモン\nつかまえようかな?{EOS}"
	.if (. - Route121_Text_JessicaPostBattle_Copy_Rom_25F740) > 0x1b
	.error "Route121_Text_JessicaPostBattle_Copy_Rom_25F740 may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_JessicaPostBattle_Copy_Rom_25F740) < 0x1b
	.space 0x1b - (. - Route121_Text_JessicaPostBattle_Copy_Rom_25F740)
	.endif
	@ data/text/trainers.inc:2339 Route121_Text_CristinIntro (+1 aliases)
	.globl Route121_Text_CristinIntro
Route121_Text_CristinIntro: @ 0x0825F75B
	.string "1にちに 5にんずつ\nたおす ことが にっかよ!\lあなたが その 5にんめ!{EOS}"
	.if (. - Route121_Text_CristinIntro) > 0x27
	.error "Route121_Text_CristinIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinIntro) < 0x27
	.space 0x27 - (. - Route121_Text_CristinIntro)
	.endif
	@ data/text/trainers.inc:2342 Route121_Text_CristinDefeat (+1 aliases)
	.globl Route121_Text_CristinDefeat
Route121_Text_CristinDefeat: @ 0x0825F782
	.string "いやっ ひどいわ!{EOS}"
	.if (. - Route121_Text_CristinDefeat) > 0xa
	.error "Route121_Text_CristinDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinDefeat) < 0xa
	.space 0xa - (. - Route121_Text_CristinDefeat)
	.endif
	@ data/text/trainers.inc:2345 Route121_Text_CristinPostBattle
	.globl Route121_Text_CristinPostBattle
Route121_Text_CristinPostBattle: @ 0x0825F78C
	.string "こんなに あっさり まけるなんて……\nつぎは わたしが かつから!{EOS}"
	.if (. - Route121_Text_CristinPostBattle) > 0x22
	.error "Route121_Text_CristinPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinPostBattle) < 0x22
	.space 0x22 - (. - Route121_Text_CristinPostBattle)
	.endif
	@ data/text/trainers.inc:2348 Route121_Text_CristinRegister
	.globl Route121_Text_CristinRegister
Route121_Text_CristinRegister: @ 0x0825F7AE
	.string "くつじょく てき だわ!\nあなたの こと わすれないんだから……\lポケナビを かしなさい!{EOS}"
	.if (. - Route121_Text_CristinRegister) > 0x2e
	.error "Route121_Text_CristinRegister may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinRegister) < 0x2e
	.space 0x2e - (. - Route121_Text_CristinRegister)
	.endif
	@ data/text/trainers.inc:2351 Route121_Text_CristinRematchIntro (+1 aliases)
	.globl Route121_Text_CristinRematchIntro
Route121_Text_CristinRematchIntro: @ 0x0825F7DC
	.string "1にちに 10にんずつ\nたおす ことが にっかよ!\lあなたが その 10にんめ!{EOS}"
	.if (. - Route121_Text_CristinRematchIntro) > 0x29
	.error "Route121_Text_CristinRematchIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinRematchIntro) < 0x29
	.space 0x29 - (. - Route121_Text_CristinRematchIntro)
	.endif
	@ data/text/trainers.inc:2354 Route121_Text_CristinRematchDefeat (+1 aliases)
	.globl Route121_Text_CristinRematchDefeat
Route121_Text_CristinRematchDefeat: @ 0x0825F805
	.string "ちょっ……\nひどい やりなおしてよ!{EOS}"
	.if (. - Route121_Text_CristinRematchDefeat) > 0x13
	.error "Route121_Text_CristinRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CristinRematchDefeat) < 0x13
	.space 0x13 - (. - Route121_Text_CristinRematchDefeat)
	.endif
	@ data/text/trainers.inc:2357 Route121_Text_CristinPostRematch
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl Route121_Text_CristinPostRematch
Route121_Text_CristinPostRematch: @ 0x0825F818
	.string "こんなに かてない あいてが いるなんて……\nグスっ しんじられない{EOS}"
	.if (. - Route121_Text_CristinPostRematch) != 0x23
	.error "Route121_Text_CristinPostRematch must retain its original byte length"
	.endif
	@ data/text/trainers.inc:2360 Route121_Text_CaleIntro (+1 aliases)
	.globl Route121_Text_CaleIntro
Route121_Text_CaleIntro: @ 0x0825F83B
	.string "いま にもつが いっぱい なんですけど!\nこんな じょうたいで たたかえと?{EOS}"
	.if (. - Route121_Text_CaleIntro) > 0x27
	.error "Route121_Text_CaleIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CaleIntro) < 0x27
	.space 0x27 - (. - Route121_Text_CaleIntro)
	.endif
	@ data/text/trainers.inc:2363 Route121_Text_CaleDefeat (+1 aliases)
	.globl Route121_Text_CaleDefeat
Route121_Text_CaleDefeat: @ 0x0825F862
	.string "そりゃ まけますよ\nりょうてが ふさがってるんだもん{EOS}"
	.if (. - Route121_Text_CaleDefeat) > 0x1b
	.error "Route121_Text_CaleDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CaleDefeat) < 0x1b
	.space 0x1b - (. - Route121_Text_CaleDefeat)
	.endif
	@ data/text/trainers.inc:2366 Route121_Text_CalePostBattle
	.globl Route121_Text_CalePostBattle
Route121_Text_CalePostBattle: @ 0x0825F87D
	.string "この さきの ミナモデパートで\nかいもの しすぎたんだ!\lきみの みたいな バッグが ほしいな{EOS}"
	.if (. - Route121_Text_CalePostBattle) > 0x30
	.error "Route121_Text_CalePostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_CalePostBattle) < 0x30
	.space 0x30 - (. - Route121_Text_CalePostBattle)
	.endif
	@ data/text/trainers.inc:2369 Route121_Text_MylesIntro (+1 aliases)
	.globl Route121_Text_MylesIntro
Route121_Text_MylesIntro: @ 0x0825F8AD
	.string "みんなの そだてた ポケモンが\nみてみたーーい!{EOS}"
	.if (. - Route121_Text_MylesIntro) > 0x19
	.error "Route121_Text_MylesIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MylesIntro) < 0x19
	.space 0x19 - (. - Route121_Text_MylesIntro)
	.endif
	@ data/text/trainers.inc:2372 Route121_Text_MylesDefeat (+1 aliases)
	.globl Route121_Text_MylesDefeat
Route121_Text_MylesDefeat: @ 0x0825F8C6
	.string "すごーーい!{EOS}"
	.if (. - Route121_Text_MylesDefeat) > 0x7
	.error "Route121_Text_MylesDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MylesDefeat) < 0x7
	.space 0x7 - (. - Route121_Text_MylesDefeat)
	.endif
	@ data/text/trainers.inc:2375 Route121_Text_MylesPostBattle
	.globl Route121_Text_MylesPostBattle
Route121_Text_MylesPostBattle: @ 0x0825F8CD
	.string "いいなーー! きみの ポケモン!\nどうやって そだてているの?{EOS}"
	.if (. - Route121_Text_MylesPostBattle) > 0x20
	.error "Route121_Text_MylesPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MylesPostBattle) < 0x20
	.space 0x20 - (. - Route121_Text_MylesPostBattle)
	.endif
	@ data/text/trainers.inc:2378 Route121_Text_PatIntro (+1 aliases)
	.globl Route121_Text_PatIntro
Route121_Text_PatIntro: @ 0x0825F8ED
	.string "わたしの そだてた ポケモンたち\nみんなに みてほしいの!{EOS}"
	.if (. - Route121_Text_PatIntro) > 0x1e
	.error "Route121_Text_PatIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_PatIntro) < 0x1e
	.space 0x1e - (. - Route121_Text_PatIntro)
	.endif
	@ data/text/trainers.inc:2381 Route121_Text_PatDefeat (+1 aliases)
	.globl Route121_Text_PatDefeat
Route121_Text_PatDefeat: @ 0x0825F90B
	.string "すごいなァ!{EOS}"
	.if (. - Route121_Text_PatDefeat) > 0x7
	.error "Route121_Text_PatDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_PatDefeat) < 0x7
	.space 0x7 - (. - Route121_Text_PatDefeat)
	.endif
	@ data/text/trainers.inc:2384 Route121_Text_PatPostBattle
	.globl Route121_Text_PatPostBattle
Route121_Text_PatPostBattle: @ 0x0825F912
	.string "どんな ポケモンでも おなじように\nかわいがって そだてているの!{EOS}"
	.if (. - Route121_Text_PatPostBattle) > 0x22
	.error "Route121_Text_PatPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_PatPostBattle) < 0x22
	.space 0x22 - (. - Route121_Text_PatPostBattle)
	.endif
	@ data/text/trainers.inc:2387 Route121_Text_MarcelIntro (+1 aliases)
	.globl Route121_Text_MarcelIntro
Route121_Text_MarcelIntro: @ 0x0825F934
	.string "わたしの ポケモンは まけしらず!\nこんど かったら つぎは コンテストだ!{EOS}"
	.if (. - Route121_Text_MarcelIntro) > 0x27
	.error "Route121_Text_MarcelIntro may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MarcelIntro) < 0x27
	.space 0x27 - (. - Route121_Text_MarcelIntro)
	.endif
	@ data/text/trainers.inc:2390 Route121_Text_MarcelDefeat (+1 aliases)
	.globl Route121_Text_MarcelDefeat
Route121_Text_MarcelDefeat: @ 0x0825F95B
	.string "あっと どうしたことだ?{EOS}"
	.if (. - Route121_Text_MarcelDefeat) > 0xd
	.error "Route121_Text_MarcelDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MarcelDefeat) < 0xd
	.space 0xd - (. - Route121_Text_MarcelDefeat)
	.endif
	@ data/text/trainers.inc:2393 Route121_Text_MarcelPostBattle
	.globl Route121_Text_MarcelPostBattle
Route121_Text_MarcelPostBattle: @ 0x0825F968
	.string "コンテストの まえに\nもうすこし きたえないと ダメかな{EOS}"
	.if (. - Route121_Text_MarcelPostBattle) > 0x1d
	.error "Route121_Text_MarcelPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route121_Text_MarcelPostBattle) < 0x1d
	.space 0x1d - (. - Route121_Text_MarcelPostBattle)
	.endif
	@ data/text/trainers.inc:2396 Route123_Text_WendyIntro (+1 aliases)
	.globl Route123_Text_WendyIntro
Route123_Text_WendyIntro: @ 0x0825F985
	.string "あなたの じつりょくが\nどれほどの ものか……\lわたしが たしかめて あげる!{EOS}"
	.if (. - Route123_Text_WendyIntro) > 0x28
	.error "Route123_Text_WendyIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_WendyIntro) < 0x28
	.space 0x28 - (. - Route123_Text_WendyIntro)
	.endif
	@ data/text/trainers.inc:2399 Route123_Text_WendyDefeat (+1 aliases)
	.globl Route123_Text_WendyDefeat
Route123_Text_WendyDefeat: @ 0x0825F9AD
	.string "すばらしいわ……!{EOS}"
	.if (. - Route123_Text_WendyDefeat) > 0xa
	.error "Route123_Text_WendyDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_WendyDefeat) < 0xa
	.space 0xa - (. - Route123_Text_WendyDefeat)
	.endif
	@ data/text/trainers.inc:2402 Route123_Text_WendyPostBattle
	.globl Route123_Text_WendyPostBattle
Route123_Text_WendyPostBattle: @ 0x0825F9B7
	.string "わたしに かつなんて……\nあなたの じつりょくも そうとうな もの!{EOS}"
	.if (. - Route123_Text_WendyPostBattle) > 0x23
	.error "Route123_Text_WendyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_WendyPostBattle) < 0x23
	.space 0x23 - (. - Route123_Text_WendyPostBattle)
	.endif
	@ data/text/trainers.inc:2405 Route123_Text_BraxtonIntro (+1 aliases)
	.globl Route123_Text_BraxtonIntro
Route123_Text_BraxtonIntro: @ 0x0825F9DA
	.string "たくさん ジムの バッジを\nもっている みたいだね!\pほんとうに それだけの ちからが あるか\nたしかめさせて もらうよ!{EOS}"
	.if (. - Route123_Text_BraxtonIntro) > 0x3e
	.error "Route123_Text_BraxtonIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_BraxtonIntro) < 0x3e
	.space 0x3e - (. - Route123_Text_BraxtonIntro)
	.endif
	@ data/text/trainers.inc:2408 Route123_Text_BraxtonDefeat (+1 aliases)
	.globl Route123_Text_BraxtonDefeat
Route123_Text_BraxtonDefeat: @ 0x0825FA18
	.string "たしかに ちからは ある!{EOS}"
	.if (. - Route123_Text_BraxtonDefeat) > 0xe
	.error "Route123_Text_BraxtonDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_BraxtonDefeat) < 0xe
	.space 0xe - (. - Route123_Text_BraxtonDefeat)
	.endif
	@ data/text/trainers.inc:2411 Route123_Text_BraxtonPostBattle
	.globl Route123_Text_BraxtonPostBattle
Route123_Text_BraxtonPostBattle: @ 0x0825FA26
	.string "ジムバッジに はじない\nたたかい だったよ!{EOS}"
	.if (. - Route123_Text_BraxtonPostBattle) > 0x17
	.error "Route123_Text_BraxtonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_BraxtonPostBattle) < 0x17
	.space 0x17 - (. - Route123_Text_BraxtonPostBattle)
	.endif
	@ data/text/trainers.inc:2414 Route123_Text_VioletIntro (+1 aliases)
	.globl Route123_Text_VioletIntro
Route123_Text_VioletIntro: @ 0x0825FA3D
	.string "たのしい ことが あるとき って\nいい においで いっぱいに なってるのね{EOS}"
	.if (. - Route123_Text_VioletIntro) > 0x26
	.error "Route123_Text_VioletIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_VioletIntro) < 0x26
	.space 0x26 - (. - Route123_Text_VioletIntro)
	.endif
	@ data/text/trainers.inc:2417 Route123_Text_VioletDefeat (+1 aliases)
	.globl Route123_Text_VioletDefeat
Route123_Text_VioletDefeat: @ 0x0825FA63
	.string "あぁ\nかなしみの におい だわ……{EOS}"
	.if (. - Route123_Text_VioletDefeat) > 0x12
	.error "Route123_Text_VioletDefeat may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_VioletDefeat) < 0x12
	.space 0x12 - (. - Route123_Text_VioletDefeat)
	.endif
	@ data/text/trainers.inc:2420 Route123_Text_VioletPostBattle
	.globl Route123_Text_VioletPostBattle
Route123_Text_VioletPostBattle: @ 0x0825FA75
	.string "きのみ めいじんの はなばたけ\nすっごく いいかんじの においで いっぱい!{EOS}"
	.if (. - Route123_Text_VioletPostBattle) > 0x27
	.error "Route123_Text_VioletPostBattle may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_VioletPostBattle) < 0x27
	.space 0x27 - (. - Route123_Text_VioletPostBattle)
	.endif

	@ data/text/trainers.inc:2423 Route123_Text_CameronIntro (+1 aliases)
	.globl Route123_Text_CameronIntro
Route123_Text_CameronIntro: @ 0x0825FA9C
	.string "サイキックとは きもちの つよさ……\pそう ぼくは だれにも まけないと\nおもっているから つよいよ!{EOS}"
	.if (. - Route123_Text_CameronIntro) > 0x34
	.error "Route123_Text_CameronIntro may not grow beyond its original slot"
	.endif
	.if (. - Route123_Text_CameronIntro) < 0x34
	.space 0x34 - (. - Route123_Text_CameronIntro)
	.endif

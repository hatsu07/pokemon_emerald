	@ data/text/trainers.inc:1 Route102_Text_CalvinIntro (+1 aliases)
	.globl gText_Rom_259517
gText_Rom_259517: @ 0x08259517
	.string "ポケモン つれていれば\nキミも りっぱな ポケモントレーナー!\lボクの ちょうせん うけるよね!"
	.byte EOS
	.if (. - gText_Rom_259517) > 0x31
	.error "gText_Rom_259517 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259517) < 0x31
	.space 0x31 - (. - gText_Rom_259517)
	.endif
	@ data/text/trainers.inc:4 Route102_Text_CalvinDefeated (+1 aliases)
	.globl gText_Rom_259548
gText_Rom_259548: @ 0x08259548
	.string "ああ まけた……\nもっと そだてておけば よかったよ"
	.byte EOS
	.if (. - gText_Rom_259548) > 0x1b
	.error "gText_Rom_259548 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259548) < 0x1b
	.space 0x1b - (. - gText_Rom_259548)
	.endif
	@ data/text/trainers.inc:7 Route102_Text_CalvinPostBattle
	.globl gText_Rom_259563
gText_Rom_259563: @ 0x08259563
	.string "キミ つよいなら つよいって\nさいしょから いって くれよな!"
	.byte EOS
	.if (. - gText_Rom_259563) > 0x20
	.error "gText_Rom_259563 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259563) < 0x20
	.space 0x20 - (. - gText_Rom_259563)
	.endif
	@ data/text/trainers.inc:10 Route102_Text_CalvinRegister
	.globl gText_Rom_259583
gText_Rom_259583: @ 0x08259583
	.string "ボク あれから がんばってるよ!\nこんど たたかいたい から\lポケナビ とうろく してよ!"
	.byte EOS
	.if (. - gText_Rom_259583) > 0x2e
	.error "gText_Rom_259583 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259583) < 0x2e
	.space 0x2e - (. - gText_Rom_259583)
	.endif
	@ data/text/trainers.inc:13 Route102_Text_CalvinRegisterShort
	.globl gText_Rom_2595B1
gText_Rom_2595B1: @ 0x082595B1
	.string "こんど また たたかいたい から\nポケナビ とうろく してよ!"
	.byte EOS
	.if (. - gText_Rom_2595B1) > 0x20
	.error "gText_Rom_2595B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2595B1) < 0x20
	.space 0x20 - (. - gText_Rom_2595B1)
	.endif
	@ data/text/trainers.inc:16 Route102_Text_CalvinRematchIntro (+1 aliases)
	.globl gText_Rom_2595D1
gText_Rom_2595D1: @ 0x082595D1
	.string "キミに まけてから ひっしに\nポケモン そだてたんだ! もちろん\lボクの ちょうせん うけるよね!"
	.byte EOS
	.if (. - gText_Rom_2595D1) > 0x32
	.error "gText_Rom_2595D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2595D1) < 0x32
	.space 0x32 - (. - gText_Rom_2595D1)
	.endif
	@ data/text/trainers.inc:19 Route102_Text_CalvinRematchDefeated (+1 aliases)
	.globl gText_Rom_259603
gText_Rom_259603: @ 0x08259603
	.string "ああ まけた……\nそだてかた わるいのかな"
	.byte EOS
	.if (. - gText_Rom_259603) > 0x16
	.error "gText_Rom_259603 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259603) < 0x16
	.space 0x16 - (. - gText_Rom_259603)
	.endif
	@ data/text/trainers.inc:22 Route102_Text_CalvinRematchPostBattle
	.globl gText_Rom_259619
gText_Rom_259619: @ 0x08259619
	.string "キミが つよくなるなら\nボクも もっと つよくなって みせるよ!"
	.byte EOS
	.if (. - gText_Rom_259619) > 0x21
	.error "gText_Rom_259619 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259619) < 0x21
	.space 0x21 - (. - gText_Rom_259619)
	.endif
	@ data/text/trainers.inc:25 Route102_Text_AllenIntro (+1 aliases)
	.globl gText_Rom_25963A
gText_Rom_25963A: @ 0x0825963A
	.string "きみ トレーナーに なったばかり?\nおたがい しょしんしゃ だね!"
	.byte EOS
	.if (. - gText_Rom_25963A) > 0x22
	.error "gText_Rom_25963A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25963A) < 0x22
	.space 0x22 - (. - gText_Rom_25963A)
	.endif
	@ data/text/trainers.inc:28 Route102_Text_AllenDefeated (+1 aliases)
	.globl gText_Rom_25965C
gText_Rom_25965C: @ 0x0825965C
	.string "かてると おもったから\nこえを かけたのに!"
	.byte EOS
	.if (. - gText_Rom_25965C) > 0x17
	.error "gText_Rom_25965C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25965C) < 0x17
	.space 0x17 - (. - gText_Rom_25965C)
	.endif
	@ data/text/trainers.inc:31 Route102_Text_AllenPostBattle
	.globl gText_Rom_259673
gText_Rom_259673: @ 0x08259673
	.string "まだ 1かいも かってない……\nはやく かちたいなあ……"
	.byte EOS
	.if (. - gText_Rom_259673) > 0x1d
	.error "gText_Rom_259673 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259673) < 0x1d
	.space 0x1d - (. - gText_Rom_259673)
	.endif
	@ data/text/trainers.inc:34 Route102_Text_RickIntro (+1 aliases)
	.globl gText_Rom_259690
gText_Rom_259690: @ 0x08259690
	.string "おっと! めが あったな!\nむしポケモンで あいてを するぜ!"
	.byte EOS
	.if (. - gText_Rom_259690) > 0x20
	.error "gText_Rom_259690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259690) < 0x20
	.space 0x20 - (. - gText_Rom_259690)
	.endif
	@ data/text/trainers.inc:37 Route102_Text_RickDefeated (+1 aliases)
	.globl gText_Rom_2596B0
gText_Rom_2596B0: @ 0x082596B0
	.string "まけてしまった!"
	.byte EOS
	.if (. - gText_Rom_2596B0) > 0x9
	.error "gText_Rom_2596B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2596B0) < 0x9
	.space 0x9 - (. - gText_Rom_2596B0)
	.endif
	@ data/text/trainers.inc:40 Route102_Text_RickPostBattle
	.globl gText_Rom_2596B9
gText_Rom_2596B9: @ 0x082596B9
	.string "めが あった トレーナーには\nしょうぶを いどむのが きまりさ!"
	.byte EOS
	.if (. - gText_Rom_2596B9) > 0x21
	.error "gText_Rom_2596B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2596B9) < 0x21
	.space 0x21 - (. - gText_Rom_2596B9)
	.endif
	@ data/text/trainers.inc:43 Route102_Text_TianaIntro (+1 aliases)
	.globl gText_Rom_2596DA
gText_Rom_2596DA: @ 0x082596DA
	.string "わたしは どんどん かちぬいて\nさいきょうの トレーナーを めざすのよ!\pあなたも きょうりょく してね!"
	.byte EOS
	.if (. - gText_Rom_2596DA) > 0x36
	.error "gText_Rom_2596DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2596DA) < 0x36
	.space 0x36 - (. - gText_Rom_2596DA)
	.endif
	@ data/text/trainers.inc:46 Route102_Text_TianaDefeated (+1 aliases)
	.globl gText_Rom_259710
gText_Rom_259710: @ 0x08259710
	.string "わたしが あなたに\nきょうりょく しちゃった みたいね……"
	.byte EOS
	.if (. - gText_Rom_259710) > 0x1e
	.error "gText_Rom_259710 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259710) < 0x1e
	.space 0x1e - (. - gText_Rom_259710)
	.endif
	@ data/text/trainers.inc:49 Route102_Text_TianaPostBattle
	.globl gText_Rom_25972E
gText_Rom_25972E: @ 0x0825972E
	.string "どんどん かちぬくには\nもっと たくさん ポケモンを\lつかまえないと いけない みたいね!"
	.byte EOS
	.if (. - gText_Rom_25972E) > 0x2e
	.error "gText_Rom_25972E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25972E) < 0x2e
	.space 0x2e - (. - gText_Rom_25972E)
	.endif
	@ data/text/trainers.inc:52 Route103_Text_DaisyIntro (+1 aliases)
	.globl gText_Rom_25975C
gText_Rom_25975C: @ 0x0825975C
	.string "こころ やすらぐ かおりに\nあなたも さそわれたのですね……"
	.byte EOS
	.if (. - gText_Rom_25975C) > 0x1f
	.error "gText_Rom_25975C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25975C) < 0x1f
	.space 0x1f - (. - gText_Rom_25975C)
	.endif
	@ data/text/trainers.inc:55 Route103_Text_DaisyDefeated (+1 aliases)
	.globl gText_Rom_25977B
gText_Rom_25977B: @ 0x0825977B
	.string "わたくしの かおりに\nまどわされませんでしたね……"
	.byte EOS
	.if (. - gText_Rom_25977B) > 0x1a
	.error "gText_Rom_25977B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25977B) < 0x1a
	.space 0x1a - (. - gText_Rom_25977B)
	.endif
	@ data/text/trainers.inc:58 Route103_Text_DaisyPostBattle
	.globl gText_Rom_259795
gText_Rom_259795: @ 0x08259795
	.string "アロマとは かおりのこと……\nかおりは こころと からだを いやすのです"
	.byte EOS
	.if (. - gText_Rom_259795) > 0x25
	.error "gText_Rom_259795 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259795) < 0x25
	.space 0x25 - (. - gText_Rom_259795)
	.endif
	@ data/text/trainers.inc:61 Route103_Text_AmyIntro (+2 aliases)
	.globl gText_Rom_2597BA
gText_Rom_2597BA: @ 0x082597BA
	.string "クミ『あたしは クミ!\nこっちは いもうとの ルミ!\lふたりで いっしょに たたかうのよ!"
	.byte EOS
	.if (. - gText_Rom_2597BA) > 0x2e
	.error "gText_Rom_2597BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2597BA) < 0x2e
	.space 0x2e - (. - gText_Rom_2597BA)
	.endif
	@ data/text/trainers.inc:64 Route103_Text_AmyDefeated (+1 aliases)
	.globl gText_Rom_2597E8
gText_Rom_2597E8: @ 0x082597E8
	.string "クミ『まけっちゃったよぉ……"
	.byte EOS
	.if (. - gText_Rom_2597E8) > 0xf
	.error "gText_Rom_2597E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2597E8) < 0xf
	.space 0xf - (. - gText_Rom_2597E8)
	.endif
	@ data/text/trainers.inc:67 Route103_Text_AmyPostBattle (+1 aliases)
	.globl gText_Rom_2597F7
gText_Rom_2597F7: @ 0x082597F7
	.string "クミ『ふたりを あいてに するのって\nいろんな ことを かんがえるよね!"
	.byte EOS
	.if (. - gText_Rom_2597F7) > 0x25
	.error "gText_Rom_2597F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2597F7) < 0x25
	.space 0x25 - (. - gText_Rom_2597F7)
	.endif
	@ data/text/trainers.inc:70 Route103_Text_AmyNotEnoughPokemon (+2 aliases)
	.globl gText_Rom_25981C
gText_Rom_25981C: @ 0x0825981C
	.string "クミ『あら?\nポケモン 1ひきしか つれてないんだね!\lそれじゃあ あたしたちと たたかえないわ!"
	.byte EOS
	.if (. - gText_Rom_25981C) > 0x32
	.error "gText_Rom_25981C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25981C) < 0x32
	.space 0x32 - (. - gText_Rom_25981C)
	.endif
	@ data/text/trainers.inc:73 Route103_Text_LivIntro (+1 aliases)
	.globl gText_Rom_25984E
gText_Rom_25984E: @ 0x0825984E
	.string "ルミ『あたしたちは ふたりで ひとり\nいっしょに たたかうんだよ!"
	.byte EOS
	.if (. - gText_Rom_25984E) > 0x22
	.error "gText_Rom_25984E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25984E) < 0x22
	.space 0x22 - (. - gText_Rom_25984E)
	.endif
	@ data/text/trainers.inc:76 Route103_Text_LivDefeated (+1 aliases)
	.globl gText_Rom_259870
gText_Rom_259870: @ 0x08259870
	.string "ルミ『まけちゃったよぉ おねえちゃぁん……"
	.byte EOS
	.if (. - gText_Rom_259870) > 0x16
	.error "gText_Rom_259870 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259870) < 0x16
	.space 0x16 - (. - gText_Rom_259870)
	.endif
	@ data/text/trainers.inc:79 Route103_Text_LivPostBattle
	.globl gText_Rom_259886
gText_Rom_259886: @ 0x08259886
	.string "ルミ『おねえちゃんと あたしは\nいきが ぴったり あってるのに……\pまけちゃったよぉ……"
	.byte EOS
	.if (. - gText_Rom_259886) > 0x2d
	.error "gText_Rom_259886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259886) < 0x2d
	.space 0x2d - (. - gText_Rom_259886)
	.endif
	@ data/text/trainers.inc:82 Route103_Text_AmyLivRegister
	.globl gText_Rom_2598B3
gText_Rom_2598B3: @ 0x082598B3
	.string "ルミ『あたしたち ほんとは\nもっと つよいんだもん……\lほんとうだから! こんど みせるから!"
	.byte EOS
	.if (. - gText_Rom_2598B3) > 0x30
	.error "gText_Rom_2598B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2598B3) < 0x30
	.space 0x30 - (. - gText_Rom_2598B3)
	.endif
	@ data/text/trainers.inc:85 Route103_Text_LivNotEnoughPokemon (+2 aliases)
	.globl gText_Rom_2598E3
gText_Rom_2598E3: @ 0x082598E3
	.string "ルミ『あたしたちと たたかいたいなら\nポケモンを 2ひき つれてないと ダメよ!\lじゃないと しょうぶに ならないんだから!"
	.byte EOS
	.if (. - gText_Rom_2598E3) > 0x3f
	.error "gText_Rom_2598E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2598E3) < 0x3f
	.space 0x3f - (. - gText_Rom_2598E3)
	.endif
	@ data/text/trainers.inc:61 Route103_Text_AmyIntro (+2 aliases)
	.globl gText_Rom_259922
gText_Rom_259922: @ 0x08259922
	.string "クミ『あたしは クミ!\nこっちは いもうとの ルミ!\lふたりで いっしょに たたかうのよ!"
	.byte EOS
	.if (. - gText_Rom_259922) > 0x2e
	.error "gText_Rom_259922 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259922) < 0x2e
	.space 0x2e - (. - gText_Rom_259922)
	.endif
	@ data/text/trainers.inc:91 Route103_Text_AmyRematchDefeated (+1 aliases)
	.globl gText_Rom_259950
gText_Rom_259950: @ 0x08259950
	.string "クミ『くやしい……\nまた かてなかったよぉ……"
	.byte EOS
	.if (. - gText_Rom_259950) > 0x18
	.error "gText_Rom_259950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259950) < 0x18
	.space 0x18 - (. - gText_Rom_259950)
	.endif
	@ data/text/trainers.inc:67 Route103_Text_AmyPostBattle (+1 aliases)
	.globl gText_Rom_259968
gText_Rom_259968: @ 0x08259968
	.string "クミ『ふたりを あいてに するのって\nいろんな ことを かんがえるよね!"
	.byte EOS
	.if (. - gText_Rom_259968) > 0x25
	.error "gText_Rom_259968 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259968) < 0x25
	.space 0x25 - (. - gText_Rom_259968)
	.endif
	@ data/text/trainers.inc:70 Route103_Text_AmyNotEnoughPokemon (+2 aliases)
	.globl gText_Rom_25998D
gText_Rom_25998D: @ 0x0825998D
	.string "クミ『あら?\nポケモン 1ひきしか つれてないんだね!\lそれじゃあ あたしたちと たたかえないわ!"
	.byte EOS
	.if (. - gText_Rom_25998D) > 0x32
	.error "gText_Rom_25998D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25998D) < 0x32
	.space 0x32 - (. - gText_Rom_25998D)
	.endif
	@ data/text/trainers.inc:100 Route103_Text_LivRematchIntro (+1 aliases)
	.globl gText_Rom_2599BF
gText_Rom_2599BF: @ 0x082599BF
	.string "ルミ『あたしたちは ふたりで ひとり\nいつも いっしょに たたかうんだよ!"
	.byte EOS
	.if (. - gText_Rom_2599BF) > 0x26
	.error "gText_Rom_2599BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2599BF) < 0x26
	.space 0x26 - (. - gText_Rom_2599BF)
	.endif
	@ data/text/trainers.inc:103 Route103_Text_LivRematchDefeated (+1 aliases)
	.globl gText_Rom_2599E5
gText_Rom_2599E5: @ 0x082599E5
	.string "ルミ『また まけちゃったよぉ\nおねえちゃぁん……"
	.byte EOS
	.if (. - gText_Rom_2599E5) > 0x19
	.error "gText_Rom_2599E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2599E5) < 0x19
	.space 0x19 - (. - gText_Rom_2599E5)
	.endif
	@ data/text/trainers.inc:106 Route103_Text_LivRematchPostBattle
	.globl gText_Rom_2599FE
gText_Rom_2599FE: @ 0x082599FE
	.string "ルミ『おねえちゃんと あたしは\nいきが ぴったり あってるのに……\pどうして また まけちゃったの?"
	.byte EOS
	.if (. - gText_Rom_2599FE) > 0x33
	.error "gText_Rom_2599FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2599FE) < 0x33
	.space 0x33 - (. - gText_Rom_2599FE)
	.endif
	@ data/text/trainers.inc:85 Route103_Text_LivNotEnoughPokemon (+2 aliases)
	.globl gText_Rom_259A31
gText_Rom_259A31: @ 0x08259A31
	.string "ルミ『あたしたちと たたかいたいなら\nポケモンを 2ひき つれてないと ダメよ!\lじゃないと しょうぶに ならないんだから!"
	.byte EOS
	.if (. - gText_Rom_259A31) > 0x3f
	.error "gText_Rom_259A31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259A31) < 0x3f
	.space 0x3f - (. - gText_Rom_259A31)
	.endif
	@ data/text/trainers.inc:112 Route103_Text_AndrewIntro (+1 aliases)
	.globl gText_Rom_259A70
gText_Rom_259A70: @ 0x08259A70
	.string "つりいとが からまって イライラするーっ!\nええいっ しょうぶだっ!"
	.byte EOS
	.if (. - gText_Rom_259A70) > 0x23
	.error "gText_Rom_259A70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259A70) < 0x23
	.space 0x23 - (. - gText_Rom_259A70)
	.endif
	@ data/text/trainers.inc:115 Route103_Text_AndrewDefeated (+1 aliases)
	.globl gText_Rom_259A93
gText_Rom_259A93: @ 0x08259A93
	.string "まけたっ!\nよけいに イライラするぞーっ!"
	.byte EOS
	.if (. - gText_Rom_259A93) > 0x16
	.error "gText_Rom_259A93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259A93) < 0x16
	.space 0x16 - (. - gText_Rom_259A93)
	.endif
	@ data/text/trainers.inc:118 Route103_Text_AndrewPostBattle
	.globl gText_Rom_259AA9
gText_Rom_259AA9: @ 0x08259AA9
	.string "ええい はらだたしい……!\nイライライライラ……"
	.byte EOS
	.if (. - gText_Rom_259AA9) > 0x19
	.error "gText_Rom_259AA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AA9) < 0x19
	.space 0x19 - (. - gText_Rom_259AA9)
	.endif
	@ data/text/trainers.inc:121 Route103_Text_MiguelIntro (+1 aliases)
	.globl gText_Rom_259AC2
gText_Rom_259AC2: @ 0x08259AC2
	.string "わたしの ポケモンちゃん\nすごく かわいいから みていきたまえ!"
	.byte EOS
	.if (. - gText_Rom_259AC2) > 0x21
	.error "gText_Rom_259AC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AC2) < 0x21
	.space 0x21 - (. - gText_Rom_259AC2)
	.endif
	@ data/text/trainers.inc:124 Route103_Text_MiguelDefeated (+1 aliases)
	.globl gText_Rom_259AE3
gText_Rom_259AE3: @ 0x08259AE3
	.string "あわわ……\nわたしの ポケモンちゃん!"
	.byte EOS
	.if (. - gText_Rom_259AE3) > 0x14
	.error "gText_Rom_259AE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AE3) < 0x14
	.space 0x14 - (. - gText_Rom_259AE3)
	.endif
	@ data/text/trainers.inc:127 Route103_Text_MiguelPostBattle
	.globl gText_Rom_259AF7
gText_Rom_259AF7: @ 0x08259AF7
	.string "かわいい ポケモンちゃんは\nやられた すがたも かわいいな……"
	.byte EOS
	.if (. - gText_Rom_259AF7) > 0x20
	.error "gText_Rom_259AF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259AF7) < 0x20
	.space 0x20 - (. - gText_Rom_259AF7)
	.endif
	@ data/text/trainers.inc:130 Route103_Text_MiguelRegister
	.globl gText_Rom_259B17
gText_Rom_259B17: @ 0x08259B17
	.string "なんどでも かわいい ポケモンちゃんを\nみにきて もらうんだからね!"
	.byte EOS
	.if (. - gText_Rom_259B17) > 0x23
	.error "gText_Rom_259B17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B17) < 0x23
	.space 0x23 - (. - gText_Rom_259B17)
	.endif
	@ data/text/trainers.inc:133 Route103_Text_MiguelRematchIntro (+1 aliases)
	.globl gText_Rom_259B3A
gText_Rom_259B3A: @ 0x08259B3A
	.string "きみ! わたしの ポケモンちゃん\nさらに かわいく なったのだ!"
	.byte EOS
	.if (. - gText_Rom_259B3A) > 0x21
	.error "gText_Rom_259B3A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B3A) < 0x21
	.space 0x21 - (. - gText_Rom_259B3A)
	.endif
	@ data/text/trainers.inc:136 Route103_Text_MiguelRematchDefeated (+1 aliases)
	.globl gText_Rom_259B5B
gText_Rom_259B5B: @ 0x08259B5B
	.string "ああ!\nわたしの ポケモンちゃん!"
	.byte EOS
	.if (. - gText_Rom_259B5B) > 0x12
	.error "gText_Rom_259B5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B5B) < 0x12
	.space 0x12 - (. - gText_Rom_259B5B)
	.endif
	@ data/text/trainers.inc:139 Route103_Text_MiguelRematchPostBattle
	.globl gText_Rom_259B6D
gText_Rom_259B6D: @ 0x08259B6D
	.string "いっしょに いれば いるほど\nポケモンが かわいくなって たまらん!"
	.byte EOS
	.if (. - gText_Rom_259B6D) > 0x23
	.error "gText_Rom_259B6D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B6D) < 0x23
	.space 0x23 - (. - gText_Rom_259B6D)
	.endif
	@ data/text/trainers.inc:142 Route103_Text_PeteIntro (+1 aliases)
	.globl gText_Rom_259B90
gText_Rom_259B90: @ 0x08259B90
	.string "この くらいの きょり\nおよいで わたれば いーのにさ!"
	.byte EOS
	.if (. - gText_Rom_259B90) > 0x1d
	.error "gText_Rom_259B90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259B90) < 0x1d
	.space 0x1d - (. - gText_Rom_259B90)
	.endif
	@ data/text/trainers.inc:145 Route103_Text_PeteDefeated (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_259BAD
gText_Rom_259BAD: @ 0x08259BAD
	.string "おお やるじゃん"
	.byte EOS
	.if (. - gText_Rom_259BAD) != 0x9
	.error "gText_Rom_259BAD must retain its original byte length"
	.endif
	.globl gText_Rom_259BB2
	.set gText_Rom_259BB2, gText_Rom_259BAD + 0x5
	@ data/text/trainers.inc:148 Route103_Text_PetePostBattle
	.globl gText_Rom_259BB6
gText_Rom_259BB6: @ 0x08259BB6
	.string "なーるほど\pそれ ほど たよれる ポケモンなら\nおもわず なみのり したくなる ってもんだ"
	.byte EOS
	.if (. - gText_Rom_259BB6) > 0x2e
	.error "gText_Rom_259BB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259BB6) < 0x2e
	.space 0x2e - (. - gText_Rom_259BB6)
	.endif

	@ data/maps/MossdeepCity_Gym/scripts.inc:372 MossdeepCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_20B83E
gText_Rom_20B83E: @ 0x0820B83E
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pこのジムの ジムリーダーは\nエスパータイプの ポケモンつかい!\pかくとうタイプや どくタイプの\nポケモンで いどむと\lものすごい ダメージを くらうぞ!\pしかも ばつぐんの\nコンビネーションで せめてくる!\pだから きみも かつために ポケモンとの\nきずなを きばって みせて やれ!{EOS}"
	.if (. - gText_Rom_20B83E) > 0xab
	.error "gText_Rom_20B83E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B83E) < 0xab
	.space 0xab - (. - gText_Rom_20B83E)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:375 MossdeepCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_20B8E9
gText_Rom_20B8E9: @ 0x0820B8E9
	.string "こりゃあ たまげた!!\nきみは すごか トレーナーだ!{EOS}"
	.if (. - gText_Rom_20B8E9) > 0x1c
	.error "gText_Rom_20B8E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B8E9) < 0x1c
	.space 0x1c - (. - gText_Rom_20B8E9)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:378 MossdeepCity_Gym_Text_PrestonIntro (+1 aliases)
	.globl gText_Rom_20B905
gText_Rom_20B905: @ 0x0820B905
	.string "しょうぶは こころの つよさで きまる\nこころ よわき ものは かてない!{EOS}"
	.if (. - gText_Rom_20B905) > 0x26
	.error "gText_Rom_20B905 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B905) < 0x26
	.space 0x26 - (. - gText_Rom_20B905)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:381 MossdeepCity_Gym_Text_PrestonDefeat (+1 aliases)
	.globl gText_Rom_20B92B
gText_Rom_20B92B: @ 0x0820B92B
	.string "まけたか!\nオレも きたえ なおさねばっ!{EOS}"
	.if (. - gText_Rom_20B92B) > 0x16
	.error "gText_Rom_20B92B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B92B) < 0x16
	.space 0x16 - (. - gText_Rom_20B92B)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:384 MossdeepCity_Gym_Text_PrestonPostBattle
	.globl gText_Rom_20B941
gText_Rom_20B941: @ 0x0820B941
	.string "まよった ほうが まける\nオレからの ちゅうこくだ!{EOS}"
	.if (. - gText_Rom_20B941) > 0x1b
	.error "gText_Rom_20B941 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B941) < 0x1b
	.space 0x1b - (. - gText_Rom_20B941)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:387 MossdeepCity_Gym_Text_VirgilIntro (+1 aliases)
	.globl gText_Rom_20B95C
gText_Rom_20B95C: @ 0x0820B95C
	.string "キミの さいのうを みせて もらおうか!{EOS}"
	.if (. - gText_Rom_20B95C) > 0x15
	.error "gText_Rom_20B95C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B95C) < 0x15
	.space 0x15 - (. - gText_Rom_20B95C)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:390 MossdeepCity_Gym_Text_VirgilDefeat (+1 aliases)
	.globl gText_Rom_20B971
gText_Rom_20B971: @ 0x0820B971
	.string "すばらしい さいのうの もちぬしだ!{EOS}"
	.if (. - gText_Rom_20B971) > 0x13
	.error "gText_Rom_20B971 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B971) < 0x13
	.space 0x13 - (. - gText_Rom_20B971)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:393 MossdeepCity_Gym_Text_VirgilPostBattle
	.globl gText_Rom_20B984
gText_Rom_20B984: @ 0x0820B984
	.string "よのなかに てんさいが いるならば\nここの ジムリーダーが そうだ……\pだが もしかすると キミの ほうが\nさいのうは うえかも しれない……{EOS}"
	.if (. - gText_Rom_20B984) > 0x48
	.error "gText_Rom_20B984 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B984) < 0x48
	.space 0x48 - (. - gText_Rom_20B984)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:396 MossdeepCity_Gym_Text_BlakeIntro (+1 aliases)
	.globl gText_Rom_20B9CC
gText_Rom_20B9CC: @ 0x0820B9CC
	.string "ふふふ……\nねんりきで モンスターボールを\lくうちゅうに うかせて みせよう……\pうおおぉぉぉぉぉ……!\p…… …… ……\n…… …… ……\pちょうしの わるい ときも ある……{EOS}"
	.if (. - gText_Rom_20B9CC) > 0x5a
	.error "gText_Rom_20B9CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20B9CC) < 0x5a
	.space 0x5a - (. - gText_Rom_20B9CC)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:399 MossdeepCity_Gym_Text_BlakeDefeat (+1 aliases)
	.globl gText_Rom_20BA26
gText_Rom_20BA26: @ 0x0820BA26
	.string "ポケモン しょうぶも\nちょうし わりーっ!{EOS}"
	.if (. - gText_Rom_20BA26) > 0x16
	.error "gText_Rom_20BA26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BA26) < 0x16
	.space 0x16 - (. - gText_Rom_20BA26)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:402 MossdeepCity_Gym_Text_BlakePostBattle
	.globl gText_Rom_20BA3C
gText_Rom_20BA3C: @ 0x0820BA3C
	.string "モンスターボールは おおきすぎた\nこの わたぼこり なら ぜったいに……\pふううううううっ……!\p…… …… ……\n…… …… ……\pちがうぞ!\nはないきで とばして なんか いないぞ!{EOS}"
	.if (. - gText_Rom_20BA3C) > 0x5e
	.error "gText_Rom_20BA3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BA3C) < 0x5e
	.space 0x5e - (. - gText_Rom_20BA3C)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:405 MossdeepCity_Gym_Text_HannahIntro (+1 aliases)
	.globl gText_Rom_20BA9A
gText_Rom_20BA9A: @ 0x0820BA9A
	.string "あなたが アタシに まけた としても\nおちこまない ことね!\pあなたが よわい わけじゃ なくて\nアタシが つよすぎる からよ!{EOS}"
	.if (. - gText_Rom_20BA9A) > 0x41
	.error "gText_Rom_20BA9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BA9A) < 0x41
	.space 0x41 - (. - gText_Rom_20BA9A)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:408 MossdeepCity_Gym_Text_HannahDefeat (+1 aliases)
	.globl gText_Rom_20BADB
gText_Rom_20BADB: @ 0x0820BADB
	.string "あなたは さらに つよすぎた!{EOS}"
	.if (. - gText_Rom_20BADB) > 0x10
	.error "gText_Rom_20BADB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BADB) < 0x10
	.space 0x10 - (. - gText_Rom_20BADB)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:411 MossdeepCity_Gym_Text_HannahPostBattle
	.globl gText_Rom_20BAEB
gText_Rom_20BAEB: @ 0x0820BAEB
	.string "まけたから って クヨクヨ しないわ\nもっと しゅぎょう すれば いいんだもの!\pまえむきな ところが アタシの とりえ!{EOS}"
	.if (. - gText_Rom_20BAEB) > 0x3e
	.error "gText_Rom_20BAEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BAEB) < 0x3e
	.space 0x3e - (. - gText_Rom_20BAEB)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:414 MossdeepCity_Gym_Text_SamanthaIntro (+1 aliases)
	.globl gText_Rom_20BB29
gText_Rom_20BB29: @ 0x0820BB29
	.string "みえる……\nあなたの みらいが みえる……\pわたくしに かてたら\nあなたの みらいを おしえて あげる!{EOS}"
	.if (. - gText_Rom_20BB29) > 0x35
	.error "gText_Rom_20BB29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BB29) < 0x35
	.space 0x35 - (. - gText_Rom_20BB29)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:417 MossdeepCity_Gym_Text_SamanthaDefeat (+2 aliases)
	.globl gText_Rom_20BB5E
gText_Rom_20BB5E: @ 0x0820BB5E
	.string "まいりました……!{EOS}"
	.if (. - gText_Rom_20BB5E) > 0xa
	.error "gText_Rom_20BB5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BB5E) < 0xa
	.space 0xa - (. - gText_Rom_20BB5E)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:420 MossdeepCity_Gym_Text_SamanthaPostBattle
	.globl gText_Rom_20BB68
gText_Rom_20BB68: @ 0x0820BB68
	.string "あなたと ジムリーダーさまの しょうぶ……\nものすごく はげしい てんかい……\pけっかは……\nわたくしの くちからは いえない……!{EOS}"
	.if (. - gText_Rom_20BB68) > 0x43
	.error "gText_Rom_20BB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BB68) < 0x43
	.space 0x43 - (. - gText_Rom_20BB68)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:423 MossdeepCity_Gym_Text_MauraIntro (+1 aliases)
	.globl gText_Rom_20BBAB
gText_Rom_20BBAB: @ 0x0820BBAB
	.string "あなたが これまで あゆんできた みちのり\nあなたが けいけん してきた ことがら\pすべてを ぶつけて きなさい!{EOS}"
	.if (. - gText_Rom_20BBAB) > 0x3a
	.error "gText_Rom_20BBAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BBAB) < 0x3a
	.space 0x3a - (. - gText_Rom_20BBAB)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:426 MossdeepCity_Gym_Text_MauraDefeat (+1 aliases)
	.globl gText_Rom_20BBE5
gText_Rom_20BBE5: @ 0x0820BBE5
	.string "すばらしい みちのり だわ……!{EOS}"
	.if (. - gText_Rom_20BBE5) > 0x11
	.error "gText_Rom_20BBE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BBE5) < 0x11
	.space 0x11 - (. - gText_Rom_20BBE5)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:429 MossdeepCity_Gym_Text_MauraPostBattle
	.globl gText_Rom_20BBF6
gText_Rom_20BBF6: @ 0x0820BBF6
	.string "がんばった ものには あかるい みらいが\nなまけた ものには ぜつぼうの あしたが\pいんがおうほう……\nすべては じぶんに はねかえる ものよ……{EOS}"
	.if (. - gText_Rom_20BBF6) > 0x4a
	.error "gText_Rom_20BBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BBF6) < 0x4a
	.space 0x4a - (. - gText_Rom_20BBF6)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:432 MossdeepCity_Gym_Text_SylviaIntro (+1 aliases)
	.globl gText_Rom_20BC40
gText_Rom_20BC40: @ 0x0820BC40
	.string "いのちを けずって でも\nこの しょうぶ かってみせるわ……!{EOS}"
	.if (. - gText_Rom_20BC40) > 0x20
	.error "gText_Rom_20BC40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC40) < 0x20
	.space 0x20 - (. - gText_Rom_20BC40)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:435 MossdeepCity_Gym_Text_SylviaDefeat (+1 aliases)
	.globl gText_Rom_20BC60
gText_Rom_20BC60: @ 0x0820BC60
	.string "あなたは\nおそろしい ことを……{EOS}"
	.if (. - gText_Rom_20BC60) > 0x11
	.error "gText_Rom_20BC60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC60) < 0x11
	.space 0x11 - (. - gText_Rom_20BC60)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:438 MossdeepCity_Gym_Text_SylviaPostBattle
	.globl gText_Rom_20BC71
gText_Rom_20BC71: @ 0x0820BC71
	.string "あたしに かったわね……\nなにが おきても しらないわよ……!{EOS}"
	.if (. - gText_Rom_20BC71) > 0x20
	.error "gText_Rom_20BC71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC71) < 0x20
	.space 0x20 - (. - gText_Rom_20BC71)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:441 MossdeepCity_Gym_Text_NateIntro (+1 aliases)
	.globl gText_Rom_20BC91
gText_Rom_20BC91: @ 0x0820BC91
	.string "ほっほっほ\pエスパータイプの てごわさを\nあなたに おしえて さしあげましょう{EOS}"
	.if (. - gText_Rom_20BC91) > 0x28
	.error "gText_Rom_20BC91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BC91) < 0x28
	.space 0x28 - (. - gText_Rom_20BC91)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:444 MossdeepCity_Gym_Text_NateDefeat (+1 aliases)
	.globl gText_Rom_20BCB9
gText_Rom_20BCB9: @ 0x0820BCB9
	.string "こ これは これは!\nすばらしい たたかいかた ですな{EOS}"
	.if (. - gText_Rom_20BCB9) > 0x1c
	.error "gText_Rom_20BCB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BCB9) < 0x1c
	.space 0x1c - (. - gText_Rom_20BCB9)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:447 MossdeepCity_Gym_Text_NatePostBattle
	.globl gText_Rom_20BCD5
gText_Rom_20BCD5: @ 0x0820BCD5
	.string "わ わたくしは どんなに まけても\nとりみだしは しませんから{EOS}"
	.if (. - gText_Rom_20BCD5) > 0x20
	.error "gText_Rom_20BCD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BCD5) < 0x20
	.space 0x20 - (. - gText_Rom_20BCD5)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:450 MossdeepCity_Gym_Text_KathleenIntro (+1 aliases)
	.globl gText_Rom_20BCF5
gText_Rom_20BCF5: @ 0x0820BCF5
	.string "おそろしいめに あわせて やろうかーっ!{EOS}"
	.if (. - gText_Rom_20BCF5) > 0x15
	.error "gText_Rom_20BCF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BCF5) < 0x15
	.space 0x15 - (. - gText_Rom_20BCF5)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:453 MossdeepCity_Gym_Text_KathleenDefeat (+1 aliases)
	.globl gText_Rom_20BD0A
gText_Rom_20BD0A: @ 0x0820BD0A
	.string "いやあああーっ!{EOS}"
	.if (. - gText_Rom_20BD0A) > 0x9
	.error "gText_Rom_20BD0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD0A) < 0x9
	.space 0x9 - (. - gText_Rom_20BD0A)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:456 MossdeepCity_Gym_Text_KathleenPostBattle
	.globl gText_Rom_20BD13
gText_Rom_20BD13: @ 0x0820BD13
	.string "あなたの げんきが うつるわ\nはやく いっちゃいなさいよ!{EOS}"
	.if (. - gText_Rom_20BD13) > 0x1e
	.error "gText_Rom_20BD13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD13) < 0x1e
	.space 0x1e - (. - gText_Rom_20BD13)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:459 MossdeepCity_Gym_Text_CliffordIntro (+1 aliases)
	.globl gText_Rom_20BD31
gText_Rom_20BD31: @ 0x0820BD31
	.string "としより だからと いって\nあまく みて もらっては こまりますよ{EOS}"
	.if (. - gText_Rom_20BD31) > 0x22
	.error "gText_Rom_20BD31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD31) < 0x22
	.space 0x22 - (. - gText_Rom_20BD31)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:462 MossdeepCity_Gym_Text_CliffordDefeat (+1 aliases)
	.globl gText_Rom_20BD53
gText_Rom_20BD53: @ 0x0820BD53
	.string "あふれる わかさを かんじる!{EOS}"
	.if (. - gText_Rom_20BD53) > 0x10
	.error "gText_Rom_20BD53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD53) < 0x10
	.space 0x10 - (. - gText_Rom_20BD53)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:465 MossdeepCity_Gym_Text_CliffordPostBattle
	.globl gText_Rom_20BD63
gText_Rom_20BD63: @ 0x0820BD63
	.string "この ジムの リーダーも そりゃもう!\nわかくて げんき はつらつ ですぞ{EOS}"
	.if (. - gText_Rom_20BD63) > 0x26
	.error "gText_Rom_20BD63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BD63) < 0x26
	.space 0x26 - (. - gText_Rom_20BD63)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:468 MossdeepCity_Gym_Text_MaceyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20BD89
gText_Rom_20BD89: @ 0x0820BD89
	.string "まだよ\nまだ ジムリーダーには あわせないわよ!{EOS}"
	.if (. - gText_Rom_20BD89) != 0x19
	.error "gText_Rom_20BD89 must retain its original byte length"
	.endif
	.globl gText_Rom_20BD9E
	.set gText_Rom_20BD9E, gText_Rom_20BD89 + 0x15
	@ data/maps/MossdeepCity_Gym/scripts.inc:471 MossdeepCity_Gym_Text_MaceyDefeat (+1 aliases)
	.globl gText_Rom_20BDA2
gText_Rom_20BDA2: @ 0x0820BDA2
	.string "ちょっと! なんなの その つよさ!{EOS}"
	.if (. - gText_Rom_20BDA2) > 0x13
	.error "gText_Rom_20BDA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BDA2) < 0x13
	.space 0x13 - (. - gText_Rom_20BDA2)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:474 MossdeepCity_Gym_Text_MaceyPostBattle
	.globl gText_Rom_20BDB5
gText_Rom_20BDB5: @ 0x0820BDB5
	.string "フン あんたは つよいけど\nエスパーむき では ないわ!\lなんだか たたかいかたが がさつ だもん!{EOS}"
	.if (. - gText_Rom_20BDB5) > 0x33
	.error "gText_Rom_20BDB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BDB5) < 0x33
	.space 0x33 - (. - gText_Rom_20BDB5)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:477 MossdeepCity_Gym_Text_NicholasIntro (+1 aliases)
	.globl gText_Rom_20BDE8
gText_Rom_20BDE8: @ 0x0820BDE8
	.string "うぉーっし! おれの\nスーパーポケモンしょうぶつよいパワー を\lうけて みろーっ!{EOS}"
	.if (. - gText_Rom_20BDE8) > 0x2a
	.error "gText_Rom_20BDE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BDE8) < 0x2a
	.space 0x2a - (. - gText_Rom_20BDE8)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:480 MossdeepCity_Gym_Text_NicholasDefeat (+1 aliases)
	.globl gText_Rom_20BE12
gText_Rom_20BE12: @ 0x0820BE12
	.string "やられたあああ!{EOS}"
	.if (. - gText_Rom_20BE12) > 0x9
	.error "gText_Rom_20BE12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BE12) < 0x9
	.space 0x9 - (. - gText_Rom_20BE12)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:483 MossdeepCity_Gym_Text_NicholasPostBattle
	.globl gText_Rom_20BE1B
gText_Rom_20BE1B: @ 0x0820BE1B
	.string "よし! つぎは\nスペシャルポケモンまけないパワー でも\lかいはつ するかな?{EOS}"
	.if (. - gText_Rom_20BE1B) > 0x27
	.error "gText_Rom_20BE1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BE1B) < 0x27
	.space 0x27 - (. - gText_Rom_20BE1B)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:486 MossdeepCity_Gym_Text_TateAndLizaIntro (+1 aliases)
	.globl gText_Rom_20BE42
gText_Rom_20BE42: @ 0x0820BE42
	.string "フウ『へへへ…… ジムリーダーが\pラン『ふふふ…… ジムリーダーが\pフウ『ふたりも いるんで おどろいた?\nラン『ふたりも いるんで おどろいた?\pフウ『ぼくたち ふたご!\nラン『あたしたち ふたご!\pフウ『なにも ことばに しなくても\nラン『おたがいの かんがえて いることが\pフウ『あたまの なかに うかぶから\nラン『つうじあうことが できるのヨ!\pフウ『そんな ぼくたちの コンビネーション\nラン『きみに やぶることが できる?{EOS}"
	.if (. - gText_Rom_20BE42) > 0xda
	.error "gText_Rom_20BE42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BE42) < 0xda
	.space 0xda - (. - gText_Rom_20BE42)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:489 MossdeepCity_Gym_Text_TateAndLizaDefeat (+1 aliases)
	.globl gText_Rom_20BF1C
gText_Rom_20BF1C: @ 0x0820BF1C
	.string "フウ『ぼっ ぼくたちの\nラン『コンビネーションが……!\pフウ『やぶれた からには しかたない\nラン『まけを みとめて これを あげるヨ!{EOS}"
	.if (. - gText_Rom_20BF1C) > 0x45
	.error "gText_Rom_20BF1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BF1C) < 0x45
	.space 0x45 - (. - gText_Rom_20BF1C)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:492 MossdeepCity_Gym_Text_ReceivedMindBadge
	.globl gText_Rom_20BF61
gText_Rom_20BF61: @ 0x0820BF61
	.string "{PLAYER}は フウと ランから\nマインドバッジを もらった!{EOS}"
	.if (. - gText_Rom_20BF61) > 0x1c
	.error "gText_Rom_20BF61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BF61) < 0x1c
	.space 0x1c - (. - gText_Rom_20BF61)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:495 MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis
	.globl gText_Rom_20BF7D
gText_Rom_20BF7D: @ 0x0820BF7D
	.string "フウ『マインドバッジには ポケモンの\nとくこうと とくぼうを たかめる\lこうかが ひめられている!\pラン『それから ダイビング という\nひでんわざも つかえるように なるヨ!\pフウ『あと これも もっていきなよ!{EOS}"
	.if (. - gText_Rom_20BF7D) > 0x6b
	.error "gText_Rom_20BF7D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BF7D) < 0x6b
	.space 0x6b - (. - gText_Rom_20BF7D)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:498 MossdeepCity_Gym_Text_ExplainCalmMind
	.globl gText_Rom_20BFE8
gText_Rom_20BFE8: @ 0x0820BFE8
	.string "フウ『その わざマシン04には\nラン『めいそうが はいってるヨ!\pフウ『ポケモンの とくこうと\nラン『ポケモンの とくぼうを\pフウ『たかめてくれる わざ なんだ!\nラン『エスパーポケモンに ぴったりだヨ!\p…… …… ……{EOS}"
	.if (. - gText_Rom_20BFE8) > 0x70
	.error "gText_Rom_20BFE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20BFE8) < 0x70
	.space 0x70 - (. - gText_Rom_20BFE8)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:501 MossdeepCity_Gym_Text_RegisteredTateAndLiza
	.globl gText_Rom_20C058
gText_Rom_20C058: @ 0x0820C058
	.string "ジムリーダー フウとランを\nポケナビに とうろく した!{EOS}"
	.if (. - gText_Rom_20C058) > 0x1d
	.error "gText_Rom_20C058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C058) < 0x1d
	.space 0x1d - (. - gText_Rom_20C058)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:504 MossdeepCity_Gym_Text_TateAndLizaPostBattle
	.globl gText_Rom_20C075
gText_Rom_20C075: @ 0x0820C075
	.string "フウ『きょうだいの きずな より\nきみと ポケモンとの きずなの ほうが\lはるかに つよかった みたいだね……\pラン『あなたなら もっと つよくなれる!\nたたかった あたしたちには わかるわ!{EOS}"
	.if (. - gText_Rom_20C075) > 0x61
	.error "gText_Rom_20C075 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C075) < 0x61
	.space 0x61 - (. - gText_Rom_20C075)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:507 MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons (+1 aliases)
	.globl gText_Rom_20C0D6
gText_Rom_20C0D6: @ 0x0820C0D6
	.string "フウ『へへへ…… ジムリーダーが\pラン『ふたりも いるんで おどろいた?\pフウ『あら? たたかえる ポケモンが\nラン『いっぴき しか いないヨ!\pフウ『それでは たたかえないね!\nラン『しょうぶを たのしみたいから\lもっと ポケモン つれてきてヨ!{EOS}"
	.if (. - gText_Rom_20C0D6) > 0x7d
	.error "gText_Rom_20C0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C0D6) < 0x7d
	.space 0x7d - (. - gText_Rom_20C0D6)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:510 MossdeepCity_Gym_Text_GymStatue
	.globl gText_Rom_20C153
gText_Rom_20C153: @ 0x0820C153
	.string "トクサネシティ ポケモンジム{EOS}"
	.if (. - gText_Rom_20C153) > 0xf
	.error "gText_Rom_20C153 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C153) < 0xf
	.space 0xf - (. - gText_Rom_20C153)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:513 MossdeepCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_20C162
gText_Rom_20C162: @ 0x0820C162
	.string "トクサネシティ ポケモンジム\pフウ ラン にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - gText_Rom_20C162) > 0x24
	.error "gText_Rom_20C162 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C162) < 0x24
	.space 0x24 - (. - gText_Rom_20C162)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:516 MossdeepCity_Gym_Text_TateAndLizaPreRematch (+1 aliases)
	.globl gText_Rom_20C186
gText_Rom_20C186: @ 0x0820C186
	.string "フウ『ポケモンは……\nラン『ポケモンは……\pフウ『くみあわせを かえると\nラン『たたかいかたも かわるよね\pフウ『でも ぼくは……\nラン『でも あたしは……\pフウ『いつでも ランと いっしょ!\nラン『いつでも フウと いっしょ!\pフウ『ぼくたちの コンビネーション\nラン『なんどでも みせて あげるわ!{EOS}"
	.if (. - gText_Rom_20C186) > 0x98
	.error "gText_Rom_20C186 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C186) < 0x98
	.space 0x98 - (. - gText_Rom_20C186)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:519 MossdeepCity_Gym_Text_TateAndLizaRematchDefeat (+1 aliases)
	.globl gText_Rom_20C21E
gText_Rom_20C21E: @ 0x0820C21E
	.string "フウ『きみと ポケモンって\nラン『まるで きょうだい みたい!{EOS}"
	.if (. - gText_Rom_20C21E) > 0x20
	.error "gText_Rom_20C21E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C21E) < 0x20
	.space 0x20 - (. - gText_Rom_20C21E)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:522 MossdeepCity_Gym_Text_TateAndLizaPostRematch
	.globl gText_Rom_20C23E
gText_Rom_20C23E: @ 0x0820C23E
	.string "フウ『なんど たおされたって\nまた たちなおって みせるからね!\pラン『だって あたしたち ふたり\nちからを あわせて がんばれるもの!{EOS}"
	.if (. - gText_Rom_20C23E) > 0x45
	.error "gText_Rom_20C23E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C23E) < 0x45
	.space 0x45 - (. - gText_Rom_20C23E)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:525 MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_20C283
gText_Rom_20C283: @ 0x0820C283
	.string "フウ『また ぼくたちと……\nラン『また あたしたちと……\pフウ『しょうぶを しに きてくれたんだね\nラン『しょうぶを しに きてくれたんだね\pフウ『でも……\nラン『あなた たたかえる ポケモンを\pフウ『1ひきしか もって いないよ!\nラン『1ひきしか もって いないわ!\pフウ『できれば 2ひき いじょうの\nラン『ポケモンを もって また きてね!{EOS}"
	.if (. - gText_Rom_20C283) > 0xaf
	.error "gText_Rom_20C283 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C283) < 0xaf
	.space 0xaf - (. - gText_Rom_20C283)
	.endif
	@ analyzed canonical ROM range 0x0820C332-0x0820C36B
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C332: @ 0x0820C332
	.byte 0x00
.globl EventScript_JP_0820C333
EventScript_JP_0820C333: @ 0x0820C333
	lock
	faceplayer
	bufferleadmonspeciesname 0x00
	loadword 0x00, gText_Rom_20C36C
	callstd 0x04
	specialvar_ 0x800D, 0x0115
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C359
	loadword 0x00, gText_Rom_20C37B
	callstd 0x04
	release
	end
EventScript_0820C359: @ 0x0820C359
EventScript_JP_0820C359: @ 0x0820C359
	loadword 0x00, gText_Rom_20C39B
	callstd 0x04
	release
	end
.globl EventScript_JP_0820C363
EventScript_JP_0820C363: @ 0x0820C363
	loadword 0x00, gText_Rom_20C3B0
	callstd 0x02
	end

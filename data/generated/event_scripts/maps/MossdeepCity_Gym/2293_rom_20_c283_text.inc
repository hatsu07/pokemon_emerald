	@ data/maps/MossdeepCity_Gym/scripts.inc:372 MossdeepCity_Gym_Text_GymGuideAdvice
	.globl MossdeepCity_Gym_Text_GymGuideAdvice
MossdeepCity_Gym_Text_GymGuideAdvice: @ 0x0820B83E
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pこのジムの ジムリーダーは\nエスパータイプの ポケモンつかい!\pかくとうタイプや どくタイプの\nポケモンで いどむと\lものすごい ダメージを くらうぞ!\pしかも ばつぐんの\nコンビネーションで せめてくる!\pだから きみも かつために ポケモンとの\nきずなを きばって みせて やれ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_GymGuideAdvice) > 0xab
	.error "MossdeepCity_Gym_Text_GymGuideAdvice may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_GymGuideAdvice) < 0xab
	.space 0xab - (. - MossdeepCity_Gym_Text_GymGuideAdvice)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:375 MossdeepCity_Gym_Text_GymGuidePostVictory
	.globl MossdeepCity_Gym_Text_GymGuidePostVictory
MossdeepCity_Gym_Text_GymGuidePostVictory: @ 0x0820B8E9
	.string "こりゃあ たまげた!!\nきみは すごか トレーナーだ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_GymGuidePostVictory) > 0x1c
	.error "MossdeepCity_Gym_Text_GymGuidePostVictory may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_GymGuidePostVictory) < 0x1c
	.space 0x1c - (. - MossdeepCity_Gym_Text_GymGuidePostVictory)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:378 MossdeepCity_Gym_Text_PrestonIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_PrestonIntro
MossdeepCity_Gym_Text_PrestonIntro: @ 0x0820B905
	.string "しょうぶは こころの つよさで きまる\nこころ よわき ものは かてない!{EOS}"
	.if (. - MossdeepCity_Gym_Text_PrestonIntro) > 0x26
	.error "MossdeepCity_Gym_Text_PrestonIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_PrestonIntro) < 0x26
	.space 0x26 - (. - MossdeepCity_Gym_Text_PrestonIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:381 MossdeepCity_Gym_Text_PrestonDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_PrestonDefeat
MossdeepCity_Gym_Text_PrestonDefeat: @ 0x0820B92B
	.string "まけたか!\nオレも きたえ なおさねばっ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_PrestonDefeat) > 0x16
	.error "MossdeepCity_Gym_Text_PrestonDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_PrestonDefeat) < 0x16
	.space 0x16 - (. - MossdeepCity_Gym_Text_PrestonDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:384 MossdeepCity_Gym_Text_PrestonPostBattle
	.globl MossdeepCity_Gym_Text_PrestonPostBattle
MossdeepCity_Gym_Text_PrestonPostBattle: @ 0x0820B941
	.string "まよった ほうが まける\nオレからの ちゅうこくだ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_PrestonPostBattle) > 0x1b
	.error "MossdeepCity_Gym_Text_PrestonPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_PrestonPostBattle) < 0x1b
	.space 0x1b - (. - MossdeepCity_Gym_Text_PrestonPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:387 MossdeepCity_Gym_Text_VirgilIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_VirgilIntro
MossdeepCity_Gym_Text_VirgilIntro: @ 0x0820B95C
	.string "キミの さいのうを みせて もらおうか!{EOS}"
	.if (. - MossdeepCity_Gym_Text_VirgilIntro) > 0x15
	.error "MossdeepCity_Gym_Text_VirgilIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_VirgilIntro) < 0x15
	.space 0x15 - (. - MossdeepCity_Gym_Text_VirgilIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:390 MossdeepCity_Gym_Text_VirgilDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_VirgilDefeat
MossdeepCity_Gym_Text_VirgilDefeat: @ 0x0820B971
	.string "すばらしい さいのうの もちぬしだ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_VirgilDefeat) > 0x13
	.error "MossdeepCity_Gym_Text_VirgilDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_VirgilDefeat) < 0x13
	.space 0x13 - (. - MossdeepCity_Gym_Text_VirgilDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:393 MossdeepCity_Gym_Text_VirgilPostBattle
	.globl MossdeepCity_Gym_Text_VirgilPostBattle
MossdeepCity_Gym_Text_VirgilPostBattle: @ 0x0820B984
	.string "よのなかに てんさいが いるならば\nここの ジムリーダーが そうだ……\pだが もしかすると キミの ほうが\nさいのうは うえかも しれない……{EOS}"
	.if (. - MossdeepCity_Gym_Text_VirgilPostBattle) > 0x48
	.error "MossdeepCity_Gym_Text_VirgilPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_VirgilPostBattle) < 0x48
	.space 0x48 - (. - MossdeepCity_Gym_Text_VirgilPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:396 MossdeepCity_Gym_Text_BlakeIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_BlakeIntro
MossdeepCity_Gym_Text_BlakeIntro: @ 0x0820B9CC
	.string "ふふふ……\nねんりきで モンスターボールを\lくうちゅうに うかせて みせよう……\pうおおぉぉぉぉぉ……!\p…… …… ……\n…… …… ……\pちょうしの わるい ときも ある……{EOS}"
	.if (. - MossdeepCity_Gym_Text_BlakeIntro) > 0x5a
	.error "MossdeepCity_Gym_Text_BlakeIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_BlakeIntro) < 0x5a
	.space 0x5a - (. - MossdeepCity_Gym_Text_BlakeIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:399 MossdeepCity_Gym_Text_BlakeDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_BlakeDefeat
MossdeepCity_Gym_Text_BlakeDefeat: @ 0x0820BA26
	.string "ポケモン しょうぶも\nちょうし わりーっ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_BlakeDefeat) > 0x16
	.error "MossdeepCity_Gym_Text_BlakeDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_BlakeDefeat) < 0x16
	.space 0x16 - (. - MossdeepCity_Gym_Text_BlakeDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:402 MossdeepCity_Gym_Text_BlakePostBattle
	.globl MossdeepCity_Gym_Text_BlakePostBattle
MossdeepCity_Gym_Text_BlakePostBattle: @ 0x0820BA3C
	.string "モンスターボールは おおきすぎた\nこの わたぼこり なら ぜったいに……\pふううううううっ……!\p…… …… ……\n…… …… ……\pちがうぞ!\nはないきで とばして なんか いないぞ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_BlakePostBattle) > 0x5e
	.error "MossdeepCity_Gym_Text_BlakePostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_BlakePostBattle) < 0x5e
	.space 0x5e - (. - MossdeepCity_Gym_Text_BlakePostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:405 MossdeepCity_Gym_Text_HannahIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_HannahIntro
MossdeepCity_Gym_Text_HannahIntro: @ 0x0820BA9A
	.string "あなたが アタシに まけた としても\nおちこまない ことね!\pあなたが よわい わけじゃ なくて\nアタシが つよすぎる からよ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_HannahIntro) > 0x41
	.error "MossdeepCity_Gym_Text_HannahIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_HannahIntro) < 0x41
	.space 0x41 - (. - MossdeepCity_Gym_Text_HannahIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:408 MossdeepCity_Gym_Text_HannahDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_HannahDefeat
MossdeepCity_Gym_Text_HannahDefeat: @ 0x0820BADB
	.string "あなたは さらに つよすぎた!{EOS}"
	.if (. - MossdeepCity_Gym_Text_HannahDefeat) > 0x10
	.error "MossdeepCity_Gym_Text_HannahDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_HannahDefeat) < 0x10
	.space 0x10 - (. - MossdeepCity_Gym_Text_HannahDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:411 MossdeepCity_Gym_Text_HannahPostBattle
	.globl MossdeepCity_Gym_Text_HannahPostBattle
MossdeepCity_Gym_Text_HannahPostBattle: @ 0x0820BAEB
	.string "まけたから って クヨクヨ しないわ\nもっと しゅぎょう すれば いいんだもの!\pまえむきな ところが アタシの とりえ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_HannahPostBattle) > 0x3e
	.error "MossdeepCity_Gym_Text_HannahPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_HannahPostBattle) < 0x3e
	.space 0x3e - (. - MossdeepCity_Gym_Text_HannahPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:414 MossdeepCity_Gym_Text_SamanthaIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_SamanthaIntro
MossdeepCity_Gym_Text_SamanthaIntro: @ 0x0820BB29
	.string "みえる……\nあなたの みらいが みえる……\pわたくしに かてたら\nあなたの みらいを おしえて あげる!{EOS}"
	.if (. - MossdeepCity_Gym_Text_SamanthaIntro) > 0x35
	.error "MossdeepCity_Gym_Text_SamanthaIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SamanthaIntro) < 0x35
	.space 0x35 - (. - MossdeepCity_Gym_Text_SamanthaIntro)
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
	.globl MossdeepCity_Gym_Text_SamanthaPostBattle
MossdeepCity_Gym_Text_SamanthaPostBattle: @ 0x0820BB68
	.string "あなたと ジムリーダーさまの しょうぶ……\nものすごく はげしい てんかい……\pけっかは……\nわたくしの くちからは いえない……!{EOS}"
	.if (. - MossdeepCity_Gym_Text_SamanthaPostBattle) > 0x43
	.error "MossdeepCity_Gym_Text_SamanthaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SamanthaPostBattle) < 0x43
	.space 0x43 - (. - MossdeepCity_Gym_Text_SamanthaPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:423 MossdeepCity_Gym_Text_MauraIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_MauraIntro
MossdeepCity_Gym_Text_MauraIntro: @ 0x0820BBAB
	.string "あなたが これまで あゆんできた みちのり\nあなたが けいけん してきた ことがら\pすべてを ぶつけて きなさい!{EOS}"
	.if (. - MossdeepCity_Gym_Text_MauraIntro) > 0x3a
	.error "MossdeepCity_Gym_Text_MauraIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_MauraIntro) < 0x3a
	.space 0x3a - (. - MossdeepCity_Gym_Text_MauraIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:426 MossdeepCity_Gym_Text_MauraDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_MauraDefeat
MossdeepCity_Gym_Text_MauraDefeat: @ 0x0820BBE5
	.string "すばらしい みちのり だわ……!{EOS}"
	.if (. - MossdeepCity_Gym_Text_MauraDefeat) > 0x11
	.error "MossdeepCity_Gym_Text_MauraDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_MauraDefeat) < 0x11
	.space 0x11 - (. - MossdeepCity_Gym_Text_MauraDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:429 MossdeepCity_Gym_Text_MauraPostBattle
	.globl MossdeepCity_Gym_Text_MauraPostBattle
MossdeepCity_Gym_Text_MauraPostBattle: @ 0x0820BBF6
	.string "がんばった ものには あかるい みらいが\nなまけた ものには ぜつぼうの あしたが\pいんがおうほう……\nすべては じぶんに はねかえる ものよ……{EOS}"
	.if (. - MossdeepCity_Gym_Text_MauraPostBattle) > 0x4a
	.error "MossdeepCity_Gym_Text_MauraPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_MauraPostBattle) < 0x4a
	.space 0x4a - (. - MossdeepCity_Gym_Text_MauraPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:432 MossdeepCity_Gym_Text_SylviaIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_SylviaIntro
MossdeepCity_Gym_Text_SylviaIntro: @ 0x0820BC40
	.string "いのちを けずって でも\nこの しょうぶ かってみせるわ……!{EOS}"
	.if (. - MossdeepCity_Gym_Text_SylviaIntro) > 0x20
	.error "MossdeepCity_Gym_Text_SylviaIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SylviaIntro) < 0x20
	.space 0x20 - (. - MossdeepCity_Gym_Text_SylviaIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:435 MossdeepCity_Gym_Text_SylviaDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_SylviaDefeat
MossdeepCity_Gym_Text_SylviaDefeat: @ 0x0820BC60
	.string "あなたは\nおそろしい ことを……{EOS}"
	.if (. - MossdeepCity_Gym_Text_SylviaDefeat) > 0x11
	.error "MossdeepCity_Gym_Text_SylviaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SylviaDefeat) < 0x11
	.space 0x11 - (. - MossdeepCity_Gym_Text_SylviaDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:438 MossdeepCity_Gym_Text_SylviaPostBattle
	.globl MossdeepCity_Gym_Text_SylviaPostBattle
MossdeepCity_Gym_Text_SylviaPostBattle: @ 0x0820BC71
	.string "あたしに かったわね……\nなにが おきても しらないわよ……!{EOS}"
	.if (. - MossdeepCity_Gym_Text_SylviaPostBattle) > 0x20
	.error "MossdeepCity_Gym_Text_SylviaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_SylviaPostBattle) < 0x20
	.space 0x20 - (. - MossdeepCity_Gym_Text_SylviaPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:441 MossdeepCity_Gym_Text_NateIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_NateIntro
MossdeepCity_Gym_Text_NateIntro: @ 0x0820BC91
	.string "ほっほっほ\pエスパータイプの てごわさを\nあなたに おしえて さしあげましょう{EOS}"
	.if (. - MossdeepCity_Gym_Text_NateIntro) > 0x28
	.error "MossdeepCity_Gym_Text_NateIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_NateIntro) < 0x28
	.space 0x28 - (. - MossdeepCity_Gym_Text_NateIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:444 MossdeepCity_Gym_Text_NateDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_NateDefeat
MossdeepCity_Gym_Text_NateDefeat: @ 0x0820BCB9
	.string "こ これは これは!\nすばらしい たたかいかた ですな{EOS}"
	.if (. - MossdeepCity_Gym_Text_NateDefeat) > 0x1c
	.error "MossdeepCity_Gym_Text_NateDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_NateDefeat) < 0x1c
	.space 0x1c - (. - MossdeepCity_Gym_Text_NateDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:447 MossdeepCity_Gym_Text_NatePostBattle
	.globl MossdeepCity_Gym_Text_NatePostBattle
MossdeepCity_Gym_Text_NatePostBattle: @ 0x0820BCD5
	.string "わ わたくしは どんなに まけても\nとりみだしは しませんから{EOS}"
	.if (. - MossdeepCity_Gym_Text_NatePostBattle) > 0x20
	.error "MossdeepCity_Gym_Text_NatePostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_NatePostBattle) < 0x20
	.space 0x20 - (. - MossdeepCity_Gym_Text_NatePostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:450 MossdeepCity_Gym_Text_KathleenIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_KathleenIntro
MossdeepCity_Gym_Text_KathleenIntro: @ 0x0820BCF5
	.string "おそろしいめに あわせて やろうかーっ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_KathleenIntro) > 0x15
	.error "MossdeepCity_Gym_Text_KathleenIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_KathleenIntro) < 0x15
	.space 0x15 - (. - MossdeepCity_Gym_Text_KathleenIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:453 MossdeepCity_Gym_Text_KathleenDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_KathleenDefeat
MossdeepCity_Gym_Text_KathleenDefeat: @ 0x0820BD0A
	.string "いやあああーっ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_KathleenDefeat) > 0x9
	.error "MossdeepCity_Gym_Text_KathleenDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_KathleenDefeat) < 0x9
	.space 0x9 - (. - MossdeepCity_Gym_Text_KathleenDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:456 MossdeepCity_Gym_Text_KathleenPostBattle
	.globl MossdeepCity_Gym_Text_KathleenPostBattle
MossdeepCity_Gym_Text_KathleenPostBattle: @ 0x0820BD13
	.string "あなたの げんきが うつるわ\nはやく いっちゃいなさいよ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_KathleenPostBattle) > 0x1e
	.error "MossdeepCity_Gym_Text_KathleenPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_KathleenPostBattle) < 0x1e
	.space 0x1e - (. - MossdeepCity_Gym_Text_KathleenPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:459 MossdeepCity_Gym_Text_CliffordIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_CliffordIntro
MossdeepCity_Gym_Text_CliffordIntro: @ 0x0820BD31
	.string "としより だからと いって\nあまく みて もらっては こまりますよ{EOS}"
	.if (. - MossdeepCity_Gym_Text_CliffordIntro) > 0x22
	.error "MossdeepCity_Gym_Text_CliffordIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_CliffordIntro) < 0x22
	.space 0x22 - (. - MossdeepCity_Gym_Text_CliffordIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:462 MossdeepCity_Gym_Text_CliffordDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_CliffordDefeat
MossdeepCity_Gym_Text_CliffordDefeat: @ 0x0820BD53
	.string "あふれる わかさを かんじる!{EOS}"
	.if (. - MossdeepCity_Gym_Text_CliffordDefeat) > 0x10
	.error "MossdeepCity_Gym_Text_CliffordDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_CliffordDefeat) < 0x10
	.space 0x10 - (. - MossdeepCity_Gym_Text_CliffordDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:465 MossdeepCity_Gym_Text_CliffordPostBattle
	.globl MossdeepCity_Gym_Text_CliffordPostBattle
MossdeepCity_Gym_Text_CliffordPostBattle: @ 0x0820BD63
	.string "この ジムの リーダーも そりゃもう!\nわかくて げんき はつらつ ですぞ{EOS}"
	.if (. - MossdeepCity_Gym_Text_CliffordPostBattle) > 0x26
	.error "MossdeepCity_Gym_Text_CliffordPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_CliffordPostBattle) < 0x26
	.space 0x26 - (. - MossdeepCity_Gym_Text_CliffordPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:468 MossdeepCity_Gym_Text_MaceyIntro (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl MossdeepCity_Gym_Text_MaceyIntro
MossdeepCity_Gym_Text_MaceyIntro: @ 0x0820BD89
	.string "まだよ\nまだ ジムリーダーには あわせないわよ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_MaceyIntro) != 0x19
	.error "MossdeepCity_Gym_Text_MaceyIntro must retain its original byte length"
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:471 MossdeepCity_Gym_Text_MaceyDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_MaceyDefeat
MossdeepCity_Gym_Text_MaceyDefeat: @ 0x0820BDA2
	.string "ちょっと! なんなの その つよさ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_MaceyDefeat) > 0x13
	.error "MossdeepCity_Gym_Text_MaceyDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_MaceyDefeat) < 0x13
	.space 0x13 - (. - MossdeepCity_Gym_Text_MaceyDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:474 MossdeepCity_Gym_Text_MaceyPostBattle
	.globl MossdeepCity_Gym_Text_MaceyPostBattle
MossdeepCity_Gym_Text_MaceyPostBattle: @ 0x0820BDB5
	.string "フン あんたは つよいけど\nエスパーむき では ないわ!\lなんだか たたかいかたが がさつ だもん!{EOS}"
	.if (. - MossdeepCity_Gym_Text_MaceyPostBattle) > 0x33
	.error "MossdeepCity_Gym_Text_MaceyPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_MaceyPostBattle) < 0x33
	.space 0x33 - (. - MossdeepCity_Gym_Text_MaceyPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:477 MossdeepCity_Gym_Text_NicholasIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_NicholasIntro
MossdeepCity_Gym_Text_NicholasIntro: @ 0x0820BDE8
	.string "うぉーっし! おれの\nスーパーポケモンしょうぶつよいパワー を\lうけて みろーっ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_NicholasIntro) > 0x2a
	.error "MossdeepCity_Gym_Text_NicholasIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_NicholasIntro) < 0x2a
	.space 0x2a - (. - MossdeepCity_Gym_Text_NicholasIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:480 MossdeepCity_Gym_Text_NicholasDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_NicholasDefeat
MossdeepCity_Gym_Text_NicholasDefeat: @ 0x0820BE12
	.string "やられたあああ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_NicholasDefeat) > 0x9
	.error "MossdeepCity_Gym_Text_NicholasDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_NicholasDefeat) < 0x9
	.space 0x9 - (. - MossdeepCity_Gym_Text_NicholasDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:483 MossdeepCity_Gym_Text_NicholasPostBattle
	.globl MossdeepCity_Gym_Text_NicholasPostBattle
MossdeepCity_Gym_Text_NicholasPostBattle: @ 0x0820BE1B
	.string "よし! つぎは\nスペシャルポケモンまけないパワー でも\lかいはつ するかな?{EOS}"
	.if (. - MossdeepCity_Gym_Text_NicholasPostBattle) > 0x27
	.error "MossdeepCity_Gym_Text_NicholasPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_NicholasPostBattle) < 0x27
	.space 0x27 - (. - MossdeepCity_Gym_Text_NicholasPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:486 MossdeepCity_Gym_Text_TateAndLizaIntro (+1 aliases)
	.globl MossdeepCity_Gym_Text_TateAndLizaIntro
MossdeepCity_Gym_Text_TateAndLizaIntro: @ 0x0820BE42
	.string "フウ『へへへ…… ジムリーダーが\pラン『ふふふ…… ジムリーダーが\pフウ『ふたりも いるんで おどろいた?\nラン『ふたりも いるんで おどろいた?\pフウ『ぼくたち ふたご!\nラン『あたしたち ふたご!\pフウ『なにも ことばに しなくても\nラン『おたがいの かんがえて いることが\pフウ『あたまの なかに うかぶから\nラン『つうじあうことが できるのヨ!\pフウ『そんな ぼくたちの コンビネーション\nラン『きみに やぶることが できる?{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaIntro) > 0xda
	.error "MossdeepCity_Gym_Text_TateAndLizaIntro may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaIntro) < 0xda
	.space 0xda - (. - MossdeepCity_Gym_Text_TateAndLizaIntro)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:489 MossdeepCity_Gym_Text_TateAndLizaDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_TateAndLizaDefeat
MossdeepCity_Gym_Text_TateAndLizaDefeat: @ 0x0820BF1C
	.string "フウ『ぼっ ぼくたちの\nラン『コンビネーションが……!\pフウ『やぶれた からには しかたない\nラン『まけを みとめて これを あげるヨ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaDefeat) > 0x45
	.error "MossdeepCity_Gym_Text_TateAndLizaDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaDefeat) < 0x45
	.space 0x45 - (. - MossdeepCity_Gym_Text_TateAndLizaDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:492 MossdeepCity_Gym_Text_ReceivedMindBadge
	.globl MossdeepCity_Gym_Text_ReceivedMindBadge
MossdeepCity_Gym_Text_ReceivedMindBadge: @ 0x0820BF61
	.string "{PLAYER}は フウと ランから\nマインドバッジを もらった!{EOS}"
	.if (. - MossdeepCity_Gym_Text_ReceivedMindBadge) > 0x1c
	.error "MossdeepCity_Gym_Text_ReceivedMindBadge may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_ReceivedMindBadge) < 0x1c
	.space 0x1c - (. - MossdeepCity_Gym_Text_ReceivedMindBadge)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:495 MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis
	.globl MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis
MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis: @ 0x0820BF7D
	.string "フウ『マインドバッジには ポケモンの\nとくこうと とくぼうを たかめる\lこうかが ひめられている!\pラン『それから ダイビング という\nひでんわざも つかえるように なるヨ!\pフウ『あと これも もっていきなよ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis) > 0x6b
	.error "MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis) < 0x6b
	.space 0x6b - (. - MossdeepCity_Gym_Text_ExplainMindBadgeTakeThis)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:498 MossdeepCity_Gym_Text_ExplainCalmMind
	.globl MossdeepCity_Gym_Text_ExplainCalmMind
MossdeepCity_Gym_Text_ExplainCalmMind: @ 0x0820BFE8
	.string "フウ『その わざマシン04には\nラン『めいそうが はいってるヨ!\pフウ『ポケモンの とくこうと\nラン『ポケモンの とくぼうを\pフウ『たかめてくれる わざ なんだ!\nラン『エスパーポケモンに ぴったりだヨ!\p…… …… ……{EOS}"
	.if (. - MossdeepCity_Gym_Text_ExplainCalmMind) > 0x70
	.error "MossdeepCity_Gym_Text_ExplainCalmMind may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_ExplainCalmMind) < 0x70
	.space 0x70 - (. - MossdeepCity_Gym_Text_ExplainCalmMind)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:501 MossdeepCity_Gym_Text_RegisteredTateAndLiza
	.globl MossdeepCity_Gym_Text_RegisteredTateAndLiza
MossdeepCity_Gym_Text_RegisteredTateAndLiza: @ 0x0820C058
	.string "ジムリーダー フウとランを\nポケナビに とうろく した!{EOS}"
	.if (. - MossdeepCity_Gym_Text_RegisteredTateAndLiza) > 0x1d
	.error "MossdeepCity_Gym_Text_RegisteredTateAndLiza may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_RegisteredTateAndLiza) < 0x1d
	.space 0x1d - (. - MossdeepCity_Gym_Text_RegisteredTateAndLiza)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:504 MossdeepCity_Gym_Text_TateAndLizaPostBattle
	.globl MossdeepCity_Gym_Text_TateAndLizaPostBattle
MossdeepCity_Gym_Text_TateAndLizaPostBattle: @ 0x0820C075
	.string "フウ『きょうだいの きずな より\nきみと ポケモンとの きずなの ほうが\lはるかに つよかった みたいだね……\pラン『あなたなら もっと つよくなれる!\nたたかった あたしたちには わかるわ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaPostBattle) > 0x61
	.error "MossdeepCity_Gym_Text_TateAndLizaPostBattle may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaPostBattle) < 0x61
	.space 0x61 - (. - MossdeepCity_Gym_Text_TateAndLizaPostBattle)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:507 MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons (+1 aliases)
	.globl MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons
MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons: @ 0x0820C0D6
	.string "フウ『へへへ…… ジムリーダーが\pラン『ふたりも いるんで おどろいた?\pフウ『あら? たたかえる ポケモンが\nラン『いっぴき しか いないヨ!\pフウ『それでは たたかえないね!\nラン『しょうぶを たのしみたいから\lもっと ポケモン つれてきてヨ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons) > 0x7d
	.error "MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons) < 0x7d
	.space 0x7d - (. - MossdeepCity_Gym_Text_TateAndLizaNeedTwoMons)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:510 MossdeepCity_Gym_Text_GymStatue
	.globl MossdeepCity_Gym_Text_GymStatue
MossdeepCity_Gym_Text_GymStatue: @ 0x0820C153
	.string "トクサネシティ ポケモンジム{EOS}"
	.if (. - MossdeepCity_Gym_Text_GymStatue) > 0xf
	.error "MossdeepCity_Gym_Text_GymStatue may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_GymStatue) < 0xf
	.space 0xf - (. - MossdeepCity_Gym_Text_GymStatue)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:513 MossdeepCity_Gym_Text_GymStatueCertified
	.globl MossdeepCity_Gym_Text_GymStatueCertified
MossdeepCity_Gym_Text_GymStatueCertified: @ 0x0820C162
	.string "トクサネシティ ポケモンジム\pフウ ラン にんてい トレーナー!\n{PLAYER}{EOS}"
	.if (. - MossdeepCity_Gym_Text_GymStatueCertified) > 0x24
	.error "MossdeepCity_Gym_Text_GymStatueCertified may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_GymStatueCertified) < 0x24
	.space 0x24 - (. - MossdeepCity_Gym_Text_GymStatueCertified)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:516 MossdeepCity_Gym_Text_TateAndLizaPreRematch (+1 aliases)
	.globl MossdeepCity_Gym_Text_TateAndLizaPreRematch
MossdeepCity_Gym_Text_TateAndLizaPreRematch: @ 0x0820C186
	.string "フウ『ポケモンは……\nラン『ポケモンは……\pフウ『くみあわせを かえると\nラン『たたかいかたも かわるよね\pフウ『でも ぼくは……\nラン『でも あたしは……\pフウ『いつでも ランと いっしょ!\nラン『いつでも フウと いっしょ!\pフウ『ぼくたちの コンビネーション\nラン『なんどでも みせて あげるわ!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaPreRematch) > 0x98
	.error "MossdeepCity_Gym_Text_TateAndLizaPreRematch may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaPreRematch) < 0x98
	.space 0x98 - (. - MossdeepCity_Gym_Text_TateAndLizaPreRematch)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:519 MossdeepCity_Gym_Text_TateAndLizaRematchDefeat (+1 aliases)
	.globl MossdeepCity_Gym_Text_TateAndLizaRematchDefeat
MossdeepCity_Gym_Text_TateAndLizaRematchDefeat: @ 0x0820C21E
	.string "フウ『きみと ポケモンって\nラン『まるで きょうだい みたい!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaRematchDefeat) > 0x20
	.error "MossdeepCity_Gym_Text_TateAndLizaRematchDefeat may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaRematchDefeat) < 0x20
	.space 0x20 - (. - MossdeepCity_Gym_Text_TateAndLizaRematchDefeat)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:522 MossdeepCity_Gym_Text_TateAndLizaPostRematch
	.globl MossdeepCity_Gym_Text_TateAndLizaPostRematch
MossdeepCity_Gym_Text_TateAndLizaPostRematch: @ 0x0820C23E
	.string "フウ『なんど たおされたって\nまた たちなおって みせるからね!\pラン『だって あたしたち ふたり\nちからを あわせて がんばれるもの!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaPostRematch) > 0x45
	.error "MossdeepCity_Gym_Text_TateAndLizaPostRematch may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaPostRematch) < 0x45
	.space 0x45 - (. - MossdeepCity_Gym_Text_TateAndLizaPostRematch)
	.endif
	@ data/maps/MossdeepCity_Gym/scripts.inc:525 MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons (+1 aliases)
	.globl MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons
MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons: @ 0x0820C283
	.string "フウ『また ぼくたちと……\nラン『また あたしたちと……\pフウ『しょうぶを しに きてくれたんだね\nラン『しょうぶを しに きてくれたんだね\pフウ『でも……\nラン『あなた たたかえる ポケモンを\pフウ『1ひきしか もって いないよ!\nラン『1ひきしか もって いないわ!\pフウ『できれば 2ひき いじょうの\nラン『ポケモンを もって また きてね!{EOS}"
	.if (. - MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons) > 0xaf
	.error "MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons may not grow beyond its original slot"
	.endif
	.if (. - MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons) < 0xaf
	.space 0xaf - (. - MossdeepCity_Gym_Text_TateAndLizaRematchNeedTwoMons)
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
	loadword 0x00, MossdeepCity_House1_Text_HmmYourPokemon
	callstd 0x04
	specialvar_ 0x800D, 0x0115
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0820C359
	loadword 0x00, MossdeepCity_House1_Text_ItLikesXPokeblocks
	callstd 0x04
	release
	end
EventScript_0820C359: @ 0x0820C359
EventScript_JP_0820C359: @ 0x0820C359
	loadword 0x00, MossdeepCity_House1_Text_DoesntLikeOrDislikePokeblocks
	callstd 0x04
	release
	end
.globl EventScript_JP_0820C363
EventScript_JP_0820C363: @ 0x0820C363
	loadword 0x00, MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes
	callstd 0x02
	end

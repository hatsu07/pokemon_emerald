	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:308 PlayersHouse_1F_Text_OhComeQuickly
	.globl gText_Rom_1EFB12
gText_Rom_1EFB12: @ 0x081EFB12
	.string "ママ『……あ! {PLAYER}! {PLAYER}!\nはやく こっちに いらっしゃい!$"
	.if (. - gText_Rom_1EFB12) > 0x21
	.error "gText_Rom_1EFB12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB12) < 0x21
	.space 0x21 - (. - gText_Rom_1EFB12)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:312 PlayersHouse_1F_Text_MaybeDadWillBeOn
	.globl gText_Rom_1EFB33
gText_Rom_1EFB33: @ 0x081EFB33
	.string "ママ『トウカの ジムが うつってるわ\nパパが でるかもよ!!$"
	.if (. - gText_Rom_1EFB33) > 0x1f
	.error "gText_Rom_1EFB33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB33) < 0x1f
	.space 0x1f - (. - gText_Rom_1EFB33)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:316 PlayersHouse_1F_Text_ItsOverWeMissedHim
	.globl gText_Rom_1EFB52
gText_Rom_1EFB52: @ 0x081EFB52
	.string "ママ『あらら…… おわっちゃった\pパパが でてたみたい だったのに ざんねんね$"
	.if (. - gText_Rom_1EFB52) > 0x28
	.error "gText_Rom_1EFB52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB52) < 0x28
	.space 0x28 - (. - gText_Rom_1EFB52)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:320 PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor
	.globl gText_Rom_1EFB7A
gText_Rom_1EFB7A: @ 0x081EFB7A
	.string "……あ そうそう! このまち には\nオダマキはかせ っていう\lパパの おともだちが いるの\pはかせの いえは おとなり だから\nきちんと あいさつ してくると いいわ!$"
	.if (. - gText_Rom_1EFB7A) > 0x55
	.error "gText_Rom_1EFB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFB7A) < 0x55
	.space 0x55 - (. - gText_Rom_1EFB7A)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:327 PlayersHouse_1F_Text_SeeYouHoney
	.globl gText_Rom_1EFBCF
gText_Rom_1EFBCF: @ 0x081EFBCF
	.string "ママ『いってらっしゃい!$"
	.if (. - gText_Rom_1EFBCF) > 0xd
	.error "gText_Rom_1EFBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFBCF) < 0xd
	.space 0xd - (. - gText_Rom_1EFBCF)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:330 PlayersHouse_1F_Text_DidYouMeetProfBirch
	.globl gText_Rom_1EFBDC
gText_Rom_1EFBDC: @ 0x081EFBDC
	.string "ママ『オダマキはかせ には あえたの?$"
	.if (. - gText_Rom_1EFBDC) > 0x14
	.error "gText_Rom_1EFBDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFBDC) < 0x14
	.space 0x14 - (. - gText_Rom_1EFBDC)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:333 PlayersHouse_1F_Text_YouShouldRestABit
	.globl gText_Rom_1EFBF0
gText_Rom_1EFBF0: @ 0x081EFBF0
	.string "ママ『どう? {PLAYER}\nすこし つかれたんじゃ ないかしら?\pおうちで やすんでいくと いいわ$"
	.if (. - gText_Rom_1EFBF0) > 0x2e
	.error "gText_Rom_1EFBF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFBF0) < 0x2e
	.space 0x2e - (. - gText_Rom_1EFBF0)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:338 PlayersHouse_1F_Text_TakeCareHoney
	.globl gText_Rom_1EFC1E
gText_Rom_1EFC1E: @ 0x081EFC1E
	.string "ママ『じゃあ きをつけてね!$"
	.if (. - gText_Rom_1EFC1E) > 0xf
	.error "gText_Rom_1EFC1E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC1E) < 0xf
	.space 0xf - (. - gText_Rom_1EFC1E)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:341 PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom
	.globl gText_Rom_1EFC2D
gText_Rom_1EFC2D: @ 0x081EFC2D
	.string "ママ『あら\nその バッジ パパから もらったの!?\pじゃあ ママも これ あげようかな$"
	.if (. - gText_Rom_1EFC2D) > 0x2c
	.error "gText_Rom_1EFC2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC2D) < 0x2c
	.space 0x2c - (. - gText_Rom_1EFC2D)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:346 PlayersHouse_1F_Text_DontPushYourselfTooHard
	.globl gText_Rom_1EFC59
gText_Rom_1EFC59: @ 0x081EFC59
	.string "あんまり むりは しないでね\nなにか あれば かえって くればいいから\pじゃあ がんばってね!$"
	.if (. - gText_Rom_1EFC59) > 0x30
	.error "gText_Rom_1EFC59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC59) < 0x30
	.space 0x30 - (. - gText_Rom_1EFC59)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:351 PlayersHouse_1F_Text_IsThatAPokenav
	.globl gText_Rom_1EFC89
gText_Rom_1EFC89: @ 0x081EFC89
	.string "ママ『なあに それ? ポケナビ?\nデボンの ひとから いただいたの?\pじゃあ ママの ことも\nとうろくして もらっちゃおうかな!\p…… …… ……$"
	.if (. - gText_Rom_1EFC89) > 0x4a
	.error "gText_Rom_1EFC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC89) < 0x4a
	.space 0x4a - (. - gText_Rom_1EFC89)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:358 PlayersHouse_1F_Text_RegisteredMom
	.globl gText_Rom_1EFCD3
gText_Rom_1EFCD3: @ 0x081EFCD3
	.string "ママを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_1EFCD3) > 0x13
	.error "gText_Rom_1EFCD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCD3) < 0x13
	.space 0x13 - (. - gText_Rom_1EFCD3)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:362 PlayersHouse_1F_Text_Vigoroth1
	.globl gText_Rom_1EFCE6
gText_Rom_1EFCE6: @ 0x081EFCE6
	.string "ふぎーっ$"
	.if (. - gText_Rom_1EFCE6) > 0x5
	.error "gText_Rom_1EFCE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCE6) < 0x5
	.space 0x5 - (. - gText_Rom_1EFCE6)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:365 PlayersHouse_1F_Text_Vigoroth2
	.globl gText_Rom_1EFCEB
gText_Rom_1EFCEB: @ 0x081EFCEB
	.string "ふごっ ふご ふご……$"
	.if (. - gText_Rom_1EFCEB) > 0xc
	.error "gText_Rom_1EFCEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCEB) < 0xc
	.space 0xc - (. - gText_Rom_1EFCEB)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:368 PlayersHouse_1F_Text_ReportFromPetalburgGym
	.globl gText_Rom_1EFCF7
gText_Rom_1EFCF7: @ 0x081EFCF7
	.string "インタビュアー『…… いじょう\nトウカジムの まえ からでした!$"
	.if (. - gText_Rom_1EFCF7) > 0x21
	.error "gText_Rom_1EFCF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFCF7) < 0x21
	.space 0x21 - (. - gText_Rom_1EFCF7)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:372 PlayersHouse_1F_Text_TheresAMovieOnTV
	.globl gText_Rom_1EFD18
gText_Rom_1EFD18: @ 0x081EFD18
	.string "テレビで えいがを やってる!\pおとなと こどもが ふたり ならんで\nおおきな ピアノの うえで おどってる!\pもう いかなきゃ!$"
	.if (. - gText_Rom_1EFD18) > 0x42
	.error "gText_Rom_1EFD18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFD18) < 0x42
	.space 0x42 - (. - gText_Rom_1EFD18)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:378 PlayersHouse_1F_Text_RunningShoesManual
	.globl gText_Rom_1EFD5A
gText_Rom_1EFD5A: @ 0x081EFD5A
	.string "ランニングシューズの\nせつめいしょが ある!\p「ランニングシューズは\n Bボタンを おすことで いままでよりも\l はやく はしれるように なります!\p ランニングシューズを はいて\n おもいっきり そとを はしろう!」$"
	.if (. - gText_Rom_1EFD5A) > 0x6e
	.error "gText_Rom_1EFD5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFD5A) < 0x6e
	.space 0x6e - (. - gText_Rom_1EFD5A)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:387 PlayersHouse_1F_Text_TicketFromBrineyCameForYou
	.globl gText_Rom_1EFDC8
gText_Rom_1EFDC8: @ 0x081EFDC8
	.string "パパ『ん?\n{PLAYER}じゃ ないか!\pひさしぶりに かおを みたが\nどこか たくましくなった……\lそんな かんじ だな\p……おっと そうだった\nハギさん という ひとから\lおまえあてに なにか とどいていたぞ!$"
	.if (. - gText_Rom_1EFDC8) > 0x67
	.error "gText_Rom_1EFDC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFDC8) < 0x67
	.space 0x67 - (. - gText_Rom_1EFDC8)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:397 PlayersHouse_1F_Text_PortsInSlateportLilycove
	.globl gText_Rom_1EFE2F
gText_Rom_1EFE2F: @ 0x081EFE2F
	.string "パパ『ふねのチケットか……\pふねに のるなら カイナか ミナモに\nふねのりばが あったよな$"
	.if (. - gText_Rom_1EFE2F) > 0x2e
	.error "gText_Rom_1EFE2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFE2F) < 0x2e
	.space 0x2e - (. - gText_Rom_1EFE2F)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:402 PlayersHouse_1F_Text_BetterGetBackToGym
	.globl gText_Rom_1EFE5D
gText_Rom_1EFE5D: @ 0x081EFE5D
	.string "では わたしは\nトウカの ジムに もどるよ\pママ\nいえのこと たのんだよ$"
	.if (. - gText_Rom_1EFE5D) > 0x25
	.error "gText_Rom_1EFE5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFE5D) < 0x25
	.space 0x25 - (. - gText_Rom_1EFE5D)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:408 PlayersHouse_1F_Text_DadShouldStayLonger
	.globl gText_Rom_1EFE82
gText_Rom_1EFE82: @ 0x081EFE82
	.string "ママ『パパったら\nひさしぶりに かえって きたのに\lポケモンの はなし ばっかり!\pもっと ゆっくり すれば いいのにね!$"
	.if (. - gText_Rom_1EFE82) > 0x3e
	.error "gText_Rom_1EFE82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFE82) < 0x3e
	.space 0x3e - (. - gText_Rom_1EFE82)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:414 PlayersHouse_1F_Text_IsThatABreakingStory
	.globl gText_Rom_1EFEC0
gText_Rom_1EFEC0: @ 0x081EFEC0
	.string "ママ『なにかの ニュース かしら?$"
	.if (. - gText_Rom_1EFEC0) > 0x12
	.error "gText_Rom_1EFEC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFEC0) < 0x12
	.space 0x12 - (. - gText_Rom_1EFEC0)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:417 PlayersHouse_1F_Text_LatiEmergencyNewsFlash
	.globl gText_Rom_1EFED2
gText_Rom_1EFED2: @ 0x081EFED2
	.string "りんじ ニュース です\pホウエンちほうの かくちで\n……いろの ポケモンが とんでいた\lという じょうほうが よせられています\pいまのところ しょうたいは\nわかって いない ようです……\pでは ひきつづき\nえいがを おたのしみ ください$"
	.if (. - gText_Rom_1EFED2) > 0x77
	.error "gText_Rom_1EFED2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFED2) < 0x77
	.space 0x77 - (. - gText_Rom_1EFED2)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:427 PlayersHouse_1F_Text_WhatColorDidTheySay
	.globl gText_Rom_1EFF49
gText_Rom_1EFF49: @ 0x081EFF49
	.string "ママ『ねえ ねえ {PLAYER}\nいまの ニュース\lなにいろの ポケモンって いってたの?$"
	.if (. - gText_Rom_1EFF49) > 0x29
	.error "gText_Rom_1EFF49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFF49) < 0x29
	.space 0x29 - (. - gText_Rom_1EFF49)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:432 PlayersHouse_1F_Text_StillUnknownPokemon
	.globl gText_Rom_1EFF72
gText_Rom_1EFF72: @ 0x081EFF72
	.string "ママ『へえー まだまだ\nしられていない ポケモンは いるのねえ$"
	.if (. - gText_Rom_1EFF72) > 0x20
	.error "gText_Rom_1EFF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFF72) < 0x20
	.space 0x20 - (. - gText_Rom_1EFF72)
	.endif
	.incbin "baserom.gba", 0x1eff92, 0x285

	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:272 PlayersHouse_2F_Text_ClockIsStopped
	.globl gText_Rom_1F0217
gText_Rom_1F0217: @ 0x081F0217
	.string "かべの とけいが とまっている……\pじかんを あわせて おかなくちゃ!$"
	.if (. - gText_Rom_1F0217) > 0x24
	.error "gText_Rom_1F0217 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0217) < 0x24
	.space 0x24 - (. - gText_Rom_1F0217)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:276 PlayersHouse_2F_Text_HowDoYouLikeYourRoom
	.globl gText_Rom_1F023B
gText_Rom_1F023B: @ 0x081F023B
	.string "ママ『{PLAYER}\nどう あたらしい へやは?\pうん! きれいに かたづいてるわね!\nしたも もう かたづいたわ\lポケモンが いると ほんとうに らくね!\pそうだ! つくえの うえの ものも\nだいじょうぶか みておいてね$"
	.if (. - gText_Rom_1F023B) > 0x6b
	.error "gText_Rom_1F023B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F023B) < 0x6b
	.space 0x6b - (. - gText_Rom_1F023B)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:285 PlayersHouse_2F_Text_Notebook
	.globl gText_Rom_1F02A6
gText_Rom_1F02A6: @ 0x081F02A6
	.string "{PLAYER}は ノートを ひらいた!\pたんけんの こころえ その1\nスタートボタンで メニューが ひらく!\pたんけんの こころえ その2\nポケモン レポートで きろく できる!\pあとは まっしろ だ……$"
	.if (. - gText_Rom_1F02A6) > 0x62
	.error "gText_Rom_1F02A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F02A6) < 0x62
	.space 0x62 - (. - gText_Rom_1F02A6)
	.endif

	@ field-script:0x24311E FieldScriptText_1F0308
	.globl gText_Rom_1F0308
gText_Rom_1F0308: @ 0x081F0308
	.string "{0xFD}{0x01}は　ホウエンちほうの\nタウンマップに　かおを　ちかづけた！$"
	.if (. - gText_Rom_1F0308) > 0x20
	.error "gText_Rom_1F0308 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0308) < 0x20
	.space 0x20 - (. - gText_Rom_1F0308)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:297 PlayersHouse_2F_Text_ItsAGameCube
	.globl gText_Rom_1F0328
gText_Rom_1F0328: @ 0x081F0328
	.string "ゲームキューブが ある!\pコントローラの かわりに\nゲームボーイ アドバンスが つながってる!$"
	.if (. - gText_Rom_1F0328) > 0x30
	.error "gText_Rom_1F0328 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0328) < 0x30
	.space 0x30 - (. - gText_Rom_1F0328)
	.endif
	.incbin "baserom.gba", 0x1f0358, 0x320

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:319 RivalsHouse_1F_Text_OhYoureTheNewNeighbor
	.globl gText_Rom_1F0678
gText_Rom_1F0678: @ 0x081F0678
	.string "えーと どなた かしら?\p…… …… ……\n…… …… ……\pそうか あなたが おとなりに\nひっこしてきた {PLAYER}{KUN} ね!\pうちにも あなたと おなじ としごろの\n{STR_VAR_1}が いるのよ!\p「あたらしい おともだちが できる!」\nなんて いって\lとっても たのしみに してたの!$"
	.if (. - gText_Rom_1F0678) > 0x89
	.error "gText_Rom_1F0678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0678) < 0x89
	.space 0x89 - (. - gText_Rom_1F0678)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:331 RivalsHouse_1F_Text_LikeChildLikeFather
	.globl gText_Rom_1F0701
gText_Rom_1F0701: @ 0x081F0701
	.string "おとうさんも あのこに まけず\nポケモンに むちゅう なのよ\pけんきゅうじょに いなければ\nきっと どこかの くさむらにでも\lもぐりに いってるんじゃ ないかしら……$"
	.if (. - gText_Rom_1F0701) > 0x54
	.error "gText_Rom_1F0701 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0701) < 0x54
	.space 0x54 - (. - gText_Rom_1F0701)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:338 RivalsHouse_1F_Text_TooBusyToNoticeVisit
	.globl gText_Rom_1F0755
gText_Rom_1F0755: @ 0x081F0755
	.string "{RIVAL}ったら せっかく {PLAYER}{KUN}が\nごあいさつに きてくれたって いうのに\lポケモンに むちゅう みたいね$"
	.if (. - gText_Rom_1F0755) > 0x35
	.error "gText_Rom_1F0755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0755) < 0x35
	.space 0x35 - (. - gText_Rom_1F0755)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:343 RivalsHouse_1F_Text_WentOutToRoute103
	.globl gText_Rom_1F078A
gText_Rom_1F078A: @ 0x081F078A
	.string "あら {RIVAL} だったら\nついさっき 103ばんどうろの ほうへ\lでかけて いったわよ!\pまったく おとうさんに にて\nおうちで じっとして いられないのよね$"
	.if (. - gText_Rom_1F078A) > 0x4e
	.error "gText_Rom_1F078A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F078A) < 0x4e
	.space 0x4e - (. - gText_Rom_1F078A)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:350 RivalsHouse_1F_Text_ShouldGoHomeEverySoOften
	.globl gText_Rom_1F07D8
gText_Rom_1F07D8: @ 0x081F07D8
	.string "ポケモンと いっしょに\nぼうけん するのも いいけど\pたまには おうちに かえって おかあさんに\nげんきな かおを みせてあげてね!\pこころの なかでは きっと\n{PLAYER}{KUN}の こと\lしんぱい してる はずだから……$"
	.if (. - gText_Rom_1F07D8) > 0x6b
	.error "gText_Rom_1F07D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F07D8) < 0x6b
	.space 0x6b - (. - gText_Rom_1F07D8)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:359 RivalsHouse_1F_Text_MayWhoAreYou
	.globl gText_Rom_1F0843
gText_Rom_1F0843: @ 0x081F0843
	.string "あら? あなた……だれ?\p…… …… ……\n…… …… ……\pあなたが {PLAYER}{KUN}……\nそうか きょう ひっこし だったんだ……\pあ あたし ハルカ!\nよ よろしくね\pあたし……\nせかいじゅうの ポケモンと\lともだちに なるのが ゆめ なの……\pで でね\nおとうさん…… オダマキはかせ から\l{PLAYER}{KUN}の おはなし きいて\pあたし {PLAYER}{KUN} とも\nおともだちに なれたらなあ……\lなんて おもってたの……\pあっ あたしったら {PLAYER}{KUN}と\nはじめて おはなし してるのに\lなに いってんだろ……\pてへへ……\pあっ いけない!\pあたし おとうさんの おてつだいで\nやせいの ポケモン\lつかまえに いくところ だったんだ!\pでかける したくを するから\n{PLAYER}{KUN} また あとでね!$"
	.if (. - gText_Rom_1F0843) > 0x151
	.error "gText_Rom_1F0843 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0843) < 0x151
	.space 0x151 - (. - gText_Rom_1F0843)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:387 RivalsHouse_1F_Text_BrendanWhoAreYou (+1 aliases)
	.globl gText_Rom_1F0994
gText_Rom_1F0994: @ 0x081F0994
	.string "おまえ……\pだれ?\pあっ おまえが となりに\nひっこして きた {PLAYER}か……\pふうん\nおんなのこ だったんだ……\pとうさん…… オダマキはかせ から\nとなりに ひっこして くるのは\lジムリーダーの こども って きいてたから\lかってに おとこ だと おもってたよ\pオレは ユウキ\nまあ おとなりさんに なったことだし\lこれから よろしくな\pおや? {PLAYER}は\nポケモン もってないのか?\pよかったら オレが\nつかまえてきて やろうか?\pって わすれてた……\pオレ とうさんの てつだいで\nやせいの ポケモン\lつかまえに いく ところ だったんだ\pでかける したくを するから\n{PLAYER} また こんどな!$"
	.if (. - gText_Rom_1F0994) > 0x129
	.error "gText_Rom_1F0994 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0994) < 0x129
	.space 0x129 - (. - gText_Rom_1F0994)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:412 RivalsHouse_1F_Text_DoYouHavePokemon
	.globl gText_Rom_1F0ABD
gText_Rom_1F0ABD: @ 0x081F0ABD
	.string "わーい おとなりさんだ!\p{STR_VAR_1}は もう\nじぶんの ポケモン もってるの?$"
	.if (. - gText_Rom_1F0ABD) > 0x25
	.error "gText_Rom_1F0ABD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0ABD) < 0x25
	.space 0x25 - (. - gText_Rom_1F0ABD)
	.endif
	.incbin "baserom.gba", 0x1f0ae2, 0x306

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:310 RivalsHouse_2F_Text_MayWhoAreYou
	.globl gText_Rom_1F0DE8
gText_Rom_1F0DE8: @ 0x081F0DE8
	.string "えっ……!?\nあなた だれ…… なの?\p…… …… ……\n…… …… ……\pあなたが {PLAYER}{KUN}……\nそうか きょう ひっこし だったんだ……\pあ あたし ハルカ!\nよ よろしくね\pあたし……\nせかいじゅうの ポケモンと\lともだちに なるのが ゆめ なの……\pで でね\nおとうさん…… オダマキはかせ から\l{PLAYER}{KUN}の おはなし きいて\pあたし {PLAYER}{KUN} とも\nおともだちに なれたらなあ……\lなんて おもってたの……\pあっ あたしったら {PLAYER}{KUN}と\nはじめて おはなし してるのに\lなに いってんだろ……\pてへへ……\pあっ いけない!\pあたし おとうさんの おてつだいで\nやせいの ポケモン\lつかまえに いくところ だったんだ!\pでかける したくを するから\n{PLAYER}{KUN} また あとでね!$"
	.if (. - gText_Rom_1F0DE8) > 0x158
	.error "gText_Rom_1F0DE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0DE8) < 0x158
	.space 0x158 - (. - gText_Rom_1F0DE8)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:340 RivalsHouse_2F_Text_MayGettingReady
	.globl gText_Rom_1F0F40
gText_Rom_1F0F40: @ 0x081F0F40
	.string "ポケモンは たいりょく まんたん!\nどうぐも これで よし……と!$"
	.if (. - gText_Rom_1F0F40) > 0x22
	.error "gText_Rom_1F0F40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0F40) < 0x22
	.space 0x22 - (. - gText_Rom_1F0F40)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_1F/scripts.inc:387 RivalsHouse_1F_Text_BrendanWhoAreYou (+1 aliases)
	.globl gText_Rom_1F0F62
gText_Rom_1F0F62: @ 0x081F0F62
	.string "おまえ……\pだれ?\pあっ おまえが となりに\nひっこして きた {PLAYER}か……\pふうん\nおんなのこ だったんだ……\pとうさん…… オダマキはかせ から\nとなりに ひっこして くるのは\lジムリーダーの こども って きいてたから\lかってに おとこ だと おもってたよ\pオレは ユウキ\nまあ おとなりさんに なったことだし\lこれから よろしくな\pおや? {PLAYER}は\nポケモン もってないのか?\pよかったら オレが\nつかまえてきて やろうか?\pって わすれてた……\pオレ とうさんの てつだいで\nやせいの ポケモン\lつかまえに いく ところ だったんだ\pでかける したくを するから\n{PLAYER} また こんどな!$"
	.if (. - gText_Rom_1F0F62) > 0x129
	.error "gText_Rom_1F0F62 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0F62) < 0x129
	.space 0x129 - (. - gText_Rom_1F0F62)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:369 RivalsHouse_2F_Text_BrendanGettingReady
	.globl gText_Rom_1F108B
gText_Rom_1F108B: @ 0x081F108B
	.string "ポケモンは たいりょく まんたん\nどうぐも これで だいじょうぶ ……か$"
	.if (. - gText_Rom_1F108B) > 0x25
	.error "gText_Rom_1F108B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F108B) < 0x25
	.space 0x25 - (. - gText_Rom_1F108B)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:373 RivalsHouse_2F_Text_ItsRivalsPokeBall
	.globl gText_Rom_1F10B0
gText_Rom_1F10B0: @ 0x081F10B0
	.string "{RIVAL}の モンスターボールだ!\pこのままに しておこう……$"
	.if (. - gText_Rom_1F10B0) > 0x1d
	.error "gText_Rom_1F10B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F10B0) < 0x1d
	.space 0x1d - (. - gText_Rom_1F10B0)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:377 RivalsHouse_2F_Text_MayJustCheckingMyPokedex
	.globl gText_Rom_1F10CD
gText_Rom_1F10CD: @ 0x081F10CD
	.string "ハルカ『{PLAYER}{KUN}!\pあたし いまね\nポケモンずかんを ながめていたの\pみつけた だけで\nつかまえていない ポケモンや\lしんか しそうな ポケモン\lまだまだ いっぱい いるんだよね\pこんどは どこに\nポケモン つかまえに いこうかな?$"
	.if (. - gText_Rom_1F10CD) > 0x75
	.error "gText_Rom_1F10CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F10CD) < 0x75
	.space 0x75 - (. - gText_Rom_1F10CD)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:388 RivalsHouse_2F_Text_MayWhereShouldIGoNext
	.globl gText_Rom_1F1142
gText_Rom_1F1142: @ 0x081F1142
	.string "ハルカ『こんどは どこに\nポケモン つかまえに いこうかな?\pいった さきで また\n{PLAYER}{KUN}と であったりして!?$"
	.if (. - gText_Rom_1F1142) > 0x3a
	.error "gText_Rom_1F1142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F1142) < 0x3a
	.space 0x3a - (. - gText_Rom_1F1142)
	.endif

	@ field-script:0x1F0D86 FieldScriptText_1F117C
	.globl gText_Rom_1F117C
gText_Rom_1F117C: @ 0x081F117C
	.string "ユウキ『{0xFD}{0x01}か\pいま　ポケモンずかんを\nチェック　してたんだ\pまだまだ　つかまえていない\nポケモンも　いるけど\lかなり　いい　かんじだろ？\pこうして　ずかんを　みていると\nまた　ぼうけんに　いきたくなるな$"
	.if (. - gText_Rom_1F117C) > 0x67
	.error "gText_Rom_1F117C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F117C) < 0x67
	.space 0x67 - (. - gText_Rom_1F117C)
	.endif

	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:404 RivalsHouse_2F_Text_BrendanWhereShouldIGoNext
	.globl gText_Rom_1F11E3
gText_Rom_1F11E3: @ 0x081F11E3
	.string "ユウキ『こんどは どこで\nポケモン つかまえるか なやむな……\pもし ポケモン つかまえているとき\n{PLAYER}と であったら\lしょうぶ してやろうか?$"
	.if (. - gText_Rom_1F11E3) > 0x49
	.error "gText_Rom_1F11E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F11E3) < 0x49
	.space 0x49 - (. - gText_Rom_1F11E3)
	.endif
	.incbin "baserom.gba", 0x1f122c, 0x845
	.include "data/text/maps/birch_lab.inc"
	.globl gUnknown_8202410
gUnknown_8202410: @ 0x08202410
	.incbin "baserom.gba", 0x202410, 0x22

	@ data/maps/RustboroCity_Gym/scripts.inc:106 RustboroCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_202432
gText_Rom_202432: @ 0x08202432
	.string "げんき しとぉや!!\pいきなり だが きみぃ!\nチャンピオンを めざして みないか!\pぼくは トレーナー じゃないけど\nかつ ために ばっちり\lアドバイス できる!\pよし きまった! いっしょに\nポケモン チャンピオン めざそう!\pトレーナーの もくてき といえば\nジムバッジを あつめること だろう\lだが ジムリーダーは てごわい!\pそこで ぼくの でばん というわけだ!\nきみに ばっちり アドバイス するよ!\pここの ジムリーダー ツツジは\nいわタイプの ポケモンの つかいて!\pいわタイプは がんじょう だけど\nみずタイプや くさタイプの\lこうげきは にがて なんだよ!\pジムリーダーに かてたら\nまた ぼくに はなしかけて くれよ!\pじゃ きばってこォー!!$"
	.if (. - gText_Rom_202432) > 0x14f
	.error "gText_Rom_202432 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202432) < 0x14f
	.space 0x14f - (. - gText_Rom_202432)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:129 RustboroCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_202581
gText_Rom_202581: @ 0x08202581
	.string "うおォ! みごとな しょうり!!\nぼくの おうえんが よかったのか!?\pよし! きみの\nトレーナーカードを みたまえ!\pさっき てにいれた ストーンバッジが\nきちんと きろく されている だろう\pつまり……\pきみは チャンピオンへの かいだんを\nいっぽ のぼったんだ!\pごったましィー!!$"
	.if (. - gText_Rom_202581) > 0x91
	.error "gText_Rom_202581 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202581) < 0x91
	.space 0x91 - (. - gText_Rom_202581)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:141 RustboroCity_Gym_Text_JoshIntro (+1 aliases)
	.globl gText_Rom_202612
gText_Rom_202612: @ 0x08202612
	.string "ジム トレーナーを なめるなよ!\nじつりょくの ちがいを みせてやる!$"
	.if (. - gText_Rom_202612) > 0x24
	.error "gText_Rom_202612 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202612) < 0x24
	.space 0x24 - (. - gText_Rom_202612)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:145 RustboroCity_Gym_Text_JoshDefeat (+1 aliases)
	.globl gText_Rom_202636
gText_Rom_202636: @ 0x08202636
	.string "じつりょくが ちがいすぎた……!$"
	.if (. - gText_Rom_202636) > 0x11
	.error "gText_Rom_202636 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202636) < 0x11
	.space 0x11 - (. - gText_Rom_202636)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:148 RustboroCity_Gym_Text_JoshPostBattle
	.globl gText_Rom_202647
gText_Rom_202647: @ 0x08202647
	.string "いわタイプの おそろしさ\nまだまだ こんな ものじゃない!$"
	.if (. - gText_Rom_202647) > 0x1e
	.error "gText_Rom_202647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202647) < 0x1e
	.space 0x1e - (. - gText_Rom_202647)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:152 RustboroCity_Gym_Text_TommyIntro (+1 aliases)
	.globl gText_Rom_202665
gText_Rom_202665: @ 0x08202665
	.string "ボクに かてる じつりょくが ないと\nツツジさん には ぜったい かなわないよ!$"
	.if (. - gText_Rom_202665) > 0x29
	.error "gText_Rom_202665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202665) < 0x29
	.space 0x29 - (. - gText_Rom_202665)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:156 RustboroCity_Gym_Text_TommyDefeat (+1 aliases)
	.globl gText_Rom_20268E
gText_Rom_20268E: @ 0x0820268E
	.string "すごい じつりょくだ!$"
	.if (. - gText_Rom_20268E) > 0xc
	.error "gText_Rom_20268E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20268E) < 0xc
	.space 0xc - (. - gText_Rom_20268E)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:159 RustboroCity_Gym_Text_TommyPostBattle
	.globl gText_Rom_20269A
gText_Rom_20269A: @ 0x0820269A
	.string "ツツジさんは ボクの すうばい つよい!\nゆだん しない ほうが いいよ!$"
	.if (. - gText_Rom_20269A) > 0x26
	.error "gText_Rom_20269A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20269A) < 0x26
	.space 0x26 - (. - gText_Rom_20269A)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:163 RustboroCity_Gym_Text_MarcIntro (+1 aliases)
	.globl gText_Rom_2026C0
gText_Rom_2026C0: @ 0x082026C0
	.string "こんな まちなか でも\nいわタイプで おおあばれだ!$"
	.if (. - gText_Rom_2026C0) > 0x1b
	.error "gText_Rom_2026C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2026C0) < 0x1b
	.space 0x1b - (. - gText_Rom_2026C0)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:167 RustboroCity_Gym_Text_MarcDefeat (+1 aliases)
	.globl gText_Rom_2026DB
gText_Rom_2026DB: @ 0x082026DB
	.string "おおーっ!\nいきの いい ちょうせんしゃ だな!$"
	.if (. - gText_Rom_2026DB) > 0x19
	.error "gText_Rom_2026DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2026DB) < 0x19
	.space 0x19 - (. - gText_Rom_2026DB)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:171 RustboroCity_Gym_Text_MarcPostBattle
	.globl gText_Rom_2026F4
gText_Rom_2026F4: @ 0x082026F4
	.string "わかくして いわタイプに\nめを つける なんて\lうちの ジムリーダーは センスが いいぜ!$"
	.if (. - gText_Rom_2026F4) > 0x2e
	.error "gText_Rom_2026F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2026F4) < 0x2e
	.space 0x2e - (. - gText_Rom_2026F4)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:176 RustboroCity_Gym_Text_RoxanneIntro (+1 aliases)
	.globl gText_Rom_202722
gText_Rom_202722: @ 0x08202722
	.string "わたくし カナズミ ポケモンジム\nリーダーの ツツジ といいます\pトレーナーズ スクールで\nまなんだこと しょうぶに いかしたくて\lジムリーダーに なったの\pあなた どのような ポケモンで\nどんなふうに たたかうのか\lわたくしに おしえて くださるかしら?$"
	.if (. - gText_Rom_202722) > 0x81
	.error "gText_Rom_202722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202722) < 0x81
	.space 0x81 - (. - gText_Rom_202722)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:186 RustboroCity_Gym_Text_RoxanneDefeat (+1 aliases)
	.globl gText_Rom_2027A3
gText_Rom_2027A3: @ 0x082027A3
	.string "わたくし まけたのね……\pもっと おおくの ことを\nまなぶ ひつようが あるみたい……\pわかりましたわ\pポケモンリーグの きまりでは\nジムリーダーに かった トレーナーに\lこれを わたすことに なっています\pどうぞ ポケモンリーグ こうにんの\nストーンバッジ うけとって ください$"
	.if (. - gText_Rom_2027A3) > 0x8d
	.error "gText_Rom_2027A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2027A3) < 0x8d
	.space 0x8d - (. - gText_Rom_2027A3)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:197 RustboroCity_Gym_Text_ReceivedStoneBadge
	.globl gText_Rom_202830
gText_Rom_202830: @ 0x08202830
	.string "{PLAYER}は ツツジから\nストーンバッジを もらった!$"
	.if (. - gText_Rom_202830) > 0x19
	.error "gText_Rom_202830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202830) < 0x19
	.space 0x19 - (. - gText_Rom_202830)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:201 RustboroCity_Gym_Text_StoneBadgeInfoTakeThis
	.globl gText_Rom_202849
gText_Rom_202849: @ 0x08202849
	.string "ストーンバッジ には あなたの\nポケモンの こうげきりょくを\lたかめる こうかが あるの\pあと たたかっていない ときでも\nひでんわざの いあいぎり が\lつかえるようにも なるわ\pそれから……\nこれも もっていって ください$"
	.if (. - gText_Rom_202849) > 0x71
	.error "gText_Rom_202849 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202849) < 0x71
	.space 0x71 - (. - gText_Rom_202849)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:211 RustboroCity_Gym_Text_ExplainRockTomb
	.globl gText_Rom_2028BA
gText_Rom_2028BA: @ 0x082028BA
	.string "その わざマシン39の なかには\nがんせきふうじが はいっているわ\pいわを あいてに むかって おとして\nダメージを あたえる だけでなくて\lすばやさも さげる わざ なの\pちなみに\nわざマシンを つかえば ポケモンに\lいっしゅんで わざを おしえられるの\pただし つかいすて だから\nつかうときは よく かんがえてね$"
	.if (. - gText_Rom_2028BA) > 0xa0
	.error "gText_Rom_2028BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2028BA) < 0xa0
	.space 0xa0 - (. - gText_Rom_2028BA)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:223 RustboroCity_Gym_Text_RoxannePostBattle
	.globl gText_Rom_20295A
gText_Rom_20295A: @ 0x0820295A
	.string "それだけ つよいなら\nほかの ポケモンジムにも\lちょうせん したら どうかしら?\pおおくの トレーナーと\nしょうぶを することで\lさまざまなこと まなべるはずよ$"
	.if (. - gText_Rom_20295A) > 0x51
	.error "gText_Rom_20295A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20295A) < 0x51
	.space 0x51 - (. - gText_Rom_20295A)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:231 RustboroCity_Gym_Text_GymStatue
	.globl gText_Rom_2029AB
gText_Rom_2029AB: @ 0x082029AB
	.string "カナズミシティ ポケモンジム$"
	.if (. - gText_Rom_2029AB) > 0xf
	.error "gText_Rom_2029AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2029AB) < 0xf
	.space 0xf - (. - gText_Rom_2029AB)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:234 RustboroCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_2029BA
gText_Rom_2029BA: @ 0x082029BA
	.string "カナズミシティ ポケモンジム\pツツジ にんてい トレーナー!\n{PLAYER}$"
	.if (. - gText_Rom_2029BA) > 0x22
	.error "gText_Rom_2029BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2029BA) < 0x22
	.space 0x22 - (. - gText_Rom_2029BA)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:239 RustboroCity_Gym_Text_RoxanneRegisterCall
	.globl gText_Rom_2029DC
gText_Rom_2029DC: @ 0x082029DC
	.string "…… …… ……\n…… …… …… ピッ!\pツツジ『あっ {PLAYER}さん ですか?\nわたくし カナズミの ツツジです!\pトウキさんから ききましたよぉ\nあなた すごい いきおいで\lかちすすんで いるらしい ですね!\pこちらも まけっぱなしでは いられません\nもういちど ジムを きたえなおして\lいつかまた ちょうせんを うけますよ!\pそのひが くるのを\nどうぞ まっていて くださいね!\p…… …… ……\n…… …… …… ツー$"
	.if (. - gText_Rom_2029DC) > 0xd4
	.error "gText_Rom_2029DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2029DC) < 0xd4
	.space 0xd4 - (. - gText_Rom_2029DC)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:255 RustboroCity_Gym_Text_RegisteredRoxanne
	.globl gText_Rom_202AB0
gText_Rom_202AB0: @ 0x08202AB0
	.string "ジムリーダー ツツジを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_202AB0) > 0x1b
	.error "gText_Rom_202AB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202AB0) < 0x1b
	.space 0x1b - (. - gText_Rom_202AB0)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:259 RustboroCity_Gym_Text_RoxannePreRematch (+1 aliases)
	.globl gText_Rom_202ACB
gText_Rom_202ACB: @ 0x08202ACB
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\pさあ おてあわせ ねがいます!$"
	.if (. - gText_Rom_202ACB) > 0x5f
	.error "gText_Rom_202ACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202ACB) < 0x5f
	.space 0x5f - (. - gText_Rom_202ACB)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:267 RustboroCity_Gym_Text_RoxanneRematchDefeat (+1 aliases)
	.globl gText_Rom_202B2A
gText_Rom_202B2A: @ 0x08202B2A
	.string "くうぅ……\nまたしても わたくしの まけ……$"
	.if (. - gText_Rom_202B2A) > 0x17
	.error "gText_Rom_202B2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202B2A) < 0x17
	.space 0x17 - (. - gText_Rom_202B2A)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:271 RustboroCity_Gym_Text_RoxannePostRematch
	.globl gText_Rom_202B41
gText_Rom_202B41: @ 0x08202B41
	.string "ツツジ『まだまだ ポケモン しょうぶは\nまなぶことが たくさん あるのですね\pわたくし…… ポケモン しょうぶが\nますます すきに なりましたよ!$"
	.if (. - gText_Rom_202B41) > 0x4a
	.error "gText_Rom_202B41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202B41) < 0x4a
	.space 0x4a - (. - gText_Rom_202B41)
	.endif

	@ data/maps/RustboroCity_Gym/scripts.inc:277 RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_202B8B
gText_Rom_202B8B: @ 0x08202B8B
	.string "ツツジ『また おめにかかれましたね\nジムリーダーの ツツジ です\pあれから おたがいに\nいくつもの しょうぶを けいけんし\lどれほど つよく なれたのか……\p……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pどうぞ 2ひき いじょうの\nポケモンを もって きてください$"
	.if (. - gText_Rom_202B8B) > 0x8f
	.error "gText_Rom_202B8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202B8B) < 0x8f
	.space 0x8f - (. - gText_Rom_202B8B)
	.endif
	.incbin "baserom.gba", 0x202c1a, 0x20a

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:202 RustboroCity_PokemonSchool_Text_BlackboardListsStatusChanges
	.globl gText_Rom_202E24
gText_Rom_202E24: @ 0x08202E24
	.string "こくばんに\nポケモンが たたかってるときに おこる\lたいちょうの へんかに ついて かかれてる$"
	.if (. - gText_Rom_202E24) > 0x30
	.error "gText_Rom_202E24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E24) < 0x30
	.space 0x30 - (. - gText_Rom_202E24)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:205 RustboroCity_PokemonSchool_Text_ReadWhichTopic
	.globl gText_Rom_202E54
gText_Rom_202E54: @ 0x08202E54
	.string "どの こうもくを みますか?$"
	.if (. - gText_Rom_202E54) > 0xf
	.error "gText_Rom_202E54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E54) < 0xf
	.space 0xf - (. - gText_Rom_202E54)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:208 RustboroCity_PokemonSchool_Text_ExplainPoison
	.globl gText_Rom_202E63
gText_Rom_202E63: @ 0x08202E63
	.string "どくを うけると\nたいりょくが へっていきます\pせんとうのあとも どくは のこるので\nあるくたびに たいりょくが へります\lどくけしで なおしましょう$"
	.if (. - gText_Rom_202E63) > 0x4c
	.error "gText_Rom_202E63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202E63) < 0x4c
	.space 0x4c - (. - gText_Rom_202E63)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:211 RustboroCity_PokemonSchool_Text_ExplainParalysis
	.globl gText_Rom_202EAF
gText_Rom_202EAF: @ 0x08202EAF
	.string "まひすると すばやさが さがり\nときどき わざが だせなくなります\pたたかい おわっても まひした ままです\nまひなおしで なおしましょう$"
	.if (. - gText_Rom_202EAF) > 0x46
	.error "gText_Rom_202EAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202EAF) < 0x46
	.space 0x46 - (. - gText_Rom_202EAF)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:214 RustboroCity_PokemonSchool_Text_ExplainSleep
	.globl gText_Rom_202EF5
gText_Rom_202EF5: @ 0x08202EF5
	.string "ねむって しまうと\nその あいだ こうげき できません\pじぶんで めざめることも ありますが\nねむったまま せんとうが おわると\lずっと ねむっています\pねむけざましで おこして あげましょう$"
	.if (. - gText_Rom_202EF5) > 0x61
	.error "gText_Rom_202EF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202EF5) < 0x61
	.space 0x61 - (. - gText_Rom_202EF5)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:217 RustboroCity_PokemonSchool_Text_ExplainBurn
	.globl gText_Rom_202F56
gText_Rom_202F56: @ 0x08202F56
	.string "やけどは こうげきりょくが さがるだけでなく\nたいりょくも どんどん へっていきます\pせんとうが おわっても やけどの ままです\nやけどなおしで なおしましょう$"
	.if (. - gText_Rom_202F56) > 0x51
	.error "gText_Rom_202F56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202F56) < 0x51
	.space 0x51 - (. - gText_Rom_202F56)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:220 RustboroCity_PokemonSchool_Text_ExplainFreeze
	.globl gText_Rom_202FA7
gText_Rom_202FA7: @ 0x08202FA7
	.string "こおって しまうと なにも できなくなります\pたたかい おわっても こおりついた ままです\nこおりなおしで とかしましょう$"
	.if (. - gText_Rom_202FA7) > 0x3e
	.error "gText_Rom_202FA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202FA7) < 0x3e
	.space 0x3e - (. - gText_Rom_202FA7)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:223 RustboroCity_PokemonSchool_Text_StudentsWhoDontStudyGetQuickClaw
	.globl gText_Rom_202FE5
gText_Rom_202FE5: @ 0x08202FE5
	.string "べんきょうを しない せいとは\nわたくしの ツメの あかを\lせんじて のませるのです!\pきみが べんきょう する しないは\nこの どうぐを つかいこなせるか どうかで\lわかること でしょう!$"
	.if (. - gText_Rom_202FE5) > 0x60
	.error "gText_Rom_202FE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_202FE5) < 0x60
	.space 0x60 - (. - gText_Rom_202FE5)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:226 RustboroCity_PokemonSchool_Text_ExplainQuickClaw
	.globl gText_Rom_203045
gText_Rom_203045: @ 0x08203045
	.string "ポケモンに せんせいのツメを もたせると\nときどき ですが すばやくなって\lせんせい こうげきを するのです!\pこのように ポケモンに もたせる\nどうぐの こと だけでも\lべんきょう することは いっぱい なのです!$"
	.if (. - gText_Rom_203045) > 0x6d
	.error "gText_Rom_203045 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203045) < 0x6d
	.space 0x6d - (. - gText_Rom_203045)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:229 RustboroCity_PokemonSchool_Text_TradingRightNow
	.globl gText_Rom_2030B2
gText_Rom_2030B2: @ 0x082030B2
	.string "いま ともだちと\nポケモンを こうかん してるんだ!$"
	.if (. - gText_Rom_2030B2) > 0x1b
	.error "gText_Rom_2030B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2030B2) < 0x1b
	.space 0x1b - (. - gText_Rom_2030B2)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:232 RustboroCity_PokemonSchool_Text_AlwaysWantedSeedot
	.globl gText_Rom_2030CD
gText_Rom_2030CD: @ 0x082030CD
	.string "ほしかった タネボーちゃん が\nやっと てに はいるよ!$"
	.if (. - gText_Rom_2030CD) > 0x1d
	.error "gText_Rom_2030CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2030CD) < 0x1d
	.space 0x1d - (. - gText_Rom_2030CD)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:235 RustboroCity_PokemonSchool_Text_PokemontCantUseManMadeItems
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2030EA
gText_Rom_2030EA: @ 0x082030EA
	.string "ポケモンも どうぐ もてるけど\nキズぐすりとか どくけしとか\lひとが つくった どうぐは\lつかいかたが わからない みたい$"
	.if (. - gText_Rom_2030EA) != 0x3e
	.error "gText_Rom_2030EA must retain its original byte length"
	.endif
	.globl gText_Rom_203124
	.set gText_Rom_203124, gText_Rom_2030EA + 0x3a

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:238 RustboroCity_PokemonSchool_Text_ConfusedPokemonAttacksItself
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_203128
gText_Rom_203128: @ 0x08203128
	.string "ポケモンの わざで\nこんらん することが あるでしょ?\pこんらん すると たまに まちがえて\nじぶんを こうげき しちゃうの……\pでも いちどでも せんとうから はなれると\nもとに もどるわよ!$"
	.if (. - gText_Rom_203128) != 0x62
	.error "gText_Rom_203128 must retain its original byte length"
	.endif
	.globl gText_Rom_203186
	.set gText_Rom_203186, gText_Rom_203128 + 0x5e

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:241 RustboroCity_PokemonSchool_Text_PokemonHealItselfWithBerry
	.globl gText_Rom_20318A
gText_Rom_20318A: @ 0x0820318A
	.string "……ポケモンに きのみを もたせると\nじぶんで たいりょくを かいふくする\pポケモンが もてる どうぐは\nほかにも たくさん……\pノートを ちゃんと とるのは\nたいへんだなあ……$"
	.if (. - gText_Rom_20318A) > 0x5a
	.error "gText_Rom_20318A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20318A) < 0x5a
	.space 0x5a - (. - gText_Rom_20318A)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:244 RustboroCity_PokemonSchool_Text_StudentsNotes
	.globl gText_Rom_2031E4
gText_Rom_2031E4: @ 0x082031E4
	.string "このこの ノートだ……\pポケモンは モンスターボールで つかまえて\nどうじに 6ぴき もちあるける\pそうして つかまえた ポケモンを\nそだてて たたかわせる ひとを\lポケモントレーナーと いう\pトレーナーの もくひょうは\nかくちの ポケモンジムに いる\lつよい トレーナーに かつこと!$"
	.if (. - gText_Rom_2031E4) > 0x90
	.error "gText_Rom_2031E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2031E4) < 0x90
	.space 0x90 - (. - gText_Rom_2031E4)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:247 RustboroCity_PokemonSchool_Text_ScottMetAlreadyCut
	.globl gText_Rom_203274
gText_Rom_203274: @ 0x08203274
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pスクールを のぞきにきた ということは\nきみも トレーナー?\pならば まずは いあいぎりを\nポケモンに おぼえさせると いいね!\pいあいぎりは たしか このまちの\nだれかが もっていた はずだよ$"
	.if (. - gText_Rom_203274) > 0xc5
	.error "gText_Rom_203274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203274) < 0xc5
	.space 0xc5 - (. - gText_Rom_203274)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:250 RustboroCity_PokemonSchool_Text_StudentTalentLevelUnknown
	.globl gText_Rom_203339
gText_Rom_203339: @ 0x08203339
	.string "エニシダ『うーん ここに いる\nせいとさん たちの さいのうは\lまだまだ みちすう! これから だな!$"
	.if (. - gText_Rom_203339) > 0x34
	.error "gText_Rom_203339 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203339) < 0x34
	.space 0x34 - (. - gText_Rom_203339)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:253 RustboroCity_PokemonSchool_Text_ScottStoneBadge
	.globl gText_Rom_20336D
gText_Rom_20336D: @ 0x0820336D
	.string "エニシダ『ん それは……\nストーンバッジ だね\lなかなか やるじゃ ないか!\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね$"
	.if (. - gText_Rom_20336D) > 0x70
	.error "gText_Rom_20336D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20336D) < 0x70
	.space 0x70 - (. - gText_Rom_20336D)
	.endif

	@ data/maps/RustboroCity_PokemonSchool/scripts.inc:256 RustboroCity_PokemonSchool_Text_ScottMetAlreadyStoneBadge
	.globl gText_Rom_2033DD
gText_Rom_2033DD: @ 0x082033DD
	.string "おや? きみとは たしか\nトウカシティで あった きがするね\pわたしの なまえは エニシダ\pポケモンしょうぶの さいのうを もった\nゆうしゅうな じんざいを もとめて\lかくちを たびして いるのさ\pきみの それは……\nストーンバッジ だね\lトレーナーに なりたてに しては やるね\pだけど できれば\nたたかっている ところを みたかったな\lリーグバッジ だけでは きみが\lどんな トレーナー なのかは\lよく わからない からね$"
	.if (. - gText_Rom_2033DD) > 0xd6
	.error "gText_Rom_2033DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2033DD) < 0xd6
	.space 0xd6 - (. - gText_Rom_2033DD)
	.endif
	.incbin "baserom.gba", 0x2034b3, 0x3d

	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:31 RustboroCity_PokemonCenter_1F_Text_PokemonHavePersonalities
	.globl gText_Rom_2034F0
gText_Rom_2034F0: @ 0x082034F0
	.string "わしの ポケモンは むじゃき で\nともだちの ポケモンは ようき なんだよ\pポケモンにも せいかくが ある というのは\nなかなか おもしろい もんだねー!$"
	.if (. - gText_Rom_2034F0) > 0x4e
	.error "gText_Rom_2034F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2034F0) < 0x4e
	.space 0x4e - (. - gText_Rom_2034F0)
	.endif

	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:34 RustboroCity_PokemonCenter_1F_Text_MaleAndFemalePokemon
	.globl gText_Rom_20353E
gText_Rom_20353E: @ 0x0820353E
	.string "にんげんと おなじで\nポケモンにも オスと メスが いるんだけど\lだから なにが ちがうのかは\lさっぱり わかっていない らしいよ$"
	.if (. - gText_Rom_20353E) > 0x42
	.error "gText_Rom_20353E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20353E) < 0x42
	.space 0x42 - (. - gText_Rom_20353E)
	.endif

	@ data/maps/RustboroCity_PokemonCenter_1F/scripts.inc:37 RustboroCity_PokemonCenter_1F_Text_HMCutNextDoor
	.globl gText_Rom_203580
gText_Rom_203580: @ 0x08203580
	.string "となりの いえの おじさんが くれた\nひでんマシンで あたしの ポケモン\lほそい きを きることが できるんだ!$"
	.if (. - gText_Rom_203580) > 0x39
	.error "gText_Rom_203580 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203580) < 0x39
	.space 0x39 - (. - gText_Rom_203580)
	.endif
	.incbin "baserom.gba", 0x2035b9, 0xb2

	@ data/maps/RustboroCity_Mart/scripts.inc:67 RustboroCity_Mart_Text_BuyingHealsInCaseOfShroomish
	.globl gText_Rom_20366B
gText_Rom_20366B: @ 0x0820366B
	.string "トウカのもりで キノココが\nとびだして きたときの ため\lまひなおしや どくけしを かっておくの！$"
	.if (. - gText_Rom_20366B) > 0x32
	.error "gText_Rom_20366B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20366B) < 0x32
	.space 0x32 - (. - gText_Rom_20366B)
	.endif

	@ data/maps/RustboroCity_Mart/scripts.inc:70 RustboroCity_Mart_Text_ShouldBuySuperPotionsInstead
	.globl gText_Rom_20369D
gText_Rom_20369D: @ 0x0820369D
	.string "ポケモン しんかして たいりょくが\nふえたから キズぐすり じゃなくて\lいいキズぐすりを かってあげようかな$"
	.if (. - gText_Rom_20369D) > 0x37
	.error "gText_Rom_20369D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20369D) < 0x37
	.space 0x37 - (. - gText_Rom_20369D)
	.endif

	@ data/maps/RustboroCity_Mart/scripts.inc:73 RustboroCity_Mart_Text_GettingEscapeRopeJustInCase
	.globl gText_Rom_2036D4
gText_Rom_2036D4: @ 0x082036D4
	.string "どうくつで まよった ときのため\nあなぬけのヒモを かっておこう っと！\pつかうと いっしゅんで\nいりぐちに もどれるもんね！$"
	.if (. - gText_Rom_2036D4) > 0x40
	.error "gText_Rom_2036D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2036D4) < 0x40
	.space 0x40 - (. - gText_Rom_2036D4)
	.endif
	.incbin "baserom.gba", 0x203714, 0x13

	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:12 RustboroCity_Flat1_1F_Text_EveryPokemonHasAbility
	.globl gText_Rom_203727
gText_Rom_203727: @ 0x08203727
	.string "ポケモンには それぞれ\nとくせい とよばれる ふしぎな ちからが\lそなわって いるんだよな$"
	.if (. - gText_Rom_203727) > 0x2e
	.error "gText_Rom_203727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203727) < 0x2e
	.space 0x2e - (. - gText_Rom_203727)
	.endif

	@ data/maps/RustboroCity_Flat1_1F/scripts.inc:15 RustboroCity_Flat1_1F_Text_PokemonStrange
	.globl gText_Rom_203755
gText_Rom_203755: @ 0x08203755
	.string "ほんとうに ポケモンって\nふしぎな いきもの なのね$"
	.if (. - gText_Rom_203755) > 0x1b
	.error "gText_Rom_203755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203755) < 0x1b
	.space 0x1b - (. - gText_Rom_203755)
	.endif
	.incbin "baserom.gba", 0x203770, 0x116

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:78 RustboroCity_Flat1_2F_Text_ComingUpWithMealsIsHard
	.globl gText_Rom_203886
gText_Rom_203886: @ 0x08203886
	.string "もうね たいへん なのよ!\pなにが たいへんって\nそんなの きまってるでしょ!\pまいにちの おこんだて よッ!\pまいにち まいにち かんがえるのって\nほんとうに たいへん なんだからッ!$"
	.if (. - gText_Rom_203886) > 0x5e
	.error "gText_Rom_203886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203886) < 0x5e
	.space 0x5e - (. - gText_Rom_203886)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:81 RustboroCity_Flat1_2F_Text_HelloDoYouKnowFunnyPhrase
	.globl gText_Rom_2038E4
gText_Rom_2038E4: @ 0x082038E4
	.string "やあ いらっしゃい\nハコガミけ へ ようこそ!\pちょっと しつもんが あるんだけど\nきみ こもり したこと ある?\pおじさん はじめて\nいくじ してるんだけどさ\pうちの アヤノ\nなかなか わらって くれないんだよね\pおもしろーい ことば で\nわらって くれないかなーって\lおもうんだけど\lおもしろーい ことば おしえて くれない?$"
	.if (. - gText_Rom_2038E4) > 0xa6
	.error "gText_Rom_2038E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2038E4) < 0xa6
	.space 0xa6 - (. - gText_Rom_2038E4)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:84 RustboroCity_Flat1_2F_Text_BeenSayingXDoYouKnowBetterPhrase
	.globl gText_Rom_20398A
gText_Rom_20398A: @ 0x0820398A
	.string "いまは {STR_VAR_1} って\nことばを つかってるんだけど\pおもしろそうな ことば\nみつけて きたの?$"
	.if (. - gText_Rom_20398A) > 0x2f
	.error "gText_Rom_20398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20398A) < 0x2f
	.space 0x2f - (. - gText_Rom_20398A)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:87 RustboroCity_Flat1_2F_Text_WonderfulLetsHearSuggestion
	.globl gText_Rom_2039B9
gText_Rom_2039B9: @ 0x082039B9
	.string "そうか そうか\nじゃあ さっそく おしえて くれよ$"
	.if (. - gText_Rom_2039B9) > 0x1a
	.error "gText_Rom_2039B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2039B9) < 0x1a
	.space 0x1a - (. - gText_Rom_2039B9)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:90 RustboroCity_Flat1_2F_Text_OhIsThatRight
	.globl gText_Rom_2039D3
gText_Rom_2039D3: @ 0x082039D3
	.string "そうか そうか\nなにか おもしろそうな ことばを\lみつけたら おしえて くれよ$"
	.if (. - gText_Rom_2039D3) > 0x28
	.error "gText_Rom_2039D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2039D3) < 0x28
	.space 0x28 - (. - gText_Rom_2039D3)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:93 RustboroCity_Flat1_2F_Text_LetsGiveItATry2 (+1 aliases)
	.globl gText_Rom_2039FB
gText_Rom_2039FB: @ 0x082039FB
	.string "なるほどー\nじゃあ ためして みようかな$"
	.if (. - gText_Rom_2039FB) > 0x15
	.error "gText_Rom_2039FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2039FB) < 0x15
	.space 0x15 - (. - gText_Rom_2039FB)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:96 RustboroCity_Flat1_2F_Text_OhShesLaughing
	.globl gText_Rom_203A10
gText_Rom_203A10: @ 0x08203A10
	.string "{STR_VAR_1}\n{STR_VAR_1}\pわらってる わらってる!\nなんだか うれしいなあ$"
	.if (. - gText_Rom_203A10) > 0x1f
	.error "gText_Rom_203A10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A10) < 0x1f
	.space 0x1f - (. - gText_Rom_203A10)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:93 RustboroCity_Flat1_2F_Text_LetsGiveItATry2 (+1 aliases)
	.globl gText_Rom_203A2F
gText_Rom_203A2F: @ 0x08203A2F
	.string "なるほどー\nじゃあ ためして みようかな$"
	.if (. - gText_Rom_203A2F) > 0x15
	.error "gText_Rom_203A2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A2F) < 0x15
	.space 0x15 - (. - gText_Rom_203A2F)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:102 RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll (+1 aliases)
	.globl gText_Rom_203A44
gText_Rom_203A44: @ 0x08203A44
	.string "{STR_VAR_1}\n{STR_VAR_1}\pうーん わらわないなあ\nこのこ クール なのかな$"
	.if (. - gText_Rom_203A44) > 0x1f
	.error "gText_Rom_203A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A44) < 0x1f
	.space 0x1f - (. - gText_Rom_203A44)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:105 RustboroCity_Flat1_2F_Text_ThinkOfMyOwnPhrase
	.globl gText_Rom_203A63
gText_Rom_203A63: @ 0x08203A63
	.string "いい ことば しらないかー\nじゃあ じぶんで かんがえるかー\pうーん\n{STR_VAR_1} とか どうかな\lよし! ためしてみよう$"
	.if (. - gText_Rom_203A63) > 0x3a
	.error "gText_Rom_203A63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A63) < 0x3a
	.space 0x3a - (. - gText_Rom_203A63)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:102 RustboroCity_Flat1_2F_Text_ShesNotSmilingAtAll (+1 aliases)
	.globl gText_Rom_203A9D
gText_Rom_203A9D: @ 0x08203A9D
	.string "{STR_VAR_1}\n{STR_VAR_1}\pうーん わらわないなあ\nこのこ クール なのかな$"
	.if (. - gText_Rom_203A9D) > 0x1f
	.error "gText_Rom_203A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203A9D) < 0x1f
	.space 0x1f - (. - gText_Rom_203A9D)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:111 RustboroCity_Flat1_2F_Text_OhYouDontKnowAny
	.globl gText_Rom_203ABC
gText_Rom_203ABC: @ 0x08203ABC
	.string "いい ことば しらないかー\nじゃあ まえの ことばで\lがんばって あやすかー\pおもしろそうな ことば みつけたら\nおじさんに おしえてね$"
	.if (. - gText_Rom_203ABC) > 0x45
	.error "gText_Rom_203ABC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203ABC) < 0x45
	.space 0x45 - (. - gText_Rom_203ABC)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:114 RustboroCity_Flat1_2F_Text_ThankYouIllGiveYouWallpaper
	.globl gText_Rom_203B01
gText_Rom_203B01: @ 0x08203B01
	.string "ありがとう!\pきみの おかげで アヤノが\nわらって くれたよ!\pじつは おじさん\nこう みえても\pデボンコーポレーションの\nすごうで けんきゅういん なんだよ\pそうだなー じゃあ おれいに\nきみが ポケモンを あずけている\lボックスの かべがみを\lふやして あげよう!\pかべがみの なかから\n「だいすき」って いうのを えらぶと\lあたらしい かべがみが えらべるよ!$"
	.if (. - gText_Rom_203B01) > 0xb8
	.error "gText_Rom_203B01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203B01) < 0xb8
	.space 0xb8 - (. - gText_Rom_203B01)
	.endif

	@ data/maps/RustboroCity_Flat1_2F/scripts.inc:117 RustboroCity_Flat1_2F_Text_ItsAPokemonPlushDoll
	.globl gText_Rom_203BB9
gText_Rom_203BB9: @ 0x08203BB9
	.string "ポケモンの ぬいぐるみ だ!$"
	.if (. - gText_Rom_203BB9) > 0xf
	.error "gText_Rom_203BB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203BB9) < 0xf
	.space 0xf - (. - gText_Rom_203BB9)
	.endif
	.incbin "baserom.gba", 0x203bc8, 0xaa

	@ data/maps/RustboroCity_House1/scripts.inc:33 RustboroCity_House1_Text_IllTradeIfYouWant
	.globl gText_Rom_203C72
gText_Rom_203C72: @ 0x08203C72
	.string "え?\nぼくの ポケモンが かわいい?\lウン しってるよー\pあっ どうしても って いうなら\nこうかん して あげても いいよ\pじゃあ ぼくの {STR_VAR_2}\n{STR_VAR_1} となら こうかん するよ$"
	.if (. - gText_Rom_203C72) > 0x5a
	.error "gText_Rom_203C72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203C72) < 0x5a
	.space 0x5a - (. - gText_Rom_203C72)
	.endif

	@ data/maps/RustboroCity_House1/scripts.inc:36 RustboroCity_House1_Text_PleaseBeGoodToMyPokemon
	.globl gText_Rom_203CCC
gText_Rom_203CCC: @ 0x08203CCC
	.string "えへへ……\nちゃんと かわいがってね$"
	.if (. - gText_Rom_203CCC) > 0x13
	.error "gText_Rom_203CCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CCC) < 0x13
	.space 0x13 - (. - gText_Rom_203CCC)
	.endif

	@ data/maps/RustboroCity_House1/scripts.inc:39 RustboroCity_House1_Text_DoesntLookLikeMonToMe
	.globl gText_Rom_203CDF
gText_Rom_203CDF: @ 0x08203CDF
	.string "えー どうみても {STR_VAR_1}に\nみえないんだけど……$"
	.if (. - gText_Rom_203CDF) > 0x18
	.error "gText_Rom_203CDF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CDF) < 0x18
	.space 0x18 - (. - gText_Rom_203CDF)
	.endif

	@ data/maps/RustboroCity_House1/scripts.inc:42 RustboroCity_House1_Text_YouDontWantToThatsOkay
	.globl gText_Rom_203CF7
gText_Rom_203CF7: @ 0x08203CF7
	.string "あ いやなら いいけど……\nせっかく かわいい ポケモンなのに$"
	.if (. - gText_Rom_203CF7) > 0x20
	.error "gText_Rom_203CF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203CF7) < 0x20
	.space 0x20 - (. - gText_Rom_203CF7)
	.endif

	@ data/maps/RustboroCity_House1/scripts.inc:45 RustboroCity_House1_Text_AnyPokemonCanBeCute
	.globl gText_Rom_203D17
gText_Rom_203D17: @ 0x08203D17
	.string "だいじに そだてると\nどんな ポケモンも すごく かわいいよねー$"
	.if (. - gText_Rom_203D17) > 0x21
	.error "gText_Rom_203D17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203D17) < 0x21
	.space 0x21 - (. - gText_Rom_203D17)
	.endif

	@ data/maps/RustboroCity_House1/scripts.inc:48 RustboroCity_House1_Text_AllSortsOfPlaces
	.globl gText_Rom_203D38
gText_Rom_203D38: @ 0x08203D38
	.string "いろんな ばしょに\nいろんな ポケモンが いる\lいろんな ひとも いる\pそれが たのしみで わしも\nいろんな ところに でかけるのさ!$"
	.if (. - gText_Rom_203D38) > 0x44
	.error "gText_Rom_203D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203D38) < 0x44
	.space 0x44 - (. - gText_Rom_203D38)
	.endif
	.incbin "baserom.gba", 0x203d7c, 0x40

	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:24 RustboroCity_CuttersHouse_Text_YouCanPutThisHMToGoodUse
	.globl gText_Rom_203DBC
gText_Rom_203DBC: @ 0x08203DBC
	.string "その めつき\nしなやかな みの こなし……\lそして きたえられた ポケモン……\pきみは できる トレーナーだな!\pなにも いわなくて いい\nわたしには わかる わかるのだよ!\pきみならば この ひでんマシン\nうまく つかえるだろう\lさあ えんりょ せずに もっていきたまえ!$"
	.if (. - gText_Rom_203DBC) > 0x8a
	.error "gText_Rom_203DBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203DBC) < 0x8a
	.space 0x8a - (. - gText_Rom_203DBC)
	.endif

	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:27 RustboroCity_CuttersHouse_Text_ExplainCut
	.globl gText_Rom_203E46
gText_Rom_203E46: @ 0x08203E46
	.string "その ひでんマシンは いあいぎり!\pひでんは たたかっていない ときでも\nポケモンが つかえる わざ!\pいあいぎりを おぼえた ポケモンは\nストーンバッジを もっていれば\lほそい きを きれるように なるのだよ!\pしかも ひでんマシンは わざマシンと ちがい\nつかっても なくならないぞ!$"
	.if (. - gText_Rom_203E46) > 0x91
	.error "gText_Rom_203E46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203E46) < 0x91
	.space 0x91 - (. - gText_Rom_203E46)
	.endif

	@ data/maps/RustboroCity_CuttersHouse/scripts.inc:30 RustboroCity_CuttersHouse_Text_DadHelpedClearLandOfTrees
	.globl gText_Rom_203ED7
gText_Rom_203ED7: @ 0x08203ED7
	.string "この カナズミが おおきくなるとき\nおとうさん みんなの ために\lいあいぎりを つかって\lあたりを きりひらいたんだって!$"
	.if (. - gText_Rom_203ED7) > 0x3e
	.error "gText_Rom_203ED7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203ED7) < 0x3e
	.space 0x3e - (. - gText_Rom_203ED7)
	.endif
	.incbin "baserom.gba", 0x203f15, 0x13

	@ data/maps/RustboroCity_House2/scripts.inc:12 RustboroCity_House2_Text_TrainerSchoolExcellent
	.globl gText_Rom_203F28
gText_Rom_203F28: @ 0x08203F28
	.string "トレーナーズ スクールは いいわよ!\pあそこで ポケモンの べんきょう すれば\nジムリーダーに だって なれますもの!$"
	.if (. - gText_Rom_203F28) > 0x3c
	.error "gText_Rom_203F28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203F28) < 0x3c
	.space 0x3c - (. - gText_Rom_203F28)
	.endif

	@ data/maps/RustboroCity_House2/scripts.inc:15 RustboroCity_House2_Text_RoxanneKnowsALot
	.globl gText_Rom_203F64
gText_Rom_203F64: @ 0x08203F64
	.string "ジムリーダーの ツツジ ねーちゃん\nすっごい ポケモン くわしくて\lすっごい ポケモン つよいんだから!$"
	.if (. - gText_Rom_203F64) > 0x35
	.error "gText_Rom_203F64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203F64) < 0x35
	.space 0x35 - (. - gText_Rom_203F64)
	.endif
	.incbin "baserom.gba", 0x203f99, 0x1d

	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:18 RustboroCity_Flat2_1F_Text_DevonWorkersLiveHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_203FB6
gText_Rom_203FB6: @ 0x08203FB6
	.string "ここには デボン コーポレーションの\nしゃいんの みなさんが すんでるのですよ$"
	.if (. - gText_Rom_203FB6) != 0x28
	.error "gText_Rom_203FB6 must retain its original byte length"
	.endif
	.globl gText_Rom_203FDA
	.set gText_Rom_203FDA, gText_Rom_203FB6 + 0x24

	@ data/maps/RustboroCity_Flat2_1F/scripts.inc:21 RustboroCity_Flat2_1F_Text_Skitty
	.globl gText_Rom_203FDE
gText_Rom_203FDE: @ 0x08203FDE
	.string "エネコ『ぎゃー!!$"
	.if (. - gText_Rom_203FDE) > 0xa
	.error "gText_Rom_203FDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_203FDE) < 0xa
	.space 0xa - (. - gText_Rom_203FDE)
	.endif
	.incbin "baserom.gba", 0x203fe8, 0x43

	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:24 RustboroCity_Flat2_2F_Text_DevonWasTinyInOldDays
	.globl gText_Rom_20402B
gText_Rom_20402B: @ 0x0820402B
	.string "デボンもな むかしは\nちいさな ちいさな かいしゃ だったわい$"
	.if (. - gText_Rom_20402B) > 0x20
	.error "gText_Rom_20402B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20402B) < 0x20
	.space 0x20 - (. - gText_Rom_20402B)
	.endif

	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:27 RustboroCity_Flat2_2F_Text_MyDaddyMadeThisYouCanHaveIt
	.globl gText_Rom_20404B
gText_Rom_20404B: @ 0x0820404B
	.string "おとうさんは かいしゃで おしごと!\pこれ おとうさんが つくったんだぜ!\nでも ぼく まだ つかえないから あげるよ$"
	.if (. - gText_Rom_20404B) > 0x3c
	.error "gText_Rom_20404B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20404B) < 0x3c
	.space 0x3c - (. - gText_Rom_20404B)
	.endif

	@ data/maps/RustboroCity_Flat2_2F/scripts.inc:30 RustboroCity_Flat2_2F_Text_GoingToWorkAtDevonToo
	.globl gText_Rom_204087
gText_Rom_204087: @ 0x08204087
	.string "おとうさんは かいしゃで おしごと!\pぼくも おおきく なったら\nデボンで はたらくんだ!$"
	.if (. - gText_Rom_204087) > 0x2e
	.error "gText_Rom_204087 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204087) < 0x2e
	.space 0x2e - (. - gText_Rom_204087)
	.endif
	.incbin "baserom.gba", 0x2040b5, 0x13

	@ data/maps/RustboroCity_Flat2_3F/scripts.inc:12 RustboroCity_Flat2_3F_Text_PresidentCollectsRareStones
	.globl gText_Rom_2040C8
gText_Rom_2040C8: @ 0x082040C8
	.string "デボンの しゃちょうは\nめずらしい いしを あつめるのが\lしゅみ なんだよ$"
	.if (. - gText_Rom_2040C8) > 0x26
	.error "gText_Rom_2040C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2040C8) < 0x26
	.space 0x26 - (. - gText_Rom_2040C8)
	.endif

	@ data/maps/RustboroCity_Flat2_3F/scripts.inc:15 RustboroCity_Flat2_3F_Text_PresidentsSonAlsoCollectsRareStones
	.globl gText_Rom_2040EE
gText_Rom_2040EE: @ 0x082040EE
	.string "たしか むすこさんも\nめずらしい いしを あつめるのが\lしゅみ だったっけ……?$"
	.if (. - gText_Rom_2040EE) > 0x29
	.error "gText_Rom_2040EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2040EE) < 0x29
	.space 0x29 - (. - gText_Rom_2040EE)
	.endif
	.incbin "baserom.gba", 0x204117, 0x26

	@ data/maps/RustboroCity_House3/scripts.inc:23 RustboroCity_House3_Text_IGivePerfectlySuitedNicknames
	.globl gText_Rom_20413D
gText_Rom_20413D: @ 0x0820413D
	.string "じぶんの ポケモンには\nぴったりの ニックネームを つけるんじゃ\lいわゆる おりじなりてぃ じゃ!$"
	.if (. - gText_Rom_20413D) > 0x32
	.error "gText_Rom_20413D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20413D) < 0x32
	.space 0x32 - (. - gText_Rom_20413D)
	.endif

	@ data/maps/RustboroCity_House3/scripts.inc:26 RustboroCity_House3_Text_NamingPikachuPekachu
	.globl gText_Rom_20416F
gText_Rom_20416F: @ 0x0820416F
	.string "だからって ピカチュウに\n「ペカチュウ」って つけても\lほとんど かわって ないでしょうに……\pまあ わかりやすいのも\nニックネームには だいじ ですけどねぇ$"
	.if (. - gText_Rom_20416F) > 0x50
	.error "gText_Rom_20416F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20416F) < 0x50
	.space 0x50 - (. - gText_Rom_20416F)
	.endif

	@ data/maps/RustboroCity_House3/scripts.inc:29 RustboroCity_House3_Text_Pekachu
	.globl gText_Rom_2041BF
gText_Rom_2041BF: @ 0x082041BF
	.string "ペカチュウ『ぺかー!$"
	.if (. - gText_Rom_2041BF) > 0xb
	.error "gText_Rom_2041BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2041BF) < 0xb
	.space 0xb - (. - gText_Rom_2041BF)
	.endif
	.incbin "baserom.gba", 0x2041ca, 0xc1

	@ data/maps/FortreeCity_House1/scripts.inc:43 FortreeCity_House1_Text_YouWillTradeWontYou
	.globl gText_Rom_20428B
gText_Rom_20428B: @ 0x0820428B
	.string "うぉー!\nどうしても {STR_VAR_1}が ほしーっ!\l……と\lこころの さけびを きかれて しまった!\pきいた からには\nきみの {STR_VAR_1}と ボクの {STR_VAR_2}を\lもちろん こうかん するでしょ!$"
	.if (. - gText_Rom_20428B) > 0x58
	.error "gText_Rom_20428B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20428B) < 0x58
	.space 0x58 - (. - gText_Rom_20428B)
	.endif

	@ data/maps/FortreeCity_House1/scripts.inc:46 FortreeCity_House1_Text_MonYouTakeCare
	.globl gText_Rom_2042E3
gText_Rom_2042E3: @ 0x082042E3
	.string "おー やったー!\p{STR_VAR_1} よくきたなー!\n{STR_VAR_2} げんきで やれよー!$"
	.if (. - gText_Rom_2042E3) > 0x22
	.error "gText_Rom_2042E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2042E3) < 0x22
	.space 0x22 - (. - gText_Rom_2042E3)
	.endif

	@ data/maps/FortreeCity_House1/scripts.inc:49 FortreeCity_House1_Text_ThisIsntAMon
	.globl gText_Rom_204305
gText_Rom_204305: @ 0x08204305
	.string "いやソレ\n{STR_VAR_1}じゃないでしょ$"
	.if (. - gText_Rom_204305) > 0xf
	.error "gText_Rom_204305 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204305) < 0xf
	.space 0xf - (. - gText_Rom_204305)
	.endif

	@ data/maps/FortreeCity_House1/scripts.inc:52 FortreeCity_House1_Text_YouWontTradeMe
	.globl gText_Rom_204314
gText_Rom_204314: @ 0x08204314
	.string "え こうかん しないの?\nこころの さけびを きいたくせに……$"
	.if (. - gText_Rom_204314) > 0x20
	.error "gText_Rom_204314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204314) < 0x20
	.space 0x20 - (. - gText_Rom_204314)
	.endif

	@ data/maps/FortreeCity_House1/scripts.inc:55 FortreeCity_House1_Text_GoingToMakeVolbeatStrong
	.globl gText_Rom_204334
gText_Rom_204334: @ 0x08204334
	.string "よし いまから\nバルビートを つよく するぞー!\lプラスルも つよく してやってよ!$"
	.if (. - gText_Rom_204334) > 0x2b
	.error "gText_Rom_204334 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204334) < 0x2b
	.space 0x2b - (. - gText_Rom_204334)
	.endif

	@ data/maps/FortreeCity_House1/scripts.inc:58 FortreeCity_House1_Text_TradingMemoriesWithOthers
	.globl gText_Rom_20435F
gText_Rom_20435F: @ 0x0820435F
	.string "ひとと ポケモンを こうかん する……\pつまりは それぞれの\nおもいでを こうかん しているのじゃな$"
	.if (. - gText_Rom_20435F) > 0x33
	.error "gText_Rom_20435F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20435F) < 0x33
	.space 0x33 - (. - gText_Rom_20435F)
	.endif

	@ data/maps/FortreeCity_House1/scripts.inc:61 FortreeCity_House1_Text_Zigzagoon
	.globl gText_Rom_204392
gText_Rom_204392: @ 0x08204392
	.string "ジグザグマ『グモモォ?$"
	.if (. - gText_Rom_204392) > 0xc
	.error "gText_Rom_204392 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204392) < 0xc
	.space 0xc - (. - gText_Rom_204392)
	.endif
	.incbin "baserom.gba", 0x20439e, 0x1da

	@ data/maps/FortreeCity_Gym/scripts.inc:137 FortreeCity_Gym_Text_GymGuideAdvice
	.globl gText_Rom_204578
gText_Rom_204578: @ 0x08204578
	.string "げんき しとぉや!!\nチャンピオンを めざす {PLAYER}!!\pヒワマキシティ ジムの リーダー ナギは\nひこうタイプ ポケモンの つかいてだ!\pこの かいてんとびら だらけの\nジムの おくで\pかのじょは あらたな チャレンジャーが\nはばたこうと するのを まっている!\pじゃ きばってこォー!!$"
	.if (. - gText_Rom_204578) > 0x91
	.error "gText_Rom_204578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204578) < 0x91
	.space 0x91 - (. - gText_Rom_204578)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:148 FortreeCity_Gym_Text_GymGuidePostVictory
	.globl gText_Rom_204609
gText_Rom_204609: @ 0x08204609
	.string "えんやっと きみは はばたいたッ!$"
	.if (. - gText_Rom_204609) > 0x12
	.error "gText_Rom_204609 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204609) < 0x12
	.space 0x12 - (. - gText_Rom_204609)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:152 FortreeCity_Gym_Text_JaredIntro (+1 aliases)
	.globl gText_Rom_20461B
gText_Rom_20461B: @ 0x0820461B
	.string "かれいな とりポケモンの たたかいを\nみせて やるぜっ!$"
	.if (. - gText_Rom_20461B) > 0x1d
	.error "gText_Rom_20461B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20461B) < 0x1d
	.space 0x1d - (. - gText_Rom_20461B)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:156 FortreeCity_Gym_Text_JaredDefeat (+1 aliases)
	.globl gText_Rom_204638
gText_Rom_204638: @ 0x08204638
	.string "きみ…… つよいんだな……$"
	.if (. - gText_Rom_204638) > 0xe
	.error "gText_Rom_204638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204638) < 0xe
	.space 0xe - (. - gText_Rom_204638)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:160 FortreeCity_Gym_Text_JaredPostBattle
	.globl gText_Rom_204646
gText_Rom_204646: @ 0x08204646
	.string "トレーナーは あたまの かいてんも\nはやく なければ つとまらないぜ!\pきみは リーダーの ところまで\nちゃんと たどりつく ことが できるかい?$"
	.if (. - gText_Rom_204646) > 0x4a
	.error "gText_Rom_204646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204646) < 0x4a
	.space 0x4a - (. - gText_Rom_204646)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:166 FortreeCity_Gym_Text_EdwardoIntro (+1 aliases)
	.globl gText_Rom_204690
gText_Rom_204690: @ 0x08204690
	.string "とりポケモンを あいする ものは\nこの ジムを もくひょうと している!\pヒワマキ ジムの いちいん として\nまける わけには いかないんだ!$"
	.if (. - gText_Rom_204690) > 0x48
	.error "gText_Rom_204690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204690) < 0x48
	.space 0x48 - (. - gText_Rom_204690)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:172 FortreeCity_Gym_Text_EdwardoDefeat (+1 aliases)
	.globl gText_Rom_2046D8
gText_Rom_2046D8: @ 0x082046D8
	.string "オレには にが おもすぎたか……!$"
	.if (. - gText_Rom_2046D8) > 0x12
	.error "gText_Rom_2046D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2046D8) < 0x12
	.space 0x12 - (. - gText_Rom_2046D8)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:176 FortreeCity_Gym_Text_EdwardoPostBattle
	.globl gText_Rom_2046EA
gText_Rom_2046EA: @ 0x082046EA
	.string "せかいは ひろい\nつよい トレーナーは たくさん いる\pオレも ここで しゅぎょうを つづけて\nつよくなって みせるよ!$"
	.if (. - gText_Rom_2046EA) > 0x3d
	.error "gText_Rom_2046EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2046EA) < 0x3d
	.space 0x3d - (. - gText_Rom_2046EA)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:182 FortreeCity_Gym_Text_FlintIntro (+1 aliases)
	.globl gText_Rom_204727
gText_Rom_204727: @ 0x08204727
	.string "ジムリーダーの ナギさんの\nてを わずらわせるまでも ない!\pきみの あいては オレで じゅうぶん!$"
	.if (. - gText_Rom_204727) > 0x33
	.error "gText_Rom_204727 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204727) < 0x33
	.space 0x33 - (. - gText_Rom_204727)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:187 FortreeCity_Gym_Text_FlintDefeat (+1 aliases)
	.globl gText_Rom_20475A
gText_Rom_20475A: @ 0x0820475A
	.string "ナギさん…… まけました……!$"
	.if (. - gText_Rom_20475A) > 0x10
	.error "gText_Rom_20475A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20475A) < 0x10
	.space 0x10 - (. - gText_Rom_20475A)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:191 FortreeCity_Gym_Text_FlintPostBattle
	.globl gText_Rom_20476A
gText_Rom_20476A: @ 0x0820476A
	.string "ナギさんは かわいくて つよい……\nほんと さいこうの リーダーだよ!\p……ポッ$"
	.if (. - gText_Rom_20476A) > 0x29
	.error "gText_Rom_20476A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20476A) < 0x29
	.space 0x29 - (. - gText_Rom_20476A)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:196 FortreeCity_Gym_Text_AshleyIntro (+1 aliases)
	.globl gText_Rom_204793
gText_Rom_204793: @ 0x08204793
	.string "ナギさんの おしえを うけた あたし!\nそう かんたんに たおされないわ!$"
	.if (. - gText_Rom_204793) > 0x26
	.error "gText_Rom_204793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204793) < 0x26
	.space 0x26 - (. - gText_Rom_204793)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:200 FortreeCity_Gym_Text_AshleyDefeat (+1 aliases)
	.globl gText_Rom_2047B9
gText_Rom_2047B9: @ 0x082047B9
	.string "たおされ ちゃった……$"
	.if (. - gText_Rom_2047B9) > 0xc
	.error "gText_Rom_2047B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047B9) < 0xc
	.space 0xc - (. - gText_Rom_2047B9)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:203 FortreeCity_Gym_Text_AshleyPostBattle
	.globl gText_Rom_2047C5
gText_Rom_2047C5: @ 0x082047C5
	.string "ナギさんが いてくれるから\nヒワマキの ひとは あんしんして くらせるの$"
	.if (. - gText_Rom_2047C5) > 0x25
	.error "gText_Rom_2047C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047C5) < 0x25
	.space 0x25 - (. - gText_Rom_2047C5)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:207 FortreeCity_Gym_Text_HumbertoIntro (+1 aliases)
	.globl gText_Rom_2047EA
gText_Rom_2047EA: @ 0x082047EA
	.string "ナギさまが たたかわれる ときの\nあの りりしい おかお……\pおまえ なんかにゃ みせられないぜ!$"
	.if (. - gText_Rom_2047EA) > 0x32
	.error "gText_Rom_2047EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2047EA) < 0x32
	.space 0x32 - (. - gText_Rom_2047EA)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:213 FortreeCity_Gym_Text_HumbertoDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20481C
gText_Rom_20481C: @ 0x0820481C
	.string "うう!\nおれでは とめられ なかった$"
	.if (. - gText_Rom_20481C) != 0x13
	.error "gText_Rom_20481C must retain its original byte length"
	.endif
	.globl gText_Rom_20482A
	.set gText_Rom_20482A, gText_Rom_20481C + 0xe
	.globl gText_Rom_20482B
	.set gText_Rom_20482B, gText_Rom_20481C + 0xf

	@ data/maps/FortreeCity_Gym/scripts.inc:217 FortreeCity_Gym_Text_HumbertoPostBattle
	.globl gText_Rom_20482F
gText_Rom_20482F: @ 0x0820482F
	.string "ナギさまに みとれて\nボロまけ しないように\lちゅういするんだな!$"
	.if (. - gText_Rom_20482F) > 0x22
	.error "gText_Rom_20482F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20482F) < 0x22
	.space 0x22 - (. - gText_Rom_20482F)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:222 FortreeCity_Gym_Text_DariusIntro (+1 aliases)
	.globl gText_Rom_204851
gText_Rom_204851: @ 0x08204851
	.string "ひこうタイプ って いっても\nいろんな ポケモンが いるんだぜ!\lおまえ それ わかってる?$"
	.if (. - gText_Rom_204851) > 0x2f
	.error "gText_Rom_204851 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204851) < 0x2f
	.space 0x2f - (. - gText_Rom_204851)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:227 FortreeCity_Gym_Text_DariusDefeat (+1 aliases)
	.globl gText_Rom_204880
gText_Rom_204880: @ 0x08204880
	.string "なかなか わかってるな!$"
	.if (. - gText_Rom_204880) > 0xd
	.error "gText_Rom_204880 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204880) < 0xd
	.space 0xd - (. - gText_Rom_204880)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:230 FortreeCity_Gym_Text_DariusPostBattle
	.globl gText_Rom_20488D
gText_Rom_20488D: @ 0x0820488D
	.string "ぼくは まけたけど\nナギ リーダーの ポケモンは\lほんと てごわいぞ!$"
	.if (. - gText_Rom_20488D) > 0x24
	.error "gText_Rom_20488D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20488D) < 0x24
	.space 0x24 - (. - gText_Rom_20488D)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:235 FortreeCity_Gym_Text_WinonaIntro (+1 aliases)
	.globl gText_Rom_2048B1
gText_Rom_2048B1: @ 0x082048B1
	.string "わたしは この ヒワマキ ジムで\nリーダーを している ナギ……\pとりポケモンと こころを かよわし\nいっしょに おおぞらを まい……\pどんな くるしい しょうぶも\nゆうがに かってみせる……\pさあ わたしと ポケモンが おりなす\nかれいな まいを みせましょう!$"
	.if (. - gText_Rom_2048B1) > 0x85
	.error "gText_Rom_2048B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2048B1) < 0x85
	.space 0x85 - (. - gText_Rom_2048B1)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:245 FortreeCity_Gym_Text_WinonaDefeat (+1 aliases)
	.globl gText_Rom_204936
gText_Rom_204936: @ 0x08204936
	.string "わたしより かれいに\nポケモンを たたかわせる ひと……\lはじめて であいました……\pその じつりょくを みとめ\nこの ジムバッジを おわたしします!$"
	.if (. - gText_Rom_204936) > 0x4c
	.error "gText_Rom_204936 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204936) < 0x4c
	.space 0x4c - (. - gText_Rom_204936)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:252 FortreeCity_Gym_Text_ReceivedFeatherBadge
	.globl gText_Rom_204982
gText_Rom_204982: @ 0x08204982
	.string "{PLAYER}は ナギから\nフェザーバッジを もらった!$"
	.if (. - gText_Rom_204982) > 0x18
	.error "gText_Rom_204982 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204982) < 0x18
	.space 0x18 - (. - gText_Rom_204982)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:256 FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_20499A
gText_Rom_20499A: @ 0x0820499A
	.string "フェザーバッジを つけてると\nひとから もらった ポケモンでも\lレベル70までの ポケモンなら\lいうことを すなおに きいてくれます!\pひでんわざの そらをとぶ を\nつかえる ようにも なります!\pそして これを\nあなたに プレゼント します$"
	.if (. - gText_Rom_20499A) != 0x7a
	.error "gText_Rom_20499A must retain its original byte length"
	.endif
	.globl gText_Rom_204A10
	.set gText_Rom_204A10, gText_Rom_20499A + 0x76

	@ data/maps/FortreeCity_Gym/scripts.inc:265 FortreeCity_Gym_Text_ExplainAerialAce
	.globl gText_Rom_204A14
gText_Rom_204A14: @ 0x08204A14
	.string "わざマシン40の なかみは\nつばめがえし!\pその すばやさ……\nどんな ポケモンでも\lよけることは できないでしょう!\p…… …… ……$"
	.if (. - gText_Rom_204A14) > 0x45
	.error "gText_Rom_204A14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A14) < 0x45
	.space 0x45 - (. - gText_Rom_204A14)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:271 FortreeCity_Gym_Text_RegisteredWinona
	.globl gText_Rom_204A59
gText_Rom_204A59: @ 0x08204A59
	.string "ジムリーダー ナギを\nポケナビに とうろく した!$"
	.if (. - gText_Rom_204A59) > 0x1a
	.error "gText_Rom_204A59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A59) < 0x1a
	.space 0x1a - (. - gText_Rom_204A59)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:275 FortreeCity_Gym_Text_WinonaPostBattle
	.globl gText_Rom_204A73
gText_Rom_204A73: @ 0x08204A73
	.string "あなたには まけました けど\pわたしは これからも\nとりポケモンに こだわって いきます$"
	.if (. - gText_Rom_204A73) > 0x2d
	.error "gText_Rom_204A73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204A73) < 0x2d
	.space 0x2d - (. - gText_Rom_204A73)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:279 FortreeCity_Gym_Text_GymStatue
	.globl gText_Rom_204AA0
gText_Rom_204AA0: @ 0x08204AA0
	.string "ヒワマキシティ ポケモンジム$"
	.if (. - gText_Rom_204AA0) > 0xf
	.error "gText_Rom_204AA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AA0) < 0xf
	.space 0xf - (. - gText_Rom_204AA0)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:282 FortreeCity_Gym_Text_GymStatueCertified
	.globl gText_Rom_204AAF
gText_Rom_204AAF: @ 0x08204AAF
	.string "ヒワマキシティ ポケモンジム\pナギ にんてい トレーナー!\n{PLAYER}$"
	.if (. - gText_Rom_204AAF) > 0x21
	.error "gText_Rom_204AAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AAF) < 0x21
	.space 0x21 - (. - gText_Rom_204AAF)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:287 FortreeCity_Gym_Text_WinonaPreRematch (+1 aliases)
	.globl gText_Rom_204AD0
gText_Rom_204AD0: @ 0x08204AD0
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!$"
	.if (. - gText_Rom_204AD0) > 0x79
	.error "gText_Rom_204AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204AD0) < 0x79
	.space 0x79 - (. - gText_Rom_204AD0)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:297 FortreeCity_Gym_Text_WinonaRematchDefeat (+1 aliases)
	.globl gText_Rom_204B49
gText_Rom_204B49: @ 0x08204B49
	.string "やはり とどかなかった……$"
	.if (. - gText_Rom_204B49) > 0xe
	.error "gText_Rom_204B49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204B49) < 0xe
	.space 0xe - (. - gText_Rom_204B49)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:300 FortreeCity_Gym_Text_WinonaPostRematch
	.globl gText_Rom_204B57
gText_Rom_204B57: @ 0x08204B57
	.string "ナギ『たとえ しょうぶに まけても\nこころの つばさが おれて いなければ\lなんどでも うかび あがれる……\pわたしは そう しんじて いますよ!$"
	.if (. - gText_Rom_204B57) > 0x4a
	.error "gText_Rom_204B57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204B57) < 0x4a
	.space 0x4a - (. - gText_Rom_204B57)
	.endif

	@ data/maps/FortreeCity_Gym/scripts.inc:307 FortreeCity_Gym_Text_WinonaRematchNeedTwoMons (+1 aliases)
	.globl gText_Rom_204BA1
gText_Rom_204BA1: @ 0x08204BA1
	.string "ナギ『ひとは ちじょうに いる かぎり\nいんりょくから のがれることは できない\pでも ぜんりょくで はばたけば\nそらを とぶことは できるのです\pチャンピオンにまで のぼりつめた\nあなたの じつりょく\lもういちど みせて いただきますわ!\n……あら? たたかえる ポケモンを\n1ひきしか もっていませんね\pせめて 2ひき いじょうの\nポケモンを もって また きてください$"
	.if (. - gText_Rom_204BA1) > 0xbc
	.error "gText_Rom_204BA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204BA1) < 0xbc
	.space 0xbc - (. - gText_Rom_204BA1)
	.endif
	.incbin "baserom.gba", 0x204c5d, 0x38

	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:30 FortreeCity_PokemonCenter_1F_Text_GoToSafariZone
	.globl gText_Rom_204C95
gText_Rom_204C95: @ 0x08204C95
	.string "きみぃ\nポケモンずかん つくっておるのか?\pふむぅ 121ばん どうろの\nサファリゾーンに いっては どうかな?$"
	.if (. - gText_Rom_204C95) > 0x39
	.error "gText_Rom_204C95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204C95) < 0x39
	.space 0x39 - (. - gText_Rom_204C95)
	.endif

	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:33 FortreeCity_PokemonCenter_1F_Text_RecordCornerIsNeat
	.globl gText_Rom_204CCE
gText_Rom_204CCE: @ 0x08204CCE
	.string "レコードコーナー つかってるかい?\pレコードって きろくの ことだろ\nきろくが いろいろ まざるって……\pよく わかんないけど すごいよな!\nワクワク しちゃうよ!$"
	.if (. - gText_Rom_204CCE) > 0x53
	.error "gText_Rom_204CCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204CCE) < 0x53
	.space 0x53 - (. - gText_Rom_204CCE)
	.endif

	@ data/maps/FortreeCity_PokemonCenter_1F/scripts.inc:36 FortreeCity_PokemonCenter_1F_Text_DoYouKnowAboutPokenav
	.globl gText_Rom_204D21
gText_Rom_204D21: @ 0x08204D21
	.string "おっ ポケナビ もってるな!\nおれと おんなじ だ\pポケナビの エントリーコール つかうと\nもういちど しょうぶ したがってる\lトレーナーが わかったり\lいつでも はなしが できるってのが\lすぐれもの だよな! さすが デボンだぜ!$"
	.if (. - gText_Rom_204D21) > 0x75
	.error "gText_Rom_204D21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204D21) < 0x75
	.space 0x75 - (. - gText_Rom_204D21)
	.endif
	.incbin "baserom.gba", 0x204d96, 0x75

	@ data/maps/FortreeCity_Mart/scripts.inc:40 FortreeCity_Mart_Text_SuperRepelBetter
	.globl gText_Rom_204E0B
gText_Rom_204E0B: @ 0x08204E0B
	.string "シルバースプレーは\nききめ ながもち! こうか ばつぐん!\pつまり むしよけスプレー よりも\nすごい ってことね!$"
	.if (. - gText_Rom_204E0B) > 0x3a
	.error "gText_Rom_204E0B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E0B) < 0x3a
	.space 0x3a - (. - gText_Rom_204E0B)
	.endif

	@ data/maps/FortreeCity_Mart/scripts.inc:43 FortreeCity_Mart_Text_StockUpOnItems
	.globl gText_Rom_204E45
gText_Rom_204E45: @ 0x08204E45
	.string "もしも ってことが あるかも しれないし\nどうぐは おおめに かうように してるのよ$"
	.if (. - gText_Rom_204E45) > 0x2b
	.error "gText_Rom_204E45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E45) < 0x2b
	.space 0x2b - (. - gText_Rom_204E45)
	.endif

	@ data/maps/FortreeCity_Mart/scripts.inc:46 FortreeCity_Mart_Text_RareCandyMakesMonGrow
	.globl gText_Rom_204E70
gText_Rom_204E70: @ 0x08204E70
	.string "ふしぎなアメを あげると\nポケモン いっきに そだって\lレベルが あがっちゃうんだ!$"
	.if (. - gText_Rom_204E70) > 0x2b
	.error "gText_Rom_204E70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204E70) < 0x2b
	.space 0x2b - (. - gText_Rom_204E70)
	.endif
	.incbin "baserom.gba", 0x204e9b, 0xb8

	@ data/maps/FortreeCity_House2/scripts.inc:44 FortreeCity_House2_Text_HiddenPowersArousedByNature
	.globl gText_Rom_204F53
gText_Rom_204F53: @ 0x08204F53
	.string "ひとも ポケモンも\nしぜんの なかで くらすことで\lもともとの パワーが めざめる……$"
	.if (. - gText_Rom_204F53) > 0x2c
	.error "gText_Rom_204F53 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204F53) < 0x2c
	.space 0x2c - (. - gText_Rom_204F53)
	.endif

	@ data/maps/FortreeCity_House2/scripts.inc:47 FortreeCity_House2_Text_CoinInWhichHand
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_204F7F
gText_Rom_204F7F: @ 0x08204F7F
	.string "おぬしの パワーが めざめているか\nたしかめると するかの……\pどれ…… わしの みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい$"
	.if (. - gText_Rom_204F7F) != 0x56
	.error "gText_Rom_204F7F must retain its original byte length"
	.endif
	.globl gText_Rom_204FD1
	.set gText_Rom_204FD1, gText_Rom_204F7F + 0x52

	@ data/maps/FortreeCity_House2/scripts.inc:50 FortreeCity_House2_Text_CorrectTryAgainWhichHand (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_204FD5
gText_Rom_204FD5: @ 0x08204FD5
	.string "おお! せいかい じゃ!\pつぎは みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい$"
	.if (. - gText_Rom_204FD5) != 0x3e
	.error "gText_Rom_204FD5 must retain its original byte length"
	.endif
	.globl gText_Rom_20500F
	.set gText_Rom_20500F, gText_Rom_204FD5 + 0x3a

	@ data/maps/FortreeCity_House2/scripts.inc:50 FortreeCity_House2_Text_CorrectTryAgainWhichHand (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205013
gText_Rom_205013: @ 0x08205013
	.string "おお! せいかい じゃ!\pつぎは みぎてと ひだりて\nどちらに コインが はいっておるか\lちょっかんで えらんで みなさい$"
	.if (. - gText_Rom_205013) != 0x3e
	.error "gText_Rom_205013 must retain its original byte length"
	.endif
	.globl gText_Rom_20504D
	.set gText_Rom_20504D, gText_Rom_205013 + 0x3a

	@ data/maps/FortreeCity_House2/scripts.inc:56 FortreeCity_House2_Text_YourHiddenPowerHasAwoken
	.globl gText_Rom_205051
gText_Rom_205051: @ 0x08205051
	.string "おお! みごと じゃ!\nおぬしの パワーは めざめているの!\pこれを あげるから\nおぬしの ポケモンも パワーを\lめざめさせて やると ええぞ!$"
	.if (. - gText_Rom_205051) > 0x49
	.error "gText_Rom_205051 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205051) < 0x49
	.space 0x49 - (. - gText_Rom_205051)
	.endif

	@ data/maps/FortreeCity_House2/scripts.inc:59 FortreeCity_House2_Text_ExplainHiddenPower
	.globl gText_Rom_20509A
gText_Rom_20509A: @ 0x0820509A
	.string "めざめるパワーは ポケモンによって\nいりょくが かわる わざ なんじゃよ!$"
	.if (. - gText_Rom_20509A) > 0x26
	.error "gText_Rom_20509A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20509A) < 0x26
	.space 0x26 - (. - gText_Rom_20509A)
	.endif

	@ data/maps/FortreeCity_House2/scripts.inc:62 FortreeCity_House2_Text_YouGuessedWrong
	.globl gText_Rom_2050C0
gText_Rom_2050C0: @ 0x082050C0
	.string "ざんねん……\nはずれ じゃ……$"
	.if (. - gText_Rom_2050C0) > 0x10
	.error "gText_Rom_2050C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2050C0) < 0x10
	.space 0x10 - (. - gText_Rom_2050C0)
	.endif
	.incbin "baserom.gba", 0x2050d0, 0x13

	@ data/maps/FortreeCity_House3/scripts.inc:12 FortreeCity_House3_Text_MetStevenHadAmazingPokemon
	.globl gText_Rom_2050E3
gText_Rom_2050E3: @ 0x082050E3
	.string "ポケモンずかんで\nおもいだした ことが あるよ\pめずらしい いしを さがしてるとき\nダイゴって トレーナーと であったけど\lあいつの ポケモン すごいね!\pめずらしい だけでなく\nおそろしいほど きたえられてた!\pもしかしたら この まちの\nジムリーダーよりも つよいかも……$"
	.if (. - gText_Rom_2050E3) > 0x8b
	.error "gText_Rom_2050E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2050E3) < 0x8b
	.space 0x8b - (. - gText_Rom_2050E3)
	.endif

	@ data/maps/FortreeCity_House3/scripts.inc:15 FortreeCity_House3_Text_OhYouHavePokedex
	.globl gText_Rom_20516E
gText_Rom_20516E: @ 0x0820516E
	.string "きみの もっている それ なに?\p…… …… ……\pへー ポケモンずかん っていうんだ?\nすごいねえ!$"
	.if (. - gText_Rom_20516E) > 0x34
	.error "gText_Rom_20516E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20516E) < 0x34
	.space 0x34 - (. - gText_Rom_20516E)
	.endif
	.incbin "baserom.gba", 0x2051a2, 0xb3

	@ data/maps/FortreeCity_House4/scripts.inc:65 FortreeCity_House4_Text_BringsWorldCloserTogether
	.globl gText_Rom_205255
gText_Rom_205255: @ 0x08205255
	.string "ポケモンと いることで\nなかの いい ともだちが ふえていく……\pこうして せかいは つながって いくのね!\nすてきだわ!$"
	.if (. - gText_Rom_205255) > 0x3e
	.error "gText_Rom_205255 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205255) < 0x3e
	.space 0x3e - (. - gText_Rom_205255)
	.endif

	@ data/maps/FortreeCity_House4/scripts.inc:68 FortreeCity_House4_Text_GoBirdPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205293
gText_Rom_205293: @ 0x08205293
	.string "それっ!\nゆけっ とりポケモン$"
	.if (. - gText_Rom_205293) != 0x10
	.error "gText_Rom_205293 must retain its original byte length"
	.endif
	.globl gText_Rom_20529E
	.set gText_Rom_20529E, gText_Rom_205293 + 0xb

	@ data/maps/FortreeCity_House4/scripts.inc:71 FortreeCity_House4_Text_AskedWingullToRunErrand
	.globl gText_Rom_2052A3
gText_Rom_2052A3: @ 0x082052A3
	.string "えへへ キャモメに\nちょっと おつかいを たのんだのさ$"
	.if (. - gText_Rom_2052A3) > 0x1c
	.error "gText_Rom_2052A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2052A3) < 0x1c
	.space 0x1c - (. - gText_Rom_2052A3)
	.endif

	@ data/maps/FortreeCity_House4/scripts.inc:74 FortreeCity_House4_Text_WelcomeWingullTakeMentalHerb
	.globl gText_Rom_2052BF
gText_Rom_2052BF: @ 0x082052BF
	.string "よーし!\nおかえり キャモメ!\pあれえ? なに もってるんだ?\pメンタルハーブ かあ……\nどこかで ひろったんだな\pでも ぼく トレーナーじゃ ないからな\nきみに あげるよ!$"
	.if (. - gText_Rom_2052BF) > 0x58
	.error "gText_Rom_2052BF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2052BF) < 0x58
	.space 0x58 - (. - gText_Rom_2052BF)
	.endif

	@ data/maps/FortreeCity_House4/scripts.inc:77 FortreeCity_House4_Text_FriendsFarAwayThanksToWingull
	.globl gText_Rom_205317
gText_Rom_205317: @ 0x08205317
	.string "キャモメの おかげで\nとおくの ともだちとも なかよし なのさ!$"
	.if (. - gText_Rom_205317) > 0x21
	.error "gText_Rom_205317 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205317) < 0x21
	.space 0x21 - (. - gText_Rom_205317)
	.endif

	@ data/maps/FortreeCity_House4/scripts.inc:80 FortreeCity_House4_Text_Wingull (+1 aliases)
	.globl gText_Rom_205338
gText_Rom_205338: @ 0x08205338
	.string "キャモメ『ぴひょー!$"
	.if (. - gText_Rom_205338) > 0xb
	.error "gText_Rom_205338 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205338) < 0xb
	.space 0xb - (. - gText_Rom_205338)
	.endif
	.incbin "baserom.gba", 0x205343, 0x26

	@ data/maps/FortreeCity_House5/scripts.inc:22 FortreeCity_House5_Text_TreeHousesAreGreat
	.globl gText_Rom_205369
gText_Rom_205369: @ 0x08205369
	.string "ヒワマキの ツリーハウスって さいこう!\nポケモンと いっしょに くらすなら\lいちばんの まちだと おもっているわ!$"
	.if (. - gText_Rom_205369) > 0x3b
	.error "gText_Rom_205369 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205369) < 0x3b
	.space 0x3b - (. - gText_Rom_205369)
	.endif

	@ data/maps/FortreeCity_House5/scripts.inc:25 FortreeCity_House5_Text_AdaptedToNature
	.globl gText_Rom_2053A4
gText_Rom_2053A4: @ 0x082053A4
	.string "ポケモンも ひとも\nしぜんに あわせて くらしてきたからな\pいまさら じぶんらの つごうに\nしぜんを あわせなくて いいんだよ$"
	.if (. - gText_Rom_2053A4) > 0x40
	.error "gText_Rom_2053A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2053A4) < 0x40
	.space 0x40 - (. - gText_Rom_2053A4)
	.endif

	@ data/maps/FortreeCity_House5/scripts.inc:28 FortreeCity_House5_Text_Zigzagoon
	.globl gText_Rom_2053E4
gText_Rom_2053E4: @ 0x082053E4
	.string "ジグザグマ『ぶふう!!$"
	.if (. - gText_Rom_2053E4) > 0xc
	.error "gText_Rom_2053E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2053E4) < 0xc
	.space 0xc - (. - gText_Rom_2053E4)
	.endif
	.incbin "baserom.gba", 0x2053f0, 0x6c

	@ data/maps/FortreeCity_DecorationShop/scripts.inc:56 FortreeCity_DecorationShop_Text_MerchandiseSentToPC
	.globl gText_Rom_20545C
gText_Rom_20545C: @ 0x0820545C
	.string "ここで かった ものは\nパソコンに とどけられる!\pなんと すばらしい! ついでに わしも\nいえまで とどけて くれないものか$"
	.if (. - gText_Rom_20545C) > 0x40
	.error "gText_Rom_20545C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20545C) < 0x40
	.space 0x40 - (. - gText_Rom_20545C)
	.endif

	@ data/maps/FortreeCity_DecorationShop/scripts.inc:59 FortreeCity_DecorationShop_Text_BuyingDeskForDolls
	.globl gText_Rom_20549C
gText_Rom_20549C: @ 0x0820549C
	.string "すてきな つくえを かって そのうえに\nかわいい ぬいぐるみを ならべるんだ!\pそうしないと ひみつきちに おくとき\nつちで よごれたり トゲが ささって\lぬいぐるみが かわいそう だもん!$"
	.if (. - gText_Rom_20549C) > 0x60
	.error "gText_Rom_20549C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20549C) < 0x60
	.space 0x60 - (. - gText_Rom_20549C)
	.endif
	.incbin "baserom.gba", 0x2054fc, 0xdc

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:76 LilycoveCity_CoveLilyMotel_1F_Text_GuestsDoubledByMascot
	.globl gText_Rom_2055D8
gText_Rom_2055D8: @ 0x082055D8
	.string "ほほう ポケモンの みりょくで\nおきゃくさまが ばいぞう したって!?\pそうかあ うちも かわいい ポケモンを\nりょかんの マスコットに すれば\pもっと たくさんの おきゃくさまが\nとまりに きてくれるように なるかな?$"
	.if (. - gText_Rom_2055D8) > 0x6f
	.error "gText_Rom_2055D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2055D8) < 0x6f
	.space 0x6f - (. - gText_Rom_2055D8)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:79 LilycoveCity_CoveLilyMotel_1F_Text_NoGuestsWithTeamAqua
	.globl gText_Rom_205647
gText_Rom_205647: @ 0x08205647
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pアクアだん とかいう れんちゅうが\nまちに やってきた おかげで\lかんこうきゃくも さっぱり なんだよね$"
	.if (. - gText_Rom_205647) > 0x52
	.error "gText_Rom_205647 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205647) < 0x52
	.space 0x52 - (. - gText_Rom_205647)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:82 LilycoveCity_CoveLilyMotel_1F_Text_CantSeeTheTV
	.globl gText_Rom_205699
gText_Rom_205699: @ 0x08205699
	.string "あー ちょっと じゃま しないで!\nテレビが みえない じゃないか!$"
	.if (. - gText_Rom_205699) > 0x23
	.error "gText_Rom_205699 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205699) < 0x23
	.space 0x23 - (. - gText_Rom_205699)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:85 LilycoveCity_CoveLilyMotel_1F_Text_MonFoundLostItem
	.globl gText_Rom_2056BC
gText_Rom_2056BC: @ 0x082056BC
	.string "なんと! なくした どうぐを\nポケモンが ひろって きたって!?\pそうかあ うちも そんな\nかしこい ポケモンが いてくれれば\pおきゃくさまの なくした ものも\nすぐに みつかるのになぁ……$"
	.if (. - gText_Rom_2056BC) > 0x60
	.error "gText_Rom_2056BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2056BC) < 0x60
	.space 0x60 - (. - gText_Rom_2056BC)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:88 LilycoveCity_CoveLilyMotel_1F_Text_HeardAquaHideoutBusted
	.globl gText_Rom_20571C
gText_Rom_20571C: @ 0x0820571C
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pそういえば だれかが アクアだんの\nアジトを かいめつ させた らしいね!\pおかげで さっき だんたいさん からの\nしゅくはく よやくが はいったよ!\pたしか…… ゲームなんとか っていう\nかいしゃ だったかな……$"
	.if (. - gText_Rom_20571C) > 0x89
	.error "gText_Rom_20571C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20571C) < 0x89
	.space 0x89 - (. - gText_Rom_20571C)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:91 LilycoveCity_CoveLilyMotel_1F_Text_HouseSittingMonCaughtBurglar
	.globl gText_Rom_2057A5
gText_Rom_2057A5: @ 0x082057A5
	.string "なんと! しのびこんだ どろぼうを\nるすばんの ポケモンが つかまえたって!?\pそうかあ うちも ガードマンの かわりに\nつよい ポケモンが いてくれれば\pおきゃくさまの あんぜんを\nまもることが できそうだなぁ……$"
	.if (. - gText_Rom_2057A5) > 0x6d
	.error "gText_Rom_2057A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2057A5) < 0x6d
	.space 0x6d - (. - gText_Rom_2057A5)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_1F/scripts.inc:94 LilycoveCity_CoveLilyMotel_1F_Text_BetterGetWorkingOnGuestsDinner
	.globl gText_Rom_205812
gText_Rom_205812: @ 0x08205812
	.string "あ ごめん ごめん!\nテレビに むちゅう だったもんで!\pそういえば さっき\nだんたいさん が とうちゃく したよ!\pゲームフリークって いうから\nゲームの かいしゃの ひとたち かなぁ?\lああ ごはんの じゅんびを しなくちゃ……$"
	.if (. - gText_Rom_205812) > 0x75
	.error "gText_Rom_205812 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205812) < 0x75
	.space 0x75 - (. - gText_Rom_205812)
	.endif
	.incbin "baserom.gba", 0x205887, 0xa2

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:68 LilycoveCity_CoveLilyMotel_2F_Text_ShowMeCompletedDex
	.globl gText_Rom_205929
gText_Rom_205929: @ 0x08205929
	.string "ぼくは ゲーム デザイナー\pへー\nポケモンずかん あつめてるの?\pぜんぶ あつめるの\nたいへん だけど がんばって!\pもし ぜんぶ あつめたら おしえてよ!$"
	.if (. - gText_Rom_205929) > 0x4f
	.error "gText_Rom_205929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205929) < 0x4f
	.space 0x4f - (. - gText_Rom_205929)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:71 LilycoveCity_CoveLilyMotel_2F_Text_FilledPokedexGiveYouThis
	.globl gText_Rom_205978
gText_Rom_205978: @ 0x08205978
	.string "すごいなー!\nいやー すごいよ きみ!!\pこの ポケモンずかん\nぜんぶ あつまって いるんだね!\lそれだけ ポケモンを あいしてるんだね!\pかんどう しました!\nきみを ひょうしょう させてもらいますね!$"
	.if (. - gText_Rom_205978) > 0x67
	.error "gText_Rom_205978 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205978) < 0x67
	.space 0x67 - (. - gText_Rom_205978)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:74 LilycoveCity_CoveLilyMotel_2F_Text_ImTheProgrammer
	.globl gText_Rom_2059DF
gText_Rom_2059DF: @ 0x082059DF
	.string "おれさま?\pプログラマーだよ! こっちの\nスロットは どんなのか たのしみだな!$"
	.if (. - gText_Rom_2059DF) > 0x29
	.error "gText_Rom_2059DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2059DF) < 0x29
	.space 0x29 - (. - gText_Rom_2059DF)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:77 LilycoveCity_CoveLilyMotel_2F_Text_ImTheGraphicArtist
	.globl gText_Rom_205A08
gText_Rom_205A08: @ 0x08205A08
	.string "おれ グラフィッカー!\nホウエンの ポケモンは おもしろいね$"
	.if (. - gText_Rom_205A08) > 0x1f
	.error "gText_Rom_205A08 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A08) < 0x1f
	.space 0x1f - (. - gText_Rom_205A08)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:80 LilycoveCity_CoveLilyMotel_2F_Text_GirlsAreCute
	.globl gText_Rom_205A27
gText_Rom_205A27: @ 0x08205A27
	.string "うきわガール かわいい でしょ!\nうきわガールと しょうぶ なんて……\pくー! たまらんー!\pふたごちゃん かわいい でしょ!\nふたごちゃんと 2たい2 なんて……\pくー! たまらんー!$"
	.if (. - gText_Rom_205A27) > 0x5e
	.error "gText_Rom_205A27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A27) < 0x5e
	.space 0x5e - (. - gText_Rom_205A27)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:83 LilycoveCity_CoveLilyMotel_2F_Text_SeaBreezeTicklesHeart
	.globl gText_Rom_205A85
gText_Rom_205A85: @ 0x08205A85
	.string "なんだか しおかぜが こころを くすぐって\nきもち いいですね!$"
	.if (. - gText_Rom_205A85) > 0x21
	.error "gText_Rom_205A85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205A85) < 0x21
	.space 0x21 - (. - gText_Rom_205A85)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:86 LilycoveCity_CoveLilyMotel_2F_Text_NeverLeaveWithoutGameBoy
	.globl gText_Rom_205AA6
gText_Rom_205AA6: @ 0x08205AA6
	.string "いつ どこで たいせんや しょうぶを\nいどまれるか わからないからな\lゲームボーイ アドバンスは てばなせないよ!$"
	.if (. - gText_Rom_205AA6) > 0x3a
	.error "gText_Rom_205AA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205AA6) < 0x3a
	.space 0x3a - (. - gText_Rom_205AA6)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:89 LilycoveCity_CoveLilyMotel_2F_Text_SnoozingPreferBattles
	.globl gText_Rom_205AE0
gText_Rom_205AE0: @ 0x08205AE0
	.string "エニシダ『…… ……\n…… …… ……ズ\p…… …… ……!\nあ ああ {PLAYER}{KUN}\lごめんごめん ひるね してたんだ\pポケモンコンテスト ってのが\nどんな ものか みに きたんだ\lなかなか おもしろそう だけど……\pまあ わたしは やっぱり\nじゅんすいに たたかって つよい\lトレーナーが すき だけどね\pうん {PLAYER}{KUN}は\nジムに コンテストに バトルテント\lなんでも たのしんで くれよ!$"
	.if (. - gText_Rom_205AE0) > 0xc3
	.error "gText_Rom_205AE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205AE0) < 0xc3
	.space 0xc3 - (. - gText_Rom_205AE0)
	.endif

	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:92 LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy
	.globl gText_Rom_205BA3
gText_Rom_205BA3: @ 0x08205BA3
	.string "エニシダ『コンテストに かつための\nせんりゃくを ねるのも\lつよい トレーナーに なるための\lほうほうの ひとつでは あるね$"
	.if (. - gText_Rom_205BA3) > 0x3f
	.error "gText_Rom_205BA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205BA3) < 0x3f
	.space 0x3f - (. - gText_Rom_205BA3)
	.endif
	.incbin "baserom.gba", 0x205be2, 0x193

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:161 LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum
	.globl gText_Rom_205D75
gText_Rom_205D75: @ 0x08205D75
	.string "ミナモ びじゅつかん へ ようこそ!\pポケモンたちを えがいた\nすばらしい めいがの かずかずを\lゆっくり ごらんに なって くださいね!$"
	.if (. - gText_Rom_205D75) > 0x46
	.error "gText_Rom_205D75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205D75) < 0x46
	.space 0x46 - (. - gText_Rom_205D75)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:164 LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	.globl gText_Rom_205DBB
gText_Rom_205DBB: @ 0x08205DBB
	.string "わたしは この びじゅつかんの\nかんちょう です!\pあなたは おわかいのに びじゅつかんに\nいらっしゃる とは かんしん ですね!\pもう えは ごらんに なりましたか?$"
	.if (. - gText_Rom_205DBB) > 0x55
	.error "gText_Rom_205DBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205DBB) < 0x55
	.space 0x55 - (. - gText_Rom_205DBB)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:167 LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime
	.globl gText_Rom_205E10
gText_Rom_205E10: @ 0x08205E10
	.string "では おじゃま いたしません から\nゆっくり みていって ください!$"
	.if (. - gText_Rom_205E10) > 0x23
	.error "gText_Rom_205E10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205E10) < 0x23
	.space 0x23 - (. - gText_Rom_205E10)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:170 LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings
	.globl gText_Rom_205E33
gText_Rom_205E33: @ 0x08205E33
	.string "おや? あなたは\nポケモントレーナーさん みたい ですね\pえにも きょうみが おあり ですか?$"
	.if (. - gText_Rom_205E33) > 0x30
	.error "gText_Rom_205E33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205E33) < 0x30
	.space 0x30 - (. - gText_Rom_205E33)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:173 LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205E63
gText_Rom_205E63: @ 0x08205E63
	.string "そうですか……\pそれなのに わざわざ おいで くださって\nこうえい ですよ$"
	.if (. - gText_Rom_205E63) != 0x26
	.error "gText_Rom_205E63 must retain its original byte length"
	.endif
	.globl gText_Rom_205E85
	.set gText_Rom_205E85, gText_Rom_205E63 + 0x22

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:176 LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe
	.globl gText_Rom_205E89
gText_Rom_205E89: @ 0x08205E89
	.string "そうですか! えが おすき ですか!\pでは ちょっと わたしに\nついてきて ください ませんか?$"
	.if (. - gText_Rom_205E89) > 0x31
	.error "gText_Rom_205E89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205E89) < 0x31
	.space 0x31 - (. - gText_Rom_205E89)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:179 LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting
	.globl gText_Rom_205EBA
gText_Rom_205EBA: @ 0x08205EBA
	.string "むかしの ひとが かいた えだ!\nところどころ えのぐが はがれてる$"
	.if (. - gText_Rom_205EBA) > 0x23
	.error "gText_Rom_205EBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205EBA) < 0x23
	.space 0x23 - (. - gText_Rom_205EBA)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:182 LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205EDD
gText_Rom_205EDD: @ 0x08205EDD
	.string "みたことも ないような ふしぎな\nけしきが えがかれている$"
	.if (. - gText_Rom_205EDD) != 0x1e
	.error "gText_Rom_205EDD must retain its original byte length"
	.endif
	.globl gText_Rom_205EF7
	.set gText_Rom_205EF7, gText_Rom_205EDD + 0x1a

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:185 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205EFB
gText_Rom_205EFB: @ 0x08205EFB
	.string "ひざに ポケモンを のせて ほほえむ\nうつくしい じょせいが えがかれている$"
	.if (. - gText_Rom_205EFB) != 0x27
	.error "gText_Rom_205EFB must retain its original byte length"
	.endif
	.globl gText_Rom_205F1E
	.set gText_Rom_205F1E, gText_Rom_205EFB + 0x23

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:188 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon
	.globl gText_Rom_205F22
gText_Rom_205F22: @ 0x08205F22
	.string "むかしの ひとが そうぞうで かいた\nでんせつの ポケモンの えだ!$"
	.if (. - gText_Rom_205F22) > 0x23
	.error "gText_Rom_205F22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205F22) < 0x23
	.space 0x23 - (. - gText_Rom_205F22)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:191 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205F45
gText_Rom_205F45: @ 0x08205F45
	.string "かぜに なびいて きもち よさそうに\nゆれている くさポケモンが えがかれている$"
	.if (. - gText_Rom_205F45) != 0x29
	.error "gText_Rom_205F45 must retain its original byte length"
	.endif
	.globl gText_Rom_205F6A
	.set gText_Rom_205F6A, gText_Rom_205F45 + 0x25

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:194 LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries
	.globl gText_Rom_205F6E
gText_Rom_205F6E: @ 0x08205F6E
	.string "おいしそうな きのみが えがかれている\nおなかが すいて きそう!$"
	.if (. - gText_Rom_205F6E) > 0x22
	.error "gText_Rom_205F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205F6E) < 0x22
	.space 0x22 - (. - gText_Rom_205F6E)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:197 LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica
	.globl gText_Rom_205F90
gText_Rom_205F90: @ 0x08205F90
	.string "こだいの とりポケモンを ほった\nゆうめいな ちょうこくの レプリカだ!$"
	.if (. - gText_Rom_205F90) > 0x25
	.error "gText_Rom_205F90 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205F90) < 0x25
	.space 0x25 - (. - gText_Rom_205F90)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:200 LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_205FB5
gText_Rom_205FB5: @ 0x08205FB5
	.string "くろい いしで つくられた\nおおきい モンスターボールだ!\lむかし おまつりに つかって いたらしい$"
	.if (. - gText_Rom_205FB5) != 0x33
	.error "gText_Rom_205FB5 must retain its original byte length"
	.endif
	.globl gText_Rom_205FE4
	.set gText_Rom_205FE4, gText_Rom_205FB5 + 0x2f

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:203 LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText
	.globl gText_Rom_205FE8
gText_Rom_205FE8: @ 0x08205FE8
	.string "ポケモンの すがたと しらない もじが\nこまかく ほられてある せきばんだ!$"
	.if (. - gText_Rom_205FE8) > 0x27
	.error "gText_Rom_205FE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205FE8) < 0x27
	.space 0x27 - (. - gText_Rom_205FE8)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:206 LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence
	.globl gText_Rom_20600F
gText_Rom_20600F: @ 0x0820600F
	.string "うーん すばらしい さくひんだ……$"
	.if (. - gText_Rom_20600F) > 0x12
	.error "gText_Rom_20600F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20600F) < 0x12
	.space 0x12 - (. - gText_Rom_20600F)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:209 LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts
	.globl gText_Rom_206021
gText_Rom_206021: @ 0x08206021
	.string "ポケモン しょうぶも いいけど\pげいじゅつを あいする きもちも\nわすれずに いないとね!$"
	.if (. - gText_Rom_206021) > 0x2e
	.error "gText_Rom_206021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206021) < 0x2e
	.space 0x2e - (. - gText_Rom_206021)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:212 LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration
	.globl gText_Rom_20604F
gText_Rom_20604F: @ 0x0820604F
	.string "この びじゅつかんは\nすごい えが たくさん みられるし\lかんちょうも すばらしい ひとだし\lぼくたち がかの あいだ でも\lあこがれの ばしょ なんだよ$"
	.if (. - gText_Rom_20604F) > 0x4e
	.error "gText_Rom_20604F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20604F) < 0x4e
	.space 0x4e - (. - gText_Rom_20604F)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:215 LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty
	.globl gText_Rom_20609D
gText_Rom_20609D: @ 0x0820609D
	.string "この おんなの ひと きれーい!\nママみたーい!$"
	.if (. - gText_Rom_20609D) > 0x19
	.error "gText_Rom_20609D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20609D) < 0x19
	.space 0x19 - (. - gText_Rom_20609D)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:218 LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable
	.globl gText_Rom_2060B6
gText_Rom_2060B6: @ 0x082060B6
	.string "この ポケモン かわいいわ!\nうちの ぼうや みたい!$"
	.if (. - gText_Rom_2060B6) > 0x1c
	.error "gText_Rom_2060B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2060B6) < 0x1c
	.space 0x1c - (. - gText_Rom_2060B6)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:221 LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings
	.globl gText_Rom_2060D2
gText_Rom_2060D2: @ 0x082060D2
	.string "この びじゅつかんに あたらしい えが\nはいったって きいたから\lさっそく みにきて みたの!\pあたらしい えは 2かい かな?$"
	.if (. - gText_Rom_2060D2) > 0x41
	.error "gText_Rom_2060D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2060D2) < 0x41
	.space 0x41 - (. - gText_Rom_2060D2)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:224 LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful
	.globl gText_Rom_206113
gText_Rom_206113: @ 0x08206113
	.string "さいきん かんちょうの ごきげんが\nとても いいみたい\pいいこと あったんだね きっと$"
	.if (. - gText_Rom_206113) > 0x2c
	.error "gText_Rom_206113 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206113) < 0x2c
	.space 0x2c - (. - gText_Rom_206113)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:227 LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings
	.globl gText_Rom_20613F
gText_Rom_20613F: @ 0x0820613F
	.string "ここで いい えを たくさん みて\nべんきょう しないとな!\pここに いつか じぶんの さくひんを\nかざって もらうのが ゆめ なんだ!$"
	.if (. - gText_Rom_20613F) > 0x45
	.error "gText_Rom_20613F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20613F) < 0x45
	.space 0x45 - (. - gText_Rom_20613F)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:230 LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination
	.globl gText_Rom_206184
gText_Rom_206184: @ 0x08206184
	.string "この びじゅつかんも すっかり ミナモの\n……いや ホウエンちほうの\lかんこう めいしょに なったねえ!\pきいた はなしだと\nひとりの トレーナーが 2かいの えを\lそろえて くれた らしいよ!$"
	.if (. - gText_Rom_206184) > 0x62
	.error "gText_Rom_206184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206184) < 0x62
	.space 0x62 - (. - gText_Rom_206184)
	.endif
	.incbin "baserom.gba", 0x2061e6, 0x2b1

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:221 LilycoveCity_LilycoveMuseum_2F_Text_ThisIsExhibitHall
	.globl gText_Rom_206497
gText_Rom_206497: @ 0x08206497
	.string "ここは とくべつ てんじしつ です$"
	.if (. - gText_Rom_206497) > 0x12
	.error "gText_Rom_206497 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206497) < 0x12
	.space 0x12 - (. - gText_Rom_206497)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:224 LilycoveCity_LilycoveMuseum_2F_Text_ExplainExhibitHall
	.globl gText_Rom_2064A9
gText_Rom_2064A9: @ 0x082064A9
	.string "ごらんの とおり まだ\nえが かざられて おりません\pここには 1かいに あるような\nいわゆる めいが といった ものとは\lちがう えを かざりたいの ですよ!\pふるい めいが ばかりが\nげいじゅつ なのでは ありません!\pこの てんじしつ には……\pいまにも ポケモンが とびだして きそうな\nモダンで いきいきとした さくひんを\lかざって みたいのです!$"
	.if (. - gText_Rom_2064A9) > 0xb4
	.error "gText_Rom_2064A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2064A9) < 0xb4
	.space 0xb4 - (. - gText_Rom_2064A9)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:227 LilycoveCity_LilycoveMuseum_2F_Text_PleaseObtainPaintingsForExhibit
	.globl gText_Rom_20655D
gText_Rom_20655D: @ 0x0820655D
	.string "つい ながながと しつれい しました\pあなたは まだ おわかいし\nたびを なさって いる ようだから\pいきいきとした ポケモンや\nそれを えがいた すてきな さくひんに\lであわれる かも しれません!\pもし そんな さくひんに であったら\nそのえを ここに かざれる ように\lあなたから おねがい して くださると\lたいへん うれしいです$"
	.if (. - gText_Rom_20655D) > 0xaa
	.error "gText_Rom_20655D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20655D) < 0xaa
	.space 0xaa - (. - gText_Rom_20655D)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:230 LilycoveCity_LilycoveMuseum_2F_Text_WishToFillExhibit
	.globl gText_Rom_206607
gText_Rom_206607: @ 0x08206607
	.string "この てんじしつ には\nげんだいの いきいき とした ポケモンの\lえを かざりたい ものです$"
	.if (. - gText_Rom_206607) > 0x2f
	.error "gText_Rom_206607 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206607) < 0x2f
	.space 0x2f - (. - gText_Rom_206607)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:233 LilycoveCity_LilycoveMuseum_2F_Text_ThanksAddedNewPainting
	.globl gText_Rom_206636
gText_Rom_206636: @ 0x08206636
	.string "おかげさまで えを\nかざる ことが できましたよ!\pあなたの ポケモン なんですって ね!\nほんとうに すばらしい です!\pどうも ありがとう……!$"
	.if (. - gText_Rom_206636) > 0x4b
	.error "gText_Rom_206636 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206636) < 0x4b
	.space 0x4b - (. - gText_Rom_206636)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:236 LilycoveCity_LilycoveMuseum_2F_Text_ItsYouPlayer
	.globl gText_Rom_206681
gText_Rom_206681: @ 0x08206681
	.string "あ あなた! {PLAYER}さん!$"
	.if (. - gText_Rom_206681) > 0xd
	.error "gText_Rom_206681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206681) < 0xd
	.space 0xd - (. - gText_Rom_206681)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:239 LilycoveCity_LilycoveMuseum_2F_Text_PaintingsAttractedMoreGuests
	.globl gText_Rom_20668E
gText_Rom_20668E: @ 0x0820668E
	.string "どうです みて ください!\nこの すばらしい さくひん たちを!\pどれも おたがいに\nひけをとらない すばらしさ!\pこの えの おかげで びじゅつかんに\nこられる かたも ふえたんです!\pほんとうに ありがとう {PLAYER}さん!\nわたしの ゆめが かないました!$"
	.if (. - gText_Rom_20668E) > 0x81
	.error "gText_Rom_20668E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20668E) < 0x81
	.space 0x81 - (. - gText_Rom_20668E)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:242 LilycoveCity_LilycoveMuseum_2F_Text_TokenOfGratitude
	.globl gText_Rom_20670F
gText_Rom_20670F: @ 0x0820670F
	.string "……これは わたしからの\nおれいの きもち です!$"
	.if (. - gText_Rom_20670F) > 0x1a
	.error "gText_Rom_20670F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20670F) < 0x1a
	.space 0x1a - (. - gText_Rom_20670F)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:245 LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou
	.globl gText_Rom_206729
gText_Rom_206729: @ 0x08206729
	.string "それでは また いらした ときに\nさしあげましょう$"
	.if (. - gText_Rom_206729) > 0x1a
	.error "gText_Rom_206729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206729) < 0x1a
	.space 0x1a - (. - gText_Rom_206729)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:248 LilycoveCity_LilycoveMuseum_2F_Text_HonorToHaveYouVisit
	.globl gText_Rom_206743
gText_Rom_206743: @ 0x08206743
	.string "やあ これは {PLAYER}さん!\pおいそがしい たびの あいまに\nおたちより くださって こうえいです!\pどうぞ ごゆっくり おすごしくださいね$"
	.if (. - gText_Rom_206743) > 0x45
	.error "gText_Rom_206743 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206743) < 0x45
	.space 0x45 - (. - gText_Rom_206743)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:251 LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame
	.globl gText_Rom_206788
gText_Rom_206788: @ 0x08206788
	.string "ももいろの かざりが ついた がくぶちだ!$"
	.if (. - gText_Rom_206788) > 0x16
	.error "gText_Rom_206788 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206788) < 0x16
	.space 0x16 - (. - gText_Rom_206788)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:254 LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame
	.globl gText_Rom_20679E
gText_Rom_20679E: @ 0x0820679E
	.string "きいろの かざりが ついた がくぶちだ!$"
	.if (. - gText_Rom_20679E) > 0x15
	.error "gText_Rom_20679E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20679E) < 0x15
	.space 0x15 - (. - gText_Rom_20679E)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:257 LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame
	.globl gText_Rom_2067B3
gText_Rom_2067B3: @ 0x082067B3
	.string "あおい かざりが ついた がくぶちだ!$"
	.if (. - gText_Rom_2067B3) > 0x14
	.error "gText_Rom_2067B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067B3) < 0x14
	.space 0x14 - (. - gText_Rom_2067B3)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:260 LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame
	.globl gText_Rom_2067C7
gText_Rom_2067C7: @ 0x082067C7
	.string "あかい かざりが ついた がくぶちだ!$"
	.if (. - gText_Rom_2067C7) > 0x14
	.error "gText_Rom_2067C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067C7) < 0x14
	.space 0x14 - (. - gText_Rom_2067C7)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:263 LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame
	.globl gText_Rom_2067DB
gText_Rom_2067DB: @ 0x082067DB
	.string "みどりいろの かざりが ついた がくぶちだ!$"
	.if (. - gText_Rom_2067DB) > 0x17
	.error "gText_Rom_2067DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067DB) < 0x17
	.space 0x17 - (. - gText_Rom_2067DB)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:266 LilycoveCity_LilycoveMuseum_2F_Text_ItsPaintingOfPokemon
	.globl gText_Rom_2067F2
gText_Rom_2067F2: @ 0x082067F2
	.string "ポケモンの えが かざってある!$"
	.if (. - gText_Rom_2067F2) > 0x11
	.error "gText_Rom_2067F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067F2) < 0x11
	.space 0x11 - (. - gText_Rom_2067F2)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:269 LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsSurprisedMe
	.globl gText_Rom_206803
gText_Rom_206803: @ 0x08206803
	.string "ひさしぶりに きて みたら 2かいにも\nえが かざって あって びっくり!\pいいなあ あたしの ポケモンも\nこんなふうに すてきに かいて ほしいな$"
	.if (. - gText_Rom_206803) > 0x4b
	.error "gText_Rom_206803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206803) < 0x4b
	.space 0x4b - (. - gText_Rom_206803)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:272 LilycoveCity_LilycoveMuseum_2F_Text_NewPaintingsRatherAmusing
	.globl gText_Rom_20684E
gText_Rom_20684E: @ 0x0820684E
	.string "ほう…… ここが さいきん わだいの\nポケモンの えが ある ところか……\pなるほど あたらしい えが いっぱいで\nなかなか おもしろい のう……$"
	.if (. - gText_Rom_20684E) > 0x4a
	.error "gText_Rom_20684E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20684E) < 0x4a
	.space 0x4a - (. - gText_Rom_20684E)
	.endif

	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:275 LilycoveCity_LilycoveMuseum_2F_Text_ThesePaintingsOfYourPokemon
	.globl gText_Rom_206898
gText_Rom_206898: @ 0x08206898
	.string "へえー! これって\nきみの ポケモンの えなんだ!\pそれって トレーナー として\nさいこうの しあわせ だよな!$"
	.if (. - gText_Rom_206898) > 0x39
	.error "gText_Rom_206898 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206898) < 0x39
	.space 0x39 - (. - gText_Rom_206898)
	.endif
	.incbin "baserom.gba", 0x2068d1, 0xaff

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:974 LilycoveCity_ContestLobby_Text_LadyGaveMePokeblockCase
	.globl gText_Rom_2073D0
gText_Rom_2073D0: @ 0x082073D0
	.string "うわーい!\pうけつけの おねえちゃんから\nポロック いれる ケース もらった!$"
	.if (. - gText_Rom_2073D0) > 0x28
	.error "gText_Rom_2073D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2073D0) < 0x28
	.space 0x28 - (. - gText_Rom_2073D0)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:977 LilycoveCity_ContestLobby_Text_MakePokeblocksDifferentBerries
	.globl gText_Rom_2073F8
gText_Rom_2073F8: @ 0x082073F8
	.string "ポロック つくって いれて!\pでね ポロック つくる ときは\nみんなが ちがう きのみで\lつくらないと ダメ なんだよ!$"
	.if (. - gText_Rom_2073F8) > 0x3d
	.error "gText_Rom_2073F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2073F8) < 0x3d
	.space 0x3d - (. - gText_Rom_2073F8)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:980 LilycoveCity_ContestLobby_Text_YourPokemonSpurredMeToPaint
	.globl gText_Rom_207435
gText_Rom_207435: @ 0x08207435
	.string "ゆうしょう おめでとう!\pさっそく きねんに\nきみの ポケモンの えを\lかきあげたんだけど……\pなんだか きみの ポケモンの アピールが\nあまり にも すばらしくて\lいつもより うまく かけたんだ!\lほらっ これ!$"
	.if (. - gText_Rom_207435) > 0x6c
	.error "gText_Rom_207435 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207435) < 0x6c
	.space 0x6c - (. - gText_Rom_207435)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:983 LilycoveCity_ContestLobby_Text_ShouldITakePaintingToMuseum
	.globl gText_Rom_2074A1
gText_Rom_2074A1: @ 0x082074A1
	.string "どうかな? じしんさく なんだけど\nきにいったろ?\pこれくらいの でき なら\nびじゅつかんに かざられて いても\lふしぎじゃ ないね!\p……え ほんとに びじゅつかんで\nえを さがして いるって?\lじゃあ これ もっていって みようかな?$"
	.if (. - gText_Rom_2074A1) > 0x78
	.error "gText_Rom_2074A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2074A1) < 0x78
	.space 0x78 - (. - gText_Rom_2074A1)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:986 LilycoveCity_ContestLobby_Text_IllTakePaintingToMuseum
	.globl gText_Rom_207519
gText_Rom_207519: @ 0x08207519
	.string "そ そうか!\nじゃ いますぐ もっていって みるよ\lタイトルも つけて おくからね!\pこれが きにいられて\nかざって もらえて いるか どうか\lきみも こんど みに いってね!\lじゃ ありがとう!$"
	.if (. - gText_Rom_207519) > 0x63
	.error "gText_Rom_207519 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207519) < 0x63
	.space 0x63 - (. - gText_Rom_207519)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:989 LilycoveCity_ContestLobby_Text_TakeMementoOfPainting
	.globl gText_Rom_20757C
gText_Rom_20757C: @ 0x0820757C
	.string "……あ そうだ\pポケモンを かかせて もらった きねんに\nこれを うけとってよ!$"
	.if (. - gText_Rom_20757C) > 0x29
	.error "gText_Rom_20757C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20757C) < 0x29
	.space 0x29 - (. - gText_Rom_20757C)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:992 LilycoveCity_ContestLobby_Text_ReceivedARibbon
	.globl gText_Rom_2075A5
gText_Rom_2075A5: @ 0x082075A5
	.string "{PLAYER}は リボンを もらった!$"
	.if (. - gText_Rom_2075A5) > 0xf
	.error "gText_Rom_2075A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075A5) < 0xf
	.space 0xf - (. - gText_Rom_2075A5)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:995 LilycoveCity_ContestLobby_Text_PutTheRibbonOnMon
	.globl gText_Rom_2075B4
gText_Rom_2075B4: @ 0x082075B4
	.string "{PLAYER}は リボンを\n{STR_VAR_1}に つけて あげた!$"
	.if (. - gText_Rom_2075B4) > 0x16
	.error "gText_Rom_2075B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075B4) < 0x16
	.space 0x16 - (. - gText_Rom_2075B4)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:998 LilycoveCity_ContestLobby_Text_OkaySeeYou
	.globl gText_Rom_2075CA
gText_Rom_2075CA: @ 0x082075CA
	.string "それじゃね!$"
	.if (. - gText_Rom_2075CA) > 0x7
	.error "gText_Rom_2075CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075CA) < 0x7
	.space 0x7 - (. - gText_Rom_2075CA)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1001 LilycoveCity_ContestLobby_Text_TakeHomeButIdLikeToTakeToMuseum
	.globl gText_Rom_2075D1
gText_Rom_2075D1: @ 0x082075D1
	.string "うーん…… じゃあ これは\nぼくが もってかえると するか……\pでも やっぱり もっていきたいな……\nいいだろ?$"
	.if (. - gText_Rom_2075D1) > 0x39
	.error "gText_Rom_2075D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2075D1) < 0x39
	.space 0x39 - (. - gText_Rom_2075D1)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1004 LilycoveCity_ContestLobby_Text_FineThatsTheWayItIs
	.globl gText_Rom_20760A
gText_Rom_20760A: @ 0x0820760A
	.string "そっか しかたないね\nそれじゃ これは ぼくの\lいえに かざります\pつぎ がんばると するか……\nじゃあな$"
	.if (. - gText_Rom_20760A) > 0x36
	.error "gText_Rom_20760A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20760A) < 0x36
	.space 0x36 - (. - gText_Rom_20760A)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1007 LilycoveCity_ContestLobby_Text_MasterRankHereICome
	.globl gText_Rom_207640
gText_Rom_207640: @ 0x08207640
	.string "いっ いよいよ\nマスターランクに でるぞ……\pおれの ポケモンちゃんが\nこのよで いちばん\lかわいいって ことを\lしょうめいする ときが きたんだ……\lうへへへへ$"
	.if (. - gText_Rom_207640) > 0x52
	.error "gText_Rom_207640 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207640) < 0x52
	.space 0x52 - (. - gText_Rom_207640)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1010 LilycoveCity_ContestLobby_Text_WholeVarietyOfPokemonHere
	.globl gText_Rom_207692
gText_Rom_207692: @ 0x08207692
	.string "ここに くれば\nポケモンを たくさん みられるから\lさんぽコースに してるの!$"
	.if (. - gText_Rom_207692) > 0x28
	.error "gText_Rom_207692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207692) < 0x28
	.space 0x28 - (. - gText_Rom_207692)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1013 LilycoveCity_ContestLobby_Text_ContestFeastForEyes
	.globl gText_Rom_2076BA
gText_Rom_2076BA: @ 0x082076BA
	.string "いやあ コンテストかいじょうに くると\nかきがいの ある ポケモンが\lいっぱい だね!$"
	.if (. - gText_Rom_2076BA) > 0x2c
	.error "gText_Rom_2076BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2076BA) < 0x2c
	.space 0x2c - (. - gText_Rom_2076BA)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1016 LilycoveCity_ContestLobby_Text_ToughContestIsExtreme
	.globl gText_Rom_2076E6
gText_Rom_2076E6: @ 0x082076E6
	.string "たくましさコンテストって\nさいこう だよな!\pちからづよい アピール……\nほとばしる あせ…… たまらん!$"
	.if (. - gText_Rom_2076E6) > 0x36
	.error "gText_Rom_2076E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2076E6) < 0x36
	.space 0x36 - (. - gText_Rom_2076E6)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1019 LilycoveCity_ContestLobby_Text_LavishedCareOnMon
	.globl gText_Rom_20771C
gText_Rom_20771C: @ 0x0820771C
	.string "まいにち だいじに だいじに\nそだてあげた わしの ポケモン\lコンディションは カンペキ!\lきょうは かつぞおおおおおうう!$"
	.if (. - gText_Rom_20771C) > 0x3f
	.error "gText_Rom_20771C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20771C) < 0x3f
	.space 0x3f - (. - gText_Rom_20771C)
	.endif

	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1022 LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily
	.globl gText_Rom_20775B
gText_Rom_20775B: @ 0x0820775B
	.string "ママと パパと おねえちゃんと\n4にんで ポロックを つくったら\lすごく いいやつが できたんだ!\pきっと おおぜいで つくれば つくるほど\nなめらかで いい ポロックが できるんだよ!$"
	.if (. - gText_Rom_20775B) > 0x5e
	.error "gText_Rom_20775B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20775B) < 0x5e
	.space 0x5e - (. - gText_Rom_20775B)
	.endif
	.incbin "baserom.gba", 0x2077b9, 0x2ca

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:313 LilycoveCity_ContestHall_Text_TodayWonSmartnessContest
	.globl gText_Rom_207A83
gText_Rom_207A83: @ 0x08207A83
	.string "うつくしさ コンテストで\nゆうしょうした この ポケモンを\lきょうは かしこさ コンテストで\lゆうしょう させたんだぜ！\pああ じぶんの さいのうが こわい……$"
	.if (. - gText_Rom_207A83) > 0x51
	.error "gText_Rom_207A83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207A83) < 0x51
	.space 0x51 - (. - gText_Rom_207A83)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:316 LilycoveCity_ContestHall_Text_EnteredBunchOfContests
	.globl gText_Rom_207AD4
gText_Rom_207AD4: @ 0x08207AD4
	.string "なんども コンテストに でていて\nなんとなく わかって きたんだけど\pたとえば かっこいいコンテストで\nかっこいいわざを だすと うけるけど\lかしこいアピールや かわいいアピールは\lなぜか うけが わるいんだよな……$"
	.if (. - gText_Rom_207AD4) > 0x6d
	.error "gText_Rom_207AD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207AD4) < 0x6d
	.space 0x6d - (. - gText_Rom_207AD4)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:319 LilycoveCity_ContestHall_Text_ManWhoWonEarlierHadPokeblocks
	.globl gText_Rom_207B41
gText_Rom_207B41: @ 0x08207B41
	.string "さっき ゆうしょう した おにいさん\nすっごい たくさんの しゅるいの\lポロックを もってた！\pあれだけ もってれば\nゆうしょう できるのかな?$"
	.if (. - gText_Rom_207B41) > 0x49
	.error "gText_Rom_207B41 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207B41) < 0x49
	.space 0x49 - (. - gText_Rom_207B41)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:322 LilycoveCity_ContestHall_Text_IsntThisPlaceHumongous
	.globl gText_Rom_207B8A
gText_Rom_207B8A: @ 0x08207B8A
	.string "かーっ ひろいね ここは！\nいなかの コンテスト かいじょう とは\lきんちょうかんが ちがうね！$"
	.if (. - gText_Rom_207B8A) > 0x31
	.error "gText_Rom_207B8A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207B8A) < 0x31
	.space 0x31 - (. - gText_Rom_207B8A)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:325 LilycoveCity_ContestHall_Text_GiveItBestSmartAppeal
	.globl gText_Rom_207BBB
gText_Rom_207BBB: @ 0x08207BBB
	.string "しかい『はあい かしこい ポケモンと\nそして トレーナーの みなさーん！\lがんばってくださーーい！\lレッツ！ アピール！！$"
	.if (. - gText_Rom_207BBB) > 0x3e
	.error "gText_Rom_207BBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207BBB) < 0x3e
	.space 0x3e - (. - gText_Rom_207BBB)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:328 LilycoveCity_ContestHall_Text_AreYouEnjoyingThisContest
	.globl gText_Rom_207BF9
gText_Rom_207BF9: @ 0x08207BF9
	.string "しんさいん『コンテスト たのしんでますか?\pおともだちを 3にん つれてくれば\n4にん いっしょに さんか できますよ！$"
	.if (. - gText_Rom_207BF9) > 0x3d
	.error "gText_Rom_207BF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207BF9) < 0x3d
	.space 0x3d - (. - gText_Rom_207BF9)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:331 LilycoveCity_ContestHall_Text_EnteredWrongContest
	.globl gText_Rom_207C36
gText_Rom_207C36: @ 0x08207C36
	.string "あわわわ……\nでる コンテスト まちがえた……\pたくましい ポケモンを\nかしこさ コンテストに……\pよ よしっ\nかしこそうな いわくだき たのむぞ！$"
	.if (. - gText_Rom_207C36) > 0x4b
	.error "gText_Rom_207C36 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207C36) < 0x4b
	.space 0x4b - (. - gText_Rom_207C36)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:334 LilycoveCity_ContestHall_Text_RaisedMonToBeSmart
	.globl gText_Rom_207C81
gText_Rom_207C81: @ 0x08207C81
	.string "わしが ながねん\nちしきの すべてを かけて\lかしこく そだてた ポケモン！\pわかい やつらの ポケモン なんぞに\nそう やすやすと まけたりは せんぞ！\pばあさん みとるかー！?$"
	.if (. - gText_Rom_207C81) > 0x5b
	.error "gText_Rom_207C81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207C81) < 0x5b
	.space 0x5b - (. - gText_Rom_207C81)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:337 LilycoveCity_ContestHall_Text_IfMonPullsSmartMoveNext
	.globl gText_Rom_207CDC
gText_Rom_207CDC: @ 0x08207CDC
	.string "よし！ おれの ポケモンが\nこのつぎに かしこい わざをだせば\lいっきに かいじょうが エキサイトするぞ！$"
	.if (. - gText_Rom_207CDC) > 0x36
	.error "gText_Rom_207CDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207CDC) < 0x36
	.space 0x36 - (. - gText_Rom_207CDC)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:340 LilycoveCity_ContestHall_Text_DontAppreciateCuteLeechLife
	.globl gText_Rom_207D12
gText_Rom_207D12: @ 0x08207D12
	.string "やだあ！\pわたしの ズバットちゃんの\nきゅうけつが あんまり すてきで\lつづけて なんども だしてたら\lなんか がっかり されちゃってるー！$"
	.if (. - gText_Rom_207D12) > 0x47
	.error "gText_Rom_207D12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207D12) < 0x47
	.space 0x47 - (. - gText_Rom_207D12)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:343 LilycoveCity_ContestHall_Text_YoureBeautifulGrandpa
	.globl gText_Rom_207D59
gText_Rom_207D59: @ 0x08207D59
	.string "キャー！ おじいさん すてきー！$"
	.if (. - gText_Rom_207D59) > 0x11
	.error "gText_Rom_207D59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207D59) < 0x11
	.space 0x11 - (. - gText_Rom_207D59)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:346 LilycoveCity_ContestHall_Text_AllSeemToUseDifferentMoves
	.globl gText_Rom_207D6A
gText_Rom_207D6A: @ 0x08207D6A
	.string "おなじ ポケモンを つかっていても\nトレーナーに よって\lぜんぜん ちがう わざで\lアピールして くるんだよね\pそれは しょうぶと いっしょだね！$"
	.if (. - gText_Rom_207D6A) > 0x4a
	.error "gText_Rom_207D6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207D6A) < 0x4a
	.space 0x4a - (. - gText_Rom_207D6A)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:349 LilycoveCity_ContestHall_Text_PokemonSmarterThanTrainers
	.globl gText_Rom_207DB4
gText_Rom_207DB4: @ 0x08207DB4
	.string "トレーナーより ポケモンの ほうが\nあたま よさそうに みえるなあ$"
	.if (. - gText_Rom_207DB4) > 0x22
	.error "gText_Rom_207DB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207DB4) < 0x22
	.space 0x22 - (. - gText_Rom_207DB4)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:352 LilycoveCity_ContestHall_Text_StillLoveSmartnessContests
	.globl gText_Rom_207DD6
gText_Rom_207DD6: @ 0x08207DD6
	.string "やっぱり かしこさ コンテストよ！\pちせいてきな みどりいろが\nうーん クールだわー！$"
	.if (. - gText_Rom_207DD6) > 0x2c
	.error "gText_Rom_207DD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207DD6) < 0x2c
	.space 0x2c - (. - gText_Rom_207DD6)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:355 LilycoveCity_ContestHall_Text_AreYouEnteringBeautyContest
	.globl gText_Rom_207E02
gText_Rom_207E02: @ 0x08207E02
	.string "しかい『あら? あなたも\nうつくしさ コンテストに でるの?\lがんばってね！$"
	.if (. - gText_Rom_207E02) > 0x27
	.error "gText_Rom_207E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E02) < 0x27
	.space 0x27 - (. - gText_Rom_207E02)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:358 LilycoveCity_ContestHall_Text_EveryPokemonPristineBeauty
	.globl gText_Rom_207E29
gText_Rom_207E29: @ 0x08207E29
	.string "しんさいん『どの ポケモンも\nじつに うつくしい ですなぁ！\pおもわず さいてんを わすれますよ！$"
	.if (. - gText_Rom_207E29) > 0x32
	.error "gText_Rom_207E29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E29) < 0x32
	.space 0x32 - (. - gText_Rom_207E29)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:361 LilycoveCity_ContestHall_Text_EyesWillBeGluedToMyBeauty
	.globl gText_Rom_207E5B
gText_Rom_207E5B: @ 0x08207E5B
	.string "こんなに うつくしい ポケモン\nほかに いないわよ ねえ\pみんなの めを くぎづけに しちゃうわ！$"
	.if (. - gText_Rom_207E5B) > 0x32
	.error "gText_Rom_207E5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E5B) < 0x32
	.space 0x32 - (. - gText_Rom_207E5B)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:364 LilycoveCity_ContestHall_Text_OverdidGrooming
	.globl gText_Rom_207E8D
gText_Rom_207E8D: @ 0x08207E8D
	.string "うわーん！\pこの コンテストの ために\nいっしょけんめい けづくろい したら\pやりすぎて あたしの ポケモン\nボサボサに なっちゃった！\pどうしよう……$"
	.if (. - gText_Rom_207E8D) > 0x4d
	.error "gText_Rom_207E8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207E8D) < 0x4d
	.space 0x4d - (. - gText_Rom_207E8D)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:367 LilycoveCity_ContestHall_Text_JudgeWontSeeAuroraBeam
	.globl gText_Rom_207EDA
gText_Rom_207EDA: @ 0x08207EDA
	.string "この まぶしすぎる オーロラビームに\nしんさいんも めを あけられない！\p……あれ?\nそれじゃ いみが ないのか?$"
	.if (. - gText_Rom_207EDA) > 0x3a
	.error "gText_Rom_207EDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207EDA) < 0x3a
	.space 0x3a - (. - gText_Rom_207EDA)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:370 LilycoveCity_ContestHall_Text_PokemonLooksLikeYoungerMe
	.globl gText_Rom_207F14
gText_Rom_207F14: @ 0x08207F14
	.string "この きれいな ポケモン\nあたしの わかい ころに そっくり！\pって いったら…… とうちゃんが\nのんでた おちゃを ふきだしたよ\pあたし なんか へんなこと いったかね?$"
	.if (. - gText_Rom_207F14) > 0x57
	.error "gText_Rom_207F14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207F14) < 0x57
	.space 0x57 - (. - gText_Rom_207F14)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:373 LilycoveCity_ContestHall_Text_WinBeautyContestMakesMeHappy
	.globl gText_Rom_207F6B
gText_Rom_207F6B: @ 0x08207F6B
	.string "やっぱり じょせいと しては\pうつくしさコンテストで かてると\nいつもより ちょっぴり うれしいのよねー！$"
	.if (. - gText_Rom_207F6B) > 0x36
	.error "gText_Rom_207F6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207F6B) < 0x36
	.space 0x36 - (. - gText_Rom_207F6B)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:376 LilycoveCity_ContestHall_Text_GanderAtAllThosePrettyPokemon
	.globl gText_Rom_207FA1
gText_Rom_207FA1: @ 0x08207FA1
	.string "うわっはっは！\pべっぴんな ポケモンちゃん が\nいっぱいだ……\lこりゃ はなやかで ええのう！$"
	.if (. - gText_Rom_207FA1) > 0x30
	.error "gText_Rom_207FA1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207FA1) < 0x30
	.space 0x30 - (. - gText_Rom_207FA1)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:379 LilycoveCity_ContestHall_Text_CantWinOnBeautyAlone
	.globl gText_Rom_207FD1
gText_Rom_207FD1: @ 0x08207FD1
	.string "ただ うつくしい だけじゃ\nなかなか かてないわよ！\pあたしの ポケモンみたいに\nおていれして ツヤツヤ じゃなきゃ！$"
	.if (. - gText_Rom_207FD1) > 0x3c
	.error "gText_Rom_207FD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_207FD1) < 0x3c
	.space 0x3c - (. - gText_Rom_207FD1)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:382 LilycoveCity_ContestHall_Text_InTheMiddleOfContest
	.globl gText_Rom_20800D
gText_Rom_20800D: @ 0x0820800D
	.string "しかい『あら あらー！\nいまは コンテスト ちゅう ですよー！\pうけつけで エントリー してから\nでて くださーい！ ねっ！$"
	.if (. - gText_Rom_20800D) > 0x3f
	.error "gText_Rom_20800D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20800D) < 0x3f
	.space 0x3f - (. - gText_Rom_20800D)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:385 LilycoveCity_ContestHall_Text_SuchCharmingCuteAppeals
	.globl gText_Rom_20804C
gText_Rom_20804C: @ 0x0820804C
	.string "しんさいん『おお\nみんな かわいい アピールだなあ！\pおおっ なんて かわいい\nみずあそびの アピールなんだろう！$"
	.if (. - gText_Rom_20804C) > 0x3a
	.error "gText_Rom_20804C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20804C) < 0x3a
	.space 0x3a - (. - gText_Rom_20804C)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:388 LilycoveCity_ContestHall_Text_MyAzurillWasDistracted
	.globl gText_Rom_208086
gText_Rom_208086: @ 0x08208086
	.string "ああ ぼくの ルリリちゃんが\nほかの ポケモンに きを とられちゃった！$"
	.if (. - gText_Rom_208086) > 0x25
	.error "gText_Rom_208086 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208086) < 0x25
	.space 0x25 - (. - gText_Rom_208086)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:391 LilycoveCity_ContestHall_Text_NeverWonBattleButContest
	.globl gText_Rom_2080AB
gText_Rom_2080AB: @ 0x082080AB
	.string "わたしの ポケモンって しょうぶだと\n1ども かった こと ないけど\lコンテストは おとくい なのよ！$"
	.if (. - gText_Rom_2080AB) > 0x34
	.error "gText_Rom_2080AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2080AB) < 0x34
	.space 0x34 - (. - gText_Rom_2080AB)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:394 LilycoveCity_ContestHall_Text_PetalDanceIsMarvel
	.globl gText_Rom_2080DF
gText_Rom_2080DF: @ 0x082080DF
	.string "ぼくの ポケモンの かれいな\nはなびらのまい……\lだれにも じゃまは させないぞ！$"
	.if (. - gText_Rom_2080DF) > 0x2a
	.error "gText_Rom_2080DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2080DF) < 0x2a
	.space 0x2a - (. - gText_Rom_2080DF)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:397 LilycoveCity_ContestHall_Text_MyMonAppealSoMuchCuter
	.globl gText_Rom_208109
gText_Rom_208109: @ 0x08208109
	.string "どなたの ポケモンも\nほんとうに かわいいわねえ\pでも わたしの ポケモンが\nかわいく アピール すれば……\pきっと もっと かわいい はずよ$"
	.if (. - gText_Rom_208109) > 0x48
	.error "gText_Rom_208109 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208109) < 0x48
	.space 0x48 - (. - gText_Rom_208109)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:400 LilycoveCity_ContestHall_Text_MyChildIsInContest
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_208151
gText_Rom_208151: @ 0x08208151
	.string "うちのこが コンテストに でてるんですよ$"
	.if (. - gText_Rom_208151) != 0x15
	.error "gText_Rom_208151 must retain its original byte length"
	.endif
	.globl gText_Rom_208162
	.set gText_Rom_208162, gText_Rom_208151 + 0x11

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:403 LilycoveCity_ContestHall_Text_ComeOnDear
	.globl gText_Rom_208166
gText_Rom_208166: @ 0x08208166
	.string "ほらっ がんばって！\nあなたの ポケモンが いちばんよっ！$"
	.if (. - gText_Rom_208166) > 0x1e
	.error "gText_Rom_208166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208166) < 0x1e
	.space 0x1e - (. - gText_Rom_208166)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:406 LilycoveCity_ContestHall_Text_ThatGirlThereIsCutest
	.globl gText_Rom_208184
gText_Rom_208184: @ 0x08208184
	.string "ワシは あの おんなのこが\nいちばん かわいいと おもうな……\pえっ? ポケモンの みためを\nくらべてるんか！?$"
	.if (. - gText_Rom_208184) > 0x39
	.error "gText_Rom_208184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208184) < 0x39
	.space 0x39 - (. - gText_Rom_208184)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:409 LilycoveCity_ContestHall_Text_WantCuteMonOfMyOwn
	.globl gText_Rom_2081BD
gText_Rom_2081BD: @ 0x082081BD
	.string "ああん みてたら\nあの ポケモン ほしく なっちゃった\lつかまえに いこっと！$"
	.if (. - gText_Rom_2081BD) > 0x28
	.error "gText_Rom_2081BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2081BD) < 0x28
	.space 0x28 - (. - gText_Rom_2081BD)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:412 LilycoveCity_ContestHall_Text_BeautyContestStage
	.globl gText_Rom_2081E5
gText_Rom_2081E5: @ 0x082081E5
	.string "うつくしさコンテスト ステージ\nビューティフル ポケモンに クラクラ！$"
	.if (. - gText_Rom_2081E5) > 0x24
	.error "gText_Rom_2081E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2081E5) < 0x24
	.space 0x24 - (. - gText_Rom_2081E5)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:415 LilycoveCity_ContestHall_Text_CuteContestStage
	.globl gText_Rom_208209
gText_Rom_208209: @ 0x08208209
	.string "かわいさコンテスト ステージ\nキュートな ポケモンに ウキウキ！$"
	.if (. - gText_Rom_208209) > 0x21
	.error "gText_Rom_208209 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208209) < 0x21
	.space 0x21 - (. - gText_Rom_208209)
	.endif

	@ data/maps/LilycoveCity_ContestHall/scripts.inc:418 LilycoveCity_ContestHall_Text_SmartContestStage
	.globl gText_Rom_20822A
gText_Rom_20822A: @ 0x0820822A
	.string "かしこさコンテスト ステージ\nインテリ ポケモンに トロトロ！$"
	.if (. - gText_Rom_20822A) > 0x20
	.error "gText_Rom_20822A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20822A) < 0x20
	.space 0x20 - (. - gText_Rom_20822A)
	.endif
	.incbin "baserom.gba", 0x20824a, 0x6c

	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:51 LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon
	.globl gText_Rom_2082B6
gText_Rom_2082B6: @ 0x082082B6
	.string "この せかいには\nどれだけの ポケモンが いるのかな?\pいつのひか うみを こえて\nとおい くにの ひとと\lポケモン こうかん したいなあ！$"
	.if (. - gText_Rom_2082B6) > 0x47
	.error "gText_Rom_2082B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2082B6) < 0x47
	.space 0x47 - (. - gText_Rom_2082B6)
	.endif

	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:54 LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels
	.globl gText_Rom_2082FD
gText_Rom_2082FD: @ 0x082082FD
	.string "ちかごろ ひとの ポケモンを うばったり\nいんせきを よこどり したりする\lろくでもない やつらが いるらしいな！$"
	.if (. - gText_Rom_2082FD) > 0x3a
	.error "gText_Rom_2082FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2082FD) < 0x3a
	.space 0x3a - (. - gText_Rom_2082FD)
	.endif

	@ data/maps/LilycoveCity_PokemonCenter_1F/scripts.inc:57 LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels
	.globl gText_Rom_208337
gText_Rom_208337: @ 0x08208337
	.string "ひとの ポケモンを うばったり\nいんせきを よこどり していた\lろくでもない やつら……\pちかごろ すがたを みなくなったよ$"
	.if (. - gText_Rom_208337) > 0x3f
	.error "gText_Rom_208337 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208337) < 0x3f
	.space 0x3f - (. - gText_Rom_208337)
	.endif
	.incbin "baserom.gba", 0x208376, 0x7a1

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:560 LilycoveCity_PokemonTrainerFanClub_Text_OhWowItsPlayer
	.globl gText_Rom_208B17
gText_Rom_208B17: @ 0x08208B17
	.string "いいあ！\n{PLAYER}だ！！$"
	.if (. - gText_Rom_208B17) > 0xb
	.error "gText_Rom_208B17 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208B17) < 0xb
	.space 0xb - (. - gText_Rom_208B17)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:563 LilycoveCity_PokemonTrainerFanClub_Text_HeardAboutYouImYourFan
	.globl gText_Rom_208B22
gText_Rom_208B22: @ 0x08208B22
	.string "きいたよ！\nきみ つよいんだってな\pここでは みんな\nだれが いちばん つよい トレーナーか\lはなしを してるんだけど\pおれ きみの うわさを きいて\nきみの ファンに なることに したよ！\pこれからも つよい トレーナーと\nバンバン たたかって\pおれたちに あつい\nたたかいを みせてくれよ！\pそうすれば きっと みんなも\nきみの ことを みなおすと おもうんだ\pじゃあ きたい してるよ！\n{PLAYER}！！$"
	.if (. - gText_Rom_208B22) > 0xca
	.error "gText_Rom_208B22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208B22) < 0xca
	.space 0xca - (. - gText_Rom_208B22)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:566 LilycoveCity_PokemonTrainerFanClub_Text_YoureOneWeWantToWin
	.globl gText_Rom_208BEC
gText_Rom_208BEC: @ 0x08208BEC
	.string "おう {PLAYER}！！\nおうえん してるぞ！！$"
	.if (. - gText_Rom_208BEC) > 0x14
	.error "gText_Rom_208BEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208BEC) < 0x14
	.space 0x14 - (. - gText_Rom_208BEC)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:569 LilycoveCity_PokemonTrainerFanClub_Text_OthersDontKnowYoureTheBest
	.globl gText_Rom_208C00
gText_Rom_208C00: @ 0x08208C00
	.string "あいつらは しらないんだ\nきみが いちばん すごいって ことをさ！\pそうだろ {PLAYER}！\nこんじょう みせてくれ！$"
	.if (. - gText_Rom_208C00) > 0x38
	.error "gText_Rom_208C00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C00) < 0x38
	.space 0x38 - (. - gText_Rom_208C00)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:572 LilycoveCity_PokemonTrainerFanClub_Text_TrainersPowerIsOutOfTheOrdinary
	.globl gText_Rom_208C38
gText_Rom_208C38: @ 0x08208C38
	.string "きみには わるいけど いま いちばん\nちゅうもくの トレーナーは\lまちがいなく {STR_VAR_1} だね！\pあの つよさは\nだたものじゃ ないよ$"
	.if (. - gText_Rom_208C38) > 0x42
	.error "gText_Rom_208C38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C38) < 0x42
	.space 0x42 - (. - gText_Rom_208C38)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:575 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsBestNoOneWantsToListen
	.globl gText_Rom_208C7A
gText_Rom_208C7A: @ 0x08208C7A
	.string "くそー いまは {STR_VAR_1}が\nいちばん つよいって いってるのに\pだれも きいて くれない……$"
	.if (. - gText_Rom_208C7A) > 0x2d
	.error "gText_Rom_208C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208C7A) < 0x2d
	.space 0x2d - (. - gText_Rom_208C7A)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:578 LilycoveCity_PokemonTrainerFanClub_Text_HearingAboutToughNewTrainer
	.globl gText_Rom_208CA7
gText_Rom_208CA7: @ 0x08208CA7
	.string "さいきん つぎつぎと ジムリーダーを\nたおしている っていう\pつよい トレーナーが\nあらわれた らしいんだ\pきみ しらないかい?$"
	.if (. - gText_Rom_208CA7) > 0x41
	.error "gText_Rom_208CA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208CA7) < 0x41
	.space 0x41 - (. - gText_Rom_208CA7)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:581 LilycoveCity_PokemonTrainerFanClub_Text_ImPullingForYou
	.globl gText_Rom_208CE8
gText_Rom_208CE8: @ 0x08208CE8
	.string "あ！\n{PLAYER}！！\pがんばってね\nおうえん してるから！$"
	.if (. - gText_Rom_208CE8) > 0x1b
	.error "gText_Rom_208CE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208CE8) < 0x1b
	.space 0x1b - (. - gText_Rom_208CE8)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:584 LilycoveCity_PokemonTrainerFanClub_Text_BrawlyNoImYourFan
	.globl gText_Rom_208D03
gText_Rom_208D03: @ 0x08208D03
	.string "トウキさま……\pあ！\nちがう ちがう！\pわたしは あくまで あなたの\nファン なんだからね！\pだから あたしの ために\nがんばってよ！$"
	.if (. - gText_Rom_208D03) > 0x44
	.error "gText_Rom_208D03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D03) < 0x44
	.space 0x44 - (. - gText_Rom_208D03)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:587 LilycoveCity_PokemonTrainerFanClub_Text_ICantHelpLikingBrawly
	.globl gText_Rom_208D47
gText_Rom_208D47: @ 0x08208D47
	.string "やっぱり わたしは トウキさま しか\nすきに なれないのよねー$"
	.if (. - gText_Rom_208D47) > 0x20
	.error "gText_Rom_208D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D47) < 0x20
	.space 0x20 - (. - gText_Rom_208D47)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:590 LilycoveCity_PokemonTrainerFanClub_Text_NobodyUnderstandsBrawly
	.globl gText_Rom_208D67
gText_Rom_208D67: @ 0x08208D67
	.string "だれも トウキさまの\nみりょくを わかって くれないの……\pいいわ！\pわたし ひとりでも トウキさまの ことを\nおうえん しつづけるから！$"
	.if (. - gText_Rom_208D67) > 0x46
	.error "gText_Rom_208D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208D67) < 0x46
	.space 0x46 - (. - gText_Rom_208D67)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:593 LilycoveCity_PokemonTrainerFanClub_Text_MyFavoriteTrainerIsBrawly
	.globl gText_Rom_208DAD
gText_Rom_208DAD: @ 0x08208DAD
	.string "わたしの いちばん すきな\nトレーナーは なんと いっても\pムロの ジムリーダー\nトウキさまよ！$"
	.if (. - gText_Rom_208DAD) > 0x31
	.error "gText_Rom_208DAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208DAD) < 0x31
	.space 0x31 - (. - gText_Rom_208DAD)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:596 LilycoveCity_PokemonTrainerFanClub_Text_YouveSurpassedYourFather
	.globl gText_Rom_208DDE
gText_Rom_208DDE: @ 0x08208DDE
	.string "きみは ついに あらゆる めんで\nきみの おとうさんを こえたな！\pこの わしが いって いるんだから\nまちがいない！$"
	.if (. - gText_Rom_208DDE) > 0x3c
	.error "gText_Rom_208DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208DDE) < 0x3c
	.space 0x3c - (. - gText_Rom_208DDE)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:599 LilycoveCity_PokemonTrainerFanClub_Text_YourFatherNeverGaveUpSoKeepOnBattling
	.globl gText_Rom_208E1A
gText_Rom_208E1A: @ 0x08208E1A
	.string "きみの おとうさんは ピンチに なっても\nあきらめずに たたかって いたよ……\pわしは しっているよ\pきみは いくら まけても けっして\nあきらめない という ことを！\lだから がんばってくれ！$"
	.if (. - gText_Rom_208E1A) > 0x62
	.error "gText_Rom_208E1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208E1A) < 0x62
	.space 0x62 - (. - gText_Rom_208E1A)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:602 LilycoveCity_PokemonTrainerFanClub_Text_LongWayToGoComparedToNorman
	.globl gText_Rom_208E7C
gText_Rom_208E7C: @ 0x08208E7C
	.string "きみより センリさんの ほうが\nもっと つよくて かっこよく\lみごたえの ある たたかいを していたぞ！\pいくら きみが つよいと\nいわれて いても\pきみの おとうさんに くらべたら\nまだまだ だな$"
	.if (. - gText_Rom_208E7C) > 0x64
	.error "gText_Rom_208E7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208E7C) < 0x64
	.space 0x64 - (. - gText_Rom_208E7C)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:605 LilycoveCity_PokemonTrainerFanClub_Text_YouAndNormanAreDifferent
	.globl gText_Rom_208EE0
gText_Rom_208EE0: @ 0x08208EE0
	.string "きみも センリさんと おなじ ふんいき\nというか はくりょくが でてきたね\pしかし センリさん とは けっていてきに\nちがう ものが ある！\p……それは わたしからは いえない\nじぶんで さがして みるんだな$"
	.if (. - gText_Rom_208EE0) > 0x69
	.error "gText_Rom_208EE0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208EE0) < 0x69
	.space 0x69 - (. - gText_Rom_208EE0)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:608 LilycoveCity_PokemonTrainerFanClub_Text_WeDiscussStrongestTrainers
	.globl gText_Rom_208F49
gText_Rom_208F49: @ 0x08208F49
	.string "ここにいる みんなは\nポケモンしょうぶが だいすきでね\pだれが いちばん つよい トレーナーか\nはなしを して いるんだ！\pきみも ゆうめいに なれば\nみんな ファンに なるかもな！$"
	.if (. - gText_Rom_208F49) > 0x5c
	.error "gText_Rom_208F49 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208F49) < 0x5c
	.space 0x5c - (. - gText_Rom_208F49)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:611 LilycoveCity_PokemonTrainerFanClub_Text_OhWoweeItsPlayer
	.globl gText_Rom_208FA5
gText_Rom_208FA5: @ 0x08208FA5
	.string "うわー！ {PLAYER}だー\nほんもの だー\pあくしゅ してー\nあくしゅ！$"
	.if (. - gText_Rom_208FA5) > 0x21
	.error "gText_Rom_208FA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208FA5) < 0x21
	.space 0x21 - (. - gText_Rom_208FA5)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:614 LilycoveCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
	.globl gText_Rom_208FC6
gText_Rom_208FC6: @ 0x08208FC6
	.string "……わたし いつまでも {PLAYER}の こと\nおうえん する からね！\pわたし もう {PLAYER}の まける\nとこなんて みたくないよ\p{PLAYER} ほんとは\nつよいんだ もんね！$"
	.if (. - gText_Rom_208FC6) > 0x4f
	.error "gText_Rom_208FC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_208FC6) < 0x4f
	.space 0x4f - (. - gText_Rom_208FC6)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:617 LilycoveCity_PokemonTrainerFanClub_Text_EveryoneThinksTrainerIsCool
	.globl gText_Rom_209015
gText_Rom_209015: @ 0x08209015
	.string "{STR_VAR_1}さん って かっこいい……\pねえ みんなも\nそう おもうでしょー?$"
	.if (. - gText_Rom_209015) > 0x24
	.error "gText_Rom_209015 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209015) < 0x24
	.space 0x24 - (. - gText_Rom_209015)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:620 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsReallyCoolItsJustMe
	.globl gText_Rom_209039
gText_Rom_209039: @ 0x08209039
	.string "{STR_VAR_1}さん って ほんとうに\nかっこいい よねぇ……\pわたし ひとりに なっても\nずうっと おうえん するんだー！$"
	.if (. - gText_Rom_209039) > 0x39
	.error "gText_Rom_209039 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209039) < 0x39
	.space 0x39 - (. - gText_Rom_209039)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:623 LilycoveCity_PokemonTrainerFanClub_Text_WishThereWasTrainerLikeThat
	.globl gText_Rom_209072
gText_Rom_209072: @ 0x08209072
	.string "わたしのね\nすきな トレーナーは\pかっこよくて\pつよくて\pそれでいて やさしい\pそんな トレーナーが いいなぁ……$"
	.if (. - gText_Rom_209072) > 0x3a
	.error "gText_Rom_209072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209072) < 0x3a
	.space 0x3a - (. - gText_Rom_209072)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:626 LilycoveCity_PokemonTrainerFanClub_Text_WantToBeStrongLikeYou
	.globl gText_Rom_2090AC
gText_Rom_2090AC: @ 0x082090AC
	.string "あ！ {PLAYER}だー！\nすげー！\pぼくも おおきく なったら\n{PLAYER} みたいに つよく なりたいよ！$"
	.if (. - gText_Rom_2090AC) > 0x2f
	.error "gText_Rom_2090AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2090AC) < 0x2f
	.space 0x2f - (. - gText_Rom_2090AC)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:629 LilycoveCity_PokemonTrainerFanClub_Text_OnlyOneWhoCheersForYou
	.globl gText_Rom_2090DB
gText_Rom_2090DB: @ 0x082090DB
	.string "……\nぼく ひとりに なったって\pずっと {PLAYER}の ことを\nおうえん するよ！\pだって {PLAYER}の こと\nしんじてるもん！$"
	.if (. - gText_Rom_2090DB) > 0x3b
	.error "gText_Rom_2090DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2090DB) < 0x3b
	.space 0x3b - (. - gText_Rom_2090DB)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:632 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsWickedlyCool
	.globl gText_Rom_209116
gText_Rom_209116: @ 0x08209116
	.string "{STR_VAR_1}って かっこいいよねー\nぼく あくしゅ してほしいなー$"
	.if (. - gText_Rom_209116) > 0x1e
	.error "gText_Rom_209116 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209116) < 0x1e
	.space 0x1e - (. - gText_Rom_209116)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:635 LilycoveCity_PokemonTrainerFanClub_Text_NeverGoingToStopBeingTrainersFan
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_209134
gText_Rom_209134: @ 0x08209134
	.string "……\nぼく ひとりに なったって\pぜったい {STR_VAR_1}の ファンを\nやめない からね！\pだって ぼく きいたんだもん\n{STR_VAR_1}は ぜったいに まけないって$"
	.if (. - gText_Rom_209134) != 0x49
	.error "gText_Rom_209134 must retain its original byte length"
	.endif
	.globl gText_Rom_209179
	.set gText_Rom_209179, gText_Rom_209134 + 0x45

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:638 LilycoveCity_PokemonTrainerFanClub_Text_YoureAmazingAfterAll
	.globl gText_Rom_20917D
gText_Rom_20917D: @ 0x0820917D
	.string "{PLAYER}！\nやっぱり すごいよ きみは！\pぼくは きみを はじめて みたときから\nすごい やつだって おもってたよ！\lやはり ぼくのめは たしかな ようだね！$"
	.if (. - gText_Rom_20917D) > 0x4e
	.error "gText_Rom_20917D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20917D) < 0x4e
	.space 0x4e - (. - gText_Rom_20917D)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:641 LilycoveCity_PokemonTrainerFanClub_Text_ImInYourCorner
	.globl gText_Rom_2091CB
gText_Rom_2091CB: @ 0x082091CB
	.string "まあ ほかの やつの\nことなんて きにするなよ\lぼくが ついて いるんだ！\pきみは しんぱい しないで いつもどおり\nたたかって いれば いいんだよ$"
	.if (. - gText_Rom_2091CB) > 0x4b
	.error "gText_Rom_2091CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2091CB) < 0x4b
	.space 0x4b - (. - gText_Rom_2091CB)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:644 LilycoveCity_PokemonTrainerFanClub_Text_ThinkTrainerIsNumberOne
	.globl gText_Rom_209216
gText_Rom_209216: @ 0x08209216
	.string "きみも なかなか\nいい トレーナーだと おもうけど\pいまは やっぱり {STR_VAR_1}が\nいちばんだと おもうんだ\pまあ ぼくが おもっている だけだから\nあまり きにしなくて いいよ$"
	.if (. - gText_Rom_209216) > 0x57
	.error "gText_Rom_209216 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209216) < 0x57
	.space 0x57 - (. - gText_Rom_209216)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:647 LilycoveCity_PokemonTrainerFanClub_Text_YoureMaybeStrongerThanTrainer
	.globl gText_Rom_20926D
gText_Rom_20926D: @ 0x0820926D
	.string "きみは ほんとうに つよいな……\n{STR_VAR_1} より つよいかも しれない\pでも {STR_VAR_1} には\nぼくが ひつよう なんだ\pだって ぼくが {STR_VAR_1}を\nおうえん しなきゃ\lだれが おうえん するんだ！$"
	.if (. - gText_Rom_20926D) > 0x5d
	.error "gText_Rom_20926D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20926D) < 0x5d
	.space 0x5d - (. - gText_Rom_20926D)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:650 LilycoveCity_PokemonTrainerFanClub_Text_YouChangedMyMind
	.globl gText_Rom_2092CA
gText_Rom_2092CA: @ 0x082092CA
	.string "みなおしたわ！\nあなたって ほんとうに つよいのね！\pどうしたら そんなに つよく なれるのか\nおしえて もらいたいわ$"
	.if (. - gText_Rom_2092CA) > 0x3c
	.error "gText_Rom_2092CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2092CA) < 0x3c
	.space 0x3c - (. - gText_Rom_2092CA)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:653 LilycoveCity_PokemonTrainerFanClub_Text_YouBattleAttractivelyInToughSituation
	.globl gText_Rom_209306
gText_Rom_209306: @ 0x08209306
	.string "あなたって ピンチに なれば なるほど\nみりょくてきな たたかいを するのよね\lつぎの たいせんが たのしみだわ！$"
	.if (. - gText_Rom_209306) > 0x3a
	.error "gText_Rom_209306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209306) < 0x3a
	.space 0x3a - (. - gText_Rom_209306)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:656 LilycoveCity_PokemonTrainerFanClub_Text_TrainerIsStandout
	.globl gText_Rom_209340
gText_Rom_209340: @ 0x08209340
	.string "さいきんの トレーナーは\nやっぱり {STR_VAR_1}よね！\lあの つよさは ただもの じゃないわ\pあなたも いいせん いってるけど\n{STR_VAR_1}に くらべたら まだまだねー$"
	.if (. - gText_Rom_209340) > 0x4d
	.error "gText_Rom_209340 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209340) < 0x4d
	.space 0x4d - (. - gText_Rom_209340)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:659 LilycoveCity_PokemonTrainerFanClub_Text_NoOneCanKnockYouButTrainerStronger
	.globl gText_Rom_20938D
gText_Rom_20938D: @ 0x0820938D
	.string "あなたって ほんとうに\nにんき ものよね……\pつよいし ポケモンにも やさしいし\nいうこと ないわ\pでもね！ わたしは\n{STR_VAR_1}を しんじているの！\p{STR_VAR_1}の ほうが ぜったいに\nつよいに きまってるん だから！$"
	.if (. - gText_Rom_20938D) > 0x68
	.error "gText_Rom_20938D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20938D) < 0x68
	.space 0x68 - (. - gText_Rom_20938D)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:662 LilycoveCity_PokemonTrainerFanClub_Text_YouImpressive
	.globl gText_Rom_2093F5
gText_Rom_2093F5: @ 0x082093F5
	.string "おぬし……\pやるな！$"
	.if (. - gText_Rom_2093F5) > 0xb
	.error "gText_Rom_2093F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2093F5) < 0xb
	.space 0xb - (. - gText_Rom_2093F5)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:665 LilycoveCity_PokemonTrainerFanClub_Text_OnlyIRecognizeYourTrueWorth
	.globl gText_Rom_209400
gText_Rom_209400: @ 0x08209400
	.string "おぬしの しんの ちからは\nこの わしだけが しっていれば よいのじゃ\pみなには その ひめられた ちから\nわかるまい……$"
	.if (. - gText_Rom_209400) > 0x3e
	.error "gText_Rom_209400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209400) < 0x3e
	.space 0x3e - (. - gText_Rom_209400)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:668 LilycoveCity_PokemonTrainerFanClub_Text_HaventRealizedPotential
	.globl gText_Rom_20943E
gText_Rom_20943E: @ 0x0820943E
	.string "うむ おぬし なかなかの\nめを しておるな\pじゃが！\p……うーむ\nまだまだの ようじゃな$"
	.if (. - gText_Rom_20943E) > 0x2d
	.error "gText_Rom_20943E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20943E) < 0x2d
	.space 0x2d - (. - gText_Rom_20943E)
	.endif

	@ data/maps/LilycoveCity_PokemonTrainerFanClub/scripts.inc:671 LilycoveCity_PokemonTrainerFanClub_Text_YourePowerfulButNotTrueStrength
	.globl gText_Rom_20946B
gText_Rom_20946B: @ 0x0820946B
	.string "たしかに おぬしは\nとてつもなく つよいかも しれない\pじゃが！\nわしには わかる\pその つよさは まだ\nしんの つよさとは いわないのじゃ！\lしんの つよさとは！\p……\pじつは わしも\nよく わからんのじゃ$"
	.if (. - gText_Rom_20946B) > 0x69
	.error "gText_Rom_20946B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20946B) < 0x69
	.space 0x69 - (. - gText_Rom_20946B)
	.endif
	.incbin "baserom.gba", 0x2094d4, 0x6f1

	@ data/maps/SlateportCity_Harbor/scripts.inc:383 SlateportCity_Harbor_Text_FerryServiceUnavailable
	.globl gText_Rom_209BC5
gText_Rom_209BC5: @ 0x08209BC5
	.string "えっ? ふね ですか?\pもうしわけ ございません げんざい\nれんらくせんは ないんです……$"
	.if (. - gText_Rom_209BC5) > 0x2e
	.error "gText_Rom_209BC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209BC5) < 0x2e
	.space 0x2e - (. - gText_Rom_209BC5)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:318 BattleFrontier_OutsideWest_Text_MayISeeYourTicket (+1 aliases)
	.globl gText_Rom_209BF3
gText_Rom_209BF3: @ 0x08209BF3
	.string "れんらくせんを ごりよう ですね!\nチケットは おもち でしょうか?$"
	.if (. - gText_Rom_209BF3) > 0x23
	.error "gText_Rom_209BF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209BF3) < 0x23
	.space 0x23 - (. - gText_Rom_209BF3)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:321 BattleFrontier_OutsideWest_Text_MustHaveTicketToBoard (+1 aliases)
	.globl gText_Rom_209C16
gText_Rom_209C16: @ 0x08209C16
	.string "{PLAYER}は\nチケットを もっていない!\p……もうしわけ ありません!\pふねに のれるのは\nチケットの ある かた だけです$"
	.if (. - gText_Rom_209C16) > 0x3c
	.error "gText_Rom_209C16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C16) < 0x3c
	.space 0x3c - (. - gText_Rom_209C16)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:324 BattleFrontier_OutsideWest_Text_WhereWouldYouLikeToGo (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_209C52
gText_Rom_209C52: @ 0x08209C52
	.string "{PLAYER}は\nふねのチケットを みせた!\pはい! けっこう です!\pいきさきは どちら でしょう?$"
	.if (. - gText_Rom_209C52) != 0x2f
	.error "gText_Rom_209C52 must retain its original byte length"
	.endif
	.globl gText_Rom_209C71
	.set gText_Rom_209C71, gText_Rom_209C52 + 0x1f

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:333 BattleFrontier_OutsideWest_Text_SailWithUsAnotherTime (+1 aliases)
	.globl gText_Rom_209C81
gText_Rom_209C81: @ 0x08209C81
	.string "また ごりよう ください!$"
	.if (. - gText_Rom_209C81) > 0xe
	.error "gText_Rom_209C81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C81) < 0xe
	.space 0xe - (. - gText_Rom_209C81)
	.endif

	@ data/maps/BattleFrontier_OutsideWest/scripts.inc:327 BattleFrontier_OutsideWest_Text_SlateportItIs
	.globl gText_Rom_209C8F
gText_Rom_209C8F: @ 0x08209C8F
	.string "カイナシティ ですね!$"
	.if (. - gText_Rom_209C8F) > 0xc
	.error "gText_Rom_209C8F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C8F) < 0xc
	.space 0xc - (. - gText_Rom_209C8F)
	.endif

	@ data/maps/SlateportCity_Harbor/scripts.inc:411 SlateportCity_Harbor_Text_BattleFrontierItIs
	.globl gText_Rom_209C9B
gText_Rom_209C9B: @ 0x08209C9B
	.string "バトルフロンティア ですね!$"
	.if (. - gText_Rom_209C9B) > 0xf
	.error "gText_Rom_209C9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209C9B) < 0xf
	.space 0xf - (. - gText_Rom_209C9B)
	.endif


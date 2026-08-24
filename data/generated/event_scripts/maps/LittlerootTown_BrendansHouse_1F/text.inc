	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:286 PlayersHouse_1F_Text_IsntItNiceInHere
	.globl PlayersHouse_1F_Text_IsntItNiceInHere
PlayersHouse_1F_Text_IsntItNiceInHere: @ 0x081EFA4C
	.string "ママ『ほら {PLAYER}!\nおうちの なかも すてき でしょ!{EOS}"
	.if (. - PlayersHouse_1F_Text_IsntItNiceInHere) > 0x1c
	.error "PlayersHouse_1F_Text_IsntItNiceInHere may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_IsntItNiceInHere) < 0x1c
	.space 0x1c - (. - PlayersHouse_1F_Text_IsntItNiceInHere)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:290 PlayersHouse_1F_Text_MoversPokemonGoSetClock
	.globl PlayersHouse_1F_Text_MoversPokemonGoSetClock
PlayersHouse_1F_Text_MoversPokemonGoSetClock: @ 0x081EFA68
	.string "おうちの かたづけは\nひっこしやさんの ポケモンが\lてつだって くれるから らくちんね!\p{PLAYER}も 2かいに ある\nじぶんの おへやに いってごらん!\pパパが ひっこしの おいわいに\nかってくれた とけいが あるから\lじかんを あわせて おきなさいよ{EOS}"
	.if (. - PlayersHouse_1F_Text_MoversPokemonGoSetClock) > 0x7d
	.error "PlayersHouse_1F_Text_MoversPokemonGoSetClock may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_MoversPokemonGoSetClock) < 0x7d
	.space 0x7d - (. - PlayersHouse_1F_Text_MoversPokemonGoSetClock)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:300 PlayersHouse_1F_Text_ArentYouInterestedInRoom
	.globl PlayersHouse_1F_Text_ArentYouInterestedInRoom
PlayersHouse_1F_Text_ArentYouInterestedInRoom: @ 0x081EFAE5
	.string "ママ『{PLAYER}\pじぶんの へやを みてこないの?{EOS}"
	.if (. - PlayersHouse_1F_Text_ArentYouInterestedInRoom) > 0x17
	.error "PlayersHouse_1F_Text_ArentYouInterestedInRoom may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_ArentYouInterestedInRoom) < 0x17
	.space 0x17 - (. - PlayersHouse_1F_Text_ArentYouInterestedInRoom)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:304 PlayersHouse_1F_Text_GoSetTheClock
	.globl PlayersHouse_1F_Text_GoSetTheClock
PlayersHouse_1F_Text_GoSetTheClock: @ 0x081EFAFC
	.string "ママ『{PLAYER}\pおへやの とけい あわせてきて{EOS}"
	.if (. - PlayersHouse_1F_Text_GoSetTheClock) > 0x16
	.error "PlayersHouse_1F_Text_GoSetTheClock may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_GoSetTheClock) < 0x16
	.space 0x16 - (. - PlayersHouse_1F_Text_GoSetTheClock)
	.endif

	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:308 PlayersHouse_1F_Text_OhComeQuickly
	.globl PlayersHouse_1F_Text_OhComeQuickly
PlayersHouse_1F_Text_OhComeQuickly: @ 0x081EFB12
	.string "ママ『……あ! {PLAYER}! {PLAYER}!\nはやく こっちに いらっしゃい!{EOS}"
	.if (. - PlayersHouse_1F_Text_OhComeQuickly) > 0x21
	.error "PlayersHouse_1F_Text_OhComeQuickly may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_OhComeQuickly) < 0x21
	.space 0x21 - (. - PlayersHouse_1F_Text_OhComeQuickly)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:312 PlayersHouse_1F_Text_MaybeDadWillBeOn
	.globl PlayersHouse_1F_Text_MaybeDadWillBeOn
PlayersHouse_1F_Text_MaybeDadWillBeOn: @ 0x081EFB33
	.string "ママ『トウカの ジムが うつってるわ\nパパが でるかもよ!!{EOS}"
	.if (. - PlayersHouse_1F_Text_MaybeDadWillBeOn) > 0x1f
	.error "PlayersHouse_1F_Text_MaybeDadWillBeOn may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_MaybeDadWillBeOn) < 0x1f
	.space 0x1f - (. - PlayersHouse_1F_Text_MaybeDadWillBeOn)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:316 PlayersHouse_1F_Text_ItsOverWeMissedHim
	.globl PlayersHouse_1F_Text_ItsOverWeMissedHim
PlayersHouse_1F_Text_ItsOverWeMissedHim: @ 0x081EFB52
	.string "ママ『あらら…… おわっちゃった\pパパが でてたみたい だったのに ざんねんね{EOS}"
	.if (. - PlayersHouse_1F_Text_ItsOverWeMissedHim) > 0x28
	.error "PlayersHouse_1F_Text_ItsOverWeMissedHim may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_ItsOverWeMissedHim) < 0x28
	.space 0x28 - (. - PlayersHouse_1F_Text_ItsOverWeMissedHim)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:320 PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor
	.globl PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor: @ 0x081EFB7A
	.string "……あ そうそう! このまち には\nオダマキはかせ っていう\lパパの おともだちが いるの\pはかせの いえは おとなり だから\nきちんと あいさつ してくると いいわ!{EOS}"
	.if (. - PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor) > 0x55
	.error "PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor) < 0x55
	.space 0x55 - (. - PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:327 PlayersHouse_1F_Text_SeeYouHoney
	.globl PlayersHouse_1F_Text_SeeYouHoney
PlayersHouse_1F_Text_SeeYouHoney: @ 0x081EFBCF
	.string "ママ『いってらっしゃい!{EOS}"
	.if (. - PlayersHouse_1F_Text_SeeYouHoney) > 0xd
	.error "PlayersHouse_1F_Text_SeeYouHoney may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_SeeYouHoney) < 0xd
	.space 0xd - (. - PlayersHouse_1F_Text_SeeYouHoney)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:330 PlayersHouse_1F_Text_DidYouMeetProfBirch
	.globl PlayersHouse_1F_Text_DidYouMeetProfBirch
PlayersHouse_1F_Text_DidYouMeetProfBirch: @ 0x081EFBDC
	.string "ママ『オダマキはかせ には あえたの?{EOS}"
	.if (. - PlayersHouse_1F_Text_DidYouMeetProfBirch) > 0x14
	.error "PlayersHouse_1F_Text_DidYouMeetProfBirch may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_DidYouMeetProfBirch) < 0x14
	.space 0x14 - (. - PlayersHouse_1F_Text_DidYouMeetProfBirch)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:333 PlayersHouse_1F_Text_YouShouldRestABit
	.globl PlayersHouse_1F_Text_YouShouldRestABit
PlayersHouse_1F_Text_YouShouldRestABit: @ 0x081EFBF0
	.string "ママ『どう? {PLAYER}\nすこし つかれたんじゃ ないかしら?\pおうちで やすんでいくと いいわ{EOS}"
	.if (. - PlayersHouse_1F_Text_YouShouldRestABit) > 0x2e
	.error "PlayersHouse_1F_Text_YouShouldRestABit may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_YouShouldRestABit) < 0x2e
	.space 0x2e - (. - PlayersHouse_1F_Text_YouShouldRestABit)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:338 PlayersHouse_1F_Text_TakeCareHoney
	.globl PlayersHouse_1F_Text_TakeCareHoney
PlayersHouse_1F_Text_TakeCareHoney: @ 0x081EFC1E
	.string "ママ『じゃあ きをつけてね!{EOS}"
	.if (. - PlayersHouse_1F_Text_TakeCareHoney) > 0xf
	.error "PlayersHouse_1F_Text_TakeCareHoney may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_TakeCareHoney) < 0xf
	.space 0xf - (. - PlayersHouse_1F_Text_TakeCareHoney)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:341 PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom
	.globl PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom: @ 0x081EFC2D
	.string "ママ『あら\nその バッジ パパから もらったの!?\pじゃあ ママも これ あげようかな{EOS}"
	.if (. - PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom) > 0x2c
	.error "PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom) < 0x2c
	.space 0x2c - (. - PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:346 PlayersHouse_1F_Text_DontPushYourselfTooHard
	.globl PlayersHouse_1F_Text_DontPushYourselfTooHard
PlayersHouse_1F_Text_DontPushYourselfTooHard: @ 0x081EFC59
	.string "あんまり むりは しないでね\nなにか あれば かえって くればいいから\pじゃあ がんばってね!{EOS}"
	.if (. - PlayersHouse_1F_Text_DontPushYourselfTooHard) > 0x30
	.error "PlayersHouse_1F_Text_DontPushYourselfTooHard may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_DontPushYourselfTooHard) < 0x30
	.space 0x30 - (. - PlayersHouse_1F_Text_DontPushYourselfTooHard)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:351 PlayersHouse_1F_Text_IsThatAPokenav
	.globl PlayersHouse_1F_Text_IsThatAPokenav
PlayersHouse_1F_Text_IsThatAPokenav: @ 0x081EFC89
	.string "ママ『なあに それ? ポケナビ?\nデボンの ひとから いただいたの?\pじゃあ ママの ことも\nとうろくして もらっちゃおうかな!\p…… …… ……{EOS}"
	.if (. - PlayersHouse_1F_Text_IsThatAPokenav) > 0x4a
	.error "PlayersHouse_1F_Text_IsThatAPokenav may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_IsThatAPokenav) < 0x4a
	.space 0x4a - (. - PlayersHouse_1F_Text_IsThatAPokenav)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:358 PlayersHouse_1F_Text_RegisteredMom
	.globl PlayersHouse_1F_Text_RegisteredMom
PlayersHouse_1F_Text_RegisteredMom: @ 0x081EFCD3
	.string "ママを\nポケナビに とうろく した!{EOS}"
	.if (. - PlayersHouse_1F_Text_RegisteredMom) > 0x13
	.error "PlayersHouse_1F_Text_RegisteredMom may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_RegisteredMom) < 0x13
	.space 0x13 - (. - PlayersHouse_1F_Text_RegisteredMom)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:362 PlayersHouse_1F_Text_Vigoroth1
	.globl PlayersHouse_1F_Text_Vigoroth1
PlayersHouse_1F_Text_Vigoroth1: @ 0x081EFCE6
	.string "ふぎーっ{EOS}"
	.if (. - PlayersHouse_1F_Text_Vigoroth1) > 0x5
	.error "PlayersHouse_1F_Text_Vigoroth1 may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_Vigoroth1) < 0x5
	.space 0x5 - (. - PlayersHouse_1F_Text_Vigoroth1)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:365 PlayersHouse_1F_Text_Vigoroth2
	.globl PlayersHouse_1F_Text_Vigoroth2
PlayersHouse_1F_Text_Vigoroth2: @ 0x081EFCEB
	.string "ふごっ ふご ふご……{EOS}"
	.if (. - PlayersHouse_1F_Text_Vigoroth2) > 0xc
	.error "PlayersHouse_1F_Text_Vigoroth2 may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_Vigoroth2) < 0xc
	.space 0xc - (. - PlayersHouse_1F_Text_Vigoroth2)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:368 PlayersHouse_1F_Text_ReportFromPetalburgGym
	.globl PlayersHouse_1F_Text_ReportFromPetalburgGym
PlayersHouse_1F_Text_ReportFromPetalburgGym: @ 0x081EFCF7
	.string "インタビュアー『…… いじょう\nトウカジムの まえ からでした!{EOS}"
	.if (. - PlayersHouse_1F_Text_ReportFromPetalburgGym) > 0x21
	.error "PlayersHouse_1F_Text_ReportFromPetalburgGym may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_ReportFromPetalburgGym) < 0x21
	.space 0x21 - (. - PlayersHouse_1F_Text_ReportFromPetalburgGym)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:372 PlayersHouse_1F_Text_TheresAMovieOnTV
	.globl PlayersHouse_1F_Text_TheresAMovieOnTV
PlayersHouse_1F_Text_TheresAMovieOnTV: @ 0x081EFD18
	.string "テレビで えいがを やってる!\pおとなと こどもが ふたり ならんで\nおおきな ピアノの うえで おどってる!\pもう いかなきゃ!{EOS}"
	.if (. - PlayersHouse_1F_Text_TheresAMovieOnTV) > 0x42
	.error "PlayersHouse_1F_Text_TheresAMovieOnTV may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_TheresAMovieOnTV) < 0x42
	.space 0x42 - (. - PlayersHouse_1F_Text_TheresAMovieOnTV)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:378 PlayersHouse_1F_Text_RunningShoesManual
	.globl PlayersHouse_1F_Text_RunningShoesManual
PlayersHouse_1F_Text_RunningShoesManual: @ 0x081EFD5A
	.string "ランニングシューズの\nせつめいしょが ある!\p「ランニングシューズは\n Bボタンを おすことで いままでよりも\l はやく はしれるように なります!\p ランニングシューズを はいて\n おもいっきり そとを はしろう!」{EOS}"
	.if (. - PlayersHouse_1F_Text_RunningShoesManual) > 0x6e
	.error "PlayersHouse_1F_Text_RunningShoesManual may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_RunningShoesManual) < 0x6e
	.space 0x6e - (. - PlayersHouse_1F_Text_RunningShoesManual)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:387 PlayersHouse_1F_Text_TicketFromBrineyCameForYou
	.globl PlayersHouse_1F_Text_TicketFromBrineyCameForYou
PlayersHouse_1F_Text_TicketFromBrineyCameForYou: @ 0x081EFDC8
	.string "パパ『ん?\n{PLAYER}じゃ ないか!\pひさしぶりに かおを みたが\nどこか たくましくなった……\lそんな かんじ だな\p……おっと そうだった\nハギさん という ひとから\lおまえあてに なにか とどいていたぞ!{EOS}"
	.if (. - PlayersHouse_1F_Text_TicketFromBrineyCameForYou) > 0x67
	.error "PlayersHouse_1F_Text_TicketFromBrineyCameForYou may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_TicketFromBrineyCameForYou) < 0x67
	.space 0x67 - (. - PlayersHouse_1F_Text_TicketFromBrineyCameForYou)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:397 PlayersHouse_1F_Text_PortsInSlateportLilycove
	.globl PlayersHouse_1F_Text_PortsInSlateportLilycove
PlayersHouse_1F_Text_PortsInSlateportLilycove: @ 0x081EFE2F
	.string "パパ『ふねのチケットか……\pふねに のるなら カイナか ミナモに\nふねのりばが あったよな{EOS}"
	.if (. - PlayersHouse_1F_Text_PortsInSlateportLilycove) > 0x2e
	.error "PlayersHouse_1F_Text_PortsInSlateportLilycove may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_PortsInSlateportLilycove) < 0x2e
	.space 0x2e - (. - PlayersHouse_1F_Text_PortsInSlateportLilycove)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:402 PlayersHouse_1F_Text_BetterGetBackToGym
	.globl PlayersHouse_1F_Text_BetterGetBackToGym
PlayersHouse_1F_Text_BetterGetBackToGym: @ 0x081EFE5D
	.string "では わたしは\nトウカの ジムに もどるよ\pママ\nいえのこと たのんだよ{EOS}"
	.if (. - PlayersHouse_1F_Text_BetterGetBackToGym) > 0x25
	.error "PlayersHouse_1F_Text_BetterGetBackToGym may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_BetterGetBackToGym) < 0x25
	.space 0x25 - (. - PlayersHouse_1F_Text_BetterGetBackToGym)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:408 PlayersHouse_1F_Text_DadShouldStayLonger
	.globl PlayersHouse_1F_Text_DadShouldStayLonger
PlayersHouse_1F_Text_DadShouldStayLonger: @ 0x081EFE82
	.string "ママ『パパったら\nひさしぶりに かえって きたのに\lポケモンの はなし ばっかり!\pもっと ゆっくり すれば いいのにね!{EOS}"
	.if (. - PlayersHouse_1F_Text_DadShouldStayLonger) > 0x3e
	.error "PlayersHouse_1F_Text_DadShouldStayLonger may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_DadShouldStayLonger) < 0x3e
	.space 0x3e - (. - PlayersHouse_1F_Text_DadShouldStayLonger)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:414 PlayersHouse_1F_Text_IsThatABreakingStory
	.globl PlayersHouse_1F_Text_IsThatABreakingStory
PlayersHouse_1F_Text_IsThatABreakingStory: @ 0x081EFEC0
	.string "ママ『なにかの ニュース かしら?{EOS}"
	.if (. - PlayersHouse_1F_Text_IsThatABreakingStory) > 0x12
	.error "PlayersHouse_1F_Text_IsThatABreakingStory may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_IsThatABreakingStory) < 0x12
	.space 0x12 - (. - PlayersHouse_1F_Text_IsThatABreakingStory)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:417 PlayersHouse_1F_Text_LatiEmergencyNewsFlash
	.globl PlayersHouse_1F_Text_LatiEmergencyNewsFlash
PlayersHouse_1F_Text_LatiEmergencyNewsFlash: @ 0x081EFED2
	.string "りんじ ニュース です\pホウエンちほうの かくちで\n……いろの ポケモンが とんでいた\lという じょうほうが よせられています\pいまのところ しょうたいは\nわかって いない ようです……\pでは ひきつづき\nえいがを おたのしみ ください{EOS}"
	.if (. - PlayersHouse_1F_Text_LatiEmergencyNewsFlash) > 0x77
	.error "PlayersHouse_1F_Text_LatiEmergencyNewsFlash may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_LatiEmergencyNewsFlash) < 0x77
	.space 0x77 - (. - PlayersHouse_1F_Text_LatiEmergencyNewsFlash)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:427 PlayersHouse_1F_Text_WhatColorDidTheySay
	.globl PlayersHouse_1F_Text_WhatColorDidTheySay
PlayersHouse_1F_Text_WhatColorDidTheySay: @ 0x081EFF49
	.string "ママ『ねえ ねえ {PLAYER}\nいまの ニュース\lなにいろの ポケモンって いってたの?{EOS}"
	.if (. - PlayersHouse_1F_Text_WhatColorDidTheySay) > 0x29
	.error "PlayersHouse_1F_Text_WhatColorDidTheySay may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_WhatColorDidTheySay) < 0x29
	.space 0x29 - (. - PlayersHouse_1F_Text_WhatColorDidTheySay)
	.endif
	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:432 PlayersHouse_1F_Text_StillUnknownPokemon
	.globl PlayersHouse_1F_Text_StillUnknownPokemon
PlayersHouse_1F_Text_StillUnknownPokemon: @ 0x081EFF72
	.string "ママ『へえー まだまだ\nしられていない ポケモンは いるのねえ{EOS}"
	.if (. - PlayersHouse_1F_Text_StillUnknownPokemon) > 0x20
	.error "PlayersHouse_1F_Text_StillUnknownPokemon may not grow beyond its original slot"
	.endif
	.if (. - PlayersHouse_1F_Text_StillUnknownPokemon) < 0x20
	.space 0x20 - (. - PlayersHouse_1F_Text_StillUnknownPokemon)
	.endif

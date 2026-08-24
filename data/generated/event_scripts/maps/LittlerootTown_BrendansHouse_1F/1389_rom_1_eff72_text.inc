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
	.globl gText_Rom_1EFF72
gText_Rom_1EFF72: @ 0x081EFF72
	.string "ママ『へえー まだまだ\nしられていない ポケモンは いるのねえ{EOS}"
	.if (. - gText_Rom_1EFF72) > 0x20
	.error "gText_Rom_1EFF72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFF72) < 0x20
	.space 0x20 - (. - gText_Rom_1EFF72)
	.endif
	@ analyzed canonical ROM range 0x081EFF92-0x081F0216
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_LittlerootTown_BrendansHouse_2F_OnTransition_OnWarpIntoMap: @ 0x081EFF92
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081EFF9D
	.byte 0x04
	.4byte gMapScriptConditionTable_LittlerootTown_BrendansHouse_2F_OnWarpIntoMap
	.byte 0
EventScript_JP_081EFF9D: @ 0x081EFF9D
	compare_var_to_value 0x408D, 0x0002
	call_if 0x00, EventScript_JP_081F0006
	compare_var_to_value 0x408D, 0x0003
	call_if 0x04, EventScript_JP_081EFFC9
	compare_var_to_value 0x4092, 0x0004
	call_if 0x01, EventScript_JP_08257EE8
	call 0x08245D90
	setvar 0x4089, 0x0000
	end
EventScript_JP_081EFFC9: @ 0x081EFFC9
	checkflag 0x0124
	goto_if 0x01, EventScript_JP_081EFFE2
	compare_var_to_value 0x4084, 0x0002
	goto_if 0x04, EventScript_JP_081F0005
	goto EventScript_JP_081EFFE2
EventScript_JP_081EFFE2: @ 0x081EFFE2
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F0005
	compare_var_to_value 0x40D3, 0x0002
	goto_if 0x04, EventScript_JP_081F0B55
	setobjectxyperm 0x0001, 0x0000, 0x0002
	setobjectmovementtype 0x0001, 0x07
	return
EventScript_JP_081F0005: @ 0x081F0005
	return
EventScript_JP_081F0006: @ 0x081F0006
	checkplayergender
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F0013
	return
EventScript_JP_081F0013: @ 0x081F0013
	setvar 0x408D, 0x0002
	return
gMapScriptConditionTable_LittlerootTown_BrendansHouse_2F_OnWarpIntoMap: @ 0x081F0019
	@ conditional map script table
	.2byte 0x4089, 0x0000
	.4byte EventScript_JP_081F0023
	.2byte 0
EventScript_JP_081F0023: @ 0x081F0023
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x08245DBB
	end
.globl EventScript_JP_081F0030
EventScript_JP_081F0030: @ 0x081F0030
	lockall
	compare_var_to_value 0x408D, 0x0002
	goto_if 0x01, EventScript_JP_081F0046
	loadword 0x00, RivalsHouse_2F_Text_ItsRivalsPokeBall
	callstd 0x04
	releaseall
	end
EventScript_JP_081F0046: @ 0x081F0046
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	delay 0x000A
	@ event command: addobject
	addobject 0x0001
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkDownX2_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	playse 0x0015
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x0001, PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x000A
	playbgm 0x01A5, 0x01
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081F00B6
	compare_var_to_value 0x800C, 0x0001
	call_if 0x01, EventScript_JP_081F00E5
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_081F0114
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081F0143
	setvar 0x408D, 0x0003
	setflag 0x0331
	clearflag 0x02F8
	setvar 0x4050, 0x0001
	savebgm 0x0000
	fadedefaultbgm
	releaseall
	end
EventScript_JP_081F00B6: @ 0x081F00B6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX2_WalkDownX2_WalkLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X4_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkUpX3_WalkLeftX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F00E5: @ 0x081F00E5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX3
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkUp_WalkLeftX4_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0114: @ 0x081F0114
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX2_WalkDown_WalkInPlaceFastestLeft
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x00FF, LittlerootTown_BrendansHouse_1F_Movement_Delay8_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestLeft
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkUpX2_WalkLeftX5_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_081F0143: @ 0x081F0143
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX5_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	@ event command: applymovement
	applymovement 0x00FF, PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	waitmovement 0x0000
	loadword 0x00, gText_Rom_1F0F62
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x0001, LittlerootTown_BrendansHouse_1F_Movement_WalkUp_WalkLeftX2_WalkInPlaceFastestUp
	@ event command: waitmovement
	waitmovement 0x0000
	return
LittlerootTown_BrendansHouse_1F_Movement_WalkDownX2_WalkInPlaceFastestLeft: @ 0x081F016B
	@ object movement sequence
	walk_down
	walk_down
	walk_in_place_fastest_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX2_WalkDownX2_WalkLeft: @ 0x081F016F
	@ object movement sequence
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkUpX3_WalkLeftX4_WalkInPlaceFastestUp: @ 0x081F0175
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
LittlerootTown_BrendansHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X4_WalkInPlaceFastestLeft: @ 0x081F017E
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX3: @ 0x081F0186
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkUp_WalkLeftX4_WalkInPlaceFastestUp: @ 0x081F018A
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
LittlerootTown_BrendansHouse_1F_Movement_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestLeft: @ 0x081F0191
	@ object movement sequence
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX2_WalkDown_WalkInPlaceFastestLeft: @ 0x081F0197
	@ object movement sequence
	walk_left
	walk_left
	walk_down
	walk_in_place_fastest_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkUpX2_WalkLeftX5_WalkInPlaceFastestUp: @ 0x081F019C
	@ object movement sequence
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
LittlerootTown_BrendansHouse_1F_Movement_Delay8_Delay16_WalkInPlaceFastestUp_Delay16X2_WalkInPlaceFastestLeft: @ 0x081F01A5
	@ object movement sequence
	delay_8
	delay_16
	walk_in_place_fastest_up
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkLeftX5_WalkInPlaceFastestDown: @ 0x081F01AC
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_down
	step_end
LittlerootTown_BrendansHouse_1F_Movement_WalkUp_WalkLeftX2_WalkInPlaceFastestUp: @ 0x081F01B3
	@ object movement sequence
	walk_up
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
	.globl LittlerootTown_BrendansHouse_1F_Movement_Delay16X2_WalkInPlaceFastestLeft
LittlerootTown_BrendansHouse_1F_Movement_Delay16X2_WalkInPlaceFastestLeft: @ 0x081F01B8
	.byte 0x14, 0x14, 0x27, 0xFE
.globl EventScript_JP_081F01BC
EventScript_JP_081F01BC: @ 0x081F01BC
	lockall
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081F01D5
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_081F01FB
	end
EventScript_JP_081F01D5: @ 0x081F01D5
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	@ event command: special
	special DoLotteryCornerComputerEffect
	playse 0x0004
	loadword 0x00, gText_Rom_243B10
	callstd 0x04
	@ event command: special
	special BedroomPC
	waitstate
	releaseall
	end
EventScript_JP_081F01EE: @ 0x081F01EE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0001
	playse 0x0003
	@ event command: special
	special DoPCTurnOffEffect
	releaseall
	end
EventScript_JP_081F01FB: @ 0x081F01FB
	loadword 0x00, gText_Rom_243AA2
	callstd 0x04
	releaseall
	end
.globl EventScript_JP_081F0205
EventScript_JP_081F0205: @ 0x081F0205
	loadword 0x00, PlayersHouse_2F_Text_Notebook
	callstd 0x03
	end
.globl EventScript_JP_081F020E
EventScript_JP_081F020E: @ 0x081F020E
	loadword 0x00, PlayersHouse_2F_Text_ItsAGameCube
	callstd 0x03
	end

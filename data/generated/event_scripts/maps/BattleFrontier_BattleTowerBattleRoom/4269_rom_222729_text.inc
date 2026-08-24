	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:471 BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass
	.globl BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass
BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass: @ 0x08222412
	.string "{PLAYER}の たたかいが\nフロンティアパスに きろく された!{EOS}"
	.if (. - BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass) > 0x1d
	.error "BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass) < 0x1d
	.space 0x1d - (. - BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass)
	.endif
	@ data/maps/BattleFrontier_BattleDomePreBattleRoom/scripts.inc:352 BattleFrontier_BattleDomePreBattleRoom_Text_SaveAndQuitGame (+1 aliases)
	.globl gText_Rom_22242F
gText_Rom_22242F: @ 0x0822242F
	.string "レポートを かいて しゅうりょう しますか?{EOS}"
	.if (. - gText_Rom_22242F) > 0x17
	.error "gText_Rom_22242F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22242F) < 0x17
	.space 0x17 - (. - gText_Rom_22242F)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:479 BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
	.globl BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait
BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait: @ 0x08222446
	.string "レポートを かいています!\nしばらく おまちくださいませ!{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait) > 0x1e
	.error "BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait) < 0x1e
	.space 0x1e - (. - BattleFrontier_BattleTowerBattleRoom_Text_SavingPleaseWait)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:483 BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
	.globl BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge: @ 0x08222464
	.string "バトルルームの ちょうせんを\nちゅうし しますか?{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge) > 0x1a
	.error "BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge) < 0x1a
	.space 0x1a - (. - BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:487 BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved
	.globl BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved
BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved: @ 0x0822247E
	.string "ふぐあいに より\nきろく できませんでした!{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved) > 0x17
	.error "BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved) < 0x17
	.space 0x17 - (. - BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:491 BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay
	.globl BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay
BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay: @ 0x08222495
	.string "…… おきゃくさま\pじつは わたくしどもの しゅじんで ある\nタワータイクーンが\lあなたと たたかう ために まもなく\lバトルルームに いらっしゃる そうです{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay) > 0x50
	.error "BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay) < 0x50
	.space 0x50 - (. - BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:497 BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden
BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden: @ 0x082224E5
	.string "タワータイクーンとの たたかい です!\nかくごは よろしい ですか?{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden) > 0x23
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:501 BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel
	.globl BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel
BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel: @ 0x08222508
	.string "はじめまして……\pぼくの なまえは リラ\nバトルタワーを かんりする もの……\lタワータイクーンだ……\pあなたの うわさは\nいろいろと きいて いるよ\pしょうじき ぼくには みりょくを\nかんじない こと ばかり だけどね……\pぼくが あなたに あいに きた りゆう……\nそれは ただ ひとつ……{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel) > 0x94
	.error "BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel) < 0x94
	.space 0x94 - (. - BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:513 BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent
	.globl BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent
BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent: @ 0x0822259C
	.string "あなたの さいのうを\nここに しめしなさい……{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent) > 0x18
	.error "BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:517 BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized
	.globl BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized
BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized: @ 0x082225B4
	.string "リラ『ふふふ いいね……\pでは フロンティアパスを……\nあなたの さいのうの あかしを きざもう{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized) > 0x31
	.error "BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized) < 0x31
	.space 0x31 - (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:522 BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol
	.globl BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol
BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol: @ 0x082225E5
	.string "フロンティアパスに\nアビリティシンボルが きざまれた!{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol) > 0x1c
	.error "BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol) < 0x1c
	.space 0x1c - (. - BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:526 BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime
	.globl BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime
BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime: @ 0x08222601
	.string "…… …… ……\pあなたは ポケモンバトルに\nじしんが あるのだろ?\pだったら もっと もっと たたかって\nもっと もっと かちぬいて おいでよ\pまた あえる そのときを\nぼくは まってる から……{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime) > 0x64
	.error "BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime) < 0x64
	.space 0x64 - (. - BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:535 BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack
	.globl BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack
BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack: @ 0x08222665
	.string "リラ『ほんとに きて くれたんだね……\p…… …… …… ……\pここまで かちぬいた あなた……\n…… あなたが あいて だったら\lぼくも てかげん せずに たたかえる……\pひさしぶり……\pなんにも かんがえずに\nたたかう ことが できる なんて……{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack) > 0x7e
	.error "BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack) < 0x7e
	.space 0x7e - (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:545 BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe
	.globl BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe
BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe: @ 0x082226E3
	.string "さあ はじめようよ!{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe) > 0xb
	.error "BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe) < 0xb
	.space 0xb - (. - BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:548 BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease
	.globl BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease
BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease: @ 0x082226EE
	.string "リラ『ふふっ おめでとう……\nさあ あなたの フロンティアパスを……{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease) > 0x23
	.error "BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease) < 0x23
	.space 0x23 - (. - BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:552 BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine
	.globl BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine
BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine: @ 0x08222711
	.string "アビリティシンボルが\nきんいろに かがやいた!{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine) > 0x18
	.error "BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine) < 0x18
	.space 0x18 - (. - BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:556 BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain
	.globl BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain
BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain: @ 0x08222729
	.string "たのしかった……\pこんなに ポケモンバトルが\nたのしい なんて はじめて……\pまた あなたと たたかえると いいな……{EOS}"
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain) > 0x3c
	.error "BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain may not grow beyond its original slot"
	.endif
	.if (. - BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain) < 0x3c
	.space 0x3c - (. - BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain)
	.endif

	@ analyzed canonical ROM range 0x08222765-0x08222A98
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_SouthernIsland_Exterior_OnTransition: @ 0x08222765
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822276B
	.byte 0
EventScript_JP_0822276B: @ 0x0822276B
	setflag 0x08A9
	end
.globl EventScript_JP_0822276F
EventScript_JP_0822276F: @ 0x0822276F
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	loadword 0x00, EventTicket_Text_SouthernIslandSailBack
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082227B4
	loadword 0x00, EventTicket_Text_SailHome
	callstd 0x04
	closemessage
	@ event command: applymovement
	applymovement 0x800F, PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x001E
	@ event command: hideobjectat
	hideobjectat 0x0001, MAP_ID_SOUTHERN_ISLAND_EXTERIOR
	setvar 0x8004, 0x0002
	call 0x082432D3
	@ event command: warp
	warp MAP_ID_LILYCOVE_CITY_HARBOR, 0xFF, 0x0008, 0x000B
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082227B4: @ 0x082227B4
	loadword 0x00, EventTicket_Text_AsYouLike
	callstd 0x04
	release
	end
EventScript_JP_082227BE: @ 0x082227BE
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleTowerBattleRoom_Movement_WalkDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
EventScript_JP_082227C9: @ 0x082227C9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: applymovement
	applymovement 0x00FF, BattleFrontier_BattleTowerBattleRoom_Movement_WalkLeft_WalkInPlaceFastestDown
	@ event command: waitmovement
	waitmovement 0x0000
	return
BattleFrontier_BattleTowerBattleRoom_Movement_WalkDown: @ 0x082227D4
	@ object movement sequence
	walk_down
	step_end
BattleFrontier_BattleTowerBattleRoom_Movement_WalkLeft_WalkInPlaceFastestDown: @ 0x082227D6
	@ object movement sequence
	walk_left
	walk_in_place_fastest_down
	step_end
.globl EventScript_JP_082227D9
EventScript_JP_082227D9: @ 0x082227D9
	loadword 0x00, SouthernIsland_Exterior_Text_Sign
	callstd 0x03
	end
gMapScriptDispatch_SouthernIsland_Interior_OnResume_OnTransition: @ 0x082227E2
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_082227ED
	.byte 0x03
	.4byte EventScript_JP_0822280B
	.byte 0
EventScript_JP_082227ED: @ 0x082227ED
	checkflag 0x08C1
	call_if 0x01, EventScript_JP_082227F7
	end
EventScript_JP_082227F7: @ 0x082227F7
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	specialvar_ 0x800D, 0x00B4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x05, 0x08244178
	@ event command: removeobject
	removeobject 0x0002
	return
EventScript_JP_0822280B: @ 0x0822280B
	compare_var_to_value 0x40D5, 0x0000
	call_if 0x01, EventScript_JP_08222827
	compare_var_to_value 0x40D5, 0x0000
	call_if 0x05, EventScript_JP_08222832
	call EventScript_JP_0822283D
	end
EventScript_JP_08222827: @ 0x08222827
	setvar 0x4011, 0x00BC
	setvar 0x4004, 0x0198
	return
EventScript_JP_08222832: @ 0x08222832
	setvar 0x4011, 0x00BB
	setvar 0x4004, 0x0197
	return
EventScript_JP_0822283D: @ 0x0822283D
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_08222855
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822285B
	end
EventScript_JP_08222855: @ 0x08222855
	setvar 0x4010, 0x0064
	return
EventScript_JP_0822285B: @ 0x0822285B
	setvar 0x4010, 0x0069
	return
.globl EventScript_JP_08222861
EventScript_JP_08222861: @ 0x08222861
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	setvar 0x8008, 0x000C
	goto EventScript_JP_0822286D
	.byte 0x02
EventScript_JP_0822286D: @ 0x0822286D
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	checkflag 0x0002
	goto_if 0x01, EventScript_JP_08222937
	checkflag 0x01C8
	goto_if 0x01, EventScript_JP_08222937
	checkflag 0x01C9
	goto_if 0x01, EventScript_JP_08222937
	checkflag 0x08B3
	goto_if 0x00, EventScript_JP_08222937
	setflag 0x00CE
	setflag 0x0002
	@ event command: special
	special SpawnCameraObject
	@ event command: applymovement
	applymovement 0x007F, BattleFrontier_BattleTowerBattleRoom_Movement_WalkUpX3
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0032
	waitse
	playmoncry 0x4004, 0x0000
	delay 0x001E
	waitmoncry
	@ event command: addobject
	addobject 0x0002
	delay 0x001E
	@ event command: applymovement
	applymovement 0x007F, BattleFrontier_BattleTowerBattleRoom_Movement_Delay16X7_WalkDownX3_WalkInPlaceFastestUp
	@ event command: applymovement
	applymovement 0x0002, BattleFrontier_BattleTowerBattleRoom_Movement_WalkDownX5_Delay16X2_WalkDownX4
	@ event command: waitmovement
	waitmovement 0x0000
	delay 0x0032
	@ event command: special
	special RemoveCameraObject
	setvar 0x800F, 0x0002
	compare_var_to_value 0x40D5, 0x0000
	call_if 0x01, EventScript_JP_08222941
	compare_var_to_value 0x40D5, 0x0000
	call_if 0x05, EventScript_JP_08222954
	setflag 0x08C1
	@ event command: special
	special BattleSetup_StartLatiBattle
	waitstate
	clearflag 0x08C1
	specialvar_ 0x800D, 0x00B4
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822291E
	compare_var_to_value 0x800D, 0x0004
	goto_if 0x01, EventScript_JP_0822292C
	compare_var_to_value 0x800D, 0x0005
	goto_if 0x01, EventScript_JP_0822292C
	setflag 0x01C9
	releaseall
	end
EventScript_JP_0822291E: @ 0x0822291E
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setflag 0x01C8
	copyvar 0x8004, 0x4004
	goto 0x082441A0
	.byte 0x02
EventScript_JP_0822292C: @ 0x0822292C
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	copyvar 0x8004, 0x4004
	goto 0x082441A0
	.byte 0x02
EventScript_JP_08222937: @ 0x08222937
	loadword 0x00, SouthernIsland_Interior_Text_Sign
	callstd 0x04
	releaseall
	end
EventScript_JP_08222941: @ 0x08222941
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0198
	setvar 0x8005, 0x0032
	setvar 0x8006, 0x00BF
	@ event command: special
	special CreateObedientEnemyMon
	return
EventScript_JP_08222954: @ 0x08222954
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0197
	setvar 0x8005, 0x0032
	setvar 0x8006, 0x00BF
	@ event command: special
	special CreateObedientEnemyMon
	return
BattleFrontier_BattleTowerBattleRoom_Movement_WalkUpX3: @ 0x08222967
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	step_end
BattleFrontier_BattleTowerBattleRoom_Movement_Delay16X7_WalkDownX3_WalkInPlaceFastestUp: @ 0x0822296B
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_in_place_fastest_up
	step_end
BattleFrontier_BattleTowerBattleRoom_Movement_WalkDownX5_Delay16X2_WalkDownX4: @ 0x08222977
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end
	.byte 0x00
.globl EventScript_JP_08222984
EventScript_JP_08222984: @ 0x08222984
	loadword 0x00, gText_Rom_262A20
	callstd 0x02
	end
.globl EventScript_JP_0822298D
EventScript_JP_0822298D: @ 0x0822298D
	loadword 0x00, gText_Rom_262A67
	callstd 0x02
	end
.globl EventScript_JP_08222996
EventScript_JP_08222996: @ 0x08222996
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	loadword 0x00, gText_Rom_262AAF
	callstd 0x02
	end
	.byte 0x00, 0x00
gMapScriptDispatch_BattleFrontier_OutsideEast_OnResume_OnTransition: @ 0x082229A1
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_082229AC
	.byte 0x03
	.4byte EventScript_JP_082229CA
	.byte 0
EventScript_JP_082229AC: @ 0x082229AC
	checkflag 0x08C1
	call_if 0x01, EventScript_JP_082229B6
	end
EventScript_JP_082229B6: @ 0x082229B6
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	specialvar_ 0x800D, 0x00B4
	compare_var_to_value 0x800D, 0x0007
	goto_if 0x05, 0x08244178
	@ event command: removeobject
	removeobject 0x800F
	return
EventScript_JP_082229CA: @ 0x082229CA
	setvar 0x40BC, 0x0000
	setflag 0x0396
	checkflag 0x01C6
	call_if 0x00, EventScript_JP_082229DC
	end
EventScript_JP_082229DC: @ 0x082229DC
	clearflag 0x034A
	return
.globl EventScript_JP_082229E0
EventScript_JP_082229E0: @ 0x082229E0
	loadword 0x00, gText_Rom_222BAD
	callstd 0x03
	end
.globl EventScript_JP_082229E9
EventScript_JP_082229E9: @ 0x082229E9
	loadword 0x00, gText_Rom_222BCC
	callstd 0x03
	end
.globl EventScript_JP_082229F2
EventScript_JP_082229F2: @ 0x082229F2
	loadword 0x00, gText_Rom_222BE7
	callstd 0x03
	end
.globl EventScript_JP_082229FB
EventScript_JP_082229FB: @ 0x082229FB
	loadword 0x00, gText_Rom_222C04
	callstd 0x03
	end
.globl EventScript_JP_08222A04
EventScript_JP_08222A04: @ 0x08222A04
	loadword 0x00, BattleFrontier_OutsideEast_Text_BattleTowerFeelsSpecial
	callstd 0x02
	end
.globl EventScript_JP_08222A0D
EventScript_JP_08222A0D: @ 0x08222A0D
	loadword 0x00, BattleFrontier_OutsideEast_Text_ConquerLeagueAndFrontier
	callstd 0x02
	end
.globl EventScript_JP_08222A16
EventScript_JP_08222A16: @ 0x08222A16
	loadword 0x00, BattleFrontier_OutsideEast_Text_PyramidTooHarsh
	callstd 0x02
	end
.globl EventScript_JP_08222A1F
EventScript_JP_08222A1F: @ 0x08222A1F
	loadword 0x00, BattleFrontier_OutsideEast_Text_ThriveInDarkness
	callstd 0x02
	end
.globl EventScript_JP_08222A28
EventScript_JP_08222A28: @ 0x08222A28
	loadword 0x00, BattleFrontier_OutsideEast_Text_PutTogetherUltimateTeam
	callstd 0x02
	end
.globl EventScript_JP_08222A31
EventScript_JP_08222A31: @ 0x08222A31
	lock
	loadword 0x00, BattleFrontier_OutsideEast_Text_BelieveInYouBuddy
	callstd 0x04
	release
	end
.globl EventScript_JP_08222A3C
EventScript_JP_08222A3C: @ 0x08222A3C
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, BattleFrontier_OutsideEast_Text_ZigzagoonLooksVacant
	callstd 0x04
	waitmoncry
	release
	end
.globl EventScript_JP_08222A4F
EventScript_JP_08222A4F: @ 0x08222A4F
	loadword 0x00, BattleFrontier_OutsideEast_Text_PeopleCallMeBusybody
	callstd 0x02
	end
.globl EventScript_JP_08222A58
EventScript_JP_08222A58: @ 0x08222A58
	loadword 0x00, BattleFrontier_OutsideEast_Text_OnceBeatGymLeader
	callstd 0x02
	end
.globl EventScript_JP_08222A61
EventScript_JP_08222A61: @ 0x08222A61
	loadword 0x00, BattleFrontier_OutsideEast_Text_FastOnBikeAndBattles
	callstd 0x02
	end
.globl EventScript_JP_08222A6A
EventScript_JP_08222A6A: @ 0x08222A6A
	loadword 0x00, BattleFrontier_OutsideEast_Text_BetterThanDaddyAtPokemon
	callstd 0x02
	end
.globl EventScript_JP_08222A73
EventScript_JP_08222A73: @ 0x08222A73
	lock
	loadword 0x00, BattleFrontier_OutsideEast_Text_GoRackUpSomeWinsForDaddy
	callstd 0x04
	release
	end
.globl EventScript_JP_08222A7E
EventScript_JP_08222A7E: @ 0x08222A7E
	loadword 0x00, BattleFrontier_OutsideEast_Text_DidScottBringYouHere
	callstd 0x02
	end
.globl EventScript_JP_08222A87
EventScript_JP_08222A87: @ 0x08222A87
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lock
	faceplayer
	waitse
	playse 0x010D
	@ event command: applymovement
	applymovement 0x000E, BattleFrontier_BattleTowerBattleRoom_Movement_FaceRight_Delay8_FaceDown_Delay8_Then15Actions_FaceLeft_Delay8_FaceDown
	@ event command: waitmovement
	waitmovement 0x0000
	release
	end

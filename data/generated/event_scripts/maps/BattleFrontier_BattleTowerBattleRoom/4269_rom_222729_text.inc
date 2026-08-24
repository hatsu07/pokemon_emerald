	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:471 BattleFrontier_BattleTowerLobby_Text_BattleRecordedOnPass
	.globl gText_Rom_222412
gText_Rom_222412: @ 0x08222412
	.string "{PLAYER}の たたかいが\nフロンティアパスに きろく された!{EOS}"
	.if (. - gText_Rom_222412) > 0x1d
	.error "gText_Rom_222412 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222412) < 0x1d
	.space 0x1d - (. - gText_Rom_222412)
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
	.globl gText_Rom_222446
gText_Rom_222446: @ 0x08222446
	.string "レポートを かいています!\nしばらく おまちくださいませ!{EOS}"
	.if (. - gText_Rom_222446) > 0x1e
	.error "gText_Rom_222446 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222446) < 0x1e
	.space 0x1e - (. - gText_Rom_222446)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:483 BattleFrontier_BattleTowerBattleRoom_Text_CancelYourChallenge
	.globl gText_Rom_222464
gText_Rom_222464: @ 0x08222464
	.string "バトルルームの ちょうせんを\nちゅうし しますか?{EOS}"
	.if (. - gText_Rom_222464) > 0x1a
	.error "gText_Rom_222464 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222464) < 0x1a
	.space 0x1a - (. - gText_Rom_222464)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:487 BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved
	.globl gText_Rom_22247E
gText_Rom_22247E: @ 0x0822247E
	.string "ふぐあいに より\nきろく できませんでした!{EOS}"
	.if (. - gText_Rom_22247E) > 0x17
	.error "gText_Rom_22247E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22247E) < 0x17
	.space 0x17 - (. - gText_Rom_22247E)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:491 BattleFrontier_BattleTowerBattleRoom_Text_SalonMaidenOnHerWay
	.globl gText_Rom_222495
gText_Rom_222495: @ 0x08222495
	.string "…… おきゃくさま\pじつは わたくしどもの しゅじんで ある\nタワータイクーンが\lあなたと たたかう ために まもなく\lバトルルームに いらっしゃる そうです{EOS}"
	.if (. - gText_Rom_222495) > 0x50
	.error "gText_Rom_222495 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222495) < 0x50
	.space 0x50 - (. - gText_Rom_222495)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:497 BattleFrontier_BattleTowerBattleRoom_Text_ReadyForSalonMaiden
	.globl gText_Rom_2224E5
gText_Rom_2224E5: @ 0x082224E5
	.string "タワータイクーンとの たたかい です!\nかくごは よろしい ですか?{EOS}"
	.if (. - gText_Rom_2224E5) > 0x23
	.error "gText_Rom_2224E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2224E5) < 0x23
	.space 0x23 - (. - gText_Rom_2224E5)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:501 BattleFrontier_BattleTowerBattleRoom_Text_GreetingsImAnabel
	.globl gText_Rom_222508
gText_Rom_222508: @ 0x08222508
	.string "はじめまして……\pぼくの なまえは リラ\nバトルタワーを かんりする もの……\lタワータイクーンだ……\pあなたの うわさは\nいろいろと きいて いるよ\pしょうじき ぼくには みりょくを\nかんじない こと ばかり だけどね……\pぼくが あなたに あいに きた りゆう……\nそれは ただ ひとつ……{EOS}"
	.if (. - gText_Rom_222508) > 0x94
	.error "gText_Rom_222508 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222508) < 0x94
	.space 0x94 - (. - gText_Rom_222508)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:513 BattleFrontier_BattleTowerBattleRoom_Text_LetMeSeeYourTalent
	.globl gText_Rom_22259C
gText_Rom_22259C: @ 0x0822259C
	.string "あなたの さいのうを\nここに しめしなさい……{EOS}"
	.if (. - gText_Rom_22259C) > 0x18
	.error "gText_Rom_22259C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22259C) < 0x18
	.space 0x18 - (. - gText_Rom_22259C)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:517 BattleFrontier_BattleTowerBattleRoom_Text_AnabelTalentShallBeRecognized
	.globl gText_Rom_2225B4
gText_Rom_2225B4: @ 0x082225B4
	.string "リラ『ふふふ いいね……\pでは フロンティアパスを……\nあなたの さいのうの あかしを きざもう{EOS}"
	.if (. - gText_Rom_2225B4) > 0x31
	.error "gText_Rom_2225B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2225B4) < 0x31
	.space 0x31 - (. - gText_Rom_2225B4)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:522 BattleFrontier_BattleTowerBattleRoom_Text_ReceivedAbilitySymbol
	.globl gText_Rom_2225E5
gText_Rom_2225E5: @ 0x082225E5
	.string "フロンティアパスに\nアビリティシンボルが きざまれた!{EOS}"
	.if (. - gText_Rom_2225E5) > 0x1c
	.error "gText_Rom_2225E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2225E5) < 0x1c
	.space 0x1c - (. - gText_Rom_2225E5)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:526 BattleFrontier_BattleTowerBattleRoom_Text_UntilNextTime
	.globl gText_Rom_222601
gText_Rom_222601: @ 0x08222601
	.string "…… …… ……\pあなたは ポケモンバトルに\nじしんが あるのだろ?\pだったら もっと もっと たたかって\nもっと もっと かちぬいて おいでよ\pまた あえる そのときを\nぼくは まってる から……{EOS}"
	.if (. - gText_Rom_222601) > 0x64
	.error "gText_Rom_222601 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222601) < 0x64
	.space 0x64 - (. - gText_Rom_222601)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:535 BattleFrontier_BattleTowerBattleRoom_Text_AnabelYouCameBack
	.globl gText_Rom_222665
gText_Rom_222665: @ 0x08222665
	.string "リラ『ほんとに きて くれたんだね……\p…… …… …… ……\pここまで かちぬいた あなた……\n…… あなたが あいて だったら\lぼくも てかげん せずに たたかえる……\pひさしぶり……\pなんにも かんがえずに\nたたかう ことが できる なんて……{EOS}"
	.if (. - gText_Rom_222665) > 0x7e
	.error "gText_Rom_222665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222665) < 0x7e
	.space 0x7e - (. - gText_Rom_222665)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:545 BattleFrontier_BattleTowerBattleRoom_Text_LetsBeginShallWe
	.globl gText_Rom_2226E3
gText_Rom_2226E3: @ 0x082226E3
	.string "さあ はじめようよ!{EOS}"
	.if (. - gText_Rom_2226E3) > 0xb
	.error "gText_Rom_2226E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2226E3) < 0xb
	.space 0xb - (. - gText_Rom_2226E3)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:548 BattleFrontier_BattleTowerBattleRoom_Text_AnabelCongratsYourPassPlease
	.globl gText_Rom_2226EE
gText_Rom_2226EE: @ 0x082226EE
	.string "リラ『ふふっ おめでとう……\nさあ あなたの フロンティアパスを……{EOS}"
	.if (. - gText_Rom_2226EE) > 0x23
	.error "gText_Rom_2226EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2226EE) < 0x23
	.space 0x23 - (. - gText_Rom_2226EE)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:552 BattleFrontier_BattleTowerBattleRoom_Text_AbilitySymbolTookGoldenShine
	.globl gText_Rom_222711
gText_Rom_222711: @ 0x08222711
	.string "アビリティシンボルが\nきんいろに かがやいた!{EOS}"
	.if (. - gText_Rom_222711) > 0x18
	.error "gText_Rom_222711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222711) < 0x18
	.space 0x18 - (. - gText_Rom_222711)
	.endif
	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:556 BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain
	.globl gText_Rom_222729
gText_Rom_222729: @ 0x08222729
	.string "たのしかった……\pこんなに ポケモンバトルが\nたのしい なんて はじめて……\pまた あなたと たたかえると いいな……{EOS}"
	.if (. - gText_Rom_222729) > 0x3c
	.error "gText_Rom_222729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222729) < 0x3c
	.space 0x3c - (. - gText_Rom_222729)
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
	loadword 0x00, gText_Rom_26354C
	callstd 0x05
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082227B4
	loadword 0x00, gText_Rom_26356A
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
	loadword 0x00, gText_Rom_263578
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
	loadword 0x00, gText_Rom_2635AF
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
	loadword 0x00, gText_Rom_26358B
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
	loadword 0x00, gText_Rom_222C70
	callstd 0x02
	end
.globl EventScript_JP_08222A0D
EventScript_JP_08222A0D: @ 0x08222A0D
	loadword 0x00, gText_Rom_222C98
	callstd 0x02
	end
.globl EventScript_JP_08222A16
EventScript_JP_08222A16: @ 0x08222A16
	loadword 0x00, gText_Rom_222D08
	callstd 0x02
	end
.globl EventScript_JP_08222A1F
EventScript_JP_08222A1F: @ 0x08222A1F
	loadword 0x00, gText_Rom_222D54
	callstd 0x02
	end
.globl EventScript_JP_08222A28
EventScript_JP_08222A28: @ 0x08222A28
	loadword 0x00, gText_Rom_222DB2
	callstd 0x02
	end
.globl EventScript_JP_08222A31
EventScript_JP_08222A31: @ 0x08222A31
	lock
	loadword 0x00, gText_Rom_222E60
	callstd 0x04
	release
	end
.globl EventScript_JP_08222A3C
EventScript_JP_08222A3C: @ 0x08222A3C
	lock
	faceplayer
	waitse
	playmoncry 0x0120, 0x0000
	loadword 0x00, gText_Rom_222E98
	callstd 0x04
	waitmoncry
	release
	end
.globl EventScript_JP_08222A4F
EventScript_JP_08222A4F: @ 0x08222A4F
	loadword 0x00, gText_Rom_222EAA
	callstd 0x02
	end
.globl EventScript_JP_08222A58
EventScript_JP_08222A58: @ 0x08222A58
	loadword 0x00, gText_Rom_222F21
	callstd 0x02
	end
.globl EventScript_JP_08222A61
EventScript_JP_08222A61: @ 0x08222A61
	loadword 0x00, gText_Rom_222F59
	callstd 0x02
	end
.globl EventScript_JP_08222A6A
EventScript_JP_08222A6A: @ 0x08222A6A
	loadword 0x00, gText_Rom_222F8E
	callstd 0x02
	end
.globl EventScript_JP_08222A73
EventScript_JP_08222A73: @ 0x08222A73
	lock
	loadword 0x00, gText_Rom_222FAB
	callstd 0x04
	release
	end
.globl EventScript_JP_08222A7E
EventScript_JP_08222A7E: @ 0x08222A7E
	loadword 0x00, gText_Rom_222DF5
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

	@ data/maps/FortreeCity_House1/scripts.inc:43 FortreeCity_House1_Text_YouWillTradeWontYou
	.globl FortreeCity_House1_Text_YouWillTradeWontYou
FortreeCity_House1_Text_YouWillTradeWontYou: @ 0x0820428B
	.string "うぉー!\nどうしても {STR_VAR_1}が ほしーっ!\l……と\lこころの さけびを きかれて しまった!\pきいた からには\nきみの {STR_VAR_1}と ボクの {STR_VAR_2}を\lもちろん こうかん するでしょ!{EOS}"
	.if (. - FortreeCity_House1_Text_YouWillTradeWontYou) > 0x58
	.error "FortreeCity_House1_Text_YouWillTradeWontYou may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_YouWillTradeWontYou) < 0x58
	.space 0x58 - (. - FortreeCity_House1_Text_YouWillTradeWontYou)
	.endif
	@ data/maps/FortreeCity_House1/scripts.inc:46 FortreeCity_House1_Text_MonYouTakeCare
	.globl FortreeCity_House1_Text_MonYouTakeCare
FortreeCity_House1_Text_MonYouTakeCare: @ 0x082042E3
	.string "おー やったー!\p{STR_VAR_1} よくきたなー!\n{STR_VAR_2} げんきで やれよー!{EOS}"
	.if (. - FortreeCity_House1_Text_MonYouTakeCare) > 0x22
	.error "FortreeCity_House1_Text_MonYouTakeCare may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_MonYouTakeCare) < 0x22
	.space 0x22 - (. - FortreeCity_House1_Text_MonYouTakeCare)
	.endif
	@ data/maps/FortreeCity_House1/scripts.inc:49 FortreeCity_House1_Text_ThisIsntAMon
	.globl FortreeCity_House1_Text_ThisIsntAMon
FortreeCity_House1_Text_ThisIsntAMon: @ 0x08204305
	.string "いやソレ\n{STR_VAR_1}じゃないでしょ{EOS}"
	.if (. - FortreeCity_House1_Text_ThisIsntAMon) > 0xf
	.error "FortreeCity_House1_Text_ThisIsntAMon may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_ThisIsntAMon) < 0xf
	.space 0xf - (. - FortreeCity_House1_Text_ThisIsntAMon)
	.endif
	@ data/maps/FortreeCity_House1/scripts.inc:52 FortreeCity_House1_Text_YouWontTradeMe
	.globl FortreeCity_House1_Text_YouWontTradeMe
FortreeCity_House1_Text_YouWontTradeMe: @ 0x08204314
	.string "え こうかん しないの?\nこころの さけびを きいたくせに……{EOS}"
	.if (. - FortreeCity_House1_Text_YouWontTradeMe) > 0x20
	.error "FortreeCity_House1_Text_YouWontTradeMe may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_YouWontTradeMe) < 0x20
	.space 0x20 - (. - FortreeCity_House1_Text_YouWontTradeMe)
	.endif
	@ data/maps/FortreeCity_House1/scripts.inc:55 FortreeCity_House1_Text_GoingToMakeVolbeatStrong
	.globl FortreeCity_House1_Text_GoingToMakeVolbeatStrong
FortreeCity_House1_Text_GoingToMakeVolbeatStrong: @ 0x08204334
	.string "よし いまから\nバルビートを つよく するぞー!\lプラスルも つよく してやってよ!{EOS}"
	.if (. - FortreeCity_House1_Text_GoingToMakeVolbeatStrong) > 0x2b
	.error "FortreeCity_House1_Text_GoingToMakeVolbeatStrong may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_GoingToMakeVolbeatStrong) < 0x2b
	.space 0x2b - (. - FortreeCity_House1_Text_GoingToMakeVolbeatStrong)
	.endif
	@ data/maps/FortreeCity_House1/scripts.inc:58 FortreeCity_House1_Text_TradingMemoriesWithOthers
	.globl FortreeCity_House1_Text_TradingMemoriesWithOthers
FortreeCity_House1_Text_TradingMemoriesWithOthers: @ 0x0820435F
	.string "ひとと ポケモンを こうかん する……\pつまりは それぞれの\nおもいでを こうかん しているのじゃな{EOS}"
	.if (. - FortreeCity_House1_Text_TradingMemoriesWithOthers) > 0x33
	.error "FortreeCity_House1_Text_TradingMemoriesWithOthers may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_TradingMemoriesWithOthers) < 0x33
	.space 0x33 - (. - FortreeCity_House1_Text_TradingMemoriesWithOthers)
	.endif
	@ data/maps/FortreeCity_House1/scripts.inc:61 FortreeCity_House1_Text_Zigzagoon
	.globl FortreeCity_House1_Text_Zigzagoon
FortreeCity_House1_Text_Zigzagoon: @ 0x08204392
	.string "ジグザグマ『グモモォ?{EOS}"
	.if (. - FortreeCity_House1_Text_Zigzagoon) > 0xc
	.error "FortreeCity_House1_Text_Zigzagoon may not grow beyond its original slot"
	.endif
	.if (. - FortreeCity_House1_Text_Zigzagoon) < 0xc
	.space 0xc - (. - FortreeCity_House1_Text_Zigzagoon)
	.endif
	@ analyzed canonical ROM range 0x0820439E-0x08204577
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_FortreeCity_Gym_OnTransition_OnWarpIntoMap: @ 0x0820439E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082043A9
	.byte 0x04
	.4byte gMapScriptConditionTable_FortreeCity_Gym_OnWarpIntoMap
	.byte 0
EventScript_JP_082043A9: @ 0x082043A9
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	@ event command: special
	special RotatingGate_InitPuzzle
	end
gMapScriptConditionTable_FortreeCity_Gym_OnWarpIntoMap: @ 0x082043AD
	@ conditional map script table
	.2byte 0x4000, 0x4000
	.4byte EventScript_JP_082043B7
	.2byte 0
EventScript_JP_082043B7: @ 0x082043B7
	@ event command: special
	special RotatingGate_InitPuzzleAndGraphics
	end
.globl EventScript_JP_082043BB
EventScript_JP_082043BB: @ 0x082043BB
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 0x010E, 0x0000, FortreeCity_Gym_Text_WinonaIntro, FortreeCity_Gym_Text_WinonaDefeat, EventScript_JP_082043F0
	specialvar_ 0x800D, 0x0039
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_08204480
	checkflag 0x00AA
	goto_if 0x00, EventScript_JP_08204439
	loadword 0x00, FortreeCity_Gym_Text_WinonaPostBattle
	callstd 0x04
	release
	end
EventScript_JP_082043F0: @ 0x082043F0
	message FortreeCity_Gym_Text_ReceivedFeatherBadge
	waitmessage
	call 0x0824310A
	loadword 0x00, FortreeCity_Gym_Text_ExplainFeatherBadgeTakeThis
	callstd 0x04
	setflag 0x04F5
	setflag 0x086C
	setvar 0x8008, 0x0006
	call 0x08242FCF
	call EventScript_JP_0820445D
	closemessage
	delay 0x001E
	playfanfare 0x01CC
	loadword 0x00, FortreeCity_Gym_Text_RegisteredWinona
	callstd 0x04
	waitfanfare
	closemessage
	delay 0x001E
	setflag 0x01D7
	setvar 0x40F3, 0x0000
	setflag 0x008A
	release
	end
EventScript_JP_08204439: @ 0x08204439
	setorcopyvar 0x8000, 0x0148
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	loadword 0x00, FortreeCity_Gym_Text_ExplainAerialAce
	callstd 0x04
	setflag 0x00AA
	release
	end
EventScript_JP_0820445D: @ 0x0820445D
	setorcopyvar 0x8000, 0x0148
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430EA
	loadword 0x00, FortreeCity_Gym_Text_ExplainAerialAce
	callstd 0x04
	setflag 0x00AA
	return
EventScript_JP_08204480: @ 0x08204480
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_REMATCH_DOUBLE, 0x010E, 0x0000, FortreeCity_Gym_Text_WinonaPreRematch, FortreeCity_Gym_Text_WinonaRematchDefeat, FortreeCity_Gym_Text_WinonaRematchNeedTwoMons
	loadword 0x00, FortreeCity_Gym_Text_WinonaPostRematch
	callstd 0x06
	end
.globl EventScript_JP_0820449B
EventScript_JP_0820449B: @ 0x0820449B
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0191, 0x0000, FortreeCity_Gym_Text_JaredIntro, FortreeCity_Gym_Text_JaredDefeat
	loadword 0x00, FortreeCity_Gym_Text_JaredPostBattle
	callstd 0x06
	end
.globl EventScript_JP_082044B2
EventScript_JP_082044B2: @ 0x082044B2
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0194, 0x0000, FortreeCity_Gym_Text_EdwardoIntro, FortreeCity_Gym_Text_EdwardoDefeat
	loadword 0x00, FortreeCity_Gym_Text_EdwardoPostBattle
	callstd 0x06
	end
.globl EventScript_JP_082044C9
EventScript_JP_082044C9: @ 0x082044C9
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x028E, 0x0000, FortreeCity_Gym_Text_FlintIntro, FortreeCity_Gym_Text_FlintDefeat
	loadword 0x00, FortreeCity_Gym_Text_FlintPostBattle
	callstd 0x06
	end
.globl EventScript_JP_082044E0
EventScript_JP_082044E0: @ 0x082044E0
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x028F, 0x0000, FortreeCity_Gym_Text_AshleyIntro, FortreeCity_Gym_Text_AshleyDefeat
	loadword 0x00, FortreeCity_Gym_Text_AshleyPostBattle
	callstd 0x06
	end
.globl EventScript_JP_082044F7
EventScript_JP_082044F7: @ 0x082044F7
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0192, 0x0000, FortreeCity_Gym_Text_HumbertoIntro, FortreeCity_Gym_Text_HumbertoDefeat
	loadword 0x00, FortreeCity_Gym_Text_HumbertoPostBattle
	callstd 0x06
	end
.globl EventScript_JP_0820450E
EventScript_JP_0820450E: @ 0x0820450E
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE, 0x0323, 0x0000, FortreeCity_Gym_Text_DariusIntro, FortreeCity_Gym_Text_DariusDefeat
	loadword 0x00, FortreeCity_Gym_Text_DariusPostBattle
	callstd 0x06
	end
.globl EventScript_JP_08204525
EventScript_JP_08204525: @ 0x08204525
	lock
	faceplayer
	checkflag 0x04F5
	goto_if 0x01, EventScript_JP_0820453A
	loadword 0x00, FortreeCity_Gym_Text_GymGuideAdvice
	callstd 0x04
	release
	end
EventScript_JP_0820453A: @ 0x0820453A
	loadword 0x00, FortreeCity_Gym_Text_GymGuidePostVictory
	callstd 0x04
	release
	end
.globl EventScript_JP_08204544
EventScript_JP_08204544: @ 0x08204544
	lockall
	checkflag 0x086C
	goto_if 0x01, EventScript_JP_08204564
	goto EventScript_JP_0820456E
	.byte 0x02
.globl EventScript_JP_08204554
EventScript_JP_08204554: @ 0x08204554
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	lockall
	checkflag 0x086C
	goto_if 0x01, EventScript_JP_08204564
	goto EventScript_JP_0820456E
	.byte 0x02
EventScript_JP_08204564: @ 0x08204564
	loadword 0x00, FortreeCity_Gym_Text_GymStatueCertified
	callstd 0x04
	releaseall
	end
EventScript_JP_0820456E: @ 0x0820456E
	loadword 0x00, FortreeCity_Gym_Text_GymStatue
	callstd 0x04
	releaseall
	end

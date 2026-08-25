	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:67 EverGrandeCity_SidneysRoom_Text_IntroSpeech
	.globl EverGrandeCity_SidneysRoom_Text_IntroSpeech
EverGrandeCity_SidneysRoom_Text_IntroSpeech: @ 0x0821028C
	.string "ようこそ チャレンジャー!\nおれは してんのうの カゲツ\pうーん いい かお してるな\nなかなか たのしませて くれそうだぞ!\lいいぞ! いい かんじだぞ!\pよーし! おれと おまえ とで\nポケモン リーグでしか できない\lたたかいを たのしむと しようぜ!!{EOS}"
	.if (. - EverGrandeCity_SidneysRoom_Text_IntroSpeech) > 0x83
	.error "EverGrandeCity_SidneysRoom_Text_IntroSpeech may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_SidneysRoom_Text_IntroSpeech) < 0x83
	.space 0x83 - (. - EverGrandeCity_SidneysRoom_Text_IntroSpeech)
	.endif
	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:70 EverGrandeCity_SidneysRoom_Text_Defeat (+1 aliases)
	.globl EverGrandeCity_SidneysRoom_Text_Defeat
EverGrandeCity_SidneysRoom_Text_Defeat: @ 0x0821030F
	.string "おやおや まけちまったよ\nまっ たのしんだから いいんだけどよ{EOS}"
	.if (. - EverGrandeCity_SidneysRoom_Text_Defeat) > 0x20
	.error "EverGrandeCity_SidneysRoom_Text_Defeat may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_SidneysRoom_Text_Defeat) < 0x20
	.space 0x20 - (. - EverGrandeCity_SidneysRoom_Text_Defeat)
	.endif
	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:73 EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
	.globl EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
EverGrandeCity_SidneysRoom_Text_PostBattleSpeech: @ 0x0821032F
	.string "まけた おれから ひとこと\pおまえなら もっと さきに すすめるぜ\nさあ つぎの へやに いって\lたたかいを たのしんで きなよ!{EOS}"
	.if (. - EverGrandeCity_SidneysRoom_Text_PostBattleSpeech) > 0x42
	.error "EverGrandeCity_SidneysRoom_Text_PostBattleSpeech may not grow beyond its original slot"
	.endif
	.if (. - EverGrandeCity_SidneysRoom_Text_PostBattleSpeech) < 0x42
	.space 0x42 - (. - EverGrandeCity_SidneysRoom_Text_PostBattleSpeech)
	.endif
	@ analyzed canonical ROM range 0x08210371-0x0821040A
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08210371: @ 0x08210371
gMapScriptDispatch_EverGrandeCity_PhoebesRoom_OnLoad_OnWarpIntoMap_OnFrame: @ 0x08210371
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_082103A7
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_PhoebesRoom_OnWarpIntoMap
	.byte 0x02
	.4byte gMapScriptConditionTable_EverGrandeCity_PhoebesRoom_OnFrame
	.byte 0
gMapScriptConditionTable_EverGrandeCity_PhoebesRoom_OnWarpIntoMap: @ 0x08210381
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821038B
	.2byte 0
EventScript_JP_0821038B: @ 0x0821038B
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_EverGrandeCity_PhoebesRoom_OnFrame: @ 0x08210390
	@ conditional map script table
	.2byte 0x409C, 0x0001
	.4byte EventScript_JP_0821039A
	.2byte 0
EventScript_JP_0821039A: @ 0x0821039A
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0002
	releaseall
	end
EventScript_JP_082103A7: @ 0x082103A7
	checkflag 0x04FC
	call_if 0x01, EventScript_JP_082103BC
	compare_var_to_value 0x409C, 0x0002
	call_if 0x01, EventScript_JP_082103C2
	end
EventScript_JP_082103BC: @ 0x082103BC
	call 0x0824353F
	return
EventScript_JP_082103C2: @ 0x082103C2
	call 0x082435E2
	return
.globl EventScript_JP_082103C8
EventScript_JP_082103C8: @ 0x082103C8
	lock
	faceplayer
	checkflag 0x04FC
	goto_if 0x01, EventScript_JP_082103EF
	playbgm 0x01C2, 0x00
	loadword 0x00, EverGrandeCity_PhoebesRoom_Text_IntroSpeech
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0106, 0x0000, EverGrandeCity_PhoebesRoom_Text_Defeat
	goto EventScript_JP_082103F9
	.byte 0x02
EventScript_JP_082103EF: @ 0x082103EF
	loadword 0x00, EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech
	callstd 0x04
	release
	end
EventScript_JP_082103F9: @ 0x082103F9
	setflag 0x04FC
	call 0x0824347B
	loadword 0x00, EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech
	callstd 0x04
	release
	end

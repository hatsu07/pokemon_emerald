	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:67 EverGrandeCity_SidneysRoom_Text_IntroSpeech
	.globl gText_Rom_21028C
gText_Rom_21028C: @ 0x0821028C
	.string "ようこそ チャレンジャー!\nおれは してんのうの カゲツ\pうーん いい かお してるな\nなかなか たのしませて くれそうだぞ!\lいいぞ! いい かんじだぞ!\pよーし! おれと おまえ とで\nポケモン リーグでしか できない\lたたかいを たのしむと しようぜ!!{EOS}"
	.if (. - gText_Rom_21028C) > 0x83
	.error "gText_Rom_21028C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21028C) < 0x83
	.space 0x83 - (. - gText_Rom_21028C)
	.endif
	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:70 EverGrandeCity_SidneysRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_21030F
gText_Rom_21030F: @ 0x0821030F
	.string "おやおや まけちまったよ\nまっ たのしんだから いいんだけどよ{EOS}"
	.if (. - gText_Rom_21030F) > 0x20
	.error "gText_Rom_21030F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21030F) < 0x20
	.space 0x20 - (. - gText_Rom_21030F)
	.endif
	@ data/maps/EverGrandeCity_SidneysRoom/scripts.inc:73 EverGrandeCity_SidneysRoom_Text_PostBattleSpeech
	.globl gText_Rom_21032F
gText_Rom_21032F: @ 0x0821032F
	.string "まけた おれから ひとこと\pおまえなら もっと さきに すすめるぜ\nさあ つぎの へやに いって\lたたかいを たのしんで きなよ!{EOS}"
	.if (. - gText_Rom_21032F) > 0x42
	.error "gText_Rom_21032F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21032F) < 0x42
	.space 0x42 - (. - gText_Rom_21032F)
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
	loadword 0x00, gText_Rom_21040B
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0106, 0x0000, gText_Rom_2104AB
	goto EventScript_JP_082103F9
	.byte 0x02
EventScript_JP_082103EF: @ 0x082103EF
	loadword 0x00, gText_Rom_2104B6
	callstd 0x04
	release
	end
EventScript_JP_082103F9: @ 0x082103F9
	setflag 0x04FC
	call 0x0824347B
	loadword 0x00, gText_Rom_2104B6
	callstd 0x04
	release
	end

	@ data/maps/EverGrandeCity_PhoebesRoom/scripts.inc:67 EverGrandeCity_PhoebesRoom_Text_PostBattleSpeech
	.globl gText_Rom_2104B6
gText_Rom_2104B6: @ 0x082104B6
	.string "あなたと ポケモンとの あいだにも\nたしかな きずなが あったのね\pそれが わからなかった\nアタシが まけたのは とうぜん\pウン あなたたちの きずなが\nどこまで つうじるか みてみたいな\lつぎの へやに すすみなよ{EOS}"
	.if (. - gText_Rom_2104B6) > 0x6d
	.error "gText_Rom_2104B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2104B6) < 0x6d
	.space 0x6d - (. - gText_Rom_2104B6)
	.endif
	@ analyzed canonical ROM range 0x08210523-0x082105BC
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_EverGrandeCity_GlaciasRoom_OnFrame_OnLoad_OnWarpIntoMap: @ 0x08210523
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_EverGrandeCity_GlaciasRoom_OnFrame
	.byte 0x01
	.4byte EventScript_JP_08210559
	.byte 0x04
	.4byte gMapScriptConditionTable_EverGrandeCity_GlaciasRoom_OnWarpIntoMap
	.byte 0
gMapScriptConditionTable_EverGrandeCity_GlaciasRoom_OnWarpIntoMap: @ 0x08210533
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0821053D
	.2byte 0
EventScript_JP_0821053D: @ 0x0821053D
	turnobject 0x00FF, 0x02
	end
gMapScriptConditionTable_EverGrandeCity_GlaciasRoom_OnFrame: @ 0x08210542
	@ conditional map script table
	.2byte 0x409C, 0x0002
	.4byte EventScript_JP_0821054C
	.2byte 0
EventScript_JP_0821054C: @ 0x0821054C
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0003
	releaseall
	end
EventScript_JP_08210559: @ 0x08210559
	checkflag 0x04FD
	call_if 0x01, EventScript_JP_0821056E
	compare_var_to_value 0x409C, 0x0003
	call_if 0x01, EventScript_JP_08210574
	end
EventScript_JP_0821056E: @ 0x0821056E
	call 0x0824353F
	return
EventScript_JP_08210574: @ 0x08210574
	call 0x082435E2
	return
.globl EventScript_JP_0821057A
EventScript_JP_0821057A: @ 0x0821057A
	lock
	faceplayer
	checkflag 0x04FD
	goto_if 0x01, EventScript_JP_082105A1
	playbgm 0x01C2, 0x00
	loadword 0x00, gText_Rom_2105BD
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0107, 0x0000, gText_Rom_21064B
	goto EventScript_JP_082105AB
	.byte 0x02
EventScript_JP_082105A1: @ 0x082105A1
	loadword 0x00, gText_Rom_210691
	callstd 0x04
	release
	end
EventScript_JP_082105AB: @ 0x082105AB
	setflag 0x04FD
	call 0x0824347B
	loadword 0x00, gText_Rom_210691
	callstd 0x04
	release
	end

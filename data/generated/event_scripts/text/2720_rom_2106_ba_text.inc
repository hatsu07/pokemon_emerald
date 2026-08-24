	@ data/maps/EverGrandeCity_GlaciasRoom/scripts.inc:61 EverGrandeCity_GlaciasRoom_Text_IntroSpeech
	.globl gText_Rom_2105BD
gText_Rom_2105BD: @ 0x082105BD
	.string "ようこそ\nしてんのうの プリムと いいます\pこおりの わざを きわめたくて\nはるか ホウエンまで やって きました\pですが ここに ちょうせんに くるのは\nやわな トレーナーと ポケモンばかり……\pあなたは どう?\pほんきを だしても だいじょうぶ だと\nうれしいの ですが……!!{EOS}"
	.if (. - gText_Rom_2105BD) > 0x8e
	.error "gText_Rom_2105BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2105BD) < 0x8e
	.space 0x8e - (. - gText_Rom_2105BD)
	.endif
	@ data/maps/EverGrandeCity_GlaciasRoom/scripts.inc:64 EverGrandeCity_GlaciasRoom_Text_Defeat (+1 aliases)
	.globl gText_Rom_21064B
gText_Rom_21064B: @ 0x0821064B
	.string "あなたと ポケモンの\nたましいの あつさ!\pそれは なによりも あつく\nわたくしの こおりの わざが\lつうじる ものでは なかったのですね{EOS}"
	.if (. - gText_Rom_21064B) > 0x46
	.error "gText_Rom_21064B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21064B) < 0x46
	.space 0x46 - (. - gText_Rom_21064B)
	.endif
	@ data/maps/EverGrandeCity_GlaciasRoom/scripts.inc:67 EverGrandeCity_GlaciasRoom_Text_PostBattleSpeech
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_210691
gText_Rom_210691: @ 0x08210691
	.string "つぎに すすみなさい\pそこで ポケモン リーグの\nほんとうの おそろしさ たしかめなさい{EOS}"
	.if (. - gText_Rom_210691) != 0x2d
	.error "gText_Rom_210691 must retain its original byte length"
	.endif
	.globl gText_Rom_2106BA
	.set gText_Rom_2106BA, gText_Rom_210691 + 0x29
	@ ANALYSIS: SOURCE_RANGE offset=0x2106BE, size=0xA2
	@ semantic recovery: script_data; byte-verified against linked ROM
gMapScriptDispatch_EverGrandeCity_DrakesRoom_OnFrame_OnLoad_OnWarpIntoMap: @ 0x082106BE
	@ map script dispatch table
	.byte 0x02
	.4byte gMapScriptConditionTable_EverGrandeCity_DrakesRoom_OnFrame
	.byte 0x01
	.4byte EventScript_JP_082106F4
	.byte 0x04
	.4byte gMapScriptConditionTable_Shared_EverGrandeCity_DrakesRoom_SidneysRoom_OnWarpIntoMap
	.byte 0
	.byte 0x01, 0x40, 0x00, 0x00, 0xD8, 0x06, 0x21, 0x08, 0x00, 0x00
EventText_JP_082106D8: @ 0x082106D8
	.string "サ{EOS}"
	.byte 0x00, 0x02, 0x02
gMapScriptConditionTable_EverGrandeCity_DrakesRoom_OnFrame: @ 0x082106DD
	@ conditional map script table
	.2byte 0x409C, 0x0003
	.4byte EventScript_JP_082106E7
	.2byte 0
EventScript_JP_082106E7: @ 0x082106E7
	lockall
	call 0x082434F8
	setvar 0x409C, 0x0004
	releaseall
	end
EventScript_JP_082106F4: @ 0x082106F4
	checkflag 0x04FE
	call_if 0x01, EventScript_JP_08210709
	compare_var_to_value 0x409C, 0x0004
	call_if 0x01, EventScript_JP_0821070F
	end
EventScript_JP_08210709: @ 0x08210709
	call 0x0824353F
	return
EventScript_JP_0821070F: @ 0x0821070F
	call 0x082435E2
	return
.globl EventScript_JP_08210715
EventScript_JP_08210715: @ 0x08210715
	lock
	faceplayer
	checkflag 0x04FE
	goto_if 0x01, EventScript_JP_0821073C
	playbgm 0x01C2, 0x00
	loadword 0x00, gText_Rom_210760
	callstd 0x04
	@ event command: trainerbattle
	trainerbattle TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT, 0x0108, 0x0000, gText_Rom_210814
	goto EventScript_JP_08210746
	.byte 0x02
EventScript_JP_0821073C: @ 0x0821073C
	loadword 0x00, gText_Rom_210822
	callstd 0x04
	release
	end
EventScript_JP_08210746: @ 0x08210746
	@ ANALYSIS: SEMANTIC_NUMERIC_EVENT_SCRIPT
	@ Event-script bytecode; numeric values are script commands and operands, not unidentified raw bytes.
	setvar 0x8004, 0x0000
	@ event command: special
	special Script_TryGainNewFanFromCounter
	setflag 0x04FE
	call 0x0824347B
	loadword 0x00, gText_Rom_210822
	callstd 0x04
	release
	end

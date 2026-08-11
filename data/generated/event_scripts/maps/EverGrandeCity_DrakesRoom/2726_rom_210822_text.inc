	@ data/maps/EverGrandeCity_DrakesRoom/scripts.inc:70 EverGrandeCity_DrakesRoom_Text_PostBattleSpeech
	.globl gText_Rom_210822
gText_Rom_210822: @ 0x08210822
	.string "さすがは ここまで\nやってきた ポケモン トレーナー\lひつような もの わかっている ようだな\pそう! トレーナーに\nひつよう なのは ただしい こころ!\pポケモンは トレーナーの\nただしい こころに ふれて\lものごとの ぜんあくを はんだんし\lただしい こころに ふれて つよくなる!\pさあ つぎに すすめ!\nチャンピオンが まって おるぞ!!$"
	.if (. - gText_Rom_210822) > 0xae
	.error "gText_Rom_210822 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_210822) < 0xae
	.space 0xae - (. - gText_Rom_210822)
	.endif
	@ analyzed canonical ROM range 0x082108D0-0x08210B2C
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_082108D0: @ 0x082108D0
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_082108E0
	.byte 0x04
	.4byte MapScriptTable_JP_082108E6
	.byte 0x02
	.4byte MapScriptTable_JP_082108F5
	.byte 0
EventScript_JP_082108E0: @ 0x082108E0
	call 0x08242F63
	end
MapScriptTable_JP_082108E6: @ 0x082108E6
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082108F0
	.2byte 0
EventScript_JP_082108F0: @ 0x082108F0
	turnobject 0x00FF, 0x02
	end
MapScriptTable_JP_082108F5: @ 0x082108F5
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082108FF
	.2byte 0
EventScript_JP_082108FF: @ 0x082108FF
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243644
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0028
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08210923 @ Movement_JP_08210923
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setvar 0x4001, 0x0001
	goto EventScript_JP_08210926
	.byte 0x6B, 0x02
Movement_JP_08210923: @ 0x08210923
	@ object movement sequence
	walk_up
	walk_up
	step_end
EventScript_JP_08210926: @ 0x08210926
	playbgm 0x01C6, 0x00
	loadword 0x00, gText_Rom_210B2D
	callstd 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x014F
	.2byte 0x0000
	.4byte 0x08210C82 @ gText_Rom_210C82
	goto EventScript_JP_08210942
	.byte 0x02
EventScript_JP_08210942: @ 0x08210942
	playse 0x0008
	setmetatile 0x0006, 0x0001, 0x0346, 0x0000
	setmetatile 0x0006, 0x0002, 0x0347, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	loadword 0x00, gText_Rom_210CEF
	callstd 0x04
	closemessage
	playse 0x0008
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_0821099D
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_082109A2
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	call EventScript_JP_08210ADE
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_082109A7
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_082109DC
	end
EventScript_JP_0821099D: @ 0x0821099D
	playbgm 0x019F, 0x00
	return
EventScript_JP_082109A2: @ 0x082109A2
	playbgm 0x01A5, 0x00
	return
EventScript_JP_082109A7: @ 0x082109A7
	loadword 0x00, gText_Rom_210D9B
	callstd 0x04
	delay 0x0028
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	call EventScript_JP_08210AF3
	loadword 0x00, gText_Rom_210DC2
	callstd 0x04
	goto EventScript_JP_08210A11
	.byte 0x02
EventScript_JP_082109DC: @ 0x082109DC
	loadword 0x00, gText_Rom_210DED
	callstd 0x04
	delay 0x0028
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	call EventScript_JP_08210AF3
	loadword 0x00, gText_Rom_210E1C
	callstd 0x04
	goto EventScript_JP_08210A11
	.byte 0x02
EventScript_JP_08210A11: @ 0x08210A11
	closemessage
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08210B24 @ Movement_JP_08210B24
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_210E3F
	callstd 0x04
	call 0x08243207
	loadword 0x00, gText_Rom_210F04
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_210F33
	callstd 0x04
	closemessage
	delay 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08210B1C @ Movement_JP_08210B1C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08210AFE @ Movement_JP_08210AFE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08210B19 @ Movement_JP_08210B19
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_210F6D
	callstd 0x04
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	call_if 0x01, EventScript_JP_08210ACC
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_08210AD5
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08210B20 @ Movement_JP_08210B20
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08210B01 @ Movement_JP_08210B01
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	setflag 0x030D
	@ event command: warp
	.byte 0x39
	.byte 0x10
	.byte 0x0B
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0010
	.byte 0x27, 0x6B, 0x02
EventScript_JP_08210ACC: @ 0x08210ACC
	loadword 0x00, gText_Rom_210FD2
	callstd 0x04
	return
EventScript_JP_08210AD5: @ 0x08210AD5
	loadword 0x00, gText_Rom_211025
	callstd 0x04
	return
EventScript_JP_08210ADE: @ 0x08210ADE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08210B07 @ Movement_JP_08210B07
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_08210AF3: @ 0x08210AF3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08210B10 @ Movement_JP_08210B10
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_08210AFE: @ 0x08210AFE
	@ object movement sequence
	walk_up
	walk_up
	step_end
Movement_JP_08210B01: @ 0x08210B01
	@ object movement sequence
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end
Movement_JP_08210B07: @ 0x08210B07
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_up
	walk_in_place_fastest_right
	step_end
Movement_JP_08210B10: @ 0x08210B10
	@ object movement sequence
	walk_in_place_fastest_up
	delay_16
	walk_in_place_fastest_right
	delay_16
	walk_in_place_fastest_up
	delay_8
	walk_in_place_fastest_right
	delay_16
	step_end
Movement_JP_08210B19: @ 0x08210B19
	@ object movement sequence
	walk_right
	walk_up
	step_end
Movement_JP_08210B1C: @ 0x08210B1C
	@ object movement sequence
	walk_up
	walk_up
	walk_in_place_fastest_down
	step_end
Movement_JP_08210B20: @ 0x08210B20
	@ object movement sequence
	walk_up
	delay_8
	set_invisible
	step_end
Movement_JP_08210B24: @ 0x08210B24
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_in_place_fastest_left
	step_end

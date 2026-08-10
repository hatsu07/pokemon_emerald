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
	@ event command: call
	.byte 0x04
	.4byte 0x08242F63
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082108E6: @ 0x082108E6
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082108F0
	.2byte 0
EventScript_JP_082108F0: @ 0x082108F0
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082108F5: @ 0x082108F5
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_082108FF
	.2byte 0
EventScript_JP_082108FF: @ 0x082108FF
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243644
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08210923 @ Movement_JP_08210923
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08210926 @ EventScript_JP_08210926
	.byte 0x6B, 0x02
Movement_JP_08210923: @ 0x08210923
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_08210926: @ 0x08210926
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01C6
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210B2D @ gText_Rom_210B2D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x014F
	.2byte 0x0000
	.4byte 0x08210C82 @ gText_Rom_210C82
	@ event command: goto
	.byte 0x05
	.4byte 0x08210942 @ EventScript_JP_08210942
	.byte 0x02
EventScript_JP_08210942: @ 0x08210942
	@ event command: playse
	.byte 0x2F
	.2byte 0x0008
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0001
	.2byte 0x0346
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0002
	.2byte 0x0347
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210CEF @ gText_Rom_210CEF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: playse
	.byte 0x2F
	.2byte 0x0008
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0821099D @ EventScript_JP_0821099D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082109A2 @ EventScript_JP_082109A2
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x08210ADE @ EventScript_JP_08210ADE
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082109A7 @ EventScript_JP_082109A7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082109DC @ EventScript_JP_082109DC
	@ event command: end
	.byte 0x02
EventScript_JP_0821099D: @ 0x0821099D
	@ event command: playbgm
	.byte 0x33
	.2byte 0x019F
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_082109A2: @ 0x082109A2
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A5
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_082109A7: @ 0x082109A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210D9B @ gText_Rom_210D9B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
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
	@ event command: call
	.byte 0x04
	.4byte 0x08210AF3 @ EventScript_JP_08210AF3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210DC2 @ gText_Rom_210DC2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08210A11 @ EventScript_JP_08210A11
	.byte 0x02
EventScript_JP_082109DC: @ 0x082109DC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210DED @ gText_Rom_210DED
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
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
	@ event command: call
	.byte 0x04
	.4byte 0x08210AF3 @ EventScript_JP_08210AF3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210E1C @ gText_Rom_210E1C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08210A11 @ EventScript_JP_08210A11
	.byte 0x02
EventScript_JP_08210A11: @ 0x08210A11
	@ event command: closemessage
	.byte 0x68
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210E3F @ gText_Rom_210E3F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x08243207
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210F04 @ gText_Rom_210F04
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210F33 @ gText_Rom_210F33
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
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
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210F6D @ gText_Rom_210F6D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08210ACC @ EventScript_JP_08210ACC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08210AD5 @ EventScript_JP_08210AD5
	@ event command: closemessage
	.byte 0x68
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
	@ event command: setflag
	.byte 0x29
	.2byte 0x030D
	@ event command: warp
	.byte 0x39
	.byte 0x10
	.byte 0x0B
	.byte 0xFF
	.2byte 0x0007
	.2byte 0x0010
	.byte 0x27, 0x6B, 0x02
EventScript_JP_08210ACC: @ 0x08210ACC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08210FD2 @ gText_Rom_210FD2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08210AD5: @ 0x08210AD5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211025 @ gText_Rom_211025
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
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
	@ event command: return
	.byte 0x03
EventScript_JP_08210AF3: @ 0x08210AF3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08210B10 @ Movement_JP_08210B10
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_08210AFE: @ 0x08210AFE
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08210B01: @ 0x08210B01
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08210B07: @ 0x08210B07
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_08210B10: @ 0x08210B10
	@ object movement sequence
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x13 @ delay_8
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
Movement_JP_08210B19: @ 0x08210B19
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08210B1C: @ 0x08210B1C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_08210B20: @ 0x08210B20
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08210B24: @ 0x08210B24
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end

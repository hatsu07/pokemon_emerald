	@ data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc:297 PlayersHouse_2F_Text_ItsAGameCube
	.globl gText_Rom_1F0328
gText_Rom_1F0328: @ 0x081F0328
	.string "ゲームキューブが ある!\pコントローラの かわりに\nゲームボーイ アドバンスが つながってる!$"
	.if (. - gText_Rom_1F0328) > 0x30
	.error "gText_Rom_1F0328 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F0328) < 0x30
	.space 0x30 - (. - gText_Rom_1F0328)
	.endif
	@ analyzed canonical ROM range 0x081F0358-0x081F0677
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081F0358: @ 0x081F0358
EventScript_081F0358: @ 0x081F0358
MapScripts_JP_081F0358: @ 0x081F0358
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081F0368
	.byte 0x03
	.4byte EventScript_JP_081F03A7
	.byte 0x02
	.4byte MapScriptTable_JP_081F03ED
	.byte 0
EventScript_JP_081F0368: @ 0x081F0368
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4092
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081F037D @ EventScript_JP_081F037D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0112
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0390 @ EventScript_JP_081F0390
	@ event command: end
	.byte 0x02
EventScript_JP_081F037D: @ 0x081F037D
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x0004
	.2byte 0x0270
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x0002
	.2byte 0x0268
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081F0390: @ 0x081F0390
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F039D @ EventScript_JP_081F039D
	@ event command: return
	.byte 0x03
EventScript_JP_081F039D: @ 0x081F039D
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0007
	.2byte 0x0293
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081F03A7: @ 0x081F03A7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4092
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F03E1 @ EventScript_JP_081F03E1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4092
	.2byte 0x0005
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F03C9 @ EventScript_JP_081F03C9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4092
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F03D5 @ EventScript_JP_081F03D5
	@ event command: end
	.byte 0x02
EventScript_JP_081F03C9: @ 0x081F03C9
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0002
	.2byte 0x0004
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x07
	@ event command: return
	.byte 0x03
EventScript_JP_081F03D5: @ 0x081F03D5
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0006
	.2byte 0x0005
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x07
	@ event command: return
	.byte 0x03
EventScript_JP_081F03E1: @ 0x081F03E1
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0001
	.2byte 0x0008
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x07
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081F03ED: @ 0x081F03ED
	@ conditional map script table
	.2byte 0x4092, 0x0003
	.4byte EventScript_JP_081F043F
	.2byte 0x4092, 0x0005
	.4byte EventScript_JP_081F0417
	.2byte 0x4092, 0x0006
	.4byte EventScript_JP_081F0450
	.2byte 0x408C, 0x0001
	.4byte EventScript_JP_081F0461
	.2byte 0x4082, 0x0003
	.4byte EventScript_JP_082582DC
	.2byte 0
EventScript_JP_081F0417: @ 0x081F0417
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081EFAFC @ gText_Rom_1EFAFC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F043D @ Movement_JP_081F043D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F043D @ Movement_JP_081F043D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x01
	.byte 0x03
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0001
	.byte 0x27, 0x6B, 0x02
Movement_JP_081F043D: @ 0x081F043D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081F043F: @ 0x081F043F
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08257EEE @ EventScript_JP_08257EEE
	.byte 0x02
EventScript_JP_081F0450: @ 0x081F0450
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x082580C6 @ EventScript_JP_082580C6
	.byte 0x02
EventScript_JP_081F0461: @ 0x081F0461
	@ event command: lockall
	.byte 0x69
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081F049F @ Movement_JP_081F049F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0095
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0678 @ gText_Rom_1F0678
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0057
	@ event command: setvar
	.byte 0x16
	.2byte 0x408C
	.2byte 0x0002
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081F049F: @ 0x081F049F
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
EventScript_JP_081F04A6: @ 0x081F04A6
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0082
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F04E6 @ EventScript_JP_081F04E6
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0860
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F04DC @ EventScript_JP_081F04DC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408D
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F04D2 @ EventScript_JP_081F04D2
	@ event command: special
	.byte 0x25
	.2byte 0x0095
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0701 @ gText_Rom_1F0701
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F04D2: @ 0x081F04D2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0755 @ gText_Rom_1F0755
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F04DC: @ 0x081F04DC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F078A @ gText_Rom_1F078A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F04E6: @ 0x081F04E6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F07D8 @ gText_Rom_1F07D8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F04F0: @ 0x081F04F0
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: special
	.byte 0x25
	.2byte 0x0094
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0ABD @ gText_Rom_1F0ABD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F04FF: @ 0x081F04FF
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x8004
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08257F4F @ EventScript_JP_08257F4F
	.byte 0x02
EventScript_JP_081F051A: @ 0x081F051A
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F053E @ EventScript_JP_081F053E
	.byte 0x02
EventScript_JP_081F0526: @ 0x081F0526
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081F053E @ EventScript_JP_081F053E
	.byte 0x02
EventScript_JP_081F0532: @ 0x081F0532
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081F053E @ EventScript_JP_081F053E
	.byte 0x02
EventScript_JP_081F053E: @ 0x081F053E
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x0007
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x081F05DD @ EventScript_JP_081F05DD
	@ event command: playbgm
	.byte 0x33
	.2byte 0x019F
	.byte 0x01
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F05E8 @ EventScript_JP_081F05E8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F05F3 @ EventScript_JP_081F05F3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F05FE @ EventScript_JP_081F05FE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F0843 @ gText_Rom_1F0843
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F061D @ EventScript_JP_081F061D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F062F @ EventScript_JP_081F062F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F0641 @ EventScript_JP_081F0641
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0007
	@ event command: setflag
	.byte 0x29
	.2byte 0x02EA
	@ event command: setflag
	.byte 0x29
	.2byte 0x0332
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02D2
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setvar
	.byte 0x16
	.2byte 0x408D
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x4050
	.2byte 0x0001
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F05DD: @ 0x081F05DD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F05E8: @ 0x081F05E8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0609 @ Movement_JP_081F0609
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F05F3: @ 0x081F05F3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0611 @ Movement_JP_081F0611
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F05FE: @ 0x081F05FE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0615 @ Movement_JP_081F0615
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081F0609: @ 0x081F0609
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F0611: @ 0x081F0611
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F0615: @ 0x081F0615
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081F061D: @ 0x081F061D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0653 @ Movement_JP_081F0653
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0662 @ Movement_JP_081F0662
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F062F: @ 0x081F062F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F0657 @ Movement_JP_081F0657
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0668 @ Movement_JP_081F0668
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F0641: @ 0x081F0641
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F065E @ Movement_JP_081F065E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F0672 @ Movement_JP_081F0672
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081F0653: @ 0x081F0653
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F0657: @ 0x081F0657
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F065E: @ 0x081F065E
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F0662: @ 0x081F0662
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F0668: @ 0x081F0668
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F0672: @ 0x081F0672
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end

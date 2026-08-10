	.globl gText_Rom_20D67C
	.set gText_Rom_20D67C, gText_Rom_20D5FC + 0x80
	@ Replaced baserom.gba range: offset=0x20D682, size=0x400
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820D682: @ 0x0820D682
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820D68D
	.byte 0x02
	.4byte MapScriptTable_JP_0820D6DF
	.byte 0
EventScript_JP_0820D68D: @ 0x0820D68D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820D6A4 @ EventScript_JP_0820D6A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x409F
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820D6C9 @ EventScript_JP_0820D6C9
	@ event command: end
	.byte 0x02
EventScript_JP_0820D6A4: @ 0x0820D6A4
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x00CD
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x0003
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x0A
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0003
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x0A
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x0001
	.2byte 0x0003
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x0A
	@ event command: return
	.byte 0x03
EventScript_JP_0820D6C9: @ 0x0820D6C9
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0005
	.2byte 0x000B
	.2byte 0x0002
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0007
	.2byte 0x000F
	.2byte 0x0002
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0006
	.2byte 0x000D
	.2byte 0x0004
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0820D6DF: @ 0x0820D6DF
	@ conditional map script table
	.2byte 0x409F, 0x0001
	.4byte EventScript_JP_0820D6E9
	.2byte 0
EventScript_JP_0820D6E9: @ 0x0820D6E9
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DBEC @ gText_Rom_20DBEC
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D733 @ EventScript_JP_0820D733
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DC12 @ gText_Rom_20DC12
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820D731 @ Movement_JP_0820D731
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0E
	.byte 0x09
	.byte 0xFF
	.2byte 0x000D
	.2byte 0x0001
	.byte 0x27, 0x6B, 0x02
Movement_JP_0820D731: @ 0x0820D731
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_0820D733: @ 0x0820D733
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DC28 @ gText_Rom_20DC28
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x024C
	.2byte 0x0000
	.4byte 0x0820DC40 @ gText_Rom_20DC40
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0820D7AF @ Movement_JP_0820D7AF
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DC4E @ gText_Rom_20DC4E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x024D
	.2byte 0x0000
	.4byte 0x0820DC6D @ gText_Rom_20DC6D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0820D7AB @ Movement_JP_0820D7AB
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
	.4byte 0x0820DC7B @ gText_Rom_20DC7B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x024E
	.2byte 0x0000
	.4byte 0x0820DC9C @ gText_Rom_20DC9C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x0820D7B3 @ Movement_JP_0820D7B3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x409F
	.2byte 0x0002
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0005
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0007
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0006
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0820D7AB: @ 0x0820D7AB
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0A @ walk_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_0820D7AF: @ 0x0820D7AF
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x08 @ walk_down
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_0820D7B3: @ 0x0820D7B3
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0B @ walk_right
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
EventScript_JP_0820D7B7: @ 0x0820D7B7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D7DE @ EventScript_JP_0820D7DE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D7E8 @ EventScript_JP_0820D7E8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820D7DE @ EventScript_JP_0820D7DE
	@ event command: goto
	.byte 0x05
	.4byte 0x0820D7E8 @ EventScript_JP_0820D7E8
	.byte 0x02
EventScript_JP_0820D7DE: @ 0x0820D7DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DACB @ gText_Rom_20DACB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D7E8: @ 0x0820D7E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DB12 @ gText_Rom_20DB12
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D7F2: @ 0x0820D7F2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D819 @ EventScript_JP_0820D819
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D823 @ EventScript_JP_0820D823
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820D819 @ EventScript_JP_0820D819
	@ event command: goto
	.byte 0x05
	.4byte 0x0820D823 @ EventScript_JP_0820D823
	.byte 0x02
EventScript_JP_0820D819: @ 0x0820D819
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DB39 @ gText_Rom_20DB39
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D823: @ 0x0820D823
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DB7B @ gText_Rom_20DB7B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D82D: @ 0x0820D82D
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D854 @ EventScript_JP_0820D854
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D85E @ EventScript_JP_0820D85E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820D854 @ EventScript_JP_0820D854
	@ event command: goto
	.byte 0x05
	.4byte 0x0820D85E @ EventScript_JP_0820D85E
	.byte 0x02
EventScript_JP_0820D854: @ 0x0820D854
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DBB3 @ gText_Rom_20DBB3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D85E: @ 0x0820D85E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DBD3 @ gText_Rom_20DBD3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D868: @ 0x0820D868
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DCB7 @ gText_Rom_20DCB7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820D871: @ 0x0820D871
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DCC6 @ gText_Rom_20DCC6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820D87A: @ 0x0820D87A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DCE5 @ gText_Rom_20DCE5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820D883: @ 0x0820D883
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DCFF @ gText_Rom_20DCFF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820D899: @ 0x0820D899
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DD52 @ gText_Rom_20DD52
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820D8A4: @ 0x0820D8A4
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CD
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D904 @ EventScript_JP_0820D904
	@ event command: setflag
	.byte 0x29
	.2byte 0x00CD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DD76 @ gText_Rom_20DD76
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DDA9 @ gText_Rom_20DDA9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playse
	.byte 0x2F
	.2byte 0x000C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D8E4 @ EventScript_JP_0820D8E4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0820D8F0 @ Movement_JP_0820D8F0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820D8E4: @ 0x0820D8E4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0820D8F9 @ Movement_JP_0820D8F9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0820D8F0: @ 0x0820D8F0
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x41 @ unlock_facing_direction
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x04 @ walk_slow_down
	.byte 0x04 @ walk_slow_down
	.byte 0xFE @ step_end
Movement_JP_0820D8F9: @ 0x0820D8F9
	@ object movement sequence
	.byte 0x02 @ face_left
	.byte 0x40 @ lock_facing_direction
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x41 @ unlock_facing_direction
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x06 @ walk_slow_left
	.byte 0x06 @ walk_slow_left
	.byte 0x00 @ face_down
	.byte 0xFE @ step_end
EventScript_JP_0820D904: @ 0x0820D904
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DE3B @ gText_Rom_20DE3B
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D936 @ EventScript_JP_0820D936
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DE73 @ gText_Rom_20DE73
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820D936: @ 0x0820D936
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x0029
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0820D95C @ EventScript_JP_0820D95C
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: goto
	.byte 0x05
	.4byte 0x0820D904 @ EventScript_JP_0820D904
EventScript_JP_0820D95C: @ 0x0820D95C
	@ event command: special
	.byte 0x25
	.2byte 0x00F8
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	@ event command: waitstate
	.byte 0x27
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820D99B @ EventScript_JP_0820D99B
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: special
	.byte 0x25
	.2byte 0x00C8
	@ event command: waitstate
	.byte 0x27
EventScript_JP_0820D99B: @ 0x0820D99B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DEBB @ gText_Rom_20DEBB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DF75 @ gText_Rom_20DF75
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x405D
	.2byte 0x0003
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x409F
	.2byte 0x0003
	@ event command: setflag
	.byte 0x29
	.2byte 0x02F4
	@ event command: setflag
	.byte 0x29
	.2byte 0x035E
	@ event command: setflag
	.byte 0x29
	.2byte 0x0337
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0005
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0007
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0006
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0008
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0009
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x0006
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0003
	.byte 0x01
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0002
	.2byte 0x000B
	.2byte 0x0008
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0002
	.byte 0x02
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0001
	.2byte 0x0006
	.2byte 0x0002
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0001
	.byte 0x02
	@ event command: call
	.byte 0x04
	.4byte 0x0820DA5B @ EventScript_JP_0820DA5B
	@ event command: fadescreen
	.byte 0x97
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820DFB6 @ gText_Rom_20DFB6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setflag
	.byte 0x29
	.2byte 0x0075
	@ event command: setflag
	.byte 0x29
	.2byte 0x03C7
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: setflag
	.byte 0x29
	.2byte 0x02E1
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C6
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x0314
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x0006
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x02
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: fadescreen
	.byte 0x97
	.byte 0x00
	@ event command: end
	.byte 0x02
EventScript_JP_0820DA5B: @ 0x0820DA5B
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820DA77 @ EventScript_JP_0820DA77
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820DA7C @ EventScript_JP_0820DA7C
	@ event command: return
	.byte 0x03
EventScript_JP_0820DA77: @ 0x0820DA77
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0004
	.byte 0x02
	@ event command: return
	.byte 0x03
EventScript_JP_0820DA7C: @ 0x0820DA7C
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0004
	.byte 0x04
	@ event command: return
	.byte 0x03
	.byte 0x5C

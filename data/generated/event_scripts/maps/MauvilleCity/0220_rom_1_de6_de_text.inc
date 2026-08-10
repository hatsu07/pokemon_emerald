	@ data/maps/MauvilleCity/scripts.inc:669 MauvilleCity_Text_BeenCheckingOutTV
	.globl gText_Rom_1DE6DE
gText_Rom_1DE6DE: @ 0x081DE6DE
	.string "やあ!\nテレビは ちゃんと チェック してる?$"
	.if (. - gText_Rom_1DE6DE) > 0x18
	.error "gText_Rom_1DE6DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE6DE) < 0x18
	.space 0x18 - (. - gText_Rom_1DE6DE)
	.endif
	@ analyzed canonical ROM range 0x081DE6F6-0x081DF277
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_081DE6F6: @ 0x081DE6F6
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DE701
	.byte 0x02
	.4byte MapScriptTable_JP_081DE744
	.byte 0
EventScript_JP_081DE701: @ 0x081DE701
	@ event command: setflag
	.byte 0x29
	.2byte 0x0879
	@ event command: call
	.byte 0x04
	.4byte 0x08242F63
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405A
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DE740 @ EventScript_JP_081DE740
	@ event command: getplayerxy
	.byte 0x42
	.2byte 0x4000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405A
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE725 @ EventScript_JP_081DE725
	@ event command: end
	.byte 0x02
EventScript_JP_081DE725: @ 0x081DE725
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4000
	.2byte 0x000B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE738 @ EventScript_JP_081DE738
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x000F
	.2byte 0x000C
	.2byte 0x000F
	@ event command: end
	.byte 0x02
EventScript_JP_081DE738: @ 0x081DE738
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x000F
	.2byte 0x000B
	.2byte 0x000F
	@ event command: end
	.byte 0x02
EventScript_JP_081DE740: @ 0x081DE740
	@ event command: setflag
	.byte 0x29
	.2byte 0x4000
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081DE744: @ 0x081DE744
	@ conditional map script table
	.2byte 0x405A, 0x0006
	.4byte EventScript_JP_081DE74E
	.2byte 0
EventScript_JP_081DE74E: @ 0x081DE74E
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4063
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DE889 @ Movement_JP_081DE889
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x000F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x081DE88B @ Movement_JP_081DE88B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x081DE887 @ Movement_JP_081DE887
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFC14 @ gText_Rom_1DFC14
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x012F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFC6A @ gText_Rom_1DFC6A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: goto
	.byte 0x05
	.4byte 0x081DE7F6 @ EventScript_JP_081DE7F6
EventScript_JP_081DE7E5: @ 0x081DE7E5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFD2A @ gText_Rom_1DFD2A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: goto
	.byte 0x05
	.4byte 0x081DE7F6 @ EventScript_JP_081DE7F6
EventScript_JP_081DE7F6: @ 0x081DE7F6
	@ event command: setflag
	.byte 0x29
	.2byte 0x0130
	@ event command: special
	.byte 0x25
	.2byte 0x01D5
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE7E5 @ EventScript_JP_081DE7E5
	@ event command: special
	.byte 0x25
	.2byte 0x01D4
	@ event command: waitstate
	.byte 0x27
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFD3B @ gText_Rom_1DFD3B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x081DE896 @ Movement_JP_081DE896
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000F
	@ event command: setflag
	.byte 0x29
	.2byte 0x034C
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0007
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x4000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081DE887: @ 0x081DE887
	@ object movement sequence
	.byte 0x1D @ walk_in_place_down
	.byte 0xFE @ step_end
Movement_JP_081DE889: @ 0x081DE889
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DE88B: @ 0x081DE88B
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
	.byte 0x14, 0x0A, 0x08, 0x08, 0x0B, 0x26, 0x14, 0xFE
Movement_JP_081DE896: @ 0x081DE896
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081DE898: @ 0x081DE898
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE8AD @ EventScript_JP_081DE8AD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF278 @ gText_Rom_1DF278
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE8AD: @ 0x081DE8AD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF2BF @ gText_Rom_1DF2BF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE8B7: @ 0x081DE8B7
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF372 @ gText_Rom_1DF372
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE8C3: @ 0x081DE8C3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF3AA @ gText_Rom_1DF3AA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DE8CC: @ 0x081DE8CC
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0867
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE8E1 @ EventScript_JP_081DE8E1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF2F2 @ gText_Rom_1DF2F2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE8E1: @ 0x081DE8E1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF339 @ gText_Rom_1DF339
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE8EB: @ 0x081DE8EB
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DE900 @ EventScript_JP_081DE900
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF40A @ gText_Rom_1DF40A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE900: @ 0x081DE900
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF43C @ gText_Rom_1DF43C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE90A: @ 0x081DE90A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF498 @ gText_Rom_1DF498
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DE913: @ 0x081DE913
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF4C9 @ gText_Rom_1DF4C9
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DE91C: @ 0x081DE91C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFADC @ gText_Rom_1DFADC
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DE925: @ 0x081DE925
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFB27 @ gText_Rom_1DFB27
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DE92E: @ 0x081DE92E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFB54 @ gText_Rom_1DFB54
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
	.byte 0x0F, 0x00, 0x7E, 0xFB, 0x1D, 0x08, 0x09, 0x03, 0x02
EventScript_JP_081DE940: @ 0x081DE940
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFBB4 @ gText_Rom_1DFBB4
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DE949: @ 0x081DE949
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFBDC @ gText_Rom_1DFBDC
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DE952: @ 0x081DE952
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFC05 @ gText_Rom_1DFC05
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DE95B: @ 0x081DE95B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF511 @ gText_Rom_1DF511
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE971: @ 0x081DE971
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF545 @ gText_Rom_1DF545
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE987: @ 0x081DE987
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF56D @ gText_Rom_1DF56D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DE993: @ 0x081DE993
	@ event command: lockall
	.byte 0x69
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000E
	.2byte 0x0015
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0009
	.byte 0x0A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEA06 @ EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DE9AA: @ 0x081DE9AA
	@ event command: lockall
	.byte 0x69
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000E
	.2byte 0x0015
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0009
	.byte 0x0A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEA06 @ EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DE9C1: @ 0x081DE9C1
	@ event command: lockall
	.byte 0x69
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000E
	.2byte 0x0015
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0009
	.byte 0x0A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEA06 @ EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DE9D8: @ 0x081DE9D8
	@ event command: lockall
	.byte 0x69
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000E
	.2byte 0x0015
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0009
	.byte 0x0A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEA06 @ EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DE9EF: @ 0x081DE9EF
	@ event command: lockall
	.byte 0x69
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x000E
	.2byte 0x0015
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0009
	.byte 0x0A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEA06 @ EventScript_JP_081DEA06
	.byte 0x02
EventScript_JP_081DEA06: @ 0x081DEA06
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF5AE @ gText_Rom_1DF5AE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A3
	.byte 0x00
	@ event command: addobject
	.byte 0x55
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x0009
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081DEAD9 @ Movement_JP_081DEAD9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081DEAEA @ Movement_JP_081DEAEA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF5BB @ gText_Rom_1DF5BB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081DEAF2 @ Movement_JP_081DEAF2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0009
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0009
	.2byte 0x001E
	.2byte 0x000A
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02DC
	@ event command: setflag
	.byte 0x29
	.2byte 0x008E
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x409A
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x406F
	.2byte 0x0001
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x037B
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0370
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x036E
	@ event command: setflag
	.byte 0x29
	.2byte 0x02E3
	@ event command: setflag
	.byte 0x29
	.2byte 0x0371
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
	.byte 0x0F, 0x00, 0x44, 0xF6, 0x1D, 0x08, 0x09, 0x04, 0x03, 0x0F, 0x00, 0x71, 0xF6, 0x1D, 0x08, 0x09
	.byte 0x04, 0x03, 0x4F, 0x09, 0x00, 0xFA, 0xEA, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00
	.byte 0xFE, 0xEA, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00, 0x03, 0xEB, 0x1D, 0x08, 0x51
	.byte 0x00, 0x00, 0x03, 0x4F, 0x09, 0x00, 0x08, 0xEB, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x03, 0x4F, 0x09
	.byte 0x00, 0x0E, 0xEB, 0x1D, 0x08, 0x51, 0x00, 0x00, 0x4F, 0xFF, 0x00, 0x29, 0x36, 0x24, 0x08, 0x51
	.byte 0x00, 0x00, 0x03, 0x30, 0x30, 0x18, 0x18, 0x18, 0x18, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16, 0x16
	.byte 0x16, 0x16, 0x16, 0x16, 0xFE
Movement_JP_081DEAD9: @ 0x081DEAD9
	@ object movement sequence
	.byte 0x30 @ walk_fastest_right
	.byte 0x30 @ walk_fastest_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0xFE @ step_end
Movement_JP_081DEAEA: @ 0x081DEAEA
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081DEAF2: @ 0x081DEAF2
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
	.byte 0x08, 0x0B, 0x0B, 0xFE, 0x08, 0x08, 0x0B, 0x0B, 0xFE, 0x08, 0x08, 0x0B, 0x0B, 0xFE, 0x08, 0x08
	.byte 0x08, 0x0B, 0x0B, 0xFE, 0x08, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x25, 0xFE
EventScript_JP_081DEB16: @ 0x081DEB16
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DEB2B @ EventScript_JP_081DEB2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF644 @ gText_Rom_1DF644
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DEB2B: @ 0x081DEB2B
	@ event command: waitse
	.byte 0x30
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0004
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEC94 @ EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEB37: @ 0x081DEB37
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEB67 @ EventScript_JP_081DEB67
	.byte 0x02
EventScript_JP_081DEB43: @ 0x081DEB43
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEB67 @ EventScript_JP_081DEB67
	.byte 0x02
EventScript_JP_081DEB4F: @ 0x081DEB4F
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEB67 @ EventScript_JP_081DEB67
	.byte 0x02
EventScript_JP_081DEB5B: @ 0x081DEB5B
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEB67 @ EventScript_JP_081DEB67
	.byte 0x02
EventScript_JP_081DEB67: @ 0x081DEB67
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DEBA8 @ EventScript_JP_081DEBA8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DEBD4 @ EventScript_JP_081DEBD4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DEC00 @ EventScript_JP_081DEC00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DEC2C @ EventScript_JP_081DEC2C
	@ event command: setflag
	.byte 0x29
	.2byte 0x009F
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0003
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0009
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF5D5 @ gText_Rom_1DF5D5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DEBA8: @ 0x081DEBA8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DEBD4: @ 0x081DEBD4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DEC00: @ 0x081DEC00
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DEC2C: @ 0x081DEC2C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081DEC62 @ Movement_JP_081DEC62
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081DEC62: @ 0x081DEC62
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
EventScript_JP_081DEC64: @ 0x081DEC64
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEC94 @ EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEC70: @ 0x081DEC70
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEC94 @ EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEC7C: @ 0x081DEC7C
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEC94 @ EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEC88: @ 0x081DEC88
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x081DEC94 @ EventScript_JP_081DEC94
	.byte 0x02
EventScript_JP_081DEC94: @ 0x081DEC94
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DED15 @ EventScript_JP_081DED15
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DED41 @ EventScript_JP_081DED41
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DED6D @ EventScript_JP_081DED6D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DED99 @ EventScript_JP_081DED99
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DEDCF @ EventScript_JP_081DEDCF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF671 @ gText_Rom_1DF671
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0003
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DED0C @ EventScript_JP_081DED0C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF6F2 @ gText_Rom_1DF6F2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x0090
	@ event command: setflag
	.byte 0x29
	.2byte 0x02DC
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0005
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: warp
	.byte 0x39
	.byte 0x0B
	.byte 0x02
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0002
	.byte 0x27, 0x6B, 0x02
EventScript_JP_081DED0C: @ 0x081DED0C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF6D8 @ gText_Rom_1DF6D8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081DED15: @ 0x081DED15
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DED41: @ 0x081DED41
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243631
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DED6D: @ 0x081DED6D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DED99: @ 0x081DED99
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x081DEC62 @ Movement_JP_081DEC62
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DEDCF: @ 0x081DEDCF
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DEDF1: @ 0x081DEDF1
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0120
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEE0A: @ 0x081DEE0A
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DEE22 @ EventScript_JP_081DEE22
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DEE27 @ EventScript_JP_081DEE27
	@ event command: return
	.byte 0x03
EventScript_JP_081DEE22: @ 0x081DEE22
	@ event command: playbgm
	.byte 0x33
	.2byte 0x019F
	.byte 0x01
	@ event command: return
	.byte 0x03
EventScript_JP_081DEE27: @ 0x081DEE27
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A5
	.byte 0x01
	@ event command: return
	.byte 0x03
EventScript_JP_081DEE2C: @ 0x081DEE2C
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF247 @ Movement_JP_081DF247
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEE6C: @ 0x081DEE6C
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF24E @ Movement_JP_081DF24E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEEAC: @ 0x081DEEAC
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF254 @ Movement_JP_081DF254
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEEEC: @ 0x081DEEEC
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF259 @ Movement_JP_081DF259
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEF2C: @ 0x081DEF2C
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF25D @ Movement_JP_081DF25D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEF6C: @ 0x081DEF6C
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF260 @ Movement_JP_081DF260
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEFAC: @ 0x081DEFAC
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF264 @ Movement_JP_081DF264
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DEFEC: @ 0x081DEFEC
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x081DEE0A @ EventScript_JP_081DEE0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081DF269 @ Movement_JP_081DF269
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF02C @ EventScript_JP_081DF02C
EventScript_JP_081DF02C: @ 0x081DF02C
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF044 @ EventScript_JP_081DF044
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF14D @ EventScript_JP_081DF14D
	@ event command: end
	.byte 0x02
EventScript_JP_081DF044: @ 0x081DF044
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF0FA @ EventScript_JP_081DF0FA
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0120
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF0A9 @ EventScript_JP_081DF0A9
	@ event command: setflag
	.byte 0x29
	.2byte 0x0120
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF70B @ gText_Rom_1DF70B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF769 @ gText_Rom_1DF769
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x00FD
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x4063
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF77D @ gText_Rom_1DF77D
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
	.4byte 0x081DF0CB @ EventScript_JP_081DF0CB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF80B @ gText_Rom_1DF80B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081DF10F @ EventScript_JP_081DF10F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DF0A9: @ 0x081DF0A9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF84F @ gText_Rom_1DF84F
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
	.4byte 0x081DF0CB @ EventScript_JP_081DF0CB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF80B @ gText_Rom_1DF80B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DF0CB: @ 0x081DF0CB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF870 @ gText_Rom_1DF870
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF114 @ EventScript_JP_081DF114
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF127 @ EventScript_JP_081DF127
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF13A @ EventScript_JP_081DF13A
	@ event command: end
	.byte 0x02
EventScript_JP_081DF0FA: @ 0x081DF0FA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF8A9 @ gText_Rom_1DF8A9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DF10F @ EventScript_JP_081DF10F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DF10F: @ 0x081DF10F
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: return
	.byte 0x03
EventScript_JP_081DF114: @ 0x081DF114
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0300
	.2byte 0x0000
	.4byte 0x081DF892 @ gText_Rom_1DF892
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D3
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF0FA @ EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF127: @ 0x081DF127
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0301
	.2byte 0x0000
	.4byte 0x081DF892 @ gText_Rom_1DF892
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D3
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF0FA @ EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF13A: @ 0x081DF13A
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0258
	.2byte 0x0000
	.4byte 0x081DF892 @ gText_Rom_1DF892
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D3
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF0FA @ EventScript_JP_081DF0FA
	.byte 0x02
EventScript_JP_081DF14D: @ 0x081DF14D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF1F9 @ EventScript_JP_081DF1F9
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0120
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF1AD @ EventScript_JP_081DF1AD
	@ event command: setflag
	.byte 0x29
	.2byte 0x0120
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF903 @ gText_Rom_1DF903
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF95F @ gText_Rom_1DF95F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x00FD
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x4063
	.2byte 0x0002
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DF973 @ gText_Rom_1DF973
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
	.4byte 0x081DF1CA @ EventScript_JP_081DF1CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFA17 @ gText_Rom_1DFA17
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081DF10F @ EventScript_JP_081DF10F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DF1AD: @ 0x081DF1AD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFA36 @ gText_Rom_1DFA36
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
	.4byte 0x081DF1CA @ EventScript_JP_081DF1CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFA17 @ gText_Rom_1DFA17
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DF1CA: @ 0x081DF1CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFA53 @ gText_Rom_1DFA53
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF20E @ EventScript_JP_081DF20E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF221 @ EventScript_JP_081DF221
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DF234 @ EventScript_JP_081DF234
	@ event command: end
	.byte 0x02
EventScript_JP_081DF1F9: @ 0x081DF1F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFA87 @ gText_Rom_1DFA87
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DF10F @ EventScript_JP_081DF10F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DF20E: @ 0x081DF20E
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0250
	.2byte 0x0000
	.4byte 0x081DFA75 @ gText_Rom_1DFA75
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D3
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF1F9 @ EventScript_JP_081DF1F9
	.byte 0x02
EventScript_JP_081DF221: @ 0x081DF221
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0257
	.2byte 0x0000
	.4byte 0x081DFA75 @ gText_Rom_1DFA75
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D3
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF1F9 @ EventScript_JP_081DF1F9
	.byte 0x02
EventScript_JP_081DF234: @ 0x081DF234
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0251
	.2byte 0x0000
	.4byte 0x081DFA75 @ gText_Rom_1DFA75
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D3
	@ event command: goto
	.byte 0x05
	.4byte 0x081DF1F9 @ EventScript_JP_081DF1F9
	.byte 0x02
Movement_JP_081DF247: @ 0x081DF247
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF24E: @ 0x081DF24E
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF254: @ 0x081DF254
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF259: @ 0x081DF259
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF25D: @ 0x081DF25D
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF260: @ 0x081DF260
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF264: @ 0x081DF264
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DF269: @ 0x081DF269
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
EventScript_JP_081DF26F: @ 0x081DF26F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DFD5D @ gText_Rom_1DFD5D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02

	@ data/maps/BattleFrontier_BattleDomeBattleRoom/scripts.inc:1170 BattleFrontier_BattleDomeBattleRoom_Text_RefereesDecidedWinnerTucker
	.globl gText_Rom_229CE6
gText_Rom_229CE6: @ 0x08229CE6
	.string "しんぱんいん より\nはんていの けっかが でました!\pしょうしゃは\nなんと! なんと! なんと!\lわれらの スーパースター! ヒース です!\pおめでとう! そして ありがとう!!\nわれらの ドームスーパースター ヒース!!$"
	.if (. - gText_Rom_229CE6) > 0x70
	.error "gText_Rom_229CE6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_229CE6) < 0x70
	.space 0x70 - (. - gText_Rom_229CE6)
	.endif
	@ analyzed canonical ROM range 0x08229D56-0x0822A332
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08229D56: @ 0x08229D56
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_08229D75
	.byte 0x04
	.4byte MapScriptTable_JP_08229D61
	.byte 0
MapScriptTable_JP_08229D61: @ 0x08229D61
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08229D6B
	.2byte 0
EventScript_JP_08229D6B: @ 0x08229D6B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08229D75: @ 0x08229D75
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08229D9F
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_08229DA8
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_08229EE0
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_08229DEF
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_08229E4B
	.2byte 0
EventScript_JP_08229D9F: @ 0x08229D9F
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_08229DA8: @ 0x08229DA8
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A7B5 @ gText_Rom_22A7B5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08229DEF: @ 0x08229DEF
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08229E10 @ EventScript_JP_08229E10
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A6FB @ gText_Rom_22A6FB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08229E18 @ EventScript_JP_08229E18
EventScript_JP_08229E10: @ 0x08229E10
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822ABCE @ gText_Rom_22ABCE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_08229E18: @ 0x08229E18
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822ABEF @ gText_Rom_22ABEF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822189E @ gText_Rom_22189E
	@ event command: callstd
	.byte 0x09
	.byte 0x09
	@ event command: message
	.byte 0x67
	.4byte 0x0822A72D @ gText_Rom_22A72D
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x08229E79 @ EventScript_JP_08229E79
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A4E9 @ gText_Rom_22A4E9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08229E4B: @ 0x08229E4B
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x0822A6CC @ gText_Rom_22A6CC
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: call
	.byte 0x04
	.4byte 0x08229E79 @ EventScript_JP_08229E79
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A4E9 @ gText_Rom_22A4E9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08229E79: @ 0x08229E79
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: call
	.byte 0x04
	.4byte 0x0821F921
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08229EDF @ EventScript_JP_08229EDF
	@ event command: message
	.byte 0x67
	.4byte 0x0822AC13 @ gText_Rom_22AC13
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
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
	.4byte 0x08229EDF @ EventScript_JP_08229EDF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08229EDA @ EventScript_JP_08229EDA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08229EDF @ EventScript_JP_08229EDF
EventScript_JP_08229EDA: @ 0x08229EDA
	@ event command: call
	.byte 0x04
	.4byte 0x0821F8F5
EventScript_JP_08229EDF: @ 0x08229EDF
	@ event command: return
	.byte 0x03
EventScript_JP_08229EE0: @ 0x08229EE0
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A790 @ gText_Rom_22A790
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x0822A79A @ gText_Rom_22A79A
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A0CB @ EventScript_JP_0822A0CB
EventScript_JP_08229F1C: @ 0x08229F1C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08229F40 @ EventScript_JP_08229F40
	.byte 0x02
EventScript_JP_08229F2E: @ 0x08229F2E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08229F40 @ EventScript_JP_08229F40
	.byte 0x02
EventScript_JP_08229F40: @ 0x08229F40
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08229DEF @ EventScript_JP_08229DEF
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A176 @ EventScript_JP_0822A176
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A17F @ EventScript_JP_0822A17F
EventScript_JP_08229F71: @ 0x08229F71
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A188 @ EventScript_JP_0822A188
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A18E @ EventScript_JP_0822A18E
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x17
	.byte 0x00
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
	.4byte 0x08229FBE @ EventScript_JP_08229FBE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A0F8 @ EventScript_JP_0822A0F8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A16C @ EventScript_JP_0822A16C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A16C @ EventScript_JP_0822A16C
EventScript_JP_08229FBE: @ 0x08229FBE
	@ event command: message
	.byte 0x67
	.4byte 0x0822A50A @ gText_Rom_22A50A
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x18
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A16C @ EventScript_JP_0822A16C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A16C @ EventScript_JP_0822A16C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A11D @ EventScript_JP_0822A11D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A67F @ gText_Rom_22A67F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: call
	.byte 0x04
	.4byte 0x082202F8
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x800D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A169 @ EventScript_JP_0822A169
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A69B @ gText_Rom_22A69B
	@ event command: callstd
	.byte 0x09
	.byte 0x05
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
	.4byte 0x0822A169 @ EventScript_JP_0822A169
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A05F @ EventScript_JP_0822A05F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A169 @ EventScript_JP_0822A169
EventScript_JP_0822A05F: @ 0x0822A05F
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0000
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
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A152 @ EventScript_JP_0822A152
EventScript_JP_0822A0CB: @ 0x0822A0CB
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A6BB @ gText_Rom_22A6BB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x0822A194 @ EventScript_JP_0822A194
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x17
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x000D
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_0822A0F8: @ 0x0822A0F8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A110 @ EventScript_JP_0822A110
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A391 @ gText_Rom_22A391
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08229F71 @ EventScript_JP_08229F71
EventScript_JP_0822A110: @ 0x0822A110
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AA78 @ gText_Rom_22AA78
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08229F71 @ EventScript_JP_08229F71
EventScript_JP_0822A11D: @ 0x0822A11D
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
	.4byte 0x0822A138 @ EventScript_JP_0822A138
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A145 @ EventScript_JP_0822A145
EventScript_JP_0822A138: @ 0x0822A138
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A534 @ gText_Rom_22A534
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A174 @ EventScript_JP_0822A174
EventScript_JP_0822A145: @ 0x0822A145
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A5DF @ gText_Rom_22A5DF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A174 @ EventScript_JP_0822A174
EventScript_JP_0822A152: @ 0x0822A152
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A16C @ EventScript_JP_0822A16C
EventScript_JP_0822A169: @ 0x0822A169
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_0822A16C: @ 0x0822A16C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A4E9 @ gText_Rom_22A4E9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_0822A174: @ 0x0822A174
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0822A176: @ 0x0822A176
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A333 @ gText_Rom_22A333
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822A17F: @ 0x0822A17F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AA1D @ gText_Rom_22AA1D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822A188: @ 0x0822A188
	@ event command: message
	.byte 0x67
	.4byte 0x0822A379 @ gText_Rom_22A379
	@ event command: return
	.byte 0x03
EventScript_JP_0822A18E: @ 0x0822A18E
	@ event command: message
	.byte 0x67
	.4byte 0x0822AA61 @ gText_Rom_22AA61
	@ event command: return
	.byte 0x03
EventScript_JP_0822A194: @ 0x0822A194
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A1FB @ EventScript_JP_0822A1FB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A201 @ EventScript_JP_0822A201
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0822A21F @ Movement_JP_0822A21F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822A21F @ Movement_JP_0822A21F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A207 @ EventScript_JP_0822A207
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A20D @ EventScript_JP_0822A20D
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0822A221 @ Movement_JP_0822A221
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822A224 @ Movement_JP_0822A224
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A213 @ EventScript_JP_0822A213
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40CE
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822A219 @ EventScript_JP_0822A219
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: return
	.byte 0x03
EventScript_JP_0822A1FB: @ 0x0822A1FB
	@ event command: setvar
	.byte 0x16
	.2byte 0x800F
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_0822A201: @ 0x0822A201
	@ event command: setvar
	.byte 0x16
	.2byte 0x800F
	.2byte 0x0006
	@ event command: return
	.byte 0x03
EventScript_JP_0822A207: @ 0x0822A207
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0005
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_0822A20D: @ 0x0822A20D
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0013
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_0822A213: @ 0x0822A213
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0005
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_0822A219: @ 0x0822A219
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0013
	.2byte 0x0004
	@ event command: return
	.byte 0x03
Movement_JP_0822A21F: @ 0x0822A21F
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822A221: @ 0x0822A221
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_0822A224: @ 0x0822A224
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_0822A228: @ 0x0822A228
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822A241: @ 0x0822A241
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: special
	.byte 0x25
	.2byte 0x0209
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822A25A: @ 0x0822A25A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A80A @ gText_Rom_22A80A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822A263: @ 0x0822A263
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A8D9 @ gText_Rom_22A8D9
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822A26C: @ 0x0822A26C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A977 @ gText_Rom_22A977
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822A275: @ 0x0822A275
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A9D6 @ gText_Rom_22A9D6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822A27E: @ 0x0822A27E
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AC3F @ gText_Rom_22AC3F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A28D @ EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A28D: @ 0x0822A28D
	@ event command: message
	.byte 0x67
	.4byte 0x0822AC54 @ gText_Rom_22AC54
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x10
	.byte 0x00
	.byte 0x64
	.byte 0x00
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
	.4byte 0x0822A2EB @ EventScript_JP_0822A2EB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A2F9 @ EventScript_JP_0822A2F9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A307 @ EventScript_JP_0822A307
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A315 @ EventScript_JP_0822A315
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A323 @ EventScript_JP_0822A323
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A331 @ EventScript_JP_0822A331
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822A331 @ EventScript_JP_0822A331
	@ event command: end
	.byte 0x02
EventScript_JP_0822A2EB: @ 0x0822A2EB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AC64 @ gText_Rom_22AC64
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A28D @ EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A2F9: @ 0x0822A2F9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822ACC9 @ gText_Rom_22ACC9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A28D @ EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A307: @ 0x0822A307
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AD4C @ gText_Rom_22AD4C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A28D @ EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A315: @ 0x0822A315
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AE0B @ gText_Rom_22AE0B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A28D @ EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A323: @ 0x0822A323
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AEA7 @ gText_Rom_22AEA7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822A28D @ EventScript_JP_0822A28D
	.byte 0x02
EventScript_JP_0822A331: @ 0x0822A331
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02

	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:146 BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons
	.globl gText_Rom_22B12C
gText_Rom_22B12C: @ 0x0822B12C
	.string "おお…… おぬしと ポケモンの あいだに\nつよい こころの きずなが みえる……$"
	.if (. - gText_Rom_22B12C) > 0x29
	.error "gText_Rom_22B12C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B12C) < 0x29
	.space 0x29 - (. - gText_Rom_22B12C)
	.endif
	@ analyzed canonical ROM range 0x0822B155-0x0822B83A
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0822B155: @ 0x0822B155
MapScripts_JP_0822B155: @ 0x0822B155
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822B165
	.byte 0x02
	.4byte MapScriptTable_JP_0822B1A1
	.byte 0x04
	.4byte MapScriptTable_JP_0822B76F
	.byte 0
EventScript_JP_0822B165: @ 0x0822B165
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: call
	.byte 0x04
	.4byte 0x0822B173 @ EventScript_JP_0822B173
	@ event command: end
	.byte 0x02
EventScript_JP_0822B173: @ 0x0822B173
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B18B @ EventScript_JP_0822B18B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B196 @ EventScript_JP_0822B196
	@ event command: return
	.byte 0x03
EventScript_JP_0822B18B: @ 0x0822B18B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0064
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0064
	@ event command: return
	.byte 0x03
EventScript_JP_0822B196: @ 0x0822B196
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0069
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0069
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0822B1A1: @ 0x0822B1A1
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_0822B1AB
	.2byte 0
EventScript_JP_0822B1AB: @ 0x0822B1AB
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x0001
	.byte 0x1A
	.byte 0x18
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B1F5 @ EventScript_JP_0822B1F5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D6 @ Movement_JP_0822B7D6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7E7 @ Movement_JP_0822B7E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B1F5: @ 0x0822B1F5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7CD @ Movement_JP_0822B7CD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
EventScript_JP_0822B1FF: @ 0x0822B1FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0822B7DC @ Movement_JP_0822B7DC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0822B737 @ EventScript_JP_0822B737
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
	.4byte 0x0822B251 @ EventScript_JP_0822B251
EventScript_JP_0822B23A: @ 0x0822B23A
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
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B7F6 @ EventScript_JP_0822B7F6
EventScript_JP_0822B251: @ 0x0822B251
	@ event command: call
	.byte 0x04
	.4byte 0x08221FB3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B468 @ EventScript_JP_0822B468
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0822B7E2 @ Movement_JP_0822B7E2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D4 @ Movement_JP_0822B7D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7E7 @ Movement_JP_0822B7E7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B83B @ gText_Rom_22B83B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0028
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
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0170
	@ event command: waitfanfare
	.byte 0x32
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_0822B2CA: @ 0x0822B2CA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x400F
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822B4A1 @ EventScript_JP_0822B4A1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B7A1 @ EventScript_JP_0822B7A1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B7A8 @ EventScript_JP_0822B7A8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B7AF @ EventScript_JP_0822B7AF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B7B6 @ EventScript_JP_0822B7B6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B7BD @ EventScript_JP_0822B7BD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0822B7C4 @ EventScript_JP_0822B7C4
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
	.4byte 0x0822B382 @ EventScript_JP_0822B382
	@ event command: multichoice
	.byte 0x6F
	.byte 0x13
	.byte 0x04
	.byte 0x67
	.byte 0x01
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
	.4byte 0x0822B454 @ EventScript_JP_0822B454
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3B8 @ EventScript_JP_0822B3B8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3F4 @ EventScript_JP_0822B3F4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B422 @ EventScript_JP_0822B422
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B382: @ 0x0822B382
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x06
	.byte 0x68
	.byte 0x01
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
	.4byte 0x0822B454 @ EventScript_JP_0822B454
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3F4 @ EventScript_JP_0822B3F4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B422 @ EventScript_JP_0822B422
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B3B8: @ 0x0822B3B8
	@ event command: message
	.byte 0x67
	.4byte 0x0822B94A @ gText_Rom_22B94A
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
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3EA @ EventScript_JP_0822B3EA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B3EA: @ 0x0822B3EA
	@ event command: call
	.byte 0x04
	.4byte 0x0821F8F5
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B3F4: @ 0x0822B3F4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B909 @ gText_Rom_22B909
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
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B47F @ EventScript_JP_0822B47F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B422: @ 0x0822B422
	@ event command: message
	.byte 0x67
	.4byte 0x0822B91F @ gText_Rom_22B91F
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
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B23A @ EventScript_JP_0822B23A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B2CA @ EventScript_JP_0822B2CA
EventScript_JP_0822B454: @ 0x0822B454
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	@ event command: closemessage
	.byte 0x68
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B1FF @ EventScript_JP_0822B1FF
EventScript_JP_0822B468: @ 0x0822B468
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
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B7F6 @ EventScript_JP_0822B7F6
EventScript_JP_0822B47F: @ 0x0822B47F
	@ event command: message
	.byte 0x67
	.4byte 0x0822B931 @ gText_Rom_22B931
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_0822B4A1: @ 0x0822B4A1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B4B9 @ EventScript_JP_0822B4B9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B969 @ gText_Rom_22B969
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0001
EventScript_JP_0822B4B9: @ 0x0822B4B9
	@ event command: message
	.byte 0x67
	.4byte 0x0822B9A6 @ gText_Rom_22B9A6
	@ event command: waitmessage
	.byte 0x66
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
	.4byte 0x0822B510 @ EventScript_JP_0822B510
	@ event command: multichoice
	.byte 0x6F
	.byte 0x13
	.byte 0x04
	.byte 0x67
	.byte 0x01
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
	.4byte 0x0822B546 @ EventScript_JP_0822B546
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3B8 @ EventScript_JP_0822B3B8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3F4 @ EventScript_JP_0822B3F4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B422 @ EventScript_JP_0822B422
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B4B9 @ EventScript_JP_0822B4B9
EventScript_JP_0822B510: @ 0x0822B510
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x06
	.byte 0x68
	.byte 0x01
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
	.4byte 0x0822B546 @ EventScript_JP_0822B546
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B3F4 @ EventScript_JP_0822B3F4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B422 @ EventScript_JP_0822B422
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B4B9 @ EventScript_JP_0822B4B9
EventScript_JP_0822B546: @ 0x0822B546
	@ event command: call
	.byte 0x04
	.4byte 0x08222264
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B9C3 @ gText_Rom_22B9C3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x000F
	.2byte 0x0001
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0002
	.byte 0x1A
	.byte 0x18
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0002
	.2byte 0x000D
	.2byte 0x0001
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x000D
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0822B81A @ Movement_JP_0822B81A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0822B822 @ Movement_JP_0822B822
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0822B82D @ Movement_JP_0822B82D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x400F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B67A @ EventScript_JP_0822B67A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B5EA @ EventScript_JP_0822B5EA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B6A7 @ EventScript_JP_0822B6A7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822B5EA @ EventScript_JP_0822B5EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B9E2 @ gText_Rom_22B9E2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_0822B5EA: @ 0x0822B5EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BA71 @ gText_Rom_22BA71
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x0822B737 @ EventScript_JP_0822B737
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B607 @ EventScript_JP_0822B607
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B23A @ EventScript_JP_0822B23A
EventScript_JP_0822B607: @ 0x0822B607
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822B468 @ EventScript_JP_0822B468
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BA8A @ gText_Rom_22BA8A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D4 @ Movement_JP_0822B7D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7E7 @ Movement_JP_0822B7E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BAC7 @ gText_Rom_22BAC7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01D2
	@ event command: message
	.byte 0x67
	.4byte 0x0822BB02 @ gText_Rom_22BB02
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243639
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BB1E @ gText_Rom_22BB1E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B468 @ EventScript_JP_0822B468
EventScript_JP_0822B67A: @ 0x0822B67A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0822B6A7 @ EventScript_JP_0822B6A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BB57 @ gText_Rom_22BB57
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_0822B6A7: @ 0x0822B6A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BBDF @ gText_Rom_22BBDF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x0822B737 @ EventScript_JP_0822B737
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B6C4 @ EventScript_JP_0822B6C4
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B23A @ EventScript_JP_0822B23A
EventScript_JP_0822B6C4: @ 0x0822B6C4
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B468 @ EventScript_JP_0822B468
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BBEF @ gText_Rom_22BBEF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D4 @ Movement_JP_0822B7D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7E7 @ Movement_JP_0822B7E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BC48 @ gText_Rom_22BC48
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01D2
	@ event command: message
	.byte 0x67
	.4byte 0x0822BC8E @ gText_Rom_22BC8E
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243639
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822BCA6 @ gText_Rom_22BCA6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0822B468 @ EventScript_JP_0822B468
EventScript_JP_0822B737: @ 0x0822B737
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
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
	.2byte 0x0012
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0015
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: return
	.byte 0x03
MapScriptTable_JP_0822B76F: @ 0x0822B76F
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_0822B779
	.2byte 0
EventScript_JP_0822B779: @ 0x0822B779
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0001
	.byte 0x1A
	.byte 0x18
	@ event command: call
	.byte 0x04
	.4byte 0x0822B173 @ EventScript_JP_0822B173
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822B7CB @ Movement_JP_0822B7CB
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0822B7CB @ Movement_JP_0822B7CB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0822B7CB @ Movement_JP_0822B7CB
	@ event command: end
	.byte 0x02
EventScript_JP_0822B7A1: @ 0x0822B7A1
	@ event command: message
	.byte 0x67
	.4byte 0x0822B855 @ gText_Rom_22B855
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_0822B7A8: @ 0x0822B7A8
	@ event command: message
	.byte 0x67
	.4byte 0x0822B873 @ gText_Rom_22B873
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_0822B7AF: @ 0x0822B7AF
	@ event command: message
	.byte 0x67
	.4byte 0x0822B891 @ gText_Rom_22B891
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_0822B7B6: @ 0x0822B7B6
	@ event command: message
	.byte 0x67
	.4byte 0x0822B8AF @ gText_Rom_22B8AF
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_0822B7BD: @ 0x0822B7BD
	@ event command: message
	.byte 0x67
	.4byte 0x0822B8CD @ gText_Rom_22B8CD
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_0822B7C4: @ 0x0822B7C4
	@ event command: message
	.byte 0x67
	.4byte 0x0822B8EB @ gText_Rom_22B8EB
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
Movement_JP_0822B7CB: @ 0x0822B7CB
	@ object movement sequence
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_0822B7CD: @ 0x0822B7CD
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x03 @ face_right
	.byte 0xFE @ step_end
Movement_JP_0822B7D4: @ 0x0822B7D4
	@ object movement sequence
	.byte 0x01 @ face_up
	.byte 0xFE @ step_end
Movement_JP_0822B7D6: @ 0x0822B7D6
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B7DC: @ 0x0822B7DC
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_0822B7E2: @ 0x0822B7E2
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822B7E7: @ 0x0822B7E7
	@ object movement sequence
	.byte 0x00 @ face_down
	.byte 0xFE @ step_end
	.byte 0x55, 0x04, 0x04, 0x02, 0xFE, 0x55, 0x04, 0xFE, 0x04, 0x04, 0x04, 0x02, 0xFE
EventScript_JP_0822B7F6: @ 0x0822B7F6
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800D
	.2byte 0x40CE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822B810 @ EventScript_JP_0822B810
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x16
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x0007
	.byte 0x27, 0x02
EventScript_JP_0822B810: @ 0x0822B810
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x16
	.byte 0xFF
	.2byte 0x0013
	.2byte 0x0007
	.byte 0x27, 0x02
Movement_JP_0822B81A: @ 0x0822B81A
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x55 @ set_visible
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_0822B822: @ 0x0822B822
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x15 @ walk_fast_down
	.byte 0x18 @ walk_fast_right
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
Movement_JP_0822B82D: @ 0x0822B82D
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x55 @ set_visible
	.byte 0x04 @ walk_slow_down
	.byte 0x04 @ walk_slow_down
	.byte 0x04 @ walk_slow_down
	.byte 0x04 @ walk_slow_down
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end

	.globl gText_Rom_227EC5
	.set gText_Rom_227EC5, gText_Rom_227E6C + 0x59
	@ Replaced baserom.gba range: offset=0x227EC9, size=0x55E
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08227EC9: @ 0x08227EC9
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_08227ECF
	.byte 0
MapScriptTable_JP_08227ECF: @ 0x08227ECF
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08227ED9
	.2byte 0
EventScript_JP_08227ED9: @ 0x08227ED9
	@ event command: delay
	.byte 0x28
	.2byte 0x0010
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
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
	.4byte 0x08227F2C @ EventScript_JP_08227F2C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08227F7D @ Movement_JP_08227F7D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08227F6C @ Movement_JP_08227F6C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x000D
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08227F89 @ Movement_JP_08227F89
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08227F79 @ Movement_JP_08227F79
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x000D
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: goto
	.byte 0x05
	.4byte 0x08227F5A @ EventScript_JP_08227F5A
EventScript_JP_08227F2C: @ 0x08227F2C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08227FA1 @ Movement_JP_08227FA1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08227F8C @ Movement_JP_08227F8C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0025
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08227FB1 @ Movement_JP_08227FB1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08227F9D @ Movement_JP_08227F9D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0025
	.2byte 0x0003
	@ event command: waitdooranim
	.byte 0xAE
EventScript_JP_08227F5A: @ 0x08227F5A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x14
	.byte 0xFF
	.2byte 0x0005
	.2byte 0x0007
	.byte 0x27, 0x02
Movement_JP_08227F6C: @ 0x08227F6C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_08227F79: @ 0x08227F79
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08227F7D: @ 0x08227F7D
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08227F89: @ 0x08227F89
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08227F8C: @ 0x08227F8C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_08227F9D: @ 0x08227F9D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_08227FA1: @ 0x08227FA1
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08227FB1: @ 0x08227FB1
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
	.byte 0x09, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x09, 0x09, 0x54, 0xFE
MapScripts_JP_08227FC4: @ 0x08227FC4
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_08227FE3
	.byte 0x04
	.4byte MapScriptTable_JP_08227FCF
	.byte 0
MapScriptTable_JP_08227FCF: @ 0x08227FCF
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08227FD9
	.2byte 0
EventScript_JP_08227FD9: @ 0x08227FD9
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
MapScriptTable_JP_08227FE3: @ 0x08227FE3
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_08227FED
	.2byte 0
EventScript_JP_08227FED: @ 0x08227FED
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228392 @ EventScript_JP_08228392
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
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0822841D @ Movement_JP_0822841D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: lockall
	.byte 0x69
EventScript_JP_0822801A: @ 0x0822801A
	@ event command: call
	.byte 0x04
	.4byte 0x082282C6 @ EventScript_JP_082282C6
	@ event command: waitmessage
	.byte 0x66
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
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
	.4byte 0x0822808C @ EventScript_JP_0822808C
	@ event command: multichoice
	.byte 0x6F
	.byte 0x10
	.byte 0x00
	.byte 0x49
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
	.4byte 0x082281A8 @ EventScript_JP_082281A8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082281C0 @ EventScript_JP_082281C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228238 @ EventScript_JP_08228238
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082280D8 @ EventScript_JP_082280D8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228114 @ EventScript_JP_08228114
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228142 @ EventScript_JP_08228142
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_0822808C: @ 0x0822808C
	@ event command: multichoice
	.byte 0x6F
	.byte 0x10
	.byte 0x02
	.byte 0x6B
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
	.4byte 0x082281A8 @ EventScript_JP_082281A8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082281C0 @ EventScript_JP_082281C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228238 @ EventScript_JP_08228238
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228114 @ EventScript_JP_08228114
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228142 @ EventScript_JP_08228142
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_082280D8: @ 0x082280D8
	@ event command: message
	.byte 0x67
	.4byte 0x08228716 @ gText_Rom_228716
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
	.4byte 0x0822801A @ EventScript_JP_0822801A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822810A @ EventScript_JP_0822810A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_0822810A: @ 0x0822810A
	@ event command: call
	.byte 0x04
	.4byte 0x0821F8F5
	@ event command: goto
	.byte 0x05
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_08228114: @ 0x08228114
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082286C5 @ gText_Rom_2286C5
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
	.4byte 0x0822801A @ EventScript_JP_0822801A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228186 @ EventScript_JP_08228186
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_08228142: @ 0x08228142
	@ event command: message
	.byte 0x67
	.4byte 0x082286DC @ gText_Rom_2286DC
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
	.4byte 0x0822801A @ EventScript_JP_0822801A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228174 @ EventScript_JP_08228174
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_08228174: @ 0x08228174
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: goto
	.byte 0x05
	.4byte 0x08228A26 @ EventScript_JP_08228A26
EventScript_JP_08228186: @ 0x08228186
	@ event command: message
	.byte 0x67
	.4byte 0x082286F9 @ gText_Rom_2286F9
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
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
EventScript_JP_082281A8: @ 0x082281A8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822864D @ gText_Rom_22864D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_082281C0: @ 0x082281C0
	@ event command: call
	.byte 0x04
	.4byte 0x082281D5 @ EventScript_JP_082281D5
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_082281D5: @ 0x082281D5
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
	.4byte 0x08228214 @ EventScript_JP_08228214
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822821D @ EventScript_JP_0822821D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228226 @ EventScript_JP_08228226
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822822F @ EventScript_JP_0822822F
	@ event command: return
	.byte 0x03
EventScript_JP_08228214: @ 0x08228214
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08228664 @ gText_Rom_228664
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822821D: @ 0x0822821D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822867B @ gText_Rom_22867B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228226: @ 0x08228226
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08228692 @ gText_Rom_228692
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0822822F: @ 0x0822822F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082286AC @ gText_Rom_2286AC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228238: @ 0x08228238
	@ event command: message
	.byte 0x67
	.4byte 0x082284C0 @ gText_Rom_2284C0
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
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
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	@ event command: waitstate
	.byte 0x27
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0015
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
	.4byte 0x0822801A @ EventScript_JP_0822801A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0012
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082284E0 @ gText_Rom_2284E0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822841A @ Movement_JP_0822841A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08228422 @ Movement_JP_08228422
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0005
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08228424 @ Movement_JP_08228424
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0005
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x15
	.byte 0xFF
	.2byte 0x0009
	.2byte 0x0005
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_082282C6: @ 0x082282C6
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
	.4byte 0x08228305 @ EventScript_JP_08228305
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822830B @ EventScript_JP_0822830B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228311 @ EventScript_JP_08228311
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228317 @ EventScript_JP_08228317
	@ event command: return
	.byte 0x03
EventScript_JP_08228305: @ 0x08228305
	@ event command: message
	.byte 0x67
	.4byte 0x08228427 @ gText_Rom_228427
	@ event command: return
	.byte 0x03
EventScript_JP_0822830B: @ 0x0822830B
	@ event command: message
	.byte 0x67
	.4byte 0x0822844C @ gText_Rom_22844C
	@ event command: return
	.byte 0x03
EventScript_JP_08228311: @ 0x08228311
	@ event command: message
	.byte 0x67
	.4byte 0x08228471 @ gText_Rom_228471
	@ event command: return
	.byte 0x03
EventScript_JP_08228317: @ 0x08228317
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
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
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228356 @ EventScript_JP_08228356
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822836B @ EventScript_JP_0822836B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228356 @ EventScript_JP_08228356
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822836B @ EventScript_JP_0822836B
	@ event command: message
	.byte 0x67
	.4byte 0x08228499 @ gText_Rom_228499
	@ event command: return
	.byte 0x03
EventScript_JP_08228356: @ 0x08228356
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228380 @ EventScript_JP_08228380
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08228736 @ gText_Rom_228736
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_0822836B: @ 0x0822836B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228389 @ EventScript_JP_08228389
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08228786 @ gText_Rom_228786
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_08228380: @ 0x08228380
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082287D6 @ gText_Rom_2287D6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228389: @ 0x08228389
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082287FF @ gText_Rom_2287FF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228392: @ 0x08228392
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082284EE @ gText_Rom_2284EE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0028
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
	@ event command: call
	.byte 0x04
	.4byte 0x082283CB @ EventScript_JP_082283CB
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00E9
	@ event command: waitstate
	.byte 0x27
	@ event command: goto
	.byte 0x05
	.4byte 0x0822801A @ EventScript_JP_0822801A
EventScript_JP_082283CB: @ 0x082283CB
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
	.4byte 0x082283FF @ EventScript_JP_082283FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228408 @ EventScript_JP_08228408
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08228411 @ EventScript_JP_08228411
	@ event command: return
	.byte 0x03
EventScript_JP_082283FF: @ 0x082283FF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08228512 @ gText_Rom_228512
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228408: @ 0x08228408
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822853F @ gText_Rom_22853F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_08228411: @ 0x08228411
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822856C @ gText_Rom_22856C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
Movement_JP_0822841A: @ 0x0822841A
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_0822841D: @ 0x0822841D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08228422: @ 0x08228422
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08228424: @ 0x08228424
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end

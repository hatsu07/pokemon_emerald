	@ data/maps/LilycoveCity_DepartmentStore_5F/scripts.inc:154 LilycoveCity_DepartmentStore_5F_Text_ClosedRooftopForWeather
	.globl gText_Rom_20AE30
gText_Rom_20AE30: @ 0x0820AE30
	.string "いまは てんきが あれてるから\nおくじょうに でられない みたい……$"
	.if (. - gText_Rom_20AE30) > 0x23
	.error "gText_Rom_20AE30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AE30) < 0x23
	.space 0x23 - (. - gText_Rom_20AE30)
	.endif
	@ analyzed canonical ROM range 0x0820AE53-0x0820B0AE
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820AE53: @ 0x0820AE53
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820AE59
	.byte 0
EventScript_JP_0820AE59: @ 0x0820AE59
	@ event command: getpricereduction
	.byte 0x96
	.2byte 0x0003
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AE73 @ EventScript_JP_0820AE73
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AE77 @ EventScript_JP_0820AE77
	@ event command: end
	.byte 0x02
EventScript_JP_0820AE73: @ 0x0820AE73
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03C2
	@ event command: return
	.byte 0x03
EventScript_JP_0820AE77: @ 0x0820AE77
	@ event command: setflag
	.byte 0x29
	.2byte 0x03C2
	@ event command: return
	.byte 0x03
EventScript_JP_0820AE7B: @ 0x0820AE7B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration
	.byte 0x87
	.4byte 0x0820AE94
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00, 0x27, 0x00, 0x23, 0x00, 0x24, 0x00, 0x25, 0x00, 0x28, 0x00, 0x21, 0x00, 0x29, 0x00
	.byte 0x26, 0x00, 0x22, 0x00, 0x2D, 0x00, 0x2E, 0x00, 0x2F, 0x00, 0x75, 0x00, 0x70, 0x00, 0x00, 0x00
	.byte 0x6C, 0x02
EventScript_JP_0820AEB4: @ 0x0820AEB4
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: getpricereduction
	.byte 0x96
	.2byte 0x0003
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AECE @ EventScript_JP_0820AECE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B0AF @ gText_Rom_20B0AF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820AECE: @ 0x0820AECE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B0EA @ gText_Rom_20B0EA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820AED8: @ 0x0820AED8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B120 @ gText_Rom_20B120
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AEE1: @ 0x0820AEE1
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x0820B12E @ gText_Rom_20B12E
	@ event command: waitmessage
	.byte 0x66
	@ event command: showmoneybox
	.byte 0x93
	.byte 0x00
	.byte 0x00
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x0820AEF2 @ EventScript_JP_0820AEF2
	.byte 0x02
EventScript_JP_0820AEF2: @ 0x0820AEF2
	@ event command: multichoice
	.byte 0x6F
	.byte 0x10
	.byte 0x00
	.byte 0x2A
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x4001
	.2byte 0x800D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820AF30 @ EventScript_JP_0820AF30
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820AF3B @ EventScript_JP_0820AF3B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820AF46 @ EventScript_JP_0820AF46
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B180 @ gText_Rom_20B180
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B0AA @ EventScript_JP_0820B0AA
	.byte 0x02
EventScript_JP_0820AF30: @ 0x0820AF30
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x001A
	@ event command: goto
	.byte 0x05
	.4byte 0x0820AF7B @ EventScript_JP_0820AF7B
	.byte 0x02
EventScript_JP_0820AF3B: @ 0x0820AF3B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x001B
	@ event command: goto
	.byte 0x05
	.4byte 0x0820AF7B @ EventScript_JP_0820AF7B
	.byte 0x02
EventScript_JP_0820AF46: @ 0x0820AF46
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x001C
	@ event command: goto
	.byte 0x05
	.4byte 0x0820AF7B @ EventScript_JP_0820AF7B
	.byte 0x02
EventScript_JP_0820AF51: @ 0x0820AF51
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x000000C8 @ MOVE_OUTRAGE
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_0820AF58: @ 0x0820AF58
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x0000012C @ ITEM_TM12
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_0820AF5F: @ 0x0820AF5F
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x0000015E @ ITEM_015E
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_0820AF66: @ 0x0820AF66
	@ event command: takemoney
	.byte 0x91
	.4byte 0x000000C8 @ MOVE_OUTRAGE
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_0820AF6D: @ 0x0820AF6D
	@ event command: takemoney
	.byte 0x91
	.4byte 0x0000012C @ ITEM_TM12
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_0820AF74: @ 0x0820AF74
	@ event command: takemoney
	.byte 0x91
	.4byte 0x0000015E @ ITEM_015E
	.byte 0x00
	@ event command: return
	.byte 0x03
EventScript_JP_0820AF7B: @ 0x0820AF7B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AF51 @ EventScript_JP_0820AF51
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AF58 @ EventScript_JP_0820AF58
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AF5F @ EventScript_JP_0820AF5F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B08E @ EventScript_JP_0820B08E
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x4000
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B09C @ EventScript_JP_0820B09C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AF66 @ EventScript_JP_0820AF66
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AF6D @ EventScript_JP_0820AF6D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820AF74 @ EventScript_JP_0820AF74
	@ event command: updatemoneybox
	.byte 0x95
	.byte 0x00
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x4000
	@ event command: playse
	.byte 0x2F
	.2byte 0x006A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B14A @ gText_Rom_20B14A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: giveitem
	.byte 0x44
	.2byte 0x4000
	.2byte 0x0001
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x01
	.2byte 0x4000
	@ event command: bufferstdstring
	.byte 0x84
	.byte 0x02
	.2byte 0x000E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243953 @ gText_Rom_243953
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x0040
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0820B082 @ EventScript_JP_0820B082
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x4000
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B09C @ EventScript_JP_0820B09C
	@ event command: playse
	.byte 0x2F
	.2byte 0x006A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B159 @ gText_Rom_20B159
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: giveitem
	.byte 0x44
	.2byte 0x4000
	.2byte 0x0001
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x01
	.2byte 0x4000
	@ event command: bufferstdstring
	.byte 0x84
	.byte 0x02
	.2byte 0x000E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243953 @ gText_Rom_243953
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: random
	.byte 0x8F
	.2byte 0x0040
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0820B082 @ EventScript_JP_0820B082
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x4000
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820B09C @ EventScript_JP_0820B09C
	@ event command: playse
	.byte 0x2F
	.2byte 0x006A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B159 @ gText_Rom_20B159
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: giveitem
	.byte 0x44
	.2byte 0x4000
	.2byte 0x0001
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x01
	.2byte 0x4000
	@ event command: bufferstdstring
	.byte 0x84
	.byte 0x02
	.2byte 0x000E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243953 @ gText_Rom_243953
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B082 @ EventScript_JP_0820B082
	.byte 0x02
EventScript_JP_0820B082: @ 0x0820B082
	@ event command: message
	.byte 0x67
	.4byte 0x0820B12E @ gText_Rom_20B12E
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0820AEF2 @ EventScript_JP_0820AEF2
	.byte 0x02
EventScript_JP_0820B08E: @ 0x0820B08E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820B175 @ gText_Rom_20B175
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B0AA @ EventScript_JP_0820B0AA
	.byte 0x02
EventScript_JP_0820B09C: @ 0x0820B09C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243947 @ gText_Rom_243947
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820B0AA @ EventScript_JP_0820B0AA
	.byte 0x02
EventScript_JP_0820B0AA: @ 0x0820B0AA
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02

	@ data/maps/LilycoveCity_House4/scripts.inc:15 LilycoveCity_House4_Text_UnderwaterTrenchMossdeepSootopolis
	.globl gText_Rom_20A56C
gText_Rom_20A56C: @ 0x0820A56C
	.string "そういや トクサネと ルネの あいだには\nふかい ふかい かいこうが ある\p……そんな はなしも\nだれかが いってた ことなんだけど$"
	.if (. - gText_Rom_20A56C) > 0x43
	.error "gText_Rom_20A56C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20A56C) < 0x43
	.space 0x43 - (. - gText_Rom_20A56C)
	.endif
	@ analyzed canonical ROM range 0x0820A5AF-0x0820A782
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820A5AF: @ 0x0820A5AF
EventScript_0820A5AF: @ 0x0820A5AF
	.byte 0x00
EventScript_JP_0820A5B0: @ 0x0820A5B0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A783 @ gText_Rom_20A783
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A5B9: @ 0x0820A5B9
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4045
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x0820A714 @ EventScript_JP_0820A714
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x092A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A6AA @ EventScript_JP_0820A6AA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263199 @ gText_Rom_263199
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A6B4 @ EventScript_JP_0820A6B4
	@ event command: setflag
	.byte 0x29
	.2byte 0x092A
	@ event command: message
	.byte 0x67
	.4byte 0x0826325B @ gText_Rom_26325B
	@ event command: waitmessage
	.byte 0x66
	@ event command: special
	.byte 0x25
	.2byte 0x0101
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8008
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x0150
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263293 @ gText_Rom_263293
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00D9
	@ event command: special
	.byte 0x25
	.2byte 0x0102
	@ event command: delay
	.byte 0x28
	.2byte 0x00DC
	@ event command: special
	.byte 0x25
	.2byte 0x00DA
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A6BE @ EventScript_JP_0820A6BE
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x2E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820A698 @ EventScript_JP_0820A698
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820A6A1 @ EventScript_JP_0820A6A1
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x8005
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820A6D6 @ EventScript_JP_0820A6D6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820A6DF @ EventScript_JP_0820A6DF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820A6E8 @ EventScript_JP_0820A6E8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820A6F1 @ EventScript_JP_0820A6F1
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x8005
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
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A6FA @ EventScript_JP_0820A6FA
	@ event command: special
	.byte 0x25
	.2byte 0x0156
	@ event command: goto
	.byte 0x05
	.4byte 0x0820A6CC @ EventScript_JP_0820A6CC
	.byte 0x02
EventScript_JP_0820A698: @ 0x0820A698
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082632DD @ gText_Rom_2632DD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820A6A1: @ 0x0820A6A1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263319 @ gText_Rom_263319
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820A6AA: @ 0x0820A6AA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263236 @ gText_Rom_263236
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A6B4: @ 0x0820A6B4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826324A @ gText_Rom_26324A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A6BE: @ 0x0820A6BE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263357 @ gText_Rom_263357
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820A6CC @ EventScript_JP_0820A6CC
	.byte 0x02
EventScript_JP_0820A6CC: @ 0x0820A6CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263465 @ gText_Rom_263465
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A6D6: @ 0x0820A6D6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826336D @ gText_Rom_26336D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820A6DF: @ 0x0820A6DF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263391 @ gText_Rom_263391
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820A6E8: @ 0x0820A6E8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082633B5 @ gText_Rom_2633B5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820A6F1: @ 0x0820A6F1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082633D9 @ gText_Rom_2633D9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_0820A6FA: @ 0x0820A6FA
	@ event command: copyvar
	.byte 0x19
	.2byte 0x404D
	.2byte 0x8004
	@ event command: copyvar
	.byte 0x19
	.2byte 0x4045
	.2byte 0x8005
	@ event command: goto
	.byte 0x05
	.4byte 0x0820A70A @ EventScript_JP_0820A70A
	.byte 0x02
EventScript_JP_0820A70A: @ 0x0820A70A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263406 @ gText_Rom_263406
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A714: @ 0x0820A714
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826343A @ gText_Rom_26343A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x4045
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
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820A70A @ EventScript_JP_0820A70A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x404D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x4045
	@ event command: special
	.byte 0x25
	.2byte 0x0156
	@ event command: setvar
	.byte 0x16
	.2byte 0x4045
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x404D
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A74C: @ 0x0820A74C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A799 @ gText_Rom_20A799
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A755: @ 0x0820A755
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A7BC @ gText_Rom_20A7BC
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A75E: @ 0x0820A75E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A7DA @ gText_Rom_20A7DA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820A767: @ 0x0820A767
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x00B8
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A805 @ gText_Rom_20A805
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820A77A: @ 0x0820A77A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820A812 @ gText_Rom_20A812
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02

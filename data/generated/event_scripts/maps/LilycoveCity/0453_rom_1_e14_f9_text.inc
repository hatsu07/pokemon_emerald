	@ data/maps/LilycoveCity/scripts.inc:750 LilycoveCity_Text_HoneymoonVowToSeeRarePokemon
	.globl gText_Rom_1E14F9
gText_Rom_1E14F9: @ 0x081E14F9
	.string "わたしたちの しんこん りょこうは\nかくちの めずらしい ポケモンを\lできるだけ たくさん みること なんです\pこの まちに とうちゃく したら\nいきなり めずらしい ポケモンが みられて\lとても ハッピー だわ!$"
	.if (. - gText_Rom_1E14F9) > 0x6c
	.error "gText_Rom_1E14F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E14F9) < 0x6c
	.space 0x6c - (. - gText_Rom_1E14F9)
	.endif
	@ analyzed canonical ROM range 0x081E1565-0x081E17BB
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_081E1565: @ 0x081E1565
MapScripts_JP_081E1565: @ 0x081E1565
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081E156B
	.byte 0
EventScript_JP_081E156B: @ 0x081E156B
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0064
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0065
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0066
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0067
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x088A
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08243106
	@ event command: end
	.byte 0x02
EventScript_JP_081E1581: @ 0x081E1581
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1596 @ EventScript_JP_081E1596
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E18C3 @ gText_Rom_1E18C3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E1596: @ 0x081E1596
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1917 @ gText_Rom_1E1917
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E15A0: @ 0x081E15A0
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E15B5 @ EventScript_JP_081E15B5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E193A @ gText_Rom_1E193A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E15B5: @ 0x081E15B5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E19B8 @ gText_Rom_1E19B8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E15BF: @ 0x081E15BF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1865 @ gText_Rom_1E1865
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E15C8: @ 0x081E15C8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1A2A @ gText_Rom_1E1A2A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E15D1: @ 0x081E15D1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E19FB @ gText_Rom_1E19FB
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E15DA: @ 0x081E15DA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1AEE @ gText_Rom_1E1AEE
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E15E3: @ 0x081E15E3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1B7D @ gText_Rom_1E1B7D
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E15EC: @ 0x081E15EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1B87 @ gText_Rom_1E1B87
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E15F5: @ 0x081E15F5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1BB2 @ gText_Rom_1E1BB2
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E15FE: @ 0x081E15FE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1BD5 @ gText_Rom_1E1BD5
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081E1607: @ 0x081E1607
	@ event command: setflag
	.byte 0x29
	.2byte 0x087C
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: end
	.byte 0x02
EventScript_JP_081E1610: @ 0x081E1610
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081E167C @ Movement_JP_081E167C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E1686 @ Movement_JP_081E1686
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081E1686 @ Movement_JP_081E1686
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000C
	.4byte 0x081E1686 @ Movement_JP_081E1686
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x081E1686 @ Movement_JP_081E1686
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x081E168B @ Movement_JP_081E168B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081E1699 @ Movement_JP_081E1699
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081E16AC @ Movement_JP_081E16AC
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000C
	.4byte 0x081E16BE @ Movement_JP_081E16BE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x081E16CF @ Movement_JP_081E16CF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000E
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000C
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000D
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setvar
	.byte 0x16
	.2byte 0x405D
	.2byte 0x0002
	@ event command: setflag
	.byte 0x29
	.2byte 0x0337
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081E167C: @ 0x081E167C
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x03 @ face_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x02 @ face_left
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
Movement_JP_081E1686: @ 0x081E1686
	@ object movement sequence
	.byte 0x03 @ face_right
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
Movement_JP_081E168B: @ 0x081E168B
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081E1699: @ 0x081E1699
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081E16AC: @ 0x081E16AC
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081E16BE: @ 0x081E16BE
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081E16CF: @ 0x081E16CF
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
EventScript_JP_081E16DF: @ 0x081E16DF
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1A9E @ gText_Rom_1E1A9E
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
EventScript_JP_081E16F5: @ 0x081E16F5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0114
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081E1737 @ EventScript_JP_081E1737
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E17BC @ gText_Rom_1E17BC
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
	.4byte 0x081E1741 @ EventScript_JP_081E1741
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E17FC @ gText_Rom_1E17FC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00BB
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
	.4byte 0x082430E0
	@ event command: setflag
	.byte 0x29
	.2byte 0x0114
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E1737: @ 0x081E1737
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1831 @ gText_Rom_1E1831
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E1741: @ 0x081E1741
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1845 @ gText_Rom_1E1845
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E174B: @ 0x081E174B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1C8D @ gText_Rom_1E1C8D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081E1754: @ 0x081E1754
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081E1BF8 @ gText_Rom_1E1BF8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E177F @ EventScript_JP_081E177F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081E1791 @ EventScript_JP_081E1791
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0010
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081E177F: @ 0x081E177F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E17A3 @ Movement_JP_081E17A3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0010
	.4byte 0x081E17A7 @ Movement_JP_081E17A7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081E1791: @ 0x081E1791
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081E17A3 @ Movement_JP_081E17A3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0010
	.4byte 0x081E17B1 @ Movement_JP_081E17B1
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081E17A3: @ 0x081E17A3
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081E17A7: @ 0x081E17A7
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
	.byte 0xFE @ step_end
Movement_JP_081E17B1: @ 0x081E17B1
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end

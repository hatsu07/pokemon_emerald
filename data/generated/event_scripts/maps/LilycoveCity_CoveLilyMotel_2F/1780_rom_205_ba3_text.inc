	@ data/maps/LilycoveCity_CoveLilyMotel_2F/scripts.inc:92 LilycoveCity_CoveLilyMotel_2F_Text_ContestsDoTakeStrategy
	.globl gText_Rom_205BA3
gText_Rom_205BA3: @ 0x08205BA3
	.string "エニシダ『コンテストに かつための\nせんりゃくを ねるのも\lつよい トレーナーに なるための\lほうほうの ひとつでは あるね$"
	.if (. - gText_Rom_205BA3) > 0x3f
	.error "gText_Rom_205BA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_205BA3) < 0x3f
	.space 0x3f - (. - gText_Rom_205BA3)
	.endif
	@ analyzed canonical ROM range 0x08205BE2-0x08205D74
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_08205BE2: @ 0x08205BE2
	.byte 0x00
EventScript_JP_08205BE3: @ 0x08205BE3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205D75 @ gText_Rom_205D75
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205BEC: @ 0x08205BEC
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: message
	.byte 0x67
	.4byte 0x08205DBB @ gText_Rom_205DBB
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x08
	.byte 0x10
	.byte 0x01
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205C1F @ EventScript_JP_08205C1F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205C16 @ EventScript_JP_08205C16
	@ event command: end
	.byte 0x02
EventScript_JP_08205C16: @ 0x08205C16
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205E10 @ gText_Rom_205E10
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205C1F: @ 0x08205C1F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205E33 @ gText_Rom_205E33
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
	.4byte 0x08205C3E @ EventScript_JP_08205C3E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205C48 @ EventScript_JP_08205C48
	@ event command: end
	.byte 0x02
EventScript_JP_08205C3E: @ 0x08205C3E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205E63 @ gText_Rom_205E63
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08205C48: @ 0x08205C48
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205E89 @ gText_Rom_205E89
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08205CC3 @ Movement_JP_08205CC3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205C84 @ EventScript_JP_08205C84
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205C99 @ EventScript_JP_08205C99
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205CAE @ EventScript_JP_08205CAE
	@ event command: end
	.byte 0x02
EventScript_JP_08205C84: @ 0x08205C84
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08205CCB @ Movement_JP_08205CCB
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x03
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x0008
	.byte 0x27, 0x02
EventScript_JP_08205C99: @ 0x08205C99
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08205CC5 @ Movement_JP_08205CC5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x03
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x0008
	.byte 0x27, 0x02
EventScript_JP_08205CAE: @ 0x08205CAE
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08205CC8 @ Movement_JP_08205CC8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x03
	.byte 0xFF
	.2byte 0x000B
	.2byte 0x0008
	.byte 0x27, 0x02
Movement_JP_08205CC3: @ 0x08205CC3
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08205CC5: @ 0x08205CC5
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08205CC8: @ 0x08205CC8
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_08205CCB: @ 0x08205CCB
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_08205CCE: @ 0x08205CCE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205EBA @ gText_Rom_205EBA
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205CD7: @ 0x08205CD7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205EDD @ gText_Rom_205EDD
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205CE0: @ 0x08205CE0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205EFB @ gText_Rom_205EFB
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205CE9: @ 0x08205CE9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205F22 @ gText_Rom_205F22
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205CF2: @ 0x08205CF2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205F45 @ gText_Rom_205F45
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205CFB: @ 0x08205CFB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205F6E @ gText_Rom_205F6E
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205D04: @ 0x08205D04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205F90 @ gText_Rom_205F90
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205D0D: @ 0x08205D0D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205FB5 @ gText_Rom_205FB5
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205D16: @ 0x08205D16
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205FE8 @ gText_Rom_205FE8
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205D1F: @ 0x08205D1F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206021 @ gText_Rom_206021
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205D28: @ 0x08205D28
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820604F @ gText_Rom_20604F
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205D31: @ 0x08205D31
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820609D @ gText_Rom_20609D
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205D3A: @ 0x08205D3A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082060B6 @ gText_Rom_2060B6
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08205D43: @ 0x08205D43
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082060D2 @ gText_Rom_2060D2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205D4C: @ 0x08205D4C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206113 @ gText_Rom_206113
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08205D55: @ 0x08205D55
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820613F @ gText_Rom_20613F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
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
EventScript_JP_08205D6C: @ 0x08205D6C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206184 @ gText_Rom_206184
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02

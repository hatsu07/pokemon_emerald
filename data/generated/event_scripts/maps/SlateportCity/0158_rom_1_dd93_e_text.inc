	@ data/maps/SlateportCity/scripts.inc:1338 SlateportCity_Text_TakingBattleTentChallenge
	.globl gText_Rom_1DD93E
gText_Rom_1DD93E: @ 0x081DD93E
	.string "エニシダ『お おおっと\n{PLAYER}{KUN}か!\p……もしかして {PLAYER}{KUN}\nバトルテントに ちょうせん するのかい?\pうん! それは いいことだな!\nものすごく いいことだ!\lバトルテントには つよい トレーナーが\lとっても ふさわしい からね\pじゃ がんばってね!$"
	.if (. - gText_Rom_1DD93E) > 0x80
	.error "gText_Rom_1DD93E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DD93E) < 0x80
	.space 0x80 - (. - gText_Rom_1DD93E)
	.endif
	@ analyzed canonical ROM range 0x081DD9BE-0x081DDDF2
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_081DD9BE: @ 0x081DD9BE
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081DD9C4
	.byte 0
EventScript_JP_081DD9C4: @ 0x081DD9C4
	@ event command: setflag
	.byte 0x29
	.2byte 0x0878
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x009D
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03C1
	@ event command: setflag
	.byte 0x29
	.2byte 0x0892
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0063
	@ event command: setvar
	.byte 0x16
	.2byte 0x4093
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D1
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DD9E2 @ EventScript_JP_081DD9E2
	@ event command: end
	.byte 0x02
EventScript_JP_081DD9E2: @ 0x081DD9E2
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0391
	@ event command: setflag
	.byte 0x29
	.2byte 0x0390
	@ event command: setflag
	.byte 0x29
	.2byte 0x005B
	@ event command: return
	.byte 0x03
EventScript_JP_081DD9EC: @ 0x081DD9EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE4C1 @ gText_Rom_1DE4C1
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DD9F5: @ 0x081DD9F5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE509 @ gText_Rom_1DE509
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DD9FE: @ 0x081DD9FE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE53B @ gText_Rom_1DE53B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA07: @ 0x081DDA07
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE578 @ gText_Rom_1DE578
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA10: @ 0x081DDA10
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE59B @ gText_Rom_1DE59B
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA19: @ 0x081DDA19
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE5BA @ gText_Rom_1DE5BA
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA22: @ 0x081DDA22
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE5E4 @ gText_Rom_1DE5E4
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA2B: @ 0x081DDA2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE608 @ gText_Rom_1DE608
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA34: @ 0x081DDA34
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0062
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDA4C @ EventScript_JP_081DDA4C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE62C @ gText_Rom_1DE62C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0062
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA4C: @ 0x081DDA4C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE6DE @ gText_Rom_1DE6DE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DDA56: @ 0x081DDA56
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011C
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDA76 @ EventScript_JP_081DDA76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDE15 @ gText_Rom_1DDE15
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
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
EventScript_JP_081DDA76: @ 0x081DDA76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDFD3 @ gText_Rom_1DDFD3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
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
EventScript_JP_081DDA8B: @ 0x081DDA8B
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011C
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDCC9 @ EventScript_JP_081DDCC9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDE51 @ gText_Rom_1DDE51
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDE96 @ gText_Rom_1DDE96
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDF00 @ gText_Rom_1DDF00
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDF37 @ gText_Rom_1DDF37
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x081DDAE6 @ EventScript_JP_081DDAE6
	.byte 0x02
EventScript_JP_081DDAE6: @ 0x081DDAE6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DDC73 @ EventScript_JP_081DDC73
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDCBC @ EventScript_JP_081DDCBC
	@ event command: closemessage
	.byte 0x68
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
	.4byte 0x081DDB19 @ EventScript_JP_081DDB19
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDB76 @ EventScript_JP_081DDB76
	@ event command: end
	.byte 0x02
EventScript_JP_081DDB19: @ 0x081DDB19
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD18 @ Movement_JP_081DDD18
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x081DDCE1 @ Movement_JP_081DDCE1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD1B @ Movement_JP_081DDD1B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD27 @ Movement_JP_081DDD27
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD2C @ Movement_JP_081DDD2C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE142 @ gText_Rom_1DE142
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD05 @ Movement_JP_081DDD05
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD33 @ Movement_JP_081DDD33
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x081DDCED @ Movement_JP_081DDCED
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DDBCC @ EventScript_JP_081DDBCC
	.byte 0x02
EventScript_JP_081DDB76: @ 0x081DDB76
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD15 @ Movement_JP_081DDD15
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x081DDCE7 @ Movement_JP_081DDCE7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD21 @ Movement_JP_081DDD21
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD30 @ Movement_JP_081DDD30
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE142 @ gText_Rom_1DE142
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD09 @ Movement_JP_081DDD09
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD3C @ Movement_JP_081DDD3C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x081DDCF9 @ Movement_JP_081DDCF9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081DDBCC @ EventScript_JP_081DDBCC
	.byte 0x02
EventScript_JP_081DDBCC: @ 0x081DDBCC
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0006
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0007
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0326
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0329
	@ event command: setflag
	.byte 0x29
	.2byte 0x00BE
	@ event command: setvar
	.byte 0x16
	.2byte 0x40F2
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0088
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DDC2C @ EventScript_JP_081DDC2C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DDC3A @ EventScript_JP_081DDC3A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE235 @ gText_Rom_1DE235
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DDC4F @ EventScript_JP_081DDC4F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081DDC61 @ EventScript_JP_081DDC61
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081DDC2C: @ 0x081DDC2C
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081DDD46 @ Movement_JP_081DDD46
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DDC3A: @ 0x081DDC3A
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x000B
	.2byte 0x000C
	.2byte 0x000D
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081DDD52 @ Movement_JP_081DDD52
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DDC4F: @ 0x081DDC4F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD0E @ Movement_JP_081DDD0E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081DDD5E @ Movement_JP_081DDD5E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DDC61: @ 0x081DDC61
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081DDD11 @ Movement_JP_081DDD11
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081DDD68 @ Movement_JP_081DDD68
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081DDC73: @ 0x081DDC73
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE040 @ gText_Rom_1DE040
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0290
	.2byte 0x0000
	.4byte 0x081DE05D @ gText_Rom_1DE05D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE085 @ gText_Rom_1DE085
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE09E @ gText_Rom_1DE09E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE0F4 @ gText_Rom_1DE0F4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081DDCBC: @ 0x081DDCBC
	@ event command: setflag
	.byte 0x29
	.2byte 0x011C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DDF95 @ gText_Rom_1DDF95
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DDCC9: @ 0x081DDCC9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE01F @ gText_Rom_1DE01F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: goto
	.byte 0x05
	.4byte 0x081DDAE6 @ EventScript_JP_081DDAE6
	.byte 0x02
Movement_JP_081DDCE1: @ 0x081DDCE1
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081DDCE7: @ 0x081DDCE7
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081DDCED: @ 0x081DDCED
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081DDCF9: @ 0x081DDCF9
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081DDD05: @ 0x081DDD05
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081DDD09: @ 0x081DDD09
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081DDD0E: @ 0x081DDD0E
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081DDD11: @ 0x081DDD11
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081DDD15: @ 0x081DDD15
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081DDD18: @ 0x081DDD18
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081DDD1B: @ 0x081DDD1B
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081DDD21: @ 0x081DDD21
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081DDD27: @ 0x081DDD27
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081DDD2C: @ 0x081DDD2C
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081DDD30: @ 0x081DDD30
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081DDD33: @ 0x081DDD33
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081DDD3C: @ 0x081DDD3C
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
	.byte 0xFE @ step_end
Movement_JP_081DDD46: @ 0x081DDD46
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081DDD52: @ 0x081DDD52
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081DDD5E: @ 0x081DDD5E
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
Movement_JP_081DDD68: @ 0x081DDD68
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
EventScript_JP_081DDD73: @ 0x081DDD73
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDDE9 @ EventScript_JP_081DDDE9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40BA
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDDBD @ EventScript_JP_081DDDBD
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00D0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081DDDB3 @ EventScript_JP_081DDDB3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE2EE @ gText_Rom_1DE2EE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x010F
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x00D0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE3C9 @ gText_Rom_1DE3C9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DDDB3: @ 0x081DDDB3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE3C9 @ gText_Rom_1DE3C9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DDDBD: @ 0x081DDDBD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE432 @ gText_Rom_1DE432
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0138
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
	.2byte 0x00D1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE48F @ gText_Rom_1DE48F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081DDDE9: @ 0x081DDDE9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081DE48F @ gText_Rom_1DE48F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02

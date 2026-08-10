	@ data/maps/BattleFrontier_BattleTowerBattleRoom/scripts.inc:556 BattleFrontier_BattleTowerBattleRoom_Text_WishICouldBattleYouAgain
	.globl gText_Rom_222729
gText_Rom_222729: @ 0x08222729
	.string "たのしかった……\pこんなに ポケモンバトルが\nたのしい なんて はじめて……\pまた あなたと たたかえると いいな……$"
	.if (. - gText_Rom_222729) > 0x3c
	.error "gText_Rom_222729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222729) < 0x3c
	.space 0x3c - (. - gText_Rom_222729)
	.endif

	@ analyzed canonical ROM range 0x08222765-0x08222A98
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_08222765: @ 0x08222765
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0822276B
	.byte 0
EventScript_JP_0822276B: @ 0x0822276B
	@ event command: setflag
	.byte 0x29
	.2byte 0x08A9
	@ event command: end
	.byte 0x02
EventScript_JP_0822276F: @ 0x0822276F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826354C @ gText_Rom_26354C
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
	.4byte 0x082227B4 @ EventScript_JP_082227B4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826356A @ gText_Rom_26356A
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
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0001
	.byte 0x1A
	.byte 0x09
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082432D3
	@ event command: warp
	.byte 0x39
	.byte 0x0D
	.byte 0x0A
	.byte 0xFF
	.2byte 0x0008
	.2byte 0x000B
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082227B4: @ 0x082227B4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08263578 @ gText_Rom_263578
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082227BE: @ 0x082227BE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082227D4 @ Movement_JP_082227D4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082227C9: @ 0x082227C9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082227D6 @ Movement_JP_082227D6
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_082227D4: @ 0x082227D4
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_082227D6: @ 0x082227D6
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
EventScript_JP_082227D9: @ 0x082227D9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082635AF @ gText_Rom_2635AF
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
MapScripts_JP_082227E2: @ 0x082227E2
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_082227ED
	.byte 0x03
	.4byte EventScript_JP_0822280B
	.byte 0
EventScript_JP_082227ED: @ 0x082227ED
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08C1
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082227F7 @ EventScript_JP_082227F7
	@ event command: end
	.byte 0x02
EventScript_JP_082227F7: @ 0x082227F7
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08244178
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_0822280B: @ 0x0822280B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D5
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08222827 @ EventScript_JP_08222827
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D5
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x08222832 @ EventScript_JP_08222832
	@ event command: call
	.byte 0x04
	.4byte 0x0822283D @ EventScript_JP_0822283D
	@ event command: end
	.byte 0x02
EventScript_JP_08222827: @ 0x08222827
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x00BC
	@ event command: setvar
	.byte 0x16
	.2byte 0x4004
	.2byte 0x0198
	@ event command: return
	.byte 0x03
EventScript_JP_08222832: @ 0x08222832
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x00BB
	@ event command: setvar
	.byte 0x16
	.2byte 0x4004
	.2byte 0x0197
	@ event command: return
	.byte 0x03
EventScript_JP_0822283D: @ 0x0822283D
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222855 @ EventScript_JP_08222855
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822285B @ EventScript_JP_0822285B
	@ event command: end
	.byte 0x02
EventScript_JP_08222855: @ 0x08222855
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0064
	@ event command: return
	.byte 0x03
EventScript_JP_0822285B: @ 0x0822285B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0069
	@ event command: return
	.byte 0x03
EventScript_JP_08222861: @ 0x08222861
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x000C
	@ event command: goto
	.byte 0x05
	.4byte 0x0822286D @ EventScript_JP_0822286D
	.byte 0x02
EventScript_JP_0822286D: @ 0x0822286D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222937 @ EventScript_JP_08222937
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01C8
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222937 @ EventScript_JP_08222937
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01C9
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08222937 @ EventScript_JP_08222937
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08B3
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08222937 @ EventScript_JP_08222937
	@ event command: setflag
	.byte 0x29
	.2byte 0x00CE
	@ event command: setflag
	.byte 0x29
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x0113
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x08222967 @ Movement_JP_08222967
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0032
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x4004
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x007F
	.4byte 0x0822296B @ Movement_JP_0822296B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08222977 @ Movement_JP_08222977
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0032
	@ event command: special
	.byte 0x25
	.2byte 0x0114
	@ event command: setvar
	.byte 0x16
	.2byte 0x800F
	.2byte 0x0002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D5
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08222941 @ EventScript_JP_08222941
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D5
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x08222954 @ EventScript_JP_08222954
	@ event command: setflag
	.byte 0x29
	.2byte 0x08C1
	@ event command: special
	.byte 0x25
	.2byte 0x0142
	@ event command: waitstate
	.byte 0x27
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x08C1
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822291E @ EventScript_JP_0822291E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822292C @ EventScript_JP_0822292C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0822292C @ EventScript_JP_0822292C
	@ event command: setflag
	.byte 0x29
	.2byte 0x01C9
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0822291E: @ 0x0822291E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01C8
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x4004
	@ event command: goto
	.byte 0x05
	.4byte 0x082441A0
	.byte 0x02
EventScript_JP_0822292C: @ 0x0822292C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x4004
	@ event command: goto
	.byte 0x05
	.4byte 0x082441A0
	.byte 0x02
EventScript_JP_08222937: @ 0x08222937
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826358B @ gText_Rom_26358B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08222941: @ 0x08222941
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0198
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0032
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x00BF
	@ event command: special
	.byte 0x25
	.2byte 0x01DF
	@ event command: return
	.byte 0x03
EventScript_JP_08222954: @ 0x08222954
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0197
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0032
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x00BF
	@ event command: special
	.byte 0x25
	.2byte 0x01DF
	@ event command: return
	.byte 0x03
Movement_JP_08222967: @ 0x08222967
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_0822296B: @ 0x0822296B
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_08222977: @ 0x08222977
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
	.byte 0x00
EventScript_JP_08222984: @ 0x08222984
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08262A20 @ gText_Rom_262A20
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0822298D: @ 0x0822298D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08262A67 @ gText_Rom_262A67
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222996: @ 0x08222996
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08262AAF @ gText_Rom_262AAF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00
MapScripts_JP_082229A1: @ 0x082229A1
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_082229AC
	.byte 0x03
	.4byte EventScript_JP_082229CA
	.byte 0
EventScript_JP_082229AC: @ 0x082229AC
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x08C1
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082229B6 @ EventScript_JP_082229B6
	@ event command: end
	.byte 0x02
EventScript_JP_082229B6: @ 0x082229B6
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00B4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x08244178
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	@ event command: return
	.byte 0x03
EventScript_JP_082229CA: @ 0x082229CA
	@ event command: setvar
	.byte 0x16
	.2byte 0x40BC
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0396
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01C6
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x082229DC @ EventScript_JP_082229DC
	@ event command: end
	.byte 0x02
EventScript_JP_082229DC: @ 0x082229DC
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x034A
	@ event command: return
	.byte 0x03
EventScript_JP_082229E0: @ 0x082229E0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222BAD @ gText_Rom_222BAD
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_082229E9: @ 0x082229E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222BCC @ gText_Rom_222BCC
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_082229F2: @ 0x082229F2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222BE7 @ gText_Rom_222BE7
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_082229FB: @ 0x082229FB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222C04 @ gText_Rom_222C04
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08222A04: @ 0x08222A04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222C70 @ gText_Rom_222C70
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A0D: @ 0x08222A0D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222C98 @ gText_Rom_222C98
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A16: @ 0x08222A16
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222D08 @ gText_Rom_222D08
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A1F: @ 0x08222A1F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222D54 @ gText_Rom_222D54
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A28: @ 0x08222A28
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222DB2 @ gText_Rom_222DB2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A31: @ 0x08222A31
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222E60 @ gText_Rom_222E60
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222A3C: @ 0x08222A3C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0120
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222E98 @ gText_Rom_222E98
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222A4F: @ 0x08222A4F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222EAA @ gText_Rom_222EAA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A58: @ 0x08222A58
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222F21 @ gText_Rom_222F21
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A61: @ 0x08222A61
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222F59 @ gText_Rom_222F59
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A6A: @ 0x08222A6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222F8E @ gText_Rom_222F8E
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A73: @ 0x08222A73
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222FAB @ gText_Rom_222FAB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08222A7E: @ 0x08222A7E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08222DF5 @ gText_Rom_222DF5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08222A87: @ 0x08222A87
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playse
	.byte 0x2F
	.2byte 0x010D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08222B05 @ Movement_JP_08222B05
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02

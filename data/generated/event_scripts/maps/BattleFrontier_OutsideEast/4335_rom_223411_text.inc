	@ data/maps/BattleFrontier_OutsideEast/scripts.inc:333 BattleFrontier_OutsideEast_Text_StickyMonWithLongTail
	.globl gText_Rom_223411
gText_Rom_223411: @ 0x08223411
	.string "ぼぼぼ ぼく みちゃったんだっ!!\pこのさきの いわ から しっぽが ながくって\nなんか ベタベタした ポケモンが\lぼくの こと じーっと のぞいてたんだっ!\pきっと こわい ポケモン だよーっ!!$"
	.if (. - gText_Rom_223411) > 0x64
	.error "gText_Rom_223411 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_223411) < 0x64
	.space 0x64 - (. - gText_Rom_223411)
	.endif
	@ analyzed canonical ROM range 0x08223475-0x08223738
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_08223475: @ 0x08223475
MapScripts_JP_08223475: @ 0x08223475
	@ map script dispatch table
	.byte 0x05
	.4byte EventScript_JP_0822348A
	.byte 0x03
	.4byte EventScript_JP_08223493
	.byte 0x04
	.4byte MapScriptTable_JP_082234F7
	.byte 0x02
	.4byte MapScriptTable_JP_08223506
	.byte 0
EventScript_JP_0822348A: @ 0x0822348A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0011
	@ event command: special
	.byte 0x25
	.2byte 0x00F0
	@ event command: end
	.byte 0x02
EventScript_JP_08223493: @ 0x08223493
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0152
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082234BD @ EventScript_JP_082234BD
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02C7
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02C8
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02C9
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02CA
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02CB
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02CC
	@ event command: setflag
	.byte 0x29
	.2byte 0x0360
	@ event command: setflag
	.byte 0x29
	.2byte 0x0361
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: end
	.byte 0x02
EventScript_JP_082234BD: @ 0x082234BD
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4012
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4013
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4014
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4015
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4016
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4017
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x4003
	.2byte 0x0001
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x000A
	.2byte 0x0002
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082234F7: @ 0x082234F7
	@ conditional map script table
	.2byte 0x4003, 0x0001
	.4byte EventScript_JP_08223501
	.2byte 0
EventScript_JP_08223501: @ 0x08223501
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08223506: @ 0x08223506
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_08223524
	.2byte 0x4003, 0x0001
	.4byte EventScript_JP_08223518
	.2byte 0
EventScript_JP_08223518: @ 0x08223518
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4003
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08223598 @ EventScript_JP_08223598
	.byte 0x02
EventScript_JP_08223524: @ 0x08223524
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08223558 @ Movement_JP_08223558
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822355A @ Movement_JP_0822355A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223739 @ gText_Rom_223739
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_08223558: @ 0x08223558
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_0822355A: @ 0x0822355A
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
EventScript_JP_0822355D: @ 0x0822355D
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0822375E @ gText_Rom_22375E
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08223580 @ EventScript_JP_08223580
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08223797 @ gText_Rom_223797
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08223580: @ 0x08223580
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
	.4byte 0x08221CFC
	.byte 0x02
EventScript_JP_08223598: @ 0x08223598
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082237C1 @ gText_Rom_2237C1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x000A
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: call
	.byte 0x04
	.4byte 0x082235C7 @ EventScript_JP_082235C7
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x000A
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x06
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x0006
	.byte 0x27, 0x6B, 0x02
EventScript_JP_082235C7: @ 0x082235C7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08223609 @ Movement_JP_08223609
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082235FD @ Movement_JP_082235FD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
	.byte 0x4F, 0x01, 0x00, 0x09, 0x36, 0x22, 0x08, 0x4F, 0xFF, 0x00, 0x01, 0x36, 0x22, 0x08, 0x51, 0x00
	.byte 0x00, 0x03, 0x4F, 0x01, 0x00, 0x09, 0x36, 0x22, 0x08, 0x4F, 0xFF, 0x00, 0x05, 0x36, 0x22, 0x08
	.byte 0x51, 0x00, 0x00, 0x03
Movement_JP_082235FD: @ 0x082235FD
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
	.byte 0x0B, 0x09, 0x54, 0xFE, 0x0A, 0x09, 0x54, 0xFE
Movement_JP_08223609: @ 0x08223609
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_0822360C: @ 0x0822360C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_08223619: @ 0x08223619
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0152
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082236A6 @ EventScript_JP_082236A6
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
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
	.4byte 0x082236A6 @ EventScript_JP_082236A6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082236A6 @ EventScript_JP_082236A6
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x082236B7 @ EventScript_JP_082236B7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x082236C2 @ EventScript_JP_082236C2
	@ event command: removeobject
	.byte 0x53
	.2byte 0x800F
	@ event command: setflag
	.byte 0x29
	.2byte 0x0152
	@ event command: warpsilent
	.byte 0x3A
	.byte 0x1A
	.byte 0x0F
	.byte 0xFF
	.2byte 0x000A
	.2byte 0x0003
	.byte 0x27, 0x6C, 0x02
EventScript_JP_082236A6: @ 0x082236A6
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082236B7: @ 0x082236B7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x082236CD @ Movement_JP_082236CD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_082236C2: @ 0x082236C2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x082236D5 @ Movement_JP_082236D5
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_082236CD: @ 0x082236CD
	@ object movement sequence
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0xFE @ step_end
Movement_JP_082236D5: @ 0x082236D5
	@ object movement sequence
	.byte 0x17 @ walk_fast_left
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0x16 @ walk_fast_up
	.byte 0xFE @ step_end
EventScript_JP_082236DE: @ 0x082236DE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_082236EB: @ 0x082236EB
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_082236F8: @ 0x082236F8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_08223705: @ 0x08223705
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0004
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_08223712: @ 0x08223712
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0005
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_0822371F: @ 0x0822371F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0006
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02
EventScript_JP_0822372C: @ 0x0822372C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0007
	@ event command: goto
	.byte 0x05
	.4byte 0x08223619 @ EventScript_JP_08223619
	.byte 0x02

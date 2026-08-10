	@ data/maps/EverGrandeCity_HallOfFame/scripts.inc:85 EverGrandeCity_HallOfFame_Text_LetsRecordYouAndYourPartnersNames
	.globl gText_Rom_2113B4
gText_Rom_2113B4: @ 0x082113B4
	.string "ミクリ『さあ! ポケモン リーグを\nかちぬいた きみの なまえと\pともに たたかった きみの パートナーを\nこの マシンに きろく するのだ!$"
	.if (. - gText_Rom_2113B4) > 0x48
	.error "gText_Rom_2113B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2113B4) < 0x48
	.space 0x48 - (. - gText_Rom_2113B4)
	.endif
	@ analyzed canonical ROM range 0x082113FC-0x082114A1
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082113FC: @ 0x082113FC
MapScripts_JP_082113FC: @ 0x082113FC
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08211407
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_08211407: @ 0x08211407
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x000B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01CF
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x08211414 @ EventScript_JP_08211414
	@ event command: end
	.byte 0x02
EventScript_JP_08211414: @ 0x08211414
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086C
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08244178
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0319
	@ event command: return
	.byte 0x03
EventScript_JP_08211421: @ 0x08211421
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0821142F: @ 0x0821142F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082114A2 @ gText_Rom_2114A2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08211438: @ 0x08211438
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082114D6 @ gText_Rom_2114D6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08211441: @ 0x08211441
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08211531 @ gText_Rom_211531
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
	.4byte 0x0821147E @ EventScript_JP_0821147E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211489 @ EventScript_JP_08211489
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08211489 @ EventScript_JP_08211489
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x01CF
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: waitse
	.byte 0x30
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0821147E: @ 0x0821147E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08211494 @ Movement_JP_08211494
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_08211489: @ 0x08211489
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x0821149B @ Movement_JP_0821149B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_08211494: @ 0x08211494
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_0821149B: @ 0x0821149B
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end

	@ data/maps/BattleFrontier_BattlePalaceCorridor/scripts.inc:146 BattleFrontier_BattlePalaceCorridor_Text_HeartfeltBondBetweenYouAndMons
	.globl gText_Rom_22B12C
gText_Rom_22B12C: @ 0x0822B12C
	.string "おお…… おぬしと ポケモンの あいだに\nつよい こころの きずなが みえる……{EOS}"
	.if (. - gText_Rom_22B12C) > 0x29
	.error "gText_Rom_22B12C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22B12C) < 0x29
	.space 0x29 - (. - gText_Rom_22B12C)
	.endif
	@ analyzed canonical ROM range 0x0822B155-0x0822B83A
	@ semantic recovery: script_data; byte-verified against linked ROM
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
	setvar 0x8004, 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	call EventScript_JP_0822B173
	end
EventScript_JP_0822B173: @ 0x0822B173
	checkplayergender
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822B18B
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B196
	return
EventScript_JP_0822B18B: @ 0x0822B18B
	setvar 0x4011, 0x0064
	setvar 0x4010, 0x0064
	return
EventScript_JP_0822B196: @ 0x0822B196
	setvar 0x4011, 0x0069
	setvar 0x4010, 0x0069
	return
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
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_0822B1F5
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
	setvar 0x4002, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_0822B2CA
EventScript_JP_0822B1F5: @ 0x0822B1F5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7CD @ Movement_JP_0822B7CD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
EventScript_JP_0822B1FF: @ 0x0822B1FF
	setvar 0x8004, 0x0003
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
	setvar 0x8004, 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	loadword 0x00, 0x02021C7C
	callstd 0x04
	waitmessage
	call EventScript_JP_0822B737
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B251
EventScript_JP_0822B23A: @ 0x0822B23A
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_0822B7F6
EventScript_JP_0822B251: @ 0x0822B251
	call 0x08221FB3
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	addvar 0x800D, 0x0001
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0002
	copyvar 0x8006, 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0007
	goto_if 0x01, EventScript_JP_0822B468
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
	loadword 0x00, gText_Rom_22B83B
	callstd 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	setvar 0x8004, 0x0003
	setvar 0x8005, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	playfanfare 0x0170
	waitfanfare
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_0822B2CA: @ 0x0822B2CA
	setvar 0x8004, 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	copyvar 0x400F, 0x800D
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B4A1
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_0822B7A1
	compare_var_to_value 0x800D, 0x0002
	call_if 0x01, EventScript_JP_0822B7A8
	compare_var_to_value 0x800D, 0x0003
	call_if 0x01, EventScript_JP_0822B7AF
	compare_var_to_value 0x800D, 0x0004
	call_if 0x01, EventScript_JP_0822B7B6
	compare_var_to_value 0x800D, 0x0005
	call_if 0x01, EventScript_JP_0822B7BD
	compare_var_to_value 0x800D, 0x0006
	call_if 0x01, EventScript_JP_0822B7C4
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B382
	multichoice 0x13, 0x04, 0x67, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B454
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3B8
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B382: @ 0x0822B382
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B454
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B3B8: @ 0x0822B3B8
	message gText_Rom_22B94A
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B2CA
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B3EA
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B3EA: @ 0x0822B3EA
	call 0x0821F8F5
	goto EventScript_JP_0822B2CA
EventScript_JP_0822B3F4: @ 0x0822B3F4
	loadword 0x00, gText_Rom_22B909
	callstd 0x05
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B2CA
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B47F
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B422: @ 0x0822B422
	message gText_Rom_22B91F
	waitmessage
	multichoicedefault 0x14, 0x08, 0x5E, 0x01, 0x00
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B2CA
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B23A
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B2CA
EventScript_JP_0822B454: @ 0x0822B454
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	closemessage
	goto EventScript_JP_0822B1FF
EventScript_JP_0822B468: @ 0x0822B468
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0000
	setvar 0x8006, 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	goto EventScript_JP_0822B7F6
EventScript_JP_0822B47F: @ 0x0822B47F
	message gText_Rom_22B931
	waitmessage
	setvar 0x8004, 0x0007
	setvar 0x8005, 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	playse 0x0037
	waitse
	fadescreen 0x01
	setvar 0x8004, 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	end
EventScript_JP_0822B4A1: @ 0x0822B4A1
	compare_var_to_value 0x4002, 0x0001
	goto_if 0x01, EventScript_JP_0822B4B9
	loadword 0x00, gText_Rom_22B969
	callstd 0x04
	setvar 0x4002, 0x0001
EventScript_JP_0822B4B9: @ 0x0822B4B9
	message gText_Rom_22B9A6
	waitmessage
	call 0x0821F921
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B510
	multichoice 0x13, 0x04, 0x67, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B546
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3B8
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B4B9
EventScript_JP_0822B510: @ 0x0822B510
	multichoice 0x14, 0x06, 0x68, 0x01
	copyvar 0x8000, 0x800D
	compare_var_to_value 0x8000, 0x0000
	goto_if 0x01, EventScript_JP_0822B546
	compare_var_to_value 0x8000, 0x0001
	goto_if 0x01, EventScript_JP_0822B3F4
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B422
	compare_var_to_value 0x8000, 0x007F
	goto_if 0x01, EventScript_JP_0822B4B9
EventScript_JP_0822B546: @ 0x0822B546
	call 0x08222264
	loadword 0x00, gText_Rom_22B9C3
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7D2 @ Movement_JP_0822B7D2
	setobjectxyperm 0x0002, 0x000F, 0x0001
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0002
	.byte 0x1A
	.byte 0x18
	setobjectxy 0x0002, 0x000D, 0x0001
	setobjectxyperm 0x0002, 0x000D, 0x0001
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
	copyvar 0x8000, 0x400F
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_0822B67A
	compare_var_to_value 0x8000, 0x0003
	goto_if 0x01, EventScript_JP_0822B5EA
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_0822B6A7
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B5EA
	loadword 0x00, gText_Rom_22B9E2
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_0822B5EA: @ 0x0822B5EA
	loadword 0x00, gText_Rom_22BA71
	callstd 0x04
	call EventScript_JP_0822B737
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B607
	goto EventScript_JP_0822B23A
EventScript_JP_0822B607: @ 0x0822B607
	setvar 0x8004, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	setvar 0x8004, 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B468
	loadword 0x00, gText_Rom_22BA8A
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D4 @ Movement_JP_0822B7D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7E7 @ Movement_JP_0822B7E7
	loadword 0x00, gText_Rom_22BAC7
	callstd 0x04
	playfanfare 0x01D2
	message gText_Rom_22BB02
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte Movement_08243639
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
	loadword 0x00, gText_Rom_22BB1E
	callstd 0x04
	goto EventScript_JP_0822B468
EventScript_JP_0822B67A: @ 0x0822B67A
	setvar 0x8004, 0x0001
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x05, EventScript_JP_0822B6A7
	loadword 0x00, gText_Rom_22BB57
	callstd 0x04
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
EventScript_JP_0822B6A7: @ 0x0822B6A7
	loadword 0x00, gText_Rom_22BBDF
	callstd 0x04
	call EventScript_JP_0822B737
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B6C4
	goto EventScript_JP_0822B23A
EventScript_JP_0822B6C4: @ 0x0822B6C4
	setvar 0x8004, 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00EA
	setvar 0x8004, 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	compare_var_to_value 0x800D, 0x0002
	goto_if 0x01, EventScript_JP_0822B468
	loadword 0x00, gText_Rom_22BBEF
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0822B7D4 @ Movement_JP_0822B7D4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0822B7E7 @ Movement_JP_0822B7E7
	loadword 0x00, gText_Rom_22BC48
	callstd 0x04
	playfanfare 0x01D2
	message gText_Rom_22BC8E
	waitmessage
	waitfanfare
	setvar 0x8004, 0x000D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte Movement_08243639
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
	loadword 0x00, gText_Rom_22BCA6
	callstd 0x04
	goto EventScript_JP_0822B468
EventScript_JP_0822B737: @ 0x0822B737
	closemessage
	setvar 0x8004, 0x0002
	setvar 0x8005, 0x0006
	setvar 0x8006, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	setvar 0x8004, 0x0004
	setvar 0x8005, 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	waitstate
	setvar 0x8004, 0x0012
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	setvar 0x8004, 0x0015
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	return
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
	call EventScript_JP_0822B173
	setvar 0x4001, 0x0001
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
	end
EventScript_JP_0822B7A1: @ 0x0822B7A1
	message gText_Rom_22B855
	waitmessage
	return
EventScript_JP_0822B7A8: @ 0x0822B7A8
	message gText_Rom_22B873
	waitmessage
	return
EventScript_JP_0822B7AF: @ 0x0822B7AF
	message gText_Rom_22B891
	waitmessage
	return
EventScript_JP_0822B7B6: @ 0x0822B7B6
	message gText_Rom_22B8AF
	waitmessage
	return
EventScript_JP_0822B7BD: @ 0x0822B7BD
	message gText_Rom_22B8CD
	waitmessage
	return
EventScript_JP_0822B7C4: @ 0x0822B7C4
	message gText_Rom_22B8EB
	waitmessage
	return
Movement_JP_0822B7CB: @ 0x0822B7CB
	@ object movement sequence
	set_invisible
	step_end
Movement_JP_0822B7CD: @ 0x0822B7CD
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end
Movement_JP_0822B7D4: @ 0x0822B7D4
	@ object movement sequence
	face_up
	step_end
Movement_JP_0822B7D6: @ 0x0822B7D6
	@ object movement sequence
	set_visible
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_0822B7DC: @ 0x0822B7DC
	@ object movement sequence
	walk_down
	walk_down
	walk_down
	walk_down
	face_left
	step_end
Movement_JP_0822B7E2: @ 0x0822B7E2
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	step_end
Movement_JP_0822B7E7: @ 0x0822B7E7
	@ object movement sequence
	face_down
	step_end
	.byte 0x55, 0x04, 0x04, 0x02, 0xFE, 0x55, 0x04, 0xFE, 0x04, 0x04, 0x04, 0x02, 0xFE
EventScript_JP_0822B7F6: @ 0x0822B7F6
	copyvar 0x800D, 0x40CE
	compare_var_to_value 0x800D, 0x0001
	goto_if 0x01, EventScript_JP_0822B810
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
	delay_16
	delay_16
	set_visible
	walk_down
	walk_right
	walk_down
	walk_in_place_fastest_left
	step_end
Movement_JP_0822B822: @ 0x0822B822
	@ object movement sequence
	set_visible
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_in_place_fastest_left
	delay_16
	step_end
Movement_JP_0822B82D: @ 0x0822B82D
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	set_visible
	walk_slow_down
	walk_slow_down
	walk_slow_down
	walk_slow_down
	face_left
	step_end

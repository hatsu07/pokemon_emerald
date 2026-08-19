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
	setflag 0x0878
	clearflag 0x009D
	clearflag 0x03C1
	setflag 0x0892
	clearflag 0x0063
	setvar 0x4093, 0x0000
	checkflag 0x00D1
	call_if 0x01, EventScript_JP_081DD9E2
	end
EventScript_JP_081DD9E2: @ 0x081DD9E2
	clearflag 0x0391
	setflag 0x0390
	setflag 0x005B
	return
.globl EventScript_JP_081DD9EC
EventScript_JP_081DD9EC: @ 0x081DD9EC
	loadword 0x00, gText_Rom_1DE4C1
	callstd 0x02
	end
.globl EventScript_JP_081DD9F5
EventScript_JP_081DD9F5: @ 0x081DD9F5
	loadword 0x00, gText_Rom_1DE509
	callstd 0x02
	end
.globl EventScript_JP_081DD9FE
EventScript_JP_081DD9FE: @ 0x081DD9FE
	loadword 0x00, gText_Rom_1DE53B
	callstd 0x02
	end
.globl EventScript_JP_081DDA07
EventScript_JP_081DDA07: @ 0x081DDA07
	loadword 0x00, gText_Rom_1DE578
	callstd 0x02
	end
.globl EventScript_JP_081DDA10
EventScript_JP_081DDA10: @ 0x081DDA10
	loadword 0x00, gText_Rom_1DE59B
	callstd 0x03
	end
.globl EventScript_JP_081DDA19
EventScript_JP_081DDA19: @ 0x081DDA19
	loadword 0x00, gText_Rom_1DE5BA
	callstd 0x03
	end
.globl EventScript_JP_081DDA22
EventScript_JP_081DDA22: @ 0x081DDA22
	loadword 0x00, gText_Rom_1DE5E4
	callstd 0x03
	end
.globl EventScript_JP_081DDA2B
EventScript_JP_081DDA2B: @ 0x081DDA2B
	loadword 0x00, gText_Rom_1DE608
	callstd 0x03
	end
.globl EventScript_JP_081DDA34
EventScript_JP_081DDA34: @ 0x081DDA34
	lock
	faceplayer
	checkflag 0x0062
	goto_if 0x01, EventScript_JP_081DDA4C
	loadword 0x00, gText_Rom_1DE62C
	callstd 0x04
	setflag 0x0062
	release
	end
EventScript_JP_081DDA4C: @ 0x081DDA4C
	loadword 0x00, gText_Rom_1DE6DE
	callstd 0x04
	release
	end
.globl EventScript_JP_081DDA56
EventScript_JP_081DDA56: @ 0x081DDA56
	lock
	faceplayer
	checkflag 0x011C
	goto_if 0x01, EventScript_JP_081DDA76
	loadword 0x00, gText_Rom_1DDE15
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_081DDA76: @ 0x081DDA76
	loadword 0x00, gText_Rom_1DDFD3
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
.globl EventScript_JP_081DDA8B
EventScript_JP_081DDA8B: @ 0x081DDA8B
	lockall
	checkflag 0x011C
	goto_if 0x01, EventScript_JP_081DDCC9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DDE51
	callstd 0x04
	loadword 0x00, gText_Rom_1DDE96
	callstd 0x04
	loadword 0x00, gText_Rom_1DDF00
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	playse 0x0015
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
	loadword 0x00, gText_Rom_1DDF37
	callstd 0x05
	goto EventScript_JP_081DDAE6
	.byte 0x02
EventScript_JP_081DDAE6: @ 0x081DDAE6
	compare_var_to_value 0x800D, 0x0001
	call_if 0x01, EventScript_JP_081DDC73
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, EventScript_JP_081DDCBC
	closemessage
	copyvar 0x8000, 0x800C
	compare_var_to_value 0x8000, 0x0002
	goto_if 0x01, EventScript_JP_081DDB19
	compare_var_to_value 0x8000, 0x0004
	goto_if 0x01, EventScript_JP_081DDB76
	end
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
	delay 0x001E
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
	loadword 0x00, gText_Rom_1DE142
	callstd 0x04
	closemessage
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
	goto EventScript_JP_081DDBCC
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
	delay 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081DDD30 @ Movement_JP_081DDD30
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DE142
	callstd 0x04
	closemessage
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
	goto EventScript_JP_081DDBCC
	.byte 0x02
EventScript_JP_081DDBCC: @ 0x081DDBCC
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0006
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0007
	clearflag 0x0326
	clearflag 0x0329
	setflag 0x00BE
	setvar 0x40F2, 0x0000
	setflag 0x0088
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081DDC2C
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081DDC3A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DE235
	callstd 0x04
	closemessage
	addvar 0x40D1, 0x0001
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_081DDC4F
	compare_var_to_value 0x800C, 0x0004
	call_if 0x01, EventScript_JP_081DDC61
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	releaseall
	end
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
	return
EventScript_JP_081DDC3A: @ 0x081DDC3A
	setobjectxyperm 0x000B, 0x000C, 0x000D
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
	return
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
	return
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
	return
EventScript_JP_081DDC73: @ 0x081DDC73
	loadword 0x00, gText_Rom_1DE040
	callstd 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0290
	.2byte 0x0000
	.4byte gText_Rom_1DE05D @ gText_Rom_1DE05D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DE085
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DE09E
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DE0F4
	callstd 0x04
	return
EventScript_JP_081DDCBC: @ 0x081DDCBC
	setflag 0x011C
	loadword 0x00, gText_Rom_1DDF95
	callstd 0x04
	release
	end
EventScript_JP_081DDCC9: @ 0x081DDCC9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_1DE01F
	callstd 0x05
	goto EventScript_JP_081DDAE6
	.byte 0x02
Movement_JP_081DDCE1: @ 0x081DDCE1
	@ object movement sequence
	walk_left
	walk_left
	walk_down
	walk_down
	walk_left
	step_end
Movement_JP_081DDCE7: @ 0x081DDCE7
	@ object movement sequence
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end
Movement_JP_081DDCED: @ 0x081DDCED
	@ object movement sequence
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end
Movement_JP_081DDCF9: @ 0x081DDCF9
	@ object movement sequence
	delay_16
	delay_16
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	delay_8
	step_end
Movement_JP_081DDD05: @ 0x081DDD05
	@ object movement sequence
	delay_16
	delay_8
	walk_in_place_fastest_left
	step_end
Movement_JP_081DDD09: @ 0x081DDD09
	@ object movement sequence
	delay_16
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081DDD0E: @ 0x081DDD0E
	@ object movement sequence
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081DDD11: @ 0x081DDD11
	@ object movement sequence
	delay_16
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081DDD15: @ 0x081DDD15
	@ object movement sequence
	delay_16
	walk_in_place_fastest_down
	step_end
Movement_JP_081DDD18: @ 0x081DDD18
	@ object movement sequence
	delay_16
	walk_in_place_fastest_left
	step_end
Movement_JP_081DDD1B: @ 0x081DDD1B
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end
Movement_JP_081DDD21: @ 0x081DDD21
	@ object movement sequence
	walk_left
	walk_down
	walk_down
	walk_left
	walk_left
	step_end
Movement_JP_081DDD27: @ 0x081DDD27
	@ object movement sequence
	delay_16
	delay_8
	delay_4
	walk_in_place_fastest_down
	step_end
Movement_JP_081DDD2C: @ 0x081DDD2C
	@ object movement sequence
	walk_right
	walk_right
	walk_in_place_fastest_up
	step_end
Movement_JP_081DDD30: @ 0x081DDD30
	@ object movement sequence
	walk_right
	walk_up
	step_end
Movement_JP_081DDD33: @ 0x081DDD33
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
Movement_JP_081DDD3C: @ 0x081DDD3C
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
Movement_JP_081DDD46: @ 0x081DDD46
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_in_place_fastest_up
	step_end
Movement_JP_081DDD52: @ 0x081DDD52
	@ object movement sequence
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end
Movement_JP_081DDD5E: @ 0x081DDD5E
	@ object movement sequence
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
Movement_JP_081DDD68: @ 0x081DDD68
	@ object movement sequence
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end
.globl EventScript_JP_081DDD73
EventScript_JP_081DDD73: @ 0x081DDD73
	lock
	faceplayer
	checkflag 0x00D1
	goto_if 0x01, EventScript_JP_081DDDE9
	compare_var_to_value 0x40BA, 0x0002
	goto_if 0x01, EventScript_JP_081DDDBD
	checkflag 0x00D0
	goto_if 0x01, EventScript_JP_081DDDB3
	loadword 0x00, gText_Rom_1DE2EE
	callstd 0x04
	setorcopyvar 0x8000, 0x010F
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	setflag 0x00D0
	loadword 0x00, gText_Rom_1DE3C9
	callstd 0x04
	release
	end
EventScript_JP_081DDDB3: @ 0x081DDDB3
	loadword 0x00, gText_Rom_1DE3C9
	callstd 0x04
	release
	end
EventScript_JP_081DDDBD: @ 0x081DDDBD
	loadword 0x00, gText_Rom_1DE432
	callstd 0x04
	setorcopyvar 0x8000, 0x0138
	setorcopyvar 0x8001, 0x0001
	callstd 0x00
	compare_var_to_value 0x800D, 0x0000
	goto_if 0x01, 0x082430E0
	setflag 0x00D1
	loadword 0x00, gText_Rom_1DE48F
	callstd 0x04
	release
	end
EventScript_JP_081DDDE9: @ 0x081DDDE9
	loadword 0x00, gText_Rom_1DE48F
	callstd 0x04
	release
	end

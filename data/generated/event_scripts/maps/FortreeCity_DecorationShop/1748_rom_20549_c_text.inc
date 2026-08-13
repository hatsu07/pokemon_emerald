	@ data/maps/FortreeCity_DecorationShop/scripts.inc:59 FortreeCity_DecorationShop_Text_BuyingDeskForDolls
	.globl gText_Rom_20549C
gText_Rom_20549C: @ 0x0820549C
	.string "すてきな つくえを かって そのうえに\nかわいい ぬいぐるみを ならべるんだ!\pそうしないと ひみつきちに おくとき\nつちで よごれたり トゲが ささって\lぬいぐるみが かわいそう だもん!$"
	.if (. - gText_Rom_20549C) > 0x60
	.error "gText_Rom_20549C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20549C) < 0x60
	.space 0x60 - (. - gText_Rom_20549C)
	.endif
	@ analyzed canonical ROM range 0x082054FC-0x082055D7
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
.globl EventScript_JP_082054FD
EventScript_JP_082054FD: @ 0x082054FD
	lockall
	checkflag 0x0864
	goto_if 0x01, EventScript_JP_0820555E
	checkflag 0x086D
	goto_if 0x01, EventScript_JP_08205537
	loadword 0x00, gText_Rom_2055D8
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_205647
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
EventScript_JP_08205537: @ 0x08205537
	loadword 0x00, gText_Rom_2056BC
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_20571C
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
EventScript_JP_0820555E: @ 0x0820555E
	loadword 0x00, gText_Rom_2057A5
	callstd 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_205812
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
.globl EventScript_JP_08205585
EventScript_JP_08205585: @ 0x08205585
	lockall
	playse 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_205699
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x082055CD @ Movement_JP_082055CD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x082055D2 @ Movement_JP_082055D2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x082055D4 @ Movement_JP_082055D4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
Movement_JP_082055CD: @ 0x082055CD
	@ object movement sequence
	face_right
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
Movement_JP_082055D2: @ 0x082055D2
	@ object movement sequence
	walk_up
	step_end
Movement_JP_082055D4: @ 0x082055D4
	@ object movement sequence
	face_down
	walk_down
	face_up
	step_end

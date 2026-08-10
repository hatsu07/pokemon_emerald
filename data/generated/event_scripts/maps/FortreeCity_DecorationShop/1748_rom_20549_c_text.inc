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
sAnalyzedEventData_082054FC: @ 0x082054FC
	.byte 0x00
EventScript_JP_082054FD: @ 0x082054FD
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820555E @ EventScript_JP_0820555E
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205537 @ EventScript_JP_08205537
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082055D8 @ gText_Rom_2055D8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205647 @ gText_Rom_205647
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08205537: @ 0x08205537
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082056BC @ gText_Rom_2056BC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820571C @ gText_Rom_20571C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820555E: @ 0x0820555E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082057A5 @ gText_Rom_2057A5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205812 @ gText_Rom_205812
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08205585: @ 0x08205585
	@ event command: lockall
	.byte 0x69
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205699 @ gText_Rom_205699
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
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
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_082055CD: @ 0x082055CD
	@ object movement sequence
	.byte 0x03 @ face_right
	.byte 0x40 @ lock_facing_direction
	.byte 0x0A @ walk_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_082055D2: @ 0x082055D2
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_082055D4: @ 0x082055D4
	@ object movement sequence
	.byte 0x00 @ face_down
	.byte 0x08 @ walk_down
	.byte 0x01 @ face_up
	.byte 0xFE @ step_end

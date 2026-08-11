	@ data/maps/LilycoveCity_ContestLobby/scripts.inc:1022 LilycoveCity_ContestLobby_Text_MadePokeblocksWithFamily
	.globl gText_Rom_20775B
gText_Rom_20775B: @ 0x0820775B
	.string "ママと パパと おねえちゃんと\n4にんで ポロックを つくったら\lすごく いいやつが できたんだ!\pきっと おおぜいで つくれば つくるほど\nなめらかで いい ポロックが できるんだよ!$"
	.if (. - gText_Rom_20775B) > 0x5e
	.error "gText_Rom_20775B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20775B) < 0x5e
	.space 0x5e - (. - gText_Rom_20775B)
	.endif
	@ analyzed canonical ROM range 0x082077B9-0x08207A82
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_082077B9: @ 0x082077B9
	.byte 0x00
EventScript_JP_082077BA: @ 0x082077BA
	loadword 0x00, gText_Rom_207A83
	callstd 0x02
	end
EventScript_JP_082077C3: @ 0x082077C3
	loadword 0x00, gText_Rom_207AD4
	callstd 0x02
	end
EventScript_JP_082077CC: @ 0x082077CC
	loadword 0x00, gText_Rom_207B41
	callstd 0x02
	end
EventScript_JP_082077D5: @ 0x082077D5
	loadword 0x00, gText_Rom_207B8A
	callstd 0x02
	end
EventScript_JP_082077DE: @ 0x082077DE
	lock
	faceplayer
	loadword 0x00, gText_Rom_207BBB
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082077F5: @ 0x082077F5
	lock
	faceplayer
	loadword 0x00, gText_Rom_207BF9
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820780C: @ 0x0820780C
	lock
	faceplayer
	loadword 0x00, gText_Rom_207C36
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207823: @ 0x08207823
	lock
	faceplayer
	loadword 0x00, gText_Rom_207C81
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
EventScript_JP_0820783A: @ 0x0820783A
	lock
	faceplayer
	loadword 0x00, gText_Rom_207CDC
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207851: @ 0x08207851
	lock
	faceplayer
	loadword 0x00, gText_Rom_207D12
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0009
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207868: @ 0x08207868
	loadword 0x00, gText_Rom_207D59
	callstd 0x03
	end
EventScript_JP_08207871: @ 0x08207871
	lock
	faceplayer
	loadword 0x00, gText_Rom_207D6A
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000C
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207888: @ 0x08207888
	lock
	faceplayer
	loadword 0x00, gText_Rom_207DB4
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0016
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820789F: @ 0x0820789F
	lock
	faceplayer
	loadword 0x00, gText_Rom_207DD6
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082078B6: @ 0x082078B6
	lock
	faceplayer
	loadword 0x00, gText_Rom_207E02
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082078CD: @ 0x082078CD
	lock
	faceplayer
	loadword 0x00, gText_Rom_207E29
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000E
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082078E4: @ 0x082078E4
	lock
	faceplayer
	loadword 0x00, gText_Rom_207E5B
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082078FB: @ 0x082078FB
	lock
	faceplayer
	loadword 0x00, gText_Rom_207E8D
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0010
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207912: @ 0x08207912
	lock
	faceplayer
	loadword 0x00, gText_Rom_207EDA
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0011
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207929: @ 0x08207929
	lock
	faceplayer
	loadword 0x00, gText_Rom_207F14
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0012
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207940: @ 0x08207940
	lock
	faceplayer
	loadword 0x00, gText_Rom_207F6B
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0013
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207957: @ 0x08207957
	lock
	faceplayer
	loadword 0x00, gText_Rom_207FA1
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0015
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820796E: @ 0x0820796E
	lock
	faceplayer
	loadword 0x00, gText_Rom_207FD1
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0014
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207985: @ 0x08207985
	lock
	faceplayer
	loadword 0x00, gText_Rom_20800D
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0017
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_0820799C: @ 0x0820799C
	lock
	faceplayer
	loadword 0x00, gText_Rom_20804C
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0018
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082079B3: @ 0x082079B3
	lock
	faceplayer
	loadword 0x00, gText_Rom_208086
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0019
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082079CA: @ 0x082079CA
	lock
	faceplayer
	loadword 0x00, gText_Rom_2080AB
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001A
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082079E1: @ 0x082079E1
	lock
	faceplayer
	loadword 0x00, gText_Rom_2080DF
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001B
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_082079F8: @ 0x082079F8
	lock
	faceplayer
	loadword 0x00, gText_Rom_208109
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001C
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207A0F: @ 0x08207A0F
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001D
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	loadword 0x00, gText_Rom_208151
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001D
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	delay 0x0019
	loadword 0x00, gText_Rom_208166
	callstd 0x04
	releaseall
	end
EventScript_JP_08207A3A: @ 0x08207A3A
	lock
	faceplayer
	loadword 0x00, gText_Rom_2081BD
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207A51: @ 0x08207A51
	lock
	faceplayer
	loadword 0x00, gText_Rom_208184
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x001E
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	release
	end
EventScript_JP_08207A68: @ 0x08207A68
	loadword 0x00, gText_Rom_2081E5
	callstd 0x03
	end
EventScript_JP_08207A71: @ 0x08207A71
	loadword 0x00, gText_Rom_208209
	callstd 0x03
	end
EventScript_JP_08207A7A: @ 0x08207A7A
	loadword 0x00, gText_Rom_20822A
	callstd 0x03
	end

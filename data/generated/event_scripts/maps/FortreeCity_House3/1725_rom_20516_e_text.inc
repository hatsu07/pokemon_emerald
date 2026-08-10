	@ data/maps/FortreeCity_House3/scripts.inc:15 FortreeCity_House3_Text_OhYouHavePokedex
	.globl gText_Rom_20516E
gText_Rom_20516E: @ 0x0820516E
	.string "きみの もっている それ なに?\p…… …… ……\pへー ポケモンずかん っていうんだ?\nすごいねえ!$"
	.if (. - gText_Rom_20516E) > 0x34
	.error "gText_Rom_20516E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20516E) < 0x34
	.space 0x34 - (. - gText_Rom_20516E)
	.endif
	@ analyzed canonical ROM range 0x082051A2-0x08205254
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_082051A2: @ 0x082051A2
EventScript_082051A2: @ 0x082051A2
	.byte 0x00
EventScript_JP_082051A3: @ 0x082051A3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205255 @ gText_Rom_205255
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_082051AC: @ 0x082051AC
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00DF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08205228 @ EventScript_JP_08205228
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00E0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082051FA @ EventScript_JP_082051FA
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00DE
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082051E6 @ EventScript_JP_082051E6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205293 @ gText_Rom_205293
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x00DE
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03A6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0820523C @ Movement_JP_0820523C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082051E6: @ 0x082051E6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082052A3 @ gText_Rom_2052A3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082051FA: @ 0x082051FA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082052BF @ gText_Rom_2052BF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00B9
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
	.2byte 0x00DF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08205228: @ 0x08205228
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205317 @ gText_Rom_205317
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0820523C: @ 0x0820523C
	@ object movement sequence
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x18 @ walk_fast_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
EventScript_JP_08205242: @ 0x08205242
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0135
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08205338 @ gText_Rom_205338
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02

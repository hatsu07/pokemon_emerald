	@ data/maps/MossdeepCity_House1/scripts.inc:33 MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes
	.globl gText_Rom_20C3B0
gText_Rom_20C3B0: @ 0x0820C3B0
	.string "だんなったら みただけで\nポケモンが すきな ポロック わかるのよ$"
	.if (. - gText_Rom_20C3B0) > 0x22
	.error "gText_Rom_20C3B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C3B0) < 0x22
	.space 0x22 - (. - gText_Rom_20C3B0)
	.endif
	@ analyzed canonical ROM range 0x0820C3D2-0x0820C439
	@ semantic recovery: script_data; byte-verified against linked ROM
sAnalyzedEventData_0820C3D2: @ 0x0820C3D2
EventScript_0820C3D2: @ 0x0820C3D2
	.byte 0x00
EventScript_JP_0820C3D3: @ 0x0820C3D3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C43A @ gText_Rom_20C43A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820C3DC: @ 0x0820C3DC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820C46D @ gText_Rom_20C46D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820C3E5: @ 0x0820C3E5
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
	.4byte 0x0820C4A7 @ gText_Rom_20C4A7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x00E0
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03A5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820C418 @ EventScript_JP_0820C418
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820C423 @ EventScript_JP_0820C423
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820C418: @ 0x0820C418
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0820C42E @ Movement_JP_0820C42E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_0820C423: @ 0x0820C423
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0820C435 @ Movement_JP_0820C435
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_0820C42E: @ 0x0820C42E
	@ object movement sequence
	.byte 0x18 @ walk_fast_right
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x17 @ walk_fast_left
	.byte 0x15 @ walk_fast_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_0820C435: @ 0x0820C435
	@ object movement sequence
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end

	@ data/maps/MossdeepCity_House1/scripts.inc:33 MossdeepCity_House1_Text_HusbandCanTellPokeblockMonLikes
	.globl gText_Rom_20C3B0
gText_Rom_20C3B0: @ 0x0820C3B0
	.string "だんなったら みただけで\nポケモンが すきな ポロック わかるのよ{EOS}"
	.if (. - gText_Rom_20C3B0) > 0x22
	.error "gText_Rom_20C3B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20C3B0) < 0x22
	.space 0x22 - (. - gText_Rom_20C3B0)
	.endif
	@ analyzed canonical ROM range 0x0820C3D2-0x0820C439
	@ semantic recovery: script_data; byte-verified against linked ROM
EventScript_0820C3D2: @ 0x0820C3D2
	.byte 0x00
.globl EventScript_JP_0820C3D3
EventScript_JP_0820C3D3: @ 0x0820C3D3
	loadword 0x00, gText_Rom_20C43A
	callstd 0x02
	end
.globl EventScript_JP_0820C3DC
EventScript_JP_0820C3DC: @ 0x0820C3DC
	loadword 0x00, gText_Rom_20C46D
	callstd 0x02
	end
.globl EventScript_JP_0820C3E5
EventScript_JP_0820C3E5: @ 0x0820C3E5
	lock
	faceplayer
	waitse
	playmoncry 0x0135, 0x0000
	loadword 0x00, gText_Rom_20C4A7
	callstd 0x04
	waitmoncry
	closemessage
	setflag 0x00E0
	clearflag 0x03A5
	compare_var_to_value 0x800C, 0x0002
	call_if 0x01, EventScript_JP_0820C418
	compare_var_to_value 0x800C, 0x0003
	call_if 0x01, EventScript_JP_0820C423
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	release
	end
EventScript_JP_0820C418: @ 0x0820C418
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0820C42E @ Movement_JP_0820C42E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
EventScript_JP_0820C423: @ 0x0820C423
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0820C435 @ Movement_JP_0820C435
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	return
Movement_JP_0820C42E: @ 0x0820C42E
	@ object movement sequence
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	delay_8
	step_end
Movement_JP_0820C435: @ 0x0820C435
	@ object movement sequence
	walk_fast_down
	walk_fast_down
	walk_fast_down
	delay_8
	step_end

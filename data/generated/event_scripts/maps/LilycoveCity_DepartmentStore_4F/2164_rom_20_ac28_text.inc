	@ data/maps/LilycoveCity_DepartmentStore_4F/scripts.inc:58 LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves
	.globl gText_Rom_20AC28
gText_Rom_20AC28: @ 0x0820AC28
	.string "わざマシン ぜんぶ ほしいけど\nポケモン 4つしか わざ おぼえないもんな$"
	.if (. - gText_Rom_20AC28) > 0x26
	.error "gText_Rom_20AC28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20AC28) < 0x26
	.space 0x26 - (. - gText_Rom_20AC28)
	.endif
	@ analyzed canonical ROM range 0x0820AC4E-0x0820AD98
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_0820AC4E: @ 0x0820AC4E
	@ map script dispatch table
	.byte 0x04
	.4byte MapScriptTable_JP_0820AC54
	.byte 0
MapScriptTable_JP_0820AC54: @ 0x0820AC54
	@ conditional map script table
	.2byte 0x405E, 0x0001
	.4byte EventScript_JP_0820AC6E
	.2byte 0x405E, 0x0002
	.4byte EventScript_JP_0820AC6E
	.2byte 0x405E, 0x0003
	.4byte EventScript_JP_0820AC6E
	.2byte 0
EventScript_JP_0820AC6E: @ 0x0820AC6E
	setobjectxy 0x0007, 0x0010, 0x0002
	turnobject 0x0007, 0x02
	end
.globl EventScript_JP_0820AC7A
EventScript_JP_0820AC7A: @ 0x0820AC7A
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820AC94
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x4C, 0x00, 0x4D, 0x00, 0x4E, 0x00, 0x53, 0x00, 0x5B, 0x00, 0x5C, 0x00, 0x5D
	.byte 0x00, 0x5E, 0x00, 0x5F, 0x00, 0x60, 0x00, 0x61, 0x00, 0x62, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820ACB0
EventScript_JP_0820ACB0: @ 0x0820ACB0
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820ACC8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x65, 0x00, 0x66, 0x00, 0x68, 0x00, 0x69, 0x00, 0x6A, 0x00, 0x6B, 0x00, 0x6C, 0x00, 0x6D
	.byte 0x00, 0x6E, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820ACDE
EventScript_JP_0820ACDE: @ 0x0820ACDE
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820ACF8
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x42, 0x00, 0x43, 0x00, 0x44, 0x00, 0x45, 0x00, 0x46, 0x00, 0x47, 0x00, 0x48
	.byte 0x00, 0x49, 0x00, 0x4A, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AD0E
EventScript_JP_0820AD0E: @ 0x0820AD0E
	lock
	faceplayer
	message gText_Rom_24390F
	waitmessage
	pokemartdecoration2 0x0820AD28
	loadword 0x00, gText_Rom_243920
	callstd 0x04
	release
	end
	.byte 0x00, 0x00, 0x00, 0x3B, 0x00, 0x3C, 0x00, 0x3D, 0x00, 0x3E, 0x00, 0x3F, 0x00, 0x40, 0x00, 0x41
	.byte 0x00, 0x30, 0x00, 0x31, 0x00, 0x32, 0x00, 0x00, 0x00, 0x6C, 0x02
.globl EventScript_JP_0820AD40
EventScript_JP_0820AD40: @ 0x0820AD40
	loadword 0x00, gText_Rom_20AD99
	callstd 0x02
	end
.globl EventScript_JP_0820AD49
EventScript_JP_0820AD49: @ 0x0820AD49
	lockall
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	compare_var_to_value 0x405E, 0x0000
	goto_if 0x01, EventScript_JP_0820AD70
	compare_var_to_value 0x405E, 0x0004
	goto_if 0x04, EventScript_JP_0820AD70
	goto EventScript_JP_0820AD7B
	.byte 0x02
EventScript_JP_0820AD70: @ 0x0820AD70
	loadword 0x00, gText_Rom_20ADFE
	callstd 0x04
	closemessage
	releaseall
	end
EventScript_JP_0820AD7B: @ 0x0820AD7B
	loadword 0x00, gText_Rom_20AE30
	callstd 0x04
	closemessage
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	releaseall
	end
.globl EventScript_JP_0820AD90
EventScript_JP_0820AD90: @ 0x0820AD90
	loadword 0x00, gText_Rom_20ADD5
	callstd 0x02
	end

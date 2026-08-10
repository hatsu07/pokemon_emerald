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
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0007
	.2byte 0x0010
	.2byte 0x0002
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0007
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AC7A: @ 0x0820AC7A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration2
	.byte 0x88
	.4byte 0x0820AC94
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00, 0x00, 0x4C, 0x00, 0x4D, 0x00, 0x4E, 0x00, 0x53, 0x00, 0x5B, 0x00, 0x5C, 0x00, 0x5D
	.byte 0x00, 0x5E, 0x00, 0x5F, 0x00, 0x60, 0x00, 0x61, 0x00, 0x62, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820ACB0: @ 0x0820ACB0
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration2
	.byte 0x88
	.4byte 0x0820ACC8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x65, 0x00, 0x66, 0x00, 0x68, 0x00, 0x69, 0x00, 0x6A, 0x00, 0x6B, 0x00, 0x6C, 0x00, 0x6D
	.byte 0x00, 0x6E, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820ACDE: @ 0x0820ACDE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration2
	.byte 0x88
	.4byte 0x0820ACF8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00, 0x00, 0x42, 0x00, 0x43, 0x00, 0x44, 0x00, 0x45, 0x00, 0x46, 0x00, 0x47, 0x00, 0x48
	.byte 0x00, 0x49, 0x00, 0x4A, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820AD0E: @ 0x0820AD0E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemartdecoration2
	.byte 0x88
	.4byte 0x0820AD28
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243920 @ gText_Rom_243920
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x00, 0x00, 0x00, 0x3B, 0x00, 0x3C, 0x00, 0x3D, 0x00, 0x3E, 0x00, 0x3F, 0x00, 0x40, 0x00, 0x41
	.byte 0x00, 0x30, 0x00, 0x31, 0x00, 0x32, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_0820AD40: @ 0x0820AD40
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820AD99 @ gText_Rom_20AD99
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820AD49: @ 0x0820AD49
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820AD70 @ EventScript_JP_0820AD70
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405E
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820AD70 @ EventScript_JP_0820AD70
	@ event command: goto
	.byte 0x05
	.4byte 0x0820AD7B @ EventScript_JP_0820AD7B
	.byte 0x02
EventScript_JP_0820AD70: @ 0x0820AD70
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820ADFE @ gText_Rom_20ADFE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820AD7B: @ 0x0820AD7B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820AE30 @ gText_Rom_20AE30
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820AD90: @ 0x0820AD90
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820ADD5 @ gText_Rom_20ADD5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02

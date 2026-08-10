	@ data/maps/LilycoveCity_LilycoveMuseum_1F/scripts.inc:230 LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination
	.globl gText_Rom_206184
gText_Rom_206184: @ 0x08206184
	.string "この びじゅつかんも すっかり ミナモの\n……いや ホウエンちほうの\lかんこう めいしょに なったねえ!\pきいた はなしだと\nひとりの トレーナーが 2かいの えを\lそろえて くれた らしいよ!$"
	.if (. - gText_Rom_206184) > 0x62
	.error "gText_Rom_206184 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206184) < 0x62
	.space 0x62 - (. - gText_Rom_206184)
	.endif
	@ analyzed canonical ROM range 0x082061E6-0x08206496
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_082061E6: @ 0x082061E6
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_082061F1
	.byte 0x02
	.4byte MapScriptTable_JP_082062AA
	.byte 0
EventScript_JP_082061F1: @ 0x082061F1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206237 @ EventScript_JP_08206237
	@ event command: goto
	.byte 0x05
	.4byte 0x08206200 @ EventScript_JP_08206200
	.byte 0x02
EventScript_JP_08206200: @ 0x08206200
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820624F @ EventScript_JP_0820624F
	@ event command: goto
	.byte 0x05
	.4byte 0x0820620F @ EventScript_JP_0820620F
	.byte 0x02
EventScript_JP_0820620F: @ 0x0820620F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206267 @ EventScript_JP_08206267
	@ event command: goto
	.byte 0x05
	.4byte 0x0820621E @ EventScript_JP_0820621E
	.byte 0x02
EventScript_JP_0820621E: @ 0x0820621E
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820627F @ EventScript_JP_0820627F
	@ event command: goto
	.byte 0x05
	.4byte 0x0820622D @ EventScript_JP_0820622D
	.byte 0x02
EventScript_JP_0820622D: @ 0x0820622D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206297 @ EventScript_JP_08206297
	@ event command: end
	.byte 0x02
EventScript_JP_08206237: @ 0x08206237
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000A
	.2byte 0x0006
	.2byte 0x025E
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000B
	.2byte 0x0006
	.2byte 0x025F
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x08206200 @ EventScript_JP_08206200
	.byte 0x02
EventScript_JP_0820624F: @ 0x0820624F
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0012
	.2byte 0x0006
	.2byte 0x025C
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0013
	.2byte 0x0006
	.2byte 0x025D
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x0820620F @ EventScript_JP_0820620F
	.byte 0x02
EventScript_JP_08206267: @ 0x08206267
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000E
	.2byte 0x000A
	.2byte 0x0260
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x000F
	.2byte 0x000A
	.2byte 0x0261
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x0820621E @ EventScript_JP_0820621E
	.byte 0x02
EventScript_JP_0820627F: @ 0x0820627F
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x000A
	.2byte 0x025A
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x000A
	.2byte 0x025B
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x0820622D @ EventScript_JP_0820622D
	.byte 0x02
EventScript_JP_08206297: @ 0x08206297
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0006
	.2byte 0x0262
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0003
	.2byte 0x0006
	.2byte 0x0263
	.2byte 0x0001
	@ event command: end
	.byte 0x02
MapScriptTable_JP_082062AA: @ 0x082062AA
	@ conditional map script table
	.2byte 0x4094, 0x0000
	.4byte EventScript_JP_082062B4
	.2byte 0
EventScript_JP_082062B4: @ 0x082062B4
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820630D @ Movement_JP_0820630D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206497 @ gText_Rom_206497
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820630F @ Movement_JP_0820630F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820630F @ Movement_JP_0820630F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082064A9 @ gText_Rom_2064A9
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0820630D @ Movement_JP_0820630D
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820655D @ gText_Rom_20655D
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: copyvar
	.byte 0x19
	.2byte 0x4094
	.2byte 0x0001
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_0820630D: @ 0x0820630D
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_0820630F: @ 0x0820630F
	@ object movement sequence
	.byte 0x01 @ face_up
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
EventScript_JP_08206312: @ 0x08206312
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00EC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082063CD @ EventScript_JP_082063CD
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x8004
	.2byte 0x0089
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206366 @ EventScript_JP_08206366
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206366 @ EventScript_JP_08206366
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206366 @ EventScript_JP_08206366
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206366 @ EventScript_JP_08206366
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820636F @ EventScript_JP_0820636F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206607 @ gText_Rom_206607
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206366: @ 0x08206366
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206636 @ gText_Rom_206636
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820636F: @ 0x0820636F
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
	.4byte 0x08206681 @ gText_Rom_206681
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0820630F @ Movement_JP_0820630F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820668E @ gText_Rom_20668E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08206396 @ EventScript_JP_08206396
	.byte 0x02
EventScript_JP_08206396: @ 0x08206396
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820670F @ gText_Rom_20670F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x002C
	@ event command: callstd
	.byte 0x09
	.byte 0x07
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082063BD @ EventScript_JP_082063BD
	@ event command: setflag
	.byte 0x29
	.2byte 0x00EC
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082063BD: @ 0x082063BD
	@ event command: call
	.byte 0x04
	.4byte 0x082430FD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206729 @ gText_Rom_206729
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082063CD: @ 0x082063CD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206743 @ gText_Rom_206743
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082063D7: @ 0x082063D7
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820646D @ EventScript_JP_0820646D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206788 @ gText_Rom_206788
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_082063EA: @ 0x082063EA
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206489 @ EventScript_JP_08206489
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820679E @ gText_Rom_20679E
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_082063FD: @ 0x082063FD
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08206451 @ EventScript_JP_08206451
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067C7 @ gText_Rom_2067C7
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08206410: @ 0x08206410
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820645F @ EventScript_JP_0820645F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067B3 @ gText_Rom_2067B3
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08206423: @ 0x08206423
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820647B @ EventScript_JP_0820647B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067DB @ gText_Rom_2067DB
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_08206436: @ 0x08206436
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206803 @ gText_Rom_206803
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820643F: @ 0x0820643F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820684E @ gText_Rom_20684E
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206448: @ 0x08206448
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08206898 @ gText_Rom_206898
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08206451: @ 0x08206451
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067F2 @ gText_Rom_2067F2
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x09
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820645F: @ 0x0820645F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067F2 @ gText_Rom_2067F2
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x0A
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820646D: @ 0x0820646D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067F2 @ gText_Rom_2067F2
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x0B
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_0820647B: @ 0x0820647B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067F2 @ gText_Rom_2067F2
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x0C
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08206489: @ 0x08206489
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082067F2 @ gText_Rom_2067F2
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: drawcontestwinner
	.byte 0x77
	.byte 0x0D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02

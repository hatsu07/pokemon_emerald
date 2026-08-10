	@ data/maps/LittlerootTown_MaysHouse_2F/scripts.inc:404 RivalsHouse_2F_Text_BrendanWhereShouldIGoNext
	.globl gText_Rom_1F11E3
gText_Rom_1F11E3: @ 0x081F11E3
	.string "ユウキ『こんどは どこで\nポケモン つかまえるか なやむな……\pもし ポケモン つかまえているとき\n{PLAYER}と であったら\lしょうぶ してやろうか?$"
	.if (. - gText_Rom_1F11E3) > 0x49
	.error "gText_Rom_1F11E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1F11E3) < 0x49
	.space 0x49 - (. - gText_Rom_1F11E3)
	.endif
	@ Replaced baserom.gba range: offset=0x1F122C, size=0x845
	@ semantic recovery: script_data; byte-verified against linked ROM
MapScripts_JP_081F122C: @ 0x081F122C
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F123C
	.byte 0x04
	.4byte MapScriptTable_JP_081F12A1
	.byte 0x02
	.4byte MapScriptTable_JP_081F1354
	.byte 0
EventScript_JP_081F123C: @ 0x081F123C
	@ event command: call
	.byte 0x04
	.4byte 0x08242F63
	@ event command: call
	.byte 0x04
	.4byte 0x08243139
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F1292 @ EventScript_JP_081F1292
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F128E @ EventScript_JP_081F128E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1268 @ EventScript_JP_081F1268
	@ event command: end
	.byte 0x02
EventScript_JP_081F1268: @ 0x081F1268
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x014E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1284 @ EventScript_JP_081F1284
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x03
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x000A
	@ event command: end
	.byte 0x02
EventScript_JP_081F1284: @ 0x081F1284
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D3
	.2byte 0x0004
	@ event command: goto
	.byte 0x05
	.4byte 0x081F128E @ EventScript_JP_081F128E
EventScript_JP_081F128E: @ 0x081F128E
	@ event command: setmaplayoutindex
	.byte 0xA7
	.2byte 0x01B0
	@ event command: end
	.byte 0x02
EventScript_JP_081F1292: @ 0x081F1292
	@ event command: setmaplayoutindex
	.byte 0xA7
	.2byte 0x01B0
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x03
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x000A
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F12A1: @ 0x081F12A1
	@ conditional map script table
	.2byte 0x4084, 0x0002
	.4byte EventScript_JP_081F12DB
	.2byte 0x40D3, 0x0001
	.4byte EventScript_JP_081F12E0
	.2byte 0x40D3, 0x0002
	.4byte EventScript_JP_081F12E0
	.2byte 0x40D3, 0x0003
	.4byte EventScript_JP_081F130C
	.2byte 0x40D3, 0x0006
	.4byte EventScript_JP_081F130C
	.2byte 0x40D3, 0x0004
	.4byte EventScript_JP_081F1310
	.2byte 0x40D3, 0x0005
	.4byte EventScript_JP_081F1310
	.2byte 0
EventScript_JP_081F12DB: @ 0x081F12DB
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F12E0: @ 0x081F12E0
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0003
	.byte 0x02
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x0005
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0002
	.byte 0x01
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0002
	.2byte 0x0006
	.2byte 0x0004
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0001
	.byte 0x04
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0001
	.2byte 0x000A
	.2byte 0x000A
	@ event command: end
	.byte 0x02
EventScript_JP_081F130C: @ 0x081F130C
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: end
	.byte 0x02
EventScript_JP_081F1310: @ 0x081F1310
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	@ event command: addobject
	.byte 0x55
	.2byte 0x0005
	@ event command: addobject
	.byte 0x55
	.2byte 0x0006
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0004
	.byte 0x01
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0004
	.2byte 0x0008
	.2byte 0x0004
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0005
	.byte 0x01
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0005
	.2byte 0x0009
	.2byte 0x0004
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0006
	.byte 0x01
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0006
	.2byte 0x000A
	.2byte 0x0004
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0002
	.byte 0x01
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0002
	.2byte 0x0006
	.2byte 0x0004
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0003
	.byte 0x04
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0003
	.2byte 0x0005
	.2byte 0x0005
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F1354: @ 0x081F1354
	@ conditional map script table
	.2byte 0x4084, 0x0002
	.4byte EventScript_JP_081F1376
	.2byte 0x4084, 0x0004
	.4byte EventScript_JP_081F1402
	.2byte 0x40D3, 0x0001
	.4byte EventScript_JP_081F141B
	.2byte 0x40D3, 0x0004
	.4byte EventScript_JP_081F14FD
	.2byte 0
EventScript_JP_081F1376: @ 0x081F1376
	@ event command: lockall
	.byte 0x69
	@ event command: bufferleadmonspeciesname
	.byte 0x7E
	.byte 0x00
	@ event command: message
	.byte 0x67
	.4byte 0x081F1BAD @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_LikeYouToHavePokemon
	@ event command: waitmessage
	.byte 0x66
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: waitfanfare
	.byte 0x32
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1C81 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_WhyNotGiveNicknameToMon
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F13A2 @ EventScript_JP_081F13A2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F13B2 @ EventScript_JP_081F13B2
	@ event command: end
	.byte 0x02
EventScript_JP_081F13A2: @ 0x081F13A2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x081F13B2 @ EventScript_JP_081F13B2
	.byte 0x02
EventScript_JP_081F13B2: @ 0x081F13B2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1CA8 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MightBeGoodIdeaToGoSeeRival
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F13D1 @ EventScript_JP_081F13D1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F13E3 @ EventScript_JP_081F13E3
	@ event command: end
	.byte 0x02
EventScript_JP_081F13D1: @ 0x081F13D1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1D1C @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GetRivalToTeachYou
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03DF
	@ event command: setvar
	.byte 0x16
	.2byte 0x4084
	.2byte 0x0003
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F13E3: @ 0x081F13E3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1D52 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_DontBeThatWay
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F13D1 @ EventScript_JP_081F13D1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F13E3 @ EventScript_JP_081F13E3
	@ event command: end
	.byte 0x02
EventScript_JP_081F1402: @ 0x081F1402
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F1413 @ Movement_JP_081F1413
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1893 @ EventScript_JP_081F1893
	.byte 0x02
Movement_JP_081F1413: @ 0x081F1413
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081F141B: @ 0x081F141B
	@ event command: lockall
	.byte 0x69
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F217C @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OtherRegionsUpgradeToNational
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F14E1 @ Movement_JP_081F14E1
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0024
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F14CD @ EventScript_JP_081F14CD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F14D7 @ EventScript_JP_081F14D7
	@ event command: playse
	.byte 0x2F
	.2byte 0x0004
	@ event command: waitse
	.byte 0x30
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F14F3 @ Movement_JP_081F14F3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F22FE @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OkayAllDone
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x081F230C @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PokedexUpgradedToNational
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setflag
	.byte 0x29
	.2byte 0x0896
	@ event command: special
	.byte 0x25
	.2byte 0x01F0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F232E @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x031B
	@ event command: setflag
	.byte 0x29
	.2byte 0x031A
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D3
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x40F5
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0072
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F14CD: @ 0x081F14CD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F226E @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayUpgradeSoCool
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: return
	.byte 0x03
EventScript_JP_081F14D7: @ 0x081F14D7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F22B6 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanYouCanThankMe
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: return
	.byte 0x03
Movement_JP_081F14E1: @ 0x081F14E1
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F14F3: @ 0x081F14F3
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
EventScript_JP_081F14FD: @ 0x081F14FD
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F1517 @ Movement_JP_081F1517
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2402 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CompletedDexChoosePokemon
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D3
	.2byte 0x0005
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081F1517: @ 0x081F1517
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081F151F: @ 0x081F151F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4084
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F154C @ EventScript_JP_081F154C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0058
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1542 @ EventScript_JP_081F1542
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1A7D @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchAwayOnFieldwork
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0058
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1542: @ 0x081F1542
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1B1D @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchIsntOneForDeskWork
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F154C: @ 0x081F154C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1B5B @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchEnjoysRivalsHelpToo
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1556: @ 0x081F1556
	@ event command: release
	.byte 0x6C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F15F2 @ EventScript_JP_081F15F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: drawmonpic
	.byte 0x75
	.2byte 0x009B
	.byte 0x0A
	.byte 0x03
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2532 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeCyndaquil
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F15FC @ EventScript_JP_081F15FC
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1607 @ EventScript_JP_081F1607
	.byte 0x02
EventScript_JP_081F158A: @ 0x081F158A
	@ event command: release
	.byte 0x6C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F15F2 @ EventScript_JP_081F15F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: drawmonpic
	.byte 0x75
	.2byte 0x009E
	.byte 0x0A
	.byte 0x03
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F256E @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeTotodile
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F15FC @ EventScript_JP_081F15FC
	@ event command: goto
	.byte 0x05
	.4byte 0x081F16A8 @ EventScript_JP_081F16A8
	.byte 0x02
EventScript_JP_081F15BE: @ 0x081F15BE
	@ event command: release
	.byte 0x6C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F15F2 @ EventScript_JP_081F15F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: drawmonpic
	.byte 0x75
	.2byte 0x0098
	.byte 0x0A
	.byte 0x03
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F25A6 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_YoullTakeChikorita
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F15FC @ EventScript_JP_081F15FC
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1749 @ EventScript_JP_081F1749
	.byte 0x02
EventScript_JP_081F15F2: @ 0x081F15F2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F26B5 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BetterLeaveOthersAlone
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F15FC: @ 0x081F15FC
	@ event command: erasemonpic
	.byte 0x76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F25DC @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_TakeYourTimeAllInvaluable
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F1607: @ 0x081F1607
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x009B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x009B
	@ event command: givemon
	.byte 0x79
	.2byte 0x009B
	.byte 0x05
	.2byte 0x0000
	.4byte 0x00000000 @ NO
	.4byte 0x00000000 @ NO
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F163C @ EventScript_JP_081F163C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1667 @ EventScript_JP_081F1667
	@ event command: erasemonpic
	.byte 0x76
	@ event command: goto
	.byte 0x05
	.4byte 0x0824423B
	.byte 0x02
EventScript_JP_081F163C: @ 0x081F163C
	@ event command: call
	.byte 0x04
	.4byte 0x081F17EA @ EventScript_JP_081F17EA
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1698 @ EventScript_JP_081F1698
	@ event command: call
	.byte 0x04
	.4byte 0x082441B5
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1698 @ EventScript_JP_081F1698
	.byte 0x02
EventScript_JP_081F1667: @ 0x081F1667
	@ event command: call
	.byte 0x04
	.4byte 0x081F17EA @ EventScript_JP_081F17EA
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F168D @ EventScript_JP_081F168D
	@ event command: call
	.byte 0x04
	.4byte 0x082441C1
	@ event command: goto
	.byte 0x05
	.4byte 0x081F168D @ EventScript_JP_081F168D
	.byte 0x02
EventScript_JP_081F168D: @ 0x081F168D
	@ event command: call
	.byte 0x04
	.4byte 0x082441CA
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1698 @ EventScript_JP_081F1698
	.byte 0x02
EventScript_JP_081F1698: @ 0x081F1698
	@ event command: erasemonpic
	.byte 0x76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2655 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F16A8: @ 0x081F16A8
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x009E
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x009E
	@ event command: givemon
	.byte 0x79
	.2byte 0x009E
	.byte 0x05
	.2byte 0x0000
	.4byte 0x00000000 @ NO
	.4byte 0x00000000 @ NO
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F16DD @ EventScript_JP_081F16DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1708 @ EventScript_JP_081F1708
	@ event command: erasemonpic
	.byte 0x76
	@ event command: goto
	.byte 0x05
	.4byte 0x0824423B
	.byte 0x02
EventScript_JP_081F16DD: @ 0x081F16DD
	@ event command: call
	.byte 0x04
	.4byte 0x081F17EA @ EventScript_JP_081F17EA
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0005
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1739 @ EventScript_JP_081F1739
	@ event command: call
	.byte 0x04
	.4byte 0x082441B5
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1739 @ EventScript_JP_081F1739
	.byte 0x02
EventScript_JP_081F1708: @ 0x081F1708
	@ event command: call
	.byte 0x04
	.4byte 0x081F17EA @ EventScript_JP_081F17EA
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0005
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F172E @ EventScript_JP_081F172E
	@ event command: call
	.byte 0x04
	.4byte 0x082441C1
	@ event command: goto
	.byte 0x05
	.4byte 0x081F172E @ EventScript_JP_081F172E
	.byte 0x02
EventScript_JP_081F172E: @ 0x081F172E
	@ event command: call
	.byte 0x04
	.4byte 0x082441CA
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1739 @ EventScript_JP_081F1739
	.byte 0x02
EventScript_JP_081F1739: @ 0x081F1739
	@ event command: erasemonpic
	.byte 0x76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2655 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F1749: @ 0x081F1749
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x0098
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0098
	@ event command: givemon
	.byte 0x79
	.2byte 0x0098
	.byte 0x05
	.2byte 0x0000
	.4byte 0x00000000 @ NO
	.4byte 0x00000000 @ NO
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F177E @ EventScript_JP_081F177E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F17A9 @ EventScript_JP_081F17A9
	@ event command: erasemonpic
	.byte 0x76
	@ event command: goto
	.byte 0x05
	.4byte 0x0824423B
	.byte 0x02
EventScript_JP_081F177E: @ 0x081F177E
	@ event command: call
	.byte 0x04
	.4byte 0x081F17EA @ EventScript_JP_081F17EA
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0006
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F17DA @ EventScript_JP_081F17DA
	@ event command: call
	.byte 0x04
	.4byte 0x082441B5
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x081F17DA @ EventScript_JP_081F17DA
	.byte 0x02
EventScript_JP_081F17A9: @ 0x081F17A9
	@ event command: call
	.byte 0x04
	.4byte 0x081F17EA @ EventScript_JP_081F17EA
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0006
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F17CF @ EventScript_JP_081F17CF
	@ event command: call
	.byte 0x04
	.4byte 0x082441C1
	@ event command: goto
	.byte 0x05
	.4byte 0x081F17CF @ EventScript_JP_081F17CF
	.byte 0x02
EventScript_JP_081F17CF: @ 0x081F17CF
	@ event command: call
	.byte 0x04
	.4byte 0x082441CA
	@ event command: goto
	.byte 0x05
	.4byte 0x081F17DA @ EventScript_JP_081F17DA
	.byte 0x02
EventScript_JP_081F17DA: @ 0x081F17DA
	@ event command: erasemonpic
	.byte 0x76
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2655 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F17EA: @ 0x081F17EA
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x081F2624 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedJohtoStarter
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: return
	.byte 0x03
EventScript_JP_081F17F5: @ 0x081F17F5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F1825 @ EventScript_JP_081F1825
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F182F @ EventScript_JP_081F182F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x012F
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F1839 @ EventScript_JP_081F1839
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0119
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F186D @ EventScript_JP_081F186D
	@ event command: goto
	.byte 0x05
	.4byte 0x081F1839 @ EventScript_JP_081F1839
	.byte 0x02
EventScript_JP_081F1825: @ 0x081F1825
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F24F0 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CanHaveAnyOneOfRarePokemon
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F182F: @ 0x081F182F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F232E @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_GrassyPatchWaiting2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1839: @ 0x081F1839
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0380
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082431CD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082431CD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x082431CD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4084
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F195F @ EventScript_JP_081F195F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1D72 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchRivalGoneHome
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F186D: @ 0x081F186D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826C1AF @ gText_Rom_26C1AF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0826C23E @ gText_Rom_26C23E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x0119
	@ event command: setvar
	.byte 0x16
	.2byte 0x40DA
	.2byte 0x0002
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1893: @ 0x081F1893
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1DDC @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeardYouBeatRivalTakePokedex
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F1947 @ EventScript_JP_081F1947
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1E7F @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ExplainPokedex
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081F197B @ Movement_JP_081F197B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F18ED @ EventScript_JP_081F18ED
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F191A @ EventScript_JP_081F191A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4084
	.2byte 0x0005
	@ event command: setflag
	.byte 0x29
	.2byte 0x0074
	@ event command: setvar
	.byte 0x16
	.2byte 0x4051
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x408D
	.2byte 0x0004
	@ event command: setvar
	.byte 0x16
	.2byte 0x4050
	.2byte 0x0003
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F18ED: @ 0x081F18ED
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1F72 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayGotPokedexTooTakeThese
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0004
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0005
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F1969 @ EventScript_JP_081F1969
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1FB3 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCutePokemonWithPokeBalls
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F191A: @ 0x081F191A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2048 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanGotPokedexTooTakeThese
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0004
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0005
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F1972 @ EventScript_JP_081F1972
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2072 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CatchCoolPokemonWithPokeBalls
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081F1947: @ 0x081F1947
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x081F1E6C @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_ReceivedPokedex
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setflag
	.byte 0x29
	.2byte 0x0861
	@ event command: special
	.byte 0x25
	.2byte 0x01ED
	@ event command: setflag
	.byte 0x29
	.2byte 0x08E4
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CD
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081F195F: @ 0x081F195F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F1F31 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CountlessPokemonAwait
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1969: @ 0x081F1969
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2019 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_OhYourBagsFull
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F1972: @ 0x081F1972
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F20D5 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_HeyYourBagsFull
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
Movement_JP_081F197B: @ 0x081F197B
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
EventScript_JP_081F197E: @ 0x081F197E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2103 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_SeriousLookingMachine
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081F1987: @ 0x081F1987
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F19D5 @ EventScript_JP_081F19D5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F1A00 @ EventScript_JP_081F1A00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40D3
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F1A2B @ EventScript_JP_081F1A2B
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F19C3 @ EventScript_JP_081F19C3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F19CC @ EventScript_JP_081F19CC
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F19C3: @ 0x081F19C3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2028 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayWhereShouldIGoNext
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F19CC: @ 0x081F19CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F20E4 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanWhereShouldIGoNext
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F19D5: @ 0x081F19D5
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F19EE @ EventScript_JP_081F19EE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F19F7 @ EventScript_JP_081F19F7
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F19EE: @ 0x081F19EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F26F8 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BirchInLab
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F19F7: @ 0x081F19F7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F275E @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanPreferCollectingSlowly
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F1A00: @ 0x081F1A00
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F1A19 @ EventScript_JP_081F1A19
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F1A22 @ EventScript_JP_081F1A22
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1A19: @ 0x081F1A19
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2796 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayHaveYouGoneToBattleFrontier
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F1A22: @ 0x081F1A22
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F27C2 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanHaveYouGoneToBattleFrontier
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F1A2B: @ 0x081F1A2B
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F1A44 @ EventScript_JP_081F1A44
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F1A4D @ EventScript_JP_081F1A4D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F1A44: @ 0x081F1A44
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2388 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_MayTakeBreakFromFieldwork
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F1A4D: @ 0x081F1A4D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F23C6 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BrendanTakeBreakFromFieldwork
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F1A56: @ 0x081F1A56
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2127 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_PCUsedForResearch
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081F1A5F: @ 0x081F1A5F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F214D @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_CrammedWithBooksOnPokemon
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081F1A68: @ 0x081F1A68
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2169 @ gText_BirchLab_LittlerootTown_ProfessorBirchsLab_Text_BookTooHardToRead
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
	.include "data/text/maps/birch_lab.inc"

	@ Replaced baserom.gba range: offset=0x1F28D3, size=0xFB3D
	@ semantic recovery: script_data; byte-verified against linked ROM
	.byte 0x00
EventScript_JP_081F28D4: @ 0x081F28D4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F28DD @ EventText_JP_081F28DD
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F28DD: @ 0x081F28DD
	.string "ポケモンしょうぶの　とき\nポケモンの　リストの　ひだりに　いる\lポケモンが　とびだして　たたかうの\pだから　つれあるく　ポケモンが　ふえてきたら\nポケモンの　じゅんばんを　かえると\lしょうぶが　ゆうりに　なるかも!$"
	.byte 0x00
EventScript_JP_081F294A: @ 0x081F294A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F295C @ EventText_JP_081F295C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F2953: @ 0x081F2953
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F297B @ EventText_JP_081F297B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F295C: @ 0x081F295C
	.string "ポケモンって　たたかうと\nレベルアップして　つよくなるのよ!$"
EventText_JP_081F297B: @ 0x081F297B
	.string "つれて　あるく　ポケモンが　つよかったら\nとおくまで　いけるように　なるね!$"
MapScripts_JP_081F29A2: @ 0x081F29A2
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F29AD
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081F29AD: @ 0x081F29AD
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x000E
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081F29B6: @ 0x081F29B6
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F29C4: @ 0x081F29C4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F29F5 @ EventText_JP_081F29F5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F29CD: @ 0x081F29CD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2A31 @ EventText_JP_081F2A31
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F29D6: @ 0x081F29D6
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0861
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F29EB @ EventScript_JP_081F29EB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2A73 @ EventText_JP_081F2A73
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F29EB: @ 0x081F29EB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2AA9 @ EventText_JP_081F2AA9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F29F5: @ 0x081F29F5
	.string "すみっこに　おいてある　パソコンは\nポケモントレーナーの　ための　ものなんだ\pきみも　じゆうに　つかって　いいんだよ!$"
EventText_JP_081F2A31: @ 0x081F2A31
	.string "ポケモンセンターって　すごいよな!\pポケモン　なんびき　あずけても\nおかねが　かからないから\lどんな　ときでも　あんしん　だよね!$"
EventText_JP_081F2A73: @ 0x081F2A73
	.string "2かいの　ポケモン　ワイヤレス　クラブは\nつい　さいきん　できたの\pでも　まだ\nちょうせいちゅう　ですって$"
EventText_JP_081F2AA9: @ 0x081F2AA9
	.string "2かいの　ポケモン　ワイヤレス　クラブは\nつい　さいきん　できたの\pあたし　さっそく\nポケモンこうかん　しちゃった!$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081F2B0C: @ 0x081F2B0C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0074
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2B38 @ EventScript_JP_081F2B38
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081F2B2C
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
	.byte 0x0D, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F2B38: @ 0x081F2B38
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081F2B48
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
	.byte 0x00, 0x04, 0x00, 0x0D, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F2B56: @ 0x081F2B56
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0074
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2B6B @ EventScript_JP_081F2B6B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2B7E @ EventText_JP_081F2B7E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F2B6B: @ 0x081F2B6B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2B9E @ EventText_JP_081F2B9E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F2B75: @ 0x081F2B75
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2BC5 @ EventText_JP_081F2BC5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F2B7E: @ 0x081F2B7E
	.string "なんでも　うりきれ　らしくて\nモンスターボール　かえないの……$"
EventText_JP_081F2B9E: @ 0x081F2B9E
	.string "どんどん　モンスターボール　かって\nどんどん　ポケモン　つかまえちゃうわよ!$"
EventText_JP_081F2BC5: @ 0x081F2BC5
	.string "ポケモンは　たいりょくが　なくなると\nたたかう　げんきも　なくなる\pそんな　ときは　キズぐすりを　つかって\nたいりょくを　かいふく　してあげるんだ!$"
	.byte 0x00
EventScript_JP_081F2C11: @ 0x081F2C11
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2C36 @ EventText_JP_081F2C36
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F2C1A: @ 0x081F2C1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2C67 @ EventText_JP_081F2C67
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F2C23: @ 0x081F2C23
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0120
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2CC4 @ EventText_JP_081F2CC4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F2C36: @ 0x081F2C36
	.string "こういう　ちいさな　しまで\nポケモンと　かぞく　なかよく　くらすのも\lなかなか　いい　もんですよ$"
EventText_JP_081F2C67: @ 0x081F2C67
	.string "わたしは　カイナシティ　という\nおおきな　みなとまち　から\lおよめさんに　きたのよ\pのんびりとした　しま　だけれど\nきれいな　うみに　かこまれて　いれば\lそれだけで　しあわせ　なんだね$"
EventText_JP_081F2CC4: @ 0x081F2CC4
	.string "ジグザグマ“ぐぐう!$"
MapScripts_JP_081F2CCF: @ 0x081F2CCF
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F2CDA
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081F2CDA: @ 0x081F2CDA
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x000F
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081F2CE3: @ 0x081F2CE3
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F2CF1: @ 0x081F2CF1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2D03 @ EventText_JP_081F2D03
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F2CFA: @ 0x081F2CFA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F2D2B @ EventText_JP_081F2D2B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F2D03: @ 0x081F2D03
	.string "まちの　はずれの　いしのどうくつ　には\nめずらしい　いしが　あるって　きいたわ$"
EventText_JP_081F2D2B: @ 0x081F2D2B
	.string "つかれて　たたかうことの　できない\nポケモンだって　ひでんと　いわれる\lわざは　つかうことが　できるよ!$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
MapScripts_JP_081F2D87: @ 0x081F2D87
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F2D8D
	.byte 0
EventScript_JP_081F2D8D: @ 0x081F2D8D
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: end
	.byte 0x02
EventScript_JP_081F2D93: @ 0x081F2D93
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x010A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2DED @ EventScript_JP_081F2DED
	@ event command: call
	.byte 0x04
	.4byte 0x081F2EB3 @ EventScript_JP_081F2EB3
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8001
	.2byte 0x8000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E09 @ EventScript_JP_081F2E09
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E05 @ EventScript_JP_081F2E05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E01 @ EventScript_JP_081F2E01
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2DFD @ EventScript_JP_081F2DFD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2DF9 @ EventScript_JP_081F2DF9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2DF5 @ EventScript_JP_081F2DF5
	@ event command: goto
	.byte 0x05
	.4byte 0x081F2DF1 @ EventScript_JP_081F2DF1
EventScript_JP_081F2DED: @ 0x081F2DED
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F2DF1: @ 0x081F2DF1
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081F2DF5: @ 0x081F2DF5
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_081F2DF9: @ 0x081F2DF9
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0003
	@ event command: return
	.byte 0x03
EventScript_JP_081F2DFD: @ 0x081F2DFD
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E01: @ 0x081F2E01
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0005
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E05: @ 0x081F2E05
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0006
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E09: @ 0x081F2E09
	@ event command: setflashradius
	.byte 0x99
	.2byte 0x0007
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E0D: @ 0x081F2E0D
	@ event command: call
	.byte 0x04
	.4byte 0x081F2EB3 @ EventScript_JP_081F2EB3
	@ event command: nop1
	.byte 0x01
	@ event command: compare_var_to_var
	.byte 0x22
	.2byte 0x8000
	.2byte 0x8001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E65 @ EventScript_JP_081F2E65
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8001
	.2byte 0x8000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E66 @ EventScript_JP_081F2E66
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E71 @ EventScript_JP_081F2E71
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E7C @ EventScript_JP_081F2E7C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E87 @ EventScript_JP_081F2E87
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E92 @ EventScript_JP_081F2E92
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2E9D @ EventScript_JP_081F2E9D
EventScript_JP_081F2E65: @ 0x081F2E65
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E66: @ 0x081F2E66
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x06
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E71: @ 0x081F2E71
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x05
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E7C: @ 0x081F2E7C
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E87: @ 0x081F2E87
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x03
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E92: @ 0x081F2E92
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x02
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2E9D: @ 0x081F2E9D
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x01
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2EA8: @ 0x081F2EA8
	@ event command: playse
	.byte 0x2F
	.2byte 0x0023
	@ event command: animateflash
	.byte 0x9A
	.byte 0x00
	@ event command: call
	.byte 0x04
	.4byte 0x081F2D93 @ EventScript_JP_081F2D93
	@ event command: return
	.byte 0x03
EventScript_JP_081F2EB3: @ 0x081F2EB3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8000
	.2byte 0x0000
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00B3
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2EC6 @ EventScript_JP_081F2EC6
	@ event command: addvar
	.byte 0x17
	.2byte 0x8000
	.2byte 0x0001
EventScript_JP_081F2EC6: @ 0x081F2EC6
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x01A9
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2ED4 @ EventScript_JP_081F2ED4
	@ event command: addvar
	.byte 0x17
	.2byte 0x8000
	.2byte 0x0001
EventScript_JP_081F2ED4: @ 0x081F2ED4
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x01AA
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2EE2 @ EventScript_JP_081F2EE2
	@ event command: addvar
	.byte 0x17
	.2byte 0x8000
	.2byte 0x0001
EventScript_JP_081F2EE2: @ 0x081F2EE2
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x023C
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2EF0 @ EventScript_JP_081F2EF0
	@ event command: addvar
	.byte 0x17
	.2byte 0x8000
	.2byte 0x0001
EventScript_JP_081F2EF0: @ 0x081F2EF0
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x023E
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2EFE @ EventScript_JP_081F2EFE
	@ event command: addvar
	.byte 0x17
	.2byte 0x8000
	.2byte 0x0001
EventScript_JP_081F2EFE: @ 0x081F2EFE
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x023D
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2F0C @ EventScript_JP_081F2F0C
	@ event command: addvar
	.byte 0x17
	.2byte 0x8000
	.2byte 0x0001
EventScript_JP_081F2F0C: @ 0x081F2F0C
	@ event command: return
	.byte 0x03
EventScript_JP_081F2F0D: @ 0x081F2F0D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x010A
	.2byte 0x0000
	.4byte 0x081F342C @ EventText_JP_081F342C
	.4byte 0x081F34A7 @ EventText_JP_081F34A7
	.4byte 0x081F2F42 @ EventScript_JP_081F2F42
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0039
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F2FE7 @ EventScript_JP_081F2FE7
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A6
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F2FC3 @ EventScript_JP_081F2FC3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F35C8 @ EventText_JP_081F35C8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F2F42: @ 0x081F2F42
	@ event command: call
	.byte 0x04
	.4byte 0x081F2EA8 @ EventScript_JP_081F2EA8
	@ event command: message
	.byte 0x67
	.4byte 0x081F34DA @ EventText_JP_081F34DA
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F34F3 @ EventText_JP_081F34F3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F1
	@ event command: setflag
	.byte 0x29
	.2byte 0x0868
	@ event command: addvar
	.byte 0x17
	.2byte 0x4085
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08242F10
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: call
	.byte 0x04
	.4byte 0x081F2FA0 @ EventScript_JP_081F2FA0
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F35AD @ EventText_JP_081F35AD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01D4
	@ event command: setvar
	.byte 0x16
	.2byte 0x40F4
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x0080
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F2FA0: @ 0x081F2FA0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0128
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
	.4byte 0x082430EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3568 @ EventText_JP_081F3568
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A6
	@ event command: return
	.byte 0x03
EventScript_JP_081F2FC3: @ 0x081F2FC3
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0128
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3568 @ EventText_JP_081F3568
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A6
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F2FE7: @ 0x081F2FE7
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010A
	.2byte 0x0000
	.4byte 0x081F363A @ EventText_JP_081F363A
	.4byte 0x081F36A5 @ EventText_JP_081F36A5
	.4byte 0x081F36F5 @ EventText_JP_081F36F5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F36B9 @ EventText_JP_081F36B9
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F3002: @ 0x081F3002
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x00B3
	.2byte 0x0000
	.4byte 0x081F3212 @ EventText_JP_081F3212
	.4byte 0x081F3227 @ EventText_JP_081F3227
	.4byte 0x081F301D @ EventScript_JP_081F301D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3235 @ EventText_JP_081F3235
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F301D: @ 0x081F301D
	@ event command: call
	.byte 0x04
	.4byte 0x081F2E0D @ EventScript_JP_081F2E0D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3024: @ 0x081F3024
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x01A9
	.2byte 0x0000
	.4byte 0x081F3256 @ EventText_JP_081F3256
	.4byte 0x081F3279 @ EventText_JP_081F3279
	.4byte 0x081F303F @ EventScript_JP_081F303F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3292 @ EventText_JP_081F3292
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F303F: @ 0x081F303F
	@ event command: call
	.byte 0x04
	.4byte 0x081F2E0D @ EventScript_JP_081F2E0D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3046: @ 0x081F3046
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x01AA
	.2byte 0x0000
	.4byte 0x081F32DD @ EventText_JP_081F32DD
	.4byte 0x081F32FC @ EventText_JP_081F32FC
	.4byte 0x081F3061 @ EventScript_JP_081F3061
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F330D @ EventText_JP_081F330D
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F3061: @ 0x081F3061
	@ event command: call
	.byte 0x04
	.4byte 0x081F2E0D @ EventScript_JP_081F2E0D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3068: @ 0x081F3068
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x023C
	.2byte 0x0000
	.4byte 0x081F3395 @ EventText_JP_081F3395
	.4byte 0x081F33AE @ EventText_JP_081F33AE
	.4byte 0x081F3083 @ EventScript_JP_081F3083
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F33C2 @ EventText_JP_081F33C2
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F3083: @ 0x081F3083
	@ event command: call
	.byte 0x04
	.4byte 0x081F2E0D @ EventScript_JP_081F2E0D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F308A: @ 0x081F308A
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x023E
	.2byte 0x0000
	.4byte 0x081F33E2 @ EventText_JP_081F33E2
	.4byte 0x081F33FF @ EventText_JP_081F33FF
	.4byte 0x081F30A5 @ EventScript_JP_081F30A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3410 @ EventText_JP_081F3410
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F30A5: @ 0x081F30A5
	@ event command: call
	.byte 0x04
	.4byte 0x081F2E0D @ EventScript_JP_081F2E0D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F30AC: @ 0x081F30AC
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x023D
	.2byte 0x0000
	.4byte 0x081F334A @ EventText_JP_081F334A
	.4byte 0x081F3362 @ EventText_JP_081F3362
	.4byte 0x081F30C7 @ EventScript_JP_081F30C7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F336F @ EventText_JP_081F336F
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F30C7: @ 0x081F30C7
	@ event command: call
	.byte 0x04
	.4byte 0x081F2E0D @ EventScript_JP_081F2E0D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F30CE: @ 0x081F30CE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F30E3 @ EventScript_JP_081F30E3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3121 @ EventText_JP_081F3121
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F30E3: @ 0x081F30E3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F31ED @ EventText_JP_081F31ED
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F30ED: @ 0x081F30ED
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0868
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F310D @ EventScript_JP_081F310D
	@ event command: goto
	.byte 0x05
	.4byte 0x081F3117 @ EventScript_JP_081F3117
	.byte 0x02
EventScript_JP_081F30FD: @ 0x081F30FD
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0868
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F310D @ EventScript_JP_081F310D
	@ event command: goto
	.byte 0x05
	.4byte 0x081F3117 @ EventScript_JP_081F3117
	.byte 0x02
EventScript_JP_081F310D: @ 0x081F310D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F361A @ EventText_JP_081F361A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F3117: @ 0x081F3117
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F360D @ EventText_JP_081F360D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081F3121: @ 0x081F3121
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pムロタウン　ジムの　リーダー　トウキは\nかくとうタイプ　ポケモンの　つかいてだ!\pノーマルタイプで　むかうと\nきびしぃー　いちげきを　くらうから\lきを　つけたほうが　いいぞ!\pしかも!　この　ジムの　なかは\nうみのそこ　みたいに　くらいんだ!\pでも!　トレーナーを　ひとり　たおすごとに\nだんだん　あかるく　なって　いくぞ!\pじゃ　きばってこォー!!$"
EventText_JP_081F31ED: @ 0x081F31ED
	.string "うおォ!　ずいぶん　あかるく　なったな!\pきみの　みらいも　あかるいぞ!$"
EventText_JP_081F3212: @ 0x081F3212
	.string "ちから　こそ　せいぎっ!\nドリャーッ!!$"
EventText_JP_081F3227: @ 0x081F3227
	.string "ちからぶそく　だった……!$"
EventText_JP_081F3235: @ 0x081F3235
	.string "じゅう　よく　ごうを　せいす!\nみごとな　たたかいぶり　だった!$"
EventText_JP_081F3256: @ 0x081F3256
	.string "トウキさまと　たたかうまでも　ないわ!\nわたしが　たおして　あげる!$"
EventText_JP_081F3279: @ 0x081F3279
	.string "まさか……\nこんなに　かんたんに　やられるなんて$"
EventText_JP_081F3292: @ 0x081F3292
	.string "この　まけを　むだに　しないため\nもっと　とっくん　する!\pそして　いつかは　ジムリーダーに……\pいえ　ポケモンリーグの\nチャンピオンに　なるわよ!$"
EventText_JP_081F32DD: @ 0x081F32DD
	.string "あたしを　あまく　みない　ことね!\nないても　しらないわよ!$"
EventText_JP_081F32FC: @ 0x081F32FC
	.string "わぁーーーん!\nまけたーーーっ!$"
EventText_JP_081F330D: @ 0x081F330D
	.string "くらやみの　なかで　たたかうことで\nこころを　きたえるの\pでも　まっくら　だから\nトウキさまの　おかおを　みられない……$"
EventText_JP_081F334A: @ 0x081F334A
	.string "うふふ……!\nくらくて　まよっているの　かな?$"
EventText_JP_081F3362: @ 0x081F3362
	.string "なによ　もう\nしらない!$"
EventText_JP_081F336F: @ 0x081F336F
	.string "あなた　なんて　このまま　まよって\nいりぐちに　もどっちゃえば　いーのよ!$"
EventText_JP_081F3395: @ 0x081F3395
	.string "うみの　おとこの　いじを\nみせつけて　やるぜぃ!$"
EventText_JP_081F33AE: @ 0x081F33AE
	.string "どうしたぃ!\nおれと　した　ことが……$"
EventText_JP_081F33C2: @ 0x081F33C2
	.string "おう!　あんたなら\nジムリーダーに　いどむに　ふさわしいぜぃ!$"
EventText_JP_081F33E2: @ 0x081F33E2
	.string "ここを　とおる　なら\nこの　わしを　たおしてから　じゃ!$"
EventText_JP_081F33FF: @ 0x081F33FF
	.string "むうーん!\nすごく　つよい……!$"
EventText_JP_081F3410: @ 0x081F3410
	.string "わしの　まけじゃ!\nがんばって　バッジ　とってこいよ!$"
EventText_JP_081F342C: @ 0x081F342C
	.string "ボクは　ムロ　ポケモンジム\nリーダーの　トウキ!\pこの　あたりの\nはげしい　なみに　もまれ……\pくらい　どうくつで\nしゅぎょう　して　いるのさ!\pボクに　ちょうせん　しよう　という\nキミの　じつりょく……\lどれほどの　ものか　みせて　もらうよ!$"
EventText_JP_081F34A7: @ 0x081F34A7
	.string "ううーん　よそう　していたより\nキミは　ビッグウェーブ!\pわかった!\nこの　バッジを　もっていきな!$"
EventText_JP_081F34DA: @ 0x081F34DA
	.string "{PLAYER}は　トウキから\nナックルバッジを　もらった!$"
EventText_JP_081F34F3: @ 0x081F34F3
	.string "ナックルバッジには\nレベル30までの　ポケモンなら\lひとから　もらった　ポケモンでも\lすなおに　する　こうかが　ある!\pそれに　たたかって　いなくても\nひでんわざの　フラッシュを　つかえる!\pこの　わざマシン\nよかったら　つかいな!$"
EventText_JP_081F3568: @ 0x081F3568
	.string "その　わざマシン08　には\nビルドアップが　はいっている!\pこうげきりょくと　ぼうぎょりょくを\nあげる　わざ　なのさ!\p……　……　……$"
EventText_JP_081F35AD: @ 0x081F35AD
	.string "ジムリーダー　トウキを\nポケナビに　とうろく　した!$"
EventText_JP_081F35C8: @ 0x081F35C8
	.string "キミの　さいのうは\nいつのひか　おおきな　なみと　なって\pポケモン　トレーナーたちの　あいだに\nおどろきの　あらしを　まきおこすだろう!$"
EventText_JP_081F360D: @ 0x081F360D
	.string "ムロタウン　ポケモンジム$"
EventText_JP_081F361A: @ 0x081F361A
	.string "ムロタウン　ポケモンジム\pトウキ　にんてい　トレーナー!\n{PLAYER}$"
EventText_JP_081F363A: @ 0x081F363A
	.string "トウキ“なみというのは　いちど　ひいても\nいつか　かならず　はまべに　もどってくる\pキミほどの　ビッグウェーブだ\nきっと　また　くると　おもっていたよ!\pさあ　どれほど　たかさを　ましたのか\nボクに　みせてくれ!$"
EventText_JP_081F36A5: @ 0x081F36A5
	.string "わーおっ!\nキミに　のみこまれそうだ!$"
EventText_JP_081F36B9: @ 0x081F36B9
	.string "トウキ“やっぱり　ポケモン　しょうぶは\nそこが　みえないほど　ふかく　ひろい!\lまるで　ホウエンの　うみの　ようだね!$"
EventText_JP_081F36F5: @ 0x081F36F5
	.string "トウキ“なみというのは　いちど　ひいても\nいつか　かならず　はまべに　もどってくる\pキミほどの　ビッグウェーブだ\nきっと　また　くると　おもっていたよ!\p……あれ?　たたかえる　ポケモンを\n1ひきしか　もっていないんだね\pすまないけど　2ひき　いじょうの\nポケモンを　もって　また　きてくれよ$"
	.byte 0x00
EventScript_JP_081F3789: @ 0x081F3789
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: special
	.byte 0x25
	.2byte 0x007F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F37A8 @ EventScript_JP_081F37A8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3AD1 @ EventText_JP_081F3AD1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F37A8: @ 0x081F37A8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3B09 @ EventText_JP_081F3B09
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F37B2: @ 0x081F37B2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3B4C @ EventText_JP_081F3B4C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F37C3: @ 0x081F37C3
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: special
	.byte 0x25
	.2byte 0x0080
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3B7C @ EventText_JP_081F3B7C
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F37EC @ EventScript_JP_081F37EC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F37F6 @ EventScript_JP_081F37F6
	@ event command: end
	.byte 0x02
EventScript_JP_081F37EC: @ 0x081F37EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3BC8 @ EventText_JP_081F3BC8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F37F6: @ 0x081F37F6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3BF5 @ EventText_JP_081F3BF5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3800: @ 0x081F3800
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3C23 @ EventText_JP_081F3C23
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F381C: @ 0x081F381C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3C40 @ EventText_JP_081F3C40
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3838: @ 0x081F3838
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3C5E @ EventText_JP_081F3C5E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3849: @ 0x081F3849
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3CBC @ EventText_JP_081F3CBC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F3859: @ 0x081F3859
	@ event command: lockall
	.byte 0x69
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: special
	.byte 0x25
	.2byte 0x0081
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38C0 @ EventScript_JP_081F38C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38C0 @ EventScript_JP_081F38C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38CA @ EventScript_JP_081F38CA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38C0 @ EventScript_JP_081F38C0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38D4 @ EventScript_JP_081F38D4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38D4 @ EventScript_JP_081F38D4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38DE @ EventScript_JP_081F38DE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F38D4 @ EventScript_JP_081F38D4
	@ event command: end
	.byte 0x02
EventScript_JP_081F38C0: @ 0x081F38C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3D0D @ EventText_JP_081F3D0D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F38CA: @ 0x081F38CA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3D26 @ EventText_JP_081F3D26
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F38D4: @ 0x081F38D4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3D40 @ EventText_JP_081F3D40
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F38DE: @ 0x081F38DE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3D59 @ EventText_JP_081F3D59
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F38E8: @ 0x081F38E8
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F3900 @ EventScript_JP_081F3900
	.byte 0x02
EventScript_JP_081F38F4: @ 0x081F38F4
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081F3900 @ EventScript_JP_081F3900
	.byte 0x02
EventScript_JP_081F3900: @ 0x081F3900
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: special
	.byte 0x25
	.2byte 0x0081
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3966 @ EventScript_JP_081F3966
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3966 @ EventScript_JP_081F3966
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3982 @ EventScript_JP_081F3982
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3982 @ EventScript_JP_081F3982
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F399E @ EventScript_JP_081F399E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F399E @ EventScript_JP_081F399E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F39BA @ EventScript_JP_081F39BA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F39D6 @ EventScript_JP_081F39D6
	@ event command: end
	.byte 0x02
EventScript_JP_081F3966: @ 0x081F3966
	@ event command: call
	.byte 0x04
	.4byte 0x081F39F3 @ EventScript_JP_081F39F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3D74 @ EventText_JP_081F3D74
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F3A2B @ EventScript_JP_081F3A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3DA2 @ EventText_JP_081F3DA2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F3982: @ 0x081F3982
	@ event command: call
	.byte 0x04
	.4byte 0x081F39F3 @ EventScript_JP_081F39F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3DF4 @ EventText_JP_081F3DF4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F3A2B @ EventScript_JP_081F3A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3E3C @ EventText_JP_081F3E3C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F399E: @ 0x081F399E
	@ event command: call
	.byte 0x04
	.4byte 0x081F39F3 @ EventScript_JP_081F39F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3E61 @ EventText_JP_081F3E61
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F3A2B @ EventScript_JP_081F3A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3E8F @ EventText_JP_081F3E8F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F39BA: @ 0x081F39BA
	@ event command: call
	.byte 0x04
	.4byte 0x081F39F3 @ EventScript_JP_081F39F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3ECA @ EventText_JP_081F3ECA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F3A2B @ EventScript_JP_081F3A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3EFD @ EventText_JP_081F3EFD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F39D6: @ 0x081F39D6
	@ event command: call
	.byte 0x04
	.4byte 0x081F39F3 @ EventScript_JP_081F39F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3F3E @ EventText_JP_081F3F3E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x081F3A2B @ EventScript_JP_081F3A2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3F65 @ EventText_JP_081F3F65
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F39F2: @ 0x081F39F2
	@ event command: return
	.byte 0x03
EventScript_JP_081F39F3: @ 0x081F39F3
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x081F3A8F @ Movement_JP_081F3A8F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3A14 @ EventScript_JP_081F3A14
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3A2A @ EventScript_JP_081F3A2A
	@ event command: end
	.byte 0x02
EventScript_JP_081F3A14: @ 0x081F3A14
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F39F2 @ EventScript_JP_081F39F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F3A2A: @ 0x081F3A2A
	@ event command: return
	.byte 0x03
EventScript_JP_081F3A2B: @ 0x081F3A2B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081F3A91 @ Movement_JP_081F3A91
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3A4C @ EventScript_JP_081F3A4C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3A79 @ EventScript_JP_081F3A79
	@ event command: end
	.byte 0x02
EventScript_JP_081F3A4C: @ 0x081F3A4C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F3A63 @ EventScript_JP_081F3A63
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F3A6E @ EventScript_JP_081F3A6E
	@ event command: return
	.byte 0x03
EventScript_JP_081F3A63: @ 0x081F3A63
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F3A6E: @ 0x081F3A6E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F3A79: @ 0x081F3A79
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F39F2 @ EventScript_JP_081F39F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081F3A8F: @ 0x081F3A8F
	@ object movement sequence
	.byte 0x1F @ walk_in_place_left
	.byte 0xFE @ step_end
Movement_JP_081F3A91: @ 0x081F3A91
	@ object movement sequence
	.byte 0x20 @ walk_in_place_right
	.byte 0xFE @ step_end
EventScript_JP_081F3A93: @ 0x081F3A93
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: call
	.byte 0x04
	.4byte 0x08242F17
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00E6
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F3AC7 @ EventScript_JP_081F3AC7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3F87 @ EventText_JP_081F3F87
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0144
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
	.2byte 0x00E6
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F3AC7: @ 0x081F3AC7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F3FDC @ EventText_JP_081F3FDC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F3AD1: @ 0x081F3AD1
	.string "いまの　はやりって　いったら　やっぱり\n‘{STR_VAR_1}’よね!\p‘{STR_VAR_1}’の　ない\nせいかつ　なんか　かんがえられない!$"
EventText_JP_081F3B09: @ 0x081F3B09
	.string "いまの　はやりって　いったら　やっぱり\n‘{STR_VAR_1}’よね!\pでも　もう　そろそろ\nあきてきたなー\pあたらしい　はやりでも　さがそっかなー$"
EventText_JP_081F3B4C: @ 0x081F3B4C
	.string "わたしは　ポケモンにも\n‘{STR_VAR_1}’を\lおしえてるんだけど\pこれが　なかなか\nたいへん　なのよねー$"
EventText_JP_081F3B7C: @ 0x081F3B7C
	.string "いま　はやりの\n‘{STR_VAR_1}’のことを\lしらべてるんだけど\p‘{STR_VAR_1}’と\n‘{STR_VAR_2}’ってのは\pふかい　かんけいが　あるって　いうのは\nほんとうの　ことなのかい?$"
EventText_JP_081F3BC8: @ 0x081F3BC8
	.string "お!\nやっぱり　そうなのか\pこれで　おじさんも　またいっぽ\nりゅうこうに　ちかづいたぞ!$"
EventText_JP_081F3BF5: @ 0x081F3BF5
	.string "なに!?\nそうなのか!?\pいやー　おじさんが　りゅうこうに\nついて　いくのは　たいへんだ!$"
EventText_JP_081F3C23: @ 0x081F3C23
	.string "‘{STR_VAR_1}’の\nテレビって　いうのは\lやってないのかのう……$"
EventText_JP_081F3C40: @ 0x081F3C40
	.string "うみの　むこうでは\pもっと　‘{STR_VAR_1}’が\nはやってるのかな?$"
EventText_JP_081F3C5E: @ 0x081F3C5E
	.string "ぼくは　‘{STR_VAR_1}’の\nグッズを　いっぱい　あつめて　いるんだ!\p‘{STR_VAR_1}’にんぎょう\nとか\p‘{STR_VAR_1}’ようふく\p‘{STR_VAR_1}’の　えほん\nなんかも　もってるよ\pいいだろー!\nほしくても　あげないよー$"
EventText_JP_081F3CBC: @ 0x081F3CBC
	.string "“よい‘{STR_VAR_1}’と\n　わるい‘{STR_VAR_1}’”\p“‘{STR_VAR_1}’と\n　ポケモンの　かんけい”\p“やくにたつ\n　‘{STR_VAR_1}’”\p‘{STR_VAR_1}’に\nついての　ほんが　ずらっと　ならんでいる!$"
EventText_JP_081F3D0D: @ 0x081F3D0D
	.string "“‘{STR_VAR_1}’の\n　さけび”\pという　だいめい　だ!$"
EventText_JP_081F3D26: @ 0x081F3D26
	.string "“‘{STR_VAR_1}’の\n　ほほえみ”\pという　だいめい　だ!$"
EventText_JP_081F3D40: @ 0x081F3D40
	.string "“さいごの\n　‘{STR_VAR_1}’”\pという　だいめい　だ!$"
EventText_JP_081F3D59: @ 0x081F3D59
	.string "“‘{STR_VAR_1}’の\n　たんじょう”\pという　だいめい　だ!$"
EventText_JP_081F3D74: @ 0x081F3D74
	.string "ぼく　さいきん　はやりの\p‘{STR_VAR_1}’を\nみたんだ　いいだろ!\pすごかったよ\nほんもの　だぜ!$"
EventText_JP_081F3DA2: @ 0x081F3DA2
	.string "いや　きみの　みた\n‘{STR_VAR_1}’は\lほんもの　じゃないね!\pほんものは　もっと\nキレが　あるというか\lうつくしい　というか……\pまあ　とにかく\nもっと　すごいんだよ!$"
EventText_JP_081F3DF4: @ 0x081F3DF4
	.string "ぼく　さいきん　はやってる\n‘{STR_VAR_1}’の\lテーマ　きょくを　かんがえたんだ\lきいてくれよ!\p……\pおー!\n{STR_VAR_1}　ー!\pすばらしい\n{STR_VAR_1}　ーー!!$"
EventText_JP_081F3E3C: @ 0x081F3E3C
	.string "……\pきみは\n‘{STR_VAR_1}’　よりも\pうたの　べんきょうを\nしたほうが　いいね$"
EventText_JP_081F3E61: @ 0x081F3E61
	.string "さっきの　はなし\nなんだけどさ\pこんど　この　しまで\n‘{STR_VAR_1}’\lパーティーを　ひらこうぜ!$"
EventText_JP_081F3E8F: @ 0x081F3E8F
	.string "お　いいね!!\pだれが　いちばん\n‘{STR_VAR_1}’が\lうまいかを　きめるんだね!\pじゃあ　きょうから\p‘{STR_VAR_1}’\nざんまいだ!$"
EventText_JP_081F3ECA: @ 0x081F3ECA
	.string "……そうだなぁ\p‘{STR_VAR_1}’は　もう\nりゅうこう　じゃなくて\pせいかつの　いちぶ\nという　かんじかなぁ?$"
EventText_JP_081F3EFD: @ 0x081F3EFD
	.string "え?\nそんなに!?\pきみは　ねても　さめても\n‘{STR_VAR_1}’　のこと\lばっかり　かんがえてる　からな\p‘{STR_VAR_1}　はかせ’\nだね　まったく$"
EventText_JP_081F3F3E: @ 0x081F3F3E
	.string "ぼくと　きみが\nコンビを　くめば\p“{STR_VAR_1}”では\nもう　むてきって　ことだな!$"
EventText_JP_081F3F65: @ 0x081F3F65
	.string "そのとおり!\p‘{STR_VAR_1}　コンビ’\nっていう　かんじだね!\pハハハ!!$"
EventText_JP_081F3F87: @ 0x081F3F87
	.string "さいきん　ぼくの　なかでは\n‘ヘドロばくだん’が　だいブーム　なのさ!\pえー　きみ\n‘ヘドロばくだん’　しらないの?\pそれは　かわいそうだな\nよし!　ぼくが　あげるよ!$"
EventText_JP_081F3FDC: @ 0x081F3FDC
	.string "‘ヘドロばくだん’も　いいけど\n‘{STR_VAR_1}’って\lわざを　つかえる\lポケモンも　いいよね!$"
	.byte 0x00
EventScript_JP_081F4009: @ 0x081F4009
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0121
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4042 @ EventScript_JP_081F4042
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4055 @ EventText_JP_081F4055
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00D9
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
	.4byte 0x081F4038 @ EventScript_JP_081F4038
	@ event command: setflag
	.byte 0x29
	.2byte 0x0121
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F4038: @ 0x081F4038
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F40B4 @ EventText_JP_081F40B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F4042: @ 0x081F4042
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F40E1 @ EventText_JP_081F40E1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F404C: @ 0x081F404C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4128 @ EventText_JP_081F4128
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F4055: @ 0x081F4055
	.string "ほら!　りゅうこう　さいせんたんの\nこの　シルクのスカーフ　ステキだろ!\pおっ　めが　かがやいてるね!\nオレの　センスが　わかるんだな　きみは!\pうれしいね!\nこれは　プレゼント　するよ!$"
EventText_JP_081F40B4: @ 0x081F40B4
	.string "え　もてないの?\nきみの　にもつを　ぜんぶ　うってでも\lもつべき　スカーフだぜ　これは!$"
EventText_JP_081F40E1: @ 0x081F40E1
	.string "シルクのスカーフは　ノーマルタイプの\nわざの　いりょくを　あげてくれる!\pほとんどの　ポケモンに　にあう\nすてきな　スカーフ　ってことだぜ!$"
EventText_JP_081F4128: @ 0x081F4128
	.string "へえ!　きみ　うみを　こえて\nわざわざ　ムロまで　きたの!\pもしかして　トウキさんの　うわさを　きいて\nあいに　きたんじゃない?\pトウキさん　かっこよくて\nみんなが　あこがれるもんな!$"
	.byte 0x00
EventScript_JP_081F4186: @ 0x081F4186
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x081F41EE @ EventText_JP_081F41EE
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081F41A0
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
	.byte 0x00, 0x00, 0x00, 0x1E, 0x00, 0x1F, 0x00, 0x20, 0x00, 0x21, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F41AC: @ 0x081F41AC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F428D @ EventText_JP_081F428D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F41B5: @ 0x081F41B5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00FE
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F41E4 @ EventScript_JP_081F41E4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4207 @ EventText_JP_081F4207
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00D7
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
	.2byte 0x00FE
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F41E4: @ 0x081F41E4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4237 @ EventText_JP_081F4237
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F41EE: @ 0x081F41EE
	.string "どうも!\nやすくて　よく　きく　かんぽうや　です$"
EventText_JP_081F4207: @ 0x081F4207
	.string "フエンの　かんぽうやくを\nみにくるとは　なかなか　しぶいのう\pきにいった!　これを　もってけ!$"
EventText_JP_081F4237: @ 0x081F4237
	.string "おまえさんに　あげた　もくたんは\nかんぽうやくを　つくるのに　つかうが\lポケモンに　もたせても　すごいぞ!\pほのおタイプの　わざの　いりょくを\nたかめて　くれるのじゃよ!$"
EventText_JP_081F428D: @ 0x081F428D
	.string "かんぽうやくの　ききめは　すごいが\nポケモンに　のませると　きらわれるぞよ\lきっと　すっごく　にがいんじゃろうな!$"
MapScripts_JP_081F42C7: @ 0x081F42C7
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F42CD
	.byte 0
EventScript_JP_081F42CD: @ 0x081F42CD
	@ event command: call
	.byte 0x04
	.4byte 0x081F42D8 @ EventScript_JP_081F42D8
	@ event command: call
	.byte 0x04
	.4byte 0x081F432A @ EventScript_JP_081F432A
	@ event command: end
	.byte 0x02
EventScript_JP_081F42D8: @ 0x081F42D8
	@ event command: setvar
	.byte 0x16
	.2byte 0x400B
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x400E
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x400F
	.2byte 0x0000
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00C9
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F42FF @ EventScript_JP_081F42FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x400B
	.2byte 0x0001
EventScript_JP_081F42FF: @ 0x081F42FF
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0288
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F430D @ EventScript_JP_081F430D
	@ event command: setvar
	.byte 0x16
	.2byte 0x400C
	.2byte 0x0001
EventScript_JP_081F430D: @ 0x081F430D
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CB
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F431B @ EventScript_JP_081F431B
	@ event command: setvar
	.byte 0x16
	.2byte 0x400D
	.2byte 0x0001
EventScript_JP_081F431B: @ 0x081F431B
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x028A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4329 @ EventScript_JP_081F4329
	@ event command: setvar
	.byte 0x16
	.2byte 0x400E
	.2byte 0x0001
EventScript_JP_081F4329: @ 0x081F4329
	@ event command: return
	.byte 0x03
EventScript_JP_081F432A: @ 0x081F432A
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00C9
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4337 @ EventScript_JP_081F4337
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x3F
EventScript_JP_081F4337: @ 0x081F4337
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0288
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4344 @ EventScript_JP_081F4344
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x3F
EventScript_JP_081F4344: @ 0x081F4344
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CB
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4351 @ EventScript_JP_081F4351
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0004
	.byte 0x3F
EventScript_JP_081F4351: @ 0x081F4351
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x028A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F435E @ EventScript_JP_081F435E
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0005
	.byte 0x3F
EventScript_JP_081F435E: @ 0x081F435E
	@ event command: return
	.byte 0x03
EventScript_JP_081F435F: @ 0x081F435F
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x010C
	.2byte 0x0000
	.4byte 0x081F4961 @ EventText_JP_081F4961
	.4byte 0x081F4A13 @ EventText_JP_081F4A13
	.4byte 0x081F4394 @ EventScript_JP_081F4394
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0039
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4437 @ EventScript_JP_081F4437
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A8
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F43F0 @ EventScript_JP_081F43F0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4BB5 @ EventText_JP_081F4BB5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F4394: @ 0x081F4394
	@ event command: message
	.byte 0x67
	.4byte 0x081F4A9D @ EventText_JP_081F4A9D
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4AB5 @ EventText_JP_081F4AB5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x006C
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F3
	@ event command: setflag
	.byte 0x29
	.2byte 0x086A
	@ event command: addvar
	.byte 0x17
	.2byte 0x4085
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08242F10
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0004
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: setflag
	.byte 0x29
	.2byte 0x0326
	@ event command: setvar
	.byte 0x16
	.2byte 0x4053
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x081F4414 @ EventScript_JP_081F4414
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4B9A @ EventText_JP_081F4B9A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01D6
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F43F0: @ 0x081F43F0
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0152
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4B2B @ EventText_JP_081F4B2B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A8
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F4414: @ 0x081F4414
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0152
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
	.4byte 0x082430EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4B2B @ EventText_JP_081F4B2B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A8
	@ event command: return
	.byte 0x03
EventScript_JP_081F4437: @ 0x081F4437
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010C
	.2byte 0x0000
	.4byte 0x081F4C23 @ EventText_JP_081F4C23
	.4byte 0x081F4CA0 @ EventText_JP_081F4CA0
	.4byte 0x081F4CF6 @ EventText_JP_081F4CF6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4CAF @ EventText_JP_081F4CAF
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F4452: @ 0x081F4452
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x00C9
	.2byte 0x0002
	.4byte 0x081F4638 @ EventText_JP_081F4638
	.4byte 0x081F4650 @ EventText_JP_081F4650
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F465E @ EventText_JP_081F465E
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F446D: @ 0x081F446D
	@ event command: call
	.byte 0x04
	.4byte 0x081F42D8 @ EventScript_JP_081F42D8
	@ event command: release
	.byte 0x6C
	@ event command: special
	.byte 0x25
	.2byte 0x0195
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08244D20
	@ event command: end
	.byte 0x02
EventScript_JP_081F4482: @ 0x081F4482
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x00CB
	.2byte 0x0004
	.4byte 0x081F4685 @ EventText_JP_081F4685
	.4byte 0x081F46A9 @ EventText_JP_081F46A9
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F46BA @ EventText_JP_081F46BA
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F449D: @ 0x081F449D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x00CD
	.2byte 0x0002
	.4byte 0x081F46E7 @ EventText_JP_081F46E7
	.4byte 0x081F4732 @ EventText_JP_081F4732
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4745 @ EventText_JP_081F4745
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F44B8: @ 0x081F44B8
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x028A
	.2byte 0x0005
	.4byte 0x081F47F4 @ EventText_JP_081F47F4
	.4byte 0x081F480E @ EventText_JP_081F480E
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4819 @ EventText_JP_081F4819
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F44D3: @ 0x081F44D3
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x0288
	.2byte 0x0003
	.4byte 0x081F4780 @ EventText_JP_081F4780
	.4byte 0x081F479F @ EventText_JP_081F479F
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F47AF @ EventText_JP_081F47AF
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F44EE: @ 0x081F44EE
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x00CC
	.2byte 0x0001
	.4byte 0x081F4841 @ EventText_JP_081F4841
	.4byte 0x081F485D @ EventText_JP_081F485D
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4877 @ EventText_JP_081F4877
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F4509: @ 0x081F4509
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x00CA
	.2byte 0x0003
	.4byte 0x081F48A0 @ EventText_JP_081F48A0
	.4byte 0x081F48C8 @ EventText_JP_081F48C8
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F48CF @ EventText_JP_081F48CF
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F4524: @ 0x081F4524
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x01F5
	.2byte 0x0004
	.4byte 0x081F4901 @ EventText_JP_081F4901
	.4byte 0x081F491E @ EventText_JP_081F491E
	.4byte 0x081F446D @ EventScript_JP_081F446D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4939 @ EventText_JP_081F4939
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F453F: @ 0x081F453F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4554 @ EventScript_JP_081F4554
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4592 @ EventText_JP_081F4592
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F4554: @ 0x081F4554
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4625 @ EventText_JP_081F4625
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F455E: @ 0x081F455E
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F457E @ EventScript_JP_081F457E
	@ event command: goto
	.byte 0x05
	.4byte 0x081F4588 @ EventScript_JP_081F4588
	.byte 0x02
EventScript_JP_081F456E: @ 0x081F456E
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F457E @ EventScript_JP_081F457E
	@ event command: goto
	.byte 0x05
	.4byte 0x081F4588 @ EventScript_JP_081F4588
	.byte 0x02
EventScript_JP_081F457E: @ 0x081F457E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4C02 @ EventText_JP_081F4C02
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F4588: @ 0x081F4588
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4BF4 @ EventText_JP_081F4BF4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081F4592: @ 0x081F4592
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pフエンタウン　ジムの　リーダー　アスナは\nほのおタイプ　ポケモンの　つかいてだ!\pポケモンに　たいする　じょうねつは\nかざん　よりも　はげしく　あちィ!\pうっかり　ちかづくと　やけど　するから\nみずで　ひやしながら\lきばってこー　な!!$"
EventText_JP_081F4625: @ 0x081F4625
	.string "いやあー　あちィ　たたかい　だった!$"
EventText_JP_081F4638: @ 0x081F4638
	.string "あちちちちちっ!\nぷはーっ!　あつかったーっ!$"
EventText_JP_081F4650: @ 0x081F4650
	.string "あせが　めに　しみるぜ……$"
EventText_JP_081F465E: @ 0x081F465E
	.string "すなブロは　けっこうが　よくなって\nかんせつの　いたみに　こうかてき　だぜ!$"
EventText_JP_081F4685: @ 0x081F4685
	.string "ストレスを　かいしょう　する\nおれの　ひとときを　ジャマ　するなーっ!$"
EventText_JP_081F46A9: @ 0x081F46A9
	.string "アスナさんに　まけてしまえーっ!$"
EventText_JP_081F46BA: @ 0x081F46BA
	.string "はあ　ふう……\pすなブロに　ながく　はいっていると\nけっこう　つかれちゃう　もんだよ……$"
EventText_JP_081F46E7: @ 0x081F46E7
	.string "さすがに　つかれてきた　ようだね\nすなブロで　ひとやすみ　したいだろう?\pだが　きりょくを　たもつ　ことも\nトレーナーに　ひつような　さいのう　だよ$"
EventText_JP_081F4732: @ 0x081F4732
	.string "ひあそびは　けがのもと　だったか……$"
EventText_JP_081F4745: @ 0x081F4745
	.string "きみの　ちからは　ほんものだ……\nでも　リーダー　アスナさんは　つよいよ!\pあまく　みていると　おおやけど　するぜ!$"
EventText_JP_081F4780: @ 0x081F4780
	.string "おまえの　ポケモン\n200どの　あつさに　たえられるかよ!?$"
EventText_JP_081F479F: @ 0x081F479F
	.string "もえかたが　たりなかったか……$"
EventText_JP_081F47AF: @ 0x081F47AF
	.string "200どの　あつさ　ってのは\nようがんの　おんど!\pおまえの　ポケモン　おれに　かてたんだから\nようがんの　なかでも　へいき　だろうな!$"
EventText_JP_081F47F4: @ 0x081F47F4
	.string "えーっと!\nじゃあ　しょうぶの　あいて　しますね!$"
EventText_JP_081F480E: @ 0x081F480E
	.string "なんて　つよいの!?$"
EventText_JP_081F4819: @ 0x081F4819
	.string "あたしも　アスナさんと　いっしょに\nきれいで　つよい　トレーナーに　なるんだ!$"
EventText_JP_081F4841: @ 0x081F4841
	.string "ほら　ほらっ!\nきもちが　さめない　うちに　いくぜっ!$"
EventText_JP_081F485D: @ 0x081F485D
	.string "こんなに　あついのに\nおれの　こころが　さむい……$"
EventText_JP_081F4877: @ 0x081F4877
	.string "そのくらい　とうしを　もやして　いれば\nもしかしたら　リーダーにも　かてるかもな$"
EventText_JP_081F48A0: @ 0x081F48A0
	.string "みよ　この　もえさかる　ほのおを!\nオレの　しょうりを　よげんして　いるのだ!$"
EventText_JP_081F48C8: @ 0x081F48C8
	.string "おかしいなあ$"
EventText_JP_081F48CF: @ 0x081F48CF
	.string "いいもんね!　オレなんて\nたきびの　うえを　はだしで　はしれるぜ!\p……　おまえは　まね　するなよ$"
EventText_JP_081F4901: @ 0x081F4901
	.string "やまの　なかでも　とくに\nかざんが　だいすき　でして……$"
EventText_JP_081F491E: @ 0x081F491E
	.string "あれよ　あれよと　いうまに\nまけちまった　わけでして$"
EventText_JP_081F4939: @ 0x081F4939
	.string "アスナさんの　つよさに　ほれて\nわしは　ここに　いるわけ　でして……\lへへへへ$"
EventText_JP_081F4961: @ 0x081F4961
	.string "ようこそ　……じゃなくて\pよくぞ　ここまで　きた　ものだな!\pわたしは　ここの　ジムリーダーを\nつとめさせて　いただく　……じゃなくて\pジムリーダーを　まかされた　アスナだ!\pくう……\nジムリーダーに　なりたて　だからって\lゆだん　など　しないことだ!\pおじいちゃん　ゆずりの　さいのうと\nこのとちで　みがきあげた　ホットな　わざ\lあなたに　みせてやる!$"
EventText_JP_081F4A13: @ 0x081F4A13
	.string "くう……\nかたに　ちから　はいっちゃって……\pあたし……\nジムリーダーに　なりたて　だからって\lちょっと　むり　していたのかな……\pやっぱ　じぶんらしく　でないと\nいっしょに　たたかってくれる\lポケモンも　こまっちゃうよね!\pそれを　おしえてくれた\nあなたに　これ　あげる!$"
EventText_JP_081F4A9D: @ 0x081F4A9D
	.string "{PLAYER}は　アスナから\nヒートバッジを　もらった!$"
EventText_JP_081F4AB5: @ 0x081F4AB5
	.string "ヒートバッジが　あれば\nレベル50　までなら\lひとから　もらった　ポケモンでも\lいうことを　きいて　くれるんだ!\pそれに　ひでんわざの　かいりき　が\nつかえるようにも　なるよ!\pこれは　かんしゃの　きもち\nえんりょ　せずに　もらって!$"
EventText_JP_081F4B2B: @ 0x081F4B2B
	.string "わざマシン50　には\nオーバーヒートが　はいってるよ!\pその　わざは　あいてに\nおおきな　ダメージを　あたえるんだ!\pだけど　とくこうが\nがくっと　さがっちゃう　から\lながい　しょうぶには　むかないかも\p……　……　……$"
EventText_JP_081F4B9A: @ 0x081F4B9A
	.string "ジムリーダー　アスナを\nポケナビに　とうろく　した!$"
EventText_JP_081F4BB5: @ 0x081F4BB5
	.string "あなたの　つよさ\nだれかを　おもいださせるの　よね……\pそうだ!　トウカシティの　ジムリーダー\nセンリさんに　にているんだ!$"
EventText_JP_081F4BF4: @ 0x081F4BF4
	.string "フエンタウン　ポケモンジム$"
EventText_JP_081F4C02: @ 0x081F4C02
	.string "フエンタウン　ポケモンジム\pアスナ　にんてい　トレーナー!\n{PLAYER}$"
EventText_JP_081F4C23: @ 0x081F4C23
	.string "アスナ“しょうぶに　まけた　ぐらいで\nあたしは　へこたれたり　しない!\pなぜなら　あたしは　ポケモンが　すきで\nしょうぶを　するのが　すきで\lそれに……　このジムが　すきだから!\pさあ　もういちど　いっしょに\nホットな　わざを　ぶつけあいましょう!$"
EventText_JP_081F4CA0: @ 0x081F4CA0
	.string "ふぅ!　ばくはつ　すんぜん!$"
EventText_JP_081F4CAF: @ 0x081F4CAF
	.string "アスナ“しょうぶには　まけたけど\nこんなに　ヒートする　たたかいが　できて\lあたしは　まんぞくよ!\pそのうち　また　しょうぶ　しましょうね!$"
EventText_JP_081F4CF6: @ 0x081F4CF6
	.string "アスナ“しょうぶに　まけた　ぐらいで\nあたしは　へこたれたり　しない!\pなぜなら　あたしは　ポケモンが　すきで\nしょうぶを　するのが　すきで\lそれに……　このジムが　すきだから!\pさあ　もういちど　いっしょに\nホットな　わざを　ぶつけあいましょう!\p……あら?　たたかえる　ポケモンを\n1ひきしか　もって　いないんですね\pすみませんけど　2ひき　いじょうの\nポケモンを　もって　きてください$"
MapScripts_JP_081F4DBA: @ 0x081F4DBA
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F4DC0
	.byte 0
EventScript_JP_081F4DC0: @ 0x081F4DC0
	@ event command: call
	.byte 0x04
	.4byte 0x081F4DCB @ EventScript_JP_081F4DCB
	@ event command: call
	.byte 0x04
	.4byte 0x081F4E18 @ EventScript_JP_081F4E18
	@ event command: end
	.byte 0x02
EventScript_JP_081F4DCB: @ 0x081F4DCB
	@ event command: setvar
	.byte 0x16
	.2byte 0x4007
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4008
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x400A
	.2byte 0x0000
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CD
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4DED @ EventScript_JP_081F4DED
	@ event command: setvar
	.byte 0x16
	.2byte 0x4007
	.2byte 0x0001
EventScript_JP_081F4DED: @ 0x081F4DED
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4DFB @ EventScript_JP_081F4DFB
	@ event command: setvar
	.byte 0x16
	.2byte 0x4008
	.2byte 0x0001
EventScript_JP_081F4DFB: @ 0x081F4DFB
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CA
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4E09 @ EventScript_JP_081F4E09
	@ event command: setvar
	.byte 0x16
	.2byte 0x4009
	.2byte 0x0001
EventScript_JP_081F4E09: @ 0x081F4E09
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x01F5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4E17 @ EventScript_JP_081F4E17
	@ event command: setvar
	.byte 0x16
	.2byte 0x400A
	.2byte 0x0001
EventScript_JP_081F4E17: @ 0x081F4E17
	@ event command: return
	.byte 0x03
EventScript_JP_081F4E18: @ 0x081F4E18
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CD
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4E25 @ EventScript_JP_081F4E25
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x3F
EventScript_JP_081F4E25: @ 0x081F4E25
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4E32 @ EventScript_JP_081F4E32
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0001
	.byte 0x3F
EventScript_JP_081F4E32: @ 0x081F4E32
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x00CA
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4E3F @ EventScript_JP_081F4E3F
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0003
	.byte 0x3F
EventScript_JP_081F4E3F: @ 0x081F4E3F
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x01F5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F4E4C @ EventScript_JP_081F4E4C
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0004
	.byte 0x3F
EventScript_JP_081F4E4C: @ 0x081F4E4C
	@ event command: return
	.byte 0x03
	.byte 0x00
EventScript_JP_081F4E4E: @ 0x081F4E4E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4E6A @ EventText_JP_081F4E6A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F4E57: @ 0x081F4E57
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0120
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4EC0 @ EventText_JP_081F4EC0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F4E6A: @ 0x081F4E6A
	.string "おんせんで　タマゴを　あたためている\nばあさんから　きいたんじゃが……\pそだてやに　ポケモンを\n2ひき　いっしょに　あずけたらの\lなんと　タマゴが　みつかったそうじゃ!!$"
EventText_JP_081F4EC0: @ 0x081F4EC0
	.string "ジグザグマ“ぷしゅー!$"
	.byte 0x00
EventScript_JP_081F4ECD: @ 0x081F4ECD
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081F4EE4
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
	.byte 0x03, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x0F, 0x00, 0x18, 0x00, 0x53, 0x00
	.byte 0x4D, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F4EFA: @ 0x081F4EFA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4F0C @ EventText_JP_081F4F0C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F4F03: @ 0x081F4F03
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4F50 @ EventText_JP_081F4F50
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F4F0C: @ 0x081F4F0C
	.string "スピーダー　つかって\nポケモンの　すばやさ　あげるんじゃ!\pそうすりゃ　せんせいこうげき　できて\nたたかいが　ゆうりに　なるからのう!$"
EventText_JP_081F4F50: @ 0x081F4F50
	.string "えんとつやまの　ちょうじょう　だけで\nかうことが　できる　おみやげは\lポケモンに　あげると　よろこぶよ!$"
MapScripts_JP_081F4F85: @ 0x081F4F85
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F4F90
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081F4F90: @ 0x081F4F90
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0010
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081F4F99: @ 0x081F4F99
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F4FA7: @ 0x081F4FA7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4FF9 @ EventText_JP_081F4FF9
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F4FB0: @ 0x081F4FB0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F4FC2 @ EventText_JP_081F4FC2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F4FB9: @ 0x081F4FB9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F502B @ EventText_JP_081F502B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F4FC2: @ 0x081F4FC2
	.string "ポケモンと　いっしょに　あるいていると\nなんだか　ポケモンが　なついてくれるような\lそんな　きが　するのよね$"
EventText_JP_081F4FF9: @ 0x081F4FF9
	.string "おんせんに　はいる　だけで\nげんきに　なるなんて　ふしぎだなー!\lポケモンも　いれて　あげたいなー$"
EventText_JP_081F502B: @ 0x081F502B
	.string "ほっほっほ!　おわかいの\nここから　おんせんに　いけますぞ!\pポケモンが　ここで　やすむのなら\nひとも　おんせんで　ゆっくり　しませんと!$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081F5099: @ 0x081F5099
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081F50B0
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
	.byte 0x03, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x55, 0x00, 0x53, 0x00, 0x4F, 0x00, 0x4D, 0x00
	.byte 0x4B, 0x00, 0x4C, 0x00, 0x4A, 0x00, 0x49, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F50CC: @ 0x081F50CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F50F1 @ EventText_JP_081F50F1
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F50D5: @ 0x081F50D5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5152 @ EventText_JP_081F5152
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F50DE: @ 0x081F50DE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013B
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5148 @ EventText_JP_081F5148
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F50F1: @ 0x081F50F1
	.string "あたしの　エネコにね\nつきのいしを　つかってね……\pしんか　させるか　どうか\nすっごい　まよってるのよぉ\pしんか　させると　つよくなるけど\nすがたかたち　かわっちゃうし……$"
EventText_JP_081F5148: @ 0x081F5148
	.string "エネコ“みゃおう?$"
EventText_JP_081F5152: @ 0x081F5152
	.string "ひろった　きんのたま……\nやっぱり　うるしか　ないのかなあ?\lほかに　つかいみちも　ないからなあ……$"
MapScripts_JP_081F5185: @ 0x081F5185
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081F51A4
	.byte 0x04
	.4byte MapScriptTable_JP_081F5190
	.byte 0
MapScriptTable_JP_081F5190: @ 0x081F5190
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F519A
	.2byte 0
EventScript_JP_081F519A: @ 0x081F519A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F51A4: @ 0x081F51A4
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F51CE
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_081F51D7
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_081F52EC
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_081F520C
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_081F52B2
	.2byte 0
EventScript_JP_081F51CE: @ 0x081F51CE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_081F51D7: @ 0x081F51D7
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274DB9 @ gText_Rom_274DB9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F520C: @ 0x081F520C
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274E1B @ gText_Rom_274E1B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x08274E34 @ gText_Rom_274E34
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
EventScript_JP_081F5246: @ 0x081F5246
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274E4A @ gText_Rom_274E4A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5292 @ EventScript_JP_081F5292
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: message
	.byte 0x67
	.4byte 0x08274E74 @ gText_Rom_274E74
	@ event command: waitmessage
	.byte 0x66
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: waitfanfare
	.byte 0x32
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274ED5 @ gText_Rom_274ED5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F5292: @ 0x081F5292
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274E82 @ gText_Rom_274E82
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F52A3: @ 0x081F52A3
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274E1B @ gText_Rom_274E1B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F5246 @ EventScript_JP_081F5246
	.byte 0x02
EventScript_JP_081F52B2: @ 0x081F52B2
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x08274EB4 @ gText_Rom_274EB4
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274ED5 @ gText_Rom_274ED5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F52EC: @ 0x081F52EC
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x08274EED @ gText_Rom_274EED
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: goto
	.byte 0x05
	.4byte 0x081F545B @ EventScript_JP_081F545B
EventScript_JP_081F5320: @ 0x081F5320
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081F52A3 @ EventScript_JP_081F52A3
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274A30 @ gText_Rom_274A30
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_081F5340: @ 0x081F5340
	@ event command: message
	.byte 0x67
	.4byte 0x08274A71 @ gText_Rom_274A71
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x17
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F537C @ EventScript_JP_081F537C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5488 @ EventScript_JP_081F5488
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54E4 @ EventScript_JP_081F54E4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54E4 @ EventScript_JP_081F54E4
EventScript_JP_081F537C: @ 0x081F537C
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5495 @ EventScript_JP_081F5495
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274C64 @ gText_Rom_274C64
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54E1 @ EventScript_JP_081F54E1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274C14 @ gText_Rom_274C14
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54E1 @ EventScript_JP_081F54E1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5401 @ EventScript_JP_081F5401
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54E1 @ EventScript_JP_081F54E1
EventScript_JP_081F5401: @ 0x081F5401
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54CA @ EventScript_JP_081F54CA
EventScript_JP_081F545B: @ 0x081F545B
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274DA3 @ gText_Rom_274DA3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x081F54EE @ EventScript_JP_081F54EE
	@ event command: warp
	.byte 0x39
	.byte 0x05
	.byte 0x02
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0007
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_081F5488: @ 0x081F5488
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274AA3 @ gText_Rom_274AA3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F5340 @ EventScript_JP_081F5340
EventScript_JP_081F5495: @ 0x081F5495
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54B0 @ EventScript_JP_081F54B0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F54BD @ EventScript_JP_081F54BD
EventScript_JP_081F54B0: @ 0x081F54B0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274C84 @ gText_Rom_274C84
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F54EC @ EventScript_JP_081F54EC
EventScript_JP_081F54BD: @ 0x081F54BD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274CFD @ gText_Rom_274CFD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F54EC @ EventScript_JP_081F54EC
EventScript_JP_081F54CA: @ 0x081F54CA
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x081F54E4 @ EventScript_JP_081F54E4
EventScript_JP_081F54E1: @ 0x081F54E1
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_081F54E4: @ 0x081F54E4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274A8B @ gText_Rom_274A8B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_081F54EC: @ 0x081F54EC
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F54EE: @ 0x081F54EE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F551D @ Movement_JP_081F551D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F5524 @ Movement_JP_081F5524
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0006
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F5521 @ Movement_JP_081F5521
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F5528 @ Movement_JP_081F5528
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0006
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: return
	.byte 0x03
Movement_JP_081F551D: @ 0x081F551D
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F5521: @ 0x081F5521
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081F5524: @ 0x081F5524
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F5528: @ 0x081F5528
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_081F552C: @ 0x081F552C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F56C2 @ EventText_JP_081F56C2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F5535: @ 0x081F5535
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5623 @ EventText_JP_081F5623
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F553E: @ 0x081F553E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5657 @ EventText_JP_081F5657
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F5547: @ 0x081F5547
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01CD
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5564 @ EventScript_JP_081F5564
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5708 @ EventText_JP_081F5708
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x01CD
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5564: @ 0x081F5564
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F57A2 @ EventText_JP_081F57A2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F556E: @ 0x081F556E
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822FD87 @ gText_Rom_22FD87
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F557D @ EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F557D: @ 0x081F557D
	@ event command: message
	.byte 0x67
	.4byte 0x0822FDA0 @ gText_Rom_22FDA0
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x00
	.byte 0x70
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F55DB @ EventScript_JP_081F55DB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F55E9 @ EventScript_JP_081F55E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F55F7 @ EventScript_JP_081F55F7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5605 @ EventScript_JP_081F5605
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5613 @ EventScript_JP_081F5613
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5621 @ EventScript_JP_081F5621
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5621 @ EventScript_JP_081F5621
	@ event command: end
	.byte 0x02
EventScript_JP_081F55DB: @ 0x081F55DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275BCD @ gText_Rom_275BCD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F557D @ EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F55E9: @ 0x081F55E9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822FDB0 @ gText_Rom_22FDB0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F557D @ EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F55F7: @ 0x081F55F7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822FE72 @ gText_Rom_22FE72
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F557D @ EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F5605: @ 0x081F5605
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822FECB @ gText_Rom_22FECB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F557D @ EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F5613: @ 0x081F5613
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822FFB6 @ gText_Rom_22FFB6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F557D @ EventScript_JP_081F557D
	.byte 0x02
EventScript_JP_081F5621: @ 0x081F5621
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081F5623: @ 0x081F5623
	.string "ふふふふふふ\pほんの　こどもだと　おもわせて\nみんなを　ゆだん　させて\lボクは　ゆうしょう　するのだ!$"
EventText_JP_081F5657: @ 0x081F5657
	.string "バトルテントって　まちに　よって\nちょうせん　できる　ことが　ちがうでしょ?\lあたしは　だんぜん　ハジツゲの\lバトルテントが　すきなのよね!\pしんじてる　ポケモンたちと　かちぬくって\nすごく　かっこいいじゃない?$"
EventText_JP_081F56C2: @ 0x081F56C2
	.string "テントというから　キャンプ　しにきたら…\pさいきんの　テント　というのは\nごうかな　もん　だなあ\lよし　ついでに　ちょうせん　してみるか?$"
EventText_JP_081F5708: @ 0x081F5708
	.string "エニシダ“やあ　{PLAYER}{KUN}\nきたんだね　バトルテントに!\pどうも　この　ちほうは\nノンビリ　した　ひとが　おおくてね\lもっと　こう……\lかちたい　パワーの　ありまくりな\lひとを　わたしは　もとめて　いるんだよ!\lそういう　トレーナーが　いれば　すぐにでも\p……って　いや　なんでもないよ\nじゃ　がんばってね!$"
EventText_JP_081F57A2: @ 0x081F57A2
	.string "エニシダ“わたし　なんかに\nいつまでも　かまって　いないで\lさっそく　チャレンジ\lして　みたら　どうだい?$"
MapScripts_JP_081F57D8: @ 0x081F57D8
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081F57DE
	.byte 0
MapScriptTable_JP_081F57DE: @ 0x081F57DE
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F57E8
	.2byte 0
EventScript_JP_081F57E8: @ 0x081F57E8
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F582C @ Movement_JP_081F582C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F582C @ Movement_JP_081F582C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0002
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F5832 @ Movement_JP_081F5832
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F5831 @ Movement_JP_081F5831
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0002
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x05
	.byte 0x03
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0004
	.byte 0x27, 0x6B, 0x02
Movement_JP_081F582C: @ 0x081F582C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F5831: @ 0x081F5831
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventText_JP_081F5835: @ 0x081F5835
	.string "1じ　しんさでは　いいセン　いくけど\nなぜか　アピールで　かてないんだ……\pじぶんの　ポケモンばっかり　みてると\nかてないって　ことかなあ$"
EventText_JP_081F587B: @ 0x081F587B
	.string "みて!　わたしの　ポケモン\nこんなに　リボンが　いっぱい!\pあなたの　ポケモンは　リボン　もらった?\nもらって　いれば　ポケナビで　みられるわよ!$"
EventText_JP_081F58C5: @ 0x081F58C5
	.string "ジムリーダーにも　かてない……\pコンテストでも　かてない……\pあっちのまち　こっちのまちを\nいったり　きたり　だよ……$"
EventText_JP_081F5901: @ 0x081F5901
	.string "ポケモン　コンテスト\nスーパーランク　ステージ!$"
MapScripts_JP_081F591A: @ 0x081F591A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F592A
	.byte 0x02
	.4byte MapScriptTable_JP_081F595E
	.byte 0x04
	.4byte MapScriptTable_JP_081F5C31
	.byte 0
EventScript_JP_081F592A: @ 0x081F592A
	@ event command: call
	.byte 0x04
	.4byte 0x081F5930 @ EventScript_JP_081F5930
	@ event command: end
	.byte 0x02
EventScript_JP_081F5930: @ 0x081F5930
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5948 @ EventScript_JP_081F5948
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5953 @ EventScript_JP_081F5953
	@ event command: return
	.byte 0x03
EventScript_JP_081F5948: @ 0x081F5948
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0064
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0064
	@ event command: return
	.byte 0x03
EventScript_JP_081F5953: @ 0x081F5953
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0069
	@ event command: setvar
	.byte 0x16
	.2byte 0x4010
	.2byte 0x0069
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081F595E: @ 0x081F595E
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F5968
	.2byte 0
EventScript_JP_081F5968: @ 0x081F5968
	@ event command: lockall
	.byte 0x69
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x0001
	.byte 0x05
	.byte 0x03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F5C0E @ Movement_JP_081F5C0E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081F5BF4 @ EventScript_JP_081F5BF4
EventScript_JP_081F5990: @ 0x081F5990
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081F5C17 @ Movement_JP_081F5C17
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F5C24 @ Movement_JP_081F5C24
	@ event command: playse
	.byte 0x2F
	.2byte 0x00B9
	@ event command: waitse
	.byte 0x30
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08230916 @ gText_Rom_230916
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0823081C
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5A1D @ EventScript_JP_081F5A1D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F5C24 @ Movement_JP_081F5C24
	@ event command: playse
	.byte 0x2F
	.2byte 0x00C5
	@ event command: waitse
	.byte 0x30
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08230944 @ gText_Rom_230944
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_081F59FF: @ 0x081F59FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: warp
	.byte 0x39
	.byte 0x05
	.byte 0x01
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0006
	.byte 0x27
EventScript_JP_081F5A1D: @ 0x081F5A1D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F5C24 @ Movement_JP_081F5C24
	@ event command: playse
	.byte 0x2F
	.2byte 0x0014
	@ event command: waitse
	.byte 0x30
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08230930 @ gText_Rom_230930
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5B74 @ EventScript_JP_081F5B74
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081F5C1F @ Movement_JP_081F5C1F
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F5C27 @ Movement_JP_081F5C27
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F5C15 @ Movement_JP_081F5C15
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08230958 @ gText_Rom_230958
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0170
	@ event command: waitfanfare
	.byte 0x32
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_081F5AAB: @ 0x081F5AAB
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F5BC4 @ EventScript_JP_081F5BC4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F5BCB @ EventScript_JP_081F5BCB
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x06
	.byte 0x68
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5B59 @ EventScript_JP_081F5B59
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5AF9 @ EventScript_JP_081F5AF9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5B27 @ EventScript_JP_081F5B27
EventScript_JP_081F5AF9: @ 0x081F5AF9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08230A44 @ gText_Rom_230A44
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5AAB @ EventScript_JP_081F5AAB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5BD2 @ EventScript_JP_081F5BD2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5AAB @ EventScript_JP_081F5AAB
EventScript_JP_081F5B27: @ 0x081F5B27
	@ event command: message
	.byte 0x67
	.4byte 0x08230A5E @ gText_Rom_230A5E
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5AAB @ EventScript_JP_081F5AAB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F59FF @ EventScript_JP_081F59FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5AAB @ EventScript_JP_081F5AAB
EventScript_JP_081F5B59: @ 0x081F5B59
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F5C2C @ Movement_JP_081F5C2C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F5C13 @ Movement_JP_081F5C13
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F5990 @ EventScript_JP_081F5990
	.byte 0x27
EventScript_JP_081F5B74: @ 0x081F5B74
	@ event command: delay
	.byte 0x28
	.2byte 0x003C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: warp
	.byte 0x39
	.byte 0x05
	.byte 0x01
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0006
	.byte 0x27, 0x16, 0x04, 0x80, 0x01, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x25, 0xED, 0x00, 0x21, 0x0D
	.byte 0x80, 0x0F, 0x27, 0x06, 0x01, 0x34, 0x5A, 0x1F, 0x08, 0x17, 0x0D, 0x80, 0x01, 0x00, 0x16, 0x04
	.byte 0x80, 0x02, 0x00, 0x16, 0x05, 0x80, 0x01, 0x00, 0x19, 0x06, 0x80, 0x0D, 0x80, 0x25, 0xED, 0x00
EventScript_JP_081F5BC4: @ 0x081F5BC4
	@ event command: message
	.byte 0x67
	.4byte 0x08230972 @ gText_Rom_230972
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_081F5BCB: @ 0x081F5BCB
	@ event command: message
	.byte 0x67
	.4byte 0x08230995 @ gText_Rom_230995
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_081F5BD2: @ 0x081F5BD2
	@ event command: message
	.byte 0x67
	.4byte 0x08230A7F @ gText_Rom_230A7F
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00F3
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_081F5BF4: @ 0x081F5BF4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F5C27 @ Movement_JP_081F5C27
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F5C15 @ Movement_JP_081F5C15
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F5AAB @ EventScript_JP_081F5AAB
	.byte 0x02
Movement_JP_081F5C0E: @ 0x081F5C0E
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F5C13: @ 0x081F5C13
	@ object movement sequence
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F5C15: @ 0x081F5C15
	@ object movement sequence
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F5C17: @ 0x081F5C17
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
	.byte 0x0A, 0xFE
Movement_JP_081F5C1F: @ 0x081F5C1F
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F5C24: @ 0x081F5C24
	@ object movement sequence
	.byte 0x51 @ disable_jump_landing_ground_effect
	.byte 0x46 @ jump_in_place_down
	.byte 0xFE @ step_end
Movement_JP_081F5C27: @ 0x081F5C27
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F5C2C: @ 0x081F5C2C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
MapScriptTable_JP_081F5C31: @ 0x081F5C31
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F5C3B
	.2byte 0
EventScript_JP_081F5C3B: @ 0x081F5C3B
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x05
	.byte 0x03
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0001
	.byte 0x05
	.byte 0x03
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: end
	.byte 0x02
MapScripts_JP_081F5C4E: @ 0x081F5C4E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F5C59
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081F5C59: @ 0x081F5C59
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0011
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081F5C62: @ 0x081F5C62
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5C70: @ 0x081F5C70
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5DD8 @ EventText_JP_081F5DD8
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F5C79: @ 0x081F5C79
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5E18 @ EventText_JP_081F5E18
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F5C82: @ 0x081F5C82
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5CEC @ EventText_JP_081F5CEC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5CA9 @ EventScript_JP_081F5CA9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5CB9 @ EventScript_JP_081F5CB9
	@ event command: end
	.byte 0x02
EventScript_JP_081F5CA9: @ 0x081F5CA9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081F5CD4 @ Movement_JP_081F5CD4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F5CC9 @ EventScript_JP_081F5CC9
	.byte 0x02
EventScript_JP_081F5CB9: @ 0x081F5CB9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081F5CE1 @ Movement_JP_081F5CE1
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F5CC9 @ EventScript_JP_081F5CC9
	.byte 0x02
EventScript_JP_081F5CC9: @ 0x081F5CC9
	@ event command: playse
	.byte 0x2F
	.2byte 0x0012
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0366
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_081F5CD4: @ 0x081F5CD4
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081F5CE1: @ 0x081F5CE1
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
EventText_JP_081F5CEC: @ 0x081F5CEC
	.string "あなたは……?\p{PLAYER}{KUN}　というのですか\nあなた　トレーナー　なんですね\pということは　あたしの　つくった\nあずかりシステム　つかってますね?\pだって　つかいたいから\nパソコンの　まえに　いる　あたしに\lはなしかけてきた　という　わけですよね\lかんたんな　すいり　です\pあっ　あたし　マユミ　といいます\pあずかりシステムを　つかっている\nトレーナーに　あえて　すごく　うれしいです\pよかったら　あたしの　いえにも\nあそびに　きてください\l114ばんどうろに　ありますから$"
EventText_JP_081F5DD8: @ 0x081F5DD8
	.string "おおむかしの　ポケモンって\nどんな　すがた　だったのかしら?\pこの　まちの　はずれにいる\nかせきマニアなら　おしえてくれるかも$"
EventText_JP_081F5E18: @ 0x081F5E18
	.string "この　ハジツゲの　はたけ　ではな\nかざんばいの　なかでも　そだつような\lじょうぶな　きの　なえを　うえてるんじゃ$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081F5E79: @ 0x081F5E79
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00E5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5F18 @ EventScript_JP_081F5F18
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0118
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5E9E @ EventScript_JP_081F5E9E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5F54 @ EventText_JP_081F5F54
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5E9E: @ 0x081F5E9E
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081F5EF1 @ EventScript_JP_081F5EF1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F5F02 @ EventScript_JP_081F5F02
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5F0B @ EventScript_JP_081F5F0B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6035 @ EventText_JP_081F6035
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x013B
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
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0118
	@ event command: call
	.byte 0x04
	.4byte 0x08243467
	@ event command: setflag
	.byte 0x29
	.2byte 0x00E5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F605B @ EventText_JP_081F605B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5EF1: @ 0x081F5EF1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5F54 @ EventText_JP_081F5F54
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F5FBC @ EventText_JP_081F5FBC
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
EventScript_JP_081F5F02: @ 0x081F5F02
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F609F @ EventText_JP_081F609F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: return
	.byte 0x03
EventScript_JP_081F5F0B: @ 0x081F5F0B
	@ event command: setflag
	.byte 0x29
	.2byte 0x0002
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6085 @ EventText_JP_081F6085
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5F18: @ 0x081F5F18
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F605B @ EventText_JP_081F605B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5F22: @ 0x081F5F22
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00E5
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5F4A @ EventScript_JP_081F5F4A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F5F40 @ EventScript_JP_081F5F40
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F60E3 @ EventText_JP_081F60E3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5F40: @ 0x081F5F40
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F611C @ EventText_JP_081F611C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F5F4A: @ 0x081F5F4A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6138 @ EventText_JP_081F6138
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F5F54: @ 0x081F5F54
	.string "ソライシ“ああ……\nマグマだんに　だまされたからと　いって\lいんせきが　てに　はいる　ばしょを\lおしえてしまったら　だめ　だなあ……\pりゅうせいのたき　の　いんせき\nもう　ぼくの　モノには　ならないよな……$"
EventText_JP_081F5FBC: @ 0x081F5FBC
	.string "おお!　ええ?\pそれは……\pもしかして　もしかすると……\pマグマだんが　りゅうせいのたき　から\nもっていった　いんせき　ですか……!?\pよかったら　ぼくに　ください!\pただで　とは　いいません\nかわりに　この　わざマシンを\lあげますから……$"
EventText_JP_081F6035: @ 0x081F6035
	.string "ソライシ“この　わざマシンは\nぼくの　きもちです\lぜひ　つかってください!$"
EventText_JP_081F605B: @ 0x081F605B
	.string "ソライシ“いやー　すごく　うれしいな\nこれで　ぼくの　けんきゅうも　はかどります!$"
EventText_JP_081F6085: @ 0x081F6085
	.string "ソライシ“そんな……\nものすごく　がっかりだよ……$"
EventText_JP_081F609F: @ 0x081F609F
	.string "ソライシ“その　いんせき……\nよかったら　ぼくに　ください!\pただで　とは　いいません\nかわりに　この　わざマシンを\lあげますから……$"
EventText_JP_081F60E3: @ 0x081F60E3
	.string "ソライシはかせは\nマグマだんの　ひとと　いっしょに\l114ばん　どうろに　ある\lりゅうせいのたきに　いきましたよ$"
EventText_JP_081F611C: @ 0x081F611C
	.string "ソライシはかせ……\nあんなに　おちこんで　かわいそう!$"
EventText_JP_081F6138: @ 0x081F6138
	.string "ソライシはかせ　ったら\nあんなに　よろこんで　かわいい!$"
	.byte 0x00
EventScript_JP_081F6156: @ 0x081F6156
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F617B @ EventScript_JP_081F617B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F622F @ EventText_JP_081F622F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081F617B @ EventScript_JP_081F617B
	.byte 0x02
EventScript_JP_081F617B: @ 0x081F617B
	@ event command: checkitem
	.byte 0x47
	.2byte 0x006F
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6225 @ EventScript_JP_081F6225
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F62A4 @ EventText_JP_081F62A4
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6225 @ EventScript_JP_081F6225
	@ event command: goto
	.byte 0x05
	.4byte 0x081F61A9 @ EventScript_JP_081F61A9
	.byte 0x02
EventScript_JP_081F61A9: @ 0x081F61A9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F62CB @ EventText_JP_081F62CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00DB
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6225 @ EventScript_JP_081F6225
	@ event command: special
	.byte 0x25
	.2byte 0x0147
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6217 @ EventScript_JP_081F6217
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6209 @ EventScript_JP_081F6209
	@ event command: goto
	.byte 0x05
	.4byte 0x081F61DF @ EventScript_JP_081F61DF
	.byte 0x02
EventScript_JP_081F61DF: @ 0x081F61DF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F62DB @ EventText_JP_081F62DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x00E0
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F61A9 @ EventScript_JP_081F61A9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6310 @ EventText_JP_081F6310
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: takeitem
	.byte 0x45
	.2byte 0x006F
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081F6225 @ EventScript_JP_081F6225
	.byte 0x02
EventScript_JP_081F6209: @ 0x081F6209
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F62E9 @ EventText_JP_081F62E9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F61A9 @ EventScript_JP_081F61A9
	.byte 0x02
EventScript_JP_081F6217: @ 0x081F6217
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F634D @ EventText_JP_081F634D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F61A9 @ EventScript_JP_081F61A9
	.byte 0x02
EventScript_JP_081F6225: @ 0x081F6225
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F632B @ EventText_JP_081F632B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081F622F: @ 0x081F622F
	.string "ぼく　ポケモン　わざマニア\pポケモンが　せいちょうして　おぼえていく\nわざを　すべて　しっていて\lポケモンに　おしえることが　できるんだ!\pぼくが　いま　あつめている\nハートのウロコを　くれたら\lしってる　わざを　おしえてあげるよ!$"
EventText_JP_081F62A4: @ 0x081F62A4
	.string "おおっ!\nそれは　まさしく　ハートのウロコ!\pわざを　おぼえさせたいんだね?$"
EventText_JP_081F62CB: @ 0x081F62CB
	.string "どの　ポケモンに　するんだい?$"
EventText_JP_081F62DB: @ 0x081F62DB
	.string "どの　わざに　するんだい?$"
EventText_JP_081F62E9: @ 0x081F62E9
	.string "ごめんね……\pぼくが　その　ポケモンに\nおしえられる　わざは　ないみたいだよ$"
EventText_JP_081F6310: @ 0x081F6310
	.string "{PLAYER}は　おれいに\nハートのウロコを　1まい　あげた!$"
EventText_JP_081F632B: @ 0x081F632B
	.string "おぼえさせたい　わざが　あったら\nハートのウロコを　もってきてね!$"
EventText_JP_081F634D: @ 0x081F634D
	.string "えっ?\nタマゴに　おしえられる　わざは　ないよ$"
MapScripts_JP_081F6365: @ 0x081F6365
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081F6384
	.byte 0x04
	.4byte MapScriptTable_JP_081F6370
	.byte 0
MapScriptTable_JP_081F6370: @ 0x081F6370
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F637A
	.2byte 0
EventScript_JP_081F637A: @ 0x081F637A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F6384: @ 0x081F6384
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F63AE
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_081F63B7
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_081F64CC
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_081F63EC
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_081F6492
	.2byte 0
EventScript_JP_081F63AE: @ 0x081F63AE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_081F63B7: @ 0x081F63B7
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A7B5 @ gText_Rom_22A7B5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F63EC: @ 0x081F63EC
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082752A6 @ gText_Rom_2752A6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x082752D8 @ gText_Rom_2752D8
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
EventScript_JP_081F6426: @ 0x081F6426
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082752ED @ gText_Rom_2752ED
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6472 @ EventScript_JP_081F6472
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: message
	.byte 0x67
	.4byte 0x08227865 @ gText_Rom_227865
	@ event command: waitmessage
	.byte 0x66
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: waitfanfare
	.byte 0x32
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082750A3 @ gText_Rom_2750A3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F6472: @ 0x081F6472
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A766 @ gText_Rom_22A766
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F6483: @ 0x081F6483
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082752A6 @ gText_Rom_2752A6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F6426 @ EventScript_JP_081F6426
	.byte 0x02
EventScript_JP_081F6492: @ 0x081F6492
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x0827527B @ gText_Rom_27527B
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082750A3 @ gText_Rom_2750A3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F64CC: @ 0x081F64CC
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822A790 @ gText_Rom_22A790
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x0822A79A @ gText_Rom_22A79A
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: goto
	.byte 0x05
	.4byte 0x081F6643 @ EventScript_JP_081F6643
EventScript_JP_081F6508: @ 0x081F6508
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081F6483 @ EventScript_JP_081F6483
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274F21 @ gText_Rom_274F21
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_081F6528: @ 0x081F6528
	@ event command: message
	.byte 0x67
	.4byte 0x08274F55 @ gText_Rom_274F55
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x17
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6564 @ EventScript_JP_081F6564
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6670 @ EventScript_JP_081F6670
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66CC @ EventScript_JP_081F66CC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66CC @ EventScript_JP_081F66CC
EventScript_JP_081F6564: @ 0x081F6564
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000F
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F667D @ EventScript_JP_081F667D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827522E @ gText_Rom_27522E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00F5
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66C9 @ EventScript_JP_081F66C9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827524A @ gText_Rom_27524A
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66C9 @ EventScript_JP_081F66C9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F65E9 @ EventScript_JP_081F65E9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66C9 @ EventScript_JP_081F66C9
EventScript_JP_081F65E9: @ 0x081F65E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66B2 @ EventScript_JP_081F66B2
EventScript_JP_081F6643: @ 0x081F6643
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827526A @ gText_Rom_27526A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x081F66D6 @ EventScript_JP_081F66D6
	@ event command: warp
	.byte 0x39
	.byte 0x06
	.byte 0x01
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0007
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_081F6670: @ 0x081F6670
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08274F71 @ gText_Rom_274F71
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F6528 @ EventScript_JP_081F6528
EventScript_JP_081F667D: @ 0x081F667D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6698 @ EventScript_JP_081F6698
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F66A5 @ EventScript_JP_081F66A5
EventScript_JP_081F6698: @ 0x081F6698
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082750F0 @ gText_Rom_2750F0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F66D4 @ EventScript_JP_081F66D4
EventScript_JP_081F66A5: @ 0x081F66A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827518F @ gText_Rom_27518F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F66D4 @ EventScript_JP_081F66D4
EventScript_JP_081F66B2: @ 0x081F66B2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x081F66CC @ EventScript_JP_081F66CC
EventScript_JP_081F66C9: @ 0x081F66C9
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_081F66CC: @ 0x081F66CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082750A3 @ gText_Rom_2750A3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_081F66D4: @ 0x081F66D4
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F66D6: @ 0x081F66D6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F6705 @ Movement_JP_081F6705
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F6705 @ Movement_JP_081F6705
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0006
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F6709 @ Movement_JP_081F6709
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F670C @ Movement_JP_081F670C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0006
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: return
	.byte 0x03
Movement_JP_081F6705: @ 0x081F6705
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F6709: @ 0x081F6709
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081F670C: @ 0x081F670C
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_081F6710: @ 0x081F6710
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00EB
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6747 @ EventScript_JP_081F6747
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F696C @ EventText_JP_081F696C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x014D
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
	.2byte 0x00EB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F69C3 @ EventText_JP_081F69C3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F6747: @ 0x081F6747
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F69C3 @ EventText_JP_081F69C3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F6751: @ 0x081F6751
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6A08 @ EventText_JP_081F6A08
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F675A: @ 0x081F675A
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6869 @ EventText_JP_081F6869
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F6765: @ 0x081F6765
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01CC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6782 @ EventScript_JP_081F6782
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6A5B @ EventText_JP_081F6A5B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: addvar
	.byte 0x17
	.2byte 0x40D1
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x01CC
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F6782: @ 0x081F6782
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6ADD @ EventText_JP_081F6ADD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F678C: @ 0x081F678C
	@ event command: lock
	.byte 0x6A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6909 @ EventText_JP_081F6909
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F6797: @ 0x081F6797
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275C42 @ gText_Rom_275C42
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F67A6: @ 0x081F67A6
	@ event command: message
	.byte 0x67
	.4byte 0x0822AC54 @ gText_Rom_22AC54
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000C
	@ event command: special
	.byte 0x25
	.2byte 0x01BB
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6813 @ EventScript_JP_081F6813
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6821 @ EventScript_JP_081F6821
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F682F @ EventScript_JP_081F682F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F683D @ EventScript_JP_081F683D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F684B @ EventScript_JP_081F684B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6859 @ EventScript_JP_081F6859
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6867 @ EventScript_JP_081F6867
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6867 @ EventScript_JP_081F6867
	@ event command: end
	.byte 0x02
EventScript_JP_081F6813: @ 0x081F6813
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275BCD @ gText_Rom_275BCD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F6821: @ 0x081F6821
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AC64 @ gText_Rom_22AC64
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F682F: @ 0x081F682F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822ACC9 @ gText_Rom_22ACC9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F683D: @ 0x081F683D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AD4C @ gText_Rom_22AD4C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F684B: @ 0x081F684B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AE0B @ gText_Rom_22AE0B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F6859: @ 0x081F6859
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822AEA7 @ gText_Rom_22AEA7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081F67A6 @ EventScript_JP_081F67A6
	.byte 0x02
EventScript_JP_081F6867: @ 0x081F6867
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081F6869: @ 0x081F6869
	.string "どんなに　つよい　ポケモンも\nきらいな　わざは　できるだけ\lつかいたく　ない　みたい\pたとえば　おとなしい　せいかくの\nポケモンは　あいてを　いため　つけたり\lするのは　すきじゃ　ない　だろうね\pきっと　じぶんの　ちからを　はっき　できない\nとき　って　きらいな　わざを　むりに\lだそう　として　しっぱい　してるんだよ$"
EventText_JP_081F6909: @ 0x081F6909
	.string "でもでも　ぼくの　おねえちゃん　って\nふだんは　とっても　おとなしい　けど\lおこると　すっごーーーく　こわーーーいよ!\pだから　おとなしい　ポケモン　だって\nおこったら　きっと　こわーーーいよ!!$"
EventText_JP_081F696C: @ 0x081F696C
	.string "あたしの　ポケモンへの　きもち……\nそれは　まさに　メロメロなのよ……\pあら　へんなところ　みられちゃった\pまあ　いいわ\nあなたの　ポケモンに\lこの　わざマシンは　いかが?$"
EventText_JP_081F69C3: @ 0x081F69C3
	.string "ポケモンの　あたしへの　きもちも……\nやっぱり　メロメロに　ちがいないわ!\pだって　あたしの　おもう　とおりに\nたたかって　くれるもの!$"
EventText_JP_081F6A08: @ 0x081F6A08
	.string "きみの　ポケモンには\nどんなわざを　もたせて　いるんだい?\pやっぱり　じぶんを　かいふくしたり\nぼうぎょを　あげたり　するわざが　あると\lゆうり　だと　おもうんだよ$"
EventText_JP_081F6A5B: @ 0x081F6A5B
	.string "エニシダ“これは　これは\n{PLAYER}{KUN}　あえると　おもってたよ!\pバトルテント　って　いうのはさ!\nどんな　ルール　だって\lどんな　たたかいかた　だって\lかんけいなく　つよい　トレーナーと\lであえる　ばしょだと　おもうよ!\p{PLAYER}{KUN}も　めいっぱい\nがんばってよ!$"
EventText_JP_081F6ADD: @ 0x081F6ADD
	.string "エニシダ“どんな　ときにも　つよい\nトレーナーに　あいたくって\lわたしは　ここに　かよって　いるんだよね$"
MapScripts_JP_081F6B12: @ 0x081F6B12
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081F6B18
	.byte 0
MapScriptTable_JP_081F6B18: @ 0x081F6B18
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F6B22
	.2byte 0
EventScript_JP_081F6B22: @ 0x081F6B22
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F6B66 @ Movement_JP_081F6B66
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F6B66 @ Movement_JP_081F6B66
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0002
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F6B6C @ Movement_JP_081F6B6C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F6B6B @ Movement_JP_081F6B6B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0002
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: warp
	.byte 0x39
	.byte 0x06
	.byte 0x02
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0005
	.byte 0x27, 0x6B, 0x02
Movement_JP_081F6B66: @ 0x081F6B66
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F6B6B: @ 0x081F6B6B
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventText_JP_081F6B6F: @ 0x081F6B6F
	.string "きみ　なにコンテストに　でるの?\nひとつ　アドバイス　してあげるよ!\pたとえば　かわいさコンテスト　でも\n1じしんさで　かわいさ　だけが\lみられてる　わけじゃ　ないみたいなんだ\pそだてかたを　くふう　したほうが　いいよ!$"
EventText_JP_081F6BDE: @ 0x081F6BDE
	.string "ポケモンが　かわいく　なるように\nそだてて　いたんだけど\pコンテストって　かわいらしさも\nきそう　ことが　できるのね!\pだいじに　そだてて　よかった……$"
EventText_JP_081F6C2B: @ 0x081F6C2B
	.string "おれの　ポケモン……\pそりゃあ　もう　かっこよくて\nたくましくて　うつくしくて\lかわいくて　かしこいんだけど　さ\pこうなったら　ぜんぶの　コンテストで\nかたっぱし　から　ゆうしょう　ねらうか!$"
EventText_JP_081F6C8C: @ 0x081F6C8C
	.string "ポケモン　コンテスト\nノーマルランク　ステージ!$"
MapScripts_JP_081F6CA5: @ 0x081F6CA5
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F6CB5
	.byte 0x02
	.4byte MapScriptTable_JP_081F6CDF
	.byte 0x04
	.4byte MapScriptTable_JP_081F6EE2
	.byte 0
EventScript_JP_081F6CB5: @ 0x081F6CB5
	@ event command: call
	.byte 0x04
	.4byte 0x081F6CBB @ EventScript_JP_081F6CBB
	@ event command: end
	.byte 0x02
EventScript_JP_081F6CBB: @ 0x081F6CBB
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6CD3 @ EventScript_JP_081F6CD3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6CD9 @ EventScript_JP_081F6CD9
	@ event command: return
	.byte 0x03
EventScript_JP_081F6CD3: @ 0x081F6CD3
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0064
	@ event command: return
	.byte 0x03
EventScript_JP_081F6CD9: @ 0x081F6CD9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0069
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081F6CDF: @ 0x081F6CDF
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081F6CE9
	.2byte 0
EventScript_JP_081F6CE9: @ 0x081F6CE9
	@ event command: showobjectat
	.byte 0x58
	.2byte 0x0001
	.byte 0x06
	.byte 0x02
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081F6F16 @ Movement_JP_081F6F16
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081F6DDD @ EventScript_JP_081F6DDD
EventScript_JP_081F6D10: @ 0x081F6D10
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E8
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F6F1C @ Movement_JP_081F6F1C
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0822B737 @ EventScript_JP_0822B737
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6D69 @ EventScript_JP_081F6D69
EventScript_JP_081F6D4B: @ 0x081F6D4B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: warp
	.byte 0x39
	.byte 0x06
	.byte 0x00
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0006
	.byte 0x27
EventScript_JP_081F6D69: @ 0x081F6D69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6EA2 @ EventScript_JP_081F6EA2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081F6F22 @ Movement_JP_081F6F22
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B83B @ gText_Rom_22B83B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0170
	@ event command: waitfanfare
	.byte 0x32
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_081F6DDD: @ 0x081F6DDD
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F6F06 @ EventScript_JP_081F6F06
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F6F0D @ EventScript_JP_081F6F0D
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x06
	.byte 0x68
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6E8B @ EventScript_JP_081F6E8B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6E2B @ EventScript_JP_081F6E2B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6E59 @ EventScript_JP_081F6E59
EventScript_JP_081F6E2B: @ 0x081F6E2B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0822B909 @ gText_Rom_22B909
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6DDD @ EventScript_JP_081F6DDD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6EC0 @ EventScript_JP_081F6EC0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6DDD @ EventScript_JP_081F6DDD
EventScript_JP_081F6E59: @ 0x081F6E59
	@ event command: message
	.byte 0x67
	.4byte 0x0822B91F @ gText_Rom_22B91F
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6DDD @ EventScript_JP_081F6DDD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6D4B @ EventScript_JP_081F6D4B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F6DDD @ EventScript_JP_081F6DDD
EventScript_JP_081F6E8B: @ 0x081F6E8B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closemessage
	.byte 0x68
	@ event command: goto
	.byte 0x05
	.4byte 0x081F6D10 @ EventScript_JP_081F6D10
EventScript_JP_081F6EA2: @ 0x081F6EA2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: warp
	.byte 0x39
	.byte 0x06
	.byte 0x00
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0006
	.byte 0x27
EventScript_JP_081F6EC0: @ 0x081F6EC0
	@ event command: message
	.byte 0x67
	.4byte 0x0822B931 @ gText_Rom_22B931
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F6EE2: @ 0x081F6EE2
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081F6EEC
	.2byte 0
EventScript_JP_081F6EEC: @ 0x081F6EEC
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0001
	.byte 0x06
	.byte 0x02
	@ event command: call
	.byte 0x04
	.4byte 0x081F6CBB @ EventScript_JP_081F6CBB
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F6F14 @ Movement_JP_081F6F14
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: end
	.byte 0x02
EventScript_JP_081F6F06: @ 0x081F6F06
	@ event command: message
	.byte 0x67
	.4byte 0x0822B855 @ gText_Rom_22B855
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_081F6F0D: @ 0x081F6F0D
	@ event command: message
	.byte 0x67
	.4byte 0x0822B873 @ gText_Rom_22B873
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
Movement_JP_081F6F14: @ 0x081F6F14
	@ object movement sequence
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081F6F16: @ 0x081F6F16
	@ object movement sequence
	.byte 0x55 @ set_visible
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x03 @ face_right
	.byte 0xFE @ step_end
Movement_JP_081F6F1C: @ 0x081F6F1C
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x02 @ face_left
	.byte 0xFE @ step_end
Movement_JP_081F6F22: @ 0x081F6F22
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
	.byte 0x00
EventScript_JP_081F6F28: @ 0x081F6F28
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081F6F40
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
	.byte 0x00, 0x03, 0x00, 0x08, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x0F, 0x00, 0x10
	.byte 0x00, 0x56, 0x00, 0x4F, 0x00, 0x51, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081F6F5A: @ 0x081F6F5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6F75 @ EventText_JP_081F6F75
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F6F63: @ 0x081F6F63
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6FB5 @ EventText_JP_081F6FB5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F6F6C: @ 0x081F6F6C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F6FF7 @ EventText_JP_081F6FF7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F6F75: @ 0x081F6F75
	.string "ポケモン　しょうぶに\nスペシャルアップは　かかせない!\pたたかいの　ときだけ　とはいえ\nわざの　いりょくが　あがるんだからな!$"
EventText_JP_081F6FB5: @ 0x081F6FB5
	.string "バトルテント　ひっしょう\nこうりゃくぼん　というのは\lうってない　ですねえ……\pやはり　じぶんで\nがんばらないと　ダメなんですねえ$"
EventText_JP_081F6FF7: @ 0x081F6FF7
	.string "シダケでしか　かえない　ネストボール\nよわい　ポケモンほど　つかまえ　やすくなるの$"
MapScripts_JP_081F7021: @ 0x081F7021
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F702C
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081F702C: @ 0x081F702C
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0012
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081F7035: @ 0x081F7035
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7043: @ 0x081F7043
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7055 @ EventText_JP_081F7055
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F704C: @ 0x081F704C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F70A5 @ EventText_JP_081F70A5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F7055: @ 0x081F7055
	.string "ポケモンを　しんじられない　ようでは\nいちにんまえ　とは　いえないね\pたたかう　ポケモンたちを\nさいごまで　しんじる　ものだけが\lかちぬく　ことが　できるんだ$"
EventText_JP_081F70A5: @ 0x081F70A5
	.string "シダケにくる　りゆうと　いえば\nずばり　バトルテントじゃろ?\pそれとも　だれか　あいたい　ひとでも\nいるのかね?$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081F7106: @ 0x081F7106
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F711E @ EventScript_JP_081F711E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F71DA @ EventText_JP_081F71DA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00C1
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F711E: @ 0x081F711E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7267 @ EventText_JP_081F7267
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7128: @ 0x081F7128
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7150 @ EventScript_JP_081F7150
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7146 @ EventScript_JP_081F7146
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F729B @ EventText_JP_081F729B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7146: @ 0x081F7146
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F731F @ EventText_JP_081F731F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7150: @ 0x081F7150
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F733A @ EventText_JP_081F733A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F715A: @ 0x081F715A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F742C @ EventText_JP_081F742C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7163: @ 0x081F7163
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F718B @ EventScript_JP_081F718B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BE
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7181 @ EventScript_JP_081F7181
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F73E3 @ EventText_JP_081F73E3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7181: @ 0x081F7181
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7378 @ EventText_JP_081F7378
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F718B: @ 0x081F718B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F73E3 @ EventText_JP_081F73E3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7195: @ 0x081F7195
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F71D0 @ EventScript_JP_081F71D0
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F3
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F71C6 @ EventScript_JP_081F71C6
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C7
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F71BC @ EventScript_JP_081F71BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7450 @ EventText_JP_081F7450
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F71BC: @ 0x081F71BC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F74B7 @ EventText_JP_081F74B7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F71C6: @ 0x081F71C6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F74ED @ EventText_JP_081F74ED
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F71D0: @ 0x081F71D0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7524 @ EventText_JP_081F7524
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F71DA: @ 0x081F71DA
	.string "ミツル“{PLAYER}さんに　まけたけど\nもう　おちこんでないよ\pだって　ラルトスと　いっしょに\nあちこちの　ジムで　うでだめし　して\lすごい　トレーナーに　なるって\lもくひょうが　できたから!\pいつか　{PLAYER}さん　よりも\nつよくなって　もういちど\lポケモンしょうぶを　おねがい　するからね!$"
EventText_JP_081F7267: @ 0x081F7267
	.string "ミツル“いつか　{PLAYER}さん　よりも\nつよくなって　もういちど\lポケモンしょうぶを　おねがい　するからね!$"
EventText_JP_081F729B: @ 0x081F729B
	.string "おじさん“おお!　{PLAYER}{KUN}\nミツルくんは　となりに　いるよ!\pしかし　たいした　もんだね!\pしぜんに　かこまれた　かんきょうが\nミツルくんを　げんきに　させている!\p……いや　もしかすると\nあのこに　きぼうを　あたえて　いるのは\pポケモンなのかも　しれないな……$"
EventText_JP_081F731F: @ 0x081F731F
	.string "ミツルくん……\nいつのまにか　いなくなっちゃった……$"
EventText_JP_081F733A: @ 0x081F733A
	.string "おじさん“そうですか……\nあの　ミツルくんが\lひとりで　そんな　とおくまで……\pさすがは　わたしの　おとうとの　むすこだ!$"
EventText_JP_081F7378: @ 0x081F7378
	.string "ミチル“あなたは……?\n……あ　そうか!\pミツルくんが　いってた\n{PLAYER}さんって　あなたの　ことね!\pわたしは　ミツルくんの　いとこ　なの!\pどう?　あのこ　こっちに　きてから\nずいぶん　げんきに　なったでしょう?$"
EventText_JP_081F73E3: @ 0x081F73E3
	.string "ミチル“ミツルくんの　ことなら\nだいじょうぶ!　しんぱい　ないわよ!\pだって　わたしの　いとこ　だし\nなにより　ポケモンが　いっしょ　ですもの!$"
EventText_JP_081F742C: @ 0x081F742C
	.string "きみの　おかげで\nまいにち　かのじょに　あえて\lおれは　ハッピーだよ!$"
EventText_JP_081F7450: @ 0x081F7450
	.string "うちの　むすめの　こいびとは\nずいぶん　じょうねつてきな　ひとでね\pむすめに　あうため　だけに\nひたすら　トンネルを　ほってるってよ!\pむすめも　しんぱい　なのか\nいつも　トンネルに　あしを　はこんでるよ$"
EventText_JP_081F74B7: @ 0x081F74B7
	.string "なんと!　むすめの　こいびと　ときたら\nすでで　トンネルを　ほっていたって!\pそりゃあ　たまげた　もんだ!$"
EventText_JP_081F74ED: @ 0x081F74ED
	.string "ミツルくんに　もしものことが　あったら\nあたしゃ　トウカにいる　ごりょうしんに\lあわせる　かおが　ないよ……$"
EventText_JP_081F7524: @ 0x081F7524
	.string "ミツルくんが　サイユウに　いたって!?\pそりゃ　トウカの　ごりょうしんも\nびっくり　するだろうねぇ$"
	.byte 0x00
EventScript_JP_081F7557: @ 0x081F7557
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7613 @ EventText_JP_081F7613
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00E6
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75BA @ EventScript_JP_081F75BA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75C4 @ EventScript_JP_081F75C4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75CE @ EventScript_JP_081F75CE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75D8 @ EventScript_JP_081F75D8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75E2 @ EventScript_JP_081F75E2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75EC @ EventScript_JP_081F75EC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F75F6 @ EventScript_JP_081F75F6
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75BA: @ 0x081F75BA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F773C @ EventText_JP_081F773C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75C4: @ 0x081F75C4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7705 @ EventText_JP_081F7705
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75CE: @ 0x081F75CE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F76DC @ EventText_JP_081F76DC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75D8: @ 0x081F75D8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F76B4 @ EventText_JP_081F76B4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75E2: @ 0x081F75E2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7693 @ EventText_JP_081F7693
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75EC: @ 0x081F75EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7675 @ EventText_JP_081F7675
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F75F6: @ 0x081F75F6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7641 @ EventText_JP_081F7641
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7600: @ 0x081F7600
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0019
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7772 @ EventText_JP_081F7772
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F7613: @ 0x081F7613
	.string "あなたの　ポケモンが\nどれくらい　なついているか　みてあげる\pあら……\nあなたの　ポケモン$"
EventText_JP_081F7641: @ 0x081F7641
	.string "これいじょうは　ない　ってぐらい\nあなたに　なついているわね\lみている　こっちも　しあわせに　なるわ!$"
EventText_JP_081F7675: @ 0x081F7675
	.string "なんだか　しあわせそう\nすごく　あなたに　なついているわね$"
EventText_JP_081F7693: @ 0x081F7693
	.string "かなり　なついているわね\nあなたに　あまえたそうに　しているわよ$"
EventText_JP_081F76B4: @ 0x081F76B4
	.string "ちょっと　なついてきた　って　かんじ　かな\nあなたのこと　しんじている　みたい$"
EventText_JP_081F76DC: @ 0x081F76DC
	.string "まだ　あなたに　なれていない　ようね\nふつうの　かんけい　って　かんじが　するわ$"
EventText_JP_081F7705: @ 0x081F7705
	.string "……　なんだか　けいかい　しているみたい\nめつきも　ちょっと　こわいし\lぜんぜん　あなたに　なついていないわ$"
EventText_JP_081F773C: @ 0x081F773C
	.string "……　ちょっと　いいづらいんだけど\pあなた　じぶんの　ポケモンに\nそんなに　きらわれていて　だいじょうぶ?$"
EventText_JP_081F7772: @ 0x081F7772
	.string "ピカチュウ“ピカピカッ!$"
	.byte 0x00
EventScript_JP_081F7780: @ 0x081F7780
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7792 @ EventText_JP_081F7792
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7789: @ 0x081F7789
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F77D7 @ EventText_JP_081F77D7
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F7792: @ 0x081F7792
	.string "とおく　はなれた\nサイユウの　おくちに　ある　という\lポケモン　リーグ\pそこに　あつまるのは\nすごうでの　トレーナー　ばかり　ですって!$"
EventText_JP_081F77D7: @ 0x081F77D7
	.string "ポケモン　リーグは\nしてんのう　4にん　つづけて\lしょうぶする　という　ルールらしいの!\pとちゅうで　まけたら　ひとりめ　から\nやりなおし　だなんて　きびしいのね!$"
MapScripts_JP_081F782A: @ 0x081F782A
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081F7835
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081F7835: @ 0x081F7835
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0013
	@ event command: end
	.byte 0x02
EventScript_JP_081F7839: @ 0x081F7839
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7847: @ 0x081F7847
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7862 @ EventText_JP_081F7862
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7850: @ 0x081F7850
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7887 @ EventText_JP_081F7887
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7859: @ 0x081F7859
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F78C3 @ EventText_JP_081F78C3
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F7862: @ 0x081F7862
	.string "きみの　トレーナーカードは　なにいろ?\nあたしのは　カッパー　なんだよ!$"
EventText_JP_081F7887: @ 0x081F7887
	.string "キナギタウンって　サニーゴたちの\nあつまりの　うえに　うかんでいるの\p……なんて　いったら\nあなたは　しんじるかしら?$"
EventText_JP_081F78C3: @ 0x081F78C3
	.string "キナギで　くらす　ひとびとの　せんぞは\nふねの　うえで　うまれて\lそして　ふねの　うえで　しんだ　という\pなにかを　さがすために\nそんな　いきかたを　していたそうじゃ$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081F793F: @ 0x081F793F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7951 @ EventText_JP_081F7951
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7948: @ 0x081F7948
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F79BE @ EventText_JP_081F79BE
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F7951: @ 0x081F7951
	.string "ホウエンちほう　には\nいわ……　こおり……　はがね……\pそれぞれの　ちからを　つかさどる\n3びきの　ポケモンが\lそれぞれ　どこかの　どうくつに　いる……\pおれ　ちいさな　ころに\nそんな　はなしを　きいたことが　あるよ$"
EventText_JP_081F79BE: @ 0x081F79BE
	.string "‘むっつの　てんが\n　みっつの　とびらを　あける’\pおじいちゃんが　よく　いっていたけど\nいまだに　なんのことだか　わからないわ$"
	.byte 0x00
EventScript_JP_081F7A00: @ 0x081F7A00
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: dotimebasedevents
	.byte 0x2D
	@ event command: call
	.byte 0x04
	.4byte 0x081F7A4C @ EventScript_JP_081F7A4C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x012B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7AEC @ EventScript_JP_081F7AEC
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x012C
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F7A66 @ EventScript_JP_081F7A66
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x012C
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081F7A6F @ EventScript_JP_081F7A6F
	@ event command: setflag
	.byte 0x29
	.2byte 0x012C
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00E6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F7A84 @ EventScript_JP_081F7A84
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00E6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081F7AB3 @ EventScript_JP_081F7AB3
	@ event command: goto
	.byte 0x05
	.4byte 0x081F7ABD @ EventScript_JP_081F7ABD
	.byte 0x02
EventScript_JP_081F7A4C: @ 0x081F7A4C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x012B
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08244178
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x014D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F7A80 @ EventScript_JP_081F7A80
	@ event command: return
	.byte 0x03
EventScript_JP_081F7A66: @ 0x081F7A66
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7B93 @ EventText_JP_081F7B93
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F7A6F: @ 0x081F7A6F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7B35 @ EventText_JP_081F7B35
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7B93 @ EventText_JP_081F7B93
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F7A80: @ 0x081F7A80
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x012B
	@ event command: return
	.byte 0x03
EventScript_JP_081F7A84: @ 0x081F7A84
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7BA2 @ EventText_JP_081F7BA2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x013B
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
	.2byte 0x012B
	@ event command: special
	.byte 0x25
	.2byte 0x014C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7C43 @ EventText_JP_081F7C43
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7AB3: @ 0x081F7AB3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7BD5 @ EventText_JP_081F7BD5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7ABD: @ 0x081F7ABD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7C0F @ EventText_JP_081F7C0F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0135
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
	.2byte 0x012B
	@ event command: special
	.byte 0x25
	.2byte 0x014C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7C43 @ EventText_JP_081F7C43
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7AEC: @ 0x081F7AEC
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x014D
	@ event command: buffernumberstring
	.byte 0x83
	.byte 0x00
	.2byte 0x800D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7C8C @ EventText_JP_081F7C8C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7AFF: @ 0x081F7AFF
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x015E
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7CE4 @ EventText_JP_081F7CE4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7CEC @ EventText_JP_081F7CEC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7B1A: @ 0x081F7B1A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x015E
	.2byte 0x0002
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7CFC @ EventText_JP_081F7CFC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7D07 @ EventText_JP_081F7D07
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F7B35: @ 0x081F7B35
	.string "ウォッホン!!\pわしが　ポケモン　だいすきクラブで\nいちばーん　えらい　かいちょうの……\pおとうと　ですぞ!\pまあ　ここで　ポケモンと　いっしょに\nバカンスを　たのしんで　おるのですな!$"
EventText_JP_081F7B93: @ 0x081F7B93
	.string "ほう!\nきみの　ポケモン……$"
EventText_JP_081F7BA2: @ 0x081F7BA2
	.string "とっても　なついて　いますなあ\pそんな　かわいらしい　ポケモンには\nこの　わざマシン　どうですかな?$"
EventText_JP_081F7BD5: @ 0x081F7BD5
	.string "ふむう……\nわるくは　ないんだが　よくもない……\pおやの　トレーナーである　きみの\nどりょくが　ひつよう　ですな!$"
EventText_JP_081F7C0F: @ 0x081F7C0F
	.string "なんだか　めつきが　わるいですのう\pそんな　こわそうな　ポケモンには\nこの　わざマシン　どうですかな?$"
EventText_JP_081F7C43: @ 0x081F7C43
	.string "ポケモンの　なつきぐあいが　たかいと\nおんがえしの　いりょくも　たかくなる\pなつきぐあいが　ひくいと\nやつあたりの　いりょくが　つよまるんだよ!$"
EventText_JP_081F7C8C: @ 0x081F7C8C
	.string "そうそう　あと{STR_VAR_1}にち　たてば\nいい　わざマシンが　てに　はいるんだよ!\pそのとき　また　あそびに　きたまえ!\nきみの　ポケモンに　あった\lすてきな　わざマシンを　あげるから$"
EventText_JP_081F7CE4: @ 0x081F7CE4
	.string "ルリリ“るりー$"
EventText_JP_081F7CEC: @ 0x081F7CEC
	.string "とっても　なついて　いるようだ$"
EventText_JP_081F7CFC: @ 0x081F7CFC
	.string "ルリリ“ルルリッ!!$"
EventText_JP_081F7D07: @ 0x081F7D07
	.string "あんまり　なついて　いないようだ……$"
	.byte 0x00
EventScript_JP_081F7D1B: @ 0x081F7D1B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x009A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7DB5 @ EventScript_JP_081F7DB5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8008
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00FC
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8009
	.2byte 0x800D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7DC8 @ EventText_JP_081F7DC8
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7D9D @ EventScript_JP_081F7D9D
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800A
	.2byte 0x8004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7D9D @ EventScript_JP_081F7D9D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00FF
	@ event command: copyvar
	.byte 0x19
	.2byte 0x800B
	.2byte 0x800D
	@ event command: compare_var_to_var
	.byte 0x22
	.2byte 0x800D
	.2byte 0x8009
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081F7DA7 @ EventScript_JP_081F7DA7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8004
	.2byte 0x8008
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8005
	.2byte 0x800A
	@ event command: special
	.byte 0x25
	.2byte 0x00FD
	@ event command: special
	.byte 0x25
	.2byte 0x00FE
	@ event command: waitstate
	.byte 0x27
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x8009
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7E3D @ EventText_JP_081F7E3D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x009A
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7D9D: @ 0x081F7D9D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7E92 @ EventText_JP_081F7E92
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7DA7: @ 0x081F7DA7
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x8009
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7E77 @ EventText_JP_081F7E77
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7DB5: @ 0x081F7DB5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7EBB @ EventText_JP_081F7EBB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7DBF: @ 0x081F7DBF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7EFD @ EventText_JP_081F7EFD
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F7DC8: @ 0x081F7DC8
	.string "みてくれよ　この　{STR_VAR_2}!\nおれが　きのう　じぶんの　たんじょうびに\lきねんに　つかまえた　{STR_VAR_2}だ!\pお!　ほしい　って　かおを　したな?\nまっ　きちょうな　{STR_VAR_2}だからな!\pよし!　{STR_VAR_1}と　だったら\nこうかん　して　やっても　いいぞ!$"
EventText_JP_081F7E3D: @ 0x081F7E3D
	.string "おっ　これが　{STR_VAR_1}　かあー!\nやっぱ　{STR_VAR_2}　とは\lいろいろ　にている　ようで\lびみょうに　ちがうなあ!\pサンキュ!$"
EventText_JP_081F7E77: @ 0x081F7E77
	.string "だめだめ!　{STR_VAR_1}　じゃないと　\nひきうけられないね!$"
EventText_JP_081F7E92: @ 0x081F7E92
	.string "ふーん　やめるのか……\pまっ　おれのほうも\nどうしても　って　わけじゃ　ないしね$"
EventText_JP_081F7EBB: @ 0x081F7EBB
	.string "じぶんで　さがしても　いいんだけど……\pほかの　トレーナーが　つかまえた\nタツベイ　って　いうのが\lどうしても　ほしかったんだよね$"
EventText_JP_081F7EFD: @ 0x081F7EFD
	.string "それって　ポケモンずかん?\pそれって　あなた　たくさんの\nポケモンと　であった　ってこと?\pそれって　すっごい　うらやましい!$"
	.byte 0x00
EventScript_JP_081F7F3E: @ 0x081F7F3E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7FD3 @ EventText_JP_081F7FD3
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7F47: @ 0x081F7F47
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7F85 @ EventText_JP_081F7F85
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F7F50: @ 0x081F7F50
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7FE9 @ EventText_JP_081F7FE9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7F71 @ EventScript_JP_081F7F71
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F7F7B @ EventScript_JP_081F7F7B
	@ event command: end
	.byte 0x02
EventScript_JP_081F7F71: @ 0x081F7F71
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F7FF6 @ EventText_JP_081F7FF6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F7F7B: @ 0x081F7F7B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F8015 @ EventText_JP_081F8015
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F7F85: @ 0x081F7F85
	.string "ホウエンの　そらたかくを　とんでいく\nポケモンを　みた!　って　ひとが　いるけど\pずっと　とびまわって　いるのかしら?\nどこかで　やすんだり　しそうだけど$"
EventText_JP_081F7FD3: @ 0x081F7FD3
	.string "おそらの　ポケモン!\nおそらの　ポケモン!$"
EventText_JP_081F7FE9: @ 0x081F7FE9
	.string "きみ　どこから　きたの?$"
EventText_JP_081F7FF6: @ 0x081F7FF6
	.string "はい……?\nハイ…　タウン……?\pしらないなぁ　そんな　まち$"
EventText_JP_081F8015: @ 0x081F8015
	.string "いいえ　って　そんな……\nどこからも　きてない　はずが　ないでしょ\pま　まさか　きみ……\nうみの　そこで　うまれた　とか……?$"
	.byte 0x00
EventScript_JP_081F8056: @ 0x081F8056
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00D1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8072 @ EventScript_JP_081F8072
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F8085 @ EventText_JP_081F8085
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8072: @ 0x081F8072
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F8099 @ EventText_JP_081F8099
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F807C: @ 0x081F807C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F80B5 @ EventText_JP_081F80B5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081F8085: @ 0x081F8085
	.string "きょうは　マボロシじま　みえんのう……$"
EventText_JP_081F8099: @ 0x081F8099
	.string "なっ　なんと!\nきょうは　マボロシじま　みえるのじゃ!$"
EventText_JP_081F80B5: @ 0x081F80B5
	.string "マボロシじま……\nおそらく　しんきろうの　かんけいで\lみえたり　みえなかったり　するんだろう\pいや　ひょっとしたら　ほんとうに\nあらわれたり　きえたり　しているのか……?$"
MapScripts_JP_081F810B: @ 0x081F810B
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081F8129
	.byte 0x04
	.4byte MapScriptTable_JP_081F8116
	.byte 0
MapScriptTable_JP_081F8116: @ 0x081F8116
	@ conditional map script table
	.2byte 0x4057, 0x0004
	.4byte EventScript_JP_081F8120
	.2byte 0
EventScript_JP_081F8120: @ 0x081F8120
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x04
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0001
	.byte 0x03
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F8129: @ 0x081F8129
	@ conditional map script table
	.2byte 0x4057, 0x0004
	.4byte EventScript_JP_081F8133
	.2byte 0
EventScript_JP_081F8133: @ 0x081F8133
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F82AE @ EventText_JP_081F82AE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0155
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x007A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F83BA @ EventText_JP_081F83BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x4057
	.2byte 0x0005
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F815A: @ 0x081F815A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F818E @ EventScript_JP_081F818E
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8184 @ EventScript_JP_081F8184
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0087
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8198 @ EventScript_JP_081F8198
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F81C1 @ EventText_JP_081F81C1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0087
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8184: @ 0x081F8184
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F83E2 @ EventText_JP_081F83E2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F818E: @ 0x081F818E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F8400 @ EventText_JP_081F8400
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8198: @ 0x081F8198
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F829E @ EventText_JP_081F829E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F81A2: @ 0x081F81A2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x007A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F81B7 @ EventScript_JP_081F81B7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F8465 @ EventText_JP_081F8465
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F81B7: @ 0x081F81B7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F849F @ EventText_JP_081F849F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081F81C1: @ 0x081F81C1
	.string "きみは……\nそうか　{PLAYER}{KUN}　だね?\pさっきは　ミツルの　あいてを　してくれて\nありがとう……\pあのこは　うまれた　ときから\nからだが　じょうぶでは　なくてね\pそれで　すこしの　あいだ　シダケタウンの\nわたしの　しんせきの　うちで\lあずかってもらう　ことに　したんだよ\pあそこは　ここよりも　ずっと\nくうきが　きれいな　ところ　だからね!\p……で　ミツルかい?　ミツルなら\nもう　しゅっぱつ　していったよ\pいまごろは　どの　あたりかなあ……$"
EventText_JP_081F829E: @ 0x081F829E
	.string "ミツルは　どうしてるかなあ……$"
EventText_JP_081F82AE: @ 0x081F82AE
	.string "{PLAYER}{KUN}!\nむりに　よびだして　すまなかったね!\pミツルは　シダケタウンに　いってから\nすっかり　げんきを　とりもどしたよ!\pそれも　みんな　きみの　おかげさ!\pなにしろ　このまちを　でるときに\nミツルが　ポケモンを　つかまえるのを\lてつだって　くれただろう?\pあのときの　ことが　ミツルは　とっても\nうれしかった　らしいんだ!\pいや　ミツル　だけじゃない\nちちおやの　わたしも　うれしいよ!\pあのこに　きみの　ような\nやさしい　ともだちが　できたことが　ね!\pそのおれい　という　わけでは　ないけど\nこれを　うけとって　くれないか!$"
EventText_JP_081F83BA: @ 0x081F83BA
	.string "なみのりを　つかえるように　なれば\nいろんな　ばしょに　いけるように　なるよ!$"
EventText_JP_081F83E2: @ 0x081F83E2
	.string "もうすぐ　ミツルが　かえってくるぞ!\nたのしみだなあ……!$"
EventText_JP_081F8400: @ 0x081F8400
	.string "ええっ!?　サイユウシティで\nミツルと　であった　だって……?\pんもう　{PLAYER}{KUN}ってばー\pいくら　あのこが　げんきに　なったからって\nそんな　とおくの　まち　まで\lひとりで　いけるわけ　ないよねえ……$"
EventText_JP_081F8465: @ 0x081F8465
	.string "ミツルが　ポケモンを　つかまえた　って\nすごく　うれしそうに　はなしていたの\pあのこの　あんな　えがお　ひさしぶり$"
EventText_JP_081F849F: @ 0x081F849F
	.string "うちの　しゅじんには　ないしょ　だけど\pじつは　ミツルったら　シダケタウンを\nかってに　でて　いっちゃった　らしいの……\pあのこ　からだは　よわかったけど\nあんがい　しっかりした　せいかく　だから\lかならず　ぶじで　かえってくると\lわたしは　しんじてるわ!$"
MapScripts_JP_081F8520: @ 0x081F8520
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081F8535
	.byte 0x03
	.4byte EventScript_JP_081F85C4
	.byte 0x04
	.4byte MapScriptTable_JP_081F8622
	.byte 0x02
	.4byte MapScriptTable_JP_081F8631
	.byte 0
EventScript_JP_081F8535: @ 0x081F8535
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F854C @ EventScript_JP_081F854C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0007
	@ event command: call_if
	.byte 0x07
	.byte 0x04
	.4byte 0x081F8596 @ EventScript_JP_081F8596
	@ event command: end
	.byte 0x02
EventScript_JP_081F854C: @ 0x081F854C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x081F91F5 @ EventScript_JP_081F91F5
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0047
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F9216 @ EventScript_JP_081F9216
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0059
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F9237 @ EventScript_JP_081F9237
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0048
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F9258 @ EventScript_JP_081F9258
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x005A
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F9279 @ EventScript_JP_081F9279
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0049
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F929A @ EventScript_JP_081F929A
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x005B
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F92BB @ EventScript_JP_081F92BB
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x004A
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F92DC @ EventScript_JP_081F92DC
	@ event command: end
	.byte 0x02
EventScript_JP_081F8596: @ 0x081F8596
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x081F91F5 @ EventScript_JP_081F91F5
	@ event command: call
	.byte 0x04
	.4byte 0x081F9216 @ EventScript_JP_081F9216
	@ event command: call
	.byte 0x04
	.4byte 0x081F9237 @ EventScript_JP_081F9237
	@ event command: call
	.byte 0x04
	.4byte 0x081F9258 @ EventScript_JP_081F9258
	@ event command: call
	.byte 0x04
	.4byte 0x081F9279 @ EventScript_JP_081F9279
	@ event command: call
	.byte 0x04
	.4byte 0x081F929A @ EventScript_JP_081F929A
	@ event command: call
	.byte 0x04
	.4byte 0x081F92BB @ EventScript_JP_081F92BB
	@ event command: call
	.byte 0x04
	.4byte 0x081F92DC @ EventScript_JP_081F92DC
	@ event command: return
	.byte 0x03
EventScript_JP_081F85C4: @ 0x081F85C4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F85E4 @ EventScript_JP_081F85E4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081F85EC @ EventScript_JP_081F85EC
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F85F4 @ EventScript_JP_081F85F4
	@ event command: end
	.byte 0x02
EventScript_JP_081F85E4: @ 0x081F85E4
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x000A
	.2byte 0x0005
	.2byte 0x006C
	@ event command: return
	.byte 0x03
EventScript_JP_081F85EC: @ 0x081F85EC
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0004
	.2byte 0x006B
	@ event command: return
	.byte 0x03
EventScript_JP_081F85F4: @ 0x081F85F4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8015
	.2byte 0x010D
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x003A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F861C @ EventScript_JP_081F861C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F861C @ EventScript_JP_081F861C
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0001
	.2byte 0x0004
	.2byte 0x006B
	@ event command: return
	.byte 0x03
EventScript_JP_081F861C: @ 0x081F861C
	@ event command: setvar
	.byte 0x16
	.2byte 0x4085
	.2byte 0x0008
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F8622: @ 0x081F8622
	@ conditional map script table
	.2byte 0x4085, 0x0001
	.4byte EventScript_JP_081F862C
	.2byte 0
EventScript_JP_081F862C: @ 0x081F862C
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081F8631: @ 0x081F8631
	@ conditional map script table
	.2byte 0x4085, 0x0001
	.4byte EventScript_JP_081F863B
	.2byte 0
EventScript_JP_081F863B: @ 0x081F863B
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F965A @ EventText_JP_081F965A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9668 @ EventText_JP_081F9668
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8683 @ Movement_JP_081F8683
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: setflag
	.byte 0x29
	.2byte 0x02D6
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9705 @ EventText_JP_081F9705
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x4085
	.2byte 0x0002
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081F8683: @ 0x081F8683
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x14 @ delay_16
	.byte 0xFE @ step_end
EventScript_JP_081F8688: @ 0x081F8688
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4085
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F89E1 @ EventScript_JP_081F89E1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F89EB @ EventScript_JP_081F89EB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F89F5 @ EventScript_JP_081F89F5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F89FF @ EventScript_JP_081F89FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8AD2 @ EventScript_JP_081F8AD2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0007
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8A17 @ EventScript_JP_081F8A17
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0008
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8A4A @ EventScript_JP_081F8A4A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9439 @ EventText_JP_081F9439
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8717 @ EventScript_JP_081F8717
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8722 @ EventScript_JP_081F8722
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F872D @ EventScript_JP_081F872D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8738 @ EventScript_JP_081F8738
	@ event command: end
	.byte 0x02
EventScript_JP_081F8717: @ 0x081F8717
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8743 @ EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F8722: @ 0x081F8722
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8743 @ EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F872D: @ 0x081F872D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8743 @ EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F8738: @ 0x081F8738
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8743 @ EventScript_JP_081F8743
	.byte 0x02
EventScript_JP_081F8743: @ 0x081F8743
	@ event command: addobject
	.byte 0x55
	.2byte 0x000A
	@ event command: playse
	.byte 0x2F
	.2byte 0x0008
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F88C8 @ EventScript_JP_081F88C8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F88DA @ EventScript_JP_081F88DA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F88F6 @ EventScript_JP_081F88F6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F88F6 @ EventScript_JP_081F88F6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F94BD @ EventText_JP_081F94BD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F94D9 @ EventText_JP_081F94D9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F94F6 @ EventText_JP_081F94F6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9572 @ EventText_JP_081F9572
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F895E @ EventScript_JP_081F895E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8969 @ EventScript_JP_081F8969
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F897B @ EventScript_JP_081F897B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F898D @ EventScript_JP_081F898D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F957F @ EventText_JP_081F957F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F899F @ EventScript_JP_081F899F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89AA @ EventScript_JP_081F89AA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89B5 @ EventScript_JP_081F89B5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89C0 @ EventScript_JP_081F89C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F95B6 @ EventText_JP_081F95B6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F95E4 @ EventText_JP_081F95E4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9630 @ EventText_JP_081F9630
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8A09 @ EventScript_JP_081F8A09
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8A0A @ EventScript_JP_081F8A0A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8A15 @ EventScript_JP_081F8A15
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8A16 @ EventScript_JP_081F8A16
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89CB @ EventScript_JP_081F89CB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89D6 @ EventScript_JP_081F89D6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89CB @ EventScript_JP_081F89CB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F89CB @ EventScript_JP_081F89CB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9640 @ EventText_JP_081F9640
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x4001
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A4
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F890F @ EventScript_JP_081F890F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8928 @ EventScript_JP_081F8928
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F893A @ EventScript_JP_081F893A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F894C @ EventScript_JP_081F894C
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000A
	@ event command: setflag
	.byte 0x29
	.2byte 0x02D8
	@ event command: setvar
	.byte 0x16
	.2byte 0x4085
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x4057
	.2byte 0x0002
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02D6
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0362
	@ event command: setflag
	.byte 0x29
	.2byte 0x0379
	@ event command: special
	.byte 0x25
	.2byte 0x00D3
	@ event command: warp
	.byte 0x39
	.byte 0x00
	.byte 0x00
	.byte 0xFF
	.2byte 0x000F
	.2byte 0x0008
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081F88C8: @ 0x081F88C8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D82 @ Movement_JP_081F8D82
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F88DA: @ 0x081F88DA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D78 @ Movement_JP_081F8D78
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F88F6: @ 0x081F88F6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D82 @ Movement_JP_081F8D82
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F890F: @ 0x081F890F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D99 @ Movement_JP_081F8D99
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8DA8 @ Movement_JP_081F8DA8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8928: @ 0x081F8928
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D89 @ Movement_JP_081F8D89
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8DA0 @ Movement_JP_081F8DA0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F893A: @ 0x081F893A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D99 @ Movement_JP_081F8D99
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8DB2 @ Movement_JP_081F8DB2
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F894C: @ 0x081F894C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x081F8D91 @ Movement_JP_081F8D91
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8DBA @ Movement_JP_081F8DBA
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F895E: @ 0x081F895E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8969: @ 0x081F8969
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F897B: @ 0x081F897B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F898D: @ 0x081F898D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F899F: @ 0x081F899F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F89AA: @ 0x081F89AA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F89B5: @ 0x081F89B5
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F89C0: @ 0x081F89C0
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F89CB: @ 0x081F89CB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x08243621 @ PetalburgCity_Ext_FacePlayer
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F89D6: @ 0x081F89D6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000A
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F89E1: @ 0x081F89E1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F97E8 @ EventText_JP_081F97E8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F89EB: @ 0x081F89EB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F987A @ EventText_JP_081F987A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F89F5: @ 0x081F89F5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F98EE @ EventText_JP_081F98EE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F89FF: @ 0x081F89FF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F98EE @ EventText_JP_081F98EE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8A09: @ 0x081F8A09
	@ event command: return
	.byte 0x03
EventScript_JP_081F8A0A: @ 0x081F8A0A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8A15: @ 0x081F8A15
	@ event command: return
	.byte 0x03
EventScript_JP_081F8A16: @ 0x081F8A16
	@ event command: return
	.byte 0x03
EventScript_JP_081F8A17: @ 0x081F8A17
	@ event command: call
	.byte 0x04
	.4byte 0x081F8A65 @ EventScript_JP_081F8A65
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8AB4 @ EventScript_JP_081F8AB4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A9
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8A43 @ EventScript_JP_081F8A43
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8DC4 @ EventScript_JP_081F8DC4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9B88 @ EventText_JP_081F9B88
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8A43: @ 0x081F8A43
	@ event command: call
	.byte 0x04
	.4byte 0x081F8B69 @ EventScript_JP_081F8B69
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8A4A: @ 0x081F8A4A
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010D
	.2byte 0x0000
	.4byte 0x081FA4AA @ EventText_JP_081FA4AA
	.4byte 0x081FA535 @ EventText_JP_081FA535
	.4byte 0x081FA586 @ EventText_JP_081FA586
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA550 @ EventText_JP_081FA550
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F8A65: @ 0x081F8A65
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0032
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8AAE @ EventScript_JP_081F8AAE
	@ event command: checkitem
	.byte 0x47
	.2byte 0x00AF
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8AAE @ EventScript_JP_081F8AAE
	@ event command: checkpcitem
	.byte 0x4A
	.2byte 0x00AF
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8AAE @ EventScript_JP_081F8AAE
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x402D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8AAE @ EventScript_JP_081F8AAE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082637C2 @ gText_Rom_2637C2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081F8AAE: @ 0x081F8AAE
	@ event command: setvar
	.byte 0x16
	.2byte 0x800D
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8AB4: @ 0x081F8AB4
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00AF
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
	@ event command: setvar
	.byte 0x16
	.2byte 0x402D
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8AD2: @ 0x081F8AD2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F991A @ EventText_JP_081F991A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x010D
	.2byte 0x0000
	.4byte 0x081F99C5 @ EventText_JP_081F99C5
	@ event command: message
	.byte 0x67
	.4byte 0x081F9A02 @ EventText_JP_081F9A02
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9A1A @ EventText_JP_081F9A1A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F4
	@ event command: setvar
	.byte 0x16
	.2byte 0x4085
	.2byte 0x0007
	@ event command: setflag
	.byte 0x29
	.2byte 0x086B
	@ event command: special
	.byte 0x25
	.2byte 0x0205
	@ event command: call
	.byte 0x04
	.4byte 0x0824327B
	@ event command: setflag
	.byte 0x29
	.2byte 0x0391
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0390
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0005
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03AC
	@ event command: call
	.byte 0x04
	.4byte 0x081F8596 @ EventScript_JP_081F8596
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: call
	.byte 0x04
	.4byte 0x081F8B69 @ EventScript_JP_081F8B69
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9AE6 @ EventText_JP_081F9AE6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0028
	@ event command: playse
	.byte 0x2F
	.2byte 0x0008
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: addobject
	.byte 0x55
	.2byte 0x000B
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8B8C @ EventScript_JP_081F8B8C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8BA0 @ EventScript_JP_081F8BA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8B96 @ EventScript_JP_081F8B96
	@ event command: end
	.byte 0x02
EventScript_JP_081F8B69: @ 0x081F8B69
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x014A
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
	.4byte 0x082430EA
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9A94 @ EventText_JP_081F9A94
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081F8B8C: @ 0x081F8B8C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8BAA @ EventScript_JP_081F8BAA
EventScript_JP_081F8B96: @ 0x081F8B96
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8BAA @ EventScript_JP_081F8BAA
EventScript_JP_081F8BA0: @ 0x081F8BA0
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x081F8BAA @ EventScript_JP_081F8BAA
EventScript_JP_081F8BAA: @ 0x081F8BAA
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D52 @ Movement_JP_081F8D52
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x000A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8C84 @ EventScript_JP_081F8C84
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8CA0 @ EventScript_JP_081F8CA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8CBC @ EventScript_JP_081F8CBC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9B2E @ EventText_JP_081F9B2E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0014
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8C63 @ EventScript_JP_081F8C63
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8C6E @ EventScript_JP_081F8C6E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8C79 @ EventScript_JP_081F8C79
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9B5D @ EventText_JP_081F9B5D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x4001
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A4
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8CD8 @ EventScript_JP_081F8CD8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8CF1 @ EventScript_JP_081F8CF1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F8D03 @ EventScript_JP_081F8D03
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000B
	@ event command: setvar
	.byte 0x16
	.2byte 0x4057
	.2byte 0x0004
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x033E
	@ event command: warp
	.byte 0x39
	.byte 0x00
	.byte 0x00
	.byte 0xFF
	.2byte 0x000F
	.2byte 0x0008
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081F8C63: @ 0x081F8C63
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8C6E: @ 0x081F8C6E
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8C79: @ 0x081F8C79
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8C84: @ 0x081F8C84
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D5A @ Movement_JP_081F8D5A
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8CA0: @ 0x081F8CA0
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D61 @ Movement_JP_081F8D61
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8CBC: @ 0x081F8CBC
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D67 @ Movement_JP_081F8D67
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8CD8: @ 0x081F8CD8
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D15 @ Movement_JP_081F8D15
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8D38 @ Movement_JP_081F8D38
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8CF1: @ 0x081F8CF1
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D20 @ Movement_JP_081F8D20
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8D40 @ Movement_JP_081F8D40
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F8D03: @ 0x081F8D03
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000B
	.4byte 0x081F8D2B @ Movement_JP_081F8D2B
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081F8D48 @ Movement_JP_081F8D48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081F8D15: @ 0x081F8D15
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x13 @ delay_8
	.byte 0x1D @ walk_in_place_down
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081F8D20: @ 0x081F8D20
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x13 @ delay_8
	.byte 0x1D @ walk_in_place_down
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081F8D2B: @ 0x081F8D2B
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x13 @ delay_8
	.byte 0x1D @ walk_in_place_down
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081F8D38: @ 0x081F8D38
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081F8D40: @ 0x081F8D40
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081F8D48: @ 0x081F8D48
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081F8D52: @ 0x081F8D52
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x13 @ delay_8
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0x13 @ delay_8
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0x14 @ delay_16
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081F8D5A: @ 0x081F8D5A
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081F8D61: @ 0x081F8D61
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F8D67: @ 0x081F8D67
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
	.byte 0x26, 0x14, 0x14, 0x14, 0x14, 0x14, 0x13, 0x25, 0xFE
Movement_JP_081F8D78: @ 0x081F8D78
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x09 @ walk_up
	.byte 0x0B @ walk_right
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081F8D82: @ 0x081F8D82
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x09 @ walk_up
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081F8D89: @ 0x081F8D89
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x1D @ walk_in_place_down
	.byte 0xFE @ step_end
Movement_JP_081F8D91: @ 0x081F8D91
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x1D @ walk_in_place_down
	.byte 0xFE @ step_end
Movement_JP_081F8D99: @ 0x081F8D99
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0x14 @ delay_16
	.byte 0x1D @ walk_in_place_down
	.byte 0xFE @ step_end
Movement_JP_081F8DA0: @ 0x081F8DA0
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081F8DA8: @ 0x081F8DA8
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081F8DB2: @ 0x081F8DB2
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081F8DBA: @ 0x081F8DBA
	@ object movement sequence
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
EventScript_JP_081F8DC4: @ 0x081F8DC4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9BE0 @ EventText_JP_081F9BE0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F8DCE: @ 0x081F8DCE
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0055
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA31E @ EventText_JP_081FA31E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8E03: @ 0x081F8E03
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: warpdoor
	.byte 0x3B
	.byte 0x08
	.byte 0x01
	.byte 0xFF
	.2byte 0x8008
	.2byte 0x8009
	.byte 0x27, 0x6B, 0x02
EventScript_JP_081F8E12: @ 0x081F8E12
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F8E14: @ 0x081F8E14
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA300 @ EventText_JP_081FA300
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F8E1E: @ 0x081F8E1E
	@ event command: lockall
	.byte 0x69
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0062
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA360 @ EventText_JP_081FA360
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8E53: @ 0x081F8E53
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0047
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x002E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA385 @ EventText_JP_081FA385
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8E86: @ 0x081F8E86
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0047
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x003B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA3A9 @ EventText_JP_081FA3A9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8EB9: @ 0x081F8EB9
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0059
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x003B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA3A9 @ EventText_JP_081FA3A9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8EEC: @ 0x081F8EEC
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0059
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0048
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA3CC @ EventText_JP_081FA3CC
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8F1F: @ 0x081F8F1F
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0048
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA3F0 @ EventText_JP_081FA3F0
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8F52: @ 0x081F8F52
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x005A
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA3F0 @ EventText_JP_081FA3F0
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8F85: @ 0x081F8F85
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x005A
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0021
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA413 @ EventText_JP_081FA413
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8FB8: @ 0x081F8FB8
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x0049
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0021
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA413 @ EventText_JP_081FA413
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F8FEB: @ 0x081F8FEB
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x005B
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0007
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA437 @ EventText_JP_081FA437
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F901E: @ 0x081F901E
	@ event command: lockall
	.byte 0x69
	@ event command: checktrainerflag
	.byte 0x60
	.2byte 0x004A
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081F8E14 @ EventScript_JP_081F8E14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0007
	@ event command: setvar
	.byte 0x16
	.2byte 0x8009
	.2byte 0x0007
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA437 @ EventText_JP_081FA437
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E03 @ EventScript_JP_081F8E03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F8E12 @ EventScript_JP_081F8E12
	@ event command: end
	.byte 0x02
EventScript_JP_081F9051: @ 0x081F9051
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x0047
	.2byte 0x0000
	.4byte 0x081F9D63 @ EventText_JP_081F9D63
	.4byte 0x081F9D95 @ EventText_JP_081F9D95
	.4byte 0x081F9075 @ EventScript_JP_081F9075
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F9084 @ EventScript_JP_081F9084
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9DA7 @ EventText_JP_081F9DA7
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F9075: @ 0x081F9075
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F9216 @ EventScript_JP_081F9216
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F9084: @ 0x081F9084
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9DE9 @ EventText_JP_081F9DE9
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F908D: @ 0x081F908D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x0048
	.2byte 0x0000
	.4byte 0x081F9E22 @ EventText_JP_081F9E22
	.4byte 0x081F9E48 @ EventText_JP_081F9E48
	.4byte 0x081F90B1 @ EventScript_JP_081F90B1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F90C0 @ EventScript_JP_081F90C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9E68 @ EventText_JP_081F9E68
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F90B1: @ 0x081F90B1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F9258 @ EventScript_JP_081F9258
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F90C0: @ 0x081F90C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9E8A @ EventText_JP_081F9E8A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F90C9: @ 0x081F90C9
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x0049
	.2byte 0x0000
	.4byte 0x081F9EB1 @ EventText_JP_081F9EB1
	.4byte 0x081F9EFE @ EventText_JP_081F9EFE
	.4byte 0x081F90ED @ EventScript_JP_081F90ED
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F90FC @ EventScript_JP_081F90FC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9F1D @ EventText_JP_081F9F1D
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F90ED: @ 0x081F90ED
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F929A @ EventScript_JP_081F929A
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F90FC: @ 0x081F90FC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9F8B @ EventText_JP_081F9F8B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F9105: @ 0x081F9105
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x004A
	.2byte 0x0000
	.4byte 0x081F9FB3 @ EventText_JP_081F9FB3
	.4byte 0x081F9FEF @ EventText_JP_081F9FEF
	.4byte 0x081F9129 @ EventScript_JP_081F9129
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F9138 @ EventScript_JP_081F9138
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA001 @ EventText_JP_081FA001
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F9129: @ 0x081F9129
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F92DC @ EventScript_JP_081F92DC
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F9138: @ 0x081F9138
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA072 @ EventText_JP_081FA072
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F9141: @ 0x081F9141
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x0059
	.2byte 0x0000
	.4byte 0x081FA09D @ EventText_JP_081FA09D
	.4byte 0x081FA0D1 @ EventText_JP_081FA0D1
	.4byte 0x081F9165 @ EventScript_JP_081F9165
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F9174 @ EventScript_JP_081F9174
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA0E6 @ EventText_JP_081FA0E6
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F9165: @ 0x081F9165
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F9237 @ EventScript_JP_081F9237
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F9174: @ 0x081F9174
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA13B @ EventText_JP_081FA13B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F917D: @ 0x081F917D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x005A
	.2byte 0x0000
	.4byte 0x081FA17E @ EventText_JP_081FA17E
	.4byte 0x081FA1A2 @ EventText_JP_081FA1A2
	.4byte 0x081F91A1 @ EventScript_JP_081F91A1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F91B0 @ EventScript_JP_081F91B0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA1AE @ EventText_JP_081FA1AE
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F91A1: @ 0x081F91A1
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F9279 @ EventScript_JP_081F9279
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F91B0: @ 0x081F91B0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA20C @ EventText_JP_081FA20C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F91B9: @ 0x081F91B9
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x02
	.2byte 0x005B
	.2byte 0x0000
	.4byte 0x081FA21D @ EventText_JP_081FA21D
	.4byte 0x081FA25D @ EventText_JP_081FA25D
	.4byte 0x081F91DD @ EventScript_JP_081F91DD
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F91EC @ EventScript_JP_081F91EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA26D @ EventText_JP_081FA26D
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081F91DD: @ 0x081F91DD
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call
	.byte 0x04
	.4byte 0x081F92BB @ EventScript_JP_081F92BB
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F91EC: @ 0x081F91EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA2BA @ EventText_JP_081FA2BA
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081F91F5: @ 0x081F91F5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F92FD @ EventScript_JP_081F92FD
	@ event command: return
	.byte 0x03
EventScript_JP_081F9216: @ 0x081F9216
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F9322 @ EventScript_JP_081F9322
	@ event command: return
	.byte 0x03
EventScript_JP_081F9237: @ 0x081F9237
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F9347 @ EventScript_JP_081F9347
	@ event command: return
	.byte 0x03
EventScript_JP_081F9258: @ 0x081F9258
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F936C @ EventScript_JP_081F936C
	@ event command: return
	.byte 0x03
EventScript_JP_081F9279: @ 0x081F9279
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F937F @ EventScript_JP_081F937F
	@ event command: return
	.byte 0x03
EventScript_JP_081F929A: @ 0x081F929A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F93A4 @ EventScript_JP_081F93A4
	@ event command: return
	.byte 0x03
EventScript_JP_081F92BB: @ 0x081F92BB
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F93B7 @ EventScript_JP_081F93B7
	@ event command: return
	.byte 0x03
EventScript_JP_081F92DC: @ 0x081F92DC
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93DD @ EventScript_JP_081F93DD
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8005
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081F93E2 @ EventScript_JP_081F93E2
	@ event command: call
	.byte 0x04
	.4byte 0x081F93CA @ EventScript_JP_081F93CA
	@ event command: return
	.byte 0x03
EventScript_JP_081F92FD: @ 0x081F92FD
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0055
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x0055
	.2byte 0x0211
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x0062
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0062
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F9322: @ 0x081F9322
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x002E
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x002E
	.2byte 0x0211
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x003B
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x003B
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F9347: @ 0x081F9347
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x003B
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x003B
	.2byte 0x0211
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x0048
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0048
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F936C: @ 0x081F936C
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x0014
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0014
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F937F: @ 0x081F937F
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0014
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x0014
	.2byte 0x0211
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x0021
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0021
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F93A4: @ 0x081F93A4
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0021
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x0021
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F93B7: @ 0x081F93B7
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x0007
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x0007
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F93CA: @ 0x081F93CA
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0007
	.2byte 0x0210
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x0007
	.2byte 0x0211
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081F93DD: @ 0x081F93DD
	@ event command: special
	.byte 0x25
	.2byte 0x0091
	@ event command: waitstate
	.byte 0x27
	@ event command: return
	.byte 0x03
EventScript_JP_081F93E2: @ 0x081F93E2
	@ event command: special
	.byte 0x25
	.2byte 0x0092
	@ event command: return
	.byte 0x03
EventScript_JP_081F93E6: @ 0x081F93E6
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F4
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F93FB @ EventScript_JP_081F93FB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9C26 @ EventText_JP_081F9C26
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F93FB: @ 0x081F93FB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081F9D34 @ EventText_JP_081F9D34
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081F9405: @ 0x081F9405
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F9425 @ EventScript_JP_081F9425
	@ event command: goto
	.byte 0x05
	.4byte 0x081F942F @ EventScript_JP_081F942F
	.byte 0x02
EventScript_JP_081F9415: @ 0x081F9415
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081F9425 @ EventScript_JP_081F9425
	@ event command: goto
	.byte 0x05
	.4byte 0x081F942F @ EventScript_JP_081F942F
	.byte 0x02
EventScript_JP_081F9425: @ 0x081F9425
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA489 @ EventText_JP_081FA489
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081F942F: @ 0x081F942F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA47B @ EventText_JP_081FA47B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081F9439: @ 0x081F9439
	.string "パパ“ん?\p{PLAYER}じゃ　ないか!\nそうか　ひっこしが　おわったんだね\pそれにしても\nよく　ここまで　ひとりで　これたな\pなるほど……\nポケモンと　いっしょ　なのか\pふむ……　じゃあ　{PLAYER}も\nわたしの　ように\lポケモントレーナーに　なるのか\pそれは　たのしみ　だな!$"
EventText_JP_081F94BD: @ 0x081F94BD
	.string "あの……　ぼく……\nポケモンが　ほしいん　ですけど……$"
EventText_JP_081F94D9: @ 0x081F94D9
	.string "パパ“ん?　きみは……　たしか\nミツルくんと　いったよね$"
EventText_JP_081F94F6: @ 0x081F94F6
	.string "ミツル“ぼく　きょうから　シダケタウンの\nしんせきの　うちに　いくんですけど\pひとりじゃ　さみしいから　ポケモンを\nつれて　いこうかと　おもって……\pでも　いままで　じぶんで　ポケモンを\nつかまえた　ことが　ないから\lどう　やったら　いいのか……$"
EventText_JP_081F9572: @ 0x081F9572
	.string "パパ“……ふむ　なるほど$"
EventText_JP_081F957F: @ 0x081F957F
	.string "パパ“{PLAYER}!　はなしは　きいたね\pミツルくんが　ぶじに\nポケモンを　つかまえられるか\lみまもって　あげるんだ$"
EventText_JP_081F95B6: @ 0x081F95B6
	.string "ミツルくん\nわたしの　ポケモンを　かして　あげよう!\pミツルは\nジグザグマを　あずかった!$"
EventText_JP_081F95E4: @ 0x081F95E4
	.string "ミツル“わあ……\nポケモンだぁ……!\pパパ“うむ……\nモンスターボールは　あげるから\lがんばって　みなさい!\pミツルは\nモンスターボールを　もらった!$"
EventText_JP_081F9630: @ 0x081F9630
	.string "ミツル“おじさん　ありがとう!$"
EventText_JP_081F9640: @ 0x081F9640
	.string "{PLAYER}さん……\nぼくと　いっしょに　きてくれますよね$"
EventText_JP_081F965A: @ 0x081F965A
	.string "パパ“うまく　いったかい?$"
EventText_JP_081F9668: @ 0x081F9668
	.string "ミツル“おじさん\nおかりした　ポケモン　おかえし　します\p{PLAYER}さん　いっしょに　きてくれて\nどうも　ありがとう……\pポケモンを　つかまえることが　できたのは\nふたりの　おかげです!\lつかまえた　ポケモン　たいせつに　しますね\p……あ!　おかあさんが　まってるから\nぼくは　もう　いかなきゃ!\pじゃあね　{PLAYER}さん!$"
EventText_JP_081F9705: @ 0x081F9705
	.string "パパ“さて……\p{PLAYER}!　ポケモントレーナー　として\nつよく　なりたいのなら\lわたしの　アドバイスを　ききなさい\pまずは　この　さきにある\nカナズミシティに　いくんだ\pそこで　ツツジ　という　ジムリーダーと\nたたかうと　いい!\pそうやって　かくちの　ポケモンジムで\nジムリーダーを　たおして\lジムバッジを　あつめて　いくんだ\pもちろん　わたしも　ジムリーダーだ\nいずれ　{PLAYER}と　しょうぶ　するだろう\pだが　それは　{PLAYER}が\nつよくなってからの　はなし　だよ$"
EventText_JP_081F97E8: @ 0x081F97E8
	.string "パパ“ん?　カナズミの\nポケモンジムには　いかないのか?\pまだまだ　かけだしの　トレーナーと\nたたかっても　おもしろく　ないからな\p{PLAYER}には　もっと　つよくなって\nわたしの　まえに　あらわれて　ほしいんだ\pそうだな　ジムバッジを\n4つ　あつめられたら　そのときは\l{PLAYER}と　しょうぶ　しよう!$"
EventText_JP_081F987A: @ 0x081F987A
	.string "パパ“なるほど……\nカナズミの　ジムリーダーに　かったのか\pだが　まだまだ　{PLAYER}より\nつよい　トレーナーは　いっぱい　いる\pうみの　むこう　ムロタウンには\nトウキ　という　ジムリーダーが　いる\lかれとも　しょうぶ　してみると　いい$"
EventText_JP_081F98EE: @ 0x081F98EE
	.string "パパ“ふむ……\n{PLAYER}は　つよくなって　いるな\pその　バッジの　かずを　みれば　わかるよ$"
EventText_JP_081F991A: @ 0x081F991A
	.string "パパ“そうか……\nジムバッジを　4つ　あつめたのか\pでは　やくそく　どおり\nポケモンしょうぶ　だな……\p{PLAYER}……\pわたしは　いま　こうして\nじぶんの　こどもと\lしんけん　しょうぶ　できることが\lうれしくて　たまらない!\pだが　しょうぶは　しょうぶ!\pわたしは　ジムリーダーとして\nぜんりょくを　つくす!\l{PLAYER}も　ほんきで　かかってくるんだ!$"
EventText_JP_081F99C5: @ 0x081F99C5
	.string "……!\pまさか……\pまさか　{PLAYER}に……\p{PLAYER}に　まける　とは……\p……わかった!　きまりは　きまりだ!\nこれを　わたそう$"
EventText_JP_081F9A02: @ 0x081F9A02
	.string "{PLAYER}は　パパから\nバランスバッジを　もらった!$"
EventText_JP_081F9A1A: @ 0x081F9A1A
	.string "パパ“その　バランスバッジで\n{PLAYER}の　ポケモンの\lぼうぎょりょくが　たかくなる\pひでんわざの　なみのり　を\nおぼえた　ポケモンが　いるなら\lみずのうえを　すすめるように　なる\pこれは　わたしからの　おくりもの\n{PLAYER}なら　つかいこなせるだろう!$"
EventText_JP_081F9A94: @ 0x081F9A94
	.string "パパ“わざマシン42は　からげんき\pどくや　まひ　やけどに　なると\nわざの　いりょくが　ばいに　なる!\pピンチを　チャンスに\nかえることが　できるかも　しれないな$"
EventText_JP_081F9AE6: @ 0x081F9AE6
	.string "パパ“ジムリーダーとして\nいいようが　ないくらい　くやしい……\pだが　おや　としては\nうれしいような　さびしいような\lふしぎな　きもち　だ……$"
EventText_JP_081F9B2E: @ 0x081F9B2E
	.string "おお　いたいた　{PLAYER}{KUN}!\pちょっと　きてくれないか\nきみに　わたしたい　ものが　あるんだ!$"
EventText_JP_081F9B5D: @ 0x081F9B5D
	.string "なあ　センリさん　いいだろう?\pおたくの　{PLAYER}{KUN}を\nちょっと　おかりして　いくよ!$"
EventText_JP_081F9B88: @ 0x081F9B88
	.string "パパ“{PLAYER}!　たまには　ママにも\nあいに　いって　あげるんだぞ!\pわたしは　ここで\nじぶんを　きたえなおす!\p{PLAYER}に　まけた　ままでは\nトレーナーとして　くやしすぎる　からな$"
EventText_JP_081F9BE0: @ 0x081F9BE0
	.string "パパ“{PLAYER}!\nちょうしは　どうだ?\pポケモンは　おくが　ふかい!\nわたしは　いくら　しゅぎょう　しても\lたりなく　おもっている　ところだよ$"
EventText_JP_081F9C26: @ 0x081F9C26
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pこの　ジムは　へやにいる　トレーナーを\nたおせば　おくの　とびらが　ひらくッ!\p……おっと!　この　へやは　すでに\nとびらが　ひらく　ように　なってるから\lぼくを　たおしたり　しないで　くれよ!\pこの　トウカジムの　トレーナーたちは\nいろんな　わざを　つかってくるぞ!\pちなみに　ここから　いけるのは\nひだり……　すばやさの　へや\lみぎ……　めいちゅうの　へや　だ!\pとびらにも　かいてあるから　それを\nよんでから　すすむんだ\pさあ!　すきな　ほうを　えらんだら\nきばってこォー!!$"
EventText_JP_081F9D34: @ 0x081F9D34
	.string "{PLAYER}は　じぶんの　パパさえも\nのりこえて　しまったのか!?\pこらァ　びっくり　たまげたッ!!$"
EventText_JP_081F9D63: @ 0x081F9D63
	.string "あいてよりも　さきに　こうげき　できる……\pそれだけで　しょうぶは\nかなり　ゆうりに　なるだろう?$"
EventText_JP_081F9D95: @ 0x081F9D95
	.string "すばらしい　しょうぶ　だった……!$"
EventText_JP_081F9DA7: @ 0x081F9DA7
	.string "おくの　へやに　すすみたまえ!\nさらなる　しれんが　きみを　まっている\pひだりは　こんらんの　へや!\nみぎは　まもりの　へや　だ!$"
EventText_JP_081F9DE9: @ 0x081F9DE9
	.string "だれに　かとうとも\nだれに　まけようとも\lおのれと　ポケモンを　きたえつづける……\pそれが　ジムリーダー　なのさ$"
EventText_JP_081F9E22: @ 0x081F9E22
	.string "ここは　こんらんの　へや!\pきみと　ポケモンの　きずな\nみせて　もらうよ!$"
EventText_JP_081F9E48: @ 0x081F9E48
	.string "こんらん　させきれなかった\nふかい　きずなを　もっているね……$"
EventText_JP_081F9E68: @ 0x081F9E68
	.string "つぎは　ちからの　へや!\nその　こうげきりょくに　たえられるかい?$"
EventText_JP_081F9E8A: @ 0x081F9E8A
	.string "ジムリーダーが　きみに　まけてから\nくんれんが　さらに　きびしく　なったよ!$"
EventText_JP_081F9EB1: @ 0x081F9EB1
	.string "あとすこしで　たおせると　おもったとき\nあいての　たいりょくが　かいふく　する\lそれが　どんなに　つらい　ことか……\pその　つらさ　あじわってもらうよ!$"
EventText_JP_081F9EFE: @ 0x081F9EFE
	.string "かいふく　しきれなかった……\nすごい　こうげきりょく　だ……$"
EventText_JP_081F9F1D: @ 0x081F9F1D
	.string "さすがは　ジムリーダーの　こども……\pいや!　トレーナーの　さいのうは\nどりょくで　つちかわれる　もの……\pきみに　まけたのは　ぼくの　どりょくが\nたりなかった　から　なんだ……!\pさあ　つぎは　いちげきの　へや　だ!$"
EventText_JP_081F9F8B: @ 0x081F9F8B
	.string "ポケモンジムで　しゅぎょうを　かさね\nいつかは　ジムリーダーに　なってみせるよ$"
EventText_JP_081F9FB3: @ 0x081F9FB3
	.string "ジムリーダーの　こども　だからって\nてかげんは　しない!\pきゅうしょに　あたる　こわさ\nとくと　あじわって　もらうよ!$"
EventText_JP_081F9FEF: @ 0x081F9FEF
	.string "きみの　つよさは　ほんものだ……!$"
EventText_JP_081FA001: @ 0x081FA001
	.string "きみの　パパは　ほんとうに　つよい\nそんけいに　あたいする　トレーナーだ!\pそして　きみにも\nきみの　パパと　おなじ\lかがやきを　かんじる……\pおやこ　ふたりが　のうりょくを　きそう\nさいこうの　めいしょうぶを　みせてくれ!$"
EventText_JP_081FA072: @ 0x081FA072
	.string "きみの　パパが　ジムリーダーに　なってから\nトウカの　トレーナーたちも　つよくなった$"
EventText_JP_081FA09D: @ 0x081FA09D
	.string "ふふふ……\nここは　めいちゅうの　へや!\pすべての　こうげきが　あたるのって\nけっこう　いやな　ものよ$"
EventText_JP_081FA0D1: @ 0x081FA0D1
	.string "あなたの　ほうが　いちまい　うわてね……$"
EventText_JP_081FA0E6: @ 0x081FA0E6
	.string "おくで　さらに　てごわい　トレーナーが\nあなたを　まっている\pひだりは　まもりの　へや\nみぎは　かいふくの　へや　よ\pあなたの　ポケモンの\nこうげきりょくが　とわれるわ$"
EventText_JP_081FA13B: @ 0x081FA13B
	.string "あなたは　わたしたち　トレーナーが\nなにを　めざしているか　しってる?\p……それはね　ポケモンと\nこころを　ひとつに　する　ことよ!$"
EventText_JP_081FA17E: @ 0x081FA17E
	.string "まもりが　かたければ　かたいほど\nおもいきった　こうげきが　できるのよ$"
EventText_JP_081FA1A2: @ 0x081FA1A2
	.string "まもりきれなかった……$"
EventText_JP_081FA1AE: @ 0x081FA1AE
	.string "あなたには　たいせつな　ことを\nおしえて　もらった　きが　するわ……\pさあ　すすみなさい!\nひだりは　ちからの　へや\lみぎは　いちげきの　へや\pともに　こうげきを　とくいと　しているわ!$"
EventText_JP_081FA20C: @ 0x081FA20C
	.string "どう?　なみのりは　つかってる?$"
EventText_JP_081FA21D: @ 0x081FA21D
	.string "ぜんりょくで　あなたを　たおせと\nジムリーダーから　いわれている……\pたとえ　その　あいてが\nリーダーの　こども　だとしても!$"
EventText_JP_081FA25D: @ 0x081FA25D
	.string "ぜんりょくを　だしたのに……!$"
EventText_JP_081FA26D: @ 0x081FA26D
	.string "あなたの　ポケモンの　つかいかた……\nどことなく　おとうさんに　にているわ\pさあ!　この　おくには　ジムリーダー\nあなたの　おとうさんが　まっているわ!$"
EventText_JP_081FA2BA: @ 0x081FA2BA
	.string "ポケモンを　つよく　するのも　いいけど\pしょうぶの　ゆくえを　きめるのは\nそのひと　じしんの　ポケモンに　たいする\lきもち　なのよね……!$"
EventText_JP_081FA300: @ 0x081FA300
	.string "いまは　まだ　この　とびらは\nとざされて　いる　ようだ……$"
EventText_JP_081FA31E: @ 0x081FA31E
	.string "このさき　すばやさの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA342: @ 0x081FA342
	.string "いまは　まだ　この　とびらは\nとざされて　いる　ようだ……$"
EventText_JP_081FA360: @ 0x081FA360
	.string "このさき　めいちゅうの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA385: @ 0x081FA385
	.string "このさき　こんらんの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA3A9: @ 0x081FA3A9
	.string "このさき　まもりの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA3CC: @ 0x081FA3CC
	.string "このさき　かいふくの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA3F0: @ 0x081FA3F0
	.string "このさき　ちからの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA413: @ 0x081FA413
	.string "このさき　いちげきの　へや\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA437: @ 0x081FA437
	.string "このさき　ジムリーダー\pどんな　ポケモンが　まっているか　は\nじぶんの　めで　たしかめよ!\p……と　かいてある\nおくに　すすみますか?$"
EventText_JP_081FA47B: @ 0x081FA47B
	.string "トウカシティ　ポケモンジム$"
EventText_JP_081FA489: @ 0x081FA489
	.string "トウカシティ　ポケモンジム\pセンリ　にんてい　トレーナー!\n{PLAYER}$"
EventText_JP_081FA4AA: @ 0x081FA4AA
	.string "パパ“{PLAYER}……\nやはり　あらわれたな……\pおまえに　しょうぶを　いどまれて\nこの　わたしが　ことわる　はずがない\pわかっているな?\pジムの　なかでは　おたがいに\nおやこで　あることなど　かんけいない\p……いや　おやこ　だからこそ\nぜんりょくで　ぶつかるんだ\lそうだろ?　{PLAYER}!$"
EventText_JP_081FA535: @ 0x081FA535
	.string "はは　はは……\nぜんりょくを　だしすぎた……　かな?$"
EventText_JP_081FA550: @ 0x081FA550
	.string "パパ“{PLAYER}……\nおまえの　ゆめは　なんだ?\pわたしの　ゆめは……\nははは……\lじつは　もう　かなったんだよ$"
EventText_JP_081FA586: @ 0x081FA586
	.string "パパ“{PLAYER}……\nやはり　あらわれたな……\pおまえに　しょうぶを　いどまれて\nこの　わたしが　ことわる　はずがない\pわかっているな?\pジムの　なかでは　おたがいに\nおやこで　あることなど　かんけいない……\p……うん?　なんだ　{PLAYER}\nおまえは　たたかえる　ポケモンを\l1ひきしか　もっていないのか\pわるいけれど　2ひき　いじょうの\nポケモンを　もって　また　きておくれ$"
	.byte 0x00
EventScript_JP_081FA63E: @ 0x081FA63E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA650 @ EventText_JP_081FA650
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FA647: @ 0x081FA647
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA67F @ EventText_JP_081FA67F
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FA650: @ 0x081FA650
	.string "たびは　いいぞ!\pわしも　わかいときは　あちこちの\nうみや　やまを　わたりあるいた　ものだ!$"
EventText_JP_081FA67F: @ 0x081FA67F
	.string "あぁ……\pわたしも　ポケモンと　いっしょに\nぼうけんの　たびに　でかけて　みたい……\pしめった　くさむらに　もぐったり\nごつごつの　いわやまを　のぼったり\lうみの　あらなみを　わたったり\lまっくらな　どうくつを　さまよったり……\pそれでいて　ときには　じぶんの　おうちが\nこいしく　なったりして……\pたびって　いいよね!$"
	.byte 0x00
EventScript_JP_081FA721: @ 0x081FA721
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA733 @ EventText_JP_081FA733
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FA72A: @ 0x081FA72A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA775 @ EventText_JP_081FA775
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FA733: @ 0x081FA733
	.string "この　まちの　あたらしい\nジムリーダーに　なった　センリさん\pとおくに　すんでいた　ごかぞくを\nこっちに　よびよせた　らしいのよね$"
EventText_JP_081FA775: @ 0x081FA775
	.string "まえに　いちど　しょうぶ　してみたけど\nさすがに　センリさんは　つよいね!\pなんというか　こう……\p‘ポケモン　ひとすじに　いきる!’\nっていうのを　ヒシヒシと　かんじたよ!$"
MapScripts_JP_081FA7CD: @ 0x081FA7CD
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FA7D8
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081FA7D8: @ 0x081FA7D8
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0003
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081FA7E1: @ 0x081FA7E1
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FA7EF: @ 0x081FA7EF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA85B @ EventText_JP_081FA85B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FA7F8: @ 0x081FA7F8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA894 @ EventText_JP_081FA894
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FA801: @ 0x081FA801
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA8BC @ EventText_JP_081FA8BC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x012D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FA81D @ EventScript_JP_081FA81D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FA81D: @ 0x081FA81D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4023
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FA840 @ EventScript_JP_081FA840
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4023
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FA849 @ EventScript_JP_081FA849
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4023
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FA852 @ EventScript_JP_081FA852
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FA840: @ 0x081FA840
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA907 @ EventText_JP_081FA907
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081FA849: @ 0x081FA849
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA946 @ EventText_JP_081FA946
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventScript_JP_081FA852: @ 0x081FA852
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FA984 @ EventText_JP_081FA984
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: return
	.byte 0x03
EventText_JP_081FA85B: @ 0x081FA85B
	.string "パソコンで　つかえる\nポケモン　あずかり　システム……\pつくった　やつは\nすげー　かがくに　くわしいんだろうな!$"
EventText_JP_081FA894: @ 0x081FA894
	.string "ポケモンに　オレンのみ　を　たべさせたら\nたいりょくが　かいふく　したんだぜ!$"
EventText_JP_081FA8BC: @ 0x081FA8BC
	.string "ポケモンには\nいろいろ　タイプが　あるの!\pで　タイプには　あいしょうが　あるから\nポケモンしょうぶの　とき\lゆうり　だったり　ふり　だったりするの$"
EventText_JP_081FA907: @ 0x081FA907
	.string "たとえば　あなたの　キモリは\nくさタイプ　でしょ\pみずタイプや　じめんタイプに　つよくて\nほのおタイプが　にがて　なのよね!$"
EventText_JP_081FA946: @ 0x081FA946
	.string "たとえば　あなたの\nアチャモは　ほのおタイプ　でしょ\pくさタイプや　むしタイプに　つよくて\nみずタイプが　にがて　なんだ!$"
EventText_JP_081FA984: @ 0x081FA984
	.string "たとえば　あなたの\nミズゴロウは　みずタイプ　だよね\pほのおタイプに　つよくて\nくさタイプや　でんきタイプが　にがて　ね!$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081FA9EA: @ 0x081FA9EA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0128
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FAA26 @ EventScript_JP_081FAA26
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081FAA0C
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
	.byte 0x00, 0x00, 0x04, 0x00, 0x0D, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x55, 0x00, 0x56, 0x00
	.byte 0x4D, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x79, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081FAA26: @ 0x081FAA26
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081FAA38
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
	.byte 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11
	.byte 0x00, 0x55, 0x00, 0x56, 0x00, 0x4D, 0x00, 0x4B, 0x00, 0x4C, 0x00, 0x79, 0x00, 0x00, 0x00, 0x6C
	.byte 0x02
EventScript_JP_081FAA56: @ 0x081FAA56
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAA71 @ EventText_JP_081FAA71
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FAA5F: @ 0x081FAA5F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAAAB @ EventText_JP_081FAAAB
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FAA68: @ 0x081FAA68
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAADF @ EventText_JP_081FAADF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FAA71: @ 0x081FAA71
	.string "いまは　よわい　ポケモンでも\nそだててあげれば　きっと　つよくなる!\pだいじ　なのは\nポケモンへの　あいじょうよ!$"
EventText_JP_081FAAAB: @ 0x081FAAAB
	.string "むしよけスプレー　つかってる?\nつかうと　ポケモンが　よってこないから\lいそぐとき　べんり　なんだぜ!$"
EventText_JP_081FAADF: @ 0x081FAADF
	.string "きみ　どくけし　もってるかい?\pポケモン　どくを　くらったまま\nあるいていると　たいりょく　なくなって\lたおれちゃうから　もっておくと　いいよ!$"
	.byte 0x00
EventScript_JP_081FAB29: @ 0x081FAB29
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FAB7B @ EventScript_JP_081FAB7B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FAB8F @ EventScript_JP_081FAB8F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0095
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FABC2 @ EventScript_JP_081FABC2
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0094
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FABA3 @ EventScript_JP_081FABA3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FABF1 @ EventText_JP_081FABF1
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
	.4byte 0x081FAC36 @ EventText_JP_081FAC36
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
	@ event command: setflag
	.byte 0x29
	.2byte 0x0094
	@ event command: setflag
	.byte 0x29
	.2byte 0x0372
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FAB7B: @ 0x081FAB7B
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
	.4byte 0x081FADD8 @ EventText_JP_081FADD8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FAB8F: @ 0x081FAB8F
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
	.4byte 0x081FAD7D @ EventText_JP_081FAD7D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FABA3: @ 0x081FABA3
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
	.4byte 0x081FACDE @ EventText_JP_081FACDE
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
EventScript_JP_081FABC2: @ 0x081FABC2
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
	.4byte 0x081FAD21 @ EventText_JP_081FAD21
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FABD6: @ 0x081FABD6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAF20 @ EventText_JP_081FAF20
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FABDF: @ 0x081FABDF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAF7A @ EventText_JP_081FAF7A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FABE8: @ 0x081FABE8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAE4A @ EventText_JP_081FAE4A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FABF1: @ 0x081FABF1
	.string "えーと……　これが　こーなって\nそいでもって　あれが　あーなって\lと　いうことは　それと　これは　どれ?\pああ　もう　わけが　わからん!$"
EventText_JP_081FAC36: @ 0x081FAC36
	.string "……ん?\pぼくは　クスノキかんちょう　から\nれんらくせんの　せっけいを　まかされた\lツガという　ものだけど……\pあっ!?\nそれは　デボンのにもつ!\pうーん……\nこまったな……\pクスノキかんちょう\nほかにも　しごとが　あるからって\lどこかに　いっちゃったんだ\pわるいけど　きみ　クスノキかんちょう\nさがして　にもつを　わたしてあげてよ!$"
EventText_JP_081FACDE: @ 0x081FACDE
	.string "ツガ“クスノキかんちょう\nどこに　いっちゃったのかな?\pわるいけど　きみ　クスノキかんちょう\nさがして　にもつを　わたしてあげてよ!$"
EventText_JP_081FAD21: @ 0x081FAD21
	.string "ツガ“ふねをつくる　っていうのは\nつくえの　うえでの　けいさん　だけでは\lわからないことも　おおくてね\pやっぱり　うみのことを　しりつくした\nベテランの　ちえが　ほしいところだよ……$"
EventText_JP_081FAD7D: @ 0x081FAD7D
	.string "ツガ“やあ!　ハギろうじんが　ここで\nてつだって　くれるように　なったよ!\pでんせつの　ふなのりに　てつだってもらえて\nれんらくせんは　ちゃくちゃくと\lかんせいに　むかっているよ!$"
EventText_JP_081FADD8: @ 0x081FADD8
	.string "ツガ“ついに　ふねは　かんせいしたよ!\pできた　れんらくせん　タイドリップごうは\nまさに　さいこう　けっさく!\pだけど　もっと　いいものが　できそうな……\nそんな　きも　するんだよ\pそう……\nものづくりに　おわりは　ないのさ!$"
EventText_JP_081FAE4A: @ 0x081FAE4A
	.string "ハギ“おお!　{PLAYER}{KUN}!\nひさしぶり　じゃのう!\pいやあ　きみと　であってから\nふなのりの　ちが　さわいでな……\pツガくんに　きょうりょく　して\nれんらくせんを　つくりたく　なったんじゃ!\pれんらくせんが　できると　おおくの\nひとを　はこべるように　なるからのう\pしかし……　ふむう……\nツガくんは　すごいのう……\pかれの　ぎじゅつと　わしの　けいけんを\nがったい　させれば　かならずや\lすごい　ふねが　できるに　ちがいない!$"
EventText_JP_081FAF20: @ 0x081FAF20
	.string "きせつや　てんきや　つきのいち　など\nさまざまな　じょうけん　によって\lうみは　つねに　すがたを　かえていきます\pそう!　うみ　というのは\nいきもの　のような　もの　なんですよ!$"
EventText_JP_081FAF7A: @ 0x081FAF7A
	.string "ぼくは　すぐに　ふなよい　するのよね\nだから　ここで　おてつだい　してるのよね$"
	.byte 0x00
EventScript_JP_081FAFA3: @ 0x081FAFA3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAFB5 @ EventText_JP_081FAFB5
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FAFAC: @ 0x081FAFAC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FAFED @ EventText_JP_081FAFED
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FAFB5: @ 0x081FAFB5
	.string "おおきな　ふねを　つくる　というのは\nのりものを　つくる　というよりも\lたてものを　つくるのに　にているんだよ$"
EventText_JP_081FAFED: @ 0x081FAFED
	.string "おもたい　てつで　できている　ふねが\nうみに　うくなんて　ふしぎ　だろう?\pあれは　‘ふりょく’　という　げんりを\nおうよう　しているんだ$"
MapScripts_JP_081FB033: @ 0x081FB033
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081FB052
	.byte 0x04
	.4byte MapScriptTable_JP_081FB03E
	.byte 0
MapScriptTable_JP_081FB03E: @ 0x081FB03E
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081FB048
	.2byte 0
EventScript_JP_081FB048: @ 0x081FB048
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081FB052: @ 0x081FB052
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081FB07C
	.2byte 0x4000, 0x0001
	.4byte EventScript_JP_081FB085
	.2byte 0x4000, 0x0002
	.4byte EventScript_JP_081FB174
	.2byte 0x4000, 0x0003
	.4byte EventScript_JP_081FB0BA
	.2byte 0x4000, 0x0004
	.4byte EventScript_JP_081FB13A
	.2byte 0
EventScript_JP_081FB07C: @ 0x081FB07C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_081FB085: @ 0x081FB085
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275660 @ gText_Rom_275660
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FB0BA: @ 0x081FB0BA
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x08275596 @ gText_Rom_275596
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
EventScript_JP_081FB0EC: @ 0x081FB0EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082755EC @ gText_Rom_2755EC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB12D @ EventScript_JP_081FB12D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: message
	.byte 0x67
	.4byte 0x0822064B @ gText_Rom_22064B
	@ event command: waitmessage
	.byte 0x66
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: waitfanfare
	.byte 0x32
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB164 @ EventScript_JP_081FB164
EventScript_JP_081FB12D: @ 0x081FB12D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275607 @ gText_Rom_275607
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB164 @ EventScript_JP_081FB164
EventScript_JP_081FB13A: @ 0x081FB13A
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x08275524 @ gText_Rom_275524
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
EventScript_JP_081FB164: @ 0x081FB164
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827549D @ gText_Rom_27549D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FB174: @ 0x081FB174
	@ event command: lockall
	.byte 0x69
	@ event command: message
	.byte 0x67
	.4byte 0x08275634 @ gText_Rom_275634
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB2AF @ EventScript_JP_081FB2AF
EventScript_JP_081FB1AD: @ 0x081FB1AD
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081FB0EC @ EventScript_JP_081FB0EC
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275307 @ gText_Rom_275307
	@ event command: callstd
	.byte 0x09
	.byte 0x04
EventScript_JP_081FB1CD: @ 0x081FB1CD
	@ event command: message
	.byte 0x67
	.4byte 0x08275335 @ gText_Rom_275335
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x17
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB209 @ EventScript_JP_081FB209
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB30A @ EventScript_JP_081FB30A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB331 @ EventScript_JP_081FB331
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB331 @ EventScript_JP_081FB331
EventScript_JP_081FB209: @ 0x081FB209
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CF
	.2byte 0x0004
	@ event command: setvar
	.byte 0x16
	.2byte 0x40CE
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082754D7 @ gText_Rom_2754D7
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB32E @ EventScript_JP_081FB32E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB253 @ EventScript_JP_081FB253
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB32E @ EventScript_JP_081FB32E
EventScript_JP_081FB253: @ 0x081FB253
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0002
	@ event command: call
	.byte 0x04
	.4byte 0x082423E9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x00FF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB317 @ EventScript_JP_081FB317
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
EventScript_JP_081FB2AF: @ 0x081FB2AF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275515 @ gText_Rom_275515
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x081FB2CC @ EventScript_JP_081FB2CC
	@ event command: warp
	.byte 0x39
	.byte 0x09
	.byte 0x03
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0007
	.byte 0x16, 0x00, 0x40, 0x00, 0x00, 0x27, 0x02
EventScript_JP_081FB2CC: @ 0x081FB2CC
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081FB2FB @ Movement_JP_081FB2FB
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FB302 @ Movement_JP_081FB302
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0006
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081FB2FF @ Movement_JP_081FB2FF
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FB306 @ Movement_JP_081FB306
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0006
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: return
	.byte 0x03
Movement_JP_081FB2FB: @ 0x081FB2FB
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081FB2FF: @ 0x081FB2FF
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081FB302: @ 0x081FB302
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081FB306: @ 0x081FB306
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventScript_JP_081FB30A: @ 0x081FB30A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827534A @ gText_Rom_27534A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB1CD @ EventScript_JP_081FB1CD
EventScript_JP_081FB317: @ 0x081FB317
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB331 @ EventScript_JP_081FB331
EventScript_JP_081FB32E: @ 0x081FB32E
	@ event command: special
	.byte 0x25
	.2byte 0x0028
EventScript_JP_081FB331: @ 0x081FB331
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827549D @ gText_Rom_27549D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
	.byte 0x09, 0x09, 0x09, 0x54, 0xFE
EventScript_JP_081FB340: @ 0x081FB340
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0109
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB377 @ EventScript_JP_081FB377
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FB451 @ EventText_JP_081FB451
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0149
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
	.2byte 0x0109
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FB4C1 @ EventText_JP_081FB4C1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FB377: @ 0x081FB377
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FB4C1 @ EventText_JP_081FB4C1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FB381: @ 0x081FB381
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FB516 @ EventText_JP_081FB516
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FB38A: @ 0x081FB38A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FB54A @ EventText_JP_081FB54A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FB393: @ 0x081FB393
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FB570 @ EventText_JP_081FB570
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FB39C: @ 0x081FB39C
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08231A91 @ gText_Rom_231A91
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB3AB @ EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB3AB: @ 0x081FB3AB
	@ event command: message
	.byte 0x67
	.4byte 0x08231AA7 @ gText_Rom_231AA7
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x00
	.byte 0x6F
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB409 @ EventScript_JP_081FB409
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB417 @ EventScript_JP_081FB417
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB425 @ EventScript_JP_081FB425
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB433 @ EventScript_JP_081FB433
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB441 @ EventScript_JP_081FB441
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB44F @ EventScript_JP_081FB44F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB44F @ EventScript_JP_081FB44F
	@ event command: end
	.byte 0x02
EventScript_JP_081FB409: @ 0x081FB409
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082756F3 @ gText_Rom_2756F3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB3AB @ EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB417: @ 0x081FB417
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275757 @ gText_Rom_275757
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB3AB @ EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB425: @ 0x081FB425
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082757A8 @ gText_Rom_2757A8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB3AB @ EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB433: @ 0x081FB433
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08275803 @ gText_Rom_275803
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB3AB @ EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB441: @ 0x081FB441
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0827589C @ gText_Rom_27589C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB3AB @ EventScript_JP_081FB3AB
	.byte 0x02
EventScript_JP_081FB44F: @ 0x081FB44F
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081FB451: @ 0x081FB451
	.string "なかなか　かりたい　ポケモンが\nみつからねぇ　からよぉ\lそこの　にーさんに　もんく　いったけどよぉ\pちぃっとも　あいて　してくれねぇのさ\nくやしいったら　ありゃ　しねぇぜ!\pおい　おまえ!\nだまって　これを　うけとれよぉ!$"
EventText_JP_081FB4C1: @ 0x081FB4C1
	.string "わざマシン41は　いちゃもん!\pあいてによぉ　おなじ　わざを　つづけて\nださせねえように　する　わざ　なんだよぉ!\pいっとくけどなぁ\nおれは　いちゃもん　つけてねぇぞ!$"
EventText_JP_081FB516: @ 0x081FB516
	.string "たまには　にがてな\nむしタイプの　ポケモンでも\lつかって　みようかな?\lスキに　なるかも　しれないし!$"
EventText_JP_081FB54A: @ 0x081FB54A
	.string "つよい　ポケモン　もってなくても\nここでなら　いっぱい　しょうぶできるね!$"
EventText_JP_081FB570: @ 0x081FB570
	.string "ステキな　トレーナーの　おにいさんも\nかしだして　くれれば　いいのにぃ$"
MapScripts_JP_081FB594: @ 0x081FB594
	@ map script dispatch table
	.byte 0x02
	.4byte MapScriptTable_JP_081FB5C9
	.byte 0x04
	.4byte MapScriptTable_JP_081FB59F
	.byte 0
MapScriptTable_JP_081FB59F: @ 0x081FB59F
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081FB5A9
	.2byte 0
EventScript_JP_081FB5A9: @ 0x081FB5A9
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081FB5C4 @ EventScript_JP_081FB5C4
	@ event command: setobjectxy
	.byte 0x57
	.2byte 0x0001
	.2byte 0x0002
	.2byte 0x0002
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x0001
	.byte 0x01
EventScript_JP_081FB5C4: @ 0x081FB5C4
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x02
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081FB5C9: @ 0x081FB5C9
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081FB5D3
	.2byte 0
EventScript_JP_081FB5D3: @ 0x081FB5D3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB65C @ EventScript_JP_081FB65C
	@ event command: setvar
	.byte 0x16
	.2byte 0x4000
	.2byte 0x0001
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081FB7D0 @ Movement_JP_081FB7D0
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FB7C7 @ Movement_JP_081FB7C7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8006
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB7B2 @ EventScript_JP_081FB7B2
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082323B3 @ gText_Rom_2323B3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: waitstate
	.byte 0x27
EventScript_JP_081FB622: @ 0x081FB622
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0823287D @ gText_Rom_23287D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: opendoor
	.byte 0xAC
	.2byte 0x0002
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x081FB7D6 @ Movement_JP_081FB7D6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FB7CC @ Movement_JP_081FB7CC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: closedoor
	.byte 0xAD
	.2byte 0x0002
	.2byte 0x0001
	@ event command: waitdooranim
	.byte 0xAE
	@ event command: warp
	.byte 0x39
	.byte 0x09
	.byte 0x04
	.byte 0xFF
	.2byte 0x0004
	.2byte 0x0004
	.byte 0x27, 0x02
EventScript_JP_081FB65C: @ 0x081FB65C
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: special
	.byte 0x25
	.2byte 0x00EE
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0010
	@ event command: special
	.byte 0x25
	.2byte 0x00EE
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082323F8 @ gText_Rom_2323F8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0170
	@ event command: waitfanfare
	.byte 0x32
	@ event command: special
	.byte 0x25
	.2byte 0x0000
EventScript_JP_081FB67B: @ 0x081FB67B
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FB782 @ EventScript_JP_081FB782
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FB789 @ EventScript_JP_081FB789
	@ event command: multichoice
	.byte 0x6F
	.byte 0x14
	.byte 0x06
	.byte 0x68
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB729 @ EventScript_JP_081FB729
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB6C9 @ EventScript_JP_081FB6C9
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB6F7 @ EventScript_JP_081FB6F7
EventScript_JP_081FB6C9: @ 0x081FB6C9
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082324CA @ gText_Rom_2324CA
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB67B @ EventScript_JP_081FB67B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB790 @ EventScript_JP_081FB790
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB67B @ EventScript_JP_081FB67B
EventScript_JP_081FB6F7: @ 0x081FB6F7
	@ event command: message
	.byte 0x67
	.4byte 0x082324E3 @ gText_Rom_2324E3
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x14
	.byte 0x08
	.byte 0x5E
	.byte 0x01
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB67B @ EventScript_JP_081FB67B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBD14 @ EventScript_JP_081FBD14
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB67B @ EventScript_JP_081FB67B
EventScript_JP_081FB729: @ 0x081FB729
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08232839 @ gText_Rom_232839
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB622 @ EventScript_JP_081FB622
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB75F @ EventScript_JP_081FB75F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB622 @ EventScript_JP_081FB622
EventScript_JP_081FB75F: @ 0x081FB75F
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FB622 @ EventScript_JP_081FB622
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0823285F @ gText_Rom_23285F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB622 @ EventScript_JP_081FB622
EventScript_JP_081FB782: @ 0x081FB782
	@ event command: message
	.byte 0x67
	.4byte 0x08232415 @ gText_Rom_232415
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_081FB789: @ 0x081FB789
	@ event command: message
	.byte 0x67
	.4byte 0x08232433 @ gText_Rom_232433
	@ event command: waitmessage
	.byte 0x66
	@ event command: return
	.byte 0x03
EventScript_JP_081FB790: @ 0x081FB790
	@ event command: message
	.byte 0x67
	.4byte 0x0823288B @ gText_Rom_23288B
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00F4
	@ event command: playse
	.byte 0x2F
	.2byte 0x0037
	@ event command: waitse
	.byte 0x30
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: end
	.byte 0x02
EventScript_JP_081FB7B2: @ 0x081FB7B2
	@ event command: special
	.byte 0x25
	.2byte 0x0027
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EE
	@ event command: goto
	.byte 0x05
	.4byte 0x081FB67B @ EventScript_JP_081FB67B
Movement_JP_081FB7C7: @ 0x081FB7C7
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081FB7CC: @ 0x081FB7CC
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
Movement_JP_081FB7D0: @ 0x081FB7D0
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081FB7D6: @ 0x081FB7D6
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
EventText_JP_081FB7D9: @ 0x081FB7D9
	.string "コンテストの　ナイスな　じょうほう\nおしえて　やるよ!\pある　わざの　つぎに\nとくていの　わざで　アピールすると\lすごく　めだつ　ときが　あるんだ!\pうまくやれば　かなり\nゆうりな　アピールが　できるよ!\pただ　じゃまされちゃう　ときも　あるけどね$"
EventText_JP_081FB856: @ 0x081FB856
	.string "ぼくの　おとうさん　コンテストの\nしんさいんを　やって　いるんだ!\pぼくは　おおきく　なったら\nコンテストの　しんさいん　と\lジムリーダーと　どっちに　なろうかな?$"
EventText_JP_081FB8A9: @ 0x081FB8A9
	.string "どうして　おれの　ポケモンが\nゆうしょう　できなかったのか\lちぃっとも　わからねえ　からよぉ\lしんさいんに　もんく　いったけどよぉ\pちぃっとも　あいて　してくれねぇのさ\nくやしいったら　ありゃ　しねぇぜ!\pおい　おまえ!\nだまって　これを　うけとれよぉ!$"
EventText_JP_081FB929: @ 0x081FB929
	.string "わざマシン41は　いちゃもん!\pあいてによぉ　おなじ　わざを　つづけて\nださせねえように　する　わざ　なんだよぉ!\pいっとくけどなぁ\nおれは　いちゃもん　つけてねぇぞ!$"
EventText_JP_081FB97E: @ 0x081FB97E
	.string "しかい“あら!　なかなか　すてきな\nポケモンを　つれて　いますね!\pぜひ!　コンテストに\nでて　みて　くださーい!\pきっと　いいセン　いきますよ!\nわたしの　みる　めは　たしかですよ!$"
EventText_JP_081FB9DB: @ 0x081FB9DB
	.string "しんさいん“やあ　こんにちは!\nきみも　トレーナーの　ようだね!\pだったら　ポケモンコンテストに\nでない　ては　ないよ!\pコンテストパスを　シダケタウンで　もらって\nいますぐ　エントリーだ!$"
EventText_JP_081FBA3B: @ 0x081FBA3B
	.string "これから　いよいよ　アピールタイム!\nどの　わざから　みせようかな?$"
EventText_JP_081FBA5E: @ 0x081FBA5E
	.string "オレの　ポケモンの　アピール\nあんまり　みて　もらえなかった……\pフッ……　あの　しんさいん\nみる　めが　ないな!$"
	.byte 0x05, 0x50, 0xAB, 0x00, 0x0A, 0x2E, 0x15, 0x00, 0x14, 0x0A, 0x2B, 0x1F, 0x44, 0x00, 0x01, 0x37
	.byte 0x50, 0x13, 0x07, 0x13, 0xFE, 0x57, 0x70, 0x00, 0x09, 0x2E, 0x07, 0x35, 0x03, 0x00, 0x18, 0x50
	.byte 0x0C, 0x2E, 0x41, 0x18, 0xAB, 0xFA, 0x3D, 0x34, 0x01, 0x00, 0x02, 0x02, 0x0A, 0x14, 0x00, 0x05
	.byte 0x0C, 0x04, 0x13, 0x00, 0x01, 0x3A, 0x29, 0x26, 0xFB, 0x41, 0x0C, 0x10, 0x00, 0x2C, 0x3C, 0x37
	.byte 0x00, 0x1F, 0x2C, 0x28, 0x16, 0x00, 0x03, 0x09, 0x29, 0x14, 0xFE, 0x06, 0x02, 0x3D, 0x36, 0x03
	.byte 0x37, 0x00, 0x54, 0x57, 0x5B, 0x52, 0x64, 0x00, 0x0C, 0x13, 0x08, 0x29, 0xAB, 0xFB, 0x02, 0x11
	.byte 0x46, 0x2E, 0x00, 0x54, 0x57, 0x5B, 0x52, 0x64, 0x00, 0x0C, 0x10, 0x14, 0x07, 0xFE, 0x51, 0x9C
	.byte 0xAE, 0x79, 0x0C, 0x13, 0x10, 0x00, 0x9F, 0x59, 0x73, 0x7E, 0x16, 0x1A, 0xB0, 0xB0, 0xFB, 0x02
	.byte 0x02, 0x0A, 0x14, 0x37, 0x00, 0x01, 0x29, 0x06, 0x23, 0x15, 0xAB, 0xFF
EventText_JP_081FBB24: @ 0x081FBB24
	.string "だ　だめだぁ!　ポケモンより\nじぶんの　ほうが　きんちょう　してる!\lブルブル……　ドキドキ…$"
EventText_JP_081FBB54: @ 0x081FBB54
	.string "ポケモンしょうぶも　コンテストも\nちがう　ようで　にて　いるよね!\pだいじに　そだてた　ポケモンを\nしんらいして　がんばる　ところがさ!$"
EventText_JP_081FBB99: @ 0x081FBB99
	.string "あの　ポケモン　ちょうし　よさそうだろ!\p2じしんさで　ちょうしが　よくなった\nポケモンは　あまり　きんちょうしないで\lアピール　できる　ように　なるみたいだな$"
EventText_JP_081FBBEA: @ 0x081FBBEA
	.string "なんだあー　このぐらい　なら\nおれの　ポケモンの　ほうが\lだんぜん　うえ　だね!$"
EventText_JP_081FBC13: @ 0x081FBC13
	.string "げんきな　アピールを　みていると\nいっしょに　からだを\lうごかしたく　なって　こないか?$"
EventText_JP_081FBC40: @ 0x081FBC40
	.string "ポケモン　コンテスト\nハイパーランク　ステージ!$"
MapScripts_JP_081FBC59: @ 0x081FBC59
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FBC69
	.byte 0x04
	.4byte MapScriptTable_JP_081FBC93
	.byte 0x02
	.4byte MapScriptTable_JP_081FBCAD
	.byte 0
EventScript_JP_081FBC69: @ 0x081FBC69
	@ event command: call
	.byte 0x04
	.4byte 0x081FBC6F @ EventScript_JP_081FBC6F
	@ event command: end
	.byte 0x02
EventScript_JP_081FBC6F: @ 0x081FBC6F
	@ event command: checkplayergender
	.byte 0xA0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBC87 @ EventScript_JP_081FBC87
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBC8D @ EventScript_JP_081FBC8D
	@ event command: return
	.byte 0x03
EventScript_JP_081FBC87: @ 0x081FBC87
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0064
	@ event command: return
	.byte 0x03
EventScript_JP_081FBC8D: @ 0x081FBC8D
	@ event command: setvar
	.byte 0x16
	.2byte 0x4011
	.2byte 0x0069
	@ event command: return
	.byte 0x03
MapScriptTable_JP_081FBC93: @ 0x081FBC93
	@ conditional map script table
	.2byte 0x4001, 0x0000
	.4byte EventScript_JP_081FBC9D
	.2byte 0
EventScript_JP_081FBC9D: @ 0x081FBC9D
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x05
	.byte 0x03
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x0002
	.byte 0x09
	.byte 0x04
	@ event command: end
	.byte 0x02
MapScriptTable_JP_081FBCAD: @ 0x081FBCAD
	@ conditional map script table
	.2byte 0x4000, 0x0000
	.4byte EventScript_JP_081FBCB7
	.2byte 0
EventScript_JP_081FBCB7: @ 0x081FBCB7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081FBD92 @ Movement_JP_081FBD92
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: special
	.byte 0x25
	.2byte 0x00EE
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x0005
	.2byte 0x0001
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081FBD97 @ Movement_JP_081FBD97
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00F2
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x02021C7C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmessage
	.byte 0x66
	@ event command: closemessage
	.byte 0x68
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x00EC
	@ event command: waitstate
	.byte 0x27
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBD32 @ EventScript_JP_081FBD32
EventScript_JP_081FBD14: @ 0x081FBD14
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0004
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: warp
	.byte 0x39
	.byte 0x09
	.byte 0x02
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0006
	.byte 0x27
EventScript_JP_081FBD32: @ 0x081FBD32
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: addvar
	.byte 0x17
	.2byte 0x800D
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0002
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8006
	.2byte 0x800D
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBD74 @ EventScript_JP_081FBD74
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0001
	@ event command: warp
	.byte 0x39
	.byte 0x09
	.byte 0x03
	.byte 0xFF
	.2byte 0x0002
	.2byte 0x0003
	.byte 0x27
EventScript_JP_081FBD74: @ 0x081FBD74
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8005
	.2byte 0x0000
	@ event command: setvar
	.byte 0x16
	.2byte 0x8006
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x00E7
	@ event command: special
	.byte 0x25
	.2byte 0x0028
	@ event command: warp
	.byte 0x39
	.byte 0x09
	.byte 0x02
	.byte 0xFF
	.2byte 0x0006
	.2byte 0x0006
	.byte 0x27
Movement_JP_081FBD92: @ 0x081FBD92
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x09 @ walk_up
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
Movement_JP_081FBD97: @ 0x081FBD97
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
	.byte 0x00
EventScript_JP_081FBD9E: @ 0x081FBD9E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBE87 @ EventText_JP_081FBE87
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBDBF @ EventScript_JP_081FBDBF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBDE2 @ EventScript_JP_081FBDE2
	@ event command: end
	.byte 0x02
EventScript_JP_081FBDBF: @ 0x081FBDBF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBED1 @ EventText_JP_081FBED1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x009F
	@ event command: waitstate
	.byte 0x27
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x05
	.4byte 0x081FBDEC @ EventScript_JP_081FBDEC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x00FF
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBDE2 @ EventScript_JP_081FBDE2
	@ event command: end
	.byte 0x02
EventScript_JP_081FBDE2: @ 0x081FBDE2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBF7D @ EventText_JP_081FBF7D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FBDEC: @ 0x081FBDEC
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0146
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x019C
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBE3F @ EventScript_JP_081FBE3F
	@ event command: special
	.byte 0x25
	.2byte 0x007C
	@ event command: special
	.byte 0x25
	.2byte 0x007D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBE49 @ EventScript_JP_081FBE49
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x014F
	@ event command: special
	.byte 0x25
	.2byte 0x007C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBE49 @ EventScript_JP_081FBE49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBEEA @ EventText_JP_081FBEEA
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBE53 @ EventScript_JP_081FBE53
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBDE2 @ EventScript_JP_081FBDE2
	@ event command: end
	.byte 0x02
EventScript_JP_081FBE3F: @ 0x081FBE3F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC011 @ EventText_JP_081FC011
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FBE49: @ 0x081FBE49
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBFCF @ EventText_JP_081FBFCF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FBE53: @ 0x081FBE53
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBF35 @ EventText_JP_081FBF35
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x007B
	@ event command: special
	.byte 0x25
	.2byte 0x007C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FBE7D @ EventScript_JP_081FBE7D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBF8F @ EventText_JP_081FBF8F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FBE7D: @ 0x081FBE7D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FBF4E @ EventText_JP_081FBF4E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081FBE87: @ 0x081FBE87
	.string "はい　はい!\nわたしは　せいめい　はんだんし\lいうなれば　なまえの　うらないです\pはい　あなたの　ポケモンの\nニックネームを　うらなって　あげるよ$"
EventText_JP_081FBED1: @ 0x081FBED1
	.string "どの　ポケモンの\nニックネームを　うらなうかね?$"
EventText_JP_081FBEEA: @ 0x081FBEEA
	.string "うーむ　{STR_VAR_1}か……\nなかなか　いい　ニックネームを　つけたね\pでもねー\nもう　すこしだけ　いい　なまえを\lわたしが　つけて　あげようか?　どうかな?$"
EventText_JP_081FBF35: @ 0x081FBF35
	.string "そうか　では\nどんな　ニックネームに　しようかな$"
EventText_JP_081FBF4E: @ 0x081FBF4E
	.string "よし　これから\nこの　ポケモンは　{STR_VAR_1}だ!\pまえより　いい　なまえ　じゃないか\nよかったな!$"
EventText_JP_081FBF7D: @ 0x081FBF7D
	.string "そうか\nわかった　また　きなさいよ$"
EventText_JP_081FBF8F: @ 0x081FBF8F
	.string "よし　これから\nこの　ポケモンは　{STR_VAR_1}だ!\pまえと　おなじように　みえるが\nこっちの　ほうが　だんぜん　いいぞ!\lよかったな!$"
EventText_JP_081FBFCF: @ 0x081FBFCF
	.string "うーむ　{STR_VAR_1}か!\nこれは　すばらしい　ニックネームだ!\lけちの　つけようもない!\pこれからも　{STR_VAR_1}を\nかわいがって　あげなさいよ!$"
EventText_JP_081FC011: @ 0x081FC011
	.string "おいおい……\nそれは　タマゴ　じゃないか!$"
	.byte 0x00
EventScript_JP_081FC028: @ 0x081FC028
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0155
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081FC2E4 @ EventScript_JP_081FC2E4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0156
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081FC304 @ EventScript_JP_081FC304
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x40B7
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC064 @ EventScript_JP_081FC064
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC077 @ EventScript_JP_081FC077
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC0CD @ EventScript_JP_081FC0CD
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC064: @ 0x081FC064
	@ event command: setvar
	.byte 0x16
	.2byte 0x40B7
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC4E7 @ EventText_JP_081FC4E7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FC0D7 @ EventScript_JP_081FC0D7
	.byte 0x02
EventScript_JP_081FC077: @ 0x081FC077
	@ event command: setvar
	.byte 0x16
	.2byte 0x4002
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CC
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC162 @ EventScript_JP_081FC162
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CB
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC162 @ EventScript_JP_081FC162
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CA
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC162 @ EventScript_JP_081FC162
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C9
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC162 @ EventScript_JP_081FC162
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C8
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC162 @ EventScript_JP_081FC162
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0005
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC15C @ EventScript_JP_081FC15C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40B7
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC0CD @ EventScript_JP_081FC0CD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC5F9 @ EventText_JP_081FC5F9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x081FC0D7 @ EventScript_JP_081FC0D7
	.byte 0x02
EventScript_JP_081FC0CD: @ 0x081FC0CD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC826 @ EventText_JP_081FC826
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC0D7: @ 0x081FC0D7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC623 @ EventText_JP_081FC623
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CC
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081FC2CD @ EventScript_JP_081FC2CD
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CB
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081FC2B6 @ EventScript_JP_081FC2B6
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00CA
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081FC29F @ EventScript_JP_081FC29F
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C9
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081FC288 @ EventScript_JP_081FC288
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00C8
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x081FC271 @ EventScript_JP_081FC271
	@ event command: bufferleadmonspeciesname
	.byte 0x7E
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC168 @ EventScript_JP_081FC168
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC172 @ EventScript_JP_081FC172
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC1A3 @ EventScript_JP_081FC1A3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC1D4 @ EventScript_JP_081FC1D4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC205 @ EventScript_JP_081FC205
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC236 @ EventScript_JP_081FC236
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC15C: @ 0x081FC15C
	@ event command: setvar
	.byte 0x16
	.2byte 0x40B7
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_081FC162: @ 0x081FC162
	@ event command: addvar
	.byte 0x17
	.2byte 0x4002
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081FC168: @ 0x081FC168
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC631 @ EventText_JP_081FC631
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC172: @ 0x081FC172
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x00FE
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC267 @ EventScript_JP_081FC267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC6CB @ EventText_JP_081FC6CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00C8
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00FE
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC728 @ EventText_JP_081FC728
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC1A3: @ 0x081FC1A3
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x00FF
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC267 @ EventScript_JP_081FC267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC6CB @ EventText_JP_081FC6CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00C9
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00FF
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC75D @ EventText_JP_081FC75D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC1D4: @ 0x081FC1D4
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x0100
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC267 @ EventScript_JP_081FC267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC6CB @ EventText_JP_081FC6CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00CA
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0100
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC792 @ EventText_JP_081FC792
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC205: @ 0x081FC205
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x0101
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC267 @ EventScript_JP_081FC267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC6CB @ EventText_JP_081FC6CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00CB
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0101
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC7C4 @ EventText_JP_081FC7C4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC236: @ 0x081FC236
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x0102
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC267 @ EventScript_JP_081FC267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC6CB @ EventText_JP_081FC6CB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00CC
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0102
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC7F5 @ EventText_JP_081FC7F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC267: @ 0x081FC267
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC68D @ EventText_JP_081FC68D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC271: @ 0x081FC271
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0109
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC282 @ EventScript_JP_081FC282
	@ event command: return
	.byte 0x03
EventScript_JP_081FC282: @ 0x081FC282
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081FC288: @ 0x081FC288
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x010A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC299 @ EventScript_JP_081FC299
	@ event command: return
	.byte 0x03
EventScript_JP_081FC299: @ 0x081FC299
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_081FC29F: @ 0x081FC29F
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x010B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC2B0 @ EventScript_JP_081FC2B0
	@ event command: return
	.byte 0x03
EventScript_JP_081FC2B0: @ 0x081FC2B0
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0003
	@ event command: return
	.byte 0x03
EventScript_JP_081FC2B6: @ 0x081FC2B6
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x010C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC2C7 @ EventScript_JP_081FC2C7
	@ event command: return
	.byte 0x03
EventScript_JP_081FC2C7: @ 0x081FC2C7
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0004
	@ event command: return
	.byte 0x03
EventScript_JP_081FC2CD: @ 0x081FC2CD
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x010D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FC2DE @ EventScript_JP_081FC2DE
	@ event command: return
	.byte 0x03
EventScript_JP_081FC2DE: @ 0x081FC2DE
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0005
	@ event command: return
	.byte 0x03
EventScript_JP_081FC2E4: @ 0x081FC2E4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0156
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC2FA @ EventScript_JP_081FC2FA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC3C5 @ EventText_JP_081FC3C5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0156
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC2FA: @ 0x081FC2FA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC4B3 @ EventText_JP_081FC4B3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC304: @ 0x081FC304
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC3C5 @ EventText_JP_081FC3C5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0156
	@ event command: return
	.byte 0x03
EventScript_JP_081FC310: @ 0x081FC310
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0116
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FC370 @ EventScript_JP_081FC370
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC873 @ EventText_JP_081FC873
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x00E6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x081FC335 @ EventScript_JP_081FC335
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC335: @ 0x081FC335
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC8FE @ EventText_JP_081FC8FE
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00B8
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
	.2byte 0x0116
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC370: @ 0x081FC370
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC93D @ EventText_JP_081FC93D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC37A: @ 0x081FC37A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC989 @ EventText_JP_081FC989
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FC383: @ 0x081FC383
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FC9DB @ EventText_JP_081FC9DB
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FC38C: @ 0x081FC38C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x013B
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCA19 @ EventText_JP_081FCA19
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC39F: @ 0x081FC39F
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x0120
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCA24 @ EventText_JP_081FCA24
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FC3B2: @ 0x081FC3B2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: waitse
	.byte 0x30
	@ event command: playmoncry
	.byte 0xA1
	.2byte 0x00B8
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCA31 @ EventText_JP_081FCA31
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitmoncry
	.byte 0xC5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081FC3C5: @ 0x081FC3C5
	.string "ウォッホン!!\pわしが　ポケモン　だいすきクラブで\nいちばーん　えらい　かいちょう　ですぞ!\pなんたって　かいちょう　ですからな\nポケモンを　そだてさせたら\lみぎに　でるもの　なし!\pそんな　ポケモンを　じまんできる\nポケモンコンテストという\lもよおしが　あるの　ですが…\pなにしろ　とおくの　まちで　やっているので\nあまり　さんか　できんのですよ\pですから　いまは　ここで\nじぶんの　ポケモンを　じまんしたり\lみなさんの　ポケモンを\lみせて　いただくだけに　しておるのです$"
EventText_JP_081FC4B3: @ 0x081FC4B3
	.string "ポケモンコンテストに　でた　ことが\nある　トレーナーの　ポケモン…\lぜひとも　みて　みたい　ものですな$"
EventText_JP_081FC4E7: @ 0x081FC4E7
	.string "ウォッホン!!\nおっ　コンテストに　でられましたな!\pどれ　あなたは　ポケモンを\nどんな　ふうに　そだてられて　いるのかな?\pいやー　ひとの　そだてた　ポケモンを\nはいけん　するのは　たのしい　ですぞ!\pきちんと　そだてられた　ポケモンの\nしあわせそうな　かお……\pそれを　みつめる　トレーナーの\nやさしげな　ひとみ……\pいやー　しあわせで\nむねが　いっぱいに　なりますな……\pおっと　しつれい!　ついつい\nはなしが　ながくなって　しまいましたな\pでは　さっそく　きみの　ポケモンが\nどれほど　そだっているのか\lはいけん　させて　もらいますかな!$"
EventText_JP_081FC5F9: @ 0x081FC5F9
	.string "きみの　ポケモン　そだって　ますかな?\nちょっと　はいけん　させて　もらいますぞ!$"
EventText_JP_081FC623: @ 0x081FC623
	.string "ふむふむ……\nなるほど……$"
EventText_JP_081FC631: @ 0x081FC631
	.string "ふむう……\nわるくは　ないんだが　よくもない……\pおやの　トレーナーである　きみの\nどりょくが　ひつよう　ですな!\pたとえば　もっと　たくさん\nポロックを　あげるのは　どうですかな?$"
EventText_JP_081FC68D: @ 0x081FC68D
	.string "あらら……\pけっこう　ポケモンが　そだっているので\nいいものを　あげようと　おもったのですが\lもちものが　いっぱい　ですな$"
EventText_JP_081FC6CB: @ 0x081FC6CB
	.string "きみの　{STR_VAR_1}　ですが\nなかなか　みごとに　そだって　おりますな!\lいやー　たいした　ものです!\pだが　この　どうぐを　つかって　あげたなら\nもっと　そだつこと　まちがいなし!　ですぞ!$"
EventText_JP_081FC728: @ 0x081FC728
	.string "その　あかいバンダナを　もたせると\nポケモンの　かっこよさを\lみんなに　みとめさせることが　できますぞ!$"
EventText_JP_081FC75D: @ 0x081FC75D
	.string "その　あおいバンダナを　もたせると\nポケモンの　うつくしさを\lいまより　きわだたせることが　できますぞ!$"
EventText_JP_081FC792: @ 0x081FC792
	.string "その　ピンクのバンダナを　もたせると\nポケモンの　かわいさを\lもっと　ひきだすことが　できますぞ!$"
EventText_JP_081FC7C4: @ 0x081FC7C4
	.string "その　みどりのバンダナを　もたせると\nポケモンの　かしこさを\lさらに　みがくことが　できますぞ!$"
EventText_JP_081FC7F5: @ 0x081FC7F5
	.string "その　きいろのバンダナを　もたせると\nポケモンの　たくましさを\lいっそう　アピール　できますぞ!$"
EventText_JP_081FC826: @ 0x081FC826
	.string "きみに　あげる　どうぐは\nもう　なにも　ないですぞ!\pなにしろ　どうぐに　たよらんでも\nきみの　ポケモンを　そだてる\lさいのうは　バツグン　ですからな!$"
EventText_JP_081FC873: @ 0x081FC873
	.string "わたし　ポケモンが　なついている\nすがたを　みるのが　すき\pポケモンって　いっしょに　いる\nひとの　きもちに　すごく　びんかん!\pあなたが　ポケモンを　だいじに　すれば\nポケモンも　あなたに　なついてくれるわ!\pあなたの　ポケモンが　あなたに　なついたら\nわたしにも　みせてね$"
EventText_JP_081FC8FE: @ 0x081FC8FE
	.string "あなたの　ポケモン\nあなたに　なついているのね\pポケモンに　やさしい　トレーナーさんに\nだいすきクラブからの　おくりもの　よ$"
EventText_JP_081FC93D: @ 0x081FC93D
	.string "ポケモンって　いっしょに　いる\nひとの　きもちに　すごく　びんかん!\pあなたが　ポケモンを　だいじに　すれば\nポケモンも　あなたに　なついてくれるわ!$"
EventText_JP_081FC989: @ 0x081FC989
	.string "ポケモンしょうぶに　まけて\nひんしに　させて　ばかりだと\lポケモンが　どんどん　すさんで\lトレーナーのこと　うたがう　ようになる\pつまり　なついて　くれなくなるよ$"
EventText_JP_081FC9DB: @ 0x081FC9DB
	.string "ポケモンって　どうぐ\nつかってもらうのが　すきなのかな?\pだって　タウリンとか　あげると\nすごく　うれしそうに　するのよ!$"
EventText_JP_081FCA19: @ 0x081FCA19
	.string "エネコ“ふにゃあーあ$"
EventText_JP_081FCA24: @ 0x081FCA24
	.string "ジグザグマ“キュウウ……$"
EventText_JP_081FCA31: @ 0x081FCA31
	.string "マリルリ“マリ　マリ!?$"
	.byte 0x00
EventScript_JP_081FCA3F: @ 0x081FCA3F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCCC1 @ EventText_JP_081FCCC1
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCA48: @ 0x081FCA48
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FCA6A @ EventScript_JP_081FCA6A
	.byte 0x02
EventScript_JP_081FCA59: @ 0x081FCA59
	@ event command: lockall
	.byte 0x69
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FCA6A @ EventScript_JP_081FCA6A
	.byte 0x02
EventScript_JP_081FCA6A: @ 0x081FCA6A
	@ event command: showmoneybox
	.byte 0x93
	.byte 0x00
	.byte 0x00
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCC7E @ EventText_JP_081FCC7E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FCA91 @ EventScript_JP_081FCA91
	@ event command: closemessage
	.byte 0x68
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FCAF4 @ Movement_JP_081FCAF4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FCA91: @ 0x081FCA91
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x00000032 @ _slide_up
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FCAC1 @ EventScript_JP_081FCAC1
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: takemoney
	.byte 0x91
	.4byte 0x00000032 @ _slide_up
	.byte 0x00
	@ event command: updatemoneybox
	.byte 0x95
	.byte 0x00
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCCC1 @ EventText_JP_081FCCC1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40AA
	.2byte 0x0001
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FCAC1: @ 0x081FCAC1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0095
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081FCAE2 @ EventScript_JP_081FCAE2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCCCC @ EventText_JP_081FCCCC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FCAF4 @ Movement_JP_081FCAF4
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FCAE2: @ 0x081FCAE2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCCDD @ EventText_JP_081FCCDD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40AA
	.2byte 0x0001
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
Movement_JP_081FCAF4: @ 0x081FCAF4
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
EventScript_JP_081FCAF6: @ 0x081FCAF6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCD12 @ EventText_JP_081FCD12
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCAFF: @ 0x081FCAFF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCD2D @ EventText_JP_081FCD2D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB08: @ 0x081FCB08
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCD60 @ EventText_JP_081FCD60
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB11: @ 0x081FCB11
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCD7C @ EventText_JP_081FCD7C
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB1A: @ 0x081FCB1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCD97 @ EventText_JP_081FCD97
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB23: @ 0x081FCB23
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCDBB @ EventText_JP_081FCDBB
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB2C: @ 0x081FCB2C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCF51 @ EventText_JP_081FCF51
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB35: @ 0x081FCB35
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCF9B @ EventText_JP_081FCF9B
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB3E: @ 0x081FCB3E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCFEB @ EventText_JP_081FCFEB
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB47: @ 0x081FCB47
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD062 @ EventText_JP_081FD062
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB50: @ 0x081FCB50
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD0D7 @ EventText_JP_081FD0D7
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB59: @ 0x081FCB59
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD16B @ EventText_JP_081FD16B
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB62: @ 0x081FCB62
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD1EA @ EventText_JP_081FD1EA
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB6B: @ 0x081FCB6B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD258 @ EventText_JP_081FD258
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB74: @ 0x081FCB74
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD2CF @ EventText_JP_081FD2CF
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB7D: @ 0x081FCB7D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCDDF @ EventText_JP_081FCDDF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB86: @ 0x081FCB86
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCE00 @ EventText_JP_081FCE00
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB8F: @ 0x081FCB8F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCE4A @ EventText_JP_081FCE4A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCB98: @ 0x081FCB98
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCE86 @ EventText_JP_081FCE86
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FCBA1: @ 0x081FCBA1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: delay
	.byte 0x28
	.2byte 0x0008
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCEBA @ EventText_JP_081FCEBA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x014E
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
	.4byte 0x081FCC5E @ EventScript_JP_081FCC5E
	@ event command: setflag
	.byte 0x29
	.2byte 0x010D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCF12 @ EventText_JP_081FCF12
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FCC15 @ EventScript_JP_081FCC15
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FCC2C @ EventScript_JP_081FCC2C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FCC3C @ EventScript_JP_081FCC3C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FCC3C @ EventScript_JP_081FCC3C
	@ event command: end
	.byte 0x02
EventScript_JP_081FCC15: @ 0x081FCC15
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FCC68 @ Movement_JP_081FCC68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x081FCC77 @ Movement_JP_081FCC77
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FCC53 @ EventScript_JP_081FCC53
	.byte 0x02
EventScript_JP_081FCC2C: @ 0x081FCC2C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x081FCC70 @ Movement_JP_081FCC70
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FCC53 @ EventScript_JP_081FCC53
	.byte 0x02
EventScript_JP_081FCC3C: @ 0x081FCC3C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FCC6D @ Movement_JP_081FCC6D
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x000D
	.4byte 0x081FCC70 @ Movement_JP_081FCC70
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FCC53 @ EventScript_JP_081FCC53
	.byte 0x02
EventScript_JP_081FCC53: @ 0x081FCC53
	@ event command: setflag
	.byte 0x29
	.2byte 0x03C5
	@ event command: playse
	.byte 0x2F
	.2byte 0x0009
	@ event command: removeobject
	.byte 0x53
	.2byte 0x000D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FCC5E: @ 0x081FCC5E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FCF3A @ EventText_JP_081FCF3A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
Movement_JP_081FCC68: @ 0x081FCC68
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x12 @ delay_4
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081FCC6D: @ 0x081FCC6D
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081FCC70: @ 0x081FCC70
	@ object movement sequence
	.byte 0x00 @ face_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
Movement_JP_081FCC77: @ 0x081FCC77
	@ object movement sequence
	.byte 0x18 @ walk_fast_right
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x15 @ walk_fast_down
	.byte 0x13 @ delay_8
	.byte 0xFE @ step_end
EventText_JP_081FCC7E: @ 0x081FCC7E
	.string "うみの　かがく　はくぶつかんへ\nようこそ　いらっしゃいませ!\pにゅうじょうりょう　50えんに　なります\nけんがく　して　いきますか?$"
EventText_JP_081FCCC1: @ 0x081FCCC1
	.string "ごゆっくり　どうぞ!$"
EventText_JP_081FCCCC: @ 0x081FCCCC
	.string "……あら　おかねが　たりませんわ$"
EventText_JP_081FCCDD: @ 0x081FCCDD
	.string "……あら　さっきの　だんたいさん?\nあなただけ　おくれちゃって　しかたないわね\lはやく　とおっちゃって!$"
EventText_JP_081FCD12: @ 0x081FCD12
	.string "みんなの　ために\nわれわれ　アクアだんは　いるのよ!$"
EventText_JP_081FCD2D: @ 0x081FCD2D
	.string "げんちしゅうごう　で\nここに　あつまったのは　いいけど……\pかんじんの　リーダーが　まだ　こないんだ$"
EventText_JP_081FCD60: @ 0x081FCD60
	.string "ここに　おいてある　もの\nかっぱらうと　もうかるかな?$"
EventText_JP_081FCD7C: @ 0x081FCD7C
	.string "この　ちしきを　いかして\nわるいこと　してやるか……$"
EventText_JP_081FCD97: @ 0x081FCD97
	.string "なかまが　カナズミで　ドジらなければ\nここに　こなくて　すんだのによ!$"
EventText_JP_081FCDBB: @ 0x081FCDBB
	.string "さっき　50えんが　なくて\nうけつけで　すごい　じかん　かかったよ……$"
EventText_JP_081FCDDF: @ 0x081FCDDF
	.string "うみのこと　べんきょう　して\nポケモンしょうぶに　やくだてたいの$"
EventText_JP_081FCE00: @ 0x081FCE00
	.string "わたくしッ\nうみを　みると　こうふん　するのですッ!\pそんな　わたくしに　とって\nクスノキかんちょうは\lあこがれの　ひと　ナンバー1　なのですッ!$"
EventText_JP_081FCE4A: @ 0x081FCE4A
	.string "うみは　はてしなく　ひろく\nどこまでも　ふかい……\pきっと　われわれが　しらない　ポケモンも\nいっぱい　いるのだろうね$"
EventText_JP_081FCE86: @ 0x081FCE86
	.string "あたし　うみの　ポケモンが　ほしいの\pだって　ひんやりと　してて\nだきしめたら　きもちよさそう　だもの$"
EventText_JP_081FCEBA: @ 0x081FCEBA
	.string "ひえー!!\nなんで　おまえ　ここに　いるんだよ!?\pおれ?　おれは　カナシダ　トンネルで\nおまえに　コテンパンに　された\lアクアだん　だよ\pこれを　やるから　ゆるしてくれよ!$"
EventText_JP_081FCF12: @ 0x081FCF12
	.string "その　わざマシン\nおれより　おまえのほうが　にあうぜ!\pじゃあな　わはははー!$"
EventText_JP_081FCF3A: @ 0x081FCF3A
	.string "たのむから\nなんとかして　うけとってくれよ!$"
EventText_JP_081FCF51: @ 0x081FCF51
	.string "ガラスの　なかで　あおい　みずが\nくるくると　まわって　いる!\p‘これは　かぜの　ちからで　じんこうてきに\n　うずしおを　おこす　じっけん　です’$"
EventText_JP_081FCF9B: @ 0x081FCF9B
	.string "ガラスの　なかで　あかい　ボールが\nうかんだり　しずんだり　している!\p‘これは　ボールの　ふりょくを　りようした\n　たきのぼりの　げんりの　じっけん　です’$"
EventText_JP_081FCFEB: @ 0x081FCFEB
	.string "うみの　そこの　つちの　みほんだ!\p‘かいていには　ながい　ねんげつを　かけて\n　せいぶつの　しがいが　ふりつもり\l　ちそうが　かたち　づくられて　いきます’\p‘これらを　ぶんせき　することで\n　とおい　むかしの　ことが　わかるのです’$"
EventText_JP_081FD062: @ 0x081FD062
	.string "うみべの　すなの　みほんだ!\p‘やまから　かわを　つたって　きた　いしは\n　みずの　なかで　ころがる　うちに\l　くだかれたり　けずれたり　していきます’\p‘それらが　ちいさな　つぶに　なって\n　うみべの　すなが　できて　いくのです’$"
EventText_JP_081FD0D7: @ 0x081FD0D7
	.string "‘うみの　まめちしき　その1\n　なぜ　うみの　みずは　あおいの?’\p‘ひかりには　いくつもの　いろが　あって\n　ほとんどの　ひかりは　みずに　はいると\l　その　いろが　なくなって　いきます’\p‘けれど　あおい　ひかり　だけは\n　そのままの　いろで　のこる　ため\l　うみは　あおく　みえるのです’$"
EventText_JP_081FD16B: @ 0x081FD16B
	.string "‘うみの　まめちしき　その2\n　なぜ　うみの　みずは　しょっぱいの?’\p‘かいすい　には　いわから　にじみでた\p　しおの　もとに　なる\n　ナトリウムイオン　と　えんそイオン\l　という　ぶっしつが　おおく　ふくまれ\l　だから　なめると　しょっぱいのです’$"
EventText_JP_081FD1EA: @ 0x081FD1EA
	.string "‘うみの　まめちしき　その3\n　うみと　りくは　どちらが　ひろいの?’\p‘だいたい　うみが　70パーセントで\n　りくが　30パーセント　くらいです\p　りくちに　くらべて　うみは\n　その　2ばい　いじょうも　あるのです’$"
EventText_JP_081FD258: @ 0x081FD258
	.string "デコボコに　なみうった　かせきが　ある!\p‘うみの　そこに　たまった　つちには\n　かいすいが　ながれる　えいきょうで\l　なみの　ような　もようが　できます’\p‘それが　そのまま　かせきに　なったものを\n　リップルマークと　よんでいます’$"
EventText_JP_081FD2CF: @ 0x081FD2CF
	.string "まるい　ドームの　なかで　なんだか\nよく　わからない　きかいが　まわってる!\pなにかの　ふかさを　しらべるのかな?$"
	.byte 0x00
EventScript_JP_081FD30A: @ 0x081FD30A
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD597 @ EventText_JP_081FD597
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A3
	.byte 0x01
	@ event command: addobject
	.byte 0x55
	.2byte 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081FD4EE @ Movement_JP_081FD4EE
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: addobject
	.byte 0x55
	.2byte 0x0004
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FD4FD @ Movement_JP_081FD4FD
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081FD4F2 @ Movement_JP_081FD4F2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FD4FF @ Movement_JP_081FD4FF
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FD49C @ EventScript_JP_081FD49C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FD49C @ EventScript_JP_081FD49C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD5F3 @ EventText_JP_081FD5F3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x05
	.4byte 0x081FD4A7 @ EventScript_JP_081FD4A7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD60B @ EventText_JP_081FD60B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD61D @ EventText_JP_081FD61D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FD4EC @ Movement_JP_081FD4EC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FD4B2 @ EventScript_JP_081FD4B2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FD4BD @ EventScript_JP_081FD4BD
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0014
	.2byte 0x0000
	.4byte 0x081FD64E @ EventText_JP_081FD64E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD661 @ EventText_JP_081FD661
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FD4F9 @ Movement_JP_081FD4F9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081FD4EC @ Movement_JP_081FD4EC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD678 @ EventText_JP_081FD678
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x03
	.2byte 0x0015
	.2byte 0x0000
	.4byte 0x081FD699 @ EventText_JP_081FD699
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x081FD4F9 @ Movement_JP_081FD4F9
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0003
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD6AC @ EventText_JP_081FD6AC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x0023
	@ event command: addobject
	.byte 0x55
	.2byte 0x0002
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081FD4E2 @ Movement_JP_081FD4E2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FD508 @ Movement_JP_081FD508
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD6F5 @ EventText_JP_081FD6F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x081FD4E0 @ Movement_JP_081FD4E0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD72A @ EventText_JP_081FD72A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: savebgm
	.byte 0x34
	.2byte 0x0000
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0002
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0003
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0004
	@ event command: fadescreen
	.byte 0x97
	.byte 0x00
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x0373
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD871 @ EventText_JP_081FD871
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x010D
	@ event command: call
	.byte 0x04
	.4byte 0x08243467
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD8E0 @ EventText_JP_081FD8E0
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: fadescreen
	.byte 0x97
	.byte 0x01
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0170
	@ event command: waitfanfare
	.byte 0x32
	@ event command: special
	.byte 0x25
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0001
	@ event command: setflag
	.byte 0x29
	.2byte 0x0384
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40DA
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FD496 @ EventScript_JP_081FD496
	@ event command: setflag
	.byte 0x29
	.2byte 0x0095
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03B3
	@ event command: setflag
	.byte 0x29
	.2byte 0x03B5
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D2
	.2byte 0x0001
	@ event command: fadescreen
	.byte 0x97
	.byte 0x00
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FD496: @ 0x081FD496
	@ event command: setvar
	.byte 0x16
	.2byte 0x40DA
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081FD49C: @ 0x081FD49C
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081FD4A7: @ 0x081FD4A7
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0001
	.4byte 0x08243627 @ PetalburgCity_Ext_WallyFaceLeft
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081FD4B2: @ 0x081FD4B2
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FD4C8 @ Movement_JP_081FD4C8
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081FD4BD: @ 0x081FD4BD
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FD4CC @ Movement_JP_081FD4CC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081FD4C8: @ 0x081FD4C8
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_081FD4CC: @ 0x081FD4CC
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x08 @ walk_down
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
	.byte 0x09, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x0A, 0x0A, 0x09, 0x09, 0x13, 0xFE
Movement_JP_081FD4E0: @ 0x081FD4E0
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081FD4E2: @ 0x081FD4E2
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081FD4EC: @ 0x081FD4EC
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081FD4EE: @ 0x081FD4EE
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_081FD4F2: @ 0x081FD4F2
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081FD4F9: @ 0x081FD4F9
	@ object movement sequence
	.byte 0x40 @ lock_facing_direction
	.byte 0x0A @ walk_left
	.byte 0x41 @ unlock_facing_direction
	.byte 0xFE @ step_end
Movement_JP_081FD4FD: @ 0x081FD4FD
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0xFE @ step_end
Movement_JP_081FD4FF: @ 0x081FD4FF
	@ object movement sequence
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_081FD508: @ 0x081FD508
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x13 @ delay_8
	.byte 0x15 @ walk_fast_down
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
EventScript_JP_081FD514: @ 0x081FD514
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD9B0 @ EventText_JP_081FD9B0
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD51D: @ 0x081FD51D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD9F8 @ EventText_JP_081FD9F8
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD526: @ 0x081FD526
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDA3F @ EventText_JP_081FDA3F
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD52F: @ 0x081FD52F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDAC0 @ EventText_JP_081FDAC0
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD538: @ 0x081FD538
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDAF8 @ EventText_JP_081FDAF8
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD541: @ 0x081FD541
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDB4B @ EventText_JP_081FDB4B
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD54A: @ 0x081FD54A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDB95 @ EventText_JP_081FDB95
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD553: @ 0x081FD553
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDBD1 @ EventText_JP_081FDBD1
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD55C: @ 0x081FD55C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDC0D @ EventText_JP_081FDC0D
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD565: @ 0x081FD565
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FDC3E @ EventText_JP_081FDC3E
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_081FD56E: @ 0x081FD56E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD94A @ EventText_JP_081FD94A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FD577: @ 0x081FD577
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD977 @ EventText_JP_081FD977
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FD580: @ 0x081FD580
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FD997 @ EventText_JP_081FD997
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081FD597: @ 0x081FD597
	.string "はい?　クスノキは　わたし　だが……?\pおお!　それは　デボンの　ツワブキさんに\nたのんで　おいた　パーツだね!\pいやー　どうも　ごくろうさま!\nおかげで　しゅっぱつ　できそうだ……$"
EventText_JP_081FD5F3: @ 0x081FD5F3
	.string "へへへ　その　パーツ\nおれたちが　いただくぜ!$"
EventText_JP_081FD60B: @ 0x081FD60B
	.string "クスノキ“だ　だれだ　きみたちは!$"
EventText_JP_081FD61D: @ 0x081FD61D
	.string "おれたち　アクアだん!\pリーダーが　そのパーツを　ほしがってるんだ!\nなにも　いわずに　よこせ!$"
EventText_JP_081FD64E: @ 0x081FD64E
	.string "うわー!\nこどもに　やられちまった!$"
EventText_JP_081FD661: @ 0x081FD661
	.string "やばい……\nリーダーに　おこられちまうぞ……$"
EventText_JP_081FD678: @ 0x081FD678
	.string "ふん!　だらしない　やつめ!\nここは　おれに　まかせてもらうぜ!$"
EventText_JP_081FD699: @ 0x081FD699
	.string "なんだと!\nおれも　まけてしまった!$"
EventText_JP_081FD6AC: @ 0x081FD6AC
	.string "ど　どうしよう……\nパーツを　うばえないと　まずくないか?\pうむ……\nまさか　こどもに　じゃま　されるなんて\lこれっぽっちも　おもってなかったぜ$"
EventText_JP_081FD6F5: @ 0x081FD6F5
	.string "パーツを　うばうのに\nいつまで　かかっているのかと　おもえば\lこんな　こどもに　じゃま　されていたのか?$"
EventText_JP_081FD72A: @ 0x081FD72A
	.string "われわれは\nうみを　あいする　アクアだん!\pそして　おれは\nアクアだんの　リーダー　アオギリだ\pわれわれの　じゃまをする　おまえは……\nま　まさか!\lマグマだんの　なかま　なのか!?\pいや　それにしては\nみにつけている　ふくが　ちがうな\p……　……　……\n……　……　……\pポケモンも　ひとも　すべての　いのちは\nうみから　うまれた……\pだから　アクアだんは\nうみを　ふやそうと　しているのだよ\pどうだい?\nとても　すばらしい　ことだろう?\pまあ　いい……\nまだ　わかい　おまえに\lわれわれの　りそうなど　わかるまい……\pだが　このさきも　われわれの\nかつどうを　じゃまする　つもりなら\lただでは　すまさない　からな!\pそれだけは　おぼえて　おくのだ!$"
EventText_JP_081FD871: @ 0x081FD871
	.string "クスノキ“きみは……\nそうか　{PLAYER}{KUN}　というのか……\pいやあ　あぶない　ところ　だった!\nたすけてくれて　ありがとうよ!\pおっと　そうだった!\nデボンに　たのんでおいた　パーツを\lもってきて　くれたの　わすれていたよ!$"
EventText_JP_081FD8E0: @ 0x081FD8E0
	.string "クスノキ“おっと!\nこうしちゃ　いられない!\pそろそろ　かいてい　ちょうさに\nしゅっぱつ　する　じかんだ!\pわたしは　これで　しつれい　するけど\nきみは　ゆっくり　かんないを\lけんぶつ　していって　くれたまえ!$"
EventText_JP_081FD94A: @ 0x081FD94A
	.string "ふねの　もけいを　みておると\nムロの　ちかくに　ある\lすてられぶねを　おもいだすのう……$"
EventText_JP_081FD977: @ 0x081FD977
	.string "はくぶつかんの　なかを\nはしり　まわるんじゃ　ありませんよッ!$"
EventText_JP_081FD997: @ 0x081FD997
	.string "せんすいてい　かっこいー!\nおれも　のりてーよ!$"
EventText_JP_081FD9B0: @ 0x081FD9B0
	.string "‘すいしつ　サンプル　1’\nと　かかれた　ラベルが　はってある!\pうみは　みんな　つながって　いるのに\nちいきに　よって　すこし　ちがうらしい$"
EventText_JP_081FD9F8: @ 0x081FD9F8
	.string "‘すいしつ　サンプル　2’\nと　かかれた　ラベルが　はってある!\pちいきが　ちがえば　うみの　みずの\nしょっぱさも　ちがったり　するのかな?$"
EventText_JP_081FDA3F: @ 0x081FDA3F
	.string "ゴムで　できた　ボールが\nふくらんだり　しぼんだり　している!\p‘うみの　そこには　すいあつ　といって\n　みずじたいの　おもさが　かかります’\p‘あさい　ところでは　すいあつも　かるく\n　ふかい　ところでは　なんまんトン　もの\l　すいあつが　かかるのです’$"
EventText_JP_081FDAC0: @ 0x081FDAC0
	.string "‘ホウエン　ちほうの　もけい’\pホウエンちほう　ぜんたいの　ミニチュアだ!\nミシロタウンは　どのへん　だろう?$"
EventText_JP_081FDAF8: @ 0x081FDAF8
	.string "かいすいの　ながれに　ついての　てんじだ!\p‘うみの　そこに　ちかい　ところ　では\n　みずの　おんどや　えんぶんの　ちがいで\l　うみの　みずが　ながれて　いきます’$"
EventText_JP_081FDB4B: @ 0x081FDB4B
	.string "かいすいの　ながれに　ついての　てんじだ!\p‘うみの　ひょうめん　あたり　では\n　かぜの　ちからに　よって\l　うみの　みずが　ながれて　いきます’$"
EventText_JP_081FDB95: @ 0x081FDB95
	.string "‘れんらくせん　タイドリップごう’\pこれは　げんざい　クスノキ　ぞうせんじょで\nつくられている　ふねの　もけい　です!$"
EventText_JP_081FDBD1: @ 0x081FDBD1
	.string "‘せんすいてい　かいえん　1ごう’\pうみの　そこを　ちょうさ　するための\nこうせいのう　せんすいていの　もけい　です!$"
EventText_JP_081FDC0D: @ 0x081FDC0D
	.string "‘せんすい　ポッド’\pかいていで　さぎょうを　するための\nむじん　こがたポッドの　もけい　です!$"
EventText_JP_081FDC3E: @ 0x081FDC3E
	.string "‘サント·アンヌ　ごう’\pせかいを　いっしゅう　している\nごうか　きゃくせんの　もけい　です!$"
MapScripts_JP_081FDC6E: @ 0x081FDC6E
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FDC74
	.byte 0
EventScript_JP_081FDC74: @ 0x081FDC74
	@ event command: setescapewarp
	.byte 0xC4
	.byte 0x00
	.byte 0x01
	.byte 0xFF
	.2byte 0x001C
	.2byte 0x000D
	.byte 0x16, 0x01, 0x40, 0x00, 0x00, 0x21, 0xA0, 0x40, 0x01, 0x00, 0x07, 0x01, 0x9A, 0xDC, 0x1F, 0x08
	.byte 0x2B, 0x64, 0x08, 0x07, 0x01, 0x96, 0xDC, 0x1F, 0x08, 0x02, 0x2A, 0x5C, 0x03, 0x03, 0x34, 0xA3
	.byte 0x01, 0x63, 0x04, 0x00, 0x0C, 0x00, 0x0D, 0x00, 0x65, 0x04, 0x00, 0x09, 0x29, 0x89, 0x03, 0x03
EventScript_JP_081FDCAC: @ 0x081FDCAC
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FDCE6 @ EventScript_JP_081FDCE6
	.byte 0x02
EventScript_JP_081FDCB8: @ 0x081FDCB8
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081FDCE6 @ EventScript_JP_081FDCE6
	.byte 0x02
EventScript_JP_081FDCC4: @ 0x081FDCC4
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081FDCE6 @ EventScript_JP_081FDCE6
	.byte 0x02
EventScript_JP_081FDCD0: @ 0x081FDCD0
	@ event command: lockall
	.byte 0x69
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0003
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FDDE0 @ Movement_JP_081FDDE0
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FDCE6 @ EventScript_JP_081FDCE6
	.byte 0x02
EventScript_JP_081FDCE6: @ 0x081FDCE6
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x0824362D @ PetalburgCity_Ext_WalkInPlaceFasterDown
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE364 @ EventText_JP_081FE364
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0006
	.4byte 0x081FDDB9 @ Movement_JP_081FDDB9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0007
	.4byte 0x081FDDB9 @ Movement_JP_081FDDB9
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0008
	.4byte 0x081FDDC3 @ Movement_JP_081FDDC3
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0006
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0007
	@ event command: removeobject
	.byte 0x53
	.2byte 0x0008
	@ event command: setvar
	.byte 0x16
	.2byte 0x40A0
	.2byte 0x0002
	@ event command: setflag
	.byte 0x29
	.2byte 0x0061
	@ event command: setflag
	.byte 0x29
	.2byte 0x0313
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDD7A @ EventScript_JP_081FDD7A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDD8F @ EventScript_JP_081FDD8F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDDA4 @ EventScript_JP_081FDDA4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDDA4 @ EventScript_JP_081FDDA4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE3D4 @ EventText_JP_081FE3D4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: setflag
	.byte 0x29
	.2byte 0x0335
	@ event command: setflag
	.byte 0x29
	.2byte 0x0336
	@ event command: moveobjectoffscreen
	.byte 0x64
	.2byte 0x0004
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0004
	.byte 0x0A
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FDD7A: @ 0x081FDD7A
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FDDD1 @ Movement_JP_081FDDD1
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
	@ event command: return
	.byte 0x03
EventScript_JP_081FDD8F: @ 0x081FDD8F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FDDD7 @ Movement_JP_081FDDD7
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081FDDA4: @ 0x081FDDA4
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0004
	.4byte 0x081FDDDC @ Movement_JP_081FDDDC
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x0824362B @ PetalburgCity_Ext_WalkInPlaceFasterRight
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081FDDB9: @ 0x081FDDB9
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x43 @ jump_up
	.byte 0x54 @ set_invisible
	.byte 0xFE @ step_end
	.byte 0x14, 0x14, 0x43, 0x54, 0xFE
Movement_JP_081FDDC3: @ 0x081FDDC3
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0x18 @ walk_fast_right
	.byte 0xFE @ step_end
Movement_JP_081FDDD1: @ 0x081FDDD1
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
Movement_JP_081FDDD7: @ 0x081FDDD7
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081FDDDC: @ 0x081FDDDC
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_081FDDE0: @ 0x081FDDE0
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081FDDE2: @ 0x081FDDE2
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDDF7 @ EventScript_JP_081FDDF7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE111 @ EventText_JP_081FE111
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDDF7: @ 0x081FDDF7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE13F @ EventText_JP_081FE13F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: message
	.byte 0x67
	.4byte 0x081FE19E @ EventText_JP_081FE19E
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FDE0B @ EventScript_JP_081FDE0B
	.byte 0x02
EventScript_JP_081FDE0B: @ 0x081FDE0B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01D0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDE41 @ EventScript_JP_081FDE41
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x12
	.byte 0x08
	.byte 0x38
	.byte 0x02
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDE83 @ EventScript_JP_081FDE83
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDF1E @ EventScript_JP_081FDF1E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDF1E @ EventScript_JP_081FDF1E
	@ event command: end
	.byte 0x02
EventScript_JP_081FDE41: @ 0x081FDE41
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x11
	.byte 0x06
	.byte 0x34
	.byte 0x02
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDE83 @ EventScript_JP_081FDE83
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDEAB @ EventScript_JP_081FDEAB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDF1E @ EventScript_JP_081FDF1E
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDF1E @ EventScript_JP_081FDF1E
	@ event command: end
	.byte 0x02
	.byte 0x0F, 0x00, 0x62, 0xE1, 0x1F, 0x08, 0x09, 0x04, 0x6C, 0x02
EventScript_JP_081FDE83: @ 0x081FDE83
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE1DB @ EventText_JP_081FE1DB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDECE @ EventScript_JP_081FDECE
	@ event command: setvar
	.byte 0x16
	.2byte 0x40B4
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x081FDEDA @ EventScript_JP_081FDEDA
	@ event command: warp
	.byte 0x39
	.byte 0x19
	.byte 0x29
	.byte 0xFF
	.2byte 0x0001
	.2byte 0x000A
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081FDEAB: @ 0x081FDEAB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE1E7 @ EventText_JP_081FE1E7
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDECE @ EventScript_JP_081FDECE
	@ event command: call
	.byte 0x04
	.4byte 0x081FDEDA @ EventScript_JP_081FDEDA
	@ event command: warp
	.byte 0x39
	.byte 0x1A
	.byte 0x04
	.byte 0xFF
	.2byte 0x0013
	.2byte 0x0043
	.byte 0x27, 0x6C, 0x02
EventScript_JP_081FDECE: @ 0x081FDECE
	@ event command: message
	.byte 0x67
	.4byte 0x081FE20A @ EventText_JP_081FE20A
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FDE0B @ EventScript_JP_081FDE0B
	.byte 0x02
EventScript_JP_081FDEDA: @ 0x081FDEDA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE1F6 @ EventText_JP_081FE1F6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243629 @ PetalburgCity_Ext_WalkInPlaceFasterUp
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x800F
	.byte 0x09
	.byte 0x09
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0002
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDF33 @ EventScript_JP_081FDF33
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800C
	.2byte 0x0004
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDF28 @ EventScript_JP_081FDF28
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: hideobjectat
	.byte 0x59
	.2byte 0x00FF
	.byte 0x00
	.byte 0x00
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: call
	.byte 0x04
	.4byte 0x08243265
	@ event command: return
	.byte 0x03
EventScript_JP_081FDF1E: @ 0x081FDF1E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE1CD @ EventText_JP_081FE1CD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDF28: @ 0x081FDF28
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FDF3E @ Movement_JP_081FDF3E
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
EventScript_JP_081FDF33: @ 0x081FDF33
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x081FDF41 @ Movement_JP_081FDF41
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: return
	.byte 0x03
Movement_JP_081FDF3E: @ 0x081FDF3E
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x26 @ walk_in_place_fastest_up
	.byte 0xFE @ step_end
Movement_JP_081FDF41: @ 0x081FDF41
	@ object movement sequence
	.byte 0x09 @ walk_up
	.byte 0xFE @ step_end
EventScript_JP_081FDF43: @ 0x081FDF43
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081FDF7A @ EventScript_JP_081FDF7A
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01BE
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDF84 @ EventScript_JP_081FDF84
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x01BF
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x081FDF84 @ EventScript_JP_081FDF84
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8004
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDF7A @ EventScript_JP_081FDF7A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE249 @ EventText_JP_081FE249
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDF7A: @ 0x081FDF7A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE21A @ EventText_JP_081FE21A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDF84: @ 0x081FDF84
	@ event command: addvar
	.byte 0x17
	.2byte 0x8004
	.2byte 0x0001
	@ event command: return
	.byte 0x03
EventScript_JP_081FDF8A: @ 0x081FDF8A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE2D6 @ EventText_JP_081FE2D6
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FDF93: @ 0x081FDF93
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x086D
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDFF1 @ EventScript_JP_081FDFF1
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x010F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDFE7 @ EventScript_JP_081FDFE7
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0070
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDFDA @ EventScript_JP_081FDFDA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40A0
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FDFD0 @ EventScript_JP_081FDFD0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE335 @ EventText_JP_081FE335
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDFD0: @ 0x081FDFD0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE3D4 @ EventText_JP_081FE3D4
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDFDA: @ 0x081FDFDA
	@ event command: setflag
	.byte 0x29
	.2byte 0x010F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE44D @ EventText_JP_081FE44D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDFE7: @ 0x081FDFE7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE518 @ EventText_JP_081FE518
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FDFF1: @ 0x081FDFF1
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE102 @ EventScript_JP_081FE102
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0116
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE029 @ EventScript_JP_081FE029
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0864
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE01F @ EventScript_JP_081FE01F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE59B @ EventText_JP_081FE59B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FE01F: @ 0x081FE01F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE5E2 @ EventText_JP_081FE5E2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FE029: @ 0x081FE029
	@ event command: message
	.byte 0x67
	.4byte 0x081FE638 @ EventText_JP_081FE638
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FE035 @ EventScript_JP_081FE035
	.byte 0x02
EventScript_JP_081FE035: @ 0x081FE035
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x2E
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE06C @ EventScript_JP_081FE06C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE0AC @ EventScript_JP_081FE0AC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE0EC @ EventScript_JP_081FE0EC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE0EC @ EventScript_JP_081FE0EC
	@ event command: end
	.byte 0x02
EventScript_JP_081FE06C: @ 0x081FE06C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE6F9 @ EventText_JP_081FE6F9
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE0F6 @ EventScript_JP_081FE0F6
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00C0
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
	@ event command: takeitem
	.byte 0x45
	.2byte 0x0116
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE735 @ EventText_JP_081FE735
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0126
	@ event command: goto
	.byte 0x05
	.4byte 0x081FE102 @ EventScript_JP_081FE102
	.byte 0x02
EventScript_JP_081FE0AC: @ 0x081FE0AC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE70E @ EventText_JP_081FE70E
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FE0F6 @ EventScript_JP_081FE0F6
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00C1
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
	@ event command: takeitem
	.byte 0x45
	.2byte 0x0116
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE735 @ EventText_JP_081FE735
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x0126
	@ event command: goto
	.byte 0x05
	.4byte 0x081FE102 @ EventScript_JP_081FE102
	.byte 0x02
EventScript_JP_081FE0EC: @ 0x081FE0EC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE6A7 @ EventText_JP_081FE6A7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FE0F6: @ 0x081FE0F6
	@ event command: message
	.byte 0x67
	.4byte 0x081FE724 @ EventText_JP_081FE724
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FE035 @ EventScript_JP_081FE035
	.byte 0x02
EventScript_JP_081FE102: @ 0x081FE102
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE750 @ EventText_JP_081FE750
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081FE111: @ 0x081FE111
	.string "えっ?　ふね　ですか?\pもうしわけ　ございません　げんざい\nれんらくせんは　ないんです……$"
EventText_JP_081FE13F: @ 0x081FE13F
	.string "れんらくせんを　ごりよう　ですね!\nチケットは　おもち　でしょうか?$"
EventText_JP_081FE162: @ 0x081FE162
	.string "{PLAYER}は\nチケットを　もっていない!\p……もうしわけ　ありません!\pふねに　のれるのは\nチケットの　ある　かた　だけです$"
EventText_JP_081FE19E: @ 0x081FE19E
	.string "{PLAYER}は\nふねのチケットを　みせた!\pはい!　けっこう　です!\pいきさきは　どちら　でしょう?$"
EventText_JP_081FE1CD: @ 0x081FE1CD
	.string "また　ごりよう　ください!$"
EventText_JP_081FE1DB: @ 0x081FE1DB
	.string "ミナモシティ　ですね!$"
EventText_JP_081FE1E7: @ 0x081FE1E7
	.string "バトルフロンティア　ですね!$"
EventText_JP_081FE1F6: @ 0x081FE1F6
	.string "れんらくせんに　のって　おまちください$"
EventText_JP_081FE20A: @ 0x081FE20A
	.string "いきさきは　どちら　でしょう?$"
EventText_JP_081FE21A: @ 0x081FE21A
	.string "うみの　そこ　かあ……\nいったい　どんなふう　なのかな?\pおれも　いつか　もぐってみたいぜ!$"
EventText_JP_081FE249: @ 0x081FE249
	.string "ふねを　あんぜんに　すすめる　ためには\nてんきを　りかいする　ひつようが　ある!\pそういえば　てんきけんきゅうじょの\nひとが　いってたけど\pさいきん　かくちで　いじょうきしょうが\nかんそく　されている　らしいな!\pきみも　けんきゅうじょに　いって\nはなしを　きいてみると　いいぞ!$"
EventText_JP_081FE2D6: @ 0x081FE2D6
	.string "ぼくも　クスノキ　かんちょうと　いっしょに\nかいてい　ちょうさに　いきたかった!\pでも　せんすいていの　なかは　せまいから\nぼくが　のったら　かんちょうが\lのれなく　なっちゃうんだよね……$"
EventText_JP_081FE335: @ 0x081FE335
	.string "クスノキ“あいつらは……\pいぜん　はくぶつかんで\nデボンのにもつを　うばおうと　していた……$"
EventText_JP_081FE364: @ 0x081FE364
	.string "アオギリ“おや?　また　きみか……\pわざわざ　ここまで　おいかけて　くるとは\nごくろうな　ことだな……\pだが　もう　だれにも\nわれわれを　とめられない\pとめられると　おもうなら\nミナモの　アジトまで　くるかね?\lフフフ……$"
EventText_JP_081FE3D4: @ 0x081FE3D4
	.string "クスノキ“なぜ……\pアクアだんの　れんちゅうが\nわたしの　せんすいてい\l‘かいえん　1ごう’を　うばうのだろう?\pまさか　かれらも\nかいていに　ねむる　ポケモンを……\pだが　わたしが　おいかけても\nあんな　れんちゅうに　かてる　わけない……$"
EventText_JP_081FE44D: @ 0x081FE44D
	.string "クスノキ“ああ　{PLAYER}{KUN}……\pそうか……　アクアだんは\nしゅっぱつ　して　しまったか……\pいや　きにしなくて　いいよ\nきみの　せきにん　では　ないからね\pせんすいていを　おいかけるのは\nふつうの　ひとには　むりな　はなし　だよ\pポケモンに　ダイビング　といって\nうみに　もぐれる　わざを　おしえないと……\pトクサネに　いけば\nダイビングを　する　ひとが　おおいから\lおしえて　もらえるかも　しれないけどね$"
EventText_JP_081FE518: @ 0x081FE518
	.string "クスノキ“せんすいていを　おいかけるのは\nふつうの　ひとには　むりな　はなし　だよ\pポケモンに　ダイビング　といって\nうみに　もぐれる　わざを　おしえないと……\pトクサネに　いけば\nダイビングを　する　ひとが　おおいから\lおしえて　もらえるかも　しれないけどね$"
EventText_JP_081FE59B: @ 0x081FE59B
	.string "クスノキ“そうだ!　ハギろうじんが\nぞうせんじょに　きてくれたんだ!\pよーし!　これで　れんらくせんが\nかんせい　するのも　もうすぐ　だぞ!$"
EventText_JP_081FE5E2: @ 0x081FE5E2
	.string "クスノキ“{PLAYER}{KUN}!\pれんらくせん　タイドリップごうが\nついに　かんせい　したんだ!\pきみの　しりあいの　ハギろうじんが\nてつだって　くれたからだよ\pぜひ　のってみてよ!$"
EventText_JP_081FE638: @ 0x081FE638
	.string "クスノキ“おや?\n{PLAYER}{KUN}が　もってる　それは……\pたんちき　だね!\nそれがあると　ちょうさが　はかどりそうだ\p{PLAYER}{KUN}!　ぼくの　もってる\nしんかいのキバか　しんかいのウロコと\lたんちきを　こうかん　してくれないかな?$"
EventText_JP_081FE6A7: @ 0x081FE6A7
	.string "クスノキ“そうかい?\n{PLAYER}{KUN}が　もっていても\lつかいみちが　ないと　おもうけどな……\pまあ　いいや\nたんちきを　こうかん　したくなったら\lまた　はなしかけてよ!$"
EventText_JP_081FE6F9: @ 0x081FE6F9
	.string "クスノキ“しんかいのキバが　いいんだね?$"
EventText_JP_081FE70E: @ 0x081FE70E
	.string "クスノキ“しんかいのウロコに　するんだね?$"
EventText_JP_081FE724: @ 0x081FE724
	.string "クスノキ“どっちに　するんだい?$"
EventText_JP_081FE735: @ 0x081FE735
	.string "{PLAYER}は　クスノキかんちょうに\nたんちきを　わたした!$"
EventText_JP_081FE750: @ 0x081FE750
	.string "クスノキ“{PLAYER}{KUN}　ありがとう!\nこれで　けんきゅうが　はかどるよ$"
	.byte 0x00
EventScript_JP_081FE773: @ 0x081FE773
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE785 @ EventText_JP_081FE785
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FE77C: @ 0x081FE77C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE7D4 @ EventText_JP_081FE7D4
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FE785: @ 0x081FE785
	.string "わたしの　ポケモン　せっかちでね\nほかの　ポケモンと　くらべると\lすばやさが　たかいんだわ\pせいかくで　そだちやすい　のうりょくに\nちがいが　あるのかもな?$"
EventText_JP_081FE7D4: @ 0x081FE7D4
	.string "あなた　ポケモントレーナーね\nカイナシティに　きた　っていうことは\lとうぜん　バトルテントに　いくのね!$"
MapScripts_JP_081FE809: @ 0x081FE809
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_081FE814
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_081FE814: @ 0x081FE814
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0004
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: end
	.byte 0x02
EventScript_JP_081FE81D: @ 0x081FE81D
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FE82B: @ 0x081FE82B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE83D @ EventText_JP_081FE83D
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FE834: @ 0x081FE834
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE89A @ EventText_JP_081FE89A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FE83D: @ 0x081FE83D
	.string "しょうぶの　コツ……\pいろんな　ポケモンを\nバランスよく　そだてることじゃ　ないか?\pいっぴきだけ　つよくても\nにがてな　ポケモンに　であってしまうと\lても　あしも　でなくなりそうだぜ$"
EventText_JP_081FE89A: @ 0x081FE89A
	.string "ともだちと　ポケモンこうかん　するでしょ\pポケモンが　どうぐを　もっていると\n2ばい　うれしく　なるよねー!!$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02, 0x00
EventScript_JP_081FE8FA: @ 0x081FE8FA
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x081FE914
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
	.byte 0x00, 0x00, 0x00, 0x04, 0x00, 0x03, 0x00, 0x0D, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x55
	.byte 0x00, 0x56, 0x00, 0x7A, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_081FE92A: @ 0x081FE92A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE93C @ EventText_JP_081FE93C
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FE933: @ 0x081FE933
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FE97B @ EventText_JP_081FE97B
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_081FE93C: @ 0x081FE93C
	.string "たしかに　いちば　には\nいろんな　ほりだしものが　ある\pだが　フレンドリィショップ　じゃないと\nかえない　ものも　あるからな$"
EventText_JP_081FE97B: @ 0x081FE97B
	.string "スーパーボールは　モンスターボールよりも\nポケモンを　つかまえやすい!\pこれなら　あの　てごわい　ポケモンも……$"
MapScripts_JP_081FE9B4: @ 0x081FE9B4
	@ map script dispatch table
	.byte 0x01
	.4byte EventScript_JP_081FE9BA
	.byte 0
EventScript_JP_081FE9BA: @ 0x081FE9BA
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEB2D @ EventScript_JP_081FEB2D
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4093
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEA00 @ EventScript_JP_081FEA00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEAF5 @ EventScript_JP_081FEAF5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEB03 @ EventScript_JP_081FEB03
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEB11 @ EventScript_JP_081FEB11
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEB1F @ EventScript_JP_081FEB1F
	@ event command: end
	.byte 0x02
EventScript_JP_081FEA00: @ 0x081FEA00
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0063
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEA0A @ EventScript_JP_081FEA0A
	@ event command: end
	.byte 0x02
EventScript_JP_081FEA0A: @ 0x081FEA0A
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0003
	.2byte 0x000B
	.2byte 0x0241
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0003
	.2byte 0x000C
	.2byte 0x0249
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0003
	.2byte 0x000D
	.2byte 0x0250
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0004
	.2byte 0x000A
	.2byte 0x0222
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x000A
	.2byte 0x0223
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0004
	.2byte 0x000B
	.2byte 0x022A
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x000B
	.2byte 0x022B
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x000A
	.2byte 0x0222
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000A
	.2byte 0x0223
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0007
	.2byte 0x000B
	.2byte 0x022A
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0008
	.2byte 0x000B
	.2byte 0x022B
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0004
	.2byte 0x000D
	.2byte 0x0230
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x000D
	.2byte 0x0231
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0004
	.2byte 0x000E
	.2byte 0x0238
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x000E
	.2byte 0x0239
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x000A
	.2byte 0x0230
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x000A
	.2byte 0x0231
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0001
	.2byte 0x000B
	.2byte 0x0238
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0002
	.2byte 0x000B
	.2byte 0x0239
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0008
	.2byte 0x0242
	.2byte 0x0001
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x0009
	.2byte 0x021A
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0006
	.2byte 0x000A
	.2byte 0x0251
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0004
	.2byte 0x0006
	.2byte 0x0230
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x0006
	.2byte 0x0231
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0004
	.2byte 0x0007
	.2byte 0x0238
	.2byte 0x0000
	@ event command: setmetatile
	.byte 0xA2
	.2byte 0x0005
	.2byte 0x0007
	.2byte 0x0239
	.2byte 0x0000
	@ event command: end
	.byte 0x02
EventScript_JP_081FEAF5: @ 0x081FEAF5
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: special
	.byte 0x25
	.2byte 0x008C
	@ event command: goto
	.byte 0x05
	.4byte 0x081FEA00 @ EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB03: @ 0x081FEB03
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: special
	.byte 0x25
	.2byte 0x008C
	@ event command: goto
	.byte 0x05
	.4byte 0x081FEA00 @ EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB11: @ 0x081FEB11
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: special
	.byte 0x25
	.2byte 0x008C
	@ event command: goto
	.byte 0x05
	.4byte 0x081FEA00 @ EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB1F: @ 0x081FEB1F
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: special
	.byte 0x25
	.2byte 0x008C
	@ event command: goto
	.byte 0x05
	.4byte 0x081FEA00 @ EventScript_JP_081FEA00
	.byte 0x02
EventScript_JP_081FEB2D: @ 0x081FEB2D
	@ event command: special
	.byte 0x25
	.2byte 0x0090
	@ event command: end
	.byte 0x02
EventScript_JP_081FEB31: @ 0x081FEB31
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x010B
	.2byte 0x0000
	.4byte 0x081FF064 @ EventText_JP_081FF064
	.4byte 0x081FF130 @ EventText_JP_081FF130
	.4byte 0x081FEB71 @ EventScript_JP_081FEB71
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0039
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEC24 @ EventScript_JP_081FEC24
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A7
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081FEBD3 @ EventScript_JP_081FEBD3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40BA
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEC1A @ EventScript_JP_081FEC1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF240 @ EventText_JP_081FF240
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FEB71: @ 0x081FEB71
	@ event command: message
	.byte 0x67
	.4byte 0x081FF165 @ EventText_JP_081FF165
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF17F @ EventText_JP_081FF17F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setvar
	.byte 0x16
	.2byte 0x40D2
	.2byte 0x0003
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02FE
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F2
	@ event command: setflag
	.byte 0x29
	.2byte 0x0869
	@ event command: addvar
	.byte 0x17
	.2byte 0x4085
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08242F10
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0003
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: special
	.byte 0x25
	.2byte 0x0090
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: playse
	.byte 0x2F
	.2byte 0x002C
	@ event command: call
	.byte 0x04
	.4byte 0x081FEBF7 @ EventScript_JP_081FEBF7
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x01CC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF224 @ EventText_JP_081FF224
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: waitfanfare
	.byte 0x32
	@ event command: closemessage
	.byte 0x68
	@ event command: delay
	.byte 0x28
	.2byte 0x001E
	@ event command: setflag
	.byte 0x29
	.2byte 0x01D5
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FEBD3: @ 0x081FEBD3
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0142
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
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF1DF @ EventText_JP_081FF1DF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A7
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FEBF7: @ 0x081FEBF7
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0142
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
	.4byte 0x082430EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF1DF @ EventText_JP_081FF1DF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x00A7
	@ event command: return
	.byte 0x03
EventScript_JP_081FEC1A: @ 0x081FEC1A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF265 @ EventText_JP_081FF265
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FEC24: @ 0x081FEC24
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x010B
	.2byte 0x0000
	.4byte 0x081FF2B5 @ EventText_JP_081FF2B5
	.4byte 0x081FF310 @ EventText_JP_081FF310
	.4byte 0x081FF36A @ EventText_JP_081FF36A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF320 @ EventText_JP_081FF320
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081FEC3F: @ 0x081FEC3F
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4093
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: setvar
	.byte 0x16
	.2byte 0x4093
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: goto
	.byte 0x05
	.4byte 0x081FECD3 @ EventScript_JP_081FECD3
	.byte 0x02
EventScript_JP_081FEC64: @ 0x081FEC64
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4093
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: setvar
	.byte 0x16
	.2byte 0x4093
	.2byte 0x0002
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: goto
	.byte 0x05
	.4byte 0x081FECD3 @ EventScript_JP_081FECD3
	.byte 0x02
EventScript_JP_081FEC89: @ 0x081FEC89
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4093
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: setvar
	.byte 0x16
	.2byte 0x4093
	.2byte 0x0003
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: goto
	.byte 0x05
	.4byte 0x081FECD3 @ EventScript_JP_081FECD3
	.byte 0x02
EventScript_JP_081FECAE: @ 0x081FECAE
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4093
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECF3 @ EventScript_JP_081FECF3
	@ event command: setvar
	.byte 0x16
	.2byte 0x4093
	.2byte 0x0004
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: goto
	.byte 0x05
	.4byte 0x081FECD3 @ EventScript_JP_081FECD3
	.byte 0x02
EventScript_JP_081FECD3: @ 0x081FECD3
	@ event command: special
	.byte 0x25
	.2byte 0x008B
	@ event command: special
	.byte 0x25
	.2byte 0x008C
	@ event command: special
	.byte 0x25
	.2byte 0x008E
	@ event command: playse
	.byte 0x2F
	.2byte 0x002C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0063
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FECFA @ EventScript_JP_081FECFA
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0063
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x081FECF5 @ EventScript_JP_081FECF5
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FECF3: @ 0x081FECF3
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FECF5: @ 0x081FECF5
	@ event command: setflag
	.byte 0x29
	.2byte 0x0063
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FECFA: @ 0x081FECFA
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0063
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FECFF: @ 0x081FECFF
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00BF
	.2byte 0x0000
	.4byte 0x081FEE8A @ EventText_JP_081FEE8A
	.4byte 0x081FEEAB @ EventText_JP_081FEEAB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FEEBC @ EventText_JP_081FEEBC
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081FED16: @ 0x081FED16
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x00C2
	.2byte 0x0000
	.4byte 0x081FEED6 @ EventText_JP_081FEED6
	.4byte 0x081FEF00 @ EventText_JP_081FEF00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FEF0D @ EventText_JP_081FEF0D
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081FED2D: @ 0x081FED2D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0143
	.2byte 0x0000
	.4byte 0x081FEF48 @ EventText_JP_081FEF48
	.4byte 0x081FEF63 @ EventText_JP_081FEF63
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FEF70 @ EventText_JP_081FEF70
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081FED44: @ 0x081FED44
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0289
	.2byte 0x0000
	.4byte 0x081FEF99 @ EventText_JP_081FEF99
	.4byte 0x081FEFB8 @ EventText_JP_081FEFB8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FEFC9 @ EventText_JP_081FEFC9
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081FED5B: @ 0x081FED5B
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0322
	.2byte 0x0000
	.4byte 0x081FF019 @ EventText_JP_081FF019
	.4byte 0x081FF02D @ EventText_JP_081FF02D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF03D @ EventText_JP_081FF03D
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_081FED72: @ 0x081FED72
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FED87 @ EventScript_JP_081FED87
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FEDC5 @ EventText_JP_081FEDC5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FED87: @ 0x081FED87
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FEE65 @ EventText_JP_081FEE65
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FED91: @ 0x081FED91
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0869
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEDB1 @ EventScript_JP_081FEDB1
	@ event command: goto
	.byte 0x05
	.4byte 0x081FEDBB @ EventScript_JP_081FEDBB
	.byte 0x02
EventScript_JP_081FEDA1: @ 0x081FEDA1
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0869
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FEDB1 @ EventScript_JP_081FEDB1
	@ event command: goto
	.byte 0x05
	.4byte 0x081FEDBB @ EventScript_JP_081FEDBB
	.byte 0x02
EventScript_JP_081FEDB1: @ 0x081FEDB1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF292 @ EventText_JP_081FF292
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_081FEDBB: @ 0x081FEDBB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF283 @ EventText_JP_081FF283
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_081FEDC5: @ 0x081FEDC5
	.string "げんき　しとぉや!!\nチャンピオンを　めざす　{PLAYER}!!\pキンセツシティの　ジムリーダー　テッセンは\nでんきタイプ　ポケモンの　つかいてだ!\pみずタイプの　ポケモンで　むかうと\nビリビリ　しびれさせられるぞ!\pしかも　スイッチで　あけたり　する\nけったいな　とびらを\lジムに　つくって　しまったんだ!\pきばってこー　な!$"
EventText_JP_081FEE65: @ 0x081FEE65
	.string "こりゃ　びっくり　たまげたッ!\nきみの　おかげで　とびらは　ひらかれた!$"
EventText_JP_081FEE8A: @ 0x081FEE8A
	.string "しびれる　オレの　ハートが\nきみの　やぼうを　ふんさい　するっ!$"
EventText_JP_081FEEAB: @ 0x081FEEAB
	.string "しびれる　たたかい　だったぜ……$"
EventText_JP_081FEEBC: @ 0x081FEEBC
	.string "ポケモンも　ロックも　ハートが　すべて\nいぇーい!$"
EventText_JP_081FEED6: @ 0x081FEED6
	.string "テッセンさんに　きたえられた　この　オレが\nそう　かんたんに　まける　はずがねえ!$"
EventText_JP_081FEF00: @ 0x081FEF00
	.string "キュ　キュイィィィン……$"
EventText_JP_081FEF0D: @ 0x081FEF0D
	.string "このジムの　リーダー　テッセンさんは\nきみの　おやじが　うまれる　まえから\lポケモンと　たたかってきた　つわものさ!$"
EventText_JP_081FEF48: @ 0x081FEF48
	.string "この　ポケモンジムは\nしかけが　あって　たのしいな!$"
EventText_JP_081FEF63: @ 0x081FEF63
	.string "まけると　たのしくないよ$"
EventText_JP_081FEF70: @ 0x081FEF70
	.string "テッセンさんは　スイッチを　つかった\nしかけを　つくるのが　しゅみ　なんだって!$"
EventText_JP_081FEF99: @ 0x081FEF99
	.string "あたしの　みりょくと\nポケモンの　わざで　しびれさせちゃう!$"
EventText_JP_081FEFB8: @ 0x081FEFB8
	.string "あなたの　つよさに　しびれたわ!$"
EventText_JP_081FEFC9: @ 0x081FEFC9
	.string "この　キンセツシティは\nテッセンさんが　つくったって　はなし\pあなたや　わたしが\nうまれる　まえからの　トレーナーだもの\lきっと　いろんな　ことを　しってるわ$"
EventText_JP_081FF019: @ 0x081FF019
	.string "ぼく　ひかるもの　だーいすき　なんだ!$"
EventText_JP_081FF02D: @ 0x081FF02D
	.string "ああ…\nめのまえが　チカ　チカ$"
EventText_JP_081FF03D: @ 0x081FF03D
	.string "キンセツジムも　テッセンさんの　おデコも\nピカピカ　ひかってて　うれしいな!$"
EventText_JP_081FF064: @ 0x081FF064
	.string "まちを　かいぞうする　けいかくは\nあきらめた　わし　じゃが\pいまは　このジムの　とびらの　しかけを\nつくることに　うちこんで　おるのじゃ!\p……あれ?　おまえさん\nなんで　わしの　まえに　いるんじゃ?\pなにー!　とびらの　しかけを\nくぐりぬけて　きたと　いうのかっ!\pわっはははは!　こりゃ　おもしろい!\pならば　この　キンセツ　ポケモン　ジムの\nリーダー　テッセンが\lポケモンで　しびれさせて　やるぞい!$"
EventText_JP_081FF130: @ 0x081FF130
	.string "わっはははは!　わしの　まけじゃ!\nおまえさんには　しびれた　わい\lこの　バッジ　もっていくが　いいぞ!$"
EventText_JP_081FF165: @ 0x081FF165
	.string "{PLAYER}は　テッセンから\nダイナモバッジを　もらった!$"
EventText_JP_081FF17F: @ 0x081FF17F
	.string "ダイナモバッジを　もっておると\nひでんの　いわくだきが\lつかえるように　なるんじゃ!\pそれに　おまえさんの　ポケモン\nいっそう　すばやく　なるぞい!\pうむ……\nこれも　もっていくが　いいぞ!$"
EventText_JP_081FF1DF: @ 0x081FF1DF
	.string "その　わざマシン34　には\nでんげきは　が　はいっておる!\pかならず　めいちゅう　する\nたのもしい　わざ　なんじゃよ!\p……　……　……$"
EventText_JP_081FF224: @ 0x081FF224
	.string "ジムリーダー　テッセンを\nポケナビに　とうろく　した!$"
EventText_JP_081FF240: @ 0x081FF240
	.string "みどころの　ある　わかものの　しゅつげん\nじつに　たのもしい　ことじゃ!$"
EventText_JP_081FF265: @ 0x081FF265
	.string "わっはははは!\nわかものよ　もっともっと　がんばるんじゃ!$"
EventText_JP_081FF283: @ 0x081FF283
	.string "キンセツシティ　ポケモンジム$"
EventText_JP_081FF292: @ 0x081FF292
	.string "キンセツシティ　ポケモンジム\pテッセン　にんてい　トレーナー!\n{PLAYER}$"
EventText_JP_081FF2B5: @ 0x081FF2B5
	.string "テッセン“おーっと　あらわれたな!\nわかっとる!　わしと　ポケモンの\lしょうぶを　したいんじゃろう!?\pわっはははは!\pひばな　バチバチ　いわせて　やるから\nかくご　するんじゃぞ!$"
EventText_JP_081FF310: @ 0x081FF310
	.string "ふぅ　バッテリーぎれ　じゃ……$"
EventText_JP_081FF320: @ 0x081FF320
	.string "テッセン“わしゃ　じゅうでんの　しなおしだ\pたいせいを　たてなおしたら\nまた　きみの　ちょうせんを　うけるから\lしばらく　してから　きておくれ……$"
EventText_JP_081FF36A: @ 0x081FF36A
	.string "テッセン“おーっと　あらわれたな!\nわかっとる!　わしと　ポケモンの\lしょうぶを　したいんじゃろう!?\pわっはははは!\p……ありゃ?　たたかえる　ポケモンを\n1ひきしか　もっておらん　ようだな\pすまんが　2ひき　いじょうの\nポケモンを　もって　きておくれ!$"
	.byte 0x00
EventScript_JP_081FF3EC: @ 0x081FF3EC
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x005A
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF4C4 @ EventScript_JP_081FF4C4
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0059
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF427 @ EventScript_JP_081FF427
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF652 @ EventText_JP_081FF652
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF69F @ EventText_JP_081FF69F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF47A @ EventScript_JP_081FF47A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF46D @ EventScript_JP_081FF46D
	@ event command: end
	.byte 0x02
EventScript_JP_081FF427: @ 0x081FF427
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF69F @ EventText_JP_081FF69F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF47A @ EventScript_JP_081FF47A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF46D @ EventScript_JP_081FF46D
	@ event command: end
	.byte 0x02
EventScript_JP_081FF446: @ 0x081FF446
	@ event command: message
	.byte 0x67
	.4byte 0x081FF6FB @ EventText_JP_081FF6FB
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x15
	.byte 0x08
	.byte 0x0C
	.byte 0x01
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF483 @ EventScript_JP_081FF483
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF49D @ EventScript_JP_081FF49D
	@ event command: end
	.byte 0x02
EventScript_JP_081FF46D: @ 0x081FF46D
	@ event command: setflag
	.byte 0x29
	.2byte 0x0059
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF6D5 @ EventText_JP_081FF6D5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FF47A: @ 0x081FF47A
	@ event command: setflag
	.byte 0x29
	.2byte 0x005A
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF446 @ EventScript_JP_081FF446
	.byte 0x02
EventScript_JP_081FF483: @ 0x081FF483
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF82C @ EventText_JP_081FF82C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0103
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF4B7 @ EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF49D: @ 0x081FF49D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF840 @ EventText_JP_081FF840
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0110
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF4B7 @ EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF4B7: @ 0x081FF4B7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF854 @ EventText_JP_081FF854
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: special
	.byte 0x25
	.2byte 0x0082
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FF4C4: @ 0x081FF4C4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF88B @ EventText_JP_081FF88B
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF4E3 @ EventScript_JP_081FF4E3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF515 @ EventScript_JP_081FF515
	@ event command: end
	.byte 0x02
EventScript_JP_081FF4E3: @ 0x081FF4E3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF8B2 @ EventText_JP_081FF8B2
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0110
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF51F @ EventScript_JP_081FF51F
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0103
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF540 @ EventScript_JP_081FF540
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF93A @ EventText_JP_081FF93A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FF515: @ 0x081FF515
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF91D @ EventText_JP_081FF91D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FF51F: @ 0x081FF51F
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF8FC @ EventText_JP_081FF8FC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: takeitem
	.byte 0x45
	.2byte 0x0110
	.2byte 0x0001
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0103
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF4B7 @ EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF540: @ 0x081FF540
	@ event command: incrementgamestat
	.byte 0xC3
	.byte 0x04
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF8DB @ EventText_JP_081FF8DB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: takeitem
	.byte 0x45
	.2byte 0x0103
	.2byte 0x0001
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0110
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF4B7 @ EventScript_JP_081FF4B7
	.byte 0x02
EventScript_JP_081FF561: @ 0x081FF561
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FF9AB @ EventText_JP_081FF9AB
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_081FF56A: @ 0x081FF56A
	@ event command: message
	.byte 0x67
	.4byte 0x081FFA13 @ EventText_JP_081FFA13
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF576 @ EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF576: @ 0x081FF576
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x2B
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF5B8 @ EventScript_JP_081FF5B8
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF5C4 @ EventScript_JP_081FF5C4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF5D0 @ EventScript_JP_081FF5D0
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF5DC @ EventScript_JP_081FF5DC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF5DC @ EventScript_JP_081FF5DC
	@ event command: end
	.byte 0x02
EventScript_JP_081FF5B8: @ 0x081FF5B8
	@ event command: message
	.byte 0x67
	.4byte 0x081FFA3B @ EventText_JP_081FFA3B
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF576 @ EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF5C4: @ 0x081FF5C4
	@ event command: message
	.byte 0x67
	.4byte 0x081FFAD0 @ EventText_JP_081FFAD0
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF576 @ EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF5D0: @ 0x081FF5D0
	@ event command: message
	.byte 0x67
	.4byte 0x081FFB65 @ EventText_JP_081FFB65
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF576 @ EventScript_JP_081FF576
	.byte 0x02
EventScript_JP_081FF5DC: @ 0x081FF5DC
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FF5DE: @ 0x081FF5DE
	@ event command: message
	.byte 0x67
	.4byte 0x081FFBE1 @ EventText_JP_081FFBE1
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF5EA @ EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF5EA: @ 0x081FF5EA
	@ event command: multichoice
	.byte 0x6F
	.byte 0x00
	.byte 0x00
	.byte 0x2C
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF62C @ EventScript_JP_081FF62C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF638 @ EventScript_JP_081FF638
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF644 @ EventScript_JP_081FF644
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF650 @ EventScript_JP_081FF650
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FF650 @ EventScript_JP_081FF650
	@ event command: end
	.byte 0x02
EventScript_JP_081FF62C: @ 0x081FF62C
	@ event command: message
	.byte 0x67
	.4byte 0x081FFC09 @ EventText_JP_081FFC09
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF5EA @ EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF638: @ 0x081FF638
	@ event command: message
	.byte 0x67
	.4byte 0x081FFC8A @ EventText_JP_081FFC8A
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF5EA @ EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF644: @ 0x081FF644
	@ event command: message
	.byte 0x67
	.4byte 0x081FFCFB @ EventText_JP_081FFCFB
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x081FF5EA @ EventScript_JP_081FF5EA
	.byte 0x02
EventScript_JP_081FF650: @ 0x081FF650
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081FF652: @ 0x081FF652
	.string "……おや?　こりゃまた　ずいぶん\nげんきそうな　おきゃくさんが　きたのう!\pわたしは　ひとよんで　ミスターカゼノ\nこの　サイクルショップの　オーナーさ!$"
EventText_JP_081FF69F: @ 0x081FF69F
	.string "カゼノ“きみの　ランニングシューズ\nものすごく　よごれて　いるけど\lどこか　とおくから　やってきたのかい?$"
EventText_JP_081FF6D5: @ 0x081FF6D5
	.string "カゼノ“そうかい?\nじゃあ　わたしの　じてんしゃは\lひつよう　なさそうだね$"
EventText_JP_081FF6FB: @ 0x081FF6FB
	.string "カゼノ“フムフム……\pなんと　ミシロタウンから　はるばると!?\nすごい　とおく　じゃないか?\pわたしの　じてんしゃが　あれば\nここちよい　かぜを　かんじながら\lらくに　いろんな　ところへ　いけるのに!\pよーし!\nきみに　じてんしゃを　あげよう!\pいや　ちょっと　まて!\pじてんしゃ　には　2しゅるいの\nタイプが　あるのを　わすれとった!\pそれはな……\nマッハじてんしゃと　ダートじてんしゃだ!\pマッハじてんしゃは\nぜんしんで　かぜを　かんじたい　ひとに!\pダートじてんしゃは\nテクニックを　たのしみたい　ひとに!\pおじさん　しんせつ　だから\nきみの　すきな　ほうを　あげちゃうよ!\pさあ!　どちらを　えらぶ?$"
EventText_JP_081FF82C: @ 0x081FF82C
	.string "{PLAYER}は\nマッハじてんしゃを　えらんだ!$"
EventText_JP_081FF840: @ 0x081FF840
	.string "{PLAYER}は\nダートじてんしゃを　えらんだ!$"
EventText_JP_081FF854: @ 0x081FF854
	.string "カゼノ“もしも　べつの　タイプと\nこうかん　したくなった　ときには\lいつでも　わたしに　こえを　かけてくれ!$"
EventText_JP_081FF88B: @ 0x081FF88B
	.string "カゼノ“おや?　ちがう　タイプの\nじてんしゃに　のりかえたく　なったのかな?$"
EventText_JP_081FF8B2: @ 0x081FF8B2
	.string "カゼノ“じゃあ　きみが　いま　もっている\nじてんしゃを　こうかん　してあげよう!$"
EventText_JP_081FF8DB: @ 0x081FF8DB
	.string "{PLAYER}は　マッハじてんしゃを\nダートじてんしゃに　かえてもらった!$"
EventText_JP_081FF8FC: @ 0x081FF8FC
	.string "{PLAYER}は　ダートじてんしゃを\nマッハじてんしゃに　かえてもらった!$"
EventText_JP_081FF91D: @ 0x081FF91D
	.string "カゼノ“そうか　そうか!\nきにいってくれて　うれしいぞ!$"
EventText_JP_081FF93A: @ 0x081FF93A
	.string "……おや?\nきみに　あげた　じてんしゃ　どうした?\pそうか　パソコンに　あずけてあるのか\pパソコンから　とりだして　もってきたら\nこうかんして　あげる　からな!\pきみの　ぼうけんに……\nおいかぜが　ふくことを　いのってるよ!$"
EventText_JP_081FF9AB: @ 0x081FF9AB
	.string "ぼくは　ここで　はたらき　ながら\nじてんしゃの　べんきょうを　してるんだ\pじてんしゃの　のりかたで\nなにか　わからないことが　あったら\pおくのへやに　かいせつしょが　あるから\nそれを　よんでみると　いいよ!$"
EventText_JP_081FFA13: @ 0x081FFA13
	.string "マッハじてんしゃの\nかいせつしょが　おいてある!\pどの　ページを　よもうかな?$"
EventText_JP_081FFA3B: @ 0x081FFA3B
	.string "じてんしゃに　のって　じゅうじボタンを\nおしたほうに　じてんしゃは　はしります!\pすこし　はしっていく　うちに\nスピードが　あがっていく　でしょう!\pとまりたいときは　じゅうじボタンから\nてを　はなせば　スピードが　おちて\lしぜんに　とまって　くれるはずです!\p……べつの　ページを　よみますか?$"
EventText_JP_081FFAD0: @ 0x081FFAD0
	.string "マッハじてんしゃは　スピードが　はやくて\nきゅうに　とまることは　できません\pだから　かどを　まがるときには\nちょっとした　コツが　ひつようです!\pまがりたい　かどの　すこし　てまえで\nじゅうじボタンから　てを　はなして\lスピードを　おとして　まがりましょう!\p……べつの　ページを　よみますか?$"
EventText_JP_081FFB65: @ 0x081FFB65
	.string "ホウエンちほうには　ところどころに\nちいさな　すなのさかが　あります!\pそこは　すなが　くずれやすい　ために\nふつうは　のぼることが　できませんが\pマッハじてんしゃに　のっていれば\nのぼることが　できるのです!\p……べつの　ページを　よみますか?$"
EventText_JP_081FFBE1: @ 0x081FFBE1
	.string "ダートじてんしゃの\nかいせつしょが　おいてある!\pどの　ページを　よもうかな?$"
EventText_JP_081FFC09: @ 0x081FFC09
	.string "じてんしゃに　のって　Bボタンを　おすと\nそのばで　ぜんりんが　もちあがります!\pそのままで　じゅうじボタンを　おせば\nぜんりんを　あげた　じょうたいで\lはしることが　できるのです!\pそれが　ウイリーという　テクニック!\p……べつの　ページを　よみますか?$"
EventText_JP_081FFC8A: @ 0x081FFC8A
	.string "Bボタンを　おしたままに　していると\nウイリーしながら　そのばで　ピョンピョン\lとびはねることが　できます!\pそれが　ダニエルという　テクニック!\pダニエルのまま　はしることも　できます!\p……べつの　ページを　よみますか?$"
EventText_JP_081FFCFB: @ 0x081FFCFB
	.string "ダートじてんしゃに　のっているとき\nじゅうじボタンと　Bボタンを\lどうじに　おすと　ジャンプします!\pよこへ　おせば　よこに　ジャンプ!\pうしろへ　おせば　ジャンプしながら\nほうこうを　かえることが　できます!\p……べつの　ページを　よみますか?$"
	.byte 0x00
EventScript_JP_081FFD78: @ 0x081FFD78
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x006B
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FFDA7 @ EventScript_JP_081FFDA7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FFDB1 @ EventText_JP_081FFDB1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0158
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x006B
	@ event command: setflag
	.byte 0x29
	.2byte 0x034B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FFE53 @ EventText_JP_081FFE53
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FFDA7: @ 0x081FFDA7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x081FFEB7 @ EventText_JP_081FFEB7
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_081FFDB1: @ 0x081FFDB1
	.string "ほっほう!\pぼくのことを　いわくだきオヤジ\nなんて　よぶひとが　いるらしいけど\lしつれい　しちゃうね!\pぼくは　まだ　オヤジ　じゃないよ\nせめて　いわくだきにいさん　と\lよんでほしい　ものだね!\pほっほう!\pそれはそれとして　きみの　ポケモン\nなかなか　つよそうだな!\pよし　きにいった!\nこの　ひでんマシンを　あげよう!$"
EventText_JP_081FFE53: @ 0x081FFE53
	.string "それは　ひでんマシン‘いわくだき’!\pきみの　いくてを　ふさぐ\nじゃまな　おおいわが　あっても\pその　ひでんを　つかうことで\nくだいて　しまえるのだ!\pがんばって　いわを　くだきたまえ!\nほっほう!$"
EventText_JP_081FFEB7: @ 0x081FFEB7
	.string "そうそう\nいわを　くだくと　かくれていた\lポケモンが　とびでることも　あるからね!\pほっほう!$"
	.byte 0x00
EventScript_JP_081FFEE8: @ 0x081FFEE8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820078F @ EventText_JP_0820078F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FFFE6 @ EventScript_JP_081FFFE6
	@ event command: message
	.byte 0x67
	.4byte 0x082007D5 @ EventText_JP_082007D5
	@ event command: waitmessage
	.byte 0x66
	@ event command: showmoneybox
	.byte 0x93
	.byte 0x00
	.byte 0x00
	.byte 0x00
	@ event command: showcoinsbox
	.byte 0xC0
	.byte 0x01
	.byte 0x06
	@ event command: goto
	.byte 0x05
	.4byte 0x081FFF14 @ EventScript_JP_081FFF14
EventScript_JP_081FFF14: @ 0x081FFF14
	@ event command: multichoicedefault
	.byte 0x70
	.byte 0x0F
	.byte 0x00
	.byte 0x31
	.byte 0x00
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FFF62 @ EventScript_JP_081FFF62
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FFFA4 @ EventScript_JP_081FFFA4
	@ event command: goto
	.byte 0x05
	.4byte 0x08200000 @ EventScript_JP_08200000
	.byte 0x02, 0x70, 0x0F, 0x00, 0x31, 0x01, 0x00, 0x19, 0x00, 0x80, 0x0D, 0x80, 0x21, 0x00, 0x80, 0x00
	.byte 0x00, 0x06, 0x01, 0x62, 0xFF, 0x1F, 0x08, 0x21, 0x00, 0x80, 0x01, 0x00, 0x06, 0x01, 0xA4, 0xFF
	.byte 0x1F, 0x08, 0x05, 0x00, 0x00, 0x20, 0x08, 0x02
EventScript_JP_081FFF62: @ 0x081FFF62
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x26DE
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x08200010 @ EventScript_JP_08200010
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x000003E8
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FFFF0 @ EventScript_JP_081FFFF0
	@ event command: givecoins
	.byte 0xB4
	.2byte 0x0032
	@ event command: takemoney
	.byte 0x91
	.4byte 0x000003E8
	.byte 0x00
	@ event command: updatemoneybox
	.byte 0x95
	.byte 0x00
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x06
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200803 @ EventText_JP_08200803
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x05
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FFFA4: @ 0x081FFFA4
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x251C
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x08200010 @ EventScript_JP_08200010
	@ event command: checkmoney
	.byte 0x92
	.4byte 0x00002710
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x081FFFF0 @ EventScript_JP_081FFFF0
	@ event command: givecoins
	.byte 0xB4
	.2byte 0x01F4
	@ event command: takemoney
	.byte 0x91
	.4byte 0x00002710
	.byte 0x00
	@ event command: updatemoneybox
	.byte 0x95
	.byte 0x00
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x06
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200803 @ EventText_JP_08200803
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x05
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FFFE6: @ 0x081FFFE6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082007AA @ EventText_JP_082007AA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_081FFFF0: @ 0x081FFFF0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200820 @ EventText_JP_08200820
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x05
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200000: @ 0x08200000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200848 @ EventText_JP_08200848
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x05
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200010: @ 0x08200010
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200833 @ EventText_JP_08200833
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidemoneybox
	.byte 0x94
	@ event command: nop
	.byte 0x00
	@ event command: nop
	.byte 0x00
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x05
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200020: @ 0x08200020
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200864 @ EventText_JP_08200864
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820003C @ EventScript_JP_0820003C
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820003C: @ 0x0820003C
	@ event command: message
	.byte 0x67
	.4byte 0x08200897 @ EventText_JP_08200897
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0000
	@ event command: showcoinsbox
	.byte 0xC0
	.byte 0x01
	.byte 0x01
	@ event command: goto
	.byte 0x05
	.4byte 0x0820005A @ EventScript_JP_0820005A
EventScript_JP_0820004F: @ 0x0820004F
	@ event command: message
	.byte 0x67
	.4byte 0x08200897 @ EventText_JP_08200897
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x0820005A @ EventScript_JP_0820005A
EventScript_JP_0820005A: @ 0x0820005A
	@ event command: multichoice
	.byte 0x6F
	.byte 0x0C
	.byte 0x00
	.byte 0x30
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200096 @ EventScript_JP_08200096
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082000A4 @ EventScript_JP_082000A4
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082000B2 @ EventScript_JP_082000B2
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082001C1 @ EventScript_JP_082001C1
	@ event command: goto
	.byte 0x05
	.4byte 0x082001C1 @ EventScript_JP_082001C1
	.byte 0x02
EventScript_JP_08200096: @ 0x08200096
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x00
	.2byte 0x0058
	@ event command: goto
	.byte 0x05
	.4byte 0x082000C0 @ EventScript_JP_082000C0
EventScript_JP_082000A4: @ 0x082000A4
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0002
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x00
	.2byte 0x0059
	@ event command: goto
	.byte 0x05
	.4byte 0x082000C0 @ EventScript_JP_082000C0
EventScript_JP_082000B2: @ 0x082000B2
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0003
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x00
	.2byte 0x005A
	@ event command: goto
	.byte 0x05
	.4byte 0x082000C0 @ EventScript_JP_082000C0
EventScript_JP_082000C0: @ 0x082000C0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820090F @ EventText_JP_0820090F
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082001C1 @ EventScript_JP_082001C1
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082000FA @ EventScript_JP_082000FA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200134 @ EventScript_JP_08200134
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820016E @ EventScript_JP_0820016E
	@ event command: end
	.byte 0x02
EventScript_JP_082000FA: @ 0x082000FA
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x03E8
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082001A8 @ EventScript_JP_082001A8
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x0058
	@ event command: checkdecorspace
	.byte 0x4E
	.2byte 0x0058
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082001B6 @ EventScript_JP_082001B6
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x03E8
	@ event command: givedecoration
	.byte 0x4B
	.2byte 0x0058
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008B1 @ EventText_JP_082008B1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820004F @ EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_08200134: @ 0x08200134
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x03E8
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082001A8 @ EventScript_JP_082001A8
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x0059
	@ event command: checkdecorspace
	.byte 0x4E
	.2byte 0x0059
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082001B6 @ EventScript_JP_082001B6
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x03E8
	@ event command: givedecoration
	.byte 0x4B
	.2byte 0x0059
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008B1 @ EventText_JP_082008B1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820004F @ EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_0820016E: @ 0x0820016E
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x03E8
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x082001A8 @ EventScript_JP_082001A8
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x005A
	@ event command: checkdecorspace
	.byte 0x4E
	.2byte 0x005A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082001B6 @ EventScript_JP_082001B6
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x03E8
	@ event command: givedecoration
	.byte 0x4B
	.2byte 0x005A
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008B1 @ EventText_JP_082008B1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820004F @ EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_082001A8: @ 0x082001A8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008D3 @ EventText_JP_082008D3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x0820004F @ EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_082001B6: @ 0x082001B6
	@ event command: call
	.byte 0x04
	.4byte 0x082430FD
	@ event command: goto
	.byte 0x05
	.4byte 0x0820004F @ EventScript_JP_0820004F
	.byte 0x02
EventScript_JP_082001C1: @ 0x082001C1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008F5 @ EventText_JP_082008F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x00
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082001CE: @ 0x082001CE
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200864 @ EventText_JP_08200864
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082001EA @ EventScript_JP_082001EA
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082001EA: @ 0x082001EA
	@ event command: message
	.byte 0x67
	.4byte 0x08200897 @ EventText_JP_08200897
	@ event command: waitmessage
	.byte 0x66
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0000
	@ event command: showcoinsbox
	.byte 0xC0
	.byte 0x01
	.byte 0x01
	@ event command: goto
	.byte 0x05
	.4byte 0x08200208 @ EventScript_JP_08200208
EventScript_JP_082001FD: @ 0x082001FD
	@ event command: message
	.byte 0x67
	.4byte 0x08200897 @ EventText_JP_08200897
	@ event command: waitmessage
	.byte 0x66
	@ event command: goto
	.byte 0x05
	.4byte 0x08200208 @ EventScript_JP_08200208
EventScript_JP_08200208: @ 0x08200208
	@ event command: multichoice
	.byte 0x6F
	.byte 0x0C
	.byte 0x00
	.byte 0x37
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820025A @ EventScript_JP_0820025A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820026D @ EventScript_JP_0820026D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200280 @ EventScript_JP_08200280
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200293 @ EventScript_JP_08200293
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082002A6 @ EventScript_JP_082002A6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200447 @ EventScript_JP_08200447
	@ event command: goto
	.byte 0x05
	.4byte 0x08200447 @ EventScript_JP_08200447
	.byte 0x02
EventScript_JP_0820025A: @ 0x0820025A
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0001
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x0140
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0140
	@ event command: goto
	.byte 0x05
	.4byte 0x082002B9 @ EventScript_JP_082002B9
EventScript_JP_0820026D: @ 0x0820026D
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0002
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x013D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x013D
	@ event command: goto
	.byte 0x05
	.4byte 0x082002B9 @ EventScript_JP_082002B9
EventScript_JP_08200280: @ 0x08200280
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0003
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x0143
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0143
	@ event command: goto
	.byte 0x05
	.4byte 0x082002B9 @ EventScript_JP_082002B9
EventScript_JP_08200293: @ 0x08200293
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0004
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x0138
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0138
	@ event command: goto
	.byte 0x05
	.4byte 0x082002B9 @ EventScript_JP_082002B9
EventScript_JP_082002A6: @ 0x082002A6
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0005
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x012D
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x012D
	@ event command: goto
	.byte 0x05
	.4byte 0x082002B9 @ EventScript_JP_082002B9
EventScript_JP_082002B9: @ 0x082002B9
	@ event command: special
	.byte 0x25
	.2byte 0x019B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008A2 @ EventText_JP_082008A2
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200447 @ EventScript_JP_08200447
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820030C @ EventScript_JP_0820030C
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200346 @ EventScript_JP_08200346
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0003
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200380 @ EventScript_JP_08200380
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0004
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082003BA @ EventScript_JP_082003BA
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0005
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082003F4 @ EventScript_JP_082003F4
	@ event command: end
	.byte 0x02
EventScript_JP_0820030C: @ 0x0820030C
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x05DC
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820042E @ EventScript_JP_0820042E
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x0140
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820043C @ EventScript_JP_0820043C
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x05DC
	@ event command: giveitem
	.byte 0x44
	.2byte 0x0140
	.2byte 0x0001
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820091A @ EventText_JP_0820091A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_08200346: @ 0x08200346
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0DAC
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820042E @ EventScript_JP_0820042E
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x013D
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820043C @ EventScript_JP_0820043C
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x0DAC
	@ event command: giveitem
	.byte 0x44
	.2byte 0x013D
	.2byte 0x0001
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820091A @ EventText_JP_0820091A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_08200380: @ 0x08200380
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0FA0
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820042E @ EventScript_JP_0820042E
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x0143
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820043C @ EventScript_JP_0820043C
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x0FA0
	@ event command: giveitem
	.byte 0x44
	.2byte 0x0143
	.2byte 0x0001
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820091A @ EventText_JP_0820091A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_082003BA: @ 0x082003BA
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0FA0
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820042E @ EventScript_JP_0820042E
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x0138
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820043C @ EventScript_JP_0820043C
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x0FA0
	@ event command: giveitem
	.byte 0x44
	.2byte 0x0138
	.2byte 0x0001
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820091A @ EventText_JP_0820091A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_082003F4: @ 0x082003F4
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4002
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4002
	.2byte 0x0FA0
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x0820042E @ EventScript_JP_0820042E
	@ event command: checkitemspace
	.byte 0x46
	.2byte 0x012D
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820043C @ EventScript_JP_0820043C
	@ event command: takecoins
	.byte 0xB5
	.2byte 0x0FA0
	@ event command: giveitem
	.byte 0x44
	.2byte 0x012D
	.2byte 0x0001
	@ event command: updatecoinsbox
	.byte 0xC2
	.byte 0x01
	.byte 0x01
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820091A @ EventText_JP_0820091A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_0820042E: @ 0x0820042E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008D3 @ EventText_JP_082008D3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_0820043C: @ 0x0820043C
	@ event command: call
	.byte 0x04
	.4byte 0x082430EA
	@ event command: goto
	.byte 0x05
	.4byte 0x082001FD @ EventScript_JP_082001FD
	.byte 0x02
EventScript_JP_08200447: @ 0x08200447
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082008F5 @ EventText_JP_082008F5
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: hidecoinsbox
	.byte 0xC1
	.byte 0x00
	.byte 0x00
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200454: @ 0x08200454
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200AAF @ EventText_JP_08200AAF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_0820045D: @ 0x0820045D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200ACC @ EventText_JP_08200ACC
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08200466: @ 0x08200466
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00E2
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200542 @ EventScript_JP_08200542
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200932 @ EventText_JP_08200932
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200538 @ EventScript_JP_08200538
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x4023
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082004AB @ EventScript_JP_082004AB
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082004D5 @ EventScript_JP_082004D5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082004FF @ EventScript_JP_082004FF
	@ event command: end
	.byte 0x02
EventScript_JP_082004AB: @ 0x082004AB
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x0058
	@ event command: checkdecorspace
	.byte 0x4E
	.2byte 0x0058
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200529 @ EventScript_JP_08200529
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820095F @ EventText_JP_0820095F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0058
	@ event command: callstd
	.byte 0x09
	.byte 0x07
	@ event command: setflag
	.byte 0x29
	.2byte 0x00E2
	@ event command: goto
	.byte 0x05
	.4byte 0x08200542 @ EventScript_JP_08200542
	.byte 0x02
EventScript_JP_082004D5: @ 0x082004D5
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x0059
	@ event command: checkdecorspace
	.byte 0x4E
	.2byte 0x0059
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200529 @ EventScript_JP_08200529
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820095F @ EventText_JP_0820095F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0059
	@ event command: callstd
	.byte 0x09
	.byte 0x07
	@ event command: setflag
	.byte 0x29
	.2byte 0x00E2
	@ event command: goto
	.byte 0x05
	.4byte 0x08200542 @ EventScript_JP_08200542
	.byte 0x02
EventScript_JP_082004FF: @ 0x082004FF
	@ event command: bufferdecorationname
	.byte 0x81
	.byte 0x01
	.2byte 0x005A
	@ event command: checkdecorspace
	.byte 0x4E
	.2byte 0x005A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200529 @ EventScript_JP_08200529
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820095F @ EventText_JP_0820095F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x005A
	@ event command: callstd
	.byte 0x09
	.byte 0x07
	@ event command: setflag
	.byte 0x29
	.2byte 0x00E2
	@ event command: goto
	.byte 0x05
	.4byte 0x08200542 @ EventScript_JP_08200542
	.byte 0x02
EventScript_JP_08200529: @ 0x08200529
	@ event command: call
	.byte 0x04
	.4byte 0x082430FD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200967 @ EventText_JP_08200967
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200538: @ 0x08200538
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820097B @ EventText_JP_0820097B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200542: @ 0x08200542
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820098D @ EventText_JP_0820098D
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820054C: @ 0x0820054C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820056C @ EventScript_JP_0820056C
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082009AB @ EventText_JP_082009AB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_0820056C: @ 0x0820056C
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00E1
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820059A @ EventScript_JP_0820059A
	@ event command: checkcoins
	.byte 0xB3
	.2byte 0x4001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4001
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x0820059A @ EventScript_JP_0820059A
	@ event command: setflag
	.byte 0x29
	.2byte 0x00E1
	@ event command: givecoins
	.byte 0xB4
	.2byte 0x0014
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082009E9 @ EventText_JP_082009E9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playse
	.byte 0x2F
	.2byte 0x005F
	@ event command: goto
	.byte 0x05
	.4byte 0x0820059A @ EventScript_JP_0820059A
	.byte 0x02
EventScript_JP_0820059A: @ 0x0820059A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200A10 @ EventText_JP_08200A10
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_082005A8: @ 0x082005A8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200A52 @ EventText_JP_08200A52
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_082005B8: @ 0x082005B8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200A93 @ EventText_JP_08200A93
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_082005C8: @ 0x082005C8
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200B0F @ EventText_JP_08200B0F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_082005D8: @ 0x082005D8
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082005E5: @ 0x082005E5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200B52 @ EventText_JP_08200B52
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_082005F5: @ 0x082005F5
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200BA3 @ EventText_JP_08200BA3
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082005D8 @ EventScript_JP_082005D8
	.byte 0x02
EventScript_JP_08200605: @ 0x08200605
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0000
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200625: @ 0x08200625
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0001
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200645: @ 0x08200645
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0002
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200665: @ 0x08200665
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0003
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200685: @ 0x08200685
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0004
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082006A5: @ 0x082006A5
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0005
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082006C5: @ 0x082006C5
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0006
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_082006E5: @ 0x082006E5
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0007
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200705: @ 0x08200705
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0008
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200725: @ 0x08200725
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x0009
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200745: @ 0x08200745
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000A
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200765: @ 0x08200765
	@ event command: lockall
	.byte 0x69
	@ event command: checkitem
	.byte 0x47
	.2byte 0x0104
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200785 @ EventScript_JP_08200785
	@ event command: setvar
	.byte 0x16
	.2byte 0x8004
	.2byte 0x000B
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x011D
	@ event command: playslotmachine
	.byte 0x89
	.2byte 0x800D
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08200785: @ 0x08200785
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200C41 @ EventText_JP_08200C41
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventText_JP_0820078F: @ 0x0820078F
	.string "いらっしゃいませ!\nキンセツ　ゲームコーナー　です!$"
EventText_JP_082007AA: @ 0x082007AA
	.string "ゲームよう　コイン　ですね?\pあら?　コインを　いれる\nコインケースが　ありませんよ$"
EventText_JP_082007D5: @ 0x082007D5
	.string "ゲームよう　コイン　ですね?\p50まい　1000えんに　なります!\nコインを　かいますか?$"
EventText_JP_08200803: @ 0x08200803
	.string "はい　ありがとう　ございます!\nコイン　です!　どうぞ!$"
EventText_JP_08200820: @ 0x08200820
	.string "あの……\nおかねが　たりないようです$"
EventText_JP_08200833: @ 0x08200833
	.string "あら?\nコインケースが　まんたん　ですね$"
EventText_JP_08200848: @ 0x08200848
	.string "……　いりませんか!\nそれでは　また　きてくださいね!$"
EventText_JP_08200864: @ 0x08200864
	.string "いらっしゃいませ!\pこちらでは　ゲームで　ためた　コインを\nおすきな　けいひんと　こうかん　します!$"
EventText_JP_08200897: @ 0x08200897
	.string "どれが　いいですか?$"
EventText_JP_082008A2: @ 0x082008A2
	.string "{STR_VAR_1}‘{STR_VAR_2}’で\nいいですね?$"
EventText_JP_082008B1: @ 0x082008B1
	.string "どうも　ありがとう!\nじたくの　パソコンに　おくって　おきますね!$"
EventText_JP_082008D3: @ 0x082008D3
	.string "コインが　たりませんね$"
EventText_JP_082008DF: @ 0x082008DF
	.string "{STR_VAR_1}　を\nいれる　ばしょが　いっぱいですよ$"
EventText_JP_082008F5: @ 0x082008F5
	.string "あら　そうですか\nコイン　ためて　きてくださいね!$"
EventText_JP_0820090F: @ 0x0820090F
	.string "{STR_VAR_1}で\nいいですね?$"
EventText_JP_0820091A: @ 0x0820091A
	.string "はい　どうぞ!$"
EventText_JP_08200922: @ 0x08200922
	.string "それいじょう　もてない　ですよ$"
EventText_JP_08200932: @ 0x08200932
	.string "うっかり　おんなじ\nぬいぐるみを　もらっちゃった!\pひとつ　あなたに　わけてあげようか?$"
EventText_JP_0820095F: @ 0x0820095F
	.string "はい　どうぞ!$"
EventText_JP_08200967: @ 0x08200967
	.string "えー　ほしいけど\nいまは　ダメなのー?$"
EventText_JP_0820097B: @ 0x0820097B
	.string "そんなこと　いわずに　もらってよ!$"
EventText_JP_0820098D: @ 0x0820098D
	.string "ほしい　けいひんが　あるから\nおおあたり　ねらってるのよ!$"
EventText_JP_082009AB: @ 0x082009AB
	.string "ここで　あそぶには\nコインケースが　ひつよう　だぞ!\pほしかったら　となりの　いえの\nおねえさんに　いってみたら　どうだ?$"
EventText_JP_082009E9: @ 0x082009E9
	.string "きょうは　かちまくって　いるからな!\nきみにも　コインを　わけて　あげよう!$"
EventText_JP_08200A10: @ 0x08200A10
	.string "おじさんは　キンセツに　くると\nいつも　ゲームコーナーで　あそぶんだ\pなんだか　ほかに　くらべて\nでやすいような　きが　するんだな$"
EventText_JP_08200A52: @ 0x08200A52
	.string "ルーレットは　あそぶ　テーブルで\nレートが　ちがうんじゃよ\pもっている　コインの　かずで\nあそぶ　テーブルを　えらぶと　いいぞ!$"
EventText_JP_08200A93: @ 0x08200A93
	.string "ひー　スロットを　してると\nしごとを　わすれてしまうー$"
EventText_JP_08200AAF: @ 0x08200AAF
	.string "この　ゲームコーナーでは\nコインを　つかって　あそぶのよ$"
EventText_JP_08200ACC: @ 0x08200ACC
	.string "この　ルーレット　という　やつは\nおおきく　ねらおうと　すると\lなかなか　かてないくせに\lなかなか　やめられない　こまった　やつだよ$"
EventText_JP_08200B0F: @ 0x08200B0F
	.string "スロットは　コイン　1まいから　あそべるけど\n3まい　かけた　ほうが　いいんじゃない?\pおおあたりの　かくりつが　アップするからね!$"
EventText_JP_08200B52: @ 0x08200B52
	.string "キミは　‘7’を　ねらって　とめられる?\pBDタイム　っていう　チャンスゲームのとき\n‘7’を　ねらって　ばっちり　とめられれば\lコインを　たくさん　ふやせるよ$"
EventText_JP_08200BA3: @ 0x08200BA3
	.string "スロットの　おとくな　じょうほう\nあなたに　おしえて　あげるわね!\pイナズマが　たくさん　たまっているほど\nBDタイムの　かいすうが　ふえやすいの!\pさいこう　5かいの　BDタイムの　ゲームで\nレギュラーボーナスを　4かい　あててから\pビッグボーナスを　あてることが　できれば\nコインを　660まいも　かせげるわ!$"
EventText_JP_08200C41: @ 0x08200C41
	.string "コインケースを\nもっていないので　あそべません!$"
	.byte 0x00
EventScript_JP_08200C5B: @ 0x08200C5B
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0102
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200CD8 @ EventScript_JP_08200CD8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200CEC @ EventText_JP_08200CEC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkitem
	.byte 0x47
	.2byte 0x007A
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200C80 @ EventScript_JP_08200C80
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200C80: @ 0x08200C80
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200D35 @ EventText_JP_08200D35
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200CB6 @ EventScript_JP_08200CB6
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08200CE2 @ EventScript_JP_08200CE2
	@ event command: end
	.byte 0x02
EventScript_JP_08200CB6: @ 0x08200CB6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200D5A @ EventText_JP_08200D5A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: takeitem
	.byte 0x45
	.2byte 0x007A
	.2byte 0x0001
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0104
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: setflag
	.byte 0x29
	.2byte 0x0102
	@ event command: goto
	.byte 0x05
	.4byte 0x08200CD8 @ EventScript_JP_08200CD8
	.byte 0x02
EventScript_JP_08200CD8: @ 0x08200CD8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200D72 @ EventText_JP_08200D72
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200CE2: @ 0x08200CE2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200D9C @ EventText_JP_08200D9C
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_08200CEC: @ 0x08200CEC
	.string "あたしが　じてんしゃに　のれたら\nカイナに　いくのも　すぐなのに……\pそして　カイナの　フレンドリィショップで\nハーバーメールを　かえるのに……$"
EventText_JP_08200D35: @ 0x08200D35
	.string "それ!　ハーバーメールでしょ!\nコインケースと　こうかん　してくれない?$"
EventText_JP_08200D5A: @ 0x08200D5A
	.string "うれしい!\nじゃ　コインケースと　こうかんね!$"
EventText_JP_08200D72: @ 0x08200D72
	.string "コインケースが　あれば　ゲームコーナーで\nルーレットや　スロットを　たのしめるわ!$"
EventText_JP_08200D9C: @ 0x08200D9C
	.string "そう……　ざんねん　ね\pコインケースが　あれば　ゲームコーナーで\nルーレットや　スロットを　たのしめるのに……$"
MapScripts_JP_08200DD4: @ 0x08200DD4
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08200DDF
	.byte 0x05
	.4byte 0x0824790F
	.byte 0
EventScript_JP_08200DDF: @ 0x08200DDF
	@ event command: setrespawn
	.byte 0x9F
	.2byte 0x0005
	@ event command: call
	.byte 0x04
	.4byte 0x08242978
	@ event command: goto
	.byte 0x05
	.4byte 0x08200DED @ EventScript_JP_08200DED
	.byte 0x02
EventScript_JP_08200DED: @ 0x08200DED
	@ event command: special
	.byte 0x25
	.2byte 0x0068
	@ event command: end
	.byte 0x02
EventScript_JP_08200DF1: @ 0x08200DF1
	@ event command: setvar
	.byte 0x16
	.2byte 0x800B
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x082429B8
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitbuttonpress
	.byte 0x6D
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08200DFF: @ 0x08200DFF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200E1A @ EventText_JP_08200E1A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08200E08: @ 0x08200E08
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200E54 @ EventText_JP_08200E54
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08200E11: @ 0x08200E11
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200E8A @ EventText_JP_08200E8A
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_08200E1A: @ 0x08200E1A
	.string "あそこに　いる　オヤジ\nへんなこと　いったり　するの!\pなんだか　おもしろくって\nわすれられない　そんざい　だわ!$"
EventText_JP_08200E54: @ 0x08200E54
	.string "レコードコーナーを　つかったらね\nムロタウンで　はやっている　ものが\lともだちと　いっしょに　なったのよ!$"
EventText_JP_08200E8A: @ 0x08200E8A
	.string "ポケモンセンターの　2かいに\nレコードコーナーが　できたんだってさ!\pよく　わからないけど　おもしろそうだろ?\nとにかく　やってみるよ!$"
	.byte 0x02, 0x39, 0x69, 0x24, 0x08, 0x04, 0x6A, 0x68, 0x24, 0x08, 0x01, 0xBC, 0x68, 0x24, 0x08, 0x03
	.byte 0xCD, 0x67, 0x24, 0x08, 0x00, 0x04, 0xB2, 0x6B, 0x24, 0x08, 0x02, 0x04, 0xAD, 0x6D, 0x24, 0x08
	.byte 0x02, 0x04, 0xD6, 0x6E, 0x24, 0x08, 0x02
EventScript_JP_08200EF6: @ 0x08200EF6
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200EFF @ EventText_JP_08200EFF
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_08200EFF: @ 0x08200EFF
	.string "ここの　コロシアムで\nつうしんたいせん　できるの　しってる?\pじぶんの　せいせき　って\nかべを　みると　わかるから\lまけてばかりだと　はずかしくなっちゃう……$"
	.byte 0x00
EventScript_JP_08200F50: @ 0x08200F50
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: message
	.byte 0x67
	.4byte 0x0824390F @ gText_Rom_24390F
	@ event command: waitmessage
	.byte 0x66
	@ event command: pokemart
	.byte 0x86
	.4byte 0x08200F68
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
	.byte 0x00, 0x04, 0x00, 0x03, 0x00, 0x16, 0x00, 0x0E, 0x00, 0x12, 0x00, 0x11, 0x00, 0x4D, 0x00, 0x4B
	.byte 0x00, 0x4C, 0x00, 0x49, 0x00, 0x4A, 0x00, 0x4E, 0x00, 0x00, 0x00, 0x6C, 0x02
EventScript_JP_08200F84: @ 0x08200F84
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200F96 @ EventText_JP_08200F96
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventScript_JP_08200F8D: @ 0x08200F8D
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08200FF2 @ EventText_JP_08200FF2
	@ event command: callstd
	.byte 0x09
	.byte 0x02
	@ event command: end
	.byte 0x02
EventText_JP_08200F96: @ 0x08200F96
	.string "ポケモンが　たたかっているとき\nのうりょくを　いちじてきに\lたかめる　どうぐが　あるのじゃ\pわしが　しっているのは\nプラスパワー\lディフェンダー……\pたしか　ほかにも　あったのう……$"
EventText_JP_08200FF2: @ 0x08200FF2
	.string "わざを　くりだすのか\nそれとも　どうぐを　つかうのか……\pトレーナーの　はんだんで\nしょうぶが　きまるのかも　しれないな!$"
MapScripts_JP_08201030: @ 0x08201030
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08201036
	.byte 0
EventScript_JP_08201036: @ 0x08201036
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0090
	@ event command: call_if
	.byte 0x07
	.byte 0x00
	.4byte 0x08201040 @ EventScript_JP_08201040
	@ event command: end
	.byte 0x02
EventScript_JP_08201040: @ 0x08201040
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x000E
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x08
	@ event command: return
	.byte 0x03
EventScript_JP_0820104C: @ 0x0820104C
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0090
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201074 @ EventScript_JP_08201074
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820106A @ EventScript_JP_0820106A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201162 @ EventText_JP_08201162
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820106A: @ 0x0820106A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082011A8 @ EventText_JP_082011A8
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201074: @ 0x08201074
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201208 @ EventText_JP_08201208
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820107E: @ 0x0820107E
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0090
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082010A5 @ EventScript_JP_082010A5
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082010AF @ EventScript_JP_082010AF
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082010AF @ EventScript_JP_082010AF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201222 @ EventText_JP_08201222
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082010A5: @ 0x082010A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820126B @ EventText_JP_0820126B
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082010AF: @ 0x082010AF
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201249 @ EventText_JP_08201249
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082010B9: @ 0x082010B9
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0090
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082010E0 @ EventScript_JP_082010E0
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082010EA @ EventScript_JP_082010EA
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x008E
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082010EA @ EventScript_JP_082010EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201106 @ EventText_JP_08201106
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082010E0: @ 0x082010E0
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201106 @ EventText_JP_08201106
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082010EA: @ 0x082010EA
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201146 @ EventText_JP_08201146
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082010F4: @ 0x082010F4
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201284 @ EventText_JP_08201284
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventScript_JP_082010FD: @ 0x082010FD
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201357 @ EventText_JP_08201357
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventText_JP_08201106: @ 0x08201106
	.string "いらっしゃいませ!\nデボン　コーポレーション　です!\pみなさまの　せいかつに　やくだつ\nどうぐや　くすりを　おつくりしてます!$"
EventText_JP_08201146: @ 0x08201146
	.string "ドジな　けんきゅういんが\nにもつを　とられちゃって……$"
EventText_JP_08201162: @ 0x08201162
	.string "おっ!　ランニングシューズ!\pじぶんたちの　かいしゃの　しょうひんを\nじっさいに　つかっている　ひとを　みると\lすごく　うれしくなるよね!$"
EventText_JP_082011A8: @ 0x082011A8
	.string "たしかに　あの　にもつは\nだいじな　もの　だけど\lほかの　ひとが　ぬすんでいっても\lつかえないと　おもうんだよね\pぼくの　すいりでは　あの　どろぼう……\nたんなる　マヌケ　なんじゃないかな?$"
EventText_JP_08201208: @ 0x08201208
	.string "どうやら　デボンのにもつは\nもどってきた　らしいね$"
EventText_JP_08201222: @ 0x08201222
	.string "おっと　かんけいしゃ　いがいの　かたは\nここから　さきには　はいれませんよ!$"
EventText_JP_08201249: @ 0x08201249
	.string "どろぼうに　にもつを　うばわれるなんて\nなんて　ドジなんだろう……$"
EventText_JP_0820126B: @ 0x0820126B
	.string "やあ!\nきみなら　いつでも　だいかんげい　だよ!$"
EventText_JP_08201284: @ 0x08201284
	.string "いしや　きんぞくの　サンプルが\nガラスケースの　なかに　ならんでいる!\pパネルに　せつめいが　かいてあるから\nよんでみよう……\p‘デボン　コーポレーションは　もともと\n　やまから　いしを　きりだしたり\p　さてつから　てつざいを　つくるために\n　せつりつ　された　かいしゃ　です’\p‘やがて　デボン　コーポレーションは\n　ざいりょう　だけに　とどまらず\p　さまざまな　こうぎょう　せいひんも\n　つくるように　なったのです’$"
EventText_JP_08201357: @ 0x08201357
	.string "いろんな　どうぐの　しさくひんが\nガラスケースの　なかに　ならんでいる!\pパネルに　せつめいが　かいてあるから\nよんでみよう……\p‘げんざい　デボン　コーポレーションでは\n　こうぎょう　せいひんの　ほかにも\l　にちようひんや　くすりなど\p　ひとびとの　くらしに　やくだつ　ものを\n　かいはつ　しています’\p‘また　げんざいでは　モンスターボールや\n　ポケナビなどの　トレーナーようひんも\l　てがけるように　なりました’$"
MapScripts_JP_08201429: @ 0x08201429
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_0820142F
	.byte 0
EventScript_JP_0820142F: @ 0x0820142F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820143B @ EventScript_JP_0820143B
	@ event command: end
	.byte 0x02
EventScript_JP_0820143B: @ 0x0820143B
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C4
	.2byte 0x0002
	@ event command: return
	.byte 0x03
EventScript_JP_08201441: @ 0x08201441
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820143B @ EventScript_JP_0820143B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082017CD @ EventText_JP_082017CD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201458: @ 0x08201458
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820143B @ EventScript_JP_0820143B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x011F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201478 @ EventScript_JP_08201478
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082017FF @ EventText_JP_082017FF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201478: @ 0x08201478
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201831 @ EventText_JP_08201831
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201482: @ 0x08201482
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820143B @ EventScript_JP_0820143B
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BC
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082014A2 @ EventScript_JP_082014A2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082018CD @ EventText_JP_082018CD
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082014A2: @ 0x082014A2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201908 @ EventText_JP_08201908
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082014AC: @ 0x082014AC
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820143B @ EventScript_JP_0820143B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201983 @ EventText_JP_08201983
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082014C3: @ 0x082014C3
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082015D5 @ EventScript_JP_082015D5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082015CB @ EventScript_JP_082015CB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082019BF @ EventText_JP_082019BF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: checkitem
	.byte 0x47
	.2byte 0x011E
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201505 @ EventScript_JP_08201505
	@ event command: checkitem
	.byte 0x47
	.2byte 0x011F
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201563 @ EventScript_JP_08201563
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201505: @ 0x08201505
	@ event command: closemessage
	.byte 0x68
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082019FB @ EventText_JP_082019FB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082015C1 @ EventScript_JP_082015C1
	@ event command: checkitem
	.byte 0x47
	.2byte 0x011F
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201756 @ EventScript_JP_08201756
	@ event command: goto
	.byte 0x05
	.4byte 0x08201546 @ EventScript_JP_08201546
	.byte 0x02
EventScript_JP_08201546: @ 0x08201546
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x011E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201AB1 @ EventText_JP_08201AB1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: takeitem
	.byte 0x45
	.2byte 0x011E
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C5
	.2byte 0x0001
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201563: @ 0x08201563
	@ event command: closemessage
	.byte 0x68
	@ event command: playse
	.byte 0x2F
	.2byte 0x0015
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824361B @ PetalburgCity_Ext_ExclamationMark
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0005
	.4byte 0x0824361D @ PetalburgCity_Ext_Delay48
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082019FB @ EventText_JP_082019FB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082015C1 @ EventScript_JP_082015C1
	@ event command: checkitem
	.byte 0x47
	.2byte 0x011E
	.2byte 0x0001
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201756 @ EventScript_JP_08201756
	@ event command: goto
	.byte 0x05
	.4byte 0x082015A4 @ EventScript_JP_082015A4
	.byte 0x02
EventScript_JP_082015A4: @ 0x082015A4
	@ event command: bufferitemname
	.byte 0x80
	.byte 0x00
	.2byte 0x011F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201AB1 @ EventText_JP_08201AB1
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: takeitem
	.byte 0x45
	.2byte 0x011F
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C5
	.2byte 0x0002
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082015C1: @ 0x082015C1
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201A42 @ EventText_JP_08201A42
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082015CB: @ 0x082015CB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201ADF @ EventText_JP_08201ADF
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082015D5: @ 0x082015D5
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C5
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082015EC @ EventScript_JP_082015EC
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C5
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082015FE @ EventScript_JP_082015FE
	@ event command: end
	.byte 0x02
EventScript_JP_082015EC: @ 0x082015EC
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x01
	.2byte 0x0184
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201B2F @ EventText_JP_08201B2F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x08201610 @ EventScript_JP_08201610
	.byte 0x02
EventScript_JP_082015FE: @ 0x082015FE
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x01
	.2byte 0x0186
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201B2F @ EventText_JP_08201B2F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: goto
	.byte 0x05
	.4byte 0x082016B3 @ EventScript_JP_082016B3
	.byte 0x02
EventScript_JP_08201610: @ 0x08201610
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0184
	@ event command: givemon
	.byte 0x79
	.2byte 0x0184
	.byte 0x14
	.2byte 0x0000
	.4byte 0x00000000 @ NO
	.4byte 0x00000000 @ NO
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201640 @ EventScript_JP_08201640
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201668 @ EventScript_JP_08201668
	@ event command: goto
	.byte 0x05
	.4byte 0x0824423B
	.byte 0x02
EventScript_JP_08201640: @ 0x08201640
	@ event command: call
	.byte 0x04
	.4byte 0x08201696 @ EventScript_JP_08201696
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082016A9 @ EventScript_JP_082016A9
	@ event command: call
	.byte 0x04
	.4byte 0x082441B5
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x082016A9 @ EventScript_JP_082016A9
	.byte 0x02
EventScript_JP_08201668: @ 0x08201668
	@ event command: call
	.byte 0x04
	.4byte 0x08201696 @ EventScript_JP_08201696
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820168B @ EventScript_JP_0820168B
	@ event command: call
	.byte 0x04
	.4byte 0x082441C1
	@ event command: goto
	.byte 0x05
	.4byte 0x0820168B @ EventScript_JP_0820168B
	.byte 0x02
EventScript_JP_0820168B: @ 0x0820168B
	@ event command: call
	.byte 0x04
	.4byte 0x082441CA
	@ event command: goto
	.byte 0x05
	.4byte 0x082016A9 @ EventScript_JP_082016A9
	.byte 0x02
EventScript_JP_08201696: @ 0x08201696
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x01
	.2byte 0x0184
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x08201B65 @ EventText_JP_08201B65
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x0184
	@ event command: return
	.byte 0x03
EventScript_JP_082016A9: @ 0x082016A9
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C4
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x010B
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082016B3: @ 0x082016B3
	@ event command: setvar
	.byte 0x16
	.2byte 0x4001
	.2byte 0x0186
	@ event command: givemon
	.byte 0x79
	.2byte 0x0186
	.byte 0x14
	.2byte 0x0000
	.4byte 0x00000000 @ NO
	.4byte 0x00000000 @ NO
	.byte 0x00
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082016E3 @ EventScript_JP_082016E3
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820170B @ EventScript_JP_0820170B
	@ event command: goto
	.byte 0x05
	.4byte 0x0824423B
	.byte 0x02
EventScript_JP_082016E3: @ 0x082016E3
	@ event command: call
	.byte 0x04
	.4byte 0x08201739 @ EventScript_JP_08201739
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820174C @ EventScript_JP_0820174C
	@ event command: call
	.byte 0x04
	.4byte 0x082441B5
	@ event command: call
	.byte 0x04
	.4byte 0x08243460
	@ event command: goto
	.byte 0x05
	.4byte 0x0820174C @ EventScript_JP_0820174C
	.byte 0x02
EventScript_JP_0820170B: @ 0x0820170B
	@ event command: call
	.byte 0x04
	.4byte 0x08201739 @ EventScript_JP_08201739
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08243EDB @ gText_Rom_243EDB
	@ event command: callstd
	.byte 0x09
	.byte 0x05
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820172E @ EventScript_JP_0820172E
	@ event command: call
	.byte 0x04
	.4byte 0x082441C1
	@ event command: goto
	.byte 0x05
	.4byte 0x0820172E @ EventScript_JP_0820172E
	.byte 0x02
EventScript_JP_0820172E: @ 0x0820172E
	@ event command: call
	.byte 0x04
	.4byte 0x082441CA
	@ event command: goto
	.byte 0x05
	.4byte 0x0820174C @ EventScript_JP_0820174C
	.byte 0x02
EventScript_JP_08201739: @ 0x08201739
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x01
	.2byte 0x0186
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x08201B65 @ EventText_JP_08201B65
	@ event command: waitmessage
	.byte 0x66
	@ event command: waitfanfare
	.byte 0x32
	@ event command: bufferspeciesname
	.byte 0x7D
	.byte 0x00
	.2byte 0x0186
	@ event command: return
	.byte 0x03
EventScript_JP_0820174C: @ 0x0820174C
	@ event command: setvar
	.byte 0x16
	.2byte 0x40C4
	.2byte 0x0000
	@ event command: setflag
	.byte 0x29
	.2byte 0x010B
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201756: @ 0x08201756
	@ event command: message
	.byte 0x67
	.4byte 0x08201A5F @ EventText_JP_08201A5F
	@ event command: waitmessage
	.byte 0x66
	@ event command: multichoice
	.byte 0x6F
	.byte 0x11
	.byte 0x06
	.byte 0x5D
	.byte 0x00
	@ event command: copyvar
	.byte 0x19
	.2byte 0x8000
	.2byte 0x800D
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0000
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201793 @ EventScript_JP_08201793
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201799 @ EventScript_JP_08201799
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x0002
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820179F @ EventScript_JP_0820179F
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x8000
	.2byte 0x007F
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820179F @ EventScript_JP_0820179F
	@ event command: end
	.byte 0x02
EventScript_JP_08201793: @ 0x08201793
	@ event command: goto
	.byte 0x05
	.4byte 0x082015A4 @ EventScript_JP_082015A4
	.byte 0x02
EventScript_JP_08201799: @ 0x08201799
	@ event command: goto
	.byte 0x05
	.4byte 0x08201546 @ EventScript_JP_08201546
	.byte 0x02
EventScript_JP_0820179F: @ 0x0820179F
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082017A1: @ 0x082017A1
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x40C4
	.2byte 0x0001
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x0820143B @ EventScript_JP_0820143B
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x405A
	.2byte 0x0006
	@ event command: goto_if
	.byte 0x06
	.byte 0x04
	.4byte 0x082017C3 @ EventScript_JP_082017C3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201B99 @ EventText_JP_08201B99
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082017C3: @ 0x082017C3
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201BCC @ EventText_JP_08201BCC
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventText_JP_082017CD: @ 0x082017CD
	.string "いま　ポケモンと　はなせる　どうぐを\nかいはつ　しているのですが……\pなかなか　うまく　いかないね$"
EventText_JP_082017FF: @ 0x082017FF
	.string "いま　しんがたの　モンスターボールを\nかいはつ　しているのですが……\pなかなか　うまく　いかないね$"
EventText_JP_08201831: @ 0x08201831
	.string "しんがたの　モンスターボールが\nついに　かんせい　したのです!\pリピートボールを　つかうと\nいちど　つかまえた　ポケモンが\lつかまえやすく　なります!\pタイマーボールは　ポケモンとの\nたたかいが　ながびけば　ながびくほど\lつかまえやすく　なります!\pどちらも　わがしゃの　じしんさく\nぜひ　つかって　ください!$"
EventText_JP_082018CD: @ 0x082018CD
	.string "ポケナビを　つくったのは　わたし!\pいやー　あんな　すごいモノを　つくれると\nかいはつしゃ　みょうりに　つきますね!$"
EventText_JP_08201908: @ 0x08201908
	.string "おお!　それは　ポケナビ!\pポケモンの　きもちを　しりたい\nという　しゃちょうの　アイデアを\lじつげん　したのです!\pくわしい　せつめいを　しましょうか?\p……　いやいや\nそのうちに　わかるでしょう!\lどんどん　ポケナビを　つかってくださいね!$"
EventText_JP_08201983: @ 0x08201983
	.string "いま　ポケモンが　みている\nゆめを　うつしだす　どうぐを\lかいはつ　しているのですが……\pなかなか　うまく　いかないね$"
EventText_JP_082019BF: @ 0x082019BF
	.string "いま　ポケモンの　かせきを\nさいせい　する　そうちを\lかいはつ　していたのですが……\pなかなか　うまく　いきましたよ!$"
EventText_JP_082019FB: @ 0x082019FB
	.string "きみの　もっている　それは\nポケモンの　かせき!?\pよければ　わたしが　つくった\nカセキ　さいせい　マシンで\lいきかえらせて　みましょうか?$"
EventText_JP_08201A42: @ 0x08201A42
	.string "あー　そうですか\pデボンの　ぎじゅつは　すごいのにな……$"
EventText_JP_08201A5F: @ 0x08201A5F
	.string "なんとまあ!\nかせきを　ふたつも　もってるんですか!\pでも　わたしの　マシンでは\nひとつづつ　しか　さいせい　できません\pどちらの　かせきを　かして　くれますか?$"
EventText_JP_08201AB1: @ 0x08201AB1
	.string "わかりました!\nでは　さっそく……\p{PLAYER}は　デボンの　けんきゅういんに\n{STR_VAR_1}を　あずけた!$"
EventText_JP_08201ADF: @ 0x08201ADF
	.string "わたしが　つくった\nカセキ　さいせい　マシンは　すごいのですが\lじかんが　かかるのが　けってん……\pすこし　そこらへんを\nけんがく　なされては　いかがですか?$"
EventText_JP_08201B2F: @ 0x08201B2F
	.string "おまたせ　しました!\nカセキが　いきかえり　ましたよ!\pカセキは　おおむかしの　ポケモン\n{STR_VAR_2}　でしたよ!$"
EventText_JP_08201B65: @ 0x08201B65
	.string "{PLAYER}は　デボンの　けんきゅういんから\n{STR_VAR_2}を　うけとった!$"
EventText_JP_08201B83: @ 0x08201B83
	.string "あー　ポケモン　いっぱいで\nもてないですね$"
EventText_JP_08201B99: @ 0x08201B99
	.string "いま　ポケナビに　ついかする　きのうを\nかいはつ　しているのですが……\pなかなか　うまく　いかないね$"
EventText_JP_08201BCC: @ 0x08201BCC
	.string "さーて　つぎは　どんな　そうちを\nかいはつ　しようかな……\pうちの　かいしゃは　ひらめいた　アイデアを\nどんどん　じつげん　させて　くれるから\lけんきゅうしゃ　みょうりに　つきますよ!$"
MapScripts_JP_08201C29: @ 0x08201C29
	@ map script dispatch table
	.byte 0x03
	.4byte EventScript_JP_08201C39
	.byte 0x04
	.4byte MapScriptTable_JP_08201C51
	.byte 0x02
	.4byte MapScriptTable_JP_08201C60
	.byte 0
EventScript_JP_08201C39: @ 0x08201C39
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x408F
	.2byte 0x0000
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08201C45 @ EventScript_JP_08201C45
	@ event command: end
	.byte 0x02
EventScript_JP_08201C45: @ 0x08201C45
	@ event command: setobjectxyperm
	.byte 0x63
	.2byte 0x0002
	.2byte 0x0003
	.2byte 0x0002
	@ event command: setobjectmovementtype
	.byte 0x65
	.2byte 0x0002
	.byte 0x09
	@ event command: return
	.byte 0x03
MapScriptTable_JP_08201C51: @ 0x08201C51
	@ conditional map script table
	.2byte 0x408F, 0x0000
	.4byte EventScript_JP_08201C5B
	.2byte 0
EventScript_JP_08201C5B: @ 0x08201C5B
	@ event command: turnobject
	.byte 0x5B
	.2byte 0x00FF
	.byte 0x04
	@ event command: end
	.byte 0x02
MapScriptTable_JP_08201C60: @ 0x08201C60
	@ conditional map script table
	.2byte 0x408F, 0x0000
	.4byte EventScript_JP_08201C6A
	.2byte 0
EventScript_JP_08201C6A: @ 0x08201C6A
	@ event command: lockall
	.byte 0x69
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820213E @ EventText_JP_0820213E
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08201D42 @ Movement_JP_08201D42
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: delay
	.byte 0x28
	.2byte 0x0050
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08201D4B @ Movement_JP_08201D4B
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202212 @ EventText_JP_08202212
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: playbgm
	.byte 0x33
	.2byte 0x01A4
	.byte 0x00
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08201D30 @ Movement_JP_08201D30
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08201D54 @ Movement_JP_08201D54
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202239 @ EventText_JP_08202239
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: fadedefaultbgm
	.byte 0x35
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x0002
	.4byte 0x08201D3F @ Movement_JP_08201D3F
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x00FF
	.4byte 0x08201D62 @ Movement_JP_08201D62
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201E05 @ EventText_JP_08201E05
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0112
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8001
	.2byte 0x0001
	@ event command: callstd
	.byte 0x09
	.byte 0x00
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201EE9 @ EventText_JP_08201EE9
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: playfanfare
	.byte 0x31
	.2byte 0x0172
	@ event command: message
	.byte 0x67
	.4byte 0x08201F3E @ EventText_JP_08201F3E
	@ event command: waitfanfare
	.byte 0x32
	@ event command: setflag
	.byte 0x29
	.2byte 0x0862
	@ event command: setflag
	.byte 0x29
	.2byte 0x00BC
	@ event command: setflag
	.byte 0x29
	.2byte 0x03E7
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08201F4F @ EventText_JP_08201F4F
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: call
	.byte 0x04
	.4byte 0x0824310F
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202015 @ EventText_JP_08202015
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x037E
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0327
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x03D7
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x02E3
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x0371
	@ event command: setvar
	.byte 0x16
	.2byte 0x4096
	.2byte 0x0001
	@ event command: clearflag
	.byte 0x2A
	.2byte 0x032E
	@ event command: setvar
	.byte 0x16
	.2byte 0x408F
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0006
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
	.byte 0x09, 0x09, 0x09, 0x27, 0xFE
Movement_JP_08201D30: @ 0x08201D30
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x27 @ walk_in_place_fastest_left
	.byte 0xFE @ step_end
Movement_JP_08201D3F: @ 0x08201D3F
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x25 @ walk_in_place_fastest_down
	.byte 0xFE @ step_end
Movement_JP_08201D42: @ 0x08201D42
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08201D4B: @ 0x08201D4B
	@ object movement sequence
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x09 @ walk_up
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0x0A @ walk_left
	.byte 0xFE @ step_end
Movement_JP_08201D54: @ 0x08201D54
	@ object movement sequence
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x08 @ walk_down
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0x0B @ walk_right
	.byte 0xFE @ step_end
Movement_JP_08201D62: @ 0x08201D62
	@ object movement sequence
	.byte 0x14 @ delay_16
	.byte 0x14 @ delay_16
	.byte 0x08 @ walk_down
	.byte 0x08 @ walk_down
	.byte 0x28 @ walk_in_place_fastest_right
	.byte 0xFE @ step_end
EventScript_JP_08201D68: @ 0x08201D68
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0110
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201DC8 @ EventScript_JP_08201DC8
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00BD
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201D91 @ EventScript_JP_08201D91
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202037 @ EventText_JP_08202037
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201D91: @ 0x08201D91
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202047 @ EventText_JP_08202047
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x00B6
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
	.2byte 0x0110
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820208A @ EventText_JP_0820208A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201DC8: @ 0x08201DC8
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082020E6 @ EventText_JP_082020E6
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: closemessage
	.byte 0x68
	@ event command: applymovement
	.byte 0x4F
	.2byte 0x800F
	.4byte 0x08243625 @ PetalburgCity_Ext_FaceOriginalDirection
	@ event command: waitmovement
	.byte 0x51
	.2byte 0x0000
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201DDD: @ 0x08201DDD
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0100
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x08201DF2 @ EventScript_JP_08201DF2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202241 @ EventText_JP_08202241
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201DF2: @ 0x08201DF2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202277 @ EventText_JP_08202277
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_08201DFC: @ 0x08201DFC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082022A7 @ EventText_JP_082022A7
	@ event command: callstd
	.byte 0x09
	.byte 0x03
	@ event command: end
	.byte 0x02
EventText_JP_08201E05: @ 0x08201E05
	.string "わしが　デボン　コーポレーション\nしゃちょうの　ツワブキ　だ!\pきみの　ことは　さっき　きいたよ!\pなんでも　うちの　けんきゅういんを\n2ども　たすけてくれた　とか\p……で　そんな　すごい　きみに\nたのみごとを　したいのだ!\pきみは　にもつを　とどけに\nカイナの　ぞうせんじょに　いくんだろう?\pその　とちゅうに\nムロタウンにも　よって　ほしいのだよ!\pいやー　ムロタウンに\nダイゴという　おとこが　いるはずでね\lちょいと　てがみを　とどけてほしいのだ!$"
EventText_JP_08201EE9: @ 0x08201EE9
	.string "ツワブキ“もちろん　わしは\nすごーい　しゃちょうで　あるからな!\pただで　おねがいすると　いうような\nケチな　まねは　しないのだ!\pきみに　こいつを　プレゼントしよう!$"
EventText_JP_08201F3E: @ 0x08201F3E
	.string "{PLAYER}は\nポケナビを　てにいれた!$"
EventText_JP_08201F4F: @ 0x08201F4F
	.string "ツワブキ“そいつは……\pポケモン　ナビゲーター!\nりゃくして　ポケナビ　といってな\pぼうけんを　する　トレーナーの\nひつじゅひん　なのだよ!\pそいつで　ホウエンマップを　みれば\nムロや　カイナの　ばしょ　だって\lばっちり　わかると　いうものだ!\p……さいきんは　アクアだの　マグマだの\nといった　あやしげな　れんちゅうが\lあちこちで　わるさを　してるらしい\pまずは　ひとやすみ　していきなさい!$"
EventText_JP_08202015: @ 0x08202015
	.string "ツワブキ“それでは　{PLAYER}{KUN}\nじゅうぶん　きをつけて　いくのだよ!$"
EventText_JP_08202037: @ 0x08202037
	.string "ツワブキ“よろしく　たのむよ!$"
EventText_JP_08202047: @ 0x08202047
	.string "ツワブキ“てがみを　とどけて　くれたんだね\nいやいや　ありがとう!\pこいつは　おれい　だよ\nトレーナーの　きみに　やくだつ　はずだ!$"
EventText_JP_0820208A: @ 0x0820208A
	.string "ツワブキ“がくしゅうそうちを　もたせた\nポケモンは　しょうぶを　しなくても\lけいけんちを　わけて　もらえる!\pよわい　ポケモンを　そだてるのに\nなかなか　べんりな　どうぐ　なのだよ!$"
EventText_JP_082020E6: @ 0x082020E6
	.string "ツワブキ“わたしは　わかいころ　から\nしごと　ばかり　だったから\lいまいち　わからんのだが……\pわかものは　やはり　トレーナーとして\nポケモンリーグを　めざす　もの　なのかね$"
EventText_JP_0820213E: @ 0x0820213E
	.string "ここが　デボン　コーポレーション　3かい\nしゃちょうの　おへや　なのよね!\pいやー!　きみには\nかんしゃ　かんげき　あめ　あられ　なのです\pところで……　きみが\nとりもどしてくれた　にもつ\pそいつを　カイナシティの　ぞうせんじょ\nつまり　ふねの　こうじょうへ\lとどけて　ほしいのです!\pまた　おかしな　やつらに\nうばわれては　たまりません　からね\pえへへ……\nよろしく　おねがい　しますよ\pちょっと　まっていて　くださいね$"
EventText_JP_08202212: @ 0x08202212
	.string "しゃちょうが　ぜひ\nおはなし　したいそうです\pわたしに　ついて　きてください$"
EventText_JP_08202239: @ 0x08202239
	.string "ささ　どうぞ!$"
EventText_JP_08202241: @ 0x08202241
	.string "カイナの　ぞうせんじょ　には\nクスノキさん　という　ひとが　いるから\lかれを　たずねていくと　いいですよ!$"
EventText_JP_08202277: @ 0x08202277
	.string "デボンの　しんせいひん\nリピートボールと　タイマーボール\lトレーナーに　だいにんき　なのよね!$"
EventText_JP_082022A7: @ 0x082022A7
	.string "しゃちょうの　あつめた\nめずらしい　いしが　かざってある!$"
	.byte 0x00
EventScript_JP_082022C6: @ 0x082022C6
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x01
	.2byte 0x0109
	.2byte 0x0000
	.4byte 0x08202722 @ gText_Rom_202722
	.4byte 0x082027A3 @ gText_Rom_2027A3
	.4byte 0x082022FB @ EventScript_JP_082022FB
	@ event command: specialvar_
	.byte 0x26
	.2byte 0x800D
	.2byte 0x0039
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x800D
	.2byte 0x0001
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x0820235D @ EventScript_JP_0820235D
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x00A5
	@ event command: goto_if
	.byte 0x06
	.byte 0x00
	.4byte 0x08202339 @ EventScript_JP_08202339
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820295A @ gText_Rom_20295A
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082022FB: @ 0x082022FB
	@ event command: message
	.byte 0x67
	.4byte 0x08202830 @ gText_Rom_202830
	@ event command: waitmessage
	.byte 0x66
	@ event command: call
	.byte 0x04
	.4byte 0x0824310A
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202849 @ gText_Rom_202849
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: setflag
	.byte 0x29
	.2byte 0x04F0
	@ event command: setflag
	.byte 0x29
	.2byte 0x0867
	@ event command: setvar
	.byte 0x16
	.2byte 0x405A
	.2byte 0x0001
	@ event command: addvar
	.byte 0x17
	.2byte 0x4085
	.2byte 0x0001
	@ event command: setvar
	.byte 0x16
	.2byte 0x8008
	.2byte 0x0001
	@ event command: call
	.byte 0x04
	.4byte 0x08242FCF
	@ event command: compare_var_to_value
	.byte 0x21
	.2byte 0x4085
	.2byte 0x0006
	@ event command: call_if
	.byte 0x07
	.byte 0x01
	.4byte 0x08242F10
	@ event command: goto
	.byte 0x05
	.4byte 0x08202339 @ EventScript_JP_08202339
	.byte 0x02
EventScript_JP_08202339: @ 0x08202339
	@ event command: setorcopyvar
	.byte 0x1A
	.2byte 0x8000
	.2byte 0x0147
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
	.2byte 0x00A5
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082028BA @ gText_Rom_2028BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_0820235D: @ 0x0820235D
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x07
	.2byte 0x0109
	.2byte 0x0000
	.4byte 0x08202ACB @ gText_Rom_202ACB
	.4byte 0x08202B2A @ gText_Rom_202B2A
	.4byte 0x08202B8B @ gText_Rom_202B8B
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202B41 @ gText_Rom_202B41
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_08202378: @ 0x08202378
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0140
	.2byte 0x0000
	.4byte 0x08202612 @ gText_Rom_202612
	.4byte 0x08202636 @ gText_Rom_202636
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202647 @ gText_Rom_202647
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_0820238F: @ 0x0820238F
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x0141
	.2byte 0x0000
	.4byte 0x08202665 @ gText_Rom_202665
	.4byte 0x0820268E @ gText_Rom_20268E
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x0820269A @ gText_Rom_20269A
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_082023A6: @ 0x082023A6
	@ event command: trainerbattle
	.byte 0x5C
	.byte 0x00
	.2byte 0x023B
	.2byte 0x0000
	.4byte 0x082026C0 @ gText_Rom_2026C0
	.4byte 0x082026DB @ gText_Rom_2026DB
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082026F4 @ gText_Rom_2026F4
	@ event command: callstd
	.byte 0x09
	.byte 0x06
	@ event command: end
	.byte 0x02
EventScript_JP_082023BD: @ 0x082023BD
	@ event command: lock
	.byte 0x6A
	@ event command: faceplayer
	.byte 0x5A
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x04F0
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082023D2 @ EventScript_JP_082023D2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202432 @ gText_Rom_202432
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082023D2: @ 0x082023D2
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x08202581 @ gText_Rom_202581
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: release
	.byte 0x6C
	@ event command: end
	.byte 0x02
EventScript_JP_082023DC: @ 0x082023DC
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0867
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082023FC @ EventScript_JP_082023FC
	@ event command: goto
	.byte 0x05
	.4byte 0x08202406 @ EventScript_JP_08202406
	.byte 0x02
EventScript_JP_082023EC: @ 0x082023EC
	@ event command: lockall
	.byte 0x69
	@ event command: checkflag
	.byte 0x2B
	.2byte 0x0867
	@ event command: goto_if
	.byte 0x06
	.byte 0x01
	.4byte 0x082023FC @ EventScript_JP_082023FC
	@ event command: goto
	.byte 0x05
	.4byte 0x08202406 @ EventScript_JP_08202406
	.byte 0x02
EventScript_JP_082023FC: @ 0x082023FC
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082029BA @ gText_Rom_2029BA
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
EventScript_JP_08202406: @ 0x08202406
	@ event command: loadword
	.byte 0x0F
	.byte 0x00
	.4byte 0x082029AB @ gText_Rom_2029AB
	@ event command: callstd
	.byte 0x09
	.byte 0x04
	@ event command: releaseall
	.byte 0x6B
	@ event command: end
	.byte 0x02
